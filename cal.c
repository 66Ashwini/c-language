#include<stdio.h>
int main()
{
    int a,b,c;
    char choice;
    printf("press + for addition\n");
    printf("press - for sub\n");
    printf("press * for multip\n");
    printf("press / for div\n");
    printf("press % for remainder\n");
    printf("enter an operator:");
    scanf("%c",&choice);
    printf("enter any two values:");
    scanf("%d%d",&a,&b);
    switch(choice)
{ 
    case '+': c=a+b;
    printf("sum=%d",c);
    break;
    case '-': c=a-b;
    printf("sub of %d and %d is %d",a,b,c);
    break;
    case '*':c=a*b;
    printf("multip for %d and%d is %d",a,b,c);
    break;
    case'/':c=a/b;
    printf("div of %d and %d is %d",a,b,c);
    break;
    case '%':c=a%b;
    printf("remainder of %d and%d is %d",a,b,c);
    break;
    deafault:printf("invalid choice");
}return 0;
}