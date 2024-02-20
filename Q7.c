//* To input a string and remove extra white spaces *//
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],l,c=0,i,k;
    printf("Input a string\n");
    fgets(s,20,stdin);
    l=strlen(s);
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
          k=i;
          while(k<=l)
          {
             s[k]=s[k+1];
             k++;
          }
        }
        i++;
    }
    printf("New string is:\n%s",s);
    return 0;
}
