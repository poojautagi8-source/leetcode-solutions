```markdown
# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I kept track of the minimum stock price seen so far. For every later price, I calculated the possible profit and updated the maximum profit.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The stock must be bought before it is sold. If no profitable transaction is possible, the answer is 0.
```
