-- Write your PostgreSQL query statement below
SELECT v.customer_id, COUNT(*) count_no_trans
From Visits v left join Transactions t
ON v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
Group by v.customer_id;