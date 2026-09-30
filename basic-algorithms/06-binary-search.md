```markdown
# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

I used binary search on the sorted array. The middle element is compared with the target, and the search range is reduced to either the left or right half.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

Binary search requires the input array to be sorted. If the target does not exist, the solution returns -1.
```
