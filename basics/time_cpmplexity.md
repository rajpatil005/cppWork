# Time Complexity Basics

## What is Time Complexity?
Time complexity describes how the runtime of an algorithm grows with input size.

## Common Complexities
- O(1)   → Constant time
- O(log n)
- O(n)
- O(n log n)
- O(n²)

## Loop Examples
```cpp
for (int i = 0; i < n; i++) {
    cout << i;
}
// Time Complexity: O(n)
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << i << j;
    }
}
// Time Complexity: O(n²)
```

