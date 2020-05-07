void binarySearch(int key, int a[], int n) /*自定义函数binary_search*/
{
    int low, high, mid, count = 0, count1 = 0;
    low = 0;
    high = n - 1;
    while (low < high)								/*当查找范围不为0时执行循环体语句*/
    {
        count++;								/*count记录查找次数*/
        mid = (low + high) / 2;						/*求出中间位置*/
        if (key < a[mid])							/*当key小于中间值*/
            high = mid - 1;						/*确定左子表范围*/
        else if (key > a[mid])						/*当key大于中间值*/
            low = mid + 1;							/*确定右子表范围*/
        else if (key == a[mid])						/*当key等于中间值证明查找成功*/
        {
            printf("查找成功!\n查找 %d 次!a[%d]=%d", count, mid, key);
											/*输出查找次数及所查找元素在数组中的位置*/
            count1++;							/*count1记录查找成功次数*/
            break;
        }
    }
    if (count1 == 0)								/*判断是否查找失败*/
        printf("查找失败!");							/*查找失败输出no found*/
} 
