echo "Enter two numbers"
read num1
read num2
if ((num1 == num2 ))
then echo "Both are equal"
elif (( num1 < num2 ))
 then echo "$num2 is greatest"
else 
echo "$num1 is greatest"
fi
