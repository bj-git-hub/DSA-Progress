# 📋 SOP — Adding DSA Content to This Repo

## 1️⃣ Folder Naming

`NN_Topic_Name` — two-digit number + underscore + PascalCase

| Current | Upcoming (in order) |
|---------|--------------------|
| `01_Basic_Maths` | `07_Binary_Search` → `08_Strings` → `09_Linked_List` → `10_Bit_Manipulation` → `11_Stack_And_Queues` → `12_Sliding_Window_Two_Pointer` → `13_Heaps` → `14_Greedy` → `15_Binary_Trees` → `16_Binary_Search_Trees` → `17_Graphs` → `18_Dynamic_Programming` → `19_Tries` |

## 2️⃣ File Naming

`NN_Descriptive_Name.cpp` — e.g., `01_Find_X_In_Sorted_Array.cpp`

## 3️⃣ Per-Scenario Rules

| Situation | Action |
|-----------|--------|
| ✅ Solved on LeetCode | Create `NN_Problem_Name.md` — link + approach notes (no .cpp) |
| 🧠 Too easy / conceptually known | Just update README count, no file |
| 💻 Solved locally in VS Code | Create `NN_Descriptive_Name.cpp` with full code |
| 🔄 Multiple approaches | Folder `NN_Problem_Name/` with `brute.cpp`, `better.cpp`, `optimal.cpp` |

### 📌 LeetCode Pointer File Format

```markdown
# Problem Name
- **Platform:** [LeetCode](https://leetcode.com/problems/problem-name/)
- **Approach:** <brief summary>
- **Status:** ✅ Solved
```

## 4️⃣ README Updates

After each session, bump the problem count in the progress tracker.
Use: ✅ Complete / 🔄 In Progress / ⬜ Not Started

## 5️⃣ Always Enforce

- `git mv` for renames (history preserved)
- No `.exe` or `tempCodeRunnerFile.*` committed
- Always `git add README.md` alongside new content