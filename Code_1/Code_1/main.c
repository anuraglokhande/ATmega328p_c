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

 21.01.2019
 Table 9-5. Example of Loop Jamming
 
 */

/*
Enter note here

Separate loops
		   text	   data	    bss	    dec	    hex	filename
		   218	      0	      0	    218	     da	Code_1.elf
		   
		   
Loop jamming		   
		   text	   data	    bss	    dec	    hex	filename
		   156	      0	      0	    156	     9c	Code_1.elf		   
		   

*/

//Loop jamming
#include <avr/io.h>
int main(void)
{
	uint8_t i, total = 0;
	uint8_t tmp[10] = {0};
	for (i=0; i<10; i++)
	{
		tmp [i] = ADCH;
		total += tmp[i];
	}
	UDR0 = total;
}




/*
//Separate loops
#include <avr/io.h>
int main(void)
{
	uint8_t i, total = 0;
	uint8_t tmp[10] = {0};
	for (i=0; i<10; i++) {
		tmp [i] = ADCH;
	}
	for (i=0; i<10; i++) {
		total += tmp[i];
	}
	UDR0 = total;
}
*/
