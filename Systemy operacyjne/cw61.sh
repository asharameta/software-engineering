#!/bin/bash
if (( $# < 2 )) 
then 
	echo "zly parametr" 
	exit 1 
	fi 
	k=$1
	n=$2
	max=0 
	lista=`last -s -${n}days | awk '{print $1}'`
for login in $lista 
do
	ile=$(last -s -${n}days | awk -v kto=$login '$1 == kto {print $1}'| awk '{sum=sum+1} END{print sum}') #ile jest loginow
	if [[ -z "${tab[$ile]}" ]]
	then
tab[$ile]="${tab[$ile]}$login"
# echo ${tab[$ile]}
    if (( $ile > $max ))
    then max=$ile
	    fi
fi
done
 licz=0
for ((i=$max; i>0; i--)) 
do
	if (( ${#tab[$i]} > 0 ))
	then

		log=${tab[$i]}
		imie=`grep -a "^$log:" /etc/passwd |iconv -f ISO8859-2 -t UTF-8 | awk -F":" '{print $5}'`
	echo -e " $imie (${tab[$i]}) -- $i "
	((licz ++))
	if (( $licz == $k )) 
	then 
		exit 
		fi
	fi
	
done
