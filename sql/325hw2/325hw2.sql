-- Name: Dylan Lucas
-- Date: 9-30-2023

start movies-create.sql
start movies-pop.sql

spool 325hw2-out.txt

prompt Name: Dylan Lucas
prompt Date: 9-30-2023
prompt

prompt Problem 1
select *
from client
where client_credit_rtg > 3.4;

prompt Problem 2
select distinct movie_rating, movie_yr_released
from movie;

prompt Problem 3
select *
from client, movie_category
where client_fave_cat = category_code;

prompt Problem 4
select vid_id, date_out, date_due
from rental
where date_returned is null;

prompt Problem 5
select vid_id, vid_format, vid_rental_price
from video 
where vid_format != 'Blu-Ray';

prompt Problem 6
select category_name, client_lname, client_credit_rtg
from movie_category, client
where client_fave_cat = category_code;

prompt Problem 7
select *
from video
where vid_purchase_date between '15-Jul-2008' and '1-Dec-2011';

prompt Problem 8
select *
from video
where vid_rental_price >= 3.99;

prompt Problem 9
select movie_title, movie_rating
from movie
where BINARY movie_title LIKE '%the%';

prompt Problem 10
select movie_rating, movie_title
from movie
where movie_rating IN ('PG-13','R','A');

spool off
