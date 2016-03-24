/* Library originally added 27 March 2016
 by Er.Yerram Vinay Kumar
 library modified 1 Apr 2016
 by Er.Vinay 
 example added 12 Apr 2016
 by Gautham Kumar Reddy
  This example code is in the public domain.
 (link)
 */

#include <l293d.h> // include the library code:
void setup()
{
  // in1,in2,in3,in4 of L293d to Digital pins 0,1,2,3 of arduino
  dc_Init(0,1,2,3);
}
void loop()
{
//  front();
  //delay(500);
  
  left(); //To move left
  
  delay(500);
  //right();
 //delay(500);
  //back();
}

