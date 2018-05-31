/* Simple Blockchain Demonstration */
/* ******************************* */
/* Requires sha256.h and sha256.cxx*/
/*(from http://www.zedwood.com/article/cpp-sha256-function) */

#include "blockchain.h"

int main() {
	
	const uint32_t MAXBLOCKS = 18000000;
	const uint32_t STARTINGBLOCK = 1;
	
    Blockchain AdamChain = Blockchain();

	for (uint32_t blocknum = STARTINGBLOCK; blocknum <= MAXBLOCKS; blocknum++)
	{
	
		std::cout << "Mining block " << blocknum << "..." << std::endl;
		AdamChain.AddBlock(Block(blocknum, "Block 1 Data"));
	}
	
	std::cout << "She's dead, Jim... "<< std::endl;
    return EXIT_SUCCESS;
}
