for x in `ls -d */` 
do 
  d=`echo $x | tr -d "/"`
  a=`./pars $d`
  mv $d $a

done
