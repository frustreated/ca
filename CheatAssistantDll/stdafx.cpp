#include "stdafx.h"
HWND g_hWnd = NULL;
bool g_switch = false;
HANDLE g_msdkHandle = NULL;

M_OPEN_VIDPID M_Open_VidPid;
M_RELEASEALLKEY M_ReleaseAllKey;
M_KEYSTATE2 M_KeyState2;
M_KEYDOWN2 M_KeyDown2;
M_KEYUP2 M_KeyUp2;
M_LEFTCLICK M_LeftClick;
M_MOVETO2 M_MoveTo2;
M_MOVETO3 M_MoveTo3;
M_GETCURMOUSEPOS2 M_GetCurrMousePos2;
M_CLOSE M_Close;
M_RESOLUTIONUSED M_ResolutionUsed;