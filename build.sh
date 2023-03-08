echo "Enter the name of the file you want to build"
read file_name
if [ ! -f $file_name.c ]; then
    echo "ERROR: $file_name.c does not exist files in this directory"
    ls
    exit
fi
echo building $file_name.c
(gcc $file_name.c -o $file_name)

