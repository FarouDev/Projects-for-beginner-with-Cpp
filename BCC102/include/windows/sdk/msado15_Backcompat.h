#pragma option push -b -a8 -pc -A- -w-pun /*P_O_Push*/
/********************************************************
*                                                       *
*   Copyright (C) Microsoft. All rights reserved.       *
*                                                       *
********************************************************/
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


//-----------------------------------------------------------------------------
// File:		msado15_Backcompat.h
//
//
// Contents:	Proxy for adoint_Backcompat.h
//
// Comments:
//
//-----------------------------------------------------------------------------

#include "adoint_Backcompat.h"

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma option pop /*P_O_Pop*/
