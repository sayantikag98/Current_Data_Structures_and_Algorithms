#include<bits/stdc++.h>
using namespace std;

class Parent{

protected:

	int count;
public:

	Parent(){
		count = 0;
		cout<<"It is the first parent constructor\n";
	}
	Parent(int c){
		count = c;
		cout<<"It is the second parent constructor\n";
	}

	int get_count()const{
		return this->count;
	}

	Parent operator ++(){
		(this->count)++;
		return Parent(++this->count);
	}




};

class Child: public Parent{
public:
	Child():Parent(9){
		cout<<"It is the first child constructor\n";
	}

};

int main(){

	Child c;
	cout<<c.get_count()<<endl;
	++c;
	cout<<c.get_count()<<endl;

	string str;
	cout<<sizeof(str)<<endl;

}