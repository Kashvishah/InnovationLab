#include <stdio.h>
struct compare 
{
    float a ;
    float b;
    float c;
    float sum ;
    
    
};
struct compare input ()
{
    struct compare k;
    printf(" enter three numbers: ");
    scanf(" %f%f%f",&k.a,&k.b,&k.c);
    return k;
}
struct compare compute (struct compare k)
{
    if(k.a>k.b && k.a>k.c)
    {
        k.sum=k.a;
        
    }
    else if(k.b>k.a && k.b>k.c)
    {
        k.sum=k.b;
        
    }
    else if (k.c>k.a && k.c>k.b)
    {
        k.sum=k.c;
    }
    return k;
}
void output (struct compare k)
{
    printf(" greater value is %f",k.sum);
    return k;
}
int main()
{
    struct compare k;
    k=input();
    k=compute(k);
    output(k);
    
}
