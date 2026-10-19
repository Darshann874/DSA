# Write your MySQL query statement below
SElect MAX(salary )as secondHighestSalary
from Employee
where salary<(SELECT Max(salary)from Employee);