int cntDisPairs(vector<int> arr, int target) {
    unordered_set<int> set;
    unordered_set<int> seen;
     
    int count = 0;
     
    for(int num : arr) {
        if(set.find(target-num) != set.end() && seen.find(num) == seen.end() ) {
            count++;
            seen.insert(num);
            seen.insert(target-num);
        }
        set.insert(num);
    }
    return count;
}
