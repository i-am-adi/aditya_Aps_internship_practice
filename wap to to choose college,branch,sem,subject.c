//wap to to choose college,branch,sem,subject
#include<stdio.h>
int main()
{
	int college,branch,sem,sub;
	printf("\n1.PCE\n2.YCCE\n3.Raisoni");
	printf("\nselect college:");
	scanf("%d",&college);
	switch(college)
	{case 1:
		printf("\n1.CT\n2.IT\n3.AI");
		printf("\nselect branch");
		scanf("%d",&branch);
		switch(branch){
			case 1:
				printf("\n1.sem1\n2.sem2\n3.sem3");
				printf("\nselect semister");
				scanf("%d",&sem);
				switch(sem)
				{case 1:
					printf("this sem sub. are\n1.tfcs\n2.ddfm\n3.uhv");
					break;
				case 2:
					printf("this sem sub. are\n1.psp\n2.defm\n3.tfcs");
					break;
				case 3:
					printf("this sem sub. are\n1.java\n2.c++\n3.cws");
					break;
				}break;
			case 2:
				printf("\n1.sem1\n2.sem2\n3.sem3");
				printf("\nselect semister");
				scanf("%d",&sem);
				switch(sem)
				{case 1:
					printf("this sem sub. are\n1.dts\n2.python\n3.uhv");
					break;
				case 2:
					printf("this sem sub. are\n1.TFCS\n2.DDFM\n3.java");
					break;
				case 3:
					printf("this sem sub. are\n1.java\n2.c++\n3.cws");
					break;
			}break;
			case 3:
				printf("\n1.sem1\n2.sem2\n3.sem3");
				printf("\nselect semister");
				scanf("%d",&sem);
				switch(sem)
				{case 1:
					printf("\nthis sem sub. are\n1.comp.theory\n2.EG\n3.Communication");
					break;
				case 2:
					printf("this sem sub. are\n1.psp\n2.c++\n3.tfcs");
					break;
				case 3:
					printf("this sem sub. are\n1.java\n2.DDFM\n3.cws");
					break;
				}
		}break;
	case 2:
		printf("\n1.CT\n2.IT\n3.ETC");
		printf("\nselect branch");
		scanf("%d",&branch);
		switch(branch){
			case 1:
				printf("\n1.sem1\n2.sem2\n3.sem3");
				printf("\nselect semister");
				scanf("%d",&sem);
				switch(sem)
				{case 1:
					printf("this sem sub. are\n1.tfcs\n2.ddfm\n3.uhv");
					break;
				case 2:
					printf("this sem sub. are\n1.psp\n2.defm\n3.tfcs");
					break;
				case 3:
					printf("this sem sub. are\n1.java\n2.c++\n3.cws");
					break;
				}break;
			case 2:
				printf("\n1.sem1\n2.sem2\n3.sem3");
				printf("\nselect semister");
				scanf("%d",&sem);
				switch(sem)
				{case 1:
					printf("this sem sub. are\n1.dts\n2.python\n3.uhv");
					break;
				case 2:
					printf("this sem sub. are\n1.TFCS\n2.DDFM\n3.java");
					break;
				case 3:
					printf("this sem sub. are\n1.java\n2.c++\n3.cws");
					break;
			}break;
			case 3:
				printf("\n1.sem1\n2.sem2\n3.sem3");
				printf("\nselect semister");
				scanf("%d",&sem);
				switch(sem)
				{case 1:
					printf("this sem sub. are\n1.comp.theory\n2.EG\n3.Communication");
					break;
				case 2:
					printf("this sem sub. are\n1.psp\n2.c++\n3.tfcs");
					break;
				case 3:
					printf("this sem sub. are\n1.java\n2.DDFM\n3.cws");
					break;
				}break;
		}break;
	case 3:
		printf("\n1.Cs\n2.IT\n3.mechanical");
		printf("\nselect branch");
		scanf("%d",&branch);
		switch(branch){
			case 1:
				printf("\n1.sem1\n2.sem2\n3.sem3");
				printf("\nselect semister");
				scanf("%d",&sem);
				switch(sem)
				{case 1:
					printf("this sem sub. are\n1.tfcs\n2.ddfm\n3.uhv");
					break;
				case 2:
					printf("this sem sub. are\n1.psp\n2.defm\n3.tfcs");
					break;
				case 3:
					printf("this sem sub. are\n1.java\n2.c++\n3.cws");
					break;
				}break;
			case 2:
				printf("\n1.sem1\n2.sem2\n3.sem3");
				printf("\nselect semister");
				scanf("%d",&sem);
				switch(sem)
				{case 1:
					printf("this sem sub. are\n1.dts\n2.python\n3.uhv");
					break;
				case 2:
					printf("this sem sub. are\n1.TFCS\n2.DDFM\n3.java");
					break;
				case 3:
					printf("this sem sub. are\n1.java\n2.c++\n3.cws");
					break;
			}break;
			case 3:
				printf("\n1.sem1\n2.sem2\n3.sem3");
				printf("\nselect semister");
				scanf("%d",&sem);
				switch(sem)
				{case 1:
					printf("this sem sub. are\n1.comp.theory\n2.EG\n3.Communication");
					break;
				case 2:
					printf("this sem sub. are\n1.engineering mechanics\n2.c++\n3.tfcs");
					break;
				case 3:
					printf("this sem sub. are\n1.Sheet design\n2.DDFM\n3.cws");
					break;
					
				}
		}
	
	}
}

