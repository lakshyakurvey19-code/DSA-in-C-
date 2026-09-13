#include<iostream>
using namespace std;
int main(){
    int n;
    int odd = 0 ,even = 0;

    cout << "Enter the size of array :";
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout << "Even number :"<< even << endl;
    cout <<"Odd number :" << odd << endl;

    return 0;

}