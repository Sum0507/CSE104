#include<stdio.h>
void printMultiplicaption(int x)
{
    int i;
    for (i=1;i<11;i++)
    {
        printf("%d x %d = %d\n",x,i,x*i);
    }
}
int main ()
{
    int i;
    for(i=1;i<11;i++)
    {
        printMultiplicaption(i);
        printf("\n");
    }
}
