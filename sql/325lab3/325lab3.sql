-- Name: Dylan Lucas

-- Date: 9-8-2023

start 325lect02-2.sql

spool 325lab3-out.txt

prompt Name: Dylan Lucas
prompt Date: 9-8-2023

insert into parts
values
(12345, 'light', 4, 24.99, 'XXX', '08-Aug-2023');

insert into part_orders
values
('333333', '33333333', 12345, sysdate, 4, 'B', 'U');

insert into part_orders
values
('444444', '44444444', 12345, sysdate, 5, 'I', 'F');

insert into part_orders
values
('555555', '55555555', 12345, sysdate, 6, 'G', 'P');

select *
from parts;

select *
from part_orders;

spool off 
