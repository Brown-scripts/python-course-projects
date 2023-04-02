import PySimpleGUI as psg
import pyttsx3

voice = pyttsx3.init()
voice_type = voice.getProperty('voices')



layout = [    [psg.Text('Choose Voice Type:',text_color='purple',background_color='pink'),psg.Radio('Male', 'RADIO1', default=True, key='male',background_color='pink',text_color = 'black'),psg.Radio('Female', 'RADIO1', key='female',background_color='pink',text_color = 'black')],
     [psg.Text('Enter text to speak:',text_color='black',background_color='pink',)],
          
    [psg.InputText(key='input'),psg.Button('Speak',button_color='purple')],
   
    
]

window = psg.Window('Text To Speech App', layout,background_color='pink')

while True:
    event, values = window.read()
    if event == psg.WINDOW_CLOSED:
        break
    elif event == 'Speak':
        text = values['input']
        if values['male']:
            voice.setProperty('voice', voice_type[0].id)
        elif values['female']:
           voice.setProperty('voice', voice_type[1].id) 
    
        voice.say(text)
        voice.runAndWait()

window.close()