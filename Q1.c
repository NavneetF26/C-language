//* To input a 2D array of dimenstion m*n and arrange all elements of all rows in ascending order*//
#include <stdio.h>
int main()
{
    int a[20][20],m,n,i,j,k,l,t;
    printf("Input no of rows and columns of a matrix\n");
    scanf("%d%d",&m,&n);
    printf("Input matrix elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
            for(k=0;k<n;k++)
            {
                for(l=0;l<n-1;l++)
                {
                    if(a[i][l]>a[i][l+1])
                    {
                    t=a[i][l];
                    a[i][l]=a[i][l+1];
                    a[i][l+1]=t;
                    }
                }
            }
    }
    printf("All the elements of all rows in ascending order is:\n");
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
