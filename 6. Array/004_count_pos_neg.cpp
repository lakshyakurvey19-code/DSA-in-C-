#include<iostream>
using namespace std;
int main(){
    int n;
    int pos = 0, neg = 0;

    cout << "Enter the number :";
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] < 0){
            neg++;
        }
        else{
            pos++;
        }
    }

    cout << "positive number :" << pos << endl;
    cout << "negative number :" << neg << endl;

    return 0;
}