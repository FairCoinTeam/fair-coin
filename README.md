FairCoin: promoting equality and a fair economy
===============================================

Coin parameters:  
Grøstl, scrypt and sha256 PoW/PoS hybrid  
50,000,000 premined coins  
Flat 6%/year minting reward, halving every year until baseline of 1.5%  
21/90 days min/max weight  
5 minutes block target for PoW  
10 minutes block target for PoS   
  
Dark Gravity Well version 3 difficulty re-targeting
  
Flat 0.001 coin mining reward
Mining is only ment to support the network not to distribute coins

Default P2P Port: 46392  
Default RPC Port: 46393  

---

Sample FairCoin.conf file:

```
rpcuser=changeme  
rpcpassword=changeme2  

dnsseed=1
irc=0
```

---
Build instructions:

```
git clone https://github.com/FairCoinTeam/fair-coin.git  
cd fair-coin  
./autogen.sh  
./configure --prefix=/usr --disable-maintainer-mode --with-incompatible-bdb --disable-tests  
make  
strip src/qt/FairCoin-qt  
strip src/FairCoind  
```
This will build FairCoind and FairCoin-qt client.
