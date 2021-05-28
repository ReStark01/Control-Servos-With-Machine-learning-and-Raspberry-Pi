import processing.io.*;  // Importing the library to control the GPIO pins of raspberry pi

// Below libraries will help in connecting and sending, receiving the values from wekinator
import oscP5.*;  
import netP5.*;

// Creating the instances
OscP5 oscP5;
NetAddress dest;

// Variable to store the output
public int output;
public int output1;
// Creating the instances to control the servo
SoftwareServo servo1;
SoftwareServo servo2;

void setup() 
{
  // Initializing the pins for servo
  servo1 = new SoftwareServo(this);
  servo1.attach(17);
  servo2 = new SoftwareServo(this);
  servo2.attach(4);
  
  // Starting the communication with wekinator. listen on port 12000, return messages on port 6448
  oscP5 = new OscP5(this, 12000); 
  dest = new NetAddress("127.0.0.1", 6448);
}

// Recieve OSC messages from Wekinator
void oscEvent(OscMessage theOscMessage) {
  if (theOscMessage.checkAddrPattern("/wek/outputs") == true) {
    // Receiving the output from wekinator
    float value = theOscMessage.get(0).floatValue(); // First output
    float val = theOscMessage.get(1).floatValue();  
    
    // Converting the output to int type
      output = int(value);
      output1 = int(val);
  }
}

void draw() 
{
  if (output > 0 && output < 180)
  {
  servo1.write(output);
  }
  if (output1 > 0 && output1 < 180)
  {
  servo2.write(output1);
  }
}
