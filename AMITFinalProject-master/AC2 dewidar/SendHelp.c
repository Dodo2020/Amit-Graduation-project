/*
 * SendHelp.c
 *
 * Created: 19-Jan-21 11:45:50 AM
 *  Author: dewidar
 */

#include "SendHelp.h"

void reset_buffer(uint8* buffer)
{
	for(int i=0; i<10; i++)
	{
		buffer[i] = 0;
	}
}