#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,n;
    printf("Enter the value of P0: ");
    scanf("%d",&a);
    printf("Enter the value of P1: ");
    scanf("%d",&b);
    printf("Enter the value of P2: ");
    scanf("%d",&c);

    printf("\nWhich operation you want?\n");
    printf("--------------------------\n");
    printf("1. Common\n");
    printf("2. Arbitrary\n");
    printf("3. Minimum\n");
    printf("4. Priority\n");
    printf("5. End");
    printf("--------------------------\n");

    do{
        printf("\nEnter Your Choice:");
    scanf("%d",&n);
    if(n>5)
        printf("Wrong Key Pressed. Try Again.");

    if(n==1)
    {
        if(a == b && b == c)
            printf("%d is stored",c);
        else
            printf("Its an illegal operation");
    }
    else if(n==2)
    {
        int random;
        random=rand();


        if(random%2==0)
        printf("%d is stored\n",a);
        else if(random<a)
            printf("%d is stored\n",b);
        else
            printf("%d is stored\n",c);

    }
    else if(n==3)
    {
        printf("%d is stored",a);
    }
    else if(n==4)
    {
        printf("%d is stored (Summation as Priority)\n",a+b+c);


        if(a>b)
    {
        if(a>c)
            printf("%d is stored (Maximum as Priority)",a);
        else
            printf("%d is stored (Maximum as Priority)",c);
    }
    else
    {
        if(b>c)
            printf("%d is stored (Maximum as Priority)",b);
        else
            printf("%d is stored (Maximum as Priority)",c);
    }
    }
    }
    while(n!=5);

}
