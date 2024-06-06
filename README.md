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

export PATH=/nfs/stak/users/xxxxx/xxxx/executables/bin:$PATH
(/* xxxxx – is your ONID*/ , xxxx is your folder name)
/nfs/stak/users/xxxxx/xxxx/executables/bin/pg_ctl -D /nfs/stak/users/xxxxx/xxxx/Join-Game/DemoDir -o "-p 1208" -l logfile start

### 5 run bash

bash startserver.sh

### 6 Initialize db cluster

initdb

### 7 Inside the configure file this is the basic change. Set the port probably select something between 1000 to 2000

port = xxxx (/* xxxx is new port number to be used*/)

### 8 Create database 

psql -p xxxx template1
(/* xxxx – is your port number*/)

$ psql >> create database xxxxx;	

/*xxxxx is your ONID or something which you want to name your database */

$ psql >> create database tpch;

$ \q


### 9 Modify script_full_load_bharghav.py according to the database setting (line 12) and the path to the 1gigi dataset( line 23 ) then run

python script_full_load_bharghav.py


### 10 Run test script

bash bash_1gig_osl.sh

### 11 Stop the Postgre

/nfs/stak/users/xxxxx/xxxx/executables/bin/pg_ctl -D /nfs/stak/users/xxxxx/xxxx/Join-Game/DemoDir -o "-p yyyy" -l logfile stop


(/* xxxxx – is your ONID*/ , xxxx is your folder name, yyyy is the port)







