#include<iostream>
using namespace std;
int main()
{
	//asking for height
	cout<<"enter the height:-";
	//declaring variables
	int i=0,h,w,j;
	//taking height
	cin>>h;
	//asking for width
	cout<<"enter the width";
	//taking width
	cin>>w;
	//the first line
	for(i=0;i<w;i++)
	{cout<<"*";}
	cout<<endl;
	//the central part
	for(i=0;i<(h-2);i++)
	{
		cout<<"*";
		for(j=0;j<(w-2);j++)
		{cout<<" ";}
		cout<<"*"<<endl;
	}
	//the last line
	for(i=0;i<w;i++)
	{cout<<"*";}
	return 0;
}

