n=int(input())
s="I hate"

for i in range (n-1):
    s+=" that I "+["love","hate"][i&1]

print(s+' it')
