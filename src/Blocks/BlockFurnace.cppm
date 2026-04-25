module;


#include "Mixins/Mixins.h"
export module Block.Furnace;
import Block.Entity;


export class cBlockFurnaceHandler final :
	public cBlockEntityHandler
{
	using Super = cBlockEntityHandler;

public:

	using Super::Super;

private:

	virtual ColourID GetMapBaseColourID() const override
	{
		return 11;
	}
} ;




