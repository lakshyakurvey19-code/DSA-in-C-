#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;

    cout <<"Enter size of array :";
    cin >> n;
    
    int a[n];

    cout << "Enter "<< n <<" Element :\n";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        int duplicate = 0;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                duplicate = 1;
                break;
            }
        }
        if(duplicate == 1){
            count++;
        }
    }

    cout <<"Total duplicate elements :"<<count;
    return 0;
}