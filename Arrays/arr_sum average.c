#include<stdio.h>
int main()
{
    int a[100],n,sum=0,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
     sum= sum+a[i];
    }
    printf("The sum is: %d\n",sum);
    printf("Average : %.2f\n",(float)sum/n);
    return 0;
}
