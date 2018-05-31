/* Simple Blockchain Demonstration */
/* ******************************* */
/* Requires sha256.h and sha256.cxx*/
/*(from http://www.zedwood.com/article/cpp-sha256-function) */

#include "blockchain.h"

int main() {
	
	const uint32_t MAXBLOCKS = 18000000;
	const uint32_t STARTINGBLOCK = 1;
	std::stringstream sBlockdata;
   	Blockchain AdamChain = Blockchain();

	for (uint32_t blocknum = STARTINGBLOCK; blocknum <= MAXBLOCKS; blocknum++)
	{
	
		std::cout << "Mining block " << blocknum << "..." << std::endl;
		sBlockdata << "Block " << blocknum << "data";
		AdamChain.AddBlock(Block(blocknum, sBlockdata.str()));
	}
	
	std::cout << "Please don't leave, there's more demons to toast! "<< std::endl;
    return EXIT_SUCCESS;
}
