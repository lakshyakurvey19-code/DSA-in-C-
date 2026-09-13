#include<iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i=1; i<=n; i++){
        f *= i;
    }

    return f;    
}

int main(){
    int n,r;
    cout << "Enter the value of 'n' and 'r' :";
    cin>> n >> r;
    int permutation = fact(n)/(fact(n-r));
    cout << "The Permutation is :"<< permutation;

    return 0;
}