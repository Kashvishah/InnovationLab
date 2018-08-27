#include <stdio.h>
struct compare 
{
    float a ;
    float b;
    float sum ;
    
    
};
struct compare input ()
{
    struct compare k;
    printf(" enter two numbers: ");
    scanf(" %f%f",&k.a,&k.b);
    return k;
}
struct compare compute (struct compare k)
{
    if(k.a>k.b)
    {
        k.sum=k.a;
        
    }
    else if(k.b>k.a)
    {
        k.sum=k.b;
        
    }
    return k;
}
void output (struct compare k)
{
    printf(" freater value is %f",k.sum);
    return k;
}
int main()
{
    struct compare k;
    k=input();
    k=compute(k);
    output(k);
    
}
