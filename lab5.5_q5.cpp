#include<iostream>
using namespace std;
int main()
{
	//declaring variables
	int i,j,h,w;
	//asking for height
	cout<<"Enter the height:-";
	//taking height
	cin>>h;
	//asking for width
	cout<<"Enter the width:-";
	//taking width
	cin>>w;
	for(i=0;i<(h-1);i++)
	{cout<<" ";}
	for(i=0;i<w;i++)
	{cout<<"*";}
	for(i=0;i<(h-2);i++)
	{
		for(j=0;j<((h-2)-i);j++)
		{cout<<" ";}
		cout<<"*";
		for(i=0;i<(w-2);i++)
		{cout<<" ";}
		cout<<"*"<<endl;
	}
	for(i=0;i<w;i++)
	{cout<<"*";}
	return 0;
}

