#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
    float x,y;
    printf("Enter the certain cordinate (x,y): ");
    scanf("%f %f",&x,&y);
    float r,phi;

    r=sqrt((pow(x,2))+(pow(y,2)));
    phi= atan(y / x);

    phi =phi*(180/pi);
    printf(" polar value:\n r= %.2f\n phi= %.2f\n",r,phi);

}
