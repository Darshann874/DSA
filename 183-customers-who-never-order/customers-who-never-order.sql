# Write your MySQL query statement below
select name as customers 
from Customers c
where id not in (select customerId from orders);