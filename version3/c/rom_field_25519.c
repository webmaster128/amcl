#include "arch.h"
#include "fp_25519.h"

/* Curve 25519 */

#if CHUNK==16

// Base Bits= 13
const BIG_256_13 Modulus_25519= {0x1FED,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0xFF};
const BIG_256_13 R2modp_25519= {0x400,0x2D,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const chunk MConst_25519= 0x13;

#endif

#if CHUNK==32

// Base Bits= 29
const BIG_256_29 Modulus_25519= {0x1FFFFFED,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x7FFFFF};
const BIG_256_29 R2modp_25519= {0x169000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const chunk MConst_25519= 0x13;


#endif

#if CHUNK==64
// Base Bits= 56
const BIG_256_56 Modulus_25519= {0xFFFFFFFFFFFFEDL,0xFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFL,0x7FFFFFFFL};
const BIG_256_56 R2modp_25519= {0xA4000000000000L,0x5L,0x0L,0x0L,0x0L};
const chunk MConst_25519= 0x13L;


#endif

