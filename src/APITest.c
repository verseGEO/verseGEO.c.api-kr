/*
 * APITest.c
 *
 *  Created on: 2022. 7. 11.
 *      Author: NextBankDev
 */

#include <stdio.h>
#include <string.h>
#include <VerseB.h>

int main(int argc, char *args[])
{
	if (argc != 3){
		printf("[Usage] %s [API] [exRate|exReq|outAddr|outPwd|reqWithdraw]\n", args[0]);
		return -1;
	}

	// Test 설정
	iMode									= 0;
	// Real 설정
	//iMode									= 1;
	char*				mctKey				= "9F2488BFAE5FB03B9B483FA1CF1EC94B3B4B2E52780A2B53ED67E581110CC980";
	char*				mctInitialVector	= "64750805549512089392625993734535";
	char*				mctNotifyUrl		= "http://10.30.1.51:8180/p2e/AsyncResult.jsp";
	int					iRet				= 0;

	if (strcmp("API",args[1]) == 0) {
		// exRate
		if (strcmp("exRate", args[2]) == 0) {
			exRate_IN	exRateIn;
			exRate_OUT	exRateOut;

			strncpy(exRateIn.merchantId,		"000000000001",		sizeof(exRateIn.merchantId));
			strncpy(exRateIn.merchantSiteId,	"000001",			sizeof(exRateIn.merchantSiteId));
			strncpy(exRateIn.customerId,		"000000000001",		sizeof(exRateIn.customerId));
			strncpy(exRateIn.fromCurrency,		"GOLD",				sizeof(exRateIn.fromCurrency));
			strncpy(exRateIn.toCurrency,		"SLAYB",			sizeof(exRateIn.toCurrency));
			strncpy(exRateIn.fromAmount,		"100",				sizeof(exRateIn.fromAmount));
			strncpy(exRateIn.key,				mctKey,				sizeof(exRateIn.key));
			strncpy(exRateIn.initialVector,		mctInitialVector,	sizeof(exRateIn.initialVector));

			iRet	= exRate(&exRateIn, &exRateOut);

			printf("API exRate ret=%d\n\tmerchantId=%s\n\tmerchantSiteId=%s\n\tcode=%s\n\tcustomerId=%s\n"
					"\tfromCurrency=%s\n\ttoCurrency=%s\n\tfromAmount=%s\n\ttoAmount=%s\n\texchangeRate=%s\n"
					"\tstatus=%s\n\terrCd=%s\n\treason=%s\n",
					iRet, exRateOut.merchantId, exRateOut.merchantSiteId, exRateOut.code, exRateOut.customerId,
					exRateOut.fromCurrency, exRateOut.toCurrency, exRateOut.fromAmount, exRateOut.toAmount, exRateOut.exchangeRate,
					exRateOut.status, exRateOut.errCd, exRateOut.reason);
		}
		// exReq
		else if (strcmp("exReq", args[2]) == 0) {
			exReq_IN	exReqIn;
			exReq_OUT	exReqOut;

			strncpy(exReqIn.merchantId,			"000000000001",		sizeof(exReqIn.merchantId));
			strncpy(exReqIn.merchantSiteId,		"000001",			sizeof(exReqIn.merchantSiteId));
			strncpy(exReqIn.customerId,			"000000000001",		sizeof(exReqIn.customerId));
			strncpy(exReqIn.fromCurrency,		"GOLD",				sizeof(exReqIn.fromCurrency));
			strncpy(exReqIn.toCurrency,			"SLAYB",			sizeof(exReqIn.toCurrency));
			strncpy(exReqIn.fromAmount,			"100",				sizeof(exReqIn.fromAmount));
			strncpy(exReqIn.exchangeRate,		"10%",				sizeof(exReqIn.exchangeRate));
			strncpy(exReqIn.notifyUrl,			mctNotifyUrl,		sizeof(exReqIn.notifyUrl));
			strncpy(exReqIn.key,				mctKey,				sizeof(exReqIn.key));
			strncpy(exReqIn.initialVector,		mctInitialVector,	sizeof(exReqIn.initialVector));

			iRet	= exReq(&exReqIn, &exReqOut);

			printf("API exReq ret=%d\n\tmerchantId=%s\n\tmerchantSiteId=%s\n\tcode=%s\n\tcustomerId=%s\n"
					"\tfromCurrency=%s\n\ttoCurrency=%s\n\tfromAmount=%s\n\ttoAmount=%s\n\texchangeRate=%s\n"
					"\tinternalAddress=%s\n\ttxId=%s\n"
					"\tstatus=%s\n\terrCd=%s\n\treason=%s\n",
					iRet, exReqOut.merchantId, exReqOut.merchantSiteId, exReqOut.code, exReqOut.customerId,
					exReqOut.fromCurrency, exReqOut.toCurrency, exReqOut.fromAmount, exReqOut.toAmount, exReqOut.exchangeRate,
					exReqOut.internalAddress, exReqOut.txId,
					exReqOut.status, exReqOut.errCd, exReqOut.reason);
		}
		// outAddr
		else if (strcmp("outAddr", args[2]) == 0) {
			outAddr_IN	outAddrIn;
			outAddr_OUT	outAddrOut;

			strncpy(outAddrIn.merchantId,		"000000000001",		sizeof(outAddrIn.merchantId));
			strncpy(outAddrIn.merchantSiteId,	"000001",			sizeof(outAddrIn.merchantSiteId));
			strncpy(outAddrIn.customerId,		"000000000001",		sizeof(outAddrIn.customerId));
			strncpy(outAddrIn.outAddress,		"0x8bDfa1f6393146f005F1C84050c553367c1e27d2",				sizeof(outAddrIn.outAddress));
			strncpy(outAddrIn.key,				mctKey,				sizeof(outAddrIn.key));
			strncpy(outAddrIn.initialVector,	mctInitialVector,	sizeof(outAddrIn.initialVector));

			iRet	= outAddr(&outAddrIn, &outAddrOut);

			printf("API outAddr ret=%d\n\tmerchantId=%s\n\tmerchantSiteId=%s\n\tcode=%s\n\tcustomerId=%s\n"
					"\toutAddress=%s\n"
					"\tstatus=%s\n\terrCd=%s\n\treason=%s\n",
					iRet, outAddrOut.merchantId, outAddrOut.merchantSiteId, outAddrOut.code, outAddrOut.customerId,
					outAddrOut.outAddress,
					outAddrOut.status, outAddrOut.errCd, outAddrOut.reason);
		}
		// outPwd
		else if (strcmp("outPwd", args[2]) == 0) {
			outPwd_IN	outPwdIn;
			outPwd_OUT	outPwdOut;

			strncpy(outPwdIn.merchantId,		"000000000001",		sizeof(outPwdIn.merchantId));
			strncpy(outPwdIn.merchantSiteId,	"000001",			sizeof(outPwdIn.merchantSiteId));
			strncpy(outPwdIn.customerId,		"000000000001",		sizeof(outPwdIn.customerId));
			strncpy(outPwdIn.outAddress,		"0x8bDfa1f6393146f005F1C84050c553367c1e27d2",				sizeof(outPwdIn.outAddress));
			strncpy(outPwdIn.outPassword,		"Q!w2e3r4",			sizeof(outPwdIn.outPassword));
			strncpy(outPwdIn.key,				mctKey,				sizeof(outPwdIn.key));
			strncpy(outPwdIn.initialVector,		mctInitialVector,	sizeof(outPwdIn.initialVector));

			iRet	= outPwd(&outPwdIn, &outPwdOut);

			printf("API outPwd ret=%d\n\tmerchantId=%s\n\tmerchantSiteId=%s\n\tcode=%s\n\tcustomerId=%s\n"
					"\tstatus=%s\n\terrCd=%s\n\treason=%s\n",
					iRet, outPwdOut.merchantId, outPwdOut.merchantSiteId, outPwdOut.code, outPwdOut.customerId,
					outPwdOut.status, outPwdOut.errCd, outPwdOut.reason);
		}
		// reqWithdraw
		else if (strcmp("reqWithdraw", args[2]) == 0) {
			reqWdraw_IN		reqWdrawIn;
			reqWdraw_OUT	reqWdrawOut;

			strncpy(reqWdrawIn.merchantId,		"000000000001",		sizeof(reqWdrawIn.merchantId));
			strncpy(reqWdrawIn.merchantSiteId,	"000001",			sizeof(reqWdrawIn.merchantSiteId));
			strncpy(reqWdrawIn.customerId,		"000000000001",		sizeof(reqWdrawIn.customerId));
			strncpy(reqWdrawIn.outAddress,		"0x8bDfa1f6393146f005F1C84050c553367c1e27d2",				sizeof(reqWdrawIn.outAddress));
			strncpy(reqWdrawIn.outPassword,		"Q!w2e3r4",			sizeof(reqWdrawIn.outPassword));
			strncpy(reqWdrawIn.fromCurrency,	"SLAYB",			sizeof(reqWdrawIn.fromCurrency));
			strncpy(reqWdrawIn.toCurrency,		"SLAYB",			sizeof(reqWdrawIn.toCurrency));
			strncpy(reqWdrawIn.fromAmount,		"10",				sizeof(reqWdrawIn.fromAmount));
			strncpy(reqWdrawIn.notifyUrl,		mctNotifyUrl,		sizeof(reqWdrawIn.notifyUrl));
			strncpy(reqWdrawIn.key,				mctKey,				sizeof(reqWdrawIn.key));
			strncpy(reqWdrawIn.initialVector,	mctInitialVector,	sizeof(reqWdrawIn.initialVector));

			iRet	= reqWithdraw(&reqWdrawIn, &reqWdrawOut);

			printf("API reqWithdraw ret=%d\n\tmerchantId=%s\n\tmerchantSiteId=%s\n\tcode=%s\n\tcustomerId=%s\n"
					"\toutAddress=%s\n"
					"\tfromCurrency=%s\n\ttoCurrency=%s\n\tfromAmount=%s\n\ttoAmount=%s\n\texchangeRate=%s\n"
					"\ttxId=%s\n"
					"\tstatus=%s\n\terrCd=%s\n\treason=%s\n",
					iRet, reqWdrawOut.merchantId, reqWdrawOut.merchantSiteId, reqWdrawOut.code, reqWdrawOut.customerId,
					reqWdrawOut.outAddress,
					reqWdrawOut.fromCurrency, reqWdrawOut.toCurrency, reqWdrawOut.fromAmount, reqWdrawOut.toAmount, reqWdrawOut.exchangeRate,
					reqWdrawOut.txId,
					reqWdrawOut.status, reqWdrawOut.errCd, reqWdrawOut.reason);
		}
	}

	return 0;
}

