#include<stdio.h> 
int main(int argc, const char * argv[]) {  
      
    int a,b,c;  
    for (a = 1; a <= 3; a++) { //穷举a的所有可能性  
        for (b = 1; b <= 3; b++) { //穷举b的所有可能性  
            for (c = 1; c <= 3; c++) { //穷举c的所有可能性  
                if (a != 1 && c != 1 && c != 3 && a !=b && b != c && a != c) {  
                     //如果表达式为真输出结果，否则继续下次循环  
                     printf("%c 将嫁给 a\n",'x' + a - 1);  
                     printf("%c 将嫁给 b\n",'x' + b - 1);  
                     printf("%c 将嫁给 c\n",'x' + c - 1);  
                }  
            }  
        }  
    }  
      
    /* 
     输出结果： 
     z 将嫁给 a 
     x 将嫁给 b 
     y 将嫁给 c 
      
     printf("%c 将嫁给 a\n",'x' + a - 1); 函数解释：%c表示输出一个字符，'x' + a - 1表示字符x加上某个数值，其结果会得到另外一个字符，这里涉及到ASCII值，每一个字母都对应一个值。所以在计算之后会得到对应的x,y,z.可以看下表： 
     */  
      
    return 0;  
} 
