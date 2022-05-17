/*
 Please write a DELETE statement and DO NOT write a SELECT statement.
 Write your PL/SQL query statement below
 */
 delete from person p where p.id not in (select min(id) from person group by email);
