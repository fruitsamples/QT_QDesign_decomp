/***	Apple Macintosh Developer Technical Support****	Headers for routine demonstrating how to set up a DoubleBufferHeader sound header.****	by Mark Cookson, Apple Developer Technical Support****	File:	SetupDBHeader.h****	Copyright �1996 Apple Computer, Inc.**	All rights reserved.****	You may incorporate this sample code into your applications without**	restriction, though the sample code has been provided "AS IS" and the**	responsibility for its operation is 100% yours.  However, what you are**	not permitted to do is to redistribute the source as "Apple Sample**	Code" after having made changes. If you're going to re-distribute the**	source, we require that you make it clear in the source that the code**	was descended from Apple Sample Code, but that you've made changes.*/#ifndef __SETUPDBHEADER__#define __SETUPDBHEADER__#include <AIFF.h>#include <Sound.h>#include <SoundComponents.h>#ifndef __SOUNDSTRUCT__#include "SoundStruct.h"#endif#ifndef __DEFINES__#include "Defines.h"#endifOSErr	SetupDBHeader	(SoundInfoPtr theSoundInfo,						Fixed sampleRate,						short sampleSize,						short numChannels,						short compressionID,						long compressionType);#endif