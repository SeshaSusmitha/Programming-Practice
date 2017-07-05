class Employee:
	'Common base class for all employees'
	empCount = 0

	def __init__(self, name, salary):
		self.name = name
		self.salary = salary
		Employee.empCount += 1

	def printEmpInfo(self):
		print "Employee Name : ", self.name
		print "Employee Salary : ", self.salary

	def __del__(self):
		class_name = self.__class__.__name__
		print class_name, "destroyed"

emp1 = Employee("Sesha Susmitha Yellamraju", 100000)
# emp1.printEmpInfo()
# print "Employee Count : ", Employee.empCount
emp2 = Employee("Naren Mudivarthy", 125000)
# emp2.printEmpInfo()
# print "Employee Count : ", Employee.empCount

print "Employee.__doc__ : ", Employee.__doc__
print "Employee.__name__", Employee.__name__
print "Employee.__module__", Employee.__module__
print "Employee.__bases__", Employee.__bases__
print "Employee.__dict__", Employee.__dict__

del emp1
del emp2
