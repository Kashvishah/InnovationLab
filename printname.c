#include <stdio.h>

struct print 
{
    char a[20];
};
struct print input()
{
    struct print k;
    printf ("enter the name : \n");
    gets(k.a);
    return k;
}
struct print compute(struct print k)
{
    return k;
}
void output(struct print k)
{
    printf("%s",k.a);
}
int main()
{
    struct print k;
    k=input();
    k=compute(k);
    output(k);
}

