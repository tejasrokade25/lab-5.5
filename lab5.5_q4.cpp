#include<iostream>
using namespace std;
int main()
{
	//declaring variables
	int i,j,k,h,w;
	//asking for height
	cout<<"enter the height";
	//taking height
	cin>>h;
	//asking for width
	cout<<"enter the width";
	//taking widh
	cin>>w;
	for(i=0;i<w;i++)
	{
		for(k=0;k<(h-(1+i));k++)
		{cout<<" ";}
		for(j=0;j<w;j++)
		{cout<<"*";}
		cout<<endl;
	}
}

