class Solution{
public:

    static bool myCompare(struct val p1, struct val p2){
        if(p1.second < p2.second)
        return true;
        else
        return false;
    }
    
    /*You are required to complete this method*/
    int maxChainLen(struct val p[],int n){
     
        sort(p,p+n,myCompare);
        int count = 1;
        int j = 1;
        int d = p[0].second;
        while(j<n){
            if(p[j].first > d){
                count++;
                d = p[j].second;
            }
            j++;
        }
        return count;
    }
    /*Another way(rather my way)*/
    static bool comp(struct val v1,struct val v2){
        return v1.second<v2.second;
    }
    int maxChainLen(struct val p[],int n){
        sort(p,p+n,comp);
        int cnt=1,temp=p[0].second;
        for(int i=1;i<n;i++){
            if(temp<p[i].first){
                ++cnt;
                temp=p[i].second;
            }
        }
        return cnt;
    }
};
