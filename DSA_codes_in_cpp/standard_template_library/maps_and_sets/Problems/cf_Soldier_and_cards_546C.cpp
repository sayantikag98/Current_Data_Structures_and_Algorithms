#include<bits/stdc++.h>
using namespace std;

queue<int> q1;
queue<int> q2;

void func(){
	int count = 0, win = 0;
	while(q1.size()!=0 and q2.size()!=0){
		int num1 = q1.front(), num2 = q2.front();
		if(count>150){
			cout<<-1;
			return;
		}
		if(num1>num2){
			q1.pop();
			q2.pop();
			q1.push(num2);
			q1.push(num1);
		}
		else{
			q1.pop();
			q2.pop();
			q2.push(num1);
			q2.push(num2);
		}
		count++;
	}
	if(!q1.size()){
		win = 2;
	}
	else{
		win = 1;
	}
	cout<<count<<" "<<win<<endl;
}

int main(){
	int n, k1, k2, num1, num2;
	cin>>n>>k1;
	while(k1--){
		cin>>num1;
		q1.push(num1);
	}
	cin>>k2;
	while(k2--){
		cin>>num2;
		q2.push(num2);
	}
	func();
}