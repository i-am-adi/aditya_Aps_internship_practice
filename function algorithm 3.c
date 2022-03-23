//function algorithm 2
#include<stdio.h>

int main(){
 char arr[100];
    arr[0]='a';
    arr[1]='b';
    arr[2]='c';
    arr[3]='d';
    abc(arr);
}
 abc(char arr[])
{
printf("%c\n",*++arr);
printf("%c",*arr++);
}
