#include<iostream.h>
#include<conio.h>
void main()
{
int p,n,r,a;
clrscr();
cout<<"5 SETS OF FIBONACCI SERIES\n";
p=0;
n=1;
cout<<p<<endl<<n<<endl;
for(a=1;a<9;a++)
{
r=p+n;
p=n;
n=r;
cout<<r<<endl;
}
getch();
}