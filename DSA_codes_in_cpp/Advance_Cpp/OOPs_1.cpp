#include<bits/stdc++.h>
using namespace std;

class Person{
public:

	string name;
	int age;

	// Person(string name, int age){
	// 	this->name = name;
	// 	this->age = age;
	// }

	Person* point(){
		return this;
	}


};

struct People{
private:
	int x;
	string name;

};

int main(){
	Person p; // here default constructor comes in can or cannot pass a parenthesis 
	p.point();
	People p1;
	cout<<sizeof(p1)<<endl;

}
