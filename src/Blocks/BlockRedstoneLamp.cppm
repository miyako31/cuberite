module;


#include "BlockHandler.h"
export module Block.RedstoneLamp;





export class cBlockRedstoneLampHandler final :
	public cBlockHandler
{
public:

	using cBlockHandler::cBlockHandler;

private:

	virtual ColourID GetMapBaseColourID() const override
	{
		return 15;
	}
};




