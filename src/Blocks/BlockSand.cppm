module;


#include "BlockHandler.h"
export module Block.Sand;





export class cBlockSandHandler final :
	public cBlockHandler
{
public:

	using cBlockHandler::cBlockHandler;

private:

	virtual ColourID GetMapBaseColourID() const override
	{
		return 2;
	}
};
