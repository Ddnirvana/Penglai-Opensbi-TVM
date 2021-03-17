#ifndef _ATTEST_H
#define _ATTEST_H

#include "enclave.h"

void hash_enclave(struct enclave_t* enclave, void* hash, uintptr_t nonce);

void hash_shadow_enclave(struct shadow_enclave_t* enclave, void* hash, uintptr_t nonce);

void update_hash_shadow_enclave(struct shadow_enclave_t *enclave, void* hash, uintptr_t nonce_arg);

void sign_enclave(void* signature, void* hash);

int verify_enclave(void* signature, void* hash);

#endif /* _ATTEST_H */
