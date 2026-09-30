```markdown
# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to store opening brackets. Whenever a closing bracket is encountered, it is checked against the most recently stored opening bracket.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

The order of brackets is important. For example, ([)] is invalid even though all three types of brackets are present.
```
