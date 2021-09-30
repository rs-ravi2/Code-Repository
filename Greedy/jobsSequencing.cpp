// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include<iostream>
#include<algorithm>
using namespace std;

// A structure to represent a job
struct Job
{
char id;	 // Job Id
int dead; // Deadline of job
int profit; // Profit if job is over before or on deadline
};

// This function is used for sorting all jobs according to profit
bool comparison(Job a, Job b)
{
	return (a.profit > b.profit);
}

// Returns minimum number of platforms reqquired
void printJobScheduling(Job arr[], int n)
{
	// Sort all jobs according to decreasing order of prfit
	sort(arr, arr+n, comparison);

	int result[n]; // To store result (Sequence of jobs)
	bool slot[n]; // To keep track of free time slots

	// Initialize all slots to be free
	for (int i=0; i<n; i++)
		slot[i] = false;

	// Iterate through all given jobs
	for (int i=0; i<n; i++)
	{
	// Find a free slot for this job (Note that we start
	// from the last possible slot)
	for (int j=min(n, arr[i].dead)-1; j>=0; j--)
	{
		// Free slot found
		if (slot[j]==false)
		{
			result[j] = i; // Add this job to result
			slot[j] = true; // Make this slot occupied
			break;
		}
	}
	}

	// Print the result
	for (int i=0; i<n; i++)
	if (slot[i])
		cout << arr[result[i]].id << " ";
}

// Using priority queue
vector<int> JobScheduling(Job arr[], int n)
{
	unordered_map<int,priority_queue<int>> m;
	int max1 = 0 ;

	for(int i =0 ; i < n ;i++){
		m[arr[i].dead].push(arr[i].profit);
		max1 = max(max1, arr[i].dead);
	}

	priority_queue<int,vector<int>, greater<int>> p;

	for(int i = 1 ; i <= max1 ;i++){
		int r = m[i].size();
		for(int j= 0 ; j < min(i,r) ;j++ ){
			int k = m[i].top();
			p.push(k);
			m[i].pop();
		}
		while(p.size() > i){
			p.pop();
		}
	}
	
	int ans = 0,c = p.size();
	while(p.size()){
		ans = ans + p.top();
		//cout << p.top();
		p.pop();
	}

	vector<int> ans1;
	ans1.push_back(c);
	ans1.push_back(ans);
	return ans1;
}



// Driver code
int main()
{
	Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
				{'d', 1, 25}, {'e', 3, 15}};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Following is maximum profit sequence of jobs \n";

	// Function call
	printJobScheduling(arr, n);
	return 0;
}
