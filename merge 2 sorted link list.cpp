#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * next;
    node(int data)
    {
        this->data = data; //haan ye constructor hi h line 18 se yahan 
        next = NULL;
    }
};
node * createll()
{
    node * head = 0;
    int data;cin>>data;
    if(data!=-1)
    {
        head = new node(data);
        cin>>data;
    }
    node *it = head; // create a temporary iterator for travelling in the ll;
    while(data!=-1)
    {
        node *temp = new node(data); //temp store address of the new node returned
        it->next = temp; // it ka next matlab abhi head ke next ptr m temp ka address jayega for first iteration fir it increment krega and it k next m jayega temp ka address 
        it = it->next;// for 1st iteration it m head h ab it m khud it ka next vala ptr store hoyega in other words it has traversed by 1 unit
        cin>>data;
    }
    return head;
}
void print(node * start)
{
    while(start)
    {
        cout<<start->data<<endl;
        start =  start ->next;
    }
    return;
}
int length(node *head){
    int l=0;
    node *temp=head;
    while(temp){
        temp=temp->next;
        return l;
    }
    return l;

}
node * mergelinklists(node *&head1, node *&head2){
    node *ptr1 = head1;
    node * ptr2 =head2;
    node *dummy1 = new node(-1);
    node * dummy =dummy1;
    while(ptr1 && ptr2){
        if(ptr1->data<ptr2->data){
            dummy->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            dummy->next=ptr2;
            ptr2=ptr2->next;
        }
        dummy=dummy->next; //new link list m to aage badna hi padega

    }
    //now if one of the list is empty 
    while(ptr1){
        dummy->next=ptr1;
        ptr1=ptr1->next;
        dummy=dummy->next;
    }
     while(ptr2){
        dummy->next=ptr2;
        ptr2=ptr2->next;
        dummy=dummy->next;
    }
    return dummy1->next;
}
node *mergeOptimised(node*head1,node*head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    //now we always start from head1 so first we check if it's greater or not then we swap it
    if(head1->data>head2->data){
        swap(head1->data,head2->data);
    }
    node *res=head1;
    while(head1 && head2){
        node *temp=NULL;
        while(head1 &&head1->data<head2->data){
        //temp is the last node where smaller value was found
            temp=head1;
            head1=head1->next;
        }
        //that part of the list was sorted now when bigger value is found in another list we change the node to second list
        temp->next=head2;
        swap(head1,head2);
        
    }
}
int main() {
   node * head1 = createll();
   //print(start);
    node * head2 = createll();
    node * dummy = mergelinklists(head1,head2);
    print(dummy);
    
}
