#include <cstdint>
#include <vector>
#include "block.h"

using namespace std;

class Blockchain {
public:
	Blockchain();
	
	void AddBlock(Block newBlock);
	
private:
	uint32_t _nDifficulty;
	vector<Block> _vChain;
	
	Block _GetLastBlock() const;
};
