#include <stdio.h>
#include <string.h>

int main ()
{
  	char	*largestring = "Foo hhhB9arBaz";
	char	*smallstring = "Bar";
	char 	*ptr;

	ptr = split(largestring, smallstring);
  	printf("%s", ptr);
  
}