# ECG-Project
Portable heart monitoring device connected to mobile/tablet via Bluetooth with Android application created using MIT app inventor.

The idea for my project came from a conversation during a family meal with friends. One of the friends was telling a story about an episode that happened at work. This friend is a paramedic working in a busy  Spanish city that has many high-rise blocks of flats. Many of these blocks of flats don't have lifts. One night he was called to an emergency on a fifth floor flat without a lift. An elderly man had apparently suffered a heart attack. They managed to restart his heart but where left with the logistical problem of safely getting the gentleman to hospital. All there monitoring devices are heavy and impossible to carry when lifting a patient down stairs. They were forced to disconnect for the lengthy process of moving to the ground floor leaving the patient vulnerable during this time. I decided I wanted to build a small portable device that would connect to a mobiles phone for these occasions. 

I found a board (AD8232 module) on the Internet and found standard arduino code for this module which I uploaded (first demo). 
My project for this competition starts at this point. I have mapped the output signal from the heartbeat monitoring board to a 0-5v output. I connected a Bluetooth device to the arduino and successfully paired the device to my android tablet. Using the MIT app inventor I've created an app that successfully links via Bluetooth the arduino to the android device, reads and graphically interprets the 0-5v heart value. 

In the future I will incorporate alarms into the app and complete the project by designing and 3d printing a container to house the heartbeat board, arduino and Bluetooth module.

