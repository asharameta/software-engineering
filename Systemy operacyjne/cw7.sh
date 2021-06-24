#!/bin/bash

function foo1(){
echo "Podaj wartosc K"
read k
echo "Podaj wartosc N"
read n
if (( k < 2 || n < 2 )) 
then 
	echo "zly parametr" 
	exit 1 
	fi 
	max=0 
	lista=`last -s -${n}days | awk '{print $1}'`  #zapis loginow 
for login in $lista 
do
	ile=$(last -s -${n}days | awk -v kto=$login '$1 == kto {print $1}'| awk '{sum=sum+1} END{print sum}') #ile jest loginow
	if [[ -z "${tab[$ile]}" ]]
	then
tab[$ile]="${tab[$ile]}$login"  #zapis logina
# echo ${tab[$ile]}
    if (( $ile > $max ))
    then max=$ile
	    fi
fi
done
#echo "tutaj"
 licz=0
for ((i=$max; i>0; i--)) 
do
	if (( ${#tab[$i]} > 0 ))
	then

		log=${tab[$i]}
	#	echo twoj login $log
		imie=`grep "^$log:" /etc/passwd | awk -F":" '{print $5}'`
	#	echo twoj imie  $imie
#	wk=`grep "^$log:" /etc/passwd | awk -F ":" '{print $5}'`
	echo -e " $imie (${tab[$i]}) -- $i "
	((licz ++))
	if (( $licz == $k )) 
	then 
		exit 
		fi
	fi
	
done

}

function foo2(){

echo Podaj date mm/dd/yy
read day
today=`date -d "today" +%s`
futureD=`date -d "$day" +%s`
roznica=$[$[$futureD-$today]/86400]

echo $futureD
echo $today
echo $roznica dni do $day


}

foo2
foo1
