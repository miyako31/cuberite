module;


#include "ItemHandler.h"
export module Item.Repeater;
import Item.SimplePlaceableItemHandler;
import Block.RedstoneRepeater;





export class cItemRepeaterHandler final :
	public cSimplePlaceableItemHandler
{
	using Super = cSimplePlaceableItemHandler;

public:

	using Super::Super;





	virtual bool CommitPlacement(cPlayer & a_Player, const cItem & a_HeldItem, const Vector3i a_PlacePosition, const eBlockFace a_ClickedBlockFace, const Vector3i a_CursorPosition) const override
	{
		return a_Player.PlaceBlock(a_PlacePosition, Block::Repeater::Repeater(0, RotationToBlockFace(a_Player.GetYaw()), false, false));
	}
} ;




