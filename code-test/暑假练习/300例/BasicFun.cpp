void funScan0(int a[],int n){
	int i;
	printf("请输入%d个数:\n",n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);	
}

void funScan1(int a[],int n){
	int i;
	printf("请输入%d个数:\n",n-1);
    for (i = 1; i < n; i++)
        scanf("%d", &a[i]);	
}

void funPrin(int a[], int n){
	int i;    
    for(i=1; i<n; i++){
    	printf("%d ",a[i]);
    }
}

//-1
void funPrinColor(){
	printf("\033[2;7;1m hello world!\n\033[2;7;0m");
}
