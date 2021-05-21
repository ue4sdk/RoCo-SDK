#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum KillstreakAnimGraphRuntime.EPoseMirrorPlane
enum class EPoseMirrorPlane : uint8_t
{
	EPoseMirrorPlane__XZ           = 0,
	EPoseMirrorPlane__XY           = 1,
	EPoseMirrorPlane__YZ           = 2,
	EPoseMirrorPlane__EPoseMirrorPlane_MAX = 3
};


// Enum KillstreakAnimGraphRuntime.ERecoilAllowMirror
enum class ERecoilAllowMirror : uint8_t
{
	ERecoilAllowMirror__Both       = 0,
	ERecoilAllowMirror__UnmirroredOnly = 1,
	ERecoilAllowMirror__MirroredOnly = 2,
	ERecoilAllowMirror__ERecoilAllowMirror_MAX = 3
};


// Enum KillstreakAnimGraphRuntime.ERecoilStart
enum class ERecoilStart : uint8_t
{
	ERS_SpecifyOffset              = 0,
	ERS_Random                     = 1,
	ERS_SpecifyOffsetRandom        = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
