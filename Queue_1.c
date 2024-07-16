#include<stdio.h>
void main()
{
	int Queue[100],a,choice,i;
	int front=-1, rear=-1;
	do
	{
		printf("Enter a 1 for push\n");
		printf("Enter a 2 for pop\n");
		printf("Enter a 3 for display\n");
		printf("Enter a 4 for exit\n");
		
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: 
					{
						if(front>=99)
					    	printf("Queue is Overflow\n");
						else if (front==-1 && rear==-1)
							{
							    printf("Enter push value\n");
							    scanf("%d",&a);
							    front++;
							    rear++;
							    Queue[rear]=a;
							    printf("%d is pushed in queue=%d\n",a,rear);
							    printf("front=%d\t rear=%d\n",front,rear);
							}
						else
							{
								rear++;
								printf("Enter push value\n");
							    scanf("%d",&a);
								Queue[rear]=a;
								printf("%d is pushed in queue=%d\n",a,rear);
								printf("front=%d\t rear=%d\n",front,rear);
							}
					    break;
					}
			case 2: 
					{
						if(front==-1 && rear==-1)
						    printf("Queue is underflow\n");
						else if (front==rear)
							{
								
								front=-1;
								rear=-1;
								printf("%d is poped in queue\n",Queue[rear]);
								printf("front=%d\t rear=%d\n",front,rear);
								printf("x\n");
							}
						else
							{
								printf("%d is poped in queue\n",Queue[front]);	
								front=front+1;
								printf("front=%d\t rear=%d\n",front,rear);
								printf("y\n");
								
							}
						break;
					}
			
					
			case 3: 
					{
						printf("Queue values are\n");
						for(i=front; i>=rear ;i--)
						{
							printf("%d\n",Queue[i]);
						}
						break;
					}
			case 4: 
					{
						exit(1);
						break;
					}
			default:
			{
			   printf("Wrong Choice"); 
			}
		}
	}while(1);
}
