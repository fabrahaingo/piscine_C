if [[ $(ifconfig | grep "inet " | cut -d " " -f 2) ]]; then
ifconfig | grep "inet " | cut -d " " -f 2
else
	echo "Je suis perdu !"
fi
