int KthLargest(int arr[], int n, int k) {
        // T.C = O(n + klogn)
        // priority_queue<int> pq(arr,arr+n);  
        // int count = 1;
        // while(count < k){
        //     pq.pop();count++;
        // }
        // return pq.top();
        
        //T.C = O(k + (n-k)logk)
        priority_queue<int, vector<int>, greater<int>> pq(arr, (arr+k));
        for(int i = k; i < n; i++){
            if(arr[i] >= pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }