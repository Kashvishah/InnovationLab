#include <stdio.h>

struct print 
{
    int a;
};
struct print input()
{
    struct print k;
    printf ("enter the number : \n");
    scanf("%d",&k.a);
    return k;
}
struct print compute(struct print k)
{
    return k;
}
void output(struct print k)
{
    printf("%d",k.a);
}
int main()
{
    struct print k;
    k=input();
    k=compute(k);
    output(k);
}
