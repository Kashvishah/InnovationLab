#include<stdio.h>
struct add
{
        float a;
        float b;
        float sum;
};
struct add input()
{
        struct add k;
        printf("Enter two numbers\n");
        scanf("%f%f",&k.a,&k.b);
        return k;
}
struct add compute(struct add k)
{
        k.sum=k.a+k.b;
        return k;
}
void output(struct add k)
{
        printf("The sum is %f\n",k.sum);
}
int main()
{
        struct add k;
        k=input();
        k=compute(k);
        output(k);
}

