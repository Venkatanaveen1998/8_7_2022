#include"cpystring.h"
void stringcopy(char *src,char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		*src++;
		*dest++;
	}
	*dest='\0';
}
