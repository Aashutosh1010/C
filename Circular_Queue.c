#include<stdio.h>
void main()
{
	int n,Queue[n],a,i,j,choice;
	int front=-1, rear=-1;
	printf("Enter the size of queue\n");
	scanf("%d",&n);
	do
	{
		printf("Enter 1 for push\n");
		printf("Enter 2 for pop\n");
		printf("Enter 3 for display\n");
		printf("Enter 4 for exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: 
					{	
						if(front==0 && rear==n-1)
						{
							printf("Queue is overflow\n");
						}
						else if(rear==front-1)
						{
							printf("Queue is overflow\n");	
						}
						else if(front==-1 && rear==-1)
						{
							printf("Enter push value\n");
							scanf("%d",&a);
							front=front+1;
							rear=rear+1;
							Queue[rear]=a;
							printf("%d is pushed in Queue=%d\n",a,rear);
							printf("front=%d\trear=%d",front,rear);
						}
						else if (rear==n-1)
						{
							rear=0;
							printf("Enter push value\n");
							scanf("%d",&a);
							
							Queue[rear]=a;
							printf("%d is pushed in Queue=%d\n",a,rear);
							printf("front=%d\trear=%d",front,rear);
						} 
						else 
						{
							printf("Enter push value\n");
							scanf("%d",&a);
							rear=rear+1;
							Queue[rear]=a;
							printf("%d is pushed in Queue=%d\n",a,rear);
							printf("front=%d\trear=%d",front,rear);
						} break;
					}
			case 2: 
					{
						if(front==-1 && rear==-1)
						{
							printf("Queue is underflow\n");
						}
						else if(front==rear)
						{
							printf("%d is poped from Queue=%d\n",Queue[rear],rear);
							front=rear=-1;
							printf("front=%d\trear=%d",front,rear);
						}
						else
						{
							printf("%d is poped from Queue=%d\n",Queue[front],front);
							front=front+1;
							printf("front=%d\trear=%d",front,rear);
						}break;
					}
			case 3: 
					{
						printf("Queue elements are\n");
						for(i=front; i<=rear; i++)
						{
							printf("%d\n",Queue[i]);
						}
					}break;
			case 4: 
					{
						exit(1);
					}break;
			default:
			{
				printf("Please enter a valid choice\n");
			}
		}
	}while(1);
}
