DECLSPEC void camellia256_decrypt_xts_first (const u32 *ukey1, const u32 *ukey2, const u32 *in, u32 *out, u32 *S, u32 *T, u32 *ks)
DECLSPEC void camellia256_decrypt_xts_next (const u32 *in, u32 *out, u32 *T, u32 *ks)
DECLSPEC void kuznyechik_decrypt_xts_first (const u32 *ukey1, const u32 *ukey2, const u32 *in, u32 *out, u32 *S, u32 *T, u32 *ks)
DECLSPEC void kuznyechik_decrypt_xts_next (const u32 *in, u32 *out, u32 *T, u32 *ks)
DECLSPEC int verify_header_camellia (__global const u32 *data_buf, const u32 signature, const u32 *ukey1, const u32 *ukey2)
DECLSPEC int verify_header_kuznyechik (__global const u32 *data_buf, const u32 signature, const u32 *ukey1, const u32 *ukey2)
DECLSPEC int verify_header_camellia_kuznyechik (__global const u32 *data_buf, const u32 signature, const u32 *ukey1, const u32 *ukey2, const u32 *ukey3, const u32 *ukey4)
DECLSPEC int verify_header_camellia_serpent (__global const u32 *data_buf, const u32 signature, const u32 *ukey1, const u32 *ukey2, const u32 *ukey3, const u32 *ukey4)
DECLSPEC int verify_header_kuznyechik_aes (__global const u32 *data_buf, const u32 signature, const u32 *ukey1, const u32 *ukey2, const u32 *ukey3, const u32 *ukey4, SHM_TYPE u32 *s_te0, SHM_TYPE u32 *s_te1, SHM_TYPE u32 *s_te2, SHM_TYPE u32 *s_te3, SHM_TYPE u32 *s_te4, SHM_TYPE u32 *s_td0, SHM_TYPE u32 *s_td1, SHM_TYPE u32 *s_td2, SHM_TYPE u32 *s_td3, SHM_TYPE u32 *s_td4)
DECLSPEC int verify_header_kuznyechik_twofish (__global const u32 *data_buf, const u32 signature, const u32 *ukey1, const u32 *ukey2, const u32 *ukey3, const u32 *ukey4)
DECLSPEC int verify_header_kuznyechik_serpent_camellia (__global const u32 *data_buf, const u32 signature, const u32 *ukey1, const u32 *ukey2, const u32 *ukey3, const u32 *ukey4, const u32 *ukey5, const u32 *ukey6)
