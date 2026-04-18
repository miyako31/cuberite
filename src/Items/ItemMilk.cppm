module;
#include "ItemHandler.h"
#include "Entities/Player.h"
export module Item.Milk;






export class cItemMilkHandler final:
	public cItemHandler
{
	using Super = cItemHandler;

public:

	using Super::Super;

	virtual bool IsDrinkable(short a_ItemDamage) const override
	{
		UNUSED(a_ItemDamage);
		return true;
	}

	virtual bool EatItem(cPlayer * a_Player, cItem * a_Item) const override
	{
		UNUSED(a_Item);
		a_Player->ClearEntityEffects();

		if (!a_Player->IsGameModeCreative())
		{
			a_Player->ReplaceOneEquippedItemTossRest(cItem(Item::Bucket));
		}
		return true;
	}
};
