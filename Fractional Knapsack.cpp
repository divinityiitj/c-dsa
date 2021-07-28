#include <iostream>
using namespace std;
struct item{
    int val,int wt;
};
bool comparator(item a,item b){
    double r1= (double)a.val/(double)a.wt;
    double r2=(double)b.val/(double)b.wt;
    return r1>r2;
}
double fractionalknapsack(int w,item arr[],int n){
    sort(arr,arr+n,comparator);
    int curWeight=0;
    double profit=0;
    for(int i=0;i<n;i++){
        if(curWeight+arr[i].wt<=w){
            curWeight+=arr[i].wt;
            profit+=arr[i].val;
            //filled the knapsack completely 
        }
        else{
            //if we cant fill the knapsack completely take the profit throu unitary method;
            int remain = w-curWeight;
            profit+= (arr[i].val/(double)arr[i].wt)*(double)remain;
            break; //coz if we are filling in partial then we will fill the bag and exit;
        }
    }
    return profit;
}
int main() {
    cout<<"Hello World!";
}
