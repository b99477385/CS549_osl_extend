#!/bin/bash
make
make install
export PATH=/nfs/stak/linyuya/CS549_osl/research/executables/bin:$PATH
export PGDATA=DemoDir
/nfs/stak/users/linyuya/CS549_osl/executables/bin/pg_ctl -D /nfs/stak/users/linyuya/CS549_osl/Join-Game/DemoDir -o "-p 1208" -l logfile start