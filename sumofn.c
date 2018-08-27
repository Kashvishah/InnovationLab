#include <stdio.h>
struct add
{
    int n ;
    float a[100];
    float sum ;
    
};
struct add input()
{
    struct add k;
    int i;
    printf(" enter the size of the array :");
    scanf("%d",&k.n);
    printf(" enter the element:");
    
    for(i=0;i<k.n;i++)
    {
        scanf(" %f",&k.a[i]);
    }return k;
}
struct add compute(struct add k)
{
    int i;
    
    for(i=0;i<k.n;i++)
    {
    k.sum = k.sum+k.a[i];
    }
    return k;

}
void output (struct add k)
{
    printf(" the sum is %f",k.sum);
}
int main()
{
    struct add k;
    k=input();
    k=compute(k);
    output(k);
    
}
