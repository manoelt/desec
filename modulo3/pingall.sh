#!/bin/bash

for i in $(seq 1 255);
do 
	ping -c1 $1.$i | grep "64 bytes" | cut -d":" -f1 | cut -d" " -f4 ;
done
