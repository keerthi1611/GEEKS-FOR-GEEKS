#include<stdio.h>
void main()
{
    int n,temp;
    scanf("%d",&n);
    int i,a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<1;i++)
    {
    temp=a[n-1];
    b[i]=temp;
    printf("%d\n",b[i]); 
    }
   
    for(i=1;i<n;i++)
    {
        b[i]=a[i-1];
          printf("%d\n",b[i]);  
    }
   
    
}
