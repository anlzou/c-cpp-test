#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

void doMenu(){
	char letter;
	do{
		printf("A\n");
		printf("B\n");
		printf("C\n");
		printf("Q\n");
		printf("Choice��");
		
		letter = getch() ;
		printf("\n");
		letter = toupper(letter);		//toupper()����letterΪСд��ĸ��ת��Ϊ��д��ĸ 
		
		if(letter == 'A')
			system("DIR");
		else if(letter == 'B')
			system("mcd");
		else if(letter == 'C')
			system("DATE");
	}while(letter != 'Q');
}
