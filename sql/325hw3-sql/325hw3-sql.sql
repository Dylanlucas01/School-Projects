-- Name: Dylan Lucas
-- Date: 10-7-2023
-- CS 325 Homework 3 Problem 1
start movies-create-1.sql 
start movies-pop-1.sql

spool 325hw3-sql-out.txt

prompt Name: Dylan Lucas
prompt
prompt Homework 3 Problem 1
prompt
prompt Date: 10-7-2023

prompt Problem 1-1

select client_lname, client_credit_rtg + 0.5 if_bumped_up
from client
where client_credit_rtg <= 4.5;

prompt Problem 1-2

select rental_num, date_due, date_due + 5 if_grace
from rental
where date_returned is null;

prompt Problem 1-3

select vid_id, vid_format, vid_rental_price * 0.8 if_disct
from video
where vid_format != 'Blu-Ray';

prompt Problem 1-4

select movie_title, m.category_code, category_name
from movie m, movie_category mc
where m.category_code = mc.category_code;

prompt Problem 1-5

select min(vid_purchase_date) oldest, max(vid_purchase_date) newest
from video;

prompt Problem 1-6

select count(*) "Total Videos", avg(vid_rental_price) "Avg Rental"
from video;

prompt Problem 1-7

select count(*) "# Rentals", sum(vid_rental_price) "Total Rental $"
from video v, rental r
where v.vid_id = r.vid_id;

spool off
