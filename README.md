## Tables C++

#### 2 My functions to quickly output information in console in the form of a table

```cpp
void ttable(
    int width,
    std::list<std::string> columns,
    bool toleft);

void tline(int width,
    int columns);
```

##### Examples:

```cpp
tline(4, 4);
ttable(4, list<string>{"1", "22", "333", "4444"}, false)
tline(4, 4);
ttable(4, list<string>{"1", "22", "333", "4444"}, true)
tline(4, 4);
// Output: 
// |------|------|------|------|
// |    1 |   22 |  333 | 4444 |
// |------|------|------|------|
// | 1    | 22   | 333  | 4444 |
// |------|------|------|------|
```
