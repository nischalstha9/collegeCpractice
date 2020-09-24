#include<stdio.h>
void main()
{
	float eng1, math1, mp1, cp1, acc1;
	float eng2, math2, mp2, cp2, acc2;
	float eng3, math3, mp3, cp3, acc3;
	float eng4, math4, mp4, cp4, acc4;
	float eng5, math5, mp5, cp5, acc5;
	
	float sum1, sum2, sum3, sum4, sum5;
	float percentage1, percentage2, percentage3, percentage4, percentage5;
	
	float max=0;
	
	printf("Enter the mark of first student: \n");
	
	printf("Enter the mark of English: ");
	scanf("%f",&eng1);
	
	printf("Enter the mark of Math: ");
	scanf("%f",&math1);
	
	printf("Enter the mark of Microprocesser: ");
	scanf("%f",&mp1);
	
	printf("Enter the mark of C programming: ");
	scanf("%f",&cp1);
	
	printf("Enter the mark of Account: ");
	scanf("%f",&acc1);
	
	sum1=eng1+math1+mp1+cp1+acc1;
	percentage1=sum1/5;
	
	printf("Enter the mark of second student: \n");
	
	printf("Enter the mark of English: ");
	scanf("%f",&eng2);
	
	printf("Enter the mark of Math: ");
	scanf("%f",&math2);
	
	printf("Enter the mark of Microprocesser: ");
	scanf("%f",&mp2);
	
	printf("Enter the mark of C programming: ");
	scanf("%f",&cp2);
	
	printf("Enter the mark of Account: ");
	scanf("%f",&acc2);
	
	sum2=eng2+math2+mp2+cp2+acc2;
	percentage2=sum2/5;
	
	printf("Enter the mark of third student: \n");
	
	printf("Enter the mark of English: ");
	scanf("%f",&eng3);
	
	printf("Enter the mark of Math: ");
	scanf("%f",&math3);
	
	printf("Enter the mark of Microprocesser: ");
	scanf("%f",&mp3);
	
	printf("Enter the mark of C programming: ");
	scanf("%f",&cp3);
	
	printf("Enter the mark of Account: ");
	scanf("%f",&acc3);
	
	sum3=eng3+math3+mp3+cp3+acc3;
	percentage3=sum3/5;
	
	printf("Enter the mark of fourth student: \n");
	
	printf("Enter the mark of English: ");
	scanf("%f",&eng4);
	
	printf("Enter the mark of Math: ");
	scanf("%f",&math4);
	
	printf("Enter the mark of Microprocesser: ");
	scanf("%f",&mp4);
	
	printf("Enter the mark of C programming: ");
	scanf("%f",&cp4);
	
	printf("Enter the mark of Account: ");
	scanf("%f",&acc4);
	
	sum4=eng4+math4+mp4+cp4+acc4;
	percentage4	=sum4/5;
	
	printf("Enter the mark of fifth student: \n");
	
	printf("Enter the mark of English: ");
	scanf("%f",&eng5);
	
	printf("Enter the mark of Math: ");
	scanf("%f",&math5);
	
	printf("Enter the mark of Microprocesser: ");
	scanf("%f",&mp5);
	
	printf("Enter the mark of C programming: ");
	scanf("%f",&cp5);
	
	printf("Enter the mark of Account: ");
	scanf("%f",&acc5);
	
	sum5=eng5+math5+mp5+cp5+acc5;
	percentage5=sum5/5;
	
	printf( "The percentage of first student : %f",percentage1); 
	printf( "The percentage of second student : %f",percentage2);
	printf( "The percentage of third student : %f",percentage3);
	printf( "The percentage of fourth student : %f",percentage4);
	printf( "The percentage of fifth student : %f",percentage5); 
	 
	max=(percentage1>percentage2)&&(percentage1>percentage3)&&(percentage1>percentage4)&&(percentage1>percentage5)?percentage1:(percentage2>percentage3)&&
	(percentage2>percentage4)&&(percentage2>percentage5)?percentage2:(percentage3>percentage4)&&(percentage3>percentage5)?percentage3:(percentage4>percentage5)?
	percentage4:percentage5;
	
	printf("The highest percentage : %.2f",max);

}
