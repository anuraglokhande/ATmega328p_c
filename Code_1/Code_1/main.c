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
 *21.01.2019
 * editted for Example of do { } while ( ) Loops with Increment and Decrement Loop Index
 */

/*
Enter note here

//this is with increment loop
		   text	   data	    bss	    dec	    hex	filename
		   152	      0	      0	    152	     98	Code_1.elf
		   
		   
// this is with decrement looop

		   text	   data	    bss	    dec	    hex	filename
		   152	      0	      0	    152	     98	Code_1.elf
		   
		   no such change found here. see pdf
*/

//this is with decrement loop
#include <avr/io.h>
int main(void)
{
	uint8_t local_1 = 1000;
	do {
		PORTB ^= 0x01;
		local_1--;
	} while (local_1);
}



/*
//this is with increment loop
#include <avr/io.h>
int main(void)
{
	uint8_t local_1 = 0;
	do {
		PORTB ^= 0x01;
		local_1++;
	} while (local_1<100);
}
*/