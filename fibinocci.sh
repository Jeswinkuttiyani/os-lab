echo " Enter the limit"
read lim
echo "0"
echo "1"
X=0
Y=1

for (( i=0;i<lim;i++))
do
z=$(($X+$Y))
echo "$z"
X=$Y
Y=$z
done
