#include<stdio.h>
float getarea(float r)
{
    float area;
    area=3.1416*r*r;
    return area;
}
int main ()
{
    float area,r;
    scanf("%f",&r);
    printf("%f",getarea(r));
}
