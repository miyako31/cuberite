module;


#include "BlockHandler.h"
#include "Registries/BlockItemConverter.h"
export module Block.HugeMushroom;





/** Handler for huge mushroom blocks. */
export class cBlockHugeMushroomHandler final :
	public cBlockHandler
{
	using Super = cBlockHandler;

public:

	using Super::Super;

private:

	virtual cItems ConvertToPickups(BlockState a_Block, const cItem * a_Tool) const override
	{
		if (ToolHasSilkTouch(a_Tool))
		{
			return cItem(BlockItemConverter::FromBlock(m_BlockType));
		}

		const auto DropNum = GetRandomProvider().RandInt<char>(2);
		switch (a_Block.Type())
		{
			case BlockType::BrownMushroomBlock: return cItem(Item::BrownMushroom, DropNum);
			case BlockType::RedMushroomBlock:   return cItem(Item::RedMushroom, DropNum);
			default: return {};
		}
	}





	virtual ColourID GetMapBaseColourID() const override
	{
		return (m_BlockType == BlockType::BrownMushroomBlock) ? 10 : 28;
	}
} ;




