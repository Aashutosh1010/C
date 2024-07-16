#include<stdio.h>

int main()
{
	float a[5][5], x[5], lambda=0, temp[5], tot=0, lambdaN;
	int i,j, step=1, order;
	up:
	printf("Enter the order of matrix A");
	scanf("%d",&order);
	
	if(order>5)
	{
		printf("Please enter order less then 5");
		goto up;
	}
	
	for(i=0; i<order; i++)
	{
		for(j=0; j<order; j++)
		{
			printf("Enter A[%d][%d]:",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	
	for(i=0; i<order; i++)
	{
		for(j=0; j<order; j++)
		{
			printf("%f\t",a[i][j]);
		}printf("\n");
	}
	printf("\n");
	for(i=0; i<order; i++)
	{
		x[i]=1;
	}
	do
	{
			
	for(i=0; i<order; i++)
	{
		tot=0;
		for(j=0; j<order; j++)
		{
			tot=tot + a[i][j]*x[j];
		}
		temp[i]=tot;
		printf("%f\n",temp[i]);
		
		if(lambda < abs(tot))
		{
			lambda=tot;
		}	
	}
	printf("\n L%d = %f\n",step,lambda);
	printf("\n x%d = \n",step);
	
	for(i=0; i<order; i++)
	{
		x[i]=temp[i]/lambda;
		printf("  %f  \n",x[i]);
	}
	lambda=0;
	step=step+1;
	printf("--------------------\n");
	getch();
	}while(step<7);
}
