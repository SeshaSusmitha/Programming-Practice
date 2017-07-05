class Employee:
	empCount = 0

	def __init__(self, name, salary):
		self.name = name
		self.salary = salary
		Employee.empCount += 1

	def printEmpInfo(self):
		print "Employee Name : ", self.name
		print "Employee Salary : ", self.salary

emp1 = Employee("Sesha Susmitha Yellamraju", 100000)
emp1.printEmpInfo()
print "Employee Count : ", Employee.empCount
emp2 = Employee("Naren Mudivarthy", 125000)
emp2.printEmpInfo()
print "Employee Count : ", Employee.empCount
