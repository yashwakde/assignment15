#include<stdio.h>
void sort(int b[],int n)
{
    int i,j,temp =0;
    printf("enter %d number",n);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(b[i]>b[j])
          {temp = b[i];
          b[i] =b[j];
          b[j] =temp;
          }
        }
    }
}
int main()
{
   
    int a[5] ={2,3,4,1,5};
    int i;
    sort(a,5);
   for(i=0;i<5;i++)
  { 
    printf("%d ",a[i]);
  }
  return 0;

}