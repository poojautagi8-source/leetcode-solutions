```markdown
# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

I used a frequency-count array of size 26 to count the occurrences of each lowercase English letter in both strings. If the frequencies match, the strings are anagrams.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The strings must have the same length. Different character frequencies mean the strings are not anagrams.
```
