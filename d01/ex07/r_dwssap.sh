cat /etc/passwd | grep -v ^# | awk '!(NR % 2)' | cut -d : -f 1 | rev | sort -r | paste -s -d "," - | sed 's/, */, /g' | sed 's/[^.]$/&./'
