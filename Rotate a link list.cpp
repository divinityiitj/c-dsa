#include <iostream>
using namespace std;
node * rotateAlinkList(node *head,int k){
    node * cur=head;
    int len=1;
    while(cur->next && ++len){
        cur=cur->next;
    }
    //point the last node to head;
    cur->next=head;
    k=k%len;
    //to get the first case;
    k=len-k;
    while(k--){
        cur=cur->next;//it moves from head to len-k;
    }
    //to replace head;
    head=cur->next;
    cur->next=NULL;
    return head;
}
int main() {
    cout<<"Hello World!";
}
