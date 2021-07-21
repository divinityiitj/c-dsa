#include <iostream>
using namespace std;
node* addlinkList(node *head1,node* head2){
    node *dummy =new node(-1);
    node* temp=dummy;
    int carry=0;
    while(head1||head2||carry){
        int sum=0;
        if(head1){
            sum+=head1->data;
            head1=head1->next;
        }
        if(head2){
            sum+=head2->data;
            head2=head2->next;
        }
        sum+=carry;
        carry=sum/10;
        node * newNode= new node(sum%10);
        temp->next=node;
        temp=temp->next;
    }
    return dummy->next;
}
int main() {
    cout<<"Hello World!";
}
