-- Write your PostgreSQL query statement below
SELECT eu.unique_id, e.name 
FROM Employees E left join EmployeeUNI eu
on e.id = eu.id; 
