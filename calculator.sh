cho=0
while(($cho==0))
do
echo "Enter the numbers"
read num1
read num2
echo -e "Enter the operation: 1)addition 2)subtraction 3)multiplication 4)division"
read ch
case $ch in
1) echo "sum=$(($num1+$num2))";;
2) echo "difference=$(($num1-$num2))";;
3) echo "product=$(($num1*$num2))";;
4) echo "quotient=$(($num1/$num2))";;
*) echo "invalid choice";;
esac
echo "if you want to continue press 0 else press 1"
read cho
done
