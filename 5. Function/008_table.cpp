#include<iostream>
using namespace std;
void table(int n){
    for(int i=1; i<=10; i++){
        cout << n << " X " << i << " = "<<n*i << endl;
    }  
}

int main(){
    int num;
    cout << "Enter the number :";
    cin >> num;

    table(num);

    return 0;
}