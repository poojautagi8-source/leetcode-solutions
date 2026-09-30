```markdown
# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

I compared characters at the same position across all strings. The comparison stops when a mismatch occurs or when one string ends.

## Complexity

- Time: O(n × m)
- Space: O(1)

## Notes

If the first characters do not match, the answer is an empty string. The input may also contain only one string.
```
