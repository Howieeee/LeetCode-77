class Solution {
public:
    void cb(int start, int n, int k, vector<int>&cur, vector<vector<int>>& ans){
        if(cur.size() == k){
            ans.push_back(cur);
            //return ans;
        }
        
        for(int i=start;i<=n;i++){
            cur.push_back(i);
            cb(i+1,n,k,cur,ans);
            cur.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        /*
            n=4 1,2,3,4
            k=2
            1, 2,3,4
            2 ,3,4
            3 ,4
            4 ,X
        */
        vector<vector<int>> ans;
        if(k==1){
            for(int i=1;i<=n;i++){
                vector<int> t;
                t.push_back(i);
                ans.push_back(t);
            }
            return ans;
        }
        
        vector<int> temp;
        cb(1,n,k,temp,ans);
        
        
        return ans;
    }
};
