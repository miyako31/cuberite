module;


#include "BlockHandler.h"
export module Block.Tripwire;





export class cBlockTripwireHandler final :
	public cBlockHandler
{
	using Super = cBlockHandler;

public:

	using Super::Super;

private:

	virtual cItems ConvertToPickups(BlockState a_Block, const cItem * a_Tool) const override
	{
		return cItem(Item::String);
	}





	virtual ColourID GetMapBaseColourID() const override
	{
		return 0;
	}
};




