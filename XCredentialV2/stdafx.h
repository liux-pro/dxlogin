// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#include <unknwn.h>
#include <credentialprovider.h>
#include <initguid.h>

#include <stdio.h>
#include <stdlib.h>

#pragma comment(lib,"Advapi32.lib")
#pragma comment(lib,"Secur32.lib")
#pragma comment(lib,"shlwapi.lib")
#pragma comment(lib,"ole32.lib")
#pragma comment(lib,"Credui.lib")

extern HINSTANCE g_hinst;

// TODO: reference additional headers your program requires here
