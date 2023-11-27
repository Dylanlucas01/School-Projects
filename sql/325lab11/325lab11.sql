-- Name: Dylan Lucas
-- Date: 11-3-2023

start set-up-ex-tbls.sql

spool 325lab11-out.txt

prompt Name: Dylan Lucas
prompt Date: 11-3-2023

prompt lab query 1
(select job_title, mgr
from empl
where salary < 2000)
UNION
(select job_title, mgr
from empl
where commission is not null);

prompt lab query 2
(select job_title, mgr
from empl
where salary < 2000)
intersect
(select job_title, mgr
from empl
where commission is not null);

prompt lab query 3
(select job_title, mgr
from empl
where salary < 2000)
minus
(select job_title, mgr
from empl
where commission is not null);

prompt lab query 4
(select empl_last_name, salary*2 twice_salary
from empl
where job_title = 'Clerk')
minus
(select empl_last_name, salary*2 twice_salary
from empl
where hiredate < '01-Jan-2015')
order by twice_salary desc;

prompt lab query-set 5
select empl_last_name, commission
from empl
where commission is not null;

select empl_last_name, 0
from empl
where commission is null;

(select empl_last_name, commission comm_value
from empl
where commission is not null)
UNION
(select empl_last_name, 0 comm_value
from empl
where commission is null)
order by comm_value desc, empl_last_name;

prompt lab quary-set 6
select empl_last_name, job_title, salary
from empl
where job_title != 'Manager'
and salary > (select min(salary)
                from empl
                where job_title = 'Manager');

select empl_last_name, job_title, salary
from empl, dept
where empl.dept_num = dept.dept_num
and dept_loc = 'New York';

(select empl_last_name, job_title, salary
from empl
where job_title != 'Manager'
and salary > (select min(salary)
                from empl
                where job_title = 'Manager'))
UNION
(select empl_last_name, job_title, salary
from empl, dept
where empl.dept_num = dept.dept_num
and dept_loc = 'New York')
order by salary;

prompt lab problem 7
select empl_last_name, job_title, salary, commission
from empl
where commission is not null;

update empl
set commission = commission + 100
where salary < (select avg(salary)
                from empl
                where job_title = 'Sales');

select empl_last_name, job_title, salary, commission
from empl;

prompt lab problem 8
delete empl
where salary < (select min(salary)
                from empl
                where job_title = 'Sales');

select empl_last_name, job_title, salary
from empl;

prompt lab problem 9
rollback;
prompt intersect a projection of employee last name, job title, and salary
prompt of employees hired after Janurary first 2014
prompt with a projection of employee last name, job title, and salary
prompt of employees who make more than 1300 dollars

(select empl_last_name, job_title, salary
from empl
where hiredate > '01-Jan-2014')
intersect
(select empl_last_name, job_title, salary
from empl
where salary > 1300);

spool off