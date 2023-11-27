-- Name: Dylan Lucas
-- CS 325 - Homework 5 - Problem 3
-- Date: 11-4-2023

start movies-create-2.sql
start movies-pop-2.sql
spool 325hw5-out.txt

prompt Homework 5 Problem 3
prompt Name: Dylan Lucas
prompt Date: 11-4-2023

prompt
prompt Problem 3-1

prompt 3‐1 query 1:
select *
from client
order by client_credit_rtg;

prompt 3‐1 query 2:
select *
from client
order by client_credit_rtg desc;

prompt Problem 3-2
select movie_title || ': ' ||  movie_rating "Movie: Rating"
from movie
order by movie_rating, movie_title;

prompt Problem 3-3
select category_name, movie_title, movie_rating
from movie, movie_category
where movie.category_code = movie_category.category_code
order by movie_rating, category_name desc, movie_title;

prompt Problem 3-4
select client_lname, client_phone, client_credit_rtg
from client
where client_credit_rtg <= (select avg(client_credit_rtg)
                                from client)
order by client_credit_rtg desc;

prompt Problem 3-5
select vid_format, count(*) qty, avg(vid_rental_price) "AVG RENTAL PRICE"
from video
group by vid_format;

prompt Problem 3-6
select vid_rental_price, count(*) quantity
from video
group by vid_rental_price
order by vid_rental_price desc;

prompt Problem 3-7
select vid_rental_price, count(*) quantity
from video
group by vid_rental_price
having count(*) >= 5
order by vid_rental_price desc;

spool off