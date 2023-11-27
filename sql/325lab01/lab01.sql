-- put the ID, your name, and the color of the shirt you are wearing today
-- Week 1 Lab

-- this is a single-line comment in SQL

/* this is a multi-line
   comment in SQL */

-- spool is a SQL*Plus command that asks for every result of a SQL script
--    to be written to the file named as well as to the screen

spool lab1-results.txt

-- here is our first table (drop and) creation!

drop table student;

create table student
(student_id     integer,
 student_name   varchar2(20),
 student_shirtcolor varchar2(20), 
 primary key (student_id)
);

-- here is our first insert into a table!

insert into student
values
(313, 'Dongcheng Li', 'black');

-- THE simplest select/query statement:
--     select *
--     from   desired_tbl;
-- this shows all the columns for all the rows in desired_tbl

select *
from   student;

-- when you want to stop writing, turn off spooling with spool off

spool off

