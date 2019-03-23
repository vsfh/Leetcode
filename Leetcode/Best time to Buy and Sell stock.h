class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int minprice = INT_MAX;
		int minpro = 0;
		for(int i = 0;i < prices.size() ;i++){
			
			minprice = min( minprice, prices[i] );
			minpro = max( minpro, prices[i] - minprice);
		}
		return minpro;     
    }
};