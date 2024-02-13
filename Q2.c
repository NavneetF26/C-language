//*Input a 2D array of dimenstion m*n and arrange all elements of all colloumns in descending order*//
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
    for(j=0;j<n;j++)
    {
            for(k=0;k<m;k++)
            {
                for(l=0;l<m-1;l++)
                {
                    if(a[l][j]<a[l+1][j])
                    {
                    t=a[l][j];
                    a[l][j]=a[l+1][j];
                    a[l+1][j]=t;
                    }
                }
            }
    }
    printf("All the elements of all columns in descending order is:\n");
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
