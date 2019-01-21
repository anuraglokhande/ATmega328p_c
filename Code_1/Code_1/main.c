/*
 * Code_1.c
 *
 * Created: 03/01/2019 7:51:40 PM
 * Author : admin
 * Date: 03.01.2018
 * checking here is SRAM/Data memory uses
 * Date: 14.01.2018 
 * edited for simplification and read the how memory stores in MCU
 */

/* uninitialized data will be stored in bss 

char a;
char b;
char c;
		   text	   data	    bss	    dec	    hex	filename
		   170	      0	      3	    173	     ad	Code_1.elf


				Program Memory Usage 	:	170 bytes   0.5 % Full
				Data Memory Usage 		:	3 bytes   0.1 % Full
*/
#include <avr/io.h>
//char a;
//char b;
char c;

//const char c1 = 10, c2 = 20;

int main(void)
{
	//a=1;
	//b=2;
	c=0;
	
	//c=c1+c2;
	
}
