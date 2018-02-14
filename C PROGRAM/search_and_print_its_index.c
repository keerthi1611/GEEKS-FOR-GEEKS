#include<stdio.h>
void main()
{
    int n,temp;
    scanf("%d",&n);
    int i,a[n],k,count=0;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     if(k==a[i])
     {
         printf("%d",i);
         count++;
         break;
     }
     else if(k!=a[i])
     {
         continue;}
      
    }
    if(count==0)
     printf("OOPS!NOT FOUND");
}
    
