# CS549_osl_extend

## Construct Postgre on Flip Server

### 1. Create a new folder and clone the repostary into Filp server
git clone -b extendosl https://github.com/b99477385/CS549_osl_extend


### 2.Inside the empty folder create a new directory can be of any name. I named it “executables” and get into the Join-Game Folder
mkdir executables
cd Join-Game


### 3 run the following command 
./configure --prefix=/nfs/stak/users/xxxxx/research/executables --enable-depend --enable-assert --enable-debug

(/* xxxxx – is your ONID*/) and please note that the above two lines together are one command.



### 4 open the startserver.sh in Join-Game folder and modify the following command according to your path ( use pwd can show the path in linux)

export PATH=/nfs/stak/users/xxxxx/research/executables/bin:$PATH
(/* xxxxx – is your ONID*/)

### 5 run bash
bash startserver.sh

### 6 Initialize db cluster
initdb

### 7 Inside the configure file this is the basic change. Set the port probably select something between 1000 to 2000

port = xxxx (/* xxxx is new port number to be used*/)







