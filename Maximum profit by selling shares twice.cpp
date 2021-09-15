/*
Initialize four variables for taking care of the first buy, first sell, second buy, second sell. 
Set first buy and second buy as INT_MIN and first and second sell as 0. This is to ensure to get profit from transactions. 
Iterate through the array and return the second buy as it will store maximum profit.
*/
int maxtwobuysell(int arr[],int size) {
    int first_buy = INT_MIN;
      int first_sell = 0;
      int second_buy = INT_MIN;
      int second_sell = 0;
       
      for(int i=0;i<size;i++) {
         
          first_buy = max(first_buy,-arr[i]);
          first_sell = max(first_sell,first_buy+arr[i]);
          second_buy = max(second_buy,first_sell-arr[i]);
          second_sell = max(second_sell,second_buy+arr[i]);
       
    }
     return second_sell;
}
