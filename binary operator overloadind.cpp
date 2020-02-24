#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int h,m,s;
	public:
		
	void getdata()
	{
		cout<<"enter the hours"<<endl;
		cin>>h;
		cout<<"enter the minutes"<<endl;
		cin>>m;
		cout<<"enter the seconds"<<endl;
		cin>>s;
	}
	void display()
	{
		cout<<h<<"hr"<<":";
		cout<<m<<"min"<<":";
		cout<<s<<"sec";
	}
	
	A operator + (A o)
	{
		A temp;
		temp.h=h+o.h;
		temp.m=m+o.m;
		temp.s=s+o.s;
		
		if(temp.s>=60)
		{
			temp.s-=60;
			temp.m++;
		}
		
		if(temp.m>=60)
		{
			temp.m-=60;
			temp.h++;
		}
		return temp;
	}
};

int main()
{
	A ob1, ob2, ob3;
	
	ob1.getdata();
	ob2.getdata();
	
	ob3=ob1+ob2;
	
	ob3.display();
	
	getch();
}
