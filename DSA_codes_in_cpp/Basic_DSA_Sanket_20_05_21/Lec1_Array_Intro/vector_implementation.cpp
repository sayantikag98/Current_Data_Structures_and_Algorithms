#include<bits/stdc++.h>
using namespace std;

template<typename T>

struct My_Vector{

	T* arr;
	int size;
	int capacity;

	My_Vector(){
		arr = NULL;
		size = 0;
		capacity = 0;
	} 

	My_Vector(int val){
		arr = new T [val];
		if(typeid(arr).name()=="Pi"){
			for(int i = 0; i<val; i++){
				arr[i] = 0;
			}
		}
		else if(typeid(arr).name() == "Pc"){
			for(int i = 0; i<val; i++){
				arr[i] = 'a';
			}
		}
		
		size = val;
		capacity = val;
	}

	My_Vector(int val, T data){
		arr = new T [val];
		for(int i = 0; i<val; i++){
			arr[i] = data;
		}
		size = val;
		capacity = val;
	}

	void push_back(T data){
		if(size < capacity){
			arr[size++] = data;
		}
		else if(size == capacity){
			T* temp = new T [2*capacity];
			for(int i = 0; i<size; i++){
				temp[i] = arr[i];
			}
			temp[size++] = data;
			arr = temp;
			capacity = (capacity == 0)? 1:(capacity * 2);

		}
	}

	void resize(int val){
		int old_siz = size;
		T* temp;
		if(val<=capacity){
			size = val;
		}
		else{
			size = val; 
			capacity = val;
			temp = new T[capacity];
		}

		if(val>old_siz){
			for(int i = 0; i<old_siz; i++){
				temp[i] = arr[i];
			}
			if(typeid(arr).name()=="Pi"){
				for(int i = old_siz; i<size; i++){
					temp[i] = 0;
				}
			}
			else if(typeid(arr).name() == "Pc"){
				for(int i = old_siz; i<size; i++){
					temp[i] = 'c';
				}
			}
			
			arr = temp;
		}
	}

	int siz (){
		return size;
	}

	int capacit (){
		return capacity;
	}

	void print(){
		for(int i = 0; i<size; i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		cout<<"SIZE --> "<<size<<endl;
		cout<<"CAPACITY --> "<<capacity<<endl;
	}

	T operator[](int i){
		if(i>=size){
			return -1;
		}
		return arr[i];
	}

};

int main(){

	My_Vector <char>v(5, 'c');
	v.print();
	// v.resize (10);
	// v.print();
	for(int i = 1; i<=10; i++){
		v.push_back('d');
		v.print();
	}
	cout<<v[0]<<endl;

	// vector<int> v1 (10);
	// cout<<v1.size()<<" "<<v1.capacity()<<endl;
	// v1.resize(10);
	// cout<<v1.size()<<" "<<v1.capacity()<<endl;
	char* u;
	cout<<typeid(u).name()<<endl;


}