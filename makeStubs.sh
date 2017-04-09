#! /bin/bash

# cd into the directory containing this build script
cd "$( cd "$(dirname "${BASH_SOURCE[0]}" )" && pwd )"
BASE=$(pwd)

FLATBUFFER=/home/basil/flatbuffers

FLATC=${FLATBUFFER}/flatc

# Do a generation for $1=fbsFile, $2=langSpec, $3=targetDir
function doGen() {
    # echo "doGen  1=$1, 2=$2, 3=$3"
    SRC=protocol/${1}.fbs
    if [[ -e "$SRC" ]] ; then
        mkdir -p "$3"
        ${FLATC} -I protocol --$2 -o "$3" "$SRC"
    else
        echo "No source file for $SRC"
    fi
}

# Base structs and tables
doGen BasilTypes js             gen-BasilTypes-js
doGen BasilTypes cpp            gen-BasilTypes-cpp
doGen BasilTypes csharp         gen-BasilTypes-cs
doGen BasilTypes java           gen-BasilTypes-java
doGen BTransportHdr js          gen-BTransportHdr-js
doGen BTransportHdr cpp         gen-BTransportHdr-cpp
doGen BTransportHdr csharp      gen-BTransportHdr-cs
doGen BTransportHdr java        gen-BTransportHdr-java

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

