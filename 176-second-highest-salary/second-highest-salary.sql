# Write your MySQL query statement below
-- SElect MAX(salary )as secondHighestSalary
-- from Employee
-- where salary<(SELECT Max(salary)from Employee);

SELECT (SELECT DISTINCT salary 
from Employee
order BY salary DESC
LIMIT 1 OFFSET 1 )
as secondHighestSalary;