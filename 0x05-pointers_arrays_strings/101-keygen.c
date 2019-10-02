#include "holberton.h"
#include <stdio.h>
/**
* passgen - function to create a random password
*
*
*/
void create_pass( char* randomString, size_t length )
{
    sizet_t i = 0;

    srand(rand());
    strcpy(randomString,"");

    for( i = 0; i < (length/2); i++ )
    {
        *(randomString + i) = ( rand() % 25 + 65 );
    }
    for( ; i < length; i++ )
    {
        *(randomString + i) = ( rand() % 9 + 48 );
    }
} 
