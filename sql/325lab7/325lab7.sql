-- Name: Dylan Lucas
-- Date: 10-6-2023

start  set-up-ex-tbls.sql

spool 325lab7-out.txt

prompt Name: Dylan Lucas
prompt Date: 10-6-2023

prompt lab query 1

select dept_name, dept_loc location
from dept;

prompt lab query 2

select empl_last_name "Last Name", hiredate "Hired", job_title "Job Title"
from empl;

prompt lab query 3

select empl_last_name, hiredate,  hiredate + 3 "H PLUS 3"
from empl;

prompt lab query 4

select job_title, commission, commission * 1.2 "PLUS 20%"
from empl;

prompt lab query 5

select job_title, commission, commission * 1.2 "PLUS 20%"
from empl
where commission is not null;

prompt lab query 6

select cust_lname, empl_last_name
from customer, empl
where empl_rep = empl_num;

prompt lab query 7

select empl_last_name, dept_loc 
from empl e, dept d
where e.dept_num = d.dept_num;

prompt lab query 8

select empl_last_name, e.dept_num, dept_name
from empl e, dept d
where e.dept_num = d.dept_num;

prompt lab query 9

select count(salary) "SAL>2000"
from empl
where salary > 2000;

prompt lab query 10

select min(hiredate) earliest, max(hiredate) latest
from empl
where job_title = 'Clerk';

prompt lab query 11

select count(*) num_selected, sum(commission) total_comms, avg(commission) avg_of_comms
from empl
where job_title = 'Sales';

prompt lab query 12

select count(*) num_empls, count(commission) non_null_comms, count(mgr) non_null_mgrs
from empl;

prompt lab part 13

prompt
prompt show how many employees were hired before December first 2013
prompt and show their average salary

select count(*) num_of_empl,  avg(salary)
from empl
where hiredate < '01-Dec-2013';

spool off
