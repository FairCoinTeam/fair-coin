# This tree is outdated starting from 18th of July 2017 and must not be used afterwards 
This is the tree of FairCoin1 and is only valid until the 18th of July 2017  

The sources of the new FairCoin2 version can be found here:  
https://github.com/faircoin/faircoin

The text below is left here for archive purpose only.

  
  
  
  
  
  
# FairCoin: promoting equality and a fair economy #

* **For instructions to build the current version, please see the [build instructions](#user-content-build-instructions) below.**
* **For further information about FairCoin please consult out web site https://fair-coin.org/**
* **For more information about the real world use of FairCoin please visit https://fair.coop/**

## Coin parameters: ##

Coin parameters:  
Grøstl PoW/PoS hybrid  
50,000,000 premined coins  
Flat 6%/year minting reward, halving every year until baseline of 1.5%  
21/90 days min/max weight  
5 minutes PoW block target for each algo  
10 minutes block target for PoS  
  
Dark Gravity Well version 3 difficulty re-targeting
  
Flat 0.001 coin mining reward  
Mining is only meant to support the network not to distribute coins  
  
Default P2P Port: 46392  
Default RPC Port: 46393  

## Build instructions: ##

```
git clone https://github.com/FairCoinTeam/fair-coin.git  
cd fair-coin  
git checkout v1.5.2  
./autogen.sh  
./configure --with-incompatible-bdb --disable-tests  
make  
strip src/qt/FairCoin-qt  
strip src/FairCoind  
```
This will build FairCoind and FairCoin-qt client.

## Build on Ubuntu 14.04: ##

To build on Ubuntu 14.04 you need to prefix the configure command with the LIBS environment variable set to '-lrt'

```
LIBS=-lrt ./configure --with-incompatible-bdb --disable-tests  
```
