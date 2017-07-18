ldapsearch -x -LLL "(uid=z*)" -S cn | sed /^$/d | sed /dn/d | sort -d -r
