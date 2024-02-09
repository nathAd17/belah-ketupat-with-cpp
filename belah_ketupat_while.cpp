#include <iostream>
using namespace std;
int main() {
	
	int x,j,b,d,e,f;
	
	x=1;
	while(x<=7) 
	{
//	bentuk spasi dismping sgitiga
		j=7;
		while(j>x)
		{
			cout<<" ";
			j--;
		}
//	bentuk bintang
		b=1;
		while(b<=(2*x-1))
		{
			cout<<"*";
			b++;
		}
		cout<<endl;
		x++;
	}	

	d=1;
	while(d<=7)
	{
//	bentuk spasi dismping sgitiga
		e=1;
		while(e<d)
		{
			cout<<" ";
			e++;
		}
//	bentuk bintang
		f=7;
		while(f>=(2*d-7))
		{
			cout<<"*";
			f--;
		}
		cout<<endl;
		d++;
	}
	
	return 0;
}
