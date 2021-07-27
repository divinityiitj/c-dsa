#include <iostream>
using namespace std;
int minPlatform(int arri[],int depa[],int n){
    //
    sort(arri,arri+n);
    sort(depa,depa+n);
    int platformNeed=1;
    int result=1;
    int i=1;
    int j=0;
    //2 ptr approach
    while(i<n&&j<n){
        if(arri[i]<=depa[j]){
            platformNeed++;
            i++;
        }
        else if(arri[i]>depa[j]){
            platformNeed--;
            j++;
        }
        if(platformNeed>result){
            result=platformNeed;
        }
    }
    return platformNeed;
}
int main() {
    cout<<"Hello World!";
}
