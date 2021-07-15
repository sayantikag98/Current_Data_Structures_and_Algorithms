#include<bits/stdc++.h>
using namespace std;

struct People{

	int x, y;
	void display(){
		cout<<x<<endl;
	}
	~People(){
		cout<<"Destructor is called\n";
	}

};


int main(){

	People* p = new People;
	p->x = 10;


	People* p1 = new People;
	p1->x = 30;
	delete(p1);

	unique_ptr <People> ptr = make_unique<People>();
	ptr->x = 20;
	ptr->display();
	p->display();
	p1->display();
	cout<<p->x<<endl;

	// unique_ptr <People> ptr1 = ptr; // this won't work unique pointers cannot be re-initialized
	shared_ptr <People> shd_ptr = make_shared <People> ();
	shared_ptr <People> shd_ptr1 = shd_ptr;

	cout<<shd_ptr1.use_count()<<endl;
	cout<<shd_ptr.use_count()<<endl;
	weak_ptr<People> wk_ptr = shd_ptr;
	weak_ptr<People> wk_ptr1 = wk_ptr;
	cout<<shd_ptr.use_count()<<endl;
	cout<<wk_ptr.use_count()<<endl;
	cout<<wk_ptr.expired()<<endl; // checks for whether the object pointed by the weak pointer has been deleted or not

	unique_ptr <int> ptr_var = make_unique<int>(9);
	unique_ptr<int[]> ptr_arr( new int [9]);
	cout<<*ptr_var<<endl;

	shared_ptr<int> ptr_var1 = make_shared<int>(9);
	shared_ptr<int[]> ptr_arrr (new int [9]);

}