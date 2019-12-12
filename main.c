#include <windows.h>


#define GPIO_DIR_F_RGB        (*((volatile unsigned long *)0x4005D400)) //gpio direction //offset 0x400
#define GPIO_DEN_F_RGB       (*((volatile unsigned long *)0x4005D51C)) //Data enable //offset 0x51C
#define SYSCTL_RCGCGPIO       (*((volatile unsigned long *)0x400FE608)) //Run mode Clock Gate Control //offset 0x608
#define GPIO_DATA_F_RGB		  (*((volatile unsigned long *)0x4005D000)) //send data to this one //offset 0x0




int main() 
{
	SYSCTL_RCGCGPIO=0x20; //enable bit 5	//block 0x400FE0000 //offset 0x608
	GPIO_DIR_F_RGB=0xE; //direction for bit 2,3,4 (rgb) //block Fx4005D0000
	GPIO_DEN_F_RGB=0xE;//enable 2,3,4 (rgb) //offsett 0x400 //block Fx4005D0000
	
	
 //TODO Add the needed pointers to the needed addresses to init the microcontroller. 
 //That is the base, DIR, DEN. You can also include the header file and use those macros/defines if you dont want to declare them yourselfs
 
    while (1) 
		
	{
		GPIO_DATA_F_RGB=0x02;
		sleep(1);
		GPIO_DATA_F_RGB=0x04;
		sleep(1);
		GPIO_DATA_F_RGB=0x08;
		sleep(1);
      //TODO add logic to set the GPIO_PORTF_DIR_R data so R/G/B can be turned on/off
	  

    }
    //return 0;
}
