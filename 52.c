#include<stdio.h>
void main()
{
	int a[3][3],i,j,max;
	max=0;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
		
		for(j=0; j<3; j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
		printf("%d",max);
	}	
	
}
