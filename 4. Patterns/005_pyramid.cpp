#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number :";
    cin >> n;
    // char ch = 'A';
    //spaces
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        //num1:
        for(int k=1; k<=i+1; k++){
            cout << k;
        }

        //num2
        for(int f=i; f>=1; f--){
            cout << f;
        }
        cout<< endl;
    }
    return 0;

}