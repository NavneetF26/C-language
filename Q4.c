//* To check if a string is palindrome or not*//
#include <stdio.h>
#include <string.h>
int main()
{
    char s[20],l,f=0,i,j;
    printf("Input a string");
    fgets(s,20,stdin);
    l=strlen(s);
    for(i=0,j=l-1-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            f++;
            break;
        }
    }
    if(f==1)
    printf("This string is not a palindrome number");
    else
    printf("This string is a palindrome number");
    return 0;
}
