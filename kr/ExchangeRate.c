#include <VerseB.h>

char*		mctKey			= "9F2488BFAE5FB03B9B483FA1CF1EC94B3B4B2E52780A2B53ED67E581110CC980";
char*		mctInitialVector	= "64750805549512089392625993734535";

exRate_IN	exRateIn;
exRate_OUT	exRateOut;

strncpy(exRateIn.merchantId,		"000000000001",		sizeof(exRateIn.merchantId));
strncpy(exRateIn.merchantSiteId,	"000001",		sizeof(exRateIn.merchantSiteId));
strncpy(exRateIn.customerId,		"000000000001",		sizeof(exRateIn.customerId));
strncpy(exRateIn.fromCurrency,		"GOLD",			sizeof(exRateIn.fromCurrency));
strncpy(exRateIn.toCurrency,		"SLAYB",		sizeof(exRateIn.toCurrency));
strncpy(exRateIn.fromAmount,		"100",			sizeof(exRateIn.fromAmount));
strncpy(exRateIn.key,			mctKey,			sizeof(exRateIn.key));
strncpy(exRateIn.initialVector,		mctInitialVector,	sizeof(exRateIn.initialVector));

int	iRet	= exRate(&exRateIn, &exRateOut);
