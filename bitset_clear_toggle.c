#include <stdio.h>
#include <stdlib.h>
//decimal to binary
void Dec2Bin(int num);
//bit setting
void BitSet(int num,int pos);
//bit clear
void BitClear(int num,int pos);
//bit toggle
void BitToggle(int num, int pos);

int main() {
    int num;
    int pos;
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    printf("Binary value: ");
    Dec2Bin(num);
    printf("\n\nEnter a bit position to set: ");
    scanf("%d",&pos);
    printf("value of num after setting the bit: ");
    BitSet(num,pos);
    printf("\n\nEnter a bit position to clear: ");
    scanf("%d",&pos);
    BitClear(num,pos);
    printf("\n\nEnter a bit position to Toggle: ");
    scanf("%d",&pos);
    BitToggle(num,pos);
}
void Dec2Bin(int num){
    if (num==0)
    {
       printf("Binary= 0");
    }
    else{
            for ( int i = 7; i>=0; i--)
            {
                if(num & (1<<i)){
                    printf("1");
                    }
                    else{
                        printf("0");
                    }

                }
            }
            
    }
void BitSet(int num,int pos){
    num= num | 1<< pos;
    Dec2Bin(num);
}

void BitClear(int num,int pos){
    num= num &~ (1<< pos);
    Dec2Bin(num);
}

void BitToggle(int num,int pos){
    num= num ^ 1<< pos;
    Dec2Bin(num);
}