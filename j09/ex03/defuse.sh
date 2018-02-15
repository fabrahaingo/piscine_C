touch -A '-000001' "bomb.txt" | ls -l -T | awk 'NR%2==0' | cut -c 47-55
