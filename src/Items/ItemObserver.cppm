module;

#include "ItemHandler.h"
export module Item.Observer;
import Item.SimplePlaceableItemHandler;
import Block.Observer;



export class cItemObserverHandler final :
	public cSimplePlaceableItemHandler
{
	using Super = cSimplePlaceableItemHandler;

public:

	using Super::Super;

private:

	virtual bool CommitPlacement(cPlayer & a_Player, const cItem & a_HeldItem, const Vector3i a_PlacePosition, const eBlockFace a_ClickedBlockFace, const Vector3i a_CursorPosition) const override
	{
		return a_Player.PlaceBlock(a_PlacePosition, Block::Observer::Observer(ReverseBlockFace(DisplacementYawToFacing(a_PlacePosition, a_Player.GetEyePosition(), a_Player.GetYaw())), false));
	}
};
