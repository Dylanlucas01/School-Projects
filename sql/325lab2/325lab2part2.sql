spool 325lab2part2-out.txt

prompt Name: Dylan Lucas
prompt Date: 2023-09-01

drop table favorite_movies cascade constraints;

create table favorite_movies
(subject varchar2(50),
movie varchar2(50),
year_released integer,
genre varchar2(50),
lead varchar2(50),
director varchar2(50),
primary key (movie)
);

drop table box_office cascade constraints;

create table box_office
(person varchar2(50),
movie_title varchar2(50),
amount integer,
primary key(person),
foreign key (movie_title) references favorite_movies
);

insert into favorite_movies
values
('Alex', 'Lord of the Rings', 2001, 'fantasy', 'Elijah Wood', 'Peter Jackson');

insert into favorite_movies
values
('Mat', 'Barbie', 2023, 'comedy', 'Ryan Gosling', 'Gteta Gerwig');

insert into favorite_movies
values
('Matthew', 'Grand Budapest Hotel', 2014, 'comedy', 'Ralph Fiennes', 'Wes Anderson');

insert into favorite_movies
values
('Lily', 'Cat in the Hat', 2003, 'comedy', 'Mike Myers', 'Bo Welch');

insert into favorite_movies
values
('Katherin', 'Lord of the Rings Twin Towers', 2002, 'fantasy', 'Elijah Wood', 'Peter Jackson');

insert into favorite_movies
values
('Dylan', 'Dune', 1984, 'sci fi', 'Kyle MacLachlan', 'David Lynch');

insert into box_office
values
('Alex', 'Lord of the Rings', 3000);

insert into box_office
values
('Mat', 'Barbie', 600);

insert into box_office
values
('Matthew', 'Grand Budapest Hotel', 174);

insert into box_office
values
('Lily', 'Cat in the Hat', 133);

insert into box_office
values
('Katherin', 'Lord of the Rings Twin Towers', 936);

insert into box_office
values
('Dylan', 'Dune', 30);

describe favorite_movies;

describe box_office;

select *
from favorite_movies;

select *
from box_office;

spool off
