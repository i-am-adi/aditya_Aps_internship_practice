#include<stdio.h>
void takeinput();
void calculation();
void marksheet();
char name[10],mname[10],clg[40],enrol[10],roll[10],cat[10],med[10],cen[10],date[10],
g1,g2,g3,g4,g5,g6,g7,g8,g9,g10,res; //here g is variable for grade, m for marks and tm for total marks
int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,total,tm1,tm2,tm3,tm4,tm5,tm6,tm7,tm8,tm9,tm10;          
float per,sgpa;
  void main()
{
	char uname[10]="aditya"  ,pass1[10]="1234";
	char uname1[10],pass2[10];
	abc:
	printf("enter username:");
	gets(uname1);
	printf("\nenter password");
	gets(pass2);
	if(strcmp(uname,uname1)==0 && strcmp(pass1,pass2)==0)
	{
	 takeinput();         // In this function i just take values from user
 calculation();       //In this fuction  i make all calculations for sgpa ,total,grading system,etc
 marksheet();         // in this function i simply create a base for my marksheet   	
	}
	else
	{
		printf("invalid id or pass\n");
			goto abc;
	}
 
return 0;
}

void takeinput(){
	printf("\nEnter the name :");
	gets(name);
	printf("\nEnter mother's name :");
	gets(mname);
	printf("\nEnter college name :");
	gets(clg);
	printf("\n Enter enroll no. :");
	gets(enrol);
	printf("\n Enter roll no. :");
	gets(roll);
	printf("\nCategory :");
	gets(cat);
	printf("\nMedium :");
	gets(med);
	printf("\nCenter no.:");
	gets(cen);
	printf("\nDate:");
	gets(date);
	a1:
	printf("\nEnter marks obtained for MATHEMATICS-I:");
     scanf("%d",&m1);
     if(m1>70){
     	printf("please enter marks between 0 to 70");
		 goto a1; }
		 a2:
	printf("\nEnter marks obtained for APPLIED PHYSICS:");
	 scanf("%d",&m2);
	  if(m2>70){
     	printf("please enter marks between 0 to 70");
		 goto a2; }
		 a3:
	printf("\nEnter marks obtained for ENERGY AND EVIRONMENT:");
	 scanf("%d",&m3);
	  if(m3>70){
     	printf("please enter marks between 0 to 70");
		 goto a3; }

   a4:
	printf("\nEnter marks obtained for COMMUNICATION SKILLS:");
	 scanf("%d",&m4);
	  if(m4>35){
     	printf("please enter marks between 0 to 35");
		 goto a4; }
	a5:
	printf("\nEnter marks obtained for ENGINEERING GRAFICS:");
	 scanf("%d",&m5);
     if(m5>35){
     	printf("please enter marks between 0 to 35");
		 goto a5; }
	a6:
	printf("\nEnter marks obtained for BASICS OF CIVIL AND\nMECHANICAL ENGINEERING:");
	 scanf("%d",&m6);
	  if(m6>50){
     	printf("please enter marks between 0 to 50");
		 goto a6; }
	a7:
	 printf("\nEnter marks obtained for APPLIED PHYSICS LAB:");
	 scanf("%d",&m7);
	  if(m7>25){
     	printf("please enter marks between 0 to 25");
		 goto a7; }
	a8:
	printf("\nEnter marks obtained for ENERGY AND EVIRONMENT LAB:");
	 scanf("%d",&m8);
	  if(m8>25){
     	printf("please enter marks between 0 to 25");
		 goto a8; }
    a9:
	printf("\nEnter marks obtained for COMMUNICATION SKILLS LAB:");
	 scanf("%d",&m9);
	  if(m9>25){
     	printf("please enter marks between 0 to 25");
		 goto a9; }
	a10:
	printf("\nEnter marks obtained for ENGINEERING GRAFICS LAB:");
	 scanf("%d",&m10);
	  if(m10>25){
     	printf("please enter marks between 0 to 25");
		 goto a10; }

}
void calculation(){
	tm1=m1+30;
			if(tm1>=90)
	 g1='A';
	else if(tm1>=80 && tm1<90)
	 g1='B';
	else if(tm1>=70 && tm1<80)
	 g1='C';
	else if(tm1>=60 && tm1<70)
	 g1='D';
	else if(tm1>=50 && tm1<60)
	 g1='E';
	else
	   g1='F';
	tm2=m2+30;
			if(tm2>=90)
	 g2='A';
	else if(tm2>=80 && tm2<90)
	 g2='B';
	else if(tm2>=70 && tm2<80)
	 g2='C';
	else if(tm2>=60 && tm2<70)
	 g2='D';
	else if(tm2>=50 && tm2<60)
	 g2='E';
	else
	   g2='F';
	tm3=m3+30;
			if(tm3>=90)
	 g3='A';
	else if(tm3>=80 && tm3<90)
	 g3='B';
	else if(tm3>=70 && tm3<80)
	 g3='C';
	else if(tm3>=60 && tm3<70)
	 g3='D';
	else if(tm3>=50 && tm3<60)
	 g3='E';
	else
	   g3='F';
	tm4=m4+15;
			if(tm4>=50)
	 g4='A';
	else if(tm4>=45 && tm4<50)
	 g4='B';
	else if(tm4>=40 && tm4<45)
	 g4='C';
	else if(tm4>=35 && tm4<40)
	 g4='D';
	else if(tm4>=30 && tm4<35)
	 g4='E';
	else
	   g4='F';
	tm5=m5+15;
		if(tm5>=50)
	 g5='A';
	else if(tm5>=45 && tm5<50)
	 g5='B';
	else if(tm5>=40 && tm5<45)
	 g5='C';
	else if(tm5>=35 && tm5<40)
	 g5='D';
	else if(tm5>=30 && tm5<35)
	 g5='E';
	else
	   g5='F';
	tm6=m6+0;
	if(tm6>=50)
	 g6='A';
	else if(tm6>=45 && tm6<50)
	 g6='B';
	else if(tm6>=40 && tm6<45)
	 g6='C';
	else if(tm6>=35 && tm6<40)
	 g6='D';
	else if(tm6>=30 && tm6<35)
	 g6='E';
	else
	   g6='F';
	tm7=m7+25;
	if(tm7>=50)
	 g7='A';
	else if(tm7>=45 && tm7<50)
	 g7='B';
	else if(tm7>=40 && tm7<45)
	 g7='C';
	else if(tm7>=35 && tm7<40)
	 g7='D';
	else if(tm7>=30 && tm7<35)
	 g7='E';
	else
	   g7='F';
	tm8=m8+25;
		if(tm8>=50)
	 g8='A';
	else if(tm8>=45 && tm8<50)
	 g8='B';
	else if(tm8>=40 && tm8<45)
	 g8='C';
	else if(tm8>=35 && tm8<40)
	 g8='D';
	else if(tm8>=30 && tm8<35)
	 g8='E';
	else
	   g8='F';
	tm9=m9+25;
		if(tm9>=50)
	 g9='A';
	else if(tm9>=45 && tm9<50)
	 g9='B';
	else if(tm9>=40 && tm9<45)
	 g9='C';
	else if(tm9>=35 && tm9<40)
	 g9='D';
	else if(tm9>=30 && tm9<35)
	 g9='E';
	else
	   g9='F';
	tm10=m10+25;
		if(tm10>=50)
	 g10='A';
	else if(tm10>=45 && tm10<50)
	 g10='B';
	else if(tm10>=40 && tm10<45)
	 g10='C';
	else if(tm10>=35 && tm10<40)
	 g10='D';
	else if(tm10>=30 && tm10<35)
	 g10='E';
	else
	   g10='F';

	 if(per>35){
	 	res='P';
	 }
	else
    res='F';
    	total=tm1+tm2+tm3+tm4+tm5+tm6+tm7+tm8+tm9+tm10;
	per=total/6.5;
	sgpa=per/10;
	}

