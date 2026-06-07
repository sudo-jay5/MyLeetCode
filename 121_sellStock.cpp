int maxProfit(vector<int>& prices) {
    int profit = INT_MIN;
    int minPrice = INT_MAX;
    for(int i=0; i<prices.size()-1; i++){
        minPrice = min(minPrice,prices[i]);
        if(minPrice<prices[i]){
            continue;
        }
        if(prices[i]==prices[i+1]){
            continue;
        }
        for(int j=i+1; j<prices.size(); j++){
            int diff = prices[j] - prices[i];
            profit = max(profit,diff);
        }
    }
    if(profit<=0){
        return 0;
    }
    return profit;
}