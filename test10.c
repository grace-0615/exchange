#include <stdio.h>
void Swap2(int *px , int *py)
{
int z=0;
z=*px;
*px=*py;
*py=z;


}
int main()
{
int a=0;
int b=0;
scanf("%d%d",&a,&b);
printf("Before exchange:a=%d b=%d\n",a,b);

Swap2(&a,&b);

printf("After exchange:a=%d b=%d\n",a,b);

    return 0;
}