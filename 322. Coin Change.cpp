class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> v(amount +1,amount+2);
        sort(coins.begin(),coins.end());
        v[0]=0;
        for(int i=1;i<=amount;i++)
        {
            int k=0;
            while(k<coins.size() &&  i-coins[k]>=0)
            {
                v[i]=min(v[i],v[i-coins[k]]+1);
                k++;
            }
            
        }
        if(v[amount]==amount+2)
        {
            return -1;
        }
        return v[amount];
        
    }
};