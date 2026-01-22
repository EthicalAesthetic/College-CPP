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

5.
```cpp
int a[] = {1,2,3,4,5};
int *p = a;
cout << *p++ << " ";
cout << (*p)++ << " ";
cout << ++*p << " ";
cout << *p << "\n";
for(int i=0;i<5;i++) cout << a[i] << " ";
```
```
1 2 4 4
1 4 3 4 5 
```

6.
```cpp
int x=10;
int *p=&x;
cout << (*p)++ << " " << x << "\n";
cout << ++(*p) << " " << x << "\n";
cout << *p++ << " " << x << "\n";
```
```
10 11
12 12
12 12
```
7.
```cpp
int a[] = {10,20,30,40,50};
int *p = a + 1;
cout << *(p+2) << " " << *(p-1) << "\n";
```
```
40 10
```
   

