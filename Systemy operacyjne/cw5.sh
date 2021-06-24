1)#!/bin/bash
if (( $# < 1 ))
    then
        echo "Brak parametrów! Koniec działania."
        exit 1
fi
ls -lA $@ | awk '{sum=sum+$5} END {print sum}'

2)#!/bin/bash

if (( $# < 3 ))  #sprawdzamy czy liczba parametrów jest mniejsza niż 3.
    then
        echo "Brak parametrów! Koniec działania."
        exit 1
fi
K=$1
 while [ -n "$2" ]
do
      Kto=$2
      CzyIST=`cat /etc/passwd | grep "^$Kto:" | wc -l`
      if [ $CzyIST -eq 0 ]
      then
              echo "Nie ma takiego uzytkownika"
             exit 1
      else
      Dane=`grep "^$Kto:" /etc/passwd | awk -F":" '{print $5}'`
      echo "$Kto -- $Dane"
      last -$K | grep "^$Kto " | awk '{print $4,$5,$6,$7,"-",$9}'
      fi
shift	
done