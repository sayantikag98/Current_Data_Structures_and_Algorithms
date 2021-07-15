#include<bits/stdc++.h>
using namespace std;


class Person{
public:
	string name;
	int age;

	void print(){
		cout<<name<<endl;
	}

};


int main(){
	char ch[] = "Sayantika Ghosh";
	// cout<<ch<<endl;
	int i = 10;
	int const *ptr = &i;
	// (*ptr)++;
	int j = 50;
	ptr = &j;

	Person p;
	p.name = "Sayantika";
	// Person.print();

	int* p1 = &j;
	cout<<p1<<" "<<*p1<<endl;
	delete(p1);
	cout<<p1<<" "<<*p1<<endl;
	int k, *ptr2;

	void* p3 = &j;
	cout<<*p3<<endl;
}