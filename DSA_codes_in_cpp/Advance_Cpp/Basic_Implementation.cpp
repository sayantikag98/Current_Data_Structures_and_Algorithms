#include<bits/stdc++.h>
using namespace std;

int gun(int n){
	return n;
}

void fun1(int(*ptr)(int)){
	cout<<"This is fun!!\n";
	int ans = ptr(10);
	cout<<ans<<endl;
}


int fun(int n, int ed){
	return n;
}

void func(vector <int> &v){
	for(int &i: v){
		auto glambda = [] (int n){return n*n;};
		cout<<glambda(i)<<" ";
	}
	cout<<"\n";
}

int main(){
	int x = 10;
	fun1([](int n){return n;});

	auto glambda = [](int a, int b){ return a>b;};
	bool(*glambda1)(int, int) = [] (int a, int b){return a>b;};
	cout<<glambda(4,3)<<" "<<glambda1(4,3)<<endl;

	// void(*ptr)() = fun1; // write like this or use auto
	//or

	auto ptr = fun1;  // '&' operator is optional
	ptr(gun);
	cout<<ptr<<" "<<*ptr<<endl;
	cout<<fun1<<endl;

	int (*fptr)(int, int) = fun;

	cout<<fptr<<" "<<*fptr<<endl;

	// map<string, int> m;
	// for(map<string, int> :: iterator it = m.begin(); it!=m.end(); it++){

	// }

	// for(auto it = m.begin(); it!= m.end(); it++){

	// }
	vector<int> v{1,2,3};

	void(*ptr_func)(vector<int>&) = func;
	ptr_func(v);



}