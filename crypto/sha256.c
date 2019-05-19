#include "hblk_crypto.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <openssl/sha.h>

/**
 * sha256 - Create sha256 hash from string argument
 * @s input string to be hashed
 * @len length of input string
 * @digest hash table where digest is stored
 * Return: digest of sha256 function
 * 
 */
uint8_t *sha256(int8_t const *s, size_t len, uint8_t digest[SHA256_DIGEST_LENGTH])
{

    if (digest == NULL)  return NULL;

    SHA256_CTX context;
    SHA256_Init(&context);
    SHA256_Update(&context, (int8_t const *)s, len);
    digest[0] = SHA256_Final(digest, &context);
    return (uint8_t *)digest;
}
