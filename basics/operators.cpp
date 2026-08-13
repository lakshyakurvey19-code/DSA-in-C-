// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cout<<"enter the a and b :";
//     cin>> a;
//     cin>> b;
//     cout << "difference =" << (a-b)<< endl;
//     cout << "sum =" << (a+b)<< endl;
//     cout << "product =" << (a*b) << endl;
//     cout << "division =" << (a/b)<< endl;
//     cout << "remander =" << (a%b)<< endl;
//     cout << "difference =" << (a-(float)b)<< endl;
//     return 0;
// }

// relational opt:-

// logical opt:-
#include<iostream>
using namespace std;
int main()
{
    cout << (3<2) << endl; 
    cout << !(3<2) << endl; // NOT
    cout << ((3>1) && (3>4)) << endl; // AND
    cout << ((3<2) || (3<5)) << endl; // OR
}