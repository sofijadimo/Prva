/*
 * fac.cpp
 *
 *  Created on: 13 Nov 2016
 *      Author: sofijadimoska
 */

#include <iostream>
#include <cmath>

using namespace std;
int fa (int a);
int main()
{
int g,l;
cin>>g;
l=fa(g);
cout<<l<<endl;
}
int fa(int a)
{
	int m=a;
	int f=1;
	while (f<a)
	{
		m=m*(a-f);
		f++;
	}
	return m;
}





