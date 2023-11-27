-- Name: Dylan Lucas
-- Date: 10-13-2023

start set-up-ex-tbls.sql

spool 325lab8-out.txt

prompt Name: Dylan Lucas
prompt Date: 10-13-2023

prompt lab query 1
select empl_last_name, hiredate
from empl
where job_title = 'Manager'
and salary >
	(select avg(salary)
	 from empl
	 where job_title = 'Manager');

prompt lab query 2
select hiredate
from empl
where dept_num in
	(select dept_num
	 from dept
	 where dept_loc = 'New York');

prompt lab query 3
select empl_last_name, hiredate
from empl
where  hiredate >
	(select max(hiredate)
	 from empl
	 where job_title = 'Manager');

prompt lab query 4
select empl_last_name "Employee", dept_name || ' (' || dept_loc || ')' "Department (Location)"
from empl, dept
where empl.dept_num = dept.dept_num;

prompt lab query 5
select dept_name
from dept
where exists
	(select 'a'
	 from empl
	 where salary >= 3000
	 and dept.dept_num = empl.dept_num);

prompt lab query 6
select empl_last_name
from empl
where job_title = 'Sales'
and  NOT exists
	(select 'a'
	 from customer
	 where empl_rep = empl_num);

prompt lab query 7
prompt show employees last names with their job title concatonated whos salary is more than 2000
select empl_last_name || ' (' || job_title || ')' "Employee (Position)"
from empl
where salary > 2000;

spool off
