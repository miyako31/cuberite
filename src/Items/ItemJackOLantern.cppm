module;

#include "ItemHandler.h"
export module Item.JackOLantern;
import Item.SimplePlaceableItemHandler;
import Block.Pumpkin;



export class cItemJackOLanternHandler final  :
	public cSimplePlaceableItemHandler
{
	using Super = cSimplePlaceableItemHandler;

public:

	using Super::Super;

private:

	virtual bool CommitPlacement(cPlayer & a_Player, const cItem & a_HeldItem, const Vector3i a_PlacePosition, const eBlockFace a_ClickedBlockFace, const Vector3i a_CursorPosition) const override
	{
		// Re-use the pumpkin converter for lanterns:
		return a_Player.PlaceBlock(a_PlacePosition, Block::JackOLantern::JackOLantern(RotationToBlockFace(a_Player.GetYaw())));
	}
};
