#include<iostream.h>
#include<conio.h>
void main()
{
 int a[3][3],r,c,p;
 clrscr();
 cout<<"ENTER ELEMENTS OF 3 BY 3 MATRIX\n";
 for(r=0;r<3;r++)
{
 for(c=0;c<3;c++)
 cin>>a[r][c];
 }
 cout<<"YOU ENTERED FOLLOWING MATRIX\n";
 p=1;
 for(r=0;r<3;r++)
 {
 for(c=0;c<3;c++)
 {
 if(r==c)
 p= p * a[r][c];
 cout<<a[r][c]<<"\t";
 }
 cout<<endl;
 }
 cout<<"PRODUCT:"<<p<<endl;
 getch();
 }