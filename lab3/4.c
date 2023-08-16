#include<stdio.h>
float getArea(float r)
{

    return 3.1416*r*r;
}
void printVol(float r)
{
    printf("%f",(4*r*getArea(r))/3);
}
int main ()
{
    printVol(2);
}
