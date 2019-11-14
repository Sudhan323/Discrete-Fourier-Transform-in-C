#include<stdio.h>
#include<conio.h>
#include<math.h>
#define N 8 //Size of the signal
float x[N] = {0,0.707,1,0.707,0,-0.707,-1,-0.707};//Signal Input
double y[N] = {0};//Output frequency domain in y
int main()
{
    int i=0,j=0;
    double real=0,img=0;
    for(i=0;i<N;i++)
    {
       for(j=0;j<N;j++)
       {
            real+=cos(2*3.141592654*i*j/N)*x[j];
            img+=sin(2*3.141592654*i*j/N)*x[j]*-1;
       }
       y[i]=sqrt(real*real + img*img);
       printf("%f\n",y[i]);
       real=0;
       img=0;
    }
    return 0;
}
