/*
 * const.h
 *
 *  Created on: 2022. 6. 16.
 *      Author: NextBankDev
 */

#ifndef INCLUDE_CONSTS_H_
#define INCLUDE_CONSTS_H_

/* DEFINE URL TEST */
#define URL_EXRATE_TEST		"http://tversegeo.verseb.io:8180/api/ExRate.json"
#define URL_EXREQ_TEST		"http://tversegeo.verseb.io:8180/api/ExReq.json"
#define URL_OUTADDR_TEST	"http://tversegeo.verseb.io:8180/api/OutAddrVerify.json"
#define URL_OUTPWD_TEST		"http://tversegeo.verseb.io:8180/api/RegOutPassword.json"
#define URL_WITHDRAW_TEST	"http://tversegeo.verseb.io:8180/api/ReqWithdraw.json"

/* DEFINE URL REAL */
#define URL_EXRATE_REAL		"https://versegeo.verseb.io/api/ExRate.json"
#define URL_EXREQ_REAL		"https://versegeo.verseb.io/api/ExReq.json"
#define URL_OUTADDR_REAL	"https://versegeo.verseb.io/api/OutAddrVerify.json"
#define URL_OUTPWD_REAL		"https://versegeo.verseb.io/api/RegOutPassword.json"
#define URL_WITHDRAW_REAL	"https://versegeo.verseb.io/api/ReqWithdraw.json"

/* DEFINE KEY NAME */
#define	KEY_merchantId		"merchantInformation.merchantId"
#define	KEY_merchantSiteId	"merchantInformation.merchantSiteId"
#define	KEY_clientRequestId	"clientReferenceInformation.code"
#define	KEY_customerId		"customerId"
#define	KEY_fromCurrency	"fromCurrency"
#define	KEY_toCurrency		"toCurrency"
#define	KEY_fromAmount		"fromAmount"
#define	KEY_key				"key"
#define	KEY_initialVector	"initialVector"
#define	KEY_toAmount		"toAmount"
#define	KEY_exchangeRate	"exchangeRate"
#define	KEY_status			"status"
#define	KEY_errCd			"errorInformation.errCd"
#define	KEY_reason			"errorInformation.reason"

#define	KEY_notifyUrl		"notifyUrl"
#define	KEY_internalAddress	"internalAddress"
#define	KEY_txId			"txId"
#define	KEY_outAddress		"outAddress"
#define	KEY_outPassword		"outPassword"

/* DEFINE FIELD SIZE */
#define MERCHANT_ID_SZ			50+1
#define MERCHANT_SITE_ID_SZ		30+1
#define CUSTOMER_ID_SZ			64+1
#define CODE_SZ					20+1
#define	FROM_CURRENCY_SZ		10+1
#define	TO_CURRENCY_SZ			10+1
#define FROM_AMOUNT_SZ			20+1
#define SIGN_SZ					64+1
#define	TO_AMOUNT_SZ			20+1
#define EXCHANGE_RATE_SZ		20+1
#define STATUS_SZ				10+1
#define	ERR_CD_SZ				8+1
#define	REASON_SZ				192+1
#define KEY_SZ					64+1
#define INITIAL_VECTOR_SZ		32+1

#define NOTIFY_URL_SZ			128+1
#define INTERNAL_ADDRESS_SZ		128+1
#define TX_ID_SZ				128+1
#define OUT_ADDRESS_SZ			128+1
#define OUT_PASSWORD_SZ			192+1

#endif /* INCLUDE_CONSTS_H_ */
