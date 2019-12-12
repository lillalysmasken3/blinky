#include <windows.h>
//#include <lm4f120h5qr.h>
#include <tm4c_cmsis.h>

int main() 
{
	/*
	 GPIO_PORTF_AHB_DIR_R=0xE;//direction for bit 2,3,4 (rgb) //block Fx4005D0000
	GPIO_PORTF_AHB_DEN_R=0xE;//enable output 2,3,4 (rgb) //offsett 0x400 //block Fx4005D0000
	SYSCTL_RCGCGPIO_R=0x20;//enable bit 5	//block 0x400FE0000 //offset 0x608
	 */
	
	GPIOF->DIR = 0xE;
	GPIOF->DEN = 0XE;
	SYSCTL->RCGC2 = 0x20;
	
	
	
	
 //TODO Add the needed pointers to the needed addresses to init the microcontroller. 
 //That is the base, DIR, DEN. You can also include the header file and use those macros/defines if you dont want to declare them yourselfs
 
    while (1) 
		
	{
		/*
		GPIO_PORTF_AHB_DATA_BITS_R=0x02;
		Sleep(1);
		GPIO_PORTF_AHB_DATA_BITS_R=0x04;
		Sleep(1);
		GPIO_PORTF_AHB_DATA_BITS_R=0x08;
		Sleep(1);
		*/
		
		GIPO->DATA=0x02;
		Sleep(1);
		GPIO->DATA=0x04;
		Sleep(1);
		GPIO->DATA=0x08;
		Sleep(1);
	  

    }
    //return 0;
}
