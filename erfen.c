#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);    // 算出每个元素的大小
    int k = 7;
    int left = 0;                              //计算左下标
    int right = sz -1;                      //计算右下标
    

    while(left <= right)
    {
        int mid = (left + right)/2;
        if(arr[mid] > k)
        {
            right = mid - 1;
        }
        else if(arr[mid] < k)
        {
            left = mid - 1;
        }
        else if(arr[mid] = k)
        {
            printf("找到了，该元素下表是%d",mid);
            break;
        }
    }
    if(left > right)
    {
        printf("该数组中没有要查找的元素");
    }

    return 0;
}