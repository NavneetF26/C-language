//* To input a 2D array of size m*n and perform mirror reversed operation vertically *//
#include <stdio.h>
int main()
{
 int a[10][10],i,j,t,m,n,k;
 printf("Input no of rows & columns\n"); 
 scanf("%d%d",&m,&n); 
 printf("Input array elements\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n; j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=0,k=n-1;j<n/2;j++,k--)
  {
   t=a[i][j];
   a[i][j]=a[i][k];
   a[i][k]=t;
  }
 }
 printf("Reverse Mirror Operation Vertically is:\n"); 
 for (i=0;i<m;i++)
 {
  for(j=0;j<n; j++)
  {
   printf ("%d\t",a[i][j]);
  }
  printf("\n");
 }
 return 0;
}

//* To input a 2D array of size m*n and perform mirror reversed operation horizontally *//
#include <stdio.h>
int main()
{
 int a[10][10],i,j,t,m,n,k;
 printf("Input no of rows & columns\n"); 
 scanf("%d%d",&m,&n); 
 printf("Input array elements\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(j=0;j<n;j++)
 {
  for(i=0,k=m-1;i<n/2;i++,k--)
  {
   t=a[i][j];
   a[i][j]=a[k][j];
   a[k][j]=t;
  }
 }
 printf("Reverse Mirror Operation Horizontally is:\n"); 
 for (i=0;i<m;i++)
 {
  for(j=0;j<n; j++)
  {
   printf ("%d\t",a[i][j]);
  }
  printf("\n");
 }
 return 0;
}

//* To input a 2D array of size m*n and perform mirror reversed operation across principle diagonal *//
#include <stdio.h>
int main()
{
    int a[10][10],i,j,m,n,k,temp;
    printf("Input no of rows and columns in a square matrix\n");
    scanf("%d%d",&m,&n);
    if(m!=n)
    {
        printf("Operation is not possible\n");
    }
    else
    {
     printf("Input array elments\n");
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     k=m-1;
     int c=1;
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
            if(i+j<=m/2)
            {
             temp=a[i][j];
             a[i][j]=a[i+k][j+k];
             a[i+k][j+k]=temp;
            }
            k--;
         }
      k=m-1-c;
      c++;
     }
     printf("Reverse Mirror Operation across principle diagonal is:\n");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
     }
    }
    return 0;
}
