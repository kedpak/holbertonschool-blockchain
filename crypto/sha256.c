#include "hblk_crypto.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t *sha256(int8_t const *s, size_t len, uint8_t digest[SHA256_DIGEST_LENGTH]){
    printf("length: %zu", len);
    printf("s: %hhu", s);
    return 0;
}
