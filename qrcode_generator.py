import PySimpleGUI as psg
import qrcode

layout = [[psg.Text('Enter url:',text_color = 'purple',background_color='pink')] ,[psg.InputText(key= 'input')],
          [psg.Button('Create', key = 'create',button_color='purple'), psg.Button('Exit', key = 'exit',button_color='purple')]]


window = psg.Window('QR Code Generator', layout,background_color='pink')

while True:
    event, values = window.read()

    if event == psg.WINDOW_CLOSED:
        break

    if event == 'exit':
        break
    
    if event == 'create':
        text = values['input']


qr = qrcode.QRCode(version=1, box_size=10, border=5)
qr.add_data(text)
qr.make(fit=True)
img = qr.make_image(fill_color="black", back_color="white")
img.show()


try:
    img.show()
except:
    psg.popup_error("Error: Unable to generate QR code.")
finally:
    print('QR code generated successfully')
    psg.popup('QR code generated!', image=img_file)

window.close()