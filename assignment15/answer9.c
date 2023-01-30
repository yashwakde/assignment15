#include<stdio.h>
int frequency(int a[],int n,int b[],int y)
{ int i,j,k=0;
int c[10];

for(i=0;i<5;i++)
{
  scanf("%d",&a[i]);
}
for( j=0;j<5;j++)
{
    scanf("%d",&b[j]);
}
printf("\n\n");
for(i=0,j=0;i<5 && j<5 ;k++)
{
  if(a[i]<b[j])

  {
    c[k] = a[i];
    i++;
  }
  else
  {
    c[k] = b[j];
    j++;
  }
}

if(i==5 && j!=5)
 { 
  for(;j<5;j++)
   c[k++] = b[j];

}
if(i!=5 && j==5)
{
  for(;i<5;i++)
  c[k++] = a[i];
}

for( i=0;i<10;i++)
{
  printf("%d ",c[i]);
}
return 0;
}
int main()

{
   
   int a[5] ;
   int  b[5];
   frequency(a,5,b,5);
  

  return 0;

}