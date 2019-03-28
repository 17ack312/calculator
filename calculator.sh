

echo "\n=====================\n"
echo "====  written by ===="
echo "=== rajdeep basu ===="
echo "\n=====================\n"
cd
cd progs
chmod +x *
apt install -y clang

if [ -e calculator ]
then
rm calculator
fi

gcc calc.c -o calculator
chmod +x *
./calculator


