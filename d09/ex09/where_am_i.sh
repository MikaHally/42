a=`ifconfig -a | grep "inet " | cut -d " " -f 2`
if [ "$a" = "" ]
then
	echo "I am lost!";
else
	echo "$a"
fi