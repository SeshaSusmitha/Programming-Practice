class Parent:
	parentAttr = 100
	def __init__(self):
		print "Calling parent class constructor"

	def myMethod(self):
		print "Calling parent class method"
	
	def setAttr(self, attr):
		Parent.parentAttr = attr

	def getAttr(self):
		print "Parent Attr : ", Parent.parentAttr

class Child(Parent):
	def __init__(self):
		print "Calling Child class constructor"

	def myMethod(self):
		print "Calling child class method"

c = Child()
c.myMethod()

p = Parent()
p.myMethod()

c.setAttr(64)
c.getAttr()
