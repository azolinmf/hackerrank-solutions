#include<stdio.h>
int StringLength(char s[])
{
    int i=0;
    while (s[i]!='\0')
        i++;
    return i;
}
void main()
{
    int len;
    char s[100];
    printf("Enter a string\n");
    gets(s);
    len = StringLength(s);
    printf("The length of the entered string is : %d", len);

}
