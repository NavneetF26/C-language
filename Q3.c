//*Input a 2D array of dimenstion m*n and to perform the operation 2R2-R1+5R3*//
#include <stdio.h>
int main()
{
    int a[10][10],m,n,i,j;
    printf("Input a matrix containing 3 or more rows\n");
    scanf("%d%d",&m,&n);
    printf("Input matrix elements\n");
    if(m<3)
    printf("Invalid operation");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        a[1][j]=(2*a[1][j])-(a[0][j])+(5*a[2][j]);
    }
    printf("Final matrix of operation 2R2-R1+5R3 of R2 is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
