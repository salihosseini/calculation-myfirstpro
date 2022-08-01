#include<stdio.h>
#include<stdio.h>

void add(float a,float b);
void sub(float a,float b);
void multi(float a,float b);
void div(float a,float b);

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
        add(a,c);
        break;
        
    case '-':
        sub(a,c);
        break;
        
    case '*':
        multi(a,c);
        break;
        
    case '/':
        div(a,c);
        break;

    default:

        printf("your form of  entering is wrong ");
        break;
    }
    return 0;
}


void add(float a,float b)
{
    printf("%.2f",a+b);
}

void sub(float a,float b)
{
    printf("%.2f",a-b);

}

void multi(float a,float b)
{
    printf("%.2f",a*b);

}

void div(float a,float b)
{
    printf("%.2f",a/b);

}