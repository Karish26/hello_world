#include <stdio.h>
#include <string.h>
#include "../include/headerfile.h"

int main ()
{
   int len;
    char str1[50], str2[50];
   scanf("%s %s, str1,str2");
    len = sgs_clib_strcspn( str1, str2);
   
   printf("Length of initial segment %d\n", len );
   
   return(0);
}