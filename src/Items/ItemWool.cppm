module;
#include "../Globals.h"
#include "ItemHandler.h"
#include "SimplePlaceableItemHandler.h"
#include "../DataComponents/DataComponents.h"
export module Item.Wool;




export class cItemWoolHandler final :
	public cSimplePlaceableItemHandler
{
public:
	constexpr cItemWoolHandler(Item a_ItemType)
		: cSimplePlaceableItemHandler(a_ItemType)
	{

	}
} ;




