-- Name: Dylan Lucas
-- Date: 11-17-2023

start set-up-ex-tbls.sql

spool 325lab13-out.txt

prompt Name: Dylan Lucas
prompt Date: 11-17-2023

prompt lab problem 1
drop view emp_salaries;
create view emp_salaries as
select empl_last_name, salary
from empl;

prompt lab problem 2
select *
from emp_salaries;

prompt lab problem 3
select max(salary)
from emp_salaries;

prompt lab problem 4
drop view earliest_hires;
create view earliest_hires(job_title, earliest_hire_date) as
select job_title, min(hiredate) as earliest_hire_date
from empl
group by job_title;

prompt lab problem 5
select *
from earliest_hires;

prompt lab problem 6
select max(earliest_hire_date)
from earliest_hires;

prompt lab problem 7
drop view cust_reps;
create view cust_reps as
select cust_lname || ', ' || cust_fname "CUSTOMER", 
        (select empl_last_name
         from empl
         where customer.empl_rep = empl.empl_num) "REPD_BY",
         (select dept_loc
         from dept, empl
         where customer.empl_rep = empl.empl_num and empl.dept_num = dept.dept_num) "DEPT_LOC"
from customer;

prompt lab problem 8
select *
from cust_reps;

prompt lab problem 9
prompt project the job title and hiredate of the most recent hire from each department
drop view latest_hires;
create view latest_hires(job_title, latest_hire_date) as
select job_title, max(hiredate) as latest_hire_date
from empl
group by dept_num;

select *
from latest_hires;

prompt project just the latest minimum hire date for any department
select min(latest_hire_date) as latest_min_hire_date
from latest_hires;

spool off