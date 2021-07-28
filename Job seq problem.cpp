#include <iostream>
using namespace std;
bool comparator(job a,job b){
    return a.profit>b.profit;
}
pair<int,int> jobSeqProb(job arr[],int n){
    sort(arr,arr+n,comparator);
    int limit = arr[0].dead;
    for(int i=0;i<n;i++){
        limit = max(limit,arr[i].dead);
    }
    int days[limit+1];
    //now we schedule the jobs
    memeset(days,-1,sizeof(days));
    int job=0;int profit=0;
    for(int i=0;i<n;i++){
        for(int j=arr[i].dead;j>=0;j--){
            if(days[j]==-1){
                profit+=arr[i].profit;
                jobs++;
                slot[j]=i;
                break;
            }
        }
    }
    return make_pair(jobs,profit);
}
int main() {
    cout<<"Hello World!";
}
