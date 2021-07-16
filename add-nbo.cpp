#include <stddef.h> // size_t
#include <stdint.h> //for uint8_t
#include <stdio.h> //for printf
#include <cstdio>
#include <netinet/in.h>

int main(int argc, char *argv[]) {
	FILE *fp = fopen(argv[1], "r");
	uint32_t a;
	fread(&a, sizeof(a), 1, fp);
	a = ntohl(a);

	FILE *fpr = fopen(argv[2], "r");
	uint32_t b;
	fread(&b, sizeof(b), 1, fpr);
	b = ntohl(b);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", a, a, b, b, a+b, a+b);
}
 