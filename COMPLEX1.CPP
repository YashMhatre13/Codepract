#include<iostream.h>
#include<conio.h>
class complex
{
 private:
	float real,imag;
 public:
	void getdata();
	void display();
	complex operator+(complex c);
};
void complex::getdata()
{
  cout<<"ENTER REAL AND IMAGINARY COEFFICIENTS:\n";
  cin>>real>>imag;
}
void complex::display()
{
  cout<<real<<"+"<<imag<<"i\n";
}
complex complex::operator+(complex c)
{
  complex temp;
  temp.real= real+c.real;
  temp.imag=imag+c.imag;
  return(temp);
}
void main()
{
  complex c1,c2,c3;
  clrscr();

  c1.getdata();
  c2.getdata();

  cout<<"FIRST COMPLEX NUMBER:\n";
  c1.display();
  cout<<"SECOND COMPLEX NUMBER:\n";
  c2.display();
  c3=c1+c2;
  cout<<"AFTER ADDITION:\n";
  c3.display();
  getch();
}




