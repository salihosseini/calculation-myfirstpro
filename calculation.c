#include<stdio.h>
#include<stdio.h>


int main()
{
    float a;
    char b;
    float c;

    printf("please enter your numbers as (+,-,*,/,%%)\n");
    scanf("%f %c %f",&a,&b,&c);

    switch (b)
    {
    case '+':
        printf("+");
        break;
        
    case '-':
        printf("-");
        break;
        
    case '*':
        printf("*");
        break;
        
    case '/':
        printf("/");
        break;
    
    case '%':
        printf("%%");
        break;
    
    
    
    
    default:
        break;
    }




    return 0;
}