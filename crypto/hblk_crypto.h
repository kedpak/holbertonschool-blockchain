#ifndef CRYPTO_H
#define CRYPTO_H
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SHA256_DIGEST_LENGTH 64
/* EC_KEY public key octet string length (using 256-bit curve) */
# define EC_PUB_LEN 65
/* Maximum signature octet string length (using 256-bit curve) */
# define SIG_MAX_LEN    72

/**
 * sig_t - EC Signature structure
 *
 * @sig: Signature buffer. The whole space may not be used
 * @len: Actual signature size. Can't exceed 72, therefore stored on a byte
 */
typedef struct
{
    /*
     * @sig must stay first, so we can directly use the structure as
     * an array of char
     */
    uint8_t     sig[SIG_MAX_LEN];
    uint8_t     len;
} sig_t;

uint8_t *sha256(int8_t const *s, size_t len, uint8_t digest[SHA256_DIGEST_LENGTH]);

#endif
