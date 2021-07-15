#include<bits/stdc++.h>
using namespace std;

class Person{
public:
	string name;

};

int main(){
	Person p;
	p.name = "Sayantika";
	cout<<p.name<<endl;
	Person* p1 = new Person;
	p1->name = "Ghosh";
	cout<<p1->name<<endl;

}