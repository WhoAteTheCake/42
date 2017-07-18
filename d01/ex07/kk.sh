cat /etc/passwd | grep -v ^# | awk '!(NR % 2)' |
