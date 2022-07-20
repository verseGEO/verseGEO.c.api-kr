#include <VerseB.h>

char*		mctKey			= "9F2488BFAE5FB03B9B483FA1CF1EC94B3B4B2E52780A2B53ED67E581110CC980";
char*		mctInitialVector	= "64750805549512089392625993734535";
char*		mctNotifyUrl		= "http://10.30.1.51:8180/p2e/AsyncResult.jsp";

reqWdraw_IN	reqWdrawIn;
reqWdraw_OUT	reqWdrawOut;

strncpy(reqWdrawIn.merchantId,		"000000000001",					sizeof(reqWdrawIn.merchantId));
strncpy(reqWdrawIn.merchantSiteId,	"000001",					sizeof(reqWdrawIn.merchantSiteId));
strncpy(reqWdrawIn.customerId,		"000000000001",					sizeof(reqWdrawIn.customerId));
strncpy(reqWdrawIn.outAddress,		"0x8bDfa1f6393146f005F1C84050c553367c1e27d2",	sizeof(reqWdrawIn.outAddress));
strncpy(reqWdrawIn.outPassword,		"abcd1234",					sizeof(reqWdrawIn.outPassword));
strncpy(reqWdrawIn.fromCurrency,	"SLAYB",					sizeof(reqWdrawIn.fromCurrency));
strncpy(reqWdrawIn.toCurrency,		"SLAYB",					sizeof(reqWdrawIn.toCurrency));
strncpy(reqWdrawIn.fromAmount,		"10",						sizeof(reqWdrawIn.fromAmount));
strncpy(reqWdrawIn.notifyUrl,		mctNotifyUrl,					sizeof(reqWdrawIn.notifyUrl));
strncpy(reqWdrawIn.key,			mctKey,						sizeof(reqWdrawIn.key));
strncpy(reqWdrawIn.initialVector,	mctInitialVector,				sizeof(reqWdrawIn.initialVector));

iRet	= reqWithdraw(&reqWdrawIn, &reqWdrawOut);
