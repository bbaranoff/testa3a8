#include <openssl/rand.h>
int RAND_bytes(unsigned char *buf, int num);
unsigned char buf[16];
uint8_t *rand_byte(uint8_t *dest) {
RAND_bytes(dest,sizeof(dest)*2);
return dest;
}
