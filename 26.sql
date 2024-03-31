CREATE TABLE Users (
    [user_id] INT PRIMARY KEY identity(1,1),
    username NVARCHAR(max),
    [password] NVARCHAR(max),
    email NVARCHAR(max)
);

CREATE TABLE ManufacturingCountries (
    country_id INT PRIMARY KEY identity(1,1),
    country_name NVARCHAR(max)
);

CREATE TABLE FuelTypes (
    fuel_type_id INT PRIMARY KEY identity(1,1),
    fuel_type NVARCHAR(max)
);

CREATE TABLE BodyTypes (
    body_type_id INT PRIMARY KEY identity(1,1),
    body_type NVARCHAR(max)
);

CREATE TABLE Colors (
    color_id INT PRIMARY KEY identity(1,1),
    color_name NVARCHAR(max)
);

CREATE TABLE Cars (
    car_id INT PRIMARY KEY identity(1,1),
    brand NVARCHAR(max),
    model NVARCHAR(max),
    [year] INT check([year] > 2018),
    image_link NVARCHAR(max),
    fuel_type_id INT FOREIGN KEY  references FuelTypes(fuel_type_id),
    body_type_id INT FOREIGN KEY references BodyTypes(body_type_id),
    color_id INT FOREIGN KEY references Colors(color_id)
);

CREATE TABLE Sellers (
    seller_id INT PRIMARY KEY identity(1,1),
    company_name NVARCHAR(max),
    contact_number NVARCHAR(max),
    rating INT,
    [user_id] INT FOREIGN KEY references Users([user_id]),
    country_id INT FOREIGN KEY references ManufacturingCountries(country_id)
);

CREATE TABLE ProductList (
    product_id INT PRIMARY KEY identity(1,1),
    price money,
    quantity INT,
    car_id INT FOREIGN KEY references Cars(car_id),
    seller_id INT FOREIGN KEY references Users([user_id])

);
