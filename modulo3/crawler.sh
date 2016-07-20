#!/bin/bash

if [ "$#" -lt 1 ]; then
	echo "Crawler Profundidade 1 - Descobre todos os endereços de saída da URL informada"
	echo "Utilize desta forma: $0 <URL>"
	exit
fi
 
for link in $(wget -qO- $1  | tr '<' '\n' | grep -o -i 'href=".*"' | cut -d'"' -f2 | grep -v "#.*" | cut -d"/" -f3 | grep "\." | sort -u)
do
	host $link | grep "has address";
done
