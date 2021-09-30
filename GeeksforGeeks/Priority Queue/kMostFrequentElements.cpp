bool compare(pair<int, int> p1, pair<int, int> p2)
{
    // if frequencies of two elements are same
    // then the larger number should come first
    if (p1.second == p2.second)
        return p1.first > p2.first;
 
    // sort on the basis of decreasing order
    // of frequencies
    return p1.second > p2.second;
}

void print_N_mostFrequentNumber(int arr[], int n, int k)
{
    // unordered_map 'um' implemented as frequency hash table
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
        um[arr[i]]++;
 
    // store the elements of 'um' in the vector 'freq_arr'
    vector<pair<int, int> > freq_arr(um.begin(), um.end());
 
    // sort the vector 'freq_arr' on the basis of the
    // 'compare' function
    sort(freq_arr.begin(), freq_arr.end(), compare);
 
    // display the top k numbers
    cout << k << " numbers with most occurrences are:\n";
    for (int i = 0; i < k; i++)
        cout << freq_arr[i].first << " ";
}

struct compare {
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        // if frequencies of two elements are same
        // then the larger number should come first
        if (p1.second == p2.second)
            return p1.first < p2.first;
 
        // insert elements in the priority queue on the basis of
        // decreasing order of frequencies
        return p1.second < p2.second;
    }
};

void print_N_mostFrequentNumber(int arr[], int n, int k)
{
    // unordered_map 'um' implemented as frequency hash table
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
        um[arr[i]]++;
 
     
 
    // priority queue 'pq' implemented as max heap on the basis
    // of the comparison operator 'compare'
    // element with the highest frequency is the root of 'pq'
    // in case of conflicts, larger element is the root
    priority_queue<pair<int, int>, vector<pair<int, int> >,
                compare>
        pq(um.begin(), um.end());
 
    // display the top k numbers
    cout << k << " numbers with most occurrences are:\n";
    for (int i = 1; i <= k; i++) {
        cout << pq.top().first << " ";
        pq.pop();
    }
}

void print_N_mostFrequentNumber(int arr[],int n, int k){
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
        um[arr[i]]++;
    //if no order specified for elements 
    vector<int> freq[n+1];
    for(auto x:um){
        freq[x.second].push_back(x.first);
    }

    int count = 0; // remains same for both the cases
    for(int i=n-1;i>=0;i--){
        for(int x:freq[i]){
            cout<< x<<" ";
            count++;
            if(count == k)  return;
        }
    }

    // for maintaining order of original array
    for(int i=0;i<n;i++){
        int f = um[arr[i]];

        if(f != -1){
            freq[f].push_back(arr[i]);
            um[arr[i]] = -1;
        }
    }

    int count = 0; // same
    for(int i=n-1;i>=0;i--){
        for(int x:freq[i]){
            cout<< x<<" ";
            count++;
            if(count == k)  return;
        }
    }
}