#!/bin/bsh

now="http://www.ojd-suivivn.com/track?link=400&n=20180216&cible=http%3A%2F%2Fkiosque.cnewsmatin.fr%2FPdf.aspx%3Fedition%3DLYO%26date%3D"
now="$now$(date +'%Y%m%d')"

echo $now
qrencode -s 30 -o qrcode.png $now

eog -f qrcode.png