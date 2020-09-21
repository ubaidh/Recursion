# Recursion
Recursion is a method of solving a problem where the solution depends on solutions to smaller instances of the same problems
# Types of recursion
1. tail recursion
2. head recursion 
3. tree recursion
4. indirect recursion
5. nested recursion

### Tail recusion
```c++
void func(int n){
    if(n>1){
        .......
        .......
        func(n-1);
    }
}
```
### Head recursion
```c++
void func(int n){
    if(n>1){
        func(n-1);
        .......
        .......
        
    }
}
```
all process is done at returing time

### Tree recursion 
```c++
void fun(int n){
    if(n>0){
        ....
        fun(n-1);
        ....
        ...
        fun(n-1);
    }
}
```
if a function is calling itself more than one time its tree recursion
<br/>
```
          f(2)
      /    |   \
     2   f(1)    f(1)
      /    |   \     ...
     1  f(0)   f(0)
       


```