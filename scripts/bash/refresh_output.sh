o_dir="./_output/"
rm -rf $o_dir
mkdir $o_dir
case_num=4
for((i=0;i<case_num;i++))
do
mkdir $o_dir/case$i/
done
rm -rf "./_log"
mkdir "./_log"
