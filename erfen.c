#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);    // ���ÿ��Ԫ�صĴ�С
    int k = 7;
    int left = 0;                              //�������±�
    int right = sz -1;                      //�������±�
    

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
            printf("�ҵ��ˣ���Ԫ���±���%d",mid);
            break;
        }
    }
    if(left > right)
    {
        printf("��������û��Ҫ���ҵ�Ԫ��");
    }

    return 0;
}