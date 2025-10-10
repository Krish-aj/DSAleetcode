int maxProfit(int* prices, int pricesSize) {
    

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        // Check if the current price minus the minimum price so far gives a better profit
        if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }

        // Update the minimum price if the current price is lower
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    return maxProfit;
}
