
#include<iostream>
using namespace std;
int main()
{
	//asking for height
	cout<<"Enter the  value of height:-";
	//declaring variables
	int i,j,h,w;
	//taking input
	cin>>h;
	//asking for width
	cout<<"Enter the value of width:-";
	//taking width
	cin>>w;
	//for going to the next line
	for(i=0;i<h;i++)
	{
		//for printing the lines
		for(j=0;j<w;j++)
		{cout<<"*";}
		cout<<endl;
	}
}
