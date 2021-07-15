#include<bits/stdc++.h>
#define int long long
using namespace std;

int fib_rec(int num){
	if(num ==0 or num ==1) return num;
	else return fib_rec(num-1) + fib_rec(num-2);

}

int fib_memo(int num, vector<int> &arr){
	if(arr[num] == -1) arr[num] = fib_memo(num-1, arr) + fib_memo(num-2, arr);
	return arr[num];
}

int fib_tabu(int num){
	int a = 0, b = 1, count = 0;
	while(count!= num){
		int c = a + b;
		a = b;
		b = c;
		count++;
	}
	return a;
}


int32_t main(){
	int num;
	cin>>num;
	clock_t start = clock();
	cout<<fib_rec(num)<<endl;
	clock_t end = clock();
	double elapsed = double(end - start)/CLOCKS_PER_SEC;
	cout<<elapsed<<endl;
	start = clock();
	vector<int> arr(num+1, -1);
	arr[0] = 0;
	arr[1] = 1;
	cout<<fib_memo(num, arr)<<endl;
	end = clock();
	elapsed = double(end - start)/CLOCKS_PER_SEC;
	cout<<elapsed<<endl;
	start = clock();
	cout<<fib_tabu(num)<<endl;
	end = clock();
	elapsed = double(end - start)/CLOCKS_PER_SEC;
	cout<<elapsed<<endl;
}