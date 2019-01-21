/*
 * Code_1.c
 *
 * Created: 03/01/2019 7:51:40 PM
 * Author : admin
 * Date: 03.01.2018
 * checking here is SRAM/Data memory uses
 * Date: 14.01.2018 
 * edited for simplification and read the how memory stores in MCU 
 *
 * 21.01.2019
 * edited for Example of Different Data Types and Sizes - ref - atmel-42787-avr-software-user-guide_applicationnote_avr42787.pdf 
 * NOTE: this example is given but not working as intended. see pdf for more details
 *
 * 21.01.2019
 * eddited for Example of Global Variables and Local Variables
 * 
 */

/*

while using global variable

		   text	   data	    bss	    dec	    hex	filename
		   170	      0	      2	    172	     ac	Code_1.elf
		   
		   In the first example, we have declared a Byte-sized global variable. The output from the avr-size utility
		   shows that we use 104 bytes of code space and 1 byte of data space with optimization level -Os
		   (Optimize for size).
		   
while using local variable 

		   text	   data	    bss	    dec	    hex	filename
		   142	      0	      0	    142	     8e	Code_1.elf	
		   
		   In the second example, after we declared the variable inside main() function as local variable, the code
		   space is reduced to 84 bytes and no SRAM is used.	   
*/


#include <avr/io.h>

#define DATATYPE unsigned int
//#define DATATYPE unsigned char //macro is defined to switch from char to int data type


//DATATYPE global_1;//global variable declaration

int main(void)
{
	DATATYPE global_1;//local variable declaration
	global_1 = 0xAA;
	PORTB = global_1;
}
