module;

#include "BlockHandler.h"
#include "Mixins/Mixins.h"
export module Block.Pumpkin;



export class cBlockPumpkinHandler final :
	public cBlockHandler
{
	using Super = cBlockHandler;

public:

	using Super::Super;

private:

	virtual ColourID GetMapBaseColourID() const override
	{
		return 15;
	}
} ;




