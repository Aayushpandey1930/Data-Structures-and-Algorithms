-- Write your PostgreSQL query statement below
Select p.product_name, s.year, s.price
from Sales s inner join Product p
ON s.product_id = p.product_id;