create database Academy;

go;

use Academy;

create table Groups (
    Id int identity(1,1) primary key,
    Name nvarchar(50) not null unique,
    Rating int not null check(Rating > 0 and Rating <= 12),
    Year int not null check(Year >= 1900 and Year <= 2023)
);


create table Departments (
    Id int identity(1,1) primary key,
    Financing money default 0 check(Financing >= 0),
    Name nvarchar(100) not null
);

create table Faculties (
    Id int identity(1,1) primary key,
    Name nvarchar(100) not null unique
);

create table Teachers (
    Id int identity(1,1) primary key,
    EmploymentDate date not null check (EmploymentDate >= '1990-01-01'),
    Name nvarchar(max) not null,
    Premium money default 0 check (Premium >= 0),
    Salary money not null check (Salary > 0),
    Surname nvarchar(max) not null
);
select * from Groups
insert into Groups (Name, Rating, Year)
values
(N'FBMS_3_22_11', 5, 2022),
(N'FBMS_3_22_8', 12, 2022),
(N'FBMS_3_22_2', 9, 2023);
select * from Departments

insert into Departments (Financing, Name)
values
(15000, N'Mathematics'),
(20000, N'Physics'),
(18000, N'Chemistry');

select * from Faculties

insert into Faculties (Name)+
values
(N'Software Engineering'),
(N'Computer Science');

insert into Teachers (EmploymentDate, Name, Premium, Salary, Surname)
values
('2001-11-16', N'Elvin', 200, 1600, N'Azimov'),
('2000-08-22', N'Elnur', 100, 500, N'Mamedov'),
('1998-05-06', N'Cavid', 150, 1500, N'Atamoqlanov');

select * from Teachers

alter table Teachers
add IsProfessor int default 0;

update Teachers
set IsProfessor = 1
where Id = 1 and Id = 2

select * from Teachers

select Id, Name, Financing
from Departments
order by Id desc;

select Name as 'Group Name', Rating as 'Group Rating'
from Groups;

select Surname,
       Premium / Salary * 100 as 'Percentage of Premium to Salary',
       Salary / (Salary + Premium) * 100 as 'Percentage of Salary to Total'
from Teachers;

select Surname
from Teachers
where IsProfessor = 1 and Salary > 1050;

select Name as 'Name of Department'
from Departments
where Financing < 11000 or Financing > 25000;

select Name
from Faculties
where Name = 'Computer Science';

select Surname,
       Premium / Salary * 100 as 'Percentage of Premium to Salary',
       Salary / (Salary + Premium) * 100 as 'Percentage of Salary to Total'
from Teachers;

select Surname, Name
from Teachers
where IsProfessor = 0;

select Surname
from Teachers
where EmploymentDate < '2000-01-01';

select Name as 'Name of Department'
from Departments
where Name < 'Software Development'
order by Name;


select Name
from Groups
where Year = 5 and Rating >= 2 and Rating <= 4;


