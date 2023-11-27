-- Name: Dylan Lucas
-- Date: 9-29-2023

start set-up-ex-tbls.sql

spool 325lab6-out.txt

prompt Name: Dylan Lucas
prompt Date: 9-29-2023
prompt

prompt lab query 1
select empl_last_name
from empl
where mgr is null;
 
prompt lab query 2 
select empl_last_name, hiredate
from empl
where job_title = 'Sales';

prompt lab query 3
select dept_name, salary
from empl, dept
where mgr = '7839'
and empl.dept_num = dept.dept_num;

prompt lab query 4
select distinct job_title, mgr
from empl;

prompt lab query 5
select *
from dept
where dept_loc in ('Dallas','Boston','New York');

prompt lab query 6
select empl_last_name, job_title, salary
from empl
where salary > 3000
or salary < 1000;

prompt lab query 7
select *
from empl
where hiredate between '1-Sep-2018' and '30-Sep-2018';

prompt lab query 8
select *
from empl
where empl_last_name like 'M%';

prompt lab query 9
prompt Write a query to show the employees last names of employees who are a clerk and make more than 1000
select empl_last_name
from empl
where job_title = 'Clerk'
and salary > 1000;

spool off
