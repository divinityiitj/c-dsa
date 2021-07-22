#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
}
node * reversell(node *head){
    node * newhead=NULL;
    node *next=NULL;
    while(head){
        next=head->next;
        head->next=newhead;
        newhead=head;
        head=next;
    }
    return newhead;
}
bool isPalindrome(node *head){
    if(!head||!(head->next)){
        return true;
    }
    node *slow=head;
    node *fast=head;
    //first we find the mid of link list;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    //now we rev the link list in front of slow
    slow->next=reversell(slow->next);
    slow=slow->next;
    while(slow!=NULL){
        if(head->data!=slow->data){
            return false;
        }
        slow=slow->next;
        fast=fast->next;
    }
    return true;
}
int main() {
    cout<<"Hello World!";
}