void marksheet(){
	int i;
		for(i=0;i<=210;i++){
		printf("*");}
	printf("Faculty of Science & Technology");
	printf("\n\t\t\t\t FIRST SEMESTER EXAMINATION FOR THE DEGREE OF BACHELOR OF ENGINEERING,WINTER 2020  \n");
	for(i=0;i<=210;i++){
		printf("*");
	}
	printf("\nStudent Name :%s \t\t\t\t Roll No.:%s\t\t\tDate :%s ",name,roll,date);
	printf("\nMother's Name :%s\t\t\t\t center No.:%s\t\t\tP/L:408/2 ",mname,cen);
	printf("\nEnrol.no.:    %s \t\t\t\t category:%s\t\t\tMedium :%s\n ",enrol,cat,med);
	printf("\nCollege Name :%s  \n",clg);
	for(i=0;i<=210;i++){
		printf("-");}
printf("\n| SR.NO.|\t\t SUBJECT\t\t\t|        MARKS & CREDITS SHEME      |     MARKS & GRADES AWARDED     | ");
printf("\n|       |\t\t        \t\t\t|  TU/PU|TI/PI|MAX MARKS | MIN MARKS| TU/PU|TI/PI|TOTAL MARKS | GRADE|\n");
for(i=0;i<=210;i++){
		printf("-");}
printf("\n|  1.   |\t\tMATHEMATHICS-I\t\t\t|  70   |  30  |  100     |    45    |  %d  |  30 |    %d       |   %c  |",m1,tm1,g1); 
printf("\n|  2.   |\t\tAPPLIED PHYSICS\t\t\t|  70   |  30  |  100     |    45    |  %d  |  30 |    %d       |   %c  |",m2,tm2,g2);
printf("\n|  3.   |\t\tENERGY AND EVIRONMENT\t\t|  70   |  30  |  100     |    45    |  %d  |  30 |    %d       |   %c  |",m3,tm3,g3);
printf("\n|  4.   |\t\tCOMMUNICATION SKILLS\t\t|  35   |  15  |  050     |    23    |  %d  |  15 |    %d       |   %c  |",m4,tm4,g4);
printf("\n|  5.   |\t\tENGINEERING GRAFICS\t\t|  35   |  15  |  050     |    23    |  %d  |  15 |    %d       |   %c  |",m5,tm5,g5);
printf("\n|  6.   |BASICS OF CIVIL AND MECHANICAL ENGINEERING\t|  --   |  50  |  050     |    23    |  --  |  %d |    %d       |   %c  |",m6,tm6,g6);
printf("\n|  7.   |\t\tAPPLIED PHYSICS LAB\t\t|  25   |  25  |  050     |    25    |  %d  |  25 |    %d       |   %c  |",m7,tm7,g7);
printf("\n|  8.   |\t\tENERGY AND EVIRONMENT LAB\t|  25   |  25  |  050     |    25    |  %d  |  25 |    %d       |   %c  |",m8,tm8,g8);
printf("\n|  9.   |\t\tCOMMUNICATION SKILLS LAB\t|  25   |  25  |  050     |    25    |  %d  |  25 |    %d       |   %c  |",m9,tm9,g9);
printf("\n|  10.  |\t\tENGINEERING GRAFICS LAB\t\t|  25   |  25  |  050     |    25    |  %d  |  25 |    %d       |   %c  |\n",m10,tm10,g10);
for(i=0;i<=210;i++){
		printf("-");}
printf("\n");
printf("\n");
for(i=0;i<=210;i++){
		printf("-");}
printf("\n|INCENTIVE| aGPV   |  TOTAL CREDITS  |  SGPA  |  OUT OF  | TOTAL MARKS OBTAINED | OUT OF MARKS | RESULT |");
printf("\n|  ----   |  ----  |       ----      |  %.2f  |  10.00   |       %d            |     650      |   %c    |\n",sgpa,total,res);
for(i=0;i<=210;i++){
		printf("-");}
		printf("\n");
		for(i=0;i<=210;i++){
		printf("*");}
}
