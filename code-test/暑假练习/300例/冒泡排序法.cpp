void bubbleSort(int a[]; int n){
	int i,j;
	int t;
	for (i = 1; i < n; i++)							/*����i����Ƚϵ�����*/
	    for (j = 1; j < n-i; j++)						/*����j����ÿ�������ȽϵĴ���*/
	    	if (a[j] > a[j + 1])
	    	{
	        	t = a[j];									/*�����м����ʵ����ֵ����*/
	        	a[j] = a[j + 1];
	        	a[j + 1] = t;
	    	}
}
