#include <VerseB.h>

char*		mctKey			= "9F2488BFAE5FB03B9B483FA1CF1EC94B3B4B2E52780A2B53ED67E581110CC980";
char*		mctInitialVector	= "64750805549512089392625993734535";

outAddr_IN	outAddrIn;
outAddr_OUT	outAddrOut;

strncpy(outAddrIn.merchantId,		"000000000001",					sizeof(outAddrIn.merchantId));
strncpy(outAddrIn.merchantSiteId,	"000001",					sizeof(outAddrIn.merchantSiteId));
strncpy(outAddrIn.customerId,		"000000000001",					sizeof(outAddrIn.customerId));
strncpy(outAddrIn.outAddress,		"0x8bDfa1f6393146f005F1C84050c553367c1e27d2",	sizeof(outAddrIn.outAddress));
strncpy(outAddrIn.key,			mctKey,						sizeof(outAddrIn.key));
strncpy(outAddrIn.initialVector,	mctInitialVector, 				sizeof(outAddrIn.initialVector));

iRet	= outAddr(&outAddrIn, &outAddrOut);
