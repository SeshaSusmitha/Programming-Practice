# class sample:

# 	def __int__(self, a, b):
# 		self.a = 4
# 		self.b = 8

# 	def print_val(self):
# 		print self.a
# 		print self.b

# s1 = sample(2, 2)
# s1.print_val()


class sample:

    def __init__(self, a, b):
        self.a = a
        self.b = b
   

    def print_val(self):
        print self.a
        print self.b

s1 = sample(4, 8)
s1.print_val()
