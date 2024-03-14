#include<stdio.h>
int main()
{
	int y;
	printf("enter a year=");
	scanf("%d",&y);
	if(y%400==0)
		printf("\n LEAP YEAR");
    else if(y%100==0)
    printf("\n NOT A LEAP YEAR");
    else if(y%4==0)
    printf("\n LEAP YEAR");
    else
    {
    	printf("\n NOT A LEAP YEAR");
    	
	}
	return 0;
}
