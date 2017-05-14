#
# perf.sh for perf.sh in /home/axel/projects/progress/dante/
#
# Made by Axel Vandenabeele
# Login   <axel.vandenabeele@epitech.eu>
#
# Started on  Sun May 14 18:34:26 2017 Axel Vandenabeele
# Last update Sun May 14 21:05:36 2017 Axel Vandenabeele
#

if [ $# != 4 ]
	then
		echo "use : ./perf.sh <nbr_of_lines> <nbr_of_cols> <is_perfect> <file>"
		exit
fi

make > /dev/null
echo ""
./generator/generator $1 $2 $3 > $4

echo -n -e "\n\nall or one ? "
read methode

if [ $methode = all ]
	then
			echo -e "\n\033[31m[depth]\033[0m\n"
			time ./depth/solver ./$4
			echo -e "\n\033[31m[breadth]\033[0m\n"
			time ./breadth/solver ./$4
elif [ $methode = one ]
	then
		echo -n "which one ? "
		read solver
	if [ $solver = depth ]
		then
				echo -e "\n\033[31m[depth]\033[0m\n"
				time ./depth/solver ./$4
	elif [ $solver = breadth ]
		then
				echo -e "\033[31m[breadth]\033[0m\n"
				time ./breadth/solver ./$4
	else
		echo -e "\nno Match"
		exit
	fi
else
	echo -e "\nnot an option"
	exit
fi
