-- Name: Dylan Lucas
-- Date: 09/15/2023

start set-up-ex-tbls.sql

spool 325lab4-out.txt

prompt Name: Dylan Lucas
prompt Date: 09/15/2023
prompt

prompt Problem 1
prompt

prompt true relational selection of empl where commission < 2000
select *
from empl
where commission < 2000;

prompt true relational selection of dept where dept num = 200 
select *
from dept
where dept_num = 200;

prompt Problem 2
prompt

prompt true relational projection of job title from empl
select distinct job_title
from empl;

prompt true relational projection of dept name from dept
select distinct dept_name
from dept;

prompt Problem 3
prompt

prompt true cartesian  product of dept and empl
select *
from dept, empl;

prompt Problem 4
prompt

prompt true equi-join of customer and empl
select *
from customer, empl
where customer.empl_rep = empl.empl_num;

spool off
