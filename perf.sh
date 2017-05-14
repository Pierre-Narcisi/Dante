#
# perf.sh for perf.sh in /home/axel/projects/progress/dante/
#
# Made by Axel Vandenabeele
# Login   <axel.vandenabeele@epitech.eu>
#
# Started on  Sun May 14 18:34:26 2017 Axel Vandenabeele
# Last update Sun May 14 19:35:17 2017 Axel Vandenabeele
#

echo -n "all or one ? "
read methode

if [ $methode = all ]
	then
		cd ./depth
			echo "[depth]"
			time ./solver ../generator/maze.txt > log
			echo ""
		cd ../breadth
			echo "[breadth]"
			time ./solver ../generator/maze.txt > log
elif [ $methode = one ]
	then
		echo -n "which one ? "
		read solver
	if [ $solver = depth ]
		then
			cd ./depth
				echo "[depth]"
				time ./solver ../generator/maze.txt > log
	elif [ $solver = breadth ]
		then
			cd ./breadth
				echo "[breadth]"
				time ./solver ../generator/maze.txt > log
	else
		echo "no Match"
	fi
else
	echo "not an option"
fi
