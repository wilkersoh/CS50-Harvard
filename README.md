* Week 3 Algorithms

## Selection Sort

``` javascript
let arr = [3, 4, 6, 1, 2, 5, 7];
```

怎樣用Selection sort 小到大呢？
1. 它會一個一個 去看， 首先 從最左邊到最右邊
2. 第一個 錨點是在 3， 然後它會去看2
3. 它說 喔 2比3小 那樣 我就 把2記下來 看哪個比2小
4. 過後 它遇到了 1 又在把1記下來
5. 直到遇到最後一個 7 
6. 它才直到 喔 1是最小的 那樣 我就把1和我的3(錨點) 對換位子

``` javascript
let arr = [1, 4, 6, 3, 2, 5, 7];
```

1. 第二輪 錨點是4 
2. 做和上面一樣的事情
3. 如果找到 比他小的 就把那個號碼 和 錨點 對換
4. 一直做這個動作 直到 最後一個 錨點是 array 的最後位子


```javascript
// n 是我們的錨
// n + (n-1) + (n-2) + .... + 1;
// n(n+1) / 2
// (n^2 + n) / 2
// n^2/2 + n/2
// Final > O(n2)
```

### Algorithms time and space

> 下面的例子 越上面 性能越不好

```
O(n^2) selection search
O(n log n)
O(n) linear search
O(log n) binary search
O(1)
```

