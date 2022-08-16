class Solution {
public:
    static bool compare(pair<int,int>p1,pair<int,int>p2){
        if(p1.second==p2.second)return p1.first>p2.first;
        else{
            return p1.second<p2.second;
        }
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums){
            ++mp[i];
        }
        vector<pair<int,int>>p;vector<int>ans;
        for(auto &i:mp){
            p.push_back({i.first,i.second});
        }
        sort(p.begin(),p.end(),compare);
        for(int i=0;i<p.size();i++){
            for(int j=0;j<p[i].second;j++){
                ans.push_back(p[i].first);
            }
        }
        return ans;
    }
};
