#include <stdio.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n);

int main()
{
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};
    int nums1Size = sizeof(nums1) / sizeof(int);
    int nums2Size = sizeof(nums2) / sizeof(int);

    printf("nums1Size: %d\n", nums1Size);
    printf("nums2Size: %d\n", nums2Size);

    merge(nums1, nums1Size, 3, nums2, nums2Size, 3);

    return 0;
}

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    if (m > nums1Size || n > nums2Size)
        return;

    int i = 0;
    int j = 0;

    do
    {
        if(nums2[j] >= nums1[i])
        {
            nums1[i+1] = nums1[i];
            nums1[i] = nums1[j];
            i++;
            j++;
        }
    } while (i < m && j < n);
}