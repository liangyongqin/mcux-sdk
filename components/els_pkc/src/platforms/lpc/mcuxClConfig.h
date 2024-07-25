/*--------------------------------------------------------------------------*/
/* Copyright 2023 NXP                                                       */
/*                                                                          */
/* NXP Confidential. This software is owned or controlled by NXP and may    */
/* only be used strictly in accordance with the applicable license terms.   */
/* By expressly accepting such terms or by downloading, installing,         */
/* activating and/or otherwise using the software, you are agreeing that    */
/* you have read, and that you agree to comply with and are bound by, such  */
/* license terms. If you do not agree to be bound by the applicable license */
/* terms, then you may not retain, install, activate or otherwise use the   */
/* software.                                                                */
/*--------------------------------------------------------------------------*/

#ifndef MCUXCL_CONFIG_H_
#define MCUXCL_CONFIG_H_

//commented defines for all available features 
//#define    MCUXCL_FEATURE_EXPORTED_FEATURE_HEADER
//#define    MCUXCL_FEATURE_EXPORTED_PLATFORM_HEADERS
//#define    MCUXCL_FEATURE_PLATFORM_RW61X
//#define    MCUXCL_FEATURE_PLATFORM_MCXN
//#define    MCUXCL_FEATURE_PLATFORM_LPC
//#define    MCUXCL_FEATURE_PROJECT_VOLTA_ON_NIRVANA
//#define    MCUXCL_FEATURE_PLATFORM_MIMXRT
//#define    MCUXCL_FEATURE_PROJECT_BLACKBIRD
//#define    MCUXCL_FEATURE_PROJECT_CSSL
//#define    MCUXCL_FEATURE_PROJECT_NCCL
//#define    MCUXCL_FEATURE_PROJECT_QUANTUM
//#define    MCUXCL_FEATURE_PROJECT_SHARK
//#define    MCUXCL_FEATURE_HW_ELS
//#define    MCUXCL_FEATURE_HW_GDET
//#define    MCUXCL_FEATURE_HW_GLIKEY
//#define    MCUXCL_FEATURE_HW_PKC
//#define    MCUXCL_FEATURE_HW_ROPUF
//#define    MCUXCL_FEATURE_HW_SAFO_SM3
//#define    MCUXCL_FEATURE_HW_SAFO_SM4
//#define    MCUXCL_FEATURE_HW_SGI
//#define    MCUXCL_FEATURE_HW_TRNG
//#define    MCUXCL_FEATURE_HW_RISCV_ZBB
//#define    MCUXCL_FEATURE_HW_RISCV_CSW
//#define    MCUXCL_FEATURE_HW_CACHE_ENABLED
//#define    MCUXCL_FEATURE_ELS
//#define    MCUXCL_FEATURE_ELS_AEAD
//#define    MCUXCL_FEATURE_ELS_API_INPUT_PARAM_CHECKS
//#define    MCUXCL_FEATURE_ELS_CKDF
//#define    MCUXCL_FEATURE_ELS_CKDF_SP80056C
//#define    MCUXCL_FEATURE_ELS_CMAC
//#define    MCUXCL_FEATURE_ELS_ECC_KEY_EXCHANGE
//#define    MCUXCL_FEATURE_ELS_ECC_ECKXCH_ODD_EVEN
//#define    MCUXCL_FEATURE_ELS_ECC_ECKXCH_ODD
//#define    MCUXCL_FEATURE_ELS_GLITCHDETECTOR
//#define    MCUXCL_FEATURE_ELS_HKDF
//#define    MCUXCL_FEATURE_ELS_HMAC
//#define    MCUXCL_FEATURE_ELS_HWCONFIG
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_DELETE
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_EXPORT
//#define    MCUXCL_FEATURE_ELS_KEY_EXPORT_SW_DFA_PROTECTION
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_ROM
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_TEST
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_ROM_TEST
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_DUK_UPDATE
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_DUK_UPDATE_TEST
//#define    MCUXCL_FEATURE_ELS_RNG
//#define    MCUXCL_FEATURE_ELS_SHA_224
//#define    MCUXCL_FEATURE_ELS_SHA_256
//#define    MCUXCL_FEATURE_ELS_SHA_384
//#define    MCUXCL_FEATURE_ELS_SHA_512
//#define    MCUXCL_FEATURE_ELS_SHA_512_224
//#define    MCUXCL_FEATURE_ELS_SHA_512_256
//#define    MCUXCL_FEATURE_ELS_SHA_DIRECT
//#define    MCUXCL_FEATURE_ELS_SHA_DIRECT_MODE_FLAG
//#define    MCUXCL_FEATURE_ELS_AES_WITH_SIDE_CHANNEL_PROTECTION
//#define    MCUXCL_FEATURE_ELS_TLS
//#define    MCUXCL_FEATURE_ELS_NO_INTERNAL_STATE_FLAGS
//#define    MCUXCL_FEATURE_ELS_NO_INTERNAL_STATE_FLAGS_CMAC
//#define    MCUXCL_FEATURE_ELS_PUK_INTERNAL_BIT
//#define    MCUXCL_FEATURE_ELS_PUK_INTERNAL
//#define    MCUXCL_FEATURE_ELS_RND_RAW
//#define    MCUXCL_FEATURE_ELS_PRND_INIT
//#define    MCUXCL_FEATURE_ELS_DTRNG_PRV_CONFIG_LOAD
//#define    MCUXCL_FEATURE_ELS_LOCKING
//#define    MCUXCL_FEATURE_ELS_CMD_CRC
//#define    MCUXCL_FEATURE_ELS_DMA_ADDRESS_READBACK
//#define    MCUXCL_FEATURE_ELS_DMA_FINAL_ADDRESS_READBACK
//#define    MCUXCL_FEATURE_ELS_RANDOMIZE_RFC3394_OUT
//#define    MCUXCL_FEATURE_ELS_RESP_GEN
//#define    MCUXCL_FEATURE_ELS_GET_FW_VERSION
//#define    MCUXCL_FEATURE_ELS_CACHE_MAINTENANCE
//#define    MCUXCL_FEATURE_ELS_ACCESS_PKCRAM_WORKAROUND
//#define    MCUXCL_FEATURE_ELS_ACCESS_PKCRAM_WORKAROUND_M2
//#define    MCUXCL_FEATURE_ELS_ITERATIVE_SEEDING
//#define    MCUXCL_FEATURE_ELS_HW_OUT_SLOTS
//#define    MCUXCL_FEATURE_ELS_LINK_BASE_ADDRESS
//#define    MCUXCL_FEATURE_ELS_ENTROPY_TEST
//#define    MCUXCL_FEATURE_GLIKEY
//#define    MCUXCL_FEATURE_GLIKEY_STEPS_4
//#define    MCUXCL_FEATURE_GLIKEY_STEPS_8
//#define    MCUXCL_FEATURE_GLIKEY_GETVERSION
//#define    MCUXCL_FEATURE_DMA
//#define    MCUXCL_FEATURE_DMA_SGI_HANDSHAKE
//#define    MCUXCL_FEATURE_SGI
//#define    MCUXCL_FEATURE_SGI_AUTOMODE
//#define    MCUXCL_FEATURE_SGI_AUTOMODE_WORKAROUND_READ_FULL_DATOUT
//#define    MCUXCL_FEATURE_SGI_HAS_EXTERNAL_KEYBANKS
//#define    MCUXCL_FEATURE_SAFO
//#define    MCUXCL_FEATURE_AEAD_CONTEXT_INTEGRITY_PROTECTION
//#define    MCUXCL_FEATURE_AEAD_CRYPT
//#define    MCUXCL_FEATURE_AEAD_ENCRYPT_DECRYPT
//#define    MCUXCL_FEATURE_AEAD_ONESHOT
//#define    MCUXCL_FEATURE_AEAD_MULTIPART
//#define    MCUXCL_FEATURE_AEAD_SELFTEST
//#define    MCUXCL_FEATURE_AEADMODES_SW
//#define    MCUXCL_FEATURE_AEADMODES_GCM
//#define    MCUXCL_FEATURE_AEADMODES_CCM
//#define    MCUXCL_FEATURE_AEADMODES_CCMSTAR
//#define    MCUXCL_FEATURE_AEADMODES_EAX
//#define    MCUXCL_FEATURE_AES128
//#define    MCUXCL_FEATURE_AES192
//#define    MCUXCL_FEATURE_AES256
//#define    MCUXCL_FEATURE_AES_SW
//#define    MCUXCL_FEATURE_1KDES
//#define    MCUXCL_FEATURE_2K3DES
//#define    MCUXCL_FEATURE_3K3DES
//#define    MCUXCL_FEATURE_DES_SW
//#define    MCUXCL_FEATURE_BUFFER_USE_OBJECT
//#define    MCUXCL_FEATURE_BUFFER_USE_POINTER
//#define    MCUXCL_FEATURE_BUFFER_SCATTER_GATHER
//#define    MCUXCL_FEATURE_CIPHER_CONTEXT_INTEGRITY_PROTECTION
//#define    MCUXCL_FEATURE_CIPHER_CRYPT
//#define    MCUXCL_FEATURE_CIPHER_ENCRYPT_DECRYPT
//#define    MCUXCL_FEATURE_CIPHER_ONESHOT
//#define    MCUXCL_FEATURE_CIPHER_MULTIPART
//#define    MCUXCL_FEATURE_CIPHER_RSA_ENCRYPT
//#define    MCUXCL_FEATURE_CIPHER_RSA_DECRYPT
//#define    MCUXCL_FEATURE_CIPHER_SELFTEST
//#define    MCUXCL_FEATURE_CIPHERMODES_ECB
//#define    MCUXCL_FEATURE_CIPHERMODES_CBC
//#define    MCUXCL_FEATURE_CIPHERMODES_CTR
//#define    MCUXCL_FEATURE_CIPHERMODES_CFB
//#define    MCUXCL_FEATURE_CIPHERMODES_OFB
//#define    MCUXCL_FEATURE_CIPHERMODES_XTS
//#define    MCUXCL_FEATURE_CIPHERMODES_DMA_BLOCKING
//#define    MCUXCL_FEATURE_CIPHERMODES_DMA_NONBLOCKING
//#define    MCUXCL_FEATURE_CIPHERMODES_SW
//#define    MCUXCL_FEATURE_CRC_HW
//#define    MCUXCL_FEATURE_CRC_SW
//#define    MCUXCL_FEATURE_CRC_CRC32
//#define    MCUXCL_FEATURE_ECC
//#define    MCUXCL_FEATURE_ECC_STRENGTH_CHECK
//#define    MCUXCL_FEATURE_ECC_INTERNAL
//#define    MCUXCL_FEATURE_ECC_EXTERNAL
//#define    MCUXCL_FEATURE_ECC_WEIERSTRASS
//#define    MCUXCL_FEATURE_ECC_TWISTEDEDWARDS
//#define    MCUXCL_FEATURE_ECC_MONTGOMERY
//#define    MCUXCL_FEATURE_ECC_VERIFY_P384
//#define    MCUXCL_FEATURE_ECC_MONTDH
//#define    MCUXCL_FEATURE_ECC_CURVE25519
//#define    MCUXCL_FEATURE_ECC_CURVE448
//#define    MCUXCL_FEATURE_ECC_EDDSA
//#define    MCUXCL_FEATURE_ECC_ECDSA_DETERMINISTIC
//#define    MCUXCL_FEATURE_ECC_ED25519
//#define    MCUXCL_FEATURE_ECC_ED448
//#define    MCUXCL_FEATURE_ECC_WEIERECC_GENERATECUSTOMDOMAINPARAMS
//#define    MCUXCL_FEATURE_ECC_WEIERECC_DECODEPOINT
//#define    MCUXCL_FEATURE_ECC_WEIERECC_KEYGENERATION
//#define    MCUXCL_FEATURE_ECC_WEIERECC_KEYVALIDATION
//#define    MCUXCL_FEATURE_ECC_ECDSA
//#define    MCUXCL_FEATURE_ECC_ECDH
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION_POINTADD
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION_POINTSUB
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION_SCALARMULT
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION_SECURESCALARMULT
//#define    MCUXCL_FEATURE_ECC_SECPK1_CURVES
//#define    MCUXCL_FEATURE_ECC_SECPR1_CURVES
//#define    MCUXCL_FEATURE_ECC_NISTPR1_CURVES
//#define    MCUXCL_FEATURE_ECC_ANSIX9P_CURVES
//#define    MCUXCL_FEATURE_ECC_BRAINPOOLR1_CURVES
//#define    MCUXCL_FEATURE_ECC_BRAINPOOLT1_CURVES
//#define    MCUXCL_FEATURE_EXAMPLE_PKC_ENABLED
//#define    MCUXCL_FEATURE_HASH
//#define    MCUXCL_FEATURE_HASH_MULTIPART
//#define    MCUXCL_FEATURE_HASH_ONESHOT
//#define    MCUXCL_FEATURE_HASH_COMPARE
//#define    MCUXCL_FEATURE_HASH_COMPUTE
//#define    MCUXCL_FEATURE_HASH_IMPORT_EXPORT_STATE
//#define    MCUXCL_FEATURE_HASH_SELFTEST
//#define    MCUXCL_FEATURE_HASHMODES
//#define    MCUXCL_FEATURE_HASH_C_MD5
//#define    MCUXCL_FEATURE_HASH_C_SHA_1
//#define    MCUXCL_FEATURE_HASH_C_SHA_224
//#define    MCUXCL_FEATURE_HASH_C_SHA_256
//#define    MCUXCL_FEATURE_HASH_C_SHA_384
//#define    MCUXCL_FEATURE_HASH_C_SHA_512
//#define    MCUXCL_FEATURE_HASH_C_SHA_512_224
//#define    MCUXCL_FEATURE_HASH_C_SHA_512_256
//#define    MCUXCL_FEATURE_HASH_C_SHA3_SHAKE
//#define    MCUXCL_FEATURE_HASH_C_SHA3
//#define    MCUXCL_FEATURE_HASH_ELS
//#define    MCUXCL_FEATURE_HASH_SGI
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_224
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_256
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_384
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_512
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_512_224
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_512_256
//#define    MCUXCL_FEATURE_HASH_SGI_MIYAGUCHI_PRENEEL
//#define    MCUXCL_FEATURE_HASH_LTC
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_224
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_256
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_384
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_512
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_SHAKE_128
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_SHAKE_256
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_CSHAKE_128
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_CSHAKE_256
//#define    MCUXCL_FEATURE_HASH_RANGER5_LIB
//#define    MCUXCL_FEATURE_HASH_DMA_BLOCKING
//#define    MCUXCL_FEATURE_HASH_DMA_NONBLOCKING
//#define    MCUXCL_FEATURE_HASH_SECSHA
//#define    MCUXCL_FEATURE_HASH_SECSHA_1
//#define    MCUXCL_FEATURE_HASH_SECSHA_224
//#define    MCUXCL_FEATURE_HASH_SECSHA_256
//#define    MCUXCL_FEATURE_HASH_SECSHA_384
//#define    MCUXCL_FEATURE_HASH_SECSHA_512
//#define    MCUXCL_FEATURE_HASH_SECSHA_512_224
//#define    MCUXCL_FEATURE_HASH_SECSHA_512_256
//#define    MCUXCL_FEATURE_HASH_SECSHA3
//#define    MCUXCL_FEATURE_HASH_SECSHA3_224
//#define    MCUXCL_FEATURE_HASH_SECSHA3_256
//#define    MCUXCL_FEATURE_HASH_SECSHA3_384
//#define    MCUXCL_FEATURE_HASH_SECSHA3_512
//#define    MCUXCL_FEATURE_HASH_SGI_COUNT_WORKAROUND
//#define    MCUXCL_FEATURE_KEY_DERIVATION
//#define    MCUXCL_FEATURE_KEY_DERIVATION_NIST_SP800_108
//#define    MCUXCL_FEATURE_KEY_DERIVATION_NIST_SP800_56C
//#define    MCUXCL_FEATURE_KEY_DERIVATION_ISOIEC_18033_2
//#define    MCUXCL_FEATURE_KEY_DERIVATION_ANSI_X9_63
//#define    MCUXCL_FEATURE_KEY_DERIVATION_RFC5246_PRF
//#define    MCUXCL_FEATURE_KEY_DERIVATION_HKDF
//#define    MCUXCL_FEATURE_KEY_DERIVATION_PBKDF2
//#define    MCUXCL_FEATURE_KEY_DERIVATION_IKEV2
//#define    MCUXCL_FEATURE_KEY_GENERATION
//#define    MCUXCL_FEATURE_KEY_GENERATION_RSA
//#define    MCUXCL_FEATURE_KEY_AGREEMENT
//#define    MCUXCL_FEATURE_KEY_PROTECT
//#define    MCUXCL_FEATURE_KEY_SELFTEST
//#define    MCUXCL_FEATURE_KEY_VALIDATION
//#define    MCUXCL_FEATURE_KEM_KYBER_ENCAPS
//#define    MCUXCL_FEATURE_KEM_KYBER_DECAPS
//#define    MCUXCL_FEATURE_KYBER
//#define    MCUXCL_FEATURE_LTC
//#define    MCUXCL_FEATURE_MAC
//#define    MCUXCL_FEATURE_MAC_COMPARE
//#define    MCUXCL_FEATURE_MAC_COMPUTE
//#define    MCUXCL_FEATURE_MAC_CONTEXT_INTEGRITY_PROTECTION
//#define    MCUXCL_FEATURE_MAC_MULTIPART
//#define    MCUXCL_FEATURE_MAC_ONESHOT
//#define    MCUXCL_FEATURE_MAC_SELFTEST
//#define    MCUXCL_FEATURE_MACMODES_CBCMAC
//#define    MCUXCL_FEATURE_MACMODES_CMAC
//#define    MCUXCL_FEATURE_MACMODES_SGI_CMAC_SUB_KEYS
//#define    MCUXCL_FEATURE_MACMODES_GMAC
//#define    MCUXCL_FEATURE_MACMODES_KMAC
//#define    MCUXCL_FEATURE_MACMODES_XCBCMAC
//#define    MCUXCL_FEATURE_MACMODES_DMA_BLOCKING
//#define    MCUXCL_FEATURE_MACMODES_DMA_NONBLOCKING
//#define    MCUXCL_FEATURE_MAC_SIPHASH
//#define    MCUXCL_FEATURE_HMAC_ELS
//#define    MCUXCL_FEATURE_HMAC_SW
//#define    MCUXCL_FEATURE_MATH_SECMODEXP_RISCV_SFRMASKING
//#define    MCUXCL_FEATURE_MATH_MOD_SQUAREROOT
//#define    MCUXCL_FEATURE_PADDING_ISO9797_1_M1
//#define    MCUXCL_FEATURE_PADDING_ISO9797_1_M2
//#define    MCUXCL_FEATURE_PADDING_PKCS7
//#define    MCUXCL_FEATURE_PADDING_REMOVAL
//#define    MCUXCL_FEATURE_PKC_CRR_HEADER
//#define    MCUXCL_FEATURE_PKC_RAM_4KB
//#define    MCUXCL_FEATURE_PKC_RAM_8KB
//#define    MCUXCL_FEATURE_PKC_PKCRAM_NO_UNALIGNED_ACCESS
//#define    MCUXCL_FEATURE_PKC_PKCRAM_EXPLICIT_INIT_WORKAROUND
//#define    MCUXCL_FEATURE_PKC_BLOCK_CPU_WORKAROUND
//#define    MCUXCL_FEATURE_PKC_CPUPKC_ARBITRATION_WORKAROUND
//#define    MCUXCL_FEATURE_PKC_FLEX_MC
//#define    MCUXCL_FEATURE_PKC_PW_READY
//#define    MCUXCL_FEATURE_PKC_SFR_MASK
//#define    MCUXCL_FEATURE_PRNG
//#define    MCUXCL_FEATURE_PRNG_ELS
//#define    MCUXCL_FEATURE_PRNG_SCM
//#define    MCUXCL_FEATURE_PRNG_NONE
//#define    MCUXCL_FEATURE_RANDOM
//#define    MCUXCL_FEATURE_RANDOMMODES_ELSMODE
//#define    MCUXCL_FEATURE_RANDOMMODES_NORMALMODE
//#define    MCUXCL_FEATURE_RANDOMMODES_PATCHMODE
//#define    MCUXCL_FEATURE_RANDOMMODES_TESTMODE
//#define    MCUXCL_FEATURE_RANDOMMODES_CTRDRBG
//#define    MCUXCL_FEATURE_RANDOMMODES_HMACDRBG
//#define    MCUXCL_FEATURE_RANDOMMODES_PR_DISABLED
//#define    MCUXCL_FEATURE_RANDOMMODES_PTG3
//#define    MCUXCL_FEATURE_RANDOMMODES_SECSTRENGTH_128
//#define    MCUXCL_FEATURE_RANDOMMODES_SECSTRENGTH_192
//#define    MCUXCL_FEATURE_RANDOMMODES_SECSTRENGTH_256
//#define    MCUXCL_FEATURE_RANDOMMODES_DERIVATION_FUNCTION
//#define    MCUXCL_FEATURE_RANDOMMODES_NO_DERIVATION_FUNCTION
//#define    MCUXCL_FEATURE_RANDOMMODES_CTRDRBG_ELS
//#define    MCUXCL_FEATURE_RANDOMMODES_CTRDRBG_SGI
//#define    MCUXCL_FEATURE_RSA_SIGN
//#define    MCUXCL_FEATURE_RSA_VERIFY
//#define    MCUXCL_FEATURE_RSA_KEYGENERATION
//#define    MCUXCL_FEATURE_RSA_NOHWACC_2K
//#define    MCUXCL_FEATURE_RSA_NOHWACC_3K
//#define    MCUXCL_FEATURE_RSA_VERIFY_SWONLY
//#define    MCUXCL_FEATURE_RSA_STRENGTH_CHECK
//#define    MCUXCL_FEATURE_RSA_RSASSA_PSS
//#define    MCUXCL_FEATURE_RSA_RSASSA_PKCS1v15
//#define    MCUXCL_FEATURE_RSA_RSAES_OAEP
//#define    MCUXCL_FEATURE_RSA_RSAES_PKCS1v15
//#define    MCUXCL_FEATURE_RSA_NOEMSA
//#define    MCUXCL_FEATURE_RSA_8K_KEYS
//#define    MCUXCL_FEATURE_RSA_NOEME
//#define    MCUXCL_FEATURE_RSA_COMPARE_NOEMSA
//#define    MCUXCL_FEATURE_SESSION_HAS_RANDOM
//#define    MCUXCL_FEATURE_SESSION_HAS_RTF
//#define    MCUXCL_FEATURE_SESSION_PKCWA_CHECK
//#define    MCUXCL_FEATURE_SESSION_JOBS
//#define    MCUXCL_FEATURE_SESSION_ENTRYEXIT_REGULARRETURN
//#define    MCUXCL_FEATURE_SESSION_ENTRYEXIT_EARLYEXIT
//#define    MCUXCL_FEATURE_SESSION_SECURITYOPTIONS
//#define    MCUXCL_FEATURE_SESSION_SECURITYOPTIONS_DUMMYCYCLES
//#define    MCUXCL_FEATURE_SESSION_SECURITYOPTIONS_ADDITIONAL_SWCOMP
//#define    MCUXCL_FEATURE_SESSION_SECURITYOPTIONS_DOUBLE_VERIFICATION_SIGNATURE
//#define    MCUXCL_FEATURE_SIGNATURE_MULTIPART
//#define    MCUXCL_FEATURE_SIGNATURE_ONESHOT
//#define    MCUXCL_FEATURE_SIGNATURE_RSA_SIGN
//#define    MCUXCL_FEATURE_SIGNATURE_RSA_VERIFY
//#define    MCUXCL_FEATURE_SIGNATURE_SIGN
//#define    MCUXCL_FEATURE_SIGNATURE_VERIFY
//#define    MCUXCL_FEATURE_SIGNATURE_SELFTEST
//#define    MCUXCL_FEATURE_SIGNATURE_CONTEXT_INTEGRITY_PROTECTION
//#define    MCUXCL_FEATURE_SIGNATURE_FAST_VERIFICATION
//#define    MCUXCL_FEATURE_SIGNATURE_DILITHIUM_SIGN
//#define    MCUXCL_FEATURE_SIGNATURE_DILITHIUM_VERIFY
//#define    MCUXCL_FEATURE_TRNG_CRR_HEADER
//#define    MCUXCL_FEATURE_TRNG_ELS
//#define    MCUXCL_FEATURE_TRNG_SA_TRNG
//#define    MCUXCL_FEATURE_TRNG_SA_TRNG_256
//#define    MCUXCL_FEATURE_TRNG_SA_TRNG_512
//#define    MCUXCL_FEATURE_TRNG_SA_TRNG_DUAL_OSCILLATOR_MODE
//#define    MCUXCL_FEATURE_XOF_ONESHOT
//#define    MCUXCL_FEATURE_XOF_MULTIPART
//#define    MCUXCL_FEATURE_XOF_C_SHAKE_128
//#define    MCUXCL_FEATURE_XOF_C_SHAKE_256
//#define    MCUXCL_FEATURE_XOF_LTC_SHAKE_128
//#define    MCUXCL_FEATURE_XOF_LTC_SHAKE_256
//#define    MCUXCL_FEATURE_XOF_LTC_CSHAKE_128
//#define    MCUXCL_FEATURE_XOF_LTC_CSHAKE_256
//#define    MCUXCL_FEATURE_CSSL_FP_INCLUDE_SECURE_COUNTER
//#define    MCUXCL_FEATURE_CSSL_FP_INCLUDE_CODE_SIGNATURE
//#define    MCUXCL_FEATURE_CSSL_FP_INCLUDE_NONE
//#define    MCUXCL_FEATURE_CSSL_FP_USE_SECURE_COUNTER
//#define    MCUXCL_FEATURE_CSSL_FP_USE_CODE_SIGNATURE
//#define    MCUXCL_FEATURE_CSSL_FP_USE_NONE
//#define    MCUXCL_FEATURE_CSSL_FP_EXCLUDE_COVERITY_PRAGMAS
//#define    MCUXCL_FEATURE_CSSL_ARM_M0
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_COPY
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_XOR
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_SET
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_COMPARE
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_CLEAR
//#define    MCUXCL_FEATURE_CSSL_MEMORY_C_FALLBACK
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_NORMAL_OPERATION_RISCV
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_SECURE_OPERATION_RISCV
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_HYBRID_LOCAL_CDOG
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_HW_CDOG
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_HW_SCM
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_HW_S3SCM
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_SW_LOCAL
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_SW_CALLBACK
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_SW_CONTEXT
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_SW_GLOBAL
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_NONE
//#define    MCUXCL_FEATURE_CSSL_SC_USE_HYBRID_LOCAL_CDOG
//#define    MCUXCL_FEATURE_CSSL_SC_USE_HW_CDOG
//#define    MCUXCL_FEATURE_CSSL_SC_USE_HW_SCM
//#define    MCUXCL_FEATURE_CSSL_SC_USE_HW_S3SCM
//#define    MCUXCL_FEATURE_CSSL_SC_USE_SW_LOCAL
//#define    MCUXCL_FEATURE_CSSL_SC_USE_SW_CALLBACK
//#define    MCUXCL_FEATURE_CSSL_SC_USE_SW_CONTEXT
//#define    MCUXCL_FEATURE_CSSL_SC_USE_SW_GLOBAL
//#define    MCUXCL_FEATURE_CSSL_SC_USE_NONE
//#define    MCUXCL_FEATURE_CSSL_SC_RISCV_ASM
//#define    MCUXCL_FEATURE_CSSL_DI_USE_SECURE_COUNTER
//#define    MCUXCL_FEATURE_CSSL_DI_USE_NONE
//#define    MCUXCL_FEATURE_CSSL_MEMORY_PRNG_STUB
//#define    MCUXCL_FEATURE_SM4_CCM
//#define    MCUXCL_FEATURE_CIPHERMODES_SM4
//#define    MCUXCL_FEATURE_HASH_HW_SM3
//#define    MCUXCL_FEATURE_HASH_SW_SM3
//#define    MCUXCL_FEATURE_HASH_SM3_RISCV
//#define    MCUXCL_FEATURE_MACMODES_HMAC_SM3
//#define    MCUXCL_FEATURE_MACMODES_CBCMAC_SM4
//#define    MCUXCL_FEATURE_MACMODES_CMAC_SM4
//#define    MCUXCL_FEATURE_RANDOMMODES_OSCCA_TRNG
//#define    MCUXCL_FEATURE_OSCCA_RNG_256
//#define    MCUXCL_FEATURE_OSCCA_RNG_512
//#define    MCUXCL_FEATURE_OSCCA_RNG_2_SOURCES
//#define    MCUXCL_FEATURE_SM2_INTERNAL
//#define    MCUXCL_FEATURE_SM2_KEYGEN
//#define    MCUXCL_FEATURE_SM2_CIPHER
//#define    MCUXCL_FEATURE_SM2_SIGNATURE
//#define    MCUXCL_FEATURE_SM2_KEYAGREEMENT
//#define    MCUXCL_FEATURE_NO_LINKER_SCRIPT
//#define    MCUXCL_FEATURE_CAAM_POINTER_SIZE_BITS_32
//#define    MCUXCL_FEATURE_CAAM_POINTER_SIZE_BITS_64
//#define    MCUXCL_FEATURE_PROJECT_CLNS
//#define    MCUXCL_FEATURE_SB3
//#define    MCUXCL_FEATURE_SB3_384
//#define    MCUXCL_FEATURE_RSA_ADAPTERCHECKS
//#define    MCUXCL_FEATURE_BINARY_DELIVERY
//#define    MCUXCL_FEATURE_SOURCE_DELIVERY
//#define    MCUXCL_FEATURE_KEEP_ECLIPSE_FORMATTER_CONTROL
//#define    MCUXCL_FEATURE_KEEP_INTERNAL_COMMENTS
//#define    MCUXCL_FEATURE_INTERNAL_INCLUDES_FLAG

//commented defines for all enabled features 
//#define    MCUXCL_FEATURE_EXPORTED_FEATURE_HEADER
//#define    MCUXCL_FEATURE_EXPORTED_PLATFORM_HEADERS
//#define    MCUXCL_FEATURE_PLATFORM_RW61X
//#define    MCUXCL_FEATURE_PLATFORM_MCXN
//#define    MCUXCL_FEATURE_PLATFORM_LPC
//#define    MCUXCL_FEATURE_PROJECT_VOLTA_ON_NIRVANA
//#define    MCUXCL_FEATURE_PLATFORM_MIMXRT
//#define    MCUXCL_FEATURE_PROJECT_BLACKBIRD
//#define    MCUXCL_FEATURE_PROJECT_CSSL
//#define    MCUXCL_FEATURE_PROJECT_NCCL
//#define    MCUXCL_FEATURE_PROJECT_QUANTUM
//#define    MCUXCL_FEATURE_PROJECT_SHARK
//#define    MCUXCL_FEATURE_HW_ELS
//#define    MCUXCL_FEATURE_HW_GDET
//#define    MCUXCL_FEATURE_HW_GLIKEY
//#define    MCUXCL_FEATURE_HW_PKC
//#define    MCUXCL_FEATURE_HW_ROPUF
//#define    MCUXCL_FEATURE_HW_SAFO_SM3
//#define    MCUXCL_FEATURE_HW_SAFO_SM4
//#define    MCUXCL_FEATURE_HW_SGI
//#define    MCUXCL_FEATURE_HW_TRNG
//#define    MCUXCL_FEATURE_HW_RISCV_ZBB
//#define    MCUXCL_FEATURE_HW_RISCV_CSW
//#define    MCUXCL_FEATURE_HW_CACHE_ENABLED
//#define    MCUXCL_FEATURE_ELS
//#define    MCUXCL_FEATURE_ELS_AEAD
//#define    MCUXCL_FEATURE_ELS_API_INPUT_PARAM_CHECKS
//#define    MCUXCL_FEATURE_ELS_CKDF
//#define    MCUXCL_FEATURE_ELS_CKDF_SP80056C
//#define    MCUXCL_FEATURE_ELS_CMAC
//#define    MCUXCL_FEATURE_ELS_ECC_KEY_EXCHANGE
//#define    MCUXCL_FEATURE_ELS_ECC_ECKXCH_ODD_EVEN
//#define    MCUXCL_FEATURE_ELS_ECC_ECKXCH_ODD
//#define    MCUXCL_FEATURE_ELS_GLITCHDETECTOR
//#define    MCUXCL_FEATURE_ELS_HKDF
//#define    MCUXCL_FEATURE_ELS_HMAC
//#define    MCUXCL_FEATURE_ELS_HWCONFIG
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_DELETE
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_EXPORT
//#define    MCUXCL_FEATURE_ELS_KEY_EXPORT_SW_DFA_PROTECTION
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_ROM
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_TEST
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_ROM_TEST
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_DUK_UPDATE
//#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_DUK_UPDATE_TEST
//#define    MCUXCL_FEATURE_ELS_RNG
//#define    MCUXCL_FEATURE_ELS_SHA_224
//#define    MCUXCL_FEATURE_ELS_SHA_256
//#define    MCUXCL_FEATURE_ELS_SHA_384
//#define    MCUXCL_FEATURE_ELS_SHA_512
//#define    MCUXCL_FEATURE_ELS_SHA_512_224
//#define    MCUXCL_FEATURE_ELS_SHA_512_256
//#define    MCUXCL_FEATURE_ELS_SHA_DIRECT
//#define    MCUXCL_FEATURE_ELS_SHA_DIRECT_MODE_FLAG
//#define    MCUXCL_FEATURE_ELS_AES_WITH_SIDE_CHANNEL_PROTECTION
//#define    MCUXCL_FEATURE_ELS_TLS
//#define    MCUXCL_FEATURE_ELS_NO_INTERNAL_STATE_FLAGS
//#define    MCUXCL_FEATURE_ELS_NO_INTERNAL_STATE_FLAGS_CMAC
//#define    MCUXCL_FEATURE_ELS_PUK_INTERNAL_BIT
//#define    MCUXCL_FEATURE_ELS_PUK_INTERNAL
//#define    MCUXCL_FEATURE_ELS_RND_RAW
//#define    MCUXCL_FEATURE_ELS_PRND_INIT
//#define    MCUXCL_FEATURE_ELS_DTRNG_PRV_CONFIG_LOAD
//#define    MCUXCL_FEATURE_ELS_LOCKING
//#define    MCUXCL_FEATURE_ELS_CMD_CRC
//#define    MCUXCL_FEATURE_ELS_DMA_ADDRESS_READBACK
//#define    MCUXCL_FEATURE_ELS_DMA_FINAL_ADDRESS_READBACK
//#define    MCUXCL_FEATURE_ELS_RANDOMIZE_RFC3394_OUT
//#define    MCUXCL_FEATURE_ELS_RESP_GEN
//#define    MCUXCL_FEATURE_ELS_GET_FW_VERSION
//#define    MCUXCL_FEATURE_ELS_CACHE_MAINTENANCE
//#define    MCUXCL_FEATURE_ELS_ACCESS_PKCRAM_WORKAROUND
//#define    MCUXCL_FEATURE_ELS_ACCESS_PKCRAM_WORKAROUND_M2
//#define    MCUXCL_FEATURE_ELS_ITERATIVE_SEEDING
//#define    MCUXCL_FEATURE_ELS_HW_OUT_SLOTS
//#define    MCUXCL_FEATURE_ELS_LINK_BASE_ADDRESS
//#define    MCUXCL_FEATURE_ELS_ENTROPY_TEST
//#define    MCUXCL_FEATURE_GLIKEY
//#define    MCUXCL_FEATURE_GLIKEY_STEPS_4
//#define    MCUXCL_FEATURE_GLIKEY_STEPS_8
//#define    MCUXCL_FEATURE_GLIKEY_GETVERSION
//#define    MCUXCL_FEATURE_DMA
//#define    MCUXCL_FEATURE_DMA_SGI_HANDSHAKE
//#define    MCUXCL_FEATURE_SGI
//#define    MCUXCL_FEATURE_SGI_AUTOMODE
//#define    MCUXCL_FEATURE_SGI_AUTOMODE_WORKAROUND_READ_FULL_DATOUT
//#define    MCUXCL_FEATURE_SGI_HAS_EXTERNAL_KEYBANKS
//#define    MCUXCL_FEATURE_SAFO
//#define    MCUXCL_FEATURE_AEAD_CONTEXT_INTEGRITY_PROTECTION
//#define    MCUXCL_FEATURE_AEAD_CRYPT
//#define    MCUXCL_FEATURE_AEAD_ENCRYPT_DECRYPT
//#define    MCUXCL_FEATURE_AEAD_ONESHOT
//#define    MCUXCL_FEATURE_AEAD_MULTIPART
//#define    MCUXCL_FEATURE_AEAD_SELFTEST
//#define    MCUXCL_FEATURE_AEADMODES_SW
//#define    MCUXCL_FEATURE_AEADMODES_GCM
//#define    MCUXCL_FEATURE_AEADMODES_CCM
//#define    MCUXCL_FEATURE_AEADMODES_CCMSTAR
//#define    MCUXCL_FEATURE_AEADMODES_EAX
//#define    MCUXCL_FEATURE_AES128
//#define    MCUXCL_FEATURE_AES192
//#define    MCUXCL_FEATURE_AES256
//#define    MCUXCL_FEATURE_AES_SW
//#define    MCUXCL_FEATURE_1KDES
//#define    MCUXCL_FEATURE_2K3DES
//#define    MCUXCL_FEATURE_3K3DES
//#define    MCUXCL_FEATURE_DES_SW
//#define    MCUXCL_FEATURE_BUFFER_USE_OBJECT
//#define    MCUXCL_FEATURE_BUFFER_USE_POINTER
//#define    MCUXCL_FEATURE_BUFFER_SCATTER_GATHER
//#define    MCUXCL_FEATURE_CIPHER_CONTEXT_INTEGRITY_PROTECTION
//#define    MCUXCL_FEATURE_CIPHER_CRYPT
//#define    MCUXCL_FEATURE_CIPHER_ENCRYPT_DECRYPT
//#define    MCUXCL_FEATURE_CIPHER_ONESHOT
//#define    MCUXCL_FEATURE_CIPHER_MULTIPART
//#define    MCUXCL_FEATURE_CIPHER_RSA_ENCRYPT
//#define    MCUXCL_FEATURE_CIPHER_RSA_DECRYPT
//#define    MCUXCL_FEATURE_CIPHER_SELFTEST
//#define    MCUXCL_FEATURE_CIPHERMODES_ECB
//#define    MCUXCL_FEATURE_CIPHERMODES_CBC
//#define    MCUXCL_FEATURE_CIPHERMODES_CTR
//#define    MCUXCL_FEATURE_CIPHERMODES_CFB
//#define    MCUXCL_FEATURE_CIPHERMODES_OFB
//#define    MCUXCL_FEATURE_CIPHERMODES_XTS
//#define    MCUXCL_FEATURE_CIPHERMODES_DMA_BLOCKING
//#define    MCUXCL_FEATURE_CIPHERMODES_DMA_NONBLOCKING
//#define    MCUXCL_FEATURE_CIPHERMODES_SW
//#define    MCUXCL_FEATURE_CRC_HW
//#define    MCUXCL_FEATURE_CRC_SW
//#define    MCUXCL_FEATURE_CRC_CRC32
//#define    MCUXCL_FEATURE_ECC
//#define    MCUXCL_FEATURE_ECC_STRENGTH_CHECK
//#define    MCUXCL_FEATURE_ECC_INTERNAL
//#define    MCUXCL_FEATURE_ECC_EXTERNAL
//#define    MCUXCL_FEATURE_ECC_WEIERSTRASS
//#define    MCUXCL_FEATURE_ECC_TWISTEDEDWARDS
//#define    MCUXCL_FEATURE_ECC_MONTGOMERY
//#define    MCUXCL_FEATURE_ECC_VERIFY_P384
//#define    MCUXCL_FEATURE_ECC_MONTDH
//#define    MCUXCL_FEATURE_ECC_CURVE25519
//#define    MCUXCL_FEATURE_ECC_CURVE448
//#define    MCUXCL_FEATURE_ECC_EDDSA
//#define    MCUXCL_FEATURE_ECC_ECDSA_DETERMINISTIC
//#define    MCUXCL_FEATURE_ECC_ED25519
//#define    MCUXCL_FEATURE_ECC_ED448
//#define    MCUXCL_FEATURE_ECC_WEIERECC_GENERATECUSTOMDOMAINPARAMS
//#define    MCUXCL_FEATURE_ECC_WEIERECC_DECODEPOINT
//#define    MCUXCL_FEATURE_ECC_WEIERECC_KEYGENERATION
//#define    MCUXCL_FEATURE_ECC_WEIERECC_KEYVALIDATION
//#define    MCUXCL_FEATURE_ECC_ECDSA
//#define    MCUXCL_FEATURE_ECC_ECDH
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION_POINTADD
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION_POINTSUB
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION_SCALARMULT
//#define    MCUXCL_FEATURE_ECC_ARITHMETICOPERATION_SECURESCALARMULT
//#define    MCUXCL_FEATURE_ECC_SECPK1_CURVES
//#define    MCUXCL_FEATURE_ECC_SECPR1_CURVES
//#define    MCUXCL_FEATURE_ECC_NISTPR1_CURVES
//#define    MCUXCL_FEATURE_ECC_ANSIX9P_CURVES
//#define    MCUXCL_FEATURE_ECC_BRAINPOOLR1_CURVES
//#define    MCUXCL_FEATURE_ECC_BRAINPOOLT1_CURVES
//#define    MCUXCL_FEATURE_EXAMPLE_PKC_ENABLED
//#define    MCUXCL_FEATURE_HASH
//#define    MCUXCL_FEATURE_HASH_MULTIPART
//#define    MCUXCL_FEATURE_HASH_ONESHOT
//#define    MCUXCL_FEATURE_HASH_COMPARE
//#define    MCUXCL_FEATURE_HASH_COMPUTE
//#define    MCUXCL_FEATURE_HASH_IMPORT_EXPORT_STATE
//#define    MCUXCL_FEATURE_HASH_SELFTEST
//#define    MCUXCL_FEATURE_HASHMODES
//#define    MCUXCL_FEATURE_HASH_C_MD5
//#define    MCUXCL_FEATURE_HASH_C_SHA_1
//#define    MCUXCL_FEATURE_HASH_C_SHA_224
//#define    MCUXCL_FEATURE_HASH_C_SHA_256
//#define    MCUXCL_FEATURE_HASH_C_SHA_384
//#define    MCUXCL_FEATURE_HASH_C_SHA_512
//#define    MCUXCL_FEATURE_HASH_C_SHA_512_224
//#define    MCUXCL_FEATURE_HASH_C_SHA_512_256
//#define    MCUXCL_FEATURE_HASH_C_SHA3_SHAKE
//#define    MCUXCL_FEATURE_HASH_C_SHA3
//#define    MCUXCL_FEATURE_HASH_ELS
//#define    MCUXCL_FEATURE_HASH_SGI
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_224
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_256
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_384
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_512
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_512_224
//#define    MCUXCL_FEATURE_HASH_SGI_SHA_512_256
//#define    MCUXCL_FEATURE_HASH_SGI_MIYAGUCHI_PRENEEL
//#define    MCUXCL_FEATURE_HASH_LTC
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_224
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_256
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_384
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_512
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_SHAKE_128
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_SHAKE_256
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_CSHAKE_128
//#define    MCUXCL_FEATURE_HASH_LTC_SHA3_CSHAKE_256
//#define    MCUXCL_FEATURE_HASH_RANGER5_LIB
//#define    MCUXCL_FEATURE_HASH_DMA_BLOCKING
//#define    MCUXCL_FEATURE_HASH_DMA_NONBLOCKING
//#define    MCUXCL_FEATURE_HASH_SECSHA
//#define    MCUXCL_FEATURE_HASH_SECSHA_1
//#define    MCUXCL_FEATURE_HASH_SECSHA_224
//#define    MCUXCL_FEATURE_HASH_SECSHA_256
//#define    MCUXCL_FEATURE_HASH_SECSHA_384
//#define    MCUXCL_FEATURE_HASH_SECSHA_512
//#define    MCUXCL_FEATURE_HASH_SECSHA_512_224
//#define    MCUXCL_FEATURE_HASH_SECSHA_512_256
//#define    MCUXCL_FEATURE_HASH_SECSHA3
//#define    MCUXCL_FEATURE_HASH_SECSHA3_224
//#define    MCUXCL_FEATURE_HASH_SECSHA3_256
//#define    MCUXCL_FEATURE_HASH_SECSHA3_384
//#define    MCUXCL_FEATURE_HASH_SECSHA3_512
//#define    MCUXCL_FEATURE_HASH_SGI_COUNT_WORKAROUND
//#define    MCUXCL_FEATURE_KEY_DERIVATION
//#define    MCUXCL_FEATURE_KEY_DERIVATION_NIST_SP800_108
//#define    MCUXCL_FEATURE_KEY_DERIVATION_NIST_SP800_56C
//#define    MCUXCL_FEATURE_KEY_DERIVATION_ISOIEC_18033_2
//#define    MCUXCL_FEATURE_KEY_DERIVATION_ANSI_X9_63
//#define    MCUXCL_FEATURE_KEY_DERIVATION_RFC5246_PRF
//#define    MCUXCL_FEATURE_KEY_DERIVATION_HKDF
//#define    MCUXCL_FEATURE_KEY_DERIVATION_PBKDF2
//#define    MCUXCL_FEATURE_KEY_DERIVATION_IKEV2
//#define    MCUXCL_FEATURE_KEY_GENERATION
//#define    MCUXCL_FEATURE_KEY_GENERATION_RSA
//#define    MCUXCL_FEATURE_KEY_AGREEMENT
//#define    MCUXCL_FEATURE_KEY_PROTECT
//#define    MCUXCL_FEATURE_KEY_SELFTEST
//#define    MCUXCL_FEATURE_KEY_VALIDATION
//#define    MCUXCL_FEATURE_KEM_KYBER_ENCAPS
//#define    MCUXCL_FEATURE_KEM_KYBER_DECAPS
//#define    MCUXCL_FEATURE_KYBER
//#define    MCUXCL_FEATURE_LTC
//#define    MCUXCL_FEATURE_MAC
//#define    MCUXCL_FEATURE_MAC_COMPARE
//#define    MCUXCL_FEATURE_MAC_COMPUTE
//#define    MCUXCL_FEATURE_MAC_CONTEXT_INTEGRITY_PROTECTION
//#define    MCUXCL_FEATURE_MAC_MULTIPART
//#define    MCUXCL_FEATURE_MAC_ONESHOT
//#define    MCUXCL_FEATURE_MAC_SELFTEST
//#define    MCUXCL_FEATURE_MACMODES_CBCMAC
//#define    MCUXCL_FEATURE_MACMODES_CMAC
//#define    MCUXCL_FEATURE_MACMODES_SGI_CMAC_SUB_KEYS
//#define    MCUXCL_FEATURE_MACMODES_GMAC
//#define    MCUXCL_FEATURE_MACMODES_KMAC
//#define    MCUXCL_FEATURE_MACMODES_XCBCMAC
//#define    MCUXCL_FEATURE_MACMODES_DMA_BLOCKING
//#define    MCUXCL_FEATURE_MACMODES_DMA_NONBLOCKING
//#define    MCUXCL_FEATURE_MAC_SIPHASH
//#define    MCUXCL_FEATURE_HMAC_ELS
//#define    MCUXCL_FEATURE_HMAC_SW
//#define    MCUXCL_FEATURE_MATH_SECMODEXP_RISCV_SFRMASKING
//#define    MCUXCL_FEATURE_MATH_MOD_SQUAREROOT
//#define    MCUXCL_FEATURE_PADDING_ISO9797_1_M1
//#define    MCUXCL_FEATURE_PADDING_ISO9797_1_M2
//#define    MCUXCL_FEATURE_PADDING_PKCS7
//#define    MCUXCL_FEATURE_PADDING_REMOVAL
//#define    MCUXCL_FEATURE_PKC_CRR_HEADER
//#define    MCUXCL_FEATURE_PKC_RAM_4KB
//#define    MCUXCL_FEATURE_PKC_RAM_8KB
//#define    MCUXCL_FEATURE_PKC_PKCRAM_NO_UNALIGNED_ACCESS
//#define    MCUXCL_FEATURE_PKC_PKCRAM_EXPLICIT_INIT_WORKAROUND
//#define    MCUXCL_FEATURE_PKC_BLOCK_CPU_WORKAROUND
//#define    MCUXCL_FEATURE_PKC_CPUPKC_ARBITRATION_WORKAROUND
//#define    MCUXCL_FEATURE_PKC_FLEX_MC
//#define    MCUXCL_FEATURE_PKC_PW_READY
//#define    MCUXCL_FEATURE_PKC_SFR_MASK
//#define    MCUXCL_FEATURE_PRNG
//#define    MCUXCL_FEATURE_PRNG_ELS
//#define    MCUXCL_FEATURE_PRNG_SCM
//#define    MCUXCL_FEATURE_PRNG_NONE
//#define    MCUXCL_FEATURE_RANDOM
//#define    MCUXCL_FEATURE_RANDOMMODES_ELSMODE
//#define    MCUXCL_FEATURE_RANDOMMODES_NORMALMODE
//#define    MCUXCL_FEATURE_RANDOMMODES_PATCHMODE
//#define    MCUXCL_FEATURE_RANDOMMODES_TESTMODE
//#define    MCUXCL_FEATURE_RANDOMMODES_CTRDRBG
//#define    MCUXCL_FEATURE_RANDOMMODES_HMACDRBG
//#define    MCUXCL_FEATURE_RANDOMMODES_PR_DISABLED
//#define    MCUXCL_FEATURE_RANDOMMODES_PTG3
//#define    MCUXCL_FEATURE_RANDOMMODES_SECSTRENGTH_128
//#define    MCUXCL_FEATURE_RANDOMMODES_SECSTRENGTH_192
//#define    MCUXCL_FEATURE_RANDOMMODES_SECSTRENGTH_256
//#define    MCUXCL_FEATURE_RANDOMMODES_DERIVATION_FUNCTION
//#define    MCUXCL_FEATURE_RANDOMMODES_NO_DERIVATION_FUNCTION
//#define    MCUXCL_FEATURE_RANDOMMODES_CTRDRBG_ELS
//#define    MCUXCL_FEATURE_RANDOMMODES_CTRDRBG_SGI
//#define    MCUXCL_FEATURE_RSA_SIGN
//#define    MCUXCL_FEATURE_RSA_VERIFY
//#define    MCUXCL_FEATURE_RSA_KEYGENERATION
//#define    MCUXCL_FEATURE_RSA_NOHWACC_2K
//#define    MCUXCL_FEATURE_RSA_NOHWACC_3K
//#define    MCUXCL_FEATURE_RSA_VERIFY_SWONLY
//#define    MCUXCL_FEATURE_RSA_STRENGTH_CHECK
//#define    MCUXCL_FEATURE_RSA_RSASSA_PSS
//#define    MCUXCL_FEATURE_RSA_RSASSA_PKCS1v15
//#define    MCUXCL_FEATURE_RSA_RSAES_OAEP
//#define    MCUXCL_FEATURE_RSA_RSAES_PKCS1v15
//#define    MCUXCL_FEATURE_RSA_NOEMSA
//#define    MCUXCL_FEATURE_RSA_8K_KEYS
//#define    MCUXCL_FEATURE_RSA_NOEME
//#define    MCUXCL_FEATURE_RSA_COMPARE_NOEMSA
//#define    MCUXCL_FEATURE_SESSION_HAS_RANDOM
//#define    MCUXCL_FEATURE_SESSION_HAS_RTF
//#define    MCUXCL_FEATURE_SESSION_PKCWA_CHECK
//#define    MCUXCL_FEATURE_SESSION_JOBS
//#define    MCUXCL_FEATURE_SESSION_ENTRYEXIT_REGULARRETURN
//#define    MCUXCL_FEATURE_SESSION_ENTRYEXIT_EARLYEXIT
//#define    MCUXCL_FEATURE_SESSION_SECURITYOPTIONS
//#define    MCUXCL_FEATURE_SESSION_SECURITYOPTIONS_DUMMYCYCLES
//#define    MCUXCL_FEATURE_SESSION_SECURITYOPTIONS_ADDITIONAL_SWCOMP
//#define    MCUXCL_FEATURE_SESSION_SECURITYOPTIONS_DOUBLE_VERIFICATION_SIGNATURE
//#define    MCUXCL_FEATURE_SIGNATURE_MULTIPART
//#define    MCUXCL_FEATURE_SIGNATURE_ONESHOT
//#define    MCUXCL_FEATURE_SIGNATURE_RSA_SIGN
//#define    MCUXCL_FEATURE_SIGNATURE_RSA_VERIFY
//#define    MCUXCL_FEATURE_SIGNATURE_SIGN
//#define    MCUXCL_FEATURE_SIGNATURE_VERIFY
//#define    MCUXCL_FEATURE_SIGNATURE_SELFTEST
//#define    MCUXCL_FEATURE_SIGNATURE_CONTEXT_INTEGRITY_PROTECTION
//#define    MCUXCL_FEATURE_SIGNATURE_FAST_VERIFICATION
//#define    MCUXCL_FEATURE_SIGNATURE_DILITHIUM_SIGN
//#define    MCUXCL_FEATURE_SIGNATURE_DILITHIUM_VERIFY
//#define    MCUXCL_FEATURE_TRNG_CRR_HEADER
//#define    MCUXCL_FEATURE_TRNG_ELS
//#define    MCUXCL_FEATURE_TRNG_SA_TRNG
//#define    MCUXCL_FEATURE_TRNG_SA_TRNG_256
//#define    MCUXCL_FEATURE_TRNG_SA_TRNG_512
//#define    MCUXCL_FEATURE_TRNG_SA_TRNG_DUAL_OSCILLATOR_MODE
//#define    MCUXCL_FEATURE_XOF_ONESHOT
//#define    MCUXCL_FEATURE_XOF_MULTIPART
//#define    MCUXCL_FEATURE_XOF_C_SHAKE_128
//#define    MCUXCL_FEATURE_XOF_C_SHAKE_256
//#define    MCUXCL_FEATURE_XOF_LTC_SHAKE_128
//#define    MCUXCL_FEATURE_XOF_LTC_SHAKE_256
//#define    MCUXCL_FEATURE_XOF_LTC_CSHAKE_128
//#define    MCUXCL_FEATURE_XOF_LTC_CSHAKE_256
//#define    MCUXCL_FEATURE_CSSL_FP_INCLUDE_SECURE_COUNTER
//#define    MCUXCL_FEATURE_CSSL_FP_INCLUDE_CODE_SIGNATURE
//#define    MCUXCL_FEATURE_CSSL_FP_INCLUDE_NONE
//#define    MCUXCL_FEATURE_CSSL_FP_USE_SECURE_COUNTER
//#define    MCUXCL_FEATURE_CSSL_FP_USE_CODE_SIGNATURE
//#define    MCUXCL_FEATURE_CSSL_FP_USE_NONE
//#define    MCUXCL_FEATURE_CSSL_FP_EXCLUDE_COVERITY_PRAGMAS
//#define    MCUXCL_FEATURE_CSSL_ARM_M0
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_COPY
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_XOR
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_SET
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_COMPARE
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_CLEAR
//#define    MCUXCL_FEATURE_CSSL_MEMORY_C_FALLBACK
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_NORMAL_OPERATION_RISCV
//#define    MCUXCL_FEATURE_CSSL_MEMORY_ENABLE_SECURE_OPERATION_RISCV
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_HYBRID_LOCAL_CDOG
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_HW_CDOG
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_HW_SCM
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_HW_S3SCM
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_SW_LOCAL
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_SW_CALLBACK
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_SW_CONTEXT
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_SW_GLOBAL
//#define    MCUXCL_FEATURE_CSSL_SC_INCLUDE_NONE
//#define    MCUXCL_FEATURE_CSSL_SC_USE_HYBRID_LOCAL_CDOG
//#define    MCUXCL_FEATURE_CSSL_SC_USE_HW_CDOG
//#define    MCUXCL_FEATURE_CSSL_SC_USE_HW_SCM
//#define    MCUXCL_FEATURE_CSSL_SC_USE_HW_S3SCM
//#define    MCUXCL_FEATURE_CSSL_SC_USE_SW_LOCAL
//#define    MCUXCL_FEATURE_CSSL_SC_USE_SW_CALLBACK
//#define    MCUXCL_FEATURE_CSSL_SC_USE_SW_CONTEXT
//#define    MCUXCL_FEATURE_CSSL_SC_USE_SW_GLOBAL
//#define    MCUXCL_FEATURE_CSSL_SC_USE_NONE
//#define    MCUXCL_FEATURE_CSSL_SC_RISCV_ASM
//#define    MCUXCL_FEATURE_CSSL_DI_USE_SECURE_COUNTER
//#define    MCUXCL_FEATURE_CSSL_DI_USE_NONE
//#define    MCUXCL_FEATURE_CSSL_MEMORY_PRNG_STUB
//#define    MCUXCL_FEATURE_SM4_CCM
//#define    MCUXCL_FEATURE_CIPHERMODES_SM4
//#define    MCUXCL_FEATURE_HASH_HW_SM3
//#define    MCUXCL_FEATURE_HASH_SW_SM3
//#define    MCUXCL_FEATURE_HASH_SM3_RISCV
//#define    MCUXCL_FEATURE_MACMODES_HMAC_SM3
//#define    MCUXCL_FEATURE_MACMODES_CBCMAC_SM4
//#define    MCUXCL_FEATURE_MACMODES_CMAC_SM4
//#define    MCUXCL_FEATURE_RANDOMMODES_OSCCA_TRNG
//#define    MCUXCL_FEATURE_OSCCA_RNG_256
//#define    MCUXCL_FEATURE_OSCCA_RNG_512
//#define    MCUXCL_FEATURE_OSCCA_RNG_2_SOURCES
//#define    MCUXCL_FEATURE_SM2_INTERNAL
//#define    MCUXCL_FEATURE_SM2_KEYGEN
//#define    MCUXCL_FEATURE_SM2_CIPHER
//#define    MCUXCL_FEATURE_SM2_SIGNATURE
//#define    MCUXCL_FEATURE_SM2_KEYAGREEMENT
//#define    MCUXCL_FEATURE_NO_LINKER_SCRIPT
//#define    MCUXCL_FEATURE_CAAM_POINTER_SIZE_BITS_32
//#define    MCUXCL_FEATURE_CAAM_POINTER_SIZE_BITS_64
//#define    MCUXCL_FEATURE_PROJECT_CLNS
//#define    MCUXCL_FEATURE_SB3
//#define    MCUXCL_FEATURE_SB3_384
//#define    MCUXCL_FEATURE_RSA_ADAPTERCHECKS
//#define    MCUXCL_FEATURE_BINARY_DELIVERY
//#define    MCUXCL_FEATURE_SOURCE_DELIVERY
//#define    MCUXCL_FEATURE_KEEP_ECLIPSE_FORMATTER_CONTROL
//#define    MCUXCL_FEATURE_KEEP_INTERNAL_COMMENTS
//#define    MCUXCL_FEATURE_INTERNAL_INCLUDES_FLAG

//defines for exported features 
#define    MCUXCL_FEATURE_PLATFORM_LPC          1
#define    MCUXCL_FEATURE_ELS_ECC_ECKXCH_ODD          1
#define    MCUXCL_FEATURE_ELS_KEY_MGMT_KEYPROV_TEST          1
#define    MCUXCL_FEATURE_ELS_AES_WITH_SIDE_CHANNEL_PROTECTION          1
#define    MCUXCL_FEATURE_ELS_ITERATIVE_SEEDING          1
#define    MCUXCL_FEATURE_ELS_GLITCHDETECTOR          1
#endif