//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules



void main(void)
{
	unsigned char  var;
	
	unsigned char rows, cols;
	LED_1_Start();
    LED_2_Start();
    LED_3_Start();
    LED_4_Start();
    LED_5_Start();
    LED_6_Start();
    LED_7_Start();
    LED_8_Start();
	
	
	while (1){
	PRT4DR=0x0F;
	  rows=PRT4DR;
	
	
	PRT4DR=0xF0;
	  cols=PRT4DR;
	
	var=rows & cols;
	
	//if (var==0x18){
		
		
		//LED_1_Switch(1);
	
  	//} else if (var==0x14){
       //     LED_1_Switch(0); 
        //}
	
	
	
		switch (var) {
			case 0x18:
				LED_1_Switch(1);
        
       		 break;
    case 0x14:
        LED_2_Switch(1);
        
       		 break;
        
				
				
				case 0x12:
				LED_3_Switch(1);
        
       		 break;
				case 0x11:
				LED_4_Switch(1);
        
       		 break;
				
				case 0x28:
				
				LED_5_Switch(1);
        
       		 break;
				case 0x24:
				
				LED_6_Switch(1);
        
       		 break;
				case 0x22:
				LED_7_Switch(1);
        
       		 break;
				
				case 0x21:
    LED_8_Switch(1);
        
       		 break;
				
				
				
				//éteindre
				
				
				
				
				
				
				
				
				
				
	
	
		
			case 0x48:
				LED_1_Invert();
        
       		 break;
    case 0x44:
       LED_2_Invert();
        
       		 break;
        
				
				
				case 0x42:
				LED_3_Invert();
        
       		 break;
				case 0x41:
				LED_4_Invert();
       		 break;
				
				case 0x88:
				
				LED_5_Invert();
        
       		 break;
				case 0x84:
				
				LED_6_Invert();
        
       		 break;
				case 0x82:
				LED_7_Invert();
        
       		 break;
				
				case 0x81:
				LED_8_Invert();
   
        
       		 break;
				
				
 
				
				
				
				
        
}
} }

