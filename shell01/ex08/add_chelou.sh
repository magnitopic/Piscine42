#!/bin/sh
# FT_NBR1 no funciona bien, \ lo traduce como 10
FT_NBR1=$(echo "\\\'?\"\\\"\'\\" | tr "\'\\\\\"?!" "01234")
FT_NBR2=$(echo "rcrdmddd" | tr "mrdoc" "01234")
echo $(($FT_NBR1+$FT_NBR2)) | tr "012345678910111213" "gtaio luSnemf"