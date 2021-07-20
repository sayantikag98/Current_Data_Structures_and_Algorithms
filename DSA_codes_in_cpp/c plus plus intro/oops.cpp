#include<bits/stdc++.h>
using namespace std;

class Person{
    string name;
    int id;
    public:
    Person(string name, int id){
        this->name = name;  // this pointer is a pointer so use arrow operator to access the attributes or the properties
        this->id = id;
    }

    Person(const Person &p){
        cout<<"called copy constructor"<<endl;
    }

    ~Person(){
        cout<<"Destructor is being called"<<endl;
    }

    string name_getter(){
        return name;
    }

    int id_getter(){
        return id;
    }

    void name_setter(string name){
        this->name = name;
    }

    void id_setter(int id){
        this->id = id;
    }

    void print(){
        string name = name_getter();
        int id = id_getter();
        cout<<name<<"\n";
        cout<<id<<"\n";

    }
};  // semicolon is a must

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Person p("Sayantika",17136);
    
    p.print();

    p.name_setter("Ghosh");
    p.id_setter(02);
    p.print();

    Person p2 = p;
    cout<<"HI"<<endl;
    p2.print();

    Person p3("cc",23);
    p3=p;
    p3.print();



    return 0;
}