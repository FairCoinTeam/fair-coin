FairCoin: promoting equality and a fair economy
===============================================

Coin parameters:  
Grøstl PoW/PoS hybrid  
50,000,000 premined coins  
Flat 6%/year minting reward, halving every year until baseline of 1.5%  
21/90 days min/max weight  
5 minutes block target for PoW  
10 minutes block target for PoS  
3.33 minutes in total  
  
Dark Gravity Well version 3 difficulty re-targeting
  
Flat 0.000001 coin mining reward
Mining is only ment to support the network no to distribute coins

Default P2P Port: 46392  
Default RPC Port: 46393  

---

Sample FairCoin.conf file:

```
rpcuser=changeme  
rpcpassword=changeme2  

addnode=194.208.12.12  
```

---
Build instructions:

```
./autogen.sh  
./configure --prefix=/usr --disable-maintainer-mode --with-incompatible-bdb --disable-tests  
make  
```
This will build FairCoind and FairCoin-qt client.
