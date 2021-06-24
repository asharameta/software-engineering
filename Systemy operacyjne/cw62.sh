#!/bin/bash

if (( $# < 2))
then
	echo "zly parametr" 
	exit 1 
fi 

k=$1
n=$2
Lista=`last -s -${n}days | awk '{print $1}' | head -n -2 | sort | awk '{tab[$1]++} END {for(i in tab) print i}'`
licz=0
tresc=''
temp=60

for login in $Lista
	do
		imie=`grep -a "^$login:" /etc/passwd | iconv -f ISO8859-2 -t UTF-8 | awk -F":" '{print $5}'`
		minuty=$(last -s -${n}days $login | awk '{print $10}' | tr -d ')' | cut -b 5-6 | awk -F":" '{suma=suma+$1} END{print suma}')
		H=$(last -s -${n}days $login | awk '{print $10}' | head -n -2 | tr -d ')' | cut -b 2-3 | awk -F":" '{suma=suma+$1} END{print suma}')
		HinM=$[ $H * $temp ]
		sumaHM=$[ $HinM + $minuty ]
		minuty=$(($minuty % 60))
		Hour=$(( $sumaHM/$temp ))
		tresc[$licz]="$sumaHM-$imie-($login)-$Hour-$minuty"
		(( licz ++ ))
	done

  	 printf '%s\n' "${tresc[@]}" | sort -g -r | head -${k} | awk -F"-" '{print $2, $3, " --- ",$4":"$5}'
