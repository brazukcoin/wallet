# If you want to build the GUI wallet instead, go [here:](https://github.com/brazukcoin/brazukcoinwallet)

![Brazukcoin Logo](https://github.com/brazukcoin/brazukcoin/blob/master/src/Images/brazukcoin-logo.png)

# Brazukcoin

## Anonymous • Secure • Accessible

##### In a world of mounting threats to personal liberty, Brazukcoin adds a new front of resistance through real financial freedom. Brazukcoin is based on time-tested blockchain technology while also adding extreme privacy features in its CryptoNote algorithm. The code is (and will always be) free and open-source.



###### Specifications

- *Logo:* [https://goo.gl/Yz5yru](https://goo.gl/Yz5yru)
- *Ticker:* BZK
- *Premine:* None
- *Mining algorithm:* CryptoNight (it enables truly anonymous and decentralized blockchain-based currency)
- *Max supply:* 10 million coins (+ tail emission ~1% yearly)
- *Block reward:* initial reward of ~38 BZK
- *Block target time:* ~4 minutes
- *Difficulty:* Retargets at every block
- *Transaction fee:* 0.0001 BZK
- *P2P Port:* 44044
- *RPC Port:* 44043

More information about Brazukcoin's specifications can be found on the [Crypto Resource Network:](http://www.cryptoresourcenetwork.com/brazukcoin.html)




###### Community

- **Discord:** [https://discord.gg/u5654Jj](https://discord.gg/u5654Jj)
- **Twitter:** [https://twitter.com/brazukcoin](https://twitter.com/brazukcoin)
- **Slack:** [https://join.slack.com/t/brazukcoin/shared_invite/enQtMjk2OTI4Nzg0ODA0LTIwYWYxMGQwZjIzNDhjYTQ0NjViYjFiMmNjMjYxNTE5NzcwYTI2NzYzOWNiNjU1ZDFiNjMxODk5MWQ1YmUyYzM](https://join.slack.com/t/brazukcoin/shared_invite/enQtMjk2OTI4Nzg0ODA0LTIwYWYxMGQwZjIzNDhjYTQ0NjViYjFiMmNjMjYxNTE5NzcwYTI2NzYzOWNiNjU1ZDFiNjMxODk5MWQ1YmUyYzM)
- **Reddit:** [https://www.reddit.com/r/Brazukcoin](https://www.reddit.com/r/Brazukcoin)
- **Telegram:** [https://t.me/joinchat/FWPKVhIKxwgl6cauM-3-eg](https://t.me/joinchat/FWPKVhIKxwgl6cauM-3-eg)




###### Website

**[https://www.brazukcoin.org](https://www.brazukcoin.org)**




###### Mining Pools

You can create your own pool by cloning from [Brazukcoin Pool Github:](https://github.com/brazukcoin/pool.brazukcoin.org)

Or use these quality pools for Brazukcoin:

- **[http://pool.brazukcoin.org](http://pool.brazukcoin.org)**

- **[https://bzk.dreampool.info](https://bzk.dreampool.info)**

- **[http://bzkpool.brazukcoin.com](http://bzkpool.brazukcoin.com)**

- **[http://brazukcoin.labbinarymining.com](http://brazukcoin.labbinarymining.com)**




###### Block Explorer

**[http://explorer.brazukcoin.org/](http://explorer.brazukcoin.org/)**




###### Wallets


**Easy Brazukcoin Wallet Generator:**

*Instructions*
- Visit [http://wallet.brazukcoin.org](http://wallet.brazukcoin.org) and a wallet will be instantly created for you
- Write down your seed information in case you lose your wallet!

**Windows GUI wallet:**
[https://github.com/brazukcoin/brazukcoinwallet/releases/](https://github.com/brazukcoin/brazukcoinwallet/releases/)

*Instructions*
- Unzip the file: `BrazukCoin.Gui.Wallet.zip`
- Run the executable: `Brazukcoin.exe`
- Write down your seed information in case you lose your wallet!

**Linux GUI wallet:**
[https://github.com/brazukcoin/brazukcoinwallet/releases/](https://github.com/brazukcoin/brazukcoinwallet/releases/)

*Instructions*
- Decompress the file: `tar -zxvf Brazukcoin.tar.gz`
- Run the executable: `./Brazukcoin`
- Write down your seed information in case you lose your wallet!



###### Pre-compiled binaries:

**For Mac:**
[https://github.com/brazukcoin/brazukcoin/releases/](https://github.com/brazukcoin/brazukcoin/releases/)

*Instructions*
- Run `brazucoind` to sync the blockchain, then keep the program running
- Run `simplewallet` to create/open your wallet
- Write down your seed information in case you lose your wallet!


**For Windows:**
[https://github.com/brazukcoin/brazukcoin/releases/](https://github.com/brazukcoin/brazukcoin/releases/)

Download the executables if you don't want to compile from source code Windows.

*Instructions*
- Run `brazukcoind.exe` to synchronize your computer with the P2P network blockchain, then keep the program running
- Run `simplewallet.exe` to create/open your wallet
- Write down your seed information in case you lose your wallet!

**For Linux:**
[https://github.com/brazukcoin/brazukcoin/releases/](https://github.com/brazukcoin/brazukcoin/releases/)

*Instructions (Tested on Ubuntu 16.0)*
- Extract the files: `tar -zxvf brazukcoin_linux_x64_bin.tar.gz`
- Run `./brazukcoind` to synchronize your computer with the P2P network blockchain, then keep the program running
- Open a new terminal and run `./simplewallet` to create/open your wallet
- Write down your seed information in case you lose your wallet!



###### You can also compile directly from the source code:


**For Linux:**

*Linux Instructions:*

- Build your environment
` ~$ sudo apt-get update `
` ~$ sudo apt-get install build-essential git cmake libboost-all-dev `

- Download Brazukcoin source code
` ~$ git clone ​https://github.com/brazukcoin/brazukcoin.git `

- Build the binaries
` ~$ cd brazukcoin `
` ~/brazukcoin$ make `

- Sync the blockchain
` ~/brazukcoin$ cd build/release/src/ `
` ~/brazukcoin/build/release/src$ ./brazukcoind --log-level=3 `

- Create your wallet (open it in a new terminal because you need the
brazukcoin daemon running)
` ~/brazukcoin/build/release/src$ ./simplewallet `

- Write down your seed information in case you lose your wallet!

- Start mining your coins! Type ` start_mining `. For more
commands, type ` help `.


**Windows Instructions:**

- Install Microsoft Visual Studio Community 2013: [https://www.visualstudio.com/en-us/news/releasenotes/vs2013-community-vs](https://www.visualstudio.com/en-us/news/releasenotes/vs2013-community-vs)
  - Click on ` Download Older Version ` then ` Visual Studio Community with Update 5 `
  - You'll have to create a free account with [Microsoft MSDN](https://msdn.microsoft.com) to
proceed with the download

- Install the latest [CMake:](​https://cmake.org/download)
  - During installation, choose ` Add cmake to your system path `

- Download and compile Boost 5.7.0 C++ Libraries: [https://sourceforge.net/projects/boost/files/boost/1.57.0/boost_1_57_0.zip/download](https://sourceforge.net/projects/boost/files/boost/1.57.0/boost_1_57_0.zip/
download)
  - Extract the zip archive
  - Compile Boost 5.7.0
  - Run Windows command prompt ` cmd `
  - ` cd ` to where you extracted boost__1_57_0
  - Run ` bootstrap.bat `
  - Run ` b2 --toolset=msvc variant=release link=static threading=multi runtime-link=static address-model=64 `

- Install Git distributed version control system: [https://git-scm.com/download/win](https://git-scm.com/download/win)

- Download brazukcoin source code to your computer
  - Run ` git shell ` or ` git bash `
  - Clone repository type ` git clone https://github.com/brazukcoin/brazukcoin.git `

- Finally, compile Brazukcoin!
  - ` cd brazukcoin `
  - ` mkdir build ` -- Create 'build' directory.
  - ` cd build ` -- Change to build Directory.
  - ` cmake -G "Visual Studio 12 Win64" -DBOOST_ROOT=c:\boost_1_57_0 -DBOOST_LIBRARY_DIR=c:\boost_1_57_0\stage\lib .. `
  - ` msbuild Brazukcoin.sln /p:Configuration=release `

Find your binaries in ..\brazukcoin\build\src\release\




Please consider donating to the dev to help with the continued maintenance and development of Brazukcoin!

###### BZK: ` br1P7xs8K9nPeUyG3qdQD5CMxCMNvBKkUZPzqrrbPBfU56kb1HyXo9jJU4N2fWSDrkY4a1SyDiuSEDW vJUkauT4Q1HfwqBDyH `

###### BTC: ` 13UWgYzr1yvEcA3V5YSuDCAcpPp4F1QbPN `


