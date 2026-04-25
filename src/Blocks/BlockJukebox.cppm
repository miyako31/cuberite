module;


#include "Mixins/Mixins.h"
export module Block.Jukebox;
import Block.Entity;




export class cBlockJukeboxHandler final :
	public cBlockEntityHandler
{
	using Super = cBlockEntityHandler;
public:

	using Super::Super;

private:

	virtual ColourID GetMapBaseColourID() const override
	{
		return 10;
	}
} ;
