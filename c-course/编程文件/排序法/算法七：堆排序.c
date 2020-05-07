#include<stdio.h>
void HeapAdjust(int array[],int i,int nLength)
{
int nChild;
int nTemp;
for(; 2 * i + 1 < nLength;i = nChild)
{
//子结点的位置=2*（父结点位置）+1
nChild = 2 * i + 1;
//获得子结点中较年夜的结点
if(nChild < nLength - 1 && array[nChild + 1] > array[nChild]) ++nChild;
//若是较年夜的子结点年夜于父结点那么把较年夜的子结点往上移动，替代它的父结点
if(array[i] < array[nChild])
{
nTemp = array[i];
array[i] = array[nChild];
array[nChild] = nTemp;
}
else break; //不然退出循环
}
}
//堆排序算法
void HeapSort(int array[],int length)
{
int i;
//调剂序列的前半部分元素，调剂完以后第一个元素是序列的最年夜的元素
//length/2-1是最后一个非叶节点，此处"/"为整除
for(i = length / 2 - 1;i >= 0;--i)
HeapAdjust(array,i,length);
//从最后一个元素开端对序列进行调剂，不竭的缩小调剂的范围直到第一个元素
for(i = length - 1;i > 0;--i)
{
//把第一个元素和当前的最后一个元素互换，
//包管当前的最后一个位置的元素都是在此刻的这个序列当中最年夜的
array[i] = array[0] ^ array[i];
array[0] = array[0] ^ array[i];
array[i] = array[0] ^ array[i];
//不竭缩小调剂heap的范围，每次调剂终了包管第一个元素是当前序列的最年夜值
HeapAdjust(array,0,i);
}
}
int main()
{
int i;
int num[]={9,8,7,6,5,4,3,2,1,0};
HeapSort(num,sizeof(num)/sizeof(int));
for(i = 0;i < sizeof(num) / sizeof(int);i++)
{
printf("%d ",num[i]);
}
printf("\nok\n");
return 0;
}