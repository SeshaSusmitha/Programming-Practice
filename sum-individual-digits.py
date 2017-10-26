def digit_sum(n):
	if len(str(n)) == 1:
		return n
	else:
		return n%10 + digit_sum(n/10)

print digit_sum(4321)