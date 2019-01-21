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
 
 21.01.2019
 Table 9-6. Example of Constants in Program Space
 
 
 */





/*
Enter note here

Constants in Data Space
		   text	   data	    bss	    dec	    hex	filename
		   168	     12	      0	    180	     b4	Code_1.elf

Constants in Program Space

		   text	   data	    bss	    dec	    hex	filename
		   160	      0	      0	    160	     a0	Code_1.elf

*/



/*
//Constants in Data Space
#include <avr/io.h>
uint8_t string[12] = {"helloworld!"};
int main(void)
{
	UDR0 = string[10];
}
*/

//Constants in Program Space
#include <avr/io.h>
#include <avr/pgmspace.h>
uint8_t const string[12] PROGMEM = {"helloworld!"};
int main(void)
{
	UDR0 = pgm_read_byte(&string[10]);
}