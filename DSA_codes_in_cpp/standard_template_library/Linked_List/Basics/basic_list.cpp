#include<bits/stdc++.h>
using namespace std;

void print(list <int> &l){
	for(list<int>::iterator it = l.begin(); it!=l.end(); it++){
		cout<<*it<<" ";
	}
	cout<<"\n";
}

int main(){
	list<int> l;
	l.pop_back();
	l.push_back(10);
	l.push_back(20);
	l.push_front(30);
	l.push_front(40);
	l.push_back(50);
	cout<<l.front()<<endl;
	cout<<l.back()<<endl;
	l.pop_back();
	l.pop_front();
	cout<<l.front()<<endl;
	cout<<l.back()<<endl;
	cout<<l.size()<<endl;
	cout<<l.empty()<<endl;
	cout<<l.size()<<endl;
	print(l);

}