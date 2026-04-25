module;


#include "ItemHandler.h"
#include "../Entities/Player.h"
export module Item.EnderChest;
import Item.SimplePlaceableItemHandler;
import Block.EnderChest;



export class cItemEnderChestHandler final  :
	public cSimplePlaceableItemHandler
{
	using Super = cSimplePlaceableItemHandler;

public:

	using Super::Super;

private:

	virtual bool CommitPlacement(cPlayer & a_Player, const cItem & a_HeldItem, const Vector3i a_PlacePosition, const eBlockFace a_ClickedBlockFace, const Vector3i a_CursorPosition) const override
	{
		return a_Player.PlaceBlock(a_PlacePosition, Block::EnderChest::EnderChest(RotationToBlockFace(a_Player.GetYaw()), a_Player.GetWorld()->GetBlock(a_PlacePosition).Type() == BlockType::Water));
	}
};
