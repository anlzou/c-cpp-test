void binarySearch(int key, int a[], int n) /*�Զ��庯��binary_search*/
{
    int low, high, mid, count = 0, count1 = 0;
    low = 0;
    high = n - 1;
    while (low < high)								/*�����ҷ�Χ��Ϊ0ʱִ��ѭ�������*/
    {
        count++;								/*count��¼���Ҵ���*/
        mid = (low + high) / 2;						/*����м�λ��*/
        if (key < a[mid])							/*��keyС���м�ֵ*/
            high = mid - 1;						/*ȷ�����ӱ�Χ*/
        else if (key > a[mid])						/*��key�����м�ֵ*/
            low = mid + 1;							/*ȷ�����ӱ�Χ*/
        else if (key == a[mid])						/*��key�����м�ֵ֤�����ҳɹ�*/
        {
            printf("���ҳɹ�!\n���� %d ��!a[%d]=%d", count, mid, key);
											/*������Ҵ�����������Ԫ���������е�λ��*/
            count1++;							/*count1��¼���ҳɹ�����*/
            break;
        }
    }
    if (count1 == 0)								/*�ж��Ƿ����ʧ��*/
        printf("����ʧ��!");							/*����ʧ�����no found*/
} 
