class Solution{
public:	
	vector<int> kLargest(int nums[], int n, int k) {
        vector<int> v;
        priority_queue<int> pq;
        for(int i = 0; i<n; i++)
            pq.push(nums[i]);
    
        while(pq.size()!=n-k)
        {
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
    }
	

};
