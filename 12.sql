create database Academy;
go;
use Academy;

CREATE TABLE Groups
(
    GroupID INT PRIMARY KEY IDENTITY(1,1),
    GroupName NVARCHAR(10) NOT NULL UNIQUE,
    GroupRating INT NOT NULL CHECK(0 < GroupRating AND GroupRating < 5),
    CourseYear INT NOT NULL CHECK(1 < CourseYear AND CourseYear < 5)
);


CREATE TABLE Departments
(
    DepartmentID INT PRIMARY KEY IDENTITY(1,1),
    DepartmentFinancing MONEY NOT NULL CHECK( 0 < DepartmentFinancing) DEFAULT 0,
    DepartmentName NVARCHAR(100) NOT NULL UNIQUE
);


CREATE TABLE Faculties
(
    FacultyID INT PRIMARY KEY IDENTITY(1,1),
    FacultyName NVARCHAR(100) NOT NULL UNIQUE
);


CREATE TABLE Teachers
(
    TeacherID INT PRIMARY KEY IDENTITY(1,1),
    EmploymentDate DATE NOT NULL CHECK('1990-01-01' < EmploymentDate),
    TeacherName NVARCHAR(max) NOT NULL,
    TeacherSurname NVARCHAR(max) NOT NULL,
    Premium MONEY NOT NULL CHECK( 0 < Premium) DEFAULT 0,
    Salary MONEY CHECK( 0 <= Salary)
);



