#include <stdio.h>
int endian ();

int main ()
{

endian();

}

int endian()
{
int vec[]={0x1234,0x434241,0x11ABCD,0x11223344,0xABCDEF11};

unsigned char *r=(unsigned char*)vec;
printf("%p:", &r[0]);
printf("%x\n", r[0]);

printf("%p:", &r[1]);
printf("%x\n", r[1]);

printf("%p:", &r[2]);
printf("%x\n", r[2]);

printf("%p:", &r[3]);
printf("%x\n", r[3]);

return 0;
}
