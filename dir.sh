#!/bin/bash
amount=$1
count=0
while [ $count -le $amount ]
do
	if [ $count -lt 10 ]
	then
		mkdir "ex0$count"
	else
		mkdir "ex$count"
	fi
	((count++))
done