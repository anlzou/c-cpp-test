#include<stdio.h>
#include"BasicFun.cpp"
#include"025_Binary_search.cpp"
//#include"�鲢����.cpp"
//#include"ѡ������.cpp"
//#include"��������.cpp"
//#include"ϣ������.cpp"
int main(int argc, char **argv){
	int n = 10;
	int a[n];
	funScan0(a,n);
//	selectSort(a,n);
//  inSort(a,n);
//	shSort(a,n);
	binarySearch(2,a,n);
//	funPrin(a,n);
//	funPrinColor();
	return 0;
}
