int arraySum (int arr[], int n)
{
    int sum = 0;
    for (int i=0; i<n; sum+=arr[i++]);
    return sum;
}
 
// function for finding smallest element
int smallest (int arr[], int n)
{
    int small = INT_MAX;
    for (int i=0; i<n; i++)
        if (arr[i] < small)
            small = arr[i];
    return small;
}
 
// function for finding min operation
int minOp (int arr[], int n)
{
    // find array sum
    int sum = arraySum (arr, n);
 
    // find the smallest element from array
    int small = smallest (arr, n);
 
    // calculate min operation required
    int minOperation = sum - (n * small);
 
    // return result
    return minOperation;
}
