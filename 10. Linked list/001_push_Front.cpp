#include<iostream>
using namespace std; 
class node{     //node class;
    public:
        int data;
        node *next;

        node(int val){
            data = val;
            next = NULL;
        }
};

// CASE1 = push front(dynamic implementation)
class List{
    node *head;
    node *tail;

    public:
        List(){
            head = tail = NULL;
        }
        void push_front(int val){
            node *newNode = new node(val);  //dynamic hai
            // node newNode(val); //static hai
            if(head == NULL){
                head = tail = newNode;
                return;
            }
            else{
                newNode ->next = head;
                head = newNode;
            }

        }
        void printll(){
            node *temp = head;

            while(temp != NULL){
                cout << temp->data<<"->";
                temp = temp->next;
            }
            cout <<"NULL"<< endl;
        }

};

int main(){
    List ll;
    int n;
    cout << "Enter the number :";
    cin >> n;
    for(int i=1; i<=n; i++){
        ll.push_front(i);
    }
    ll.printll();

    return 0;
}

 