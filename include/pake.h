#include <stddef.h>
#include <stdint.h>
#include <stdio.h>


void pake_c0(
	const unsigned char *pw, 
	const uint8_t *ssid, 
	uint8_t *send_a0,
	uint8_t *pk, 
	uint8_t *sk);
	


void pake_s0(
	const unsigned char *pw, 
	const uint8_t *ssid,
	const unsigned char *a_id,
	const unsigned char *b_id,
	uint8_t *pk_prime, 
	uint8_t *K_bar, 
	uint8_t *ct,
	uint8_t *K,
	uint8_t *auth_b);

void pake_c1(
	const unsigned char *pw,
	uint8_t *pk, 
	uint8_t *sk, 
	uint8_t *pk_prime, 
	uint8_t *K_bar, 
	const uint8_t *ssid,
	const unsigned char *a_id,
	const unsigned char *b_id, 
	uint8_t *ct,
	uint8_t *ssk_a);

void pake_s1(
	const uint8_t *ssid,
	const unsigned char *a_id,
	const unsigned char *b_id,
	uint8_t *pk_prime,
	uint8_t *ct,
	uint8_t *auth_b,
	uint8_t *K,
	uint8_t *ssk_b);
