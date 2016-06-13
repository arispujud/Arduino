/*
Thank's to www.arispujud.com, ROBOTIC TELKOM SCHOOL OF APPLIED SCIENCE, TELKOM UNIVERSITY
This is example code for seven segment component.
In this code use pin:
7 Segment ==> Arduino
  A       ==>  2
  B       ==>  3
  C       ==>  4
  D       ==>  5
  E       ==>  6
  F       ==>  7
  G       ==>  8

You must set, what common are your seven segment component? (Anode or Catode)
*/
#include <Segment7.h>

//Set your pin (A,B,C,D,E,F,G)
Segment7 Segment(2,3,4,5,6,7,8); 
void setup() {
  //Set Your Seven Segment Common (Anode or Cathode)
  Segment.Common(Segment.Cathode);
}

void loop() {
  // Example code for counting from 0 to 9
  for(int i=0; i<=9; i++){ 
    //Displaying your seven segment 
    Segment.Value(i); //in variable i. You can set value from 0 to 9
    delay(1000);
  }
}
