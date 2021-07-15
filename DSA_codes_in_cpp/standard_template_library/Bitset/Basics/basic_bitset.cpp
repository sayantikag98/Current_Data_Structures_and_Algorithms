#include<bits/stdc++.h>
using namespace std;

int main(){
	bitset<16> b1(11);
	bitset<16> b2(string("1010"));
	cout<<b1.count()<<" "<<b2.count()<<endl;
	cout<<b1.any()<<" "<<b2.any()<<endl;
	cout<<b1.none()<<" "<<b2.none()<<endl;
	cout<<(b1^b2)<<endl;
	cout<<(b1&b2)<<endl;
	cout<<(b1|b2)<<endl;
	cout<<(b1<<10)<<endl;
	cout<<(b1>>10)<<endl;
	cout<<b1<<endl;
	b1.set(1,0);
	cout<<b1<<endl;
	b1.reset(0);
	cout<<b1<<endl;
	b1.flip();
	cout<<b1<<endl;
	b1.flip(3);
	cout<<b1<<endl;
	b1[0] = 0;
	cout<<b1<<endl;
}