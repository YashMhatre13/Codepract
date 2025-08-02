#include<iostream.h>
#include<conio.h>
void main()
{
int a[20],b,n,odd,even;
clrscr();
cout<<"ENTER HOW MANY NUMBERS:\n";
cin>>n;
cout<<"ENTER THE"<<n<<"NUMBERS:\n";
for(b=0;b<n;b++)
cin>>a[b];
odd=0;
even=0;
for(b=0;b<n;b++)
{
if(a[b]%2==0)
even++;
else
odd++;
}
cout<<"NUMBER OF ODDS:"<<odd<<endl;
cout<<"NUMBER OF EVENS:"<<even<<endl;
getch();
}