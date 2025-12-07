/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
  int n = strlen(boxes);
    int *res = (int*)malloc(n * sizeof(int));
    int i, j;
    for (i = 0; i < n; i++) {
        res[i] = 0;
        for (j = 0; j < n; j++) {
            if (boxes[j] == '1') {
                res[i] += abs(i - j);
            }
        }
    }

    *returnSize = n;
    return res;
}