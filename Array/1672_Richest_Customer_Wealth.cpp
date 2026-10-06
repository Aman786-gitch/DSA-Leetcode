class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       vector<int> total;
       int m=accounts.size();
       
       for(int i=0;i<m;i++)
       {
        int n=accounts[ i].size(); 
        int sum=0;

         for(int j=0;j<n;j++)
         {
           sum=sum+accounts[i][j];
         }
        total.push_back(sum);
       } 
      return *max_element(total.begin(),total.end());
    }
};