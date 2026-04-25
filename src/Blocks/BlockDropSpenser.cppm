module;

// BlockDropSpenser.h

// Declares the cBlockDropSpenserHandler class representing the BlockHandler for Dropper and Dispenser blocks


#include "Mixins/Mixins.h"
export module Block.DropSpenser;
import Block.Entity;




export class cBlockDropSpenserHandler final :
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
