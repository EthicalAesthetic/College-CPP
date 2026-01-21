## Give output of the following codes

1.
```cpp
int x = 5;
int *p = &x;
*p = 10;
cout << x;
```
```
10
```

2.
```cpp
int a = 1, b = 2;
int *p = &a;
p = &b;
*p = 5;
cout << a << " " << b;
```
```
1 5
```

3.
```cpp
int x = 10;
int *p = &x;
int **pp = &p;
**pp = 20;
cout << x;
```
```
20
```

4.
```cpp
int a[5] = {2,4,6,8,10};
int *p = a;
cout << *p++ << " ";
cout << *p;
```
```
2 4
```
