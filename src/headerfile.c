#include <stdio.h>
#include <string.h>
#include "../include/headerfile.h"

size_t sgs_clib_strcspn(const char *str1, const char *str2)

{
    int a = strlen(str1);
    int b = strlen(str2);
    int c=0;
    for (int i = 0; i < a; i++)
    {
        int ans = 0;
        for(int j = 0;j<b;j++)
        {
            if(str1[i]==str2[j])
            {
                ans=1;
                break;
            }
        }
        if(ans==0)
        {
            c++;
        }

        
    }
    return 0;
    
}
