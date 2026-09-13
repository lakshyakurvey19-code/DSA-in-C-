// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout << "Enter the marks :";
//     cin >> marks;

//     if(marks > 90 && marks < 100){
//         cout << "A++" <<endl;
//     }
//     else if(marks > 80){
//         cout << "A" <<endl;
//     }
//     else if(marks > 60){
//         cout << "B" <<endl;
//     }
//     else if(marks > 40){
//         cout << "C" <<endl;
//     }
//     else{
//         cout << "Fail"<< endl;
//     }
//     cout<< "marks is :" << marks;
// }

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character:";
    cin >> ch ;

    if(ch >= 'a' && ch <= 'z'){
        cout<< "Lower case";
    }
    else if(ch >= 'A' && ch <= 'z'){
        cout<< "Upper case";
    }
    else{
        cout << "Number";
    }

    return 0;

}

