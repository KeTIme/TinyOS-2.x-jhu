#! /usr/bin/env bash
# Here we setup the environment
# variables needed by the tinyos 
# make system

#echo "Setting up for TinyOS 2.x"

export TOSROOT=
export TOSDIR=
export MAKERULES=
export PYTHONPATH

TOSROOT="/Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/tinyos-2.x"
TOSDIR="$TOSROOT/tos"
CLASSPATH=$CLASSPATH:$TOSROOT/support/sdk/java/tinyos.jar
MAKERULES="$TOSROOT/support/make/Makerules"
PYTHONPATH="/Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/tinyos-2.x/support/sdk/python"


export TOSROOT
export TOSDIR
export CLASSPATH
export MAKERULES
export PYTHONPATH

export MSPGCCROOT=/Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/msp430
export AVRGCCROOT=/Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/avr
export NESCROOT=/Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/nesc
export DEPUTYROOT=/Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/deputy
export PATH="$TOSROOT-tools/bin:$NESCROOT/bin:$MSPGCCROOT/bin:$AVRGCCROOT/bin:$DEPUTYROOT/bin:$PATH"

export JAVAPATH=$JAVAPATH:/Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/tinyos-2.x/support/sdk/java/
export PATH=$PATH:/Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/tinyos-2.x/support/sdk/java/

source /Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/upma.sh

echo "Setting up for TinyOS 2.x finished successfully"

#source /Users/KevinXu/Desktop/summer_2016/TinyOS-2.x-jhu/opt/tinyos-2.x/tinyos.sh