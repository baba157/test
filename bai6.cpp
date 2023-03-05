#include <conio.h>
#include <stdio.h>
int UCLN(int a,int b)
{
       if(a==b)
        return a;
    else
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
     }
    return UCLN(a,b);
}
int main() {
int a,b;
printf("Nhap a: ");
scanf("%d",&a);
printf("Nhap b: ");
scanf("%d",&b);
printf("Uoc chung lon nhat cua a va b la: ",UCLN(a,b));
}