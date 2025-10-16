#include <stdio.h>

int main() {
	short a = 10; // short: so nguyen nho, 2 byte
	int b = 100; // int: so nguyen, kich thuoc phu thuoc he thong (thuong la 4 byte)
	long c = 1000; // long: so nguyen lon hon int, thuong 4 hoac 8 byte
	long long d = 10000; // long long: so nguyen rat lon, thuong 8 byte
	unsigned short e = 20; // unsigned short: so nguyen nho khong dau, 2 byte
	unsigned int f = 200; // unsigned int: so nguyen khong dau, thuong 4 byte
	unsigned long g = 2000; // unsigned long: so nguyen lon khong dau, thuong 4 hoac 8 byte
	unsigned long long h = 20000; // unsigned long long: so nguyen rat lon khong dau, thuong 8 byte
	char i = 'A'; // char: ky tu, 1 byte

	printf("short a = %d\n", a);
	printf("int b = %d\n", b);
	printf("long c = %ld\n", c);
	printf("long long d = %lld\n", d);
	printf("unsigned short e = %u\n", e);
	printf("unsigned int f = %u\n", f);
	printf("unsigned long g = %lu\n", g);
	printf("unsigned long long h = %llu\n", h);
	printf("char i = %c\n", i);

	return 0;
}

