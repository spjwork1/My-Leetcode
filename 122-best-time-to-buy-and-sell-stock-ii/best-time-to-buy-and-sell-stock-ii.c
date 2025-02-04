int maxProfit(int* prices, int pricesSize) {
    if (pricesSize < 2)
        return 0;
    int maxProfit = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] > prices[i - 1]) {
            maxProfit += prices[i] - prices[i - 1];
        }
    }
    return maxProfit;
}