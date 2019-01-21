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
 */

/*

The Readout from the ADCH register is only 8
bits, and this means that a char is sufficient. 2 bytes are saved due to the return value of the function
readADC() and the temporary variable in main being changed from int (2-byte) to char (1-byte).

*/


#include <avr/io.h>

#define DATATYPE unsigned int
//#define DATATYPE unsigned char //macro is defined to switch from char to int data type


DATATYPE foo(void);

int main(void)
{
DATATYPE return_value = foo();
	
}

DATATYPE foo(void)
{
	DATATYPE a;
	return a;
}
