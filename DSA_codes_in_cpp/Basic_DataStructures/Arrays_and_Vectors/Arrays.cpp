#include<bits/stdc++.h>
using namespace std;

int arr1 [100000000]; // global declaration

void func() {
	int** arr = new int* [10];
	arr[0] = new int [10];
	arr[0][9] = 10;

	cout << arr[0][9] << "\n";
}

int main() {
	int a;
	cin >> a;
	cout << a << "\n";
	int* arr = new int [100000000]; // heap memory
	int arr2 [100]; // stack memeory
	func();
	int arra[] {5,9,3,2,1};
	int siz = sizeof(arra) / sizeof(arra[0]);
	sort(arra, arra+siz);
	cout<<"\n";
	for(int i = 0; i<siz; i++){
		cout<<*(arra+i)<<" ";
	}
	cout<<endl;
	reverse(arra, arra+siz);
	for(int i = 0; i<siz; i++){
		cout<<*(arra+i)<<" ";
	}
	cout<<endl;
	// map<int,int> map_im{{8,9},{9,60},{7,80}};
	// reverse(map_im.begin(),map_im.end());

	auto it = max_element(arra, arra+siz);
	cout<<*it<<endl;
	it = min_element(arra, arra+siz);
	cout<<*it<<endl;
	cout<<accumulate(arra,arra+siz,0)<<endl;
	cout<<find(arra, arra+siz, 9)<<endl;
	cout<<*(arra+siz)<<endl;

}