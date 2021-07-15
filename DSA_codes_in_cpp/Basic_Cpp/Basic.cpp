#include"bits/stdc++.h"
using namespace std;
#define x 10


struct People{
	string name = "Ankit";
	int age;

	void display(){
		cout<<name<<"\n";
		cout<<age<<"\n";
	}

};

void Update(People &p, int n){
	p.age = n;
}

class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data = data;
		next = NULL;
	}

};

void func(int* &z){
	
}

int main(){

	//khdfiuyfuieyufhejhfueyhuigfyeru
	//huihdfuighurhgujheughuhu
	//uhfuiehfuherufheughuihgu
	//hfhfuiehufiqhefhefheuihueihiguhehrufghejnghurgu
	long l = 10L;
	long long li;
	long long int lli;
	short s;
	short int si;
	float f;
	double d;
	char ch;
	string str = "tfgfdgfhgfhgfhghjuyiuyhjhjdsfhauifywjsahfjashfkuayfjsdvgshguykdhfhuhfjdscxzhcusdhjcxvhlsuifskjxvhvhjfyiuykjzxvhjk";
	cout<<"Hello World\n";
	cout<<x<<endl;
	cout<<sizeof(x)<<endl;
	cout<<sizeof(l)<<" "<<sizeof(li)<<" "<<sizeof(lli)<<" "<<sizeof(s)<<" "<<sizeof(si)<<endl;
	cout<<sizeof(f)<<" "<<sizeof(d)<<endl;
	cout<<sizeof(ch)<<endl;
	cout<<sizeof(str)<<endl;
	cout<<str.length()<<endl;
	cout<<str.size()<<endl;

	char st[] = {'S','a','y','a'};
	char st1[] = "Saya";
	cout<<st<<endl;
	cout<<sizeof(st1)<<endl;

	int* ptr;
	char ch8789 = 'l';
	char* ptr1 = &ch8789;
	cout<<sizeof(ptr1)<<endl;
	cout<<"HI"<<ptr1<<endl;
	unsigned int ui = -1;
	int y = ui;
	cout<<y<<endl;
	cout<<(pow(2,31) - 1)+ (pow(2, 31))<<endl;
	int* arr = new int [3];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	cout<<arr[-1]<<" "<<arr[2]<<endl;
	int arr1[3] = {1,2};
	int* arr2 = new int [3];
	vector<int> arr3(3);
	cout<<arr1[0]<<" "<<arr2[0]<<" "<<arr3[0]<<endl;
	cout<<arr1[1]<<" "<<arr2[1]<<" "<<arr3[1]<<endl;
	int* ar = new int[5];
	for(int i = 0; i<5; i++){
		cout<<ar[i]<<" ";

	}
	cout<<"\n";

	for(int i = 0; i<3; i++){
		cout<<arr1[i]<<" ";

	}

	cout<<endl;
	cout<<2.0/5.0<<endl;
	cout<<2/5<<endl;

	int num1;
	cin>>num1;

	int** arr_demo = new int* [num1];
	for(int i = 0; i<2; i++){
		arr_demo[i] = new int [num1];
	}
	for(int i = 0; i<num1; i++){
		for(int j = 0; j<num1; j++){
			cin>>arr_demo[i][j];
		}
	}

	for(int i = 0; i<num1; i++){
		for(int j = 0; j<num1; j++){
			cout<<arr_demo[i][j]<<" ";
		}
		cout<<"\n";
	}
	float ni = 8.876768;

	cout<<x<<setw(x)<<x<<endl;
	printf("%d%5d%d\n",x,5,x);
	cout<<fixed<<setprecision(4)<<8.876768<<endl;
	cout<<scientific<<setprecision(4)<<8.876768<<endl;
	printf("%0.4f\n",ni);


	int* var = new int(5);
	cout<<*var<<endl;
	cout<<var<<endl;

	Node* head = new Node(5);
	cout<<head->data<<endl;
	cout<<head->next<<endl;
	cout<<(*head).data<<endl;
	cout<<(*head).next<<endl;

	People p1 {"Ghosh", 45};
	p1.display();
	p1.name = "Sayantika";
	p1.age = 23;
	p1.display();
	Update(p1,100);
	p1.display();

	void* pttr = malloc(sizeof(int));
	cout<<pttr<<endl;
	int k;
	cout<<k<<endl;

	int *arr_new = new(nothrow) int [4]();
	for(int i = 0; i<4; i++){
		cout<<arr_new[i]<<" ";
	}
	cout<<"\n";

	int *&ref = arr_new;
	func(ref);


	Node n1(10);// stored in stack
	Node* n2 = new Node(30);  // stored in heap


	int u = 90;// stored in stack
	int* u1 = new int (90);  // stored in heap



}



