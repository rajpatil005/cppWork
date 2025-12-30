# Time & Space Complexity

Time complexity measures how runtime grows with input size.  
Space complexity measures extra memory used.

## Common Time Complexities
- O(1) → constant
- O(n) → linear
- O(n²) → quadratic
- O(log n) → logarithmic
- O(n log n) → linearithmic

## Example
```cpp
for(int i=0; i<n; i++) { } // O(n)
for(int i=0; i<n; i++)
for(int j=0; j<n; j++) { } // O(n²)
```
