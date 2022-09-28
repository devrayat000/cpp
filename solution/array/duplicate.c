#include <stdio.h>

void print_array(int arr[], int len) {
    for (int i = 0; i < len; i++)
        printf("%3d", arr[i]);
    printf("\n");
}

void reduce_array(int arr[], int len, int start) {
    for (int i = start; i < len - 1; i++)
        arr[i] = arr[i + 1];
}

int main() {
    int list[] = {1, 2, 3, 4, 2, 6, 3, 6, 4, 7, 4, 7};
    int len = 12;

    printf("Printing given array.\n");
    print_array(list, len);

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (list[i] == list[j])
            {
                reduce_array(list, len, j);
                len--;
                j--;
            }
        }
    }

    printf("Printing filtered array\n");
    print_array(list, len);
}