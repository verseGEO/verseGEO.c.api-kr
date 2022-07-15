#include <VerseB.h>

char*		mctKey			= "9F2488BFAE5FB03B9B483FA1CF1EC94B3B4B2E52780A2B53ED67E581110CC980";
char*		mctInitialVector	= "64750805549512089392625993734535";

outPwd_IN	outPwdIn;
outPwd_OUT	outPwdOut;

strncpy(outPwdIn.merchantId,		"000000000001",					sizeof(outPwdIn.merchantId));
strncpy(outPwdIn.merchantSiteId,	"000001",					sizeof(outPwdIn.merchantSiteId));
strncpy(outPwdIn.customerId,		"000000000001",					sizeof(outPwdIn.customerId));
strncpy(outPwdIn.outAddress,		"0x8bDfa1f6393146f005F1C84050c553367c1e27d2",	sizeof(outPwdIn.outAddress));
strncpy(outPwdIn.outPassword,		"abcd1234",					sizeof(outPwdIn.outPassword));
strncpy(outPwdIn.key,			mctKey,						sizeof(outPwdIn.key));
strncpy(outPwdIn.initialVector,		mctInitialVector,				sizeof(outPwdIn.initialVector));

iRet	= outPwd(&outPwdIn, &outPwdOut);
