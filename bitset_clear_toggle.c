#include <stdio.h>
#include <stdlib.h>
//bit setting
void BitSet(int *num,int pos);
//bit clear
void BitClear(int *num,int pos);
//bit toggle
void BitToggle(int *num, int pos);

int main() {
	int num=0;
	int pos;
	printf("Given value:%d",num);
	BitSet(&num,3);
	printf("\nvalue of num after 3rd bit set:%d",num);
	BitClear(&num,5);
	printf("\nvalue of num after 5th bit clear:%d",num);
	BitToggle(&num,2);
	printf("\nvalue of num after 2nd bit toggle:%d",num);
	return 0;
}

void BitSet(int *num,int pos) {
	*num= *num | 1<< pos;
}

void BitClear(int *num,int pos) {
	*num= *num &~ (1<< pos);
}

void BitToggle(int *num,int pos) {
	*num= *num ^ 1<< pos;
}
