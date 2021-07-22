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
void makeCycle(node * &head, int pos){
    node *temp= head; //till last
    node *startnode;
    int count =1;
    while(temp->next!=0){
        if(count == pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;


}
//check cycle
//https://www.youtube.com/watch?v=Fj1ywT9ETQk&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=61
bool checkCycle(node *&head){
    node *slow =head;
    node *fast = head;
    while(fast !=0 && fast->next!=0){
        slow= slow->next;
        fast = fast->next->next;
        if(fast==slow){
            fast =head;
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }
            slow->next =0; //cycle break
            return true;
        }
    }
    return false;
}

//now to break cycle --when slow and fast ptr at same location bring fast ptr  to head and itr them one at a time jb odno ka next same node p point tb 
// we can say break cycle--slow ptr->next =null;
int main() {
   node * start = createll();
   print(start);
}
