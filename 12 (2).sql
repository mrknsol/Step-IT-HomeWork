create database Academy2;
go;
use Academy2;

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
    FacultyName NVARCHAR(100) NOT NULL UNIQUE,
    Dean NVARCHAR(max) NOT NULL
);


CREATE TABLE Teachers
(
    TeacherID INT PRIMARY KEY IDENTITY(1,1),
    EmploymentDate DATE NOT NULL CHECK('1990-01-01' < EmploymentDate),
    TeacherName NVARCHAR(max) NOT NULL,
    TeacherSurname NVARCHAR(max) NOT NULL,
    Premium MONEY NOT NULL CHECK( 0 < Premium) DEFAULT 0,
    Salary MONEY CHECK( 0 <= Salary),
    IsAssistant BIT NOT NULL DEFAULT 0,
    IsProfessor BIT NOT NULL DEFAULT 0,
    Position NVARCHAR(max) NOT NULL
);


SELECT DepartmentName, DepartmentFinancing,DepartmentId FROM Departments;

SELECT GroupName AS "Group Name", GroupRating AS "Group Rating" FROM Groups;

SELECT CONCAT('The dean of faculty ', FacultyName, ' is ', Dean, '.') AS "Faculty Details"
FROM Faculties;

SELECT TeacherSurname
FROM Teachers
WHERE Salary > 1050 AND IsProfessor = 1;

SELECT DepartmentName
FROM Departments
WHERE DepartmentFinancing > 25000 OR DepartmentFinancing < 11000;

SELECT FacultyName
FROM Faculties
WHERE FacultyName != 'Computer Science';

SELECT TeacherName , Position
FROM Teachers
WHERE IsProfessor = 0;

SELECT  Position, Premium , Salary , TeacherSurname
FROM Teachers
WHERE IsAssistant = 1 AND Premium BETWEEN 160 AND 550;

SELECT Salary, TeacherSurname
FROM Teachers
WHERE IsAssistant = 1;

SELECT TeacherSurname, Position
FROM Teachers
WHERE EmploymentDate < '2000-01-01';

SELECT DepartmentName AS "Name of Department"
FROM Departments
WHERE DepartmentName < 'Software Development'
ORDER BY DepartmentName;

SELECT TeacherSurname
FROM Teachers
WHERE IsAssistant = 1 AND Premium + Teachers.Salary <= 1200;

SELECT GroupName
FROM Groups
WHERE CourseYear = 5 AND GroupRating BETWEEN 2 AND 4;

SELECT TeacherSurname
FROM Teachers
WHERE Premium < 200 OR Salary < 550