#include <iostream>
using namespace std;
int main() {
	
	int x,j,b,d,e,f;
	
	for(x=1;x<=7;x++) 
	{
//	bentuk spasi dismping sgitiga
		for(j=7;j>x;j--)
		{
			cout<<" ";
		}
//	bentuk bintang
		for(b=1;b<=(2*x-1);b++)
		{
			cout<<"*";
		}
		cout<<endl;
	}	
	for(d=1;d<=7;d++)
	{
		for(e=1;e<d;e++)
		{
			cout<<" ";
		}
		for(f=7;f>=(2*d-7);f--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
