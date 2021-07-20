#include<bits/stdc++.h>
using namespace std;

struct Point{

    // constructor
    Point(int x1, int y1){
        x = x1;
        y = y1;

    }

    // member fields
    int x = 0;
    int y = 0;

    // member functions
    void multiply(){
        cout<<x*y<<"\n";
    }
} var (10, 20);

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    // struct Point p(20, 30);  // One way
    // struct Point p = Point(30,40);  // Another way
    Point p (40,50); // Another way
    // p.x = 10; 
    p.y = -10;
    cout<<p.x<<"\n";
    cout<<p.y<<"\n";
    p.multiply();
    cout<<var.x<<" "<<var.y<<endl; 
    unique_ptr<Point> p1 (new Point (10,20));
    cout<<p1->x<<" "<<p1->y<<"\n";
    return 0;
}