#include<stdio.h>
main()
{
	int marks;
	printf("Please enter your marks:\n");
	scanf("%d",&marks);
	
	if(marks>=85 and marks<=100)
	{
		printf("Grade A");
	}
	else if(marks>=70 and marks<=84)
	{
		printf("Grade B");
	}
	else if(marks>=55 and marks<=69)
	{
		printf("Grade C");
	}
	else if(marks>=40 and marks<=54)
	{
		printf("Grade D");
	}
	else if(marks>=0 and marks<=39)
	{
		printf("Grade F");
	}
	else
	{
		printf("No grades for the given marks.");
	}
	return 0;
}
