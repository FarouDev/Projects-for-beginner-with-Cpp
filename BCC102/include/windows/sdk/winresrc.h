/*++

Copyright (c) 1990-1999  Microsoft Corporation

Module Name:

    winresrc.h

Abstract:

    This module defines the 32-Bit Windows resource codes.

Revision History:

--*/

#ifndef _WINRESRC_
#pragma option push -b -a8 -pc -A- -w-pun /*P_O_Push*/
#define _WINRESRC_

#ifndef WINVER
#define WINVER 0x0500
#endif

#ifndef _WIN32_IE
#define _WIN32_IE 0x0501
#endif

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0410
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif

#include <winuser.rh>
#include <commctrl.rh>
#include <dde.rh>
#include <winnt.rh>
#include <dlgs.h>
#include <winver.h>

#pragma option pop /*P_O_Pop*/
#endif /* _WINRESRC_ */
