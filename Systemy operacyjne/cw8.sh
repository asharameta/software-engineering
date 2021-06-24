#!/bin/bash

if (( $# < 2 || $# > 3)) 
then 
	echo "zly parametr" 
	exit 1 
	fi

if (( $# == 2))
then

	p=$1
	np=$2
	echo "ctrl+D koniec pobierania"
	echo "Podaj tekst do sortowania"
	while read tekst
	do
		n=$((n+1    ))
	if [[ $((n % 2)) -eq 0 ]]
	then
		echo "$tekst" | awk '{print toupper ($0)}' >> ~/cw8/$p
	elif  [[ $((n % 2)) -eq 1 ]]
	then
		echo "$tekst" | rev >> ~/cw8/$np
	fi 
	done
fi


if (( $# == 3))
then
	czytnik=$1
p=$2
np=$3

function foo1()
{
exec 3< ~/cw8/$czytnik
exec 4> ~/cw8/$p

awk 'NR%2==0' 0<&3 | awk '{print toupper ($0)}' 1>&4

exec 3<&-
exec 4>&-
}

function foo2()
{
exec 3< ~/cw8/$czytnik
exec 4> ~/cw8/$np

awk 'NR%2!=0' 0<&3 | rev | awk '{print $0}' 1>&4

exec 3<&-
exec 4>&-

}

foo1
foo2
fi
