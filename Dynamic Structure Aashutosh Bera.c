#include<stdio.h>
#include<string.h>
//Aashutosh Bera Roll No.4//
//Static Structure//
struct movie
{
	int BU;
	int BO;
	char verdict[15];
}rrr,kgf2,bst;


void main()
{
	 printf("Enter Budget of RRR\n");
	 scanf("%d",&rrr.BU);
	 printf("Enter Budget of KGF-2\n");
	 scanf("%d",&kgf2.BU);
	 printf("Enter Budget of BRAMHASTRA\n");
	 scanf("%d",&bst.BU);
	 
	 printf("Enter Box office collection of RRR\n");
	 scanf("%d",&rrr.BO);
	 printf("Enter Box office collection of KGF-2\n");
	 scanf("%d",&kgf2.BO);
	 printf("Enter Box office collection BRAMHASTRA\n");
	 scanf("%d",&bst.BO);
	 
	 printf("Enter Verdict of RRR\n");
	 scanf("%s",&rrr.verdict);
	 printf("Enter Verdict of KGF-2\n");
	 scanf("%s",&kgf2.verdict);
	 printf("Enter Verdict BRAMHASTRA\n\n\n");
	 scanf("%s",&bst.verdict);
	 
	 printf("RRR :\n");
	 printf("Budget : %d Cr\n",rrr.BU);
	 printf("Box office : %d Cr\n",rrr.BO);
	 printf("Verdict : %s\n\n",rrr.verdict);
	 printf("KGF-2 :\n");
	 printf("Budget : %d Cr\n",kgf2.BU);
	 printf("Box office : %d Cr\n",kgf2.BO);
	 printf("Verdict : %s\n\n",kgf2.verdict);
	 printf("BRAMHASTRA :\n");
	 printf("Budget : %d Cr\n",bst.BU);
	 printf("Box office : %d Cr\n",bst.BO);
	 printf("Verdict : %s\n",bst.verdict);
	 
}
