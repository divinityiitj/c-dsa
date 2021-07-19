#include <bits/stdc++.h>
using namespace std;
//https://www.youtube.com/watch?v=8CACsqPWpHo&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=64
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
void intersect(node *&head1, node*&head2,int pos){
    node *temp1=head1;
    node *temp2 =head2;
   // pos--;
    while(pos--){
        temp1=temp1->next;
    }
    while(temp2->next!=0){
        temp2=temp2->next;
    }
    temp2->next = temp1;
}
int intersection(node *&head1, node *&head2){
    //not working as of now 
    int l1= length(head1);
    int l2= length(head2);
    int diff = 0;
    node *ptr1, *ptr2;
    if(l1>l2){
        diff =l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        diff=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(diff){
        ptr1=ptr1->next;
        //so we reach the common length of both lists
        if(ptr1==0){
            return -1; //no intersection
        }
        diff--;
       
    }
    //now we traverse both lists
    while(ptr1 && ptr2 ){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
    

}
int main() {
   node * head1 = createll();
   //print(start);
    node * head2 = createll();
    intersect(head1,head2,3);
    cout<<intersection(head1,head2);
}
