int maxProfit(int* prices, int pricesSize) {
    int low = prices[0]; int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < low) {
            low = prices[i];
        } else {
            int profit = prices[i] - low;
            if(profit>maxProfit){
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}