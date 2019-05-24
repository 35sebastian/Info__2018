#include <stdio.h>
#include <stdlib.h>
typedef char u8_t;

void* memo_fill (int sz, u8_t data)
{
    char *p;
    int i;
//     u8_t data;
    
   p= (char *)malloc(sz);
     if (p==NULL)
       return 0;
   
     for (i=0;i<sz;i++)
     *(p+i)=data;
   

   return p;
   
}
