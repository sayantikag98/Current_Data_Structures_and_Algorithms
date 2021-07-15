#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int sq_a = a*a;
	int sq_b = b*b;
	int sq_c = c*c;
	bool cond1 = ((sq_a + sq_b) == sq_c);
	bool cond2 = ((sq_a + sq_c) == sq_b);
	bool cond3 = ((sq_b + sq_c) == sq_a);

	if(cond1 or cond2 or cond3) cout<<"right_angled_triangle\n";
	else cout<<"not_a_right_angled_triangle\n";
}