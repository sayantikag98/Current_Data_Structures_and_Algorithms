#include<bits/stdc++.h>
using namespace std;

// what if const is applied to a member function

class Person{
public:
	int age;
	string name;
	int* ptr;

	// Person(){
	// 	age = 0;
	// 	name = "";
	// };

	//DEFAULT CONSTRUCTOR SHALLOW COPY CONSTRUCTOR

	Person(): age(0), name("Sayantika"), ptr(NULL){};

	Person(Person &pi){   //DEEP COPY CONSTRUCTOR
		this->age = pi.age;
		this->name = pi.name;
		this->ptr = new int(*(pi.ptr));
	}

	Person(int a): age(a){};

	string get_name()const{
		return this->name;
	}

	int get_age()const{
		return this->age;
	}

	//DEFINING THE FUNCTION BODY OUTSIDE OF CLASS

	int change_age(int age);

	//OPERATOR OVERLOADING

	// Case 1: Prefix operator 

	void operator ++ (){
		this->age+=1;
	}

	// Case 2: Postfix operator

	void operator --(int){
		this->age-=1;
	}

	// Case 3: Binary operator

	Person operator +(Person &pt){
		int temp = this->age + pt.age;
		return Person(temp);}

	void operator delete(){
		delete(this);
	}

	

	Person make(){
		Person p;
		return Person(p);
	}


};

int Person::change_age(int age){
	this->age = age;
	return this->age;
}

class Test{
public:
	mutable int x;
	Test(int x){
		this->x = x;
	}

	int get_x()const{

		this->x = 10;  // cannot change the value of the data member if the member function is declared as const
		return x;
	}

	void set_x(int x) const{
		this->x = x;
	}

};

void fun(const Test &t){
	cout<<t.get_x()<<endl;
	t.set_x(70);
	cout<<t.get_x()<<endl;

}

int main(){
	const int x = 16;
	const int* ptr = &x;//Either write like this or like the below line
	int* ptr1 = (int*)&x;
	*ptr1 = 20;
	cout<<x<<" "<<*ptr1<<" "<<*ptr<<endl;
	cout<<ptr<<" "<<ptr1<<" "<<&x<<endl;


	int* ptr2 = new int;
	*ptr2 = 9;
	cout<<*ptr2<<endl;
	//ptr2 = &x; // can't write like this need to typecast to int* 
	ptr2 = (int*)&x;

	const int* ptr3 = new int;
	// *ptr3 = 9;      // cannot update a const pointer
	cout<<*ptr3<<endl;  // de-referencing possible
	ptr3 = &x;			// re-initializing possible

	int const *ptr4 = new int;
	// *ptr4 = 9;        // cannot update a const pointer
	cout<<*ptr4<<endl;   // de-referencing possible
	ptr4 = &x;           // re-initializing possible

	// basically const int* ptr is same as int const* ptr

	int* const ptr5 = new int;
	*ptr5 = 9;           // updation possible 
	cout<<*ptr5<<endl;   // de-referencing possible
	// ptr5 = &x;         // re-initializing not possible


	//to test what if the member function is declared as const

	Test t(34);
	cout<<t.get_x()<<endl;
	t.set_x(56);
	cout<<t.get_x()<<endl;
	fun(t);

	Person p;
	cout<<p.get_name()<<" "<<p.get_age()<<endl;
	p.get_name();
	p.change_age(90);
	cout<<p.get_age()<<endl;
	int l = 20;
	p.ptr = &l;

	Person m = p;
	cout<<m.get_age()<<endl;
	m.age = 30;
	cout<<p.ptr<<" "<<m.ptr<<endl;
	cout<<*(p.ptr)<<" "<<*(m.ptr)<<endl;
	cout<<p.get_age()<<endl;
	++p;
	cout<<p.get_age()<<endl;
	p--;
	cout<<p.get_age()<<endl;
	float h = 90;
	Person s = m+p;
	cout<<m.get_age()<<" "<<p.get_age()<<" "<<s.get_age()<<endl;

	// to know whether the two variable have same datatype or not 
	const type_info& typel = typeid(l);
	const type_info& typeh = typeid(h);
	cout<<(typel!=typeh)<<endl;



}