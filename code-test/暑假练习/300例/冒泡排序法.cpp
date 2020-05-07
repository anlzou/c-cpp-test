void bubbleSort(int a[]; int n){
	int i,j;
	int t;
	for (i = 1; i < n; i++)							/*变量i代表比较的趟数*/
	    for (j = 1; j < n-i; j++)						/*变量j代表每趟两两比较的次数*/
	    	if (a[j] > a[j + 1])
	    	{
	        	t = a[j];									/*利用中间变量实现俩值互换*/
	        	a[j] = a[j + 1];
	        	a[j + 1] = t;
	    	}
}
