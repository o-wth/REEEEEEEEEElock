# REEEEEEEEEElock

Aight look. The REEEEEEEEEEgun is great for keeping people from going near your door to your room, but doesn't necessarily stop them once they get there. Once someone gets close enough to your door to avoid the REEEEEEEEEEgun, then RIP ur search history. To combat this, I created the REEEEEEEEEElock, which is an arduino-powered smart locking mechanism which uses facial identification to allow someone to enter your room. 


To build it, you need an Arduino, a servo motor, an external camera, some basic building materials, and a computer with python. 


So first make a "lock", which in my case was just four wooden skewers attached to one another with scotch tape (as you can tell I am an expert engineer). I taped that onto a servo motor attachment which was then attached to the servo. After that I wired the servo to pin 11 on my arduino and taped the whole thing to my wall such that the default position for the arduino would have the lock blocking the door from opening. Place the external camera anywhere outside such that it would capture the face of anyone who would try to open the door. 


Finally, upload the .ino file to your arduino and simultaneously run REEEEEEEEEElock.py. 


*Note, keep in mind all the notes from REEEEEEEEEEgun bc they all mostly apply. Change the arduino port make servo adjustments etc.

*Note, you need to make sure that your face is the one being recognized and so if you don't want to change your code at all then take a picture of yourself and name it 'obama.jpg' and maybe a picture of your friend or dad or brother and name it 'biden.jpg'


TODO: get another raspberry pi camera module so I don't have to use my own computer
TODO: make the lock look nicer
