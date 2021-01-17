#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter how many stairs you  want");
	scanf("%d",&n);
    for(i=1;i<n+1; i++)
    {
    	for(j=0;j<i;j++)
    	   printf("01");
    	printf("\n");
	}
	  
	return 0;
	}
