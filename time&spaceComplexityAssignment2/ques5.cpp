/*
Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 1; i < n; i*=2) {
    for(int j = n; j > i; j--) {
    c++;
    }
}
*/

// ans = O(nlogn)