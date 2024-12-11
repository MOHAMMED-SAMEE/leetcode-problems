/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#pragma GCC optimize("O3", "unroll-loops")
int* relativeSortArray(int* arr1, int n1, int* arr2, int n2, int* returnSize) 
{
    // Mapping from element value to its index in arr2
    int a2i[1001];
    memset(a2i, -1, sizeof(a2i)); // Initialize with -1

    // Fill the map for elements in arr2
    for (register int i = 0; i < n2; i++) 
        a2i[arr2[i]] = i;

    // Arrays to count occurrences of elements
    int bucket[1001] = {0}, freqN2[1001] = {0};

    // Count occurrences of each element in arr1
    for (register int i = 0; i < n1; i++) {
        int x = arr1[i], idx = a2i[x];
        if (idx == -1) freqN2[x]++;
        else bucket[x]++;
    }

    int cnt = 0;

    // Place elements of arr2 in arr1 in order
    for (register int i = 0; i < n2; i++) {
        int x = arr2[i], f= bucket[x];
        if (f == 0) continue;
        for (register int j = 0; j < f; j++)
            arr1[cnt++] = x;
    }

    // Place remaining elements not in arr2 in ascending order
    for (register int i = 0; i < 1001; i++) {
        int f = freqN2[i];
        if (f == 0) continue;
        for (register int j = 0; j < f; j++)
            arr1[cnt++] = i;
    }

    *returnSize = n1;
    return arr1;
}