/***************************************************
Authored by Graham Dianaty, 2019

Contains fundemental class.
QuickTalkLib, a very fast DECTalk API Wrapper.
***************************************************/

#include <quicktalk_platform.h>

#ifndef QUICKTALK_PUBLIC_H
#define QUICKTALK_PUBLIC_H

#ifdef QUICKTALK_ADVANCED || QUICKTALK_SIMPLE
#error You shouldn't call the public header directly! Either include quicktalk_advanced or quicktalk_simple headers!
#endif

class CQuickTalkLib
{

};

#endif // QUICKTALK_PUBLIC_H