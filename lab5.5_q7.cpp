#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"*****"<<endl;
	for(i=1;i<4;i++)
	{
		for(j=0;j<i;j++)
		{cout<<" ";}
		cout<<"*   *"<<endl;
	}
	cout<<"    *****"<<endl;
	return 0;
}

