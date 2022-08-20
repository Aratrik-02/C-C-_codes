class Solution {
public:
    
    class comp {   
    public:
        bool operator()(string &a, string &b) {      // Like min heap first greater then, smaller nums on top
            return a.length() > b.length() || (a.length()==b.length() && a>b);
        }
    };
    
    
    string kthLargestNumber(vector<string>& nums, int k) {
        
        int n= nums.size();
        priority_queue<string, vector<string>, comp> pq;        // Min heap with custom comparator
        
        for(int i=0; i<n; i++) {
            pq.push(nums[i]);
        }
        
        while(pq.size() > k) {
            pq.pop();
        }
        
        return pq.top();
    }
};
