import time
current_time = time.localtime()
hour = current_time.tm_hour
minute = current_time.tm_min
print(hour,':',minute)
if hour>8 or (hour==8 and minute>45):print('''It's time to wake up\nArise and Shine\nThe new day holds alot of good things for you''')
else:
    print('Go back bed')
    print('Keep resting')
count = 0
while count < 7:
    print('Inside loop')
    count = count+1
    if count == 3:
        break
print('Outside loop')

times_value= 3
for count in range(1,13):
    if count==10:print('Tres bien')
    result = times_value*count
    print(count,'*',times_value,'=',result)
    
for every_letter in 'my name is naa':
    print(every_letter)
    
def greeter():
    print('hello love')
    
def morning_message():
    print('hola bebe,how are you doing?')
    
    




    