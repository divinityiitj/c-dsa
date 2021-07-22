#include <iostream>
using namespace std;
node *intersectionofLinkList(node * headA,node*headB){
    node * a= headA;
    node *b = headB;
    while(a!=b){
        a = a==NULL? headB:a->next;//if its null then traverse it to headB else move it to next;
        b = b==NULL? headA :b->next; 
    }
    return a;
}

int main() {
    cout<<"Hello World!";
}
