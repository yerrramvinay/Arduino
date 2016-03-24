#include "l293d.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"

int dp0, dp1, dp2, dp3;
void dc_Init(int d0, int d1, int d2, int d3)
{
	dp0=d0;dp1=d1;dp2=d2;dp3=d3;
	pinMode(dp0, OUTPUT);
	pinMode(dp1, OUTPUT);
	pinMode(dp2, OUTPUT);
	pinMode(dp3, OUTPUT);
}
void front()
{
	digitalWrite(dp0,HIGH); 
	digitalWrite(dp1,LOW); 
	digitalWrite(dp2,HIGH); 
	digitalWrite(dp3,LOW); 
 }
 
 void left()
{
	digitalWrite(dp0,LOW); 
	digitalWrite(dp1,LOW); 
	digitalWrite(dp2,HIGH); 
	digitalWrite(dp3,LOW); 
}
void right()
{
	digitalWrite(dp0,HIGH); 
	digitalWrite(dp1,LOW);
	digitalWrite(dp2,LOW); 
	digitalWrite(dp3,LOW); 
	
}
 void back()
 {
    digitalWrite(dp0,LOW); 
    digitalWrite(dp1,HIGH); 
    digitalWrite(dp2,LOW); 
    digitalWrite(dp3,HIGH);
} 
 
