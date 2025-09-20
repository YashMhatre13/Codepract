#include<iostream.h>
#include<conio.h>
void main()
{
int n,s,u;
clrscr();
cout<<"ENTER A NUMBER:\n";
cin>>n;
s=0;
do
{
u=n%10;
s=s+u;
n=n/10;
}while(n!=0);
cout<<"sum:"<<s;
getch();
}
