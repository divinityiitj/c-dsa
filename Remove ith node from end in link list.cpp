#include <iostream>
using namespace std;
node * deleteIthnodefromend(node*head,int n){
    node * start = new node(-1);
    start->next=head;
    node * fast=start;
    node* slow=start;
    //we traverse the fast ptr n times;
    for(int i=1;i<=n;i++){
        fast=fast->next;
    }
    //now traverse both the pointers simuly
    while(fast->next){
        fast=fast->next;
        slow=slow->next;
    }
    //now break the link
    slow->next= slow->next->next;
    return start->next;
}
int main() {
    cout<<"Hello World!";
}
