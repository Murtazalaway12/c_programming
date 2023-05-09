#include<iostream>
using namespace std;
void swap (int&,int&);
int main ()
{
	int x,y;
	cout<<"enter 2 number"<<endl;
	cin>>x;
	cin>>y;
	swap(x,y);
	cout<<"after swap:"<<endl;
	cout<<"x"<<x<<"\ny"<<y<<endl;
	return 0;
}
void swap(int&x,int&y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	
}

