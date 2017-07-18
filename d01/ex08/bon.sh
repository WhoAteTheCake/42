ldapsearch -x "(cn=*bon*)" | sed -n -e '/^cn/p' | wc -l
