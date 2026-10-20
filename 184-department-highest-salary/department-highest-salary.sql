# Write your MySQL query statement below
Select d.name as Department,
e.name as Employee ,e.salary as Salary
from Department d
left join Employee e
on d.id= e.departmentId

Where (e.departmentId,e.salary)in
(select departmentId,max(salary)from Employee
group by departmentId);;