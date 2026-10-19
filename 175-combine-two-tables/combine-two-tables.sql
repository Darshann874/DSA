# Write your MySQL query statement below
SELECT 
P.firstName ,
P.lastName ,
A.city,
A.state

from Person as P
 left JOIN  Address as A
on P.personId = A.personId;