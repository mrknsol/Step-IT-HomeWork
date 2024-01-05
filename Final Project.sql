create database Ecommerce

go

use Ecommerce

create table Cars (
    car_id int primary key identity (1, 1),
    brand nvarchar(255) NOT NULL,
    model nvarchar(255) NOT NULL,
    year int check (year <= 2024),
    image_link nvarchar(255) default 'https://jamaicaautoauctions.com/wp-content/uploads/2019/11/default-car.jpg',
    fuel_type_id int foreign key references FuelTypes(fuel_type_id),
    body_type_id int foreign key references BodyTypes(body_type_id),
    color_id int foreign key references Colors(color_id)
);

create table Users (
    user_id int primary key identity (1, 1),
    username nvarchar(255) NOT NULL check (username like '%[^a-zA-Z0-9_-]%'),
    password nvarchar(255) NOT NULL check (password like '%[^a-zA-Z0-9]%{8,}'),
    email nvarchar(255) unique NOT NULL check (email not like '%[^a-zA-Z0-9._%+-]%' AND email like '^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$') -- Проверка на формат электронной почты
);

create table ProductList (
    product_id int primary key identity (1, 1),
    price decimal(10, 2) NOT NULL,
    quantity int NOT NULL check (quantity >= 0),
    car_id int foreign key references Cars(car_id),
    seller_id int foreign key references Sellers(seller_id)
);

create table ManufacturingCountries (
    country_id int primary key identity (1, 1),
    country_name nvarchar(255) unique NOT NULL
);

create table FuelTypes (
    fuel_type_id int primary key identity (1, 1),
    fuel_type nvarchar(255) unique NOT NULL
);

create table BodyTypes (
    body_type_id int primary key identity (1, 1),
    body_type nvarchar(255) unique NOT NULL
);

create table Colors (
    color_id int primary key identity (1, 1),
    color_name nvarchar(255) unique NOT NULL
);

create table Sellers (
    seller_id int primary key identity (1, 1),
    company_name nvarchar(255),
    contact_number nvarchar(20),
    rating decimal(3, 2) check (rating >= 0 and rating <= 9),
    user_id int foreign key references Users(user_id),
    country_id int foreign key references ManufacturingCountries(country_id)
);

