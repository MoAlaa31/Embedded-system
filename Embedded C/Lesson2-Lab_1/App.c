#include "uart.h"
unsigned char string_buffer[100]  = "Learn-in-depth:Mohamed Alaa";
unsigned char const string_buffer2[100]  = "Learn-in-depth:Mohamed Alaa";
void main()
{
	uart_send_string(string_buffer);
}
