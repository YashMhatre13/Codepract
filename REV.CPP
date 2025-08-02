
#include<iostream.h>
#include<conio.h>
#include<string.h>

void reverse(char *p)
{
 int cnt,a;
 char p;
 cnt=strlen(p)-1;
 for(a=0;a<cnt;a++)
 {
   cnt=p[a];
   p[a]=p[a+1];
   p[a+1]=cnt;
   cnt--;
 }
}
void main()
{
  char str[20];
  clrscr();
  cout<<"ENTER A STRING:\n";
  cin.get(str,20);
  reverse(str);
  cout<<"REVERSED STRING IS:"<<str;
  getch();
  }


