/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "KeytabModule"
 * 	found in "ipa.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_TypeValuePair_H_
#define	_TypeValuePair_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Int32.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TypeValuePair */
typedef struct TypeValuePair {
	Int32_t	 type;
	OCTET_STRING_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TypeValuePair_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TypeValuePair;

#ifdef __cplusplus
}
#endif

#endif	/* _TypeValuePair_H_ */
#include <asn_internal.h>
