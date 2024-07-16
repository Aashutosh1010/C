#include<stdio.h>
void main()
{
	int a[3][3],i,j,R1=0,R2=0,R3=0,C1=0,C2=0,C3=0;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
		
		for(j=0; j<3; j++)
		{
			R1+=a[0][j];
					
			R2+=a[1][j];
					
			R3+=a[2][j];
			
		printf("%d\n",R1);
		printf("%d\n",R2);
		printf("%d\n",R3);
			
		}	
		for(j=0; j<3; j++)
		{
			C1+=a[i][0];
			
			C2+=a[i][1];
			
			C3+=a[i][j];
			
		printf("%d\n",C1);
		printf("%d\n",C2);
		printf("%d\n",C3);
		}
}

}
