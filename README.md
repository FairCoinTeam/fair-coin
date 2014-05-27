FairCoin: promoting equality and a fair economy
===============================================

Coin parameters:  
Scrypt PoW/PoS hybrid  
50,000,000 premined coins  
Flat 6%/year minting reward, halving every year until baseline of 1.5%  
21/90 days min/max weight  
10 minutes block target  
30 minutes difficulty retarget  
Flat 0.001 coin mining reward to eternity  

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
