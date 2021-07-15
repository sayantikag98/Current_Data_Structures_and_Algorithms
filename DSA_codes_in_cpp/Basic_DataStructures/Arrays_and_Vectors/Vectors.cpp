#include<bits/stdc++.h>
using namespace std;


class My_Vector {

	int* arr;
	int size, capacity;

	/*
		Constructor should be made public otherwise objects of the class cannot be made
	*/

public:

	My_Vector() {
		size = 0, capacity = 0;
		arr = NULL;
	}


	My_Vector(int n, int val = 0) {  // Constructor overloading
		size = n;					  // if the value of val is not passed then it is 0
		capacity = n;
		arr = new int [size];
		for (int i = 0; i < size; i++) {
			arr[i] = val;
		}
	}



	void push_back (int val) {
		if (size == 0) {   // if the capacity is zero initially then 2*capacity will always give zero
			capacity = 1;  // so this if block is used
		}
		else if (size == capacity) {
			capacity *= 2;
		}
		int* temp = new int [capacity];
		for (int i = 0; i < size; i++) {
			temp[i] = arr[i];
		}
		temp[size] = val;
		size++;
		arr = temp;
	}

	void insert_middle(int ind, int val) {
		if (ind == size) {
			push_back(val);
			return;
		}
		else if (ind > size and ind < capacity) {
			for (int i = size; i < ind; i++) {
				arr[i] = 0;
				size++;
			}
			arr[ind] = val;
			size++;
		}
		else if (ind > capacity) {
			return;
		}
		else if (ind < size) {
			if (size == capacity) {
				capacity = (capacity == 0) ? 1 : (2 * capacity);
			}
			for (int i = size - 1; i >= ind; i--) {
				arr[i + 1] = arr[i];
			}
			arr[ind] = val;
			size++;
		}
	}


	int pop_back() {
		if (size == 0) {
			cout << "Array Empty\n";
			return -1;
		}
		int val = arr[size - 1];
		size--;
		return val;
	}

	int back() {
		return arr[size - 1];
	}

	int sz() {
		return size;
	}

	int cp() {
		return capacity;
	}

	int &operator[](int i) {
		return arr[i];
	}

	void resize(int siz) {
		if (siz >= size) {
			int* temp = new int [siz];
			for (int i = 0; i < size; i++) {
				temp[i] = arr[i];
			}
			for (int i = size; i < siz; i++) {
				temp[i] = 0;
			}
			arr = temp;
		}

		size = siz;
		capacity = siz;
	}

	void assign(int rep, int val) {
		if (rep > capacity) {
			capacity = (capacity == 0) ? 1 : (2 * capacity);
		}
		arr = new int [rep];
		for (int i = 0; i < rep; i++) {
			arr[i] = val;
		}
		size = rep;

	}


	void print() {
		cout << "Size --> " << size << "\n";
		cout << "Capacity --> " << capacity << "\n";
		if (size == 0) {
			cout << "Empty array\n";
			return;
		}
		cout << "Array elements --> ";
		for (int i = 0; i < size; i++) {
			cout << arr[i] << "  ";
		}
		cout << "\n";
	}

};

int main() {

	My_Vector v(3, 100);
	v.print();
	v.push_back(10);
	v.print();
	v.push_back(20);
	v.print();
	v.push_back(30);
	v.print();
	v.push_back(40);
	v.print();
	v.push_back(50);
	v.print();
	v.push_back(60);
	v.print();
	cout << v.pop_back() << "\n";
	v.print();
	v.back();
	v.print();
	v.insert_middle(11, 3000);
	v.print();

	int size = v.sz();
	for (int i = 0; i < size; i++) {
		cout << v[i] << "  ";
	}
	cout << "\n";

	v.resize(20);
	v.print();
	v.assign(3, 5);
	v.print();



	/*
	******************
		STL VECTOR
	******************
	*/

	vector <int> ve;
	ve.push_back(10);
	ve.push_back(20);
	cout << ++ve.back() << "\n";
	for (int i : ve) {
		cout << i << " ";
	}
	cout << "\n";
	ve.insert(ve.begin() + 1, 100);
	for (int i : ve) {
		cout << i << " ";
	}
	cout << "\n";
	ve.erase(ve.begin() + 2);
	for (int i : ve) {
		cout << i << " ";
	}
	cout << "\n";

	ve.resize(20);  // resizes the array // changes both size and capacity to the given value
	cout << ve.size() << " " << ve.capacity() << "\n";

	ve.assign(3, 5);  // resizes the size of the vector to the value of the first parameter with each value equal to second parameter
	for (int i : ve) {     // assign will only change the size and not the capacity
		// can do vector camparison >= or <= or ==
		cout << i << " ";
	}
	cout << "\n";
	cout << ve.size() << " " << ve.capacity() << "\n";

	vector<int> v1 = { 1, 2 , 3};
	vector<int> v2 = {3, 4, 5 , 7};
	if (v1 == v2) {
		cout << "yes" << "\n";
	}
	else {
		cout << "no" << "\n";
	}
	int ni, mi;
	cin >> ni >> mi;
	/*

	size of the vector is the total number of rows
	and its value is a 1D vector in itself

	*/

	vector<vector<int>>vec (ni/*no of elements*/, vector<int>(mi, 5)/*declaration of 1D vector*/);
	for (int i = 0; i < ni; i++) {
		for (int j : vec[i]) {
			cout << j << " ";
		}
		cout << "\n";
	}


}

// vector.begin() return an iterator so cannot print it directly
// can do vector camparison >= or <= or == // element by element comparison