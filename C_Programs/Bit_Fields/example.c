 #include<stdio.h>
int main() {
    struct employee {
         unsigned id: 8;	// Values stored will be 2^8 - 1  --> 0 to 255
         unsigned sex:1;	// 2^1 -1 --> 0 & 1
         unsigned age:7;	// 2^7 -1 --> 0 to 127
    }; struct employee emp1={211,1,23};

    printf("%d\t%d\t%d",emp1.id,emp1.sex,emp1.age);
   
    return 0;
} 
