#! /bin/bash

# cd into the directory containing this build script
cd "$( cd "$(dirname "${BASH_SOURCE[0]}" )" && pwd )"
BASE=$(pwd)

PROTOBUF=/home/basil/protobuf

PROTOC=${PROTOBUF}/src/protoc

# Do a generation for $1=protoFile, $2=langTarget, $3=targetDir
function doGen() {
    # echo "doGen  1=$1, 2=$2, 3=$3"
    SRC=protocol/${1}.proto
    if [[ -e "$SRC" ]] ; then
        mkdir -p "$3"
        ${PROTOC} --${2}_out=$3 --proto_path=protocol/ "$SRC"
    else
        echo "No source file for $SRC"
    fi
}

# Base structs and tables
doGen BasilTypes js             gen-BasilTypes-js
doGen BasilTypes cpp            gen-BasilTypes-cpp
doGen BasilTypes csharp         gen-BasilTypes-cs
doGen BasilTypes java           gen-BasilTypes-java

# Basil Server -- for talking to the Basil server
doGen BasilServer js            gen-BasilServer-js
doGen BasilServer cpp           gen-BasilServer-cpp
doGen BasilServer csharp        gen-BasilServer-cs
doGen BasilServer java          gen-BasilServer-java

# Pesto Server
doGen PestoServer js            gen-PestoServer-js

# Pesto Client
doGen PestoClient js            gen-PestoClient-js
doGen PestoClient cpp           gen-PestoClient-cpp
doGen PestoClient csharp        gen-PestoClient-cs
doGen PestoClient java          gen-PestoClient-java
doGen PestoClient python        gen-PestoClient-py
# doGen PestoClient go            gen-PestoClient

