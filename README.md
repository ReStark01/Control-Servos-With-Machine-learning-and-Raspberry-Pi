# Control-Servos-With-Machine-learning-and-Raspberry-Pi
Use the machine learning program Wekinator to control servo motors connected through a Raspberry Pi.

MATERIALS :

  HARDWARE:
    Raspberry Pi
    Servo motors
    
  SOFTWARE:
    Wekinator
    
CIRCUIT DIAGRAM :
  Connect the red wires of both the servos to the 5V GPIO pins of Raspberry Pi. Then connect the black wires of both the servos to the ground of Raspberry Pi. In the end, connect the yellow wire from one of the servos to the GPIO 4 of the Raspberry Pi and yellow wire from the other servo to the GPIO 17 of Raspberry Pi.
  
  ![image](https://user-images.githubusercontent.com/67792642/119983891-4c4a0200-bfb0-11eb-9bfd-e66318689b68.png)

HOW TO RUN THE PROGRAM :
  First of all, you will need to download the sketch from the quick walkthrough page of Wekinator. http://www.wekinator.org/walkthrough/

Download the on-screen mouse control example from there. Unzip it and open sketch in processing. This sketch will give the input to the Wekinator. You will need another sketch to get the output from the Wekinator. Paste that into processing and run it. Both the processing output windows will look like shown below.

![image](https://user-images.githubusercontent.com/67792642/119984322-cb3f3a80-bfb0-11eb-8f6a-49515771d36f.png)

Now open the Wekinator and make the settings as shown in the below figure. Set the inputs and outputs to 2 and then set the type to “custom” and click on “configure”.
![image](https://user-images.githubusercontent.com/67792642/119984435-e90c9f80-bfb0-11eb-9ffc-cf18f2590693.png)

When you will click on “configure”, a new window will open up. Change the settings in that window as shown in the below figure.
![image](https://user-images.githubusercontent.com/67792642/119984517-05104100-bfb1-11eb-917a-c510688959cd.png)

Now drag the green box in the processing window to the left center side and set the settings in the Wekinator window as shown below. After that, start the recording for half a second.
![image](https://user-images.githubusercontent.com/67792642/119984615-1e18f200-bfb1-11eb-859e-c77b5c4e2d83.png)

Now drag the green box in the processing window to the right center side and set the settings in the Wekinator window as shown below. After that, start the recording for half a second.
![image](https://user-images.githubusercontent.com/67792642/119984686-3426b280-bfb1-11eb-8f8e-e7583a434b06.png)

Now drag the green box in the processing window to the center top and set the settings in the Wekinator window as shown below. After that, start the recording for half a second.
![image](https://user-images.githubusercontent.com/67792642/119984752-49034600-bfb1-11eb-9625-ef3e24b10d0f.png)

Now drag the green box in the processing window to the bottom center side and set the settings in the Wekinator window as shown below. After that, start the recording for half a second.
![image](https://user-images.githubusercontent.com/67792642/119984808-5e787000-bfb1-11eb-935e-cb845701626a.png)

Click on “Train”, then click on “Run”. Now when you drag the green box in the processing window, the servos connected to the GPIO pins of the Raspberry Pi will move according to that.
