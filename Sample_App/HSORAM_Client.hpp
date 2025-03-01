#include <openssl/conf.h>
#include <openssl/ec.h>
#include <openssl/ecdh.h>
#include <openssl/ecdsa.h>
#include <openssl/err.h>
#include <openssl/evp.h>
#include <openssl/obj_mac.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cstdint>
#include <iostream>
#include <random>

#include "../CONFIG.h"
#include "../CONFIG_FLAGS.h"
#include "../Globals.hpp"
#include "ZT.hpp"
#include "utils.hpp"

EC_KEY *ENCLAVE_PUBLIC_KEY = NULL;
unsigned char *enclave_public_key;

//TODO: Populate with globals from HSORAM_Client.cpp
