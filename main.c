//!#include <main.h>
#include<16F877A.h>
#use delay(clock=2000000)
#fuses NOWDT,XT,NOPROTECT,NOLVP,NOPUT,NOBROWNOUT
#byte PORTB=0x06
#byte TRISB=0x86
#byte T1CON=0x10
#byte TMR1L=0x0e
#byte TMR1H=0x0f
#byte PIE1=0x8c
#byte PIR1=0x0c
#byte INTCON=0x0b
#INT_TIMER1
void timer1_isr(void)
{
if(PIR1&0x01)
   {
      PORTB^=0x02;
   }
   PIR1=0x00;
}
void main()
{
   //Initialise portB
   TRISB=0x00;
   //Initialise TMR1 parameters
   T1CON=0x00;
   //enable global and peripheralInterrupts
   INTCON|=0xc0;
   //initialise PIE andPIR parameters
   PIE1|=0x01;
   //set flag initially to Zero
   PIR1=0x00;
   //set initial  count value to TMR1
   TMR1L=0x00;
   TMR1H=0x00;
   //start the timer
   T1CON=0x01;
   while(TRUE)
   {


      //TODO: User Code
   }

}
