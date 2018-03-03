#include <stdio.h>
void main()
{
    int a[10],b[10],n,i;
    printf("Enter the number of times:");
    scanf("%d",&n);
    printf("Enter the ninjas present in the two clans:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    printf("Difference of Ninjas in clans:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",b[i]-a[i]);
    }
}
