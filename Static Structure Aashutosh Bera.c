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
	 rrr.BU=500;
	 rrr.BO=1150;
	 strcpy(rrr.verdict,"Blockbuster");
	 
	 kgf2.BU=100;
	 kgf2.BO=1200;
	 strcpy(kgf2.verdict,"Blockbuster");
	 
	 bst.BU=400;
	 bst.BO=450;
	 strcpy(bst.verdict,"Super Hit");
	 
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
