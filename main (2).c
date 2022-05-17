#include <stdio.h>
int main()
{
   int a[2][2],sum=0;
int i,j;
printf("enter the elements of matrix:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("matrx is:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d\t",a[i][j]);
        sum=sum+a[i][j];
    }
    printf("\n");
}
     printf("\nsum is=%d",sum);
return 0;
}
