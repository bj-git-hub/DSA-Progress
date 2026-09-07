# 136. Single Number
- **Platform:** [LeetCode](https://leetcode.com/problems/single-number/)
- **Approaches:**
  1. **Brute** — Nested loops, O(n²) time
  2. **Better** — Hash map / frequency count, O(n) time, O(n) space
  3. **Optimal** — XOR all elements (a ^ a = 0, a ^ 0 = a), O(n) time, O(1) space
- **Status:** ✅ Solved