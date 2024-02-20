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

