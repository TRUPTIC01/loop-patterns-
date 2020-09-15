#include<stdio.h>
int main()
{ 
	int i,j,n;

	printf("Enter n");
	scanf("%d",&n);

	for( i = 1; i <= n; i++)
	{ 
		for(j = 1; j <= n; j++)
		{ 
			if(i==1||i==n||i==j||j==1||j==n||j==n-i+1)
			printf("* ");
			else
			printf("  ");
		}
	
	     printf("\n");
	}

   return 0;
}
