#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,h,t,u,sum;
clrscr();
cout<<"ARMSTRONG NOS FROM 1-999:\n";
for(a=1;a<1000;a++)
{
h=a/100;
b=a%100;
t=b/10;
u=b%10;
sum=h*h*h + t*t*t + u*u*u;
if(a==sum)
cout<<a<<endl;
}
getch();
}