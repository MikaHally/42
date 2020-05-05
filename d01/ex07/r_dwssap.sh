cat /etc/passwd | grep -v  '#' | awk 'NR % 2==0' | cut -d : -f 1 | rev | sort -r | sed ''$FT_LINE1','$FT_LINE2'!d' | tr '\n' ',' | sed 's/, */, /g' | sed 's/.\{2\}$//' | sed 's/$/./' | tr -d '\n'
