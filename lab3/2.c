#include<stdio.h>
int getMax(int A,int B)
{
    if(A>B){ return A;}
    else return B;
}
int main()
{
   int A,B;
   scanf( "%d %d",&A ,&B);
         printf("%d",getMax(A,B));
}
