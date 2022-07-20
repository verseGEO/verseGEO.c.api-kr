#include <VerseB.h>

char*		mctKey			= "9F2488BFAE5FB03B9B483FA1CF1EC94B3B4B2E52780A2B53ED67E581110CC980";
char*		mctInitialVector	= "64750805549512089392625993734535";
char*		mctNotifyUrl		= "http://10.30.1.51:8180/p2e/AsyncResult.jsp";

exReq_IN	exReqIn;
exReq_OUT	exReqOut;

strncpy(exReqIn.merchantId,		"000000000001",		sizeof(exReqIn.merchantId));
strncpy(exReqIn.merchantSiteId,		"000001",		sizeof(exReqIn.merchantSiteId));
strncpy(exReqIn.customerId,		"000000000001",		sizeof(exReqIn.customerId));
strncpy(exReqIn.fromCurrency,		"GOLD",			sizeof(exReqIn.fromCurrency));
strncpy(exReqIn.toCurrency,		"SLAYB",		sizeof(exReqIn.toCurrency));
strncpy(exReqIn.fromAmount,		"100",			sizeof(exReqIn.fromAmount));
strncpy(exReqIn.exchangeRate,		"10%",			sizeof(exReqIn.exchangeRate));
strncpy(exReqIn.notifyUrl,		mctNotifyUrl,		sizeof(exReqIn.notifyUrl));
strncpy(exReqIn.key,			mctKey,			sizeof(exReqIn.key));
strncpy(exReqIn.initialVector,		mctInitialVector,	sizeof(exReqIn.initialVector));

iRet	= exReq(&exReqIn, &exReqOut);
