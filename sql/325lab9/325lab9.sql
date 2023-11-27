-- Name: Dylan Lucas
-- Date: 10-20-2023

start set-up-ex-tbls.sql

spool 325lab9-out.txt

prompt Name: Dylan Lucas
prompt Date: 10-20-2023

prompt lab query 1
(select empl_last_name, job_title, hiredate
from empl
where hiredate > '01-Jan-2018')
UNION
(select empl_last_name, job_title, hiredate
from empl, dept
where dept_loc = 'Dallas'
and empl.dept_num = dept.dept_num);

prompt lab query 2
(select cust_fname, cust_lname, cust_balance
from customer
where cust_balance > 100)
UNION
(select cust_fname, cust_lname, cust_balance
from customer
where cust_city = 'Arcata');

prompt lab query 3
(select empl_last_name, salary + commission "Total Recompense"
from empl
where commission is not null)
UNION
(select empl_last_name, salary
from empl
where commission is null);

prompt lab query 4
select empl_last_name, job_title
from empl, dept
where empl.dept_num = dept.dept_num
and dept_name = &department_name;

prompt lab query 5
select cust_fname, cust_lname
from customer, empl
where empl_rep = empl_num
and job_title = &work_title;


prompt lab query 6
prompt
prompt project empl last name, job title and salary amount greater than or equal to
prompt what the user inserts for employees that are  managers
prompt and then union that with the same thing for employees in sale

(select empl_last_name, job_title, salary
from empl
where job_title = 'Manager'
and salary >= &salary_gtr_than)
UNION
(select empl_last_name, job_title, salary
from empl
where job_title = 'Sales'
and salary >= &salary_gtr_than);

spool off
