#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "This is a sample string";
  char *pch;
  char *pch3;
  pch = strrchr(str,'s');
  printf ("Last occurence of 's' found at %d \n",pch-str+1);
  printf ("Looking for the 's' character in \"%s\"...\n",str);
  pch3=strchr(str,'s');
  while (pch3!=NULL)
  {
    printf ("found at %d\n",pch3-str+1);
    pch3=strchr(pch+1,'s');
  }
  
  return 0;
}