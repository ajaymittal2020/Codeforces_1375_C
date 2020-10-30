You are given an array a of length n, which initially is a permutation of numbers from 1 to n. In one operation, you can choose an index i (1≤i<n) such that ai<ai+1, and remove either ai or ai+1 from the array (after the removal, the remaining parts are concatenated).

For example, if you have the array [1,3,2], you can choose i=1 (since a1=1<a2=3), then either remove a1 which gives the new array [3,2], or remove a2 which gives the new array [1,2].

Is it possible to make the length of this array equal to 1 with these operations?
