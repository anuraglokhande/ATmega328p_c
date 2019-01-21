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
 
 21.01.2019
 Table 9-7. Example of Access Types: Static Function
 
 
 
 */





/*
Enter note here

Global Function (called once)

		   text	   data	    bss	    dec	    hex	filename
		   204	     12	      0	    216	     d8	Code_1.elf

Static Function (called once)

		   text	   data	    bss	    dec	    hex	filename
		   186	     12	      0	    198	     c6	Code_1.elf

*/

/*
//Global Function (called once)
#include <avr/io.h>
uint8_t string[12] = {"hello world!"};
void USART_TX(uint8_t data);
int main(void)
{
	uint8_t i = 0;
	while (i<12) {
		USART_TX(string[i++]);
	}
}
void USART_TX(uint8_t data)
{
	while(!(UCSR0A&(1<<UDRE0)));
	UDR0 = data;
}
*/

//Static Function (called once)
#include <avr/io.h>
uint8_t string[12] = {"helloworld!"};
static void USART_TX(uint8_t
data);
int main(void)
{
	uint8_t i = 0;
	while (i<12) {
		USART_TX(string[i++]);
	}
}
void USART_TX(uint8_t data)
{
	while(!(UCSR0A&(1<<UDRE0)));
	UDR0 = data;
}