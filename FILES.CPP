#include<fstream.h>
#include<conio.h>
void main()
{
ifstream fcountry,fcapital;
char fnam1[20],fnam2[20],str1[21],str2[21];
clrscr();
cout<<"ENTER COUNTRY FILE NAME\n";
cin>>fnam1;
fcountry.open(fnam1);
if(!fcountry)
 cout<<"country not found";
 else
 {
	cout<<"\nenter capital file name\n";
	cin>>fnam2;
	fcapital.open(fnam2);
	if(!fcapital)
	cout<<"capital not found";
	else
	{
	  cout<<"\n\n COUNTRY \t CAPITAL \n\n";
	  while(!fcountry.eof())
	  {
		fcountry.getline(str1,20,'\n');
		cout<<str1<<"\t\t";
		fcapital.getline(str2,20,'\n');
		cout<<str2<<endl;
	  }
	}
 }
 fcapital.close();
 fcountry.close();
 getch();
 }