#include <stdio.h>

struct emp
{
  char name[20];
  int id;
  int exp;
};

getinfo(int n)
{
   int i;
  
  struct emp e[n];
  
  for(i=0; i<n; i++)
  {
    printf("Enter name of employer %d\n",i+1);
    scanf("%s",&e[i].name);
  }
  for(i=0; i<n; i++)
  {
    printf("Enter id of employer %d\n",i+1);
    scanf("%d",&e[i].id);
  }
  for(i=0; i<n; i++)
  {
    printf("Enter experience of employer %d\n",i+1);
    scanf("%d",&e[i].exp);
  }
  return n,e[i].name,e[i].id,e[i].exp;
 }
 
main()
{
  int i,n;
  printf("Enter strength of employees\n");
  scanf("%d",&n);
  getinfo(n);
  {
  struct emp e[n];
  for(i=0; i<n; i++)
  {
    printf("Employee name :%s\n",e[i].name);
    printf("Employee id :%d\n",e[i].id);
    printf("Employee experience :%d years\n\n",e[i].exp);
  
  }
}
