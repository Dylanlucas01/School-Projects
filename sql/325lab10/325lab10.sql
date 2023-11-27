-- Name: Dylan Lucas
-- Date: 10-27-2023

start set-up-ex-tbls.sql

spool 325lab10-out.txt

prompt Name: Dylan Lucas
prompt Date: 10-27-2023

prompt lab query 1
select *
from dept
order by dept_loc;

prompt lab query 2
select *
from dept
order by dept_name;

prompt lab query 3
select empl_last_name, dept_name, salary, hiredate
from empl, dept
where empl.dept_num = dept.dept_num
order by dept_name, hiredate;

prompt lab query 4
select empl_last_name, dept_name, salary, hiredate
from empl, dept
where empl.dept_num = dept.dept_num
order by salary desc, hiredate;

prompt lab query 5
select mgr, min(hiredate)
from empl
group by mgr;

prompt lab query 6
select mgr, min(hiredate)
from empl
group by mgr
having min(hiredate) > '01-Jan-2015';

prompt lab query 7
select dept_name, count(*)
from dept, empl
where dept.dept_num = empl.dept_num
group by dept_name
order by count(*);

prompt lab query 8
select dept_name, count(*)
from dept, empl
where dept.dept_num = empl.dept_num
group by dept_name
having avg(salary) < 2000
order by count(*);

prompt lab query 9

prompt project the department number and the max salary for each department
prompt then order by salary in descending order

select dept_num, max(salary)
from empl
group by dept_num
order by max(salary) desc;

spool off
