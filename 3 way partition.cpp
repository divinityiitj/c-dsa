void threeWayPartition(int arr[], int n,
                int lowVal, int highVal)
{
    // Initialize ext available positions for
    // smaller (than range) and greater lements
    int start = 0, end = n-1;
 
    // Traverse elements from left
    for (int i=0; i<=end;)
    {
        // If current element is smaller than
        // range, put it on next available smaller
        // position.
        if (arr[i] < lowVal)
            swap(arr[i++], arr[start++]);
 
        // If current element is greater than
        // range, put it on next available greater
        // position.
        else if (arr[i] > highVal)
            swap(arr[i], arr[end--]);
 
        else
            i++;
    }
}
