module;


#include "BlockHandler.h"
export module Block.Dirt;





export class cBlockDirtHandler final :
	public cBlockHandler
{
	using Super = cBlockHandler;

public:

	using Super::Super;

private:

	virtual ColourID GetMapBaseColourID() const override
	{
		return 10;
	}
} ;




