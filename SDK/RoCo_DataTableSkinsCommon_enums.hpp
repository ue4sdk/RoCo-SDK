#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DataTableSkinsCommon.EMaterialSkinType
enum class EMaterialSkinType : uint8_t
{
	EMaterialSkinType__Material    = 0,
	EMaterialSkinType__InstanceDataMine = 1,
	EMaterialSkinType__ForcedInstanceDataMine = 2,
	EMaterialSkinType__FloatParam  = 3,
	EMaterialSkinType__VectorParam = 4,
	EMaterialSkinType__TextureParam = 5,
	EMaterialSkinType__EMaterialSkinType_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
