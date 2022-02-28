#include<stdio.h>
int main()
{
	float bit,bytes,kb,mb,gb,tb;
	 printf("enter the value of bit\n");
	 scanf("%f",&bit);
	 bytes=bit*8;
	 printf("bytes\n %f",bytes);
	 kb=1024*bytes;
	 printf("\nkb\n %f",kb);
	 mb=1024*kb;
	 printf("\nmb\n %f",mb);
	 gb=1024*mb;
	 printf("\ngb\n %f",gb);
	 tb=1024*gb;
	 printf("\ntb\n %f",tb);
	
	return 0;
}
