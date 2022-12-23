// Project: Menu driven project for all Mathematical functions using functions(use file handling).
#include<stdio.h>
#include<stdlib.h>
void Addition_Operation();
void Substraction_Operation();
void Multiplication_Operation();
void Division_Operation();
void Modulo_Operation();

int main()
{
	int n;
	do
	{
	printf("\n=============================================================\n");
	printf("Press 1 for Addition Operation \n");
	printf("Press 2 for Substraction Operation\n");
	printf("Press 3 for Multiplication Operation\n");
	printf("press 4 for Division Operation\n");
	printf("press 5 for Modulo Operation\n");
	printf("Press 0 for Exit\n");
	printf("=============================================================\n");
	printf("Enter your choice:");
	scanf("%d",&n);
	if(n==1) 
	   Addition_Operation();
	else if(n==2)
	   Substraction_Operation();
	else if(n==3)
	   Multiplication_Operation();
	else if(n==4)
	{
	  	Division_Operation();
	}
	else if(n==5)
	{
		Modulo_Operation();
	}
	else if(n==0)
	   break;
   }while(n!=0);
}

void Addition_Operation()
{
	FILE *fb=fopen("project.txt","a+");
	int num1,num2;
	printf("\nEnter 2 number for addition:");
	scanf("%d%d",&num1,&num2);
	int result=num1+num2;
 	fprintf(fb,"\nFirst number is %d  and  Second number is %d",num1,num2);
       fprintf(fb,"\nSum of 2 no.: %d",result);
  
 
	printf("\nsum of 2 number is %d",result);
	fclose(fb);
}
void Substraction_Operation()
{
	FILE *fb=fopen("project.txt","a+");
	int num1,num2;
	printf("\n\nEnter 2 number for substraction:");
	scanf("%d%d",&num1,&num2);
	int result=num1-num2;
	fprintf(fb,"\n\nFirst number is %d  and  Second number is %d",num1,num2);
	fprintf(fb,"\nsub of 2 no.: %d",result);
	printf("\nsub of 2 number is %d",result);
	fclose(fb);
}
void Multiplication_Operation()
{
	int num1,num2;
	FILE *fb=fopen("project.txt","a+");
	printf("\n\nEnter 2 number for multiplication:");
	scanf("%d%d",&num1,&num2);
	int result=num1*num2;
	fprintf(fb,"\n\nFirst number is %d  and  Second number is %d",num1,num2);
	fprintf(fb,"\nMultiplication of 2 no.: %d",result);
	printf("\nMultiplication of 2 number is %d",result);
	fclose(fb);
}
void Division_Operation()
{
	int num1,num2;
	FILE *fb=fopen("project.txt","a+");
	printf("\nEnter 2 number for Division:");
	scanf("%d%d",&num1,&num2);
	int result=num1/num2;
	fprintf(fb,"\n\nFirst number is %d  and  Second number is %d",num1,num2);
	fprintf(fb,"\nDivision of given 2 number: %d",result);
	printf("\nDivision of 2 number is %d",result);
	fclose(fb);
}
void Modulo_Operation()
{
	int num1,num2;
	FILE *fb=fopen("project.txt","a+");
	printf("\nEnter 2 number for modulo:");
	scanf("%d%d",&num1,&num2);
	int result=num1%num2;
	fprintf(fb,"\n\nFirst number is %d  and  Second number is %d",num1,num2);
	fprintf(fb,"\nmodulo of 2 number: %d",result);
	printf("\nmodulo of 2 number is %d",result);
	fclose(fb);
}
