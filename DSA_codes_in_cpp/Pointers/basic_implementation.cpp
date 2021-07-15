#include<bits/stdc++.h>
using namespace std;

int* arr = new int [100];

void func(int* arr){
	cout<<arr[0]<<"\n";
}

int main(){
	float gh = 2.6;
	double d = 8.9;
	long l = 5678;
	int o = 0;

	int* ptr = &o;
	float* ptr1 = &gh;
	*ptr = 20;
	cout<<(*ptr)<<" "<<o<<"\n";
	cout<<"Hello\n";
	cout<<sizeof(o)<<"\n";
	cout<<sizeof(ptr)<<"\n";
	cout<<sizeof(ptr1 )<<"\n";

	delete(arr);
	func(arr);

	int* x = new int;
	*x=10;
	cout<<* x<<"\n";
	cout<<arr[0]<<"\n";
	cout<<arr+0<<"\n";

	int y = 89;
	int &w = y;
	w = 90;
	cout<<y<<" "<<w<<endl;
	cout<<&y<<" "<<&w<<endl;

	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	vector<int>&v1=v;
	for(const auto &i: v){
		cout<<i<<" ";
		cout<<typeid(i).name()<<endl;
	}
	cout<<"\n";

	pair<int, int> p;
	p={10,20};
	cout<<p.first<<" "<<p.second<<"\n";

	string s;
	cout<<s.size()<<endl;
	cout<<s.length()<<endl;

	string str1[5];

	for (int i = 0; i<5; i++){
		getline(cin, str1[i]);
		cout<<str1[i]<<"\n";

	}

	int siz = sizeof(str1)/sizeof(str1[0]);
	cout<<siz<<endl;
	for(int i = 0; i<siz; i++){
		cout<<str1[i]<<"\n";
	}

	for(const auto &ch: str1[0]){
		cout<<ch<<" ";
	}
	cout<<"\n";

	int i;
	cin>>i;
	string str2;
	getline(cin, str2);
	getline(cin,str2);
	cout<<i<<endl;
	cout<<str2<<"\n";


}


//pointer cannot be accessed without initialization

//*ptr ->dereferencing operator

// in heap memory we cannot access values using variable names but in that case we have to use a pointer
