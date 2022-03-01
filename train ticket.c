#include<stdio.h>
#define NAN 50
#define Shegaon 100
#define akola 150
#define badnera 200
int main()
{char p_name[10],source[10]="nagpur",dest[10];
int p ,total_fare,f;
printf("\n enter passenger name : ");
gets(p_name);
printf("\nNAN %d",NAN);
printf("\nShegaon %d",Shegaon);
printf("\nakola %d",akola);
printf("\nbadnera %d",badnera);
printf("\n enter destination :");
gets(dest);
printf("\nenter the numbers of passengers : ");
scanf("%d",&p);
printf("\nenter fare : ");
scanf("%d",&f);
total_fare=p*f;
printf("total_fare=%d",total_fare);
printf("\n________________________________________________________________________________________");
printf("\nname : %s\t\t|",p_name);
printf("\nsource : %s         |\tdestination : %s",source,dest);
printf("\n________________________________________________________________________________________");
printf("\nno of passengers : %d    |\tfare per passenger:%d",p,f);
printf("\n________________________________________________________________________________________");
printf("\n\t\t\t|total_fare: %d",total_fare);
printf("\n________________________________________________________________________________________");

}
