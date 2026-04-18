module;
#include "ItemHandler.h"
export module Item.Wood;


/* Wood is the block with the bark texture on all sides. */

export class cItemWoodHandler final :
	public cItemHandler
{
	using Super = cItemHandler;
public:
	using Super::Super;
};
