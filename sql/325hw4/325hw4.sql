-- Name: Dylan Lucas
-- CS 325 Homework 4
-- Date: 10-23-2023

start movies-create-1-1.sql
start movies-pop-1-1.sql

spool 325hw4-out.txt

prompt Homework 4
prompt Name: Dylan Lucas

prompt Promblem 1
select vid_id, vid_format
from video
where vid_rental_price <(select avg(vid_rental_price)
				from video); 

prompt Promblem 2
select client_lname, client_fname
from client
where client_num in (select client_num
			from rental
			where vid_id = '130012');

prompt Promblem 3
select movie_title || ': ' ||  movie_rating "Movie: Rating"
from movie;

prompt Promblem 4
select movie_title || ' (' || movie_yr_released || ')' "Movies", movie_director_lname "Directors"
from movie;

prompt Promblem 5
select movie_title
from movie, video
where movie.movie_num = video.movie_num
and vid_purchase_date = (select min(vid_purchase_date)
				from video);

prompt Promblem 6 
select client_lname, client_fname, client_phone 
from client
where  exists (select rental_num
		from rental
		where client.client_num = rental.client_num
		and date_returned is null);

prompt Promblem 7
select movie_title
from movie
where not exists (select *
			from video
			where movie.movie_num = video.movie_num
			and  vid_format = 'Blu-Ray');

prompt Promblem 8
select movie_title, movie_yr_released
from movie
where movie_director_lname = &dir_name;

prompt Promblem 9
select movie_title, movie_director_lname
from movie
where category_code = (select category_code
			from movie_category
			where category_name = &catgry_name);

spool off
