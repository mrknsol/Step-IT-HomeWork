create database HomeWork

use HomeWork

go;

CREATE TABLE Departments (
    Id INT PRIMARY KEY identity (1, 1),
    Financing MONEY NOT NULL DEFAULT 0,
    Name NVARCHAR(100) NOT NULL UNIQUE,
    FacultyId int foreign key references Faculties(Id)
);

CREATE TABLE Faculties (
    Id INT PRIMARY KEY identity (1, 1),
    Name NVARCHAR(100) NOT NULL UNIQUE
);

CREATE TABLE Groups (
    Id INT PRIMARY KEY identity (1, 1),
    Name NVARCHAR(10) NOT NULL UNIQUE,
    Year INT NOT NULL CHECK (Year BETWEEN 1 AND 5),
    DepartmentId INT NOT NULL,
    DpartamentId int foreign key references Departments(Id)
);

CREATE TABLE GroupsLectures (
    Id INT PRIMARY KEY identity (1, 1),
    GroupId int foreign key references Groups(Id),
    LeactureId int foreign key references Lectures(Id)
);

CREATE TABLE Lectures (
    Id INT PRIMARY KEY identity (1, 1),
    DayOfWeek INT NOT NULL CHECK (DayOfWeek BETWEEN 1 AND 7),
    LectureRoom NVARCHAR(MAX) NOT NULL,
    SubjectId int foreign key references Subjects(Id),
    TeacherId int foreign key references Teachers(Id)
);

CREATE TABLE Subjects (
    Id INT PRIMARY KEY identity (1, 1),
    Name NVARCHAR(100) NOT NULL UNIQUE
);

CREATE TABLE Teachers (
    Id INT PRIMARY KEY identity (1, 1),
    Name NVARCHAR(MAX) NOT NULL,
    Salary MONEY NOT NULL CHECK (Salary > 0),
    Surname NVARCHAR(MAX) NOT NULL
);

SELECT COUNT(*) AS TeachersCount
FROM Teachers T
INNER JOIN Departments D ON T.Id = D.Id
WHERE D.Name = 'Software Development';

SELECT COUNT(*) AS LecturesCount
FROM Lectures L
INNER JOIN Teachers T ON L.TeacherId = T.Id
WHERE T.Name = 'Dave McQueen';

SELECT COUNT(*) AS ClassesCount
FROM Lectures
WHERE LectureRoom = 'D201';

SELECT LectureRoom, COUNT(*) AS LecturesCount
FROM Lectures
GROUP BY LectureRoom;

SELECT COUNT(DISTINCT GL.Id) AS StudentsCount
FROM GroupsLectures GL
INNER JOIN Lectures L ON GL.Id = L.Id
INNER JOIN Teachers T ON L.TeacherId = T.Id
WHERE T.Name = 'Jack Underhill';

SELECT AVG(Salary) AS AverageSalary
FROM Teachers T
INNER JOIN Departments D ON T.Id = D.Id
INNER JOIN Faculties F ON D.FacultyId = F.Id
WHERE F.Name = 'Computer Science';

SELECT MIN(StudentsCount) AS MinStudents, MAX(StudentsCount) AS MaxStudents
FROM (
    SELECT G.Id, G.Name, COUNT(GL.Id) AS StudentsCount
    FROM Groups G
    LEFT JOIN GroupsLectures GL ON G.Id = GL.GroupId
    GROUP BY G.Id, G.Name
) AS GroupStudents;


SELECT AVG(Financing) AS AverageFinancing
FROM Departments;

SELECT T.Name + ' ' + T.Surname AS FullName, COUNT(DISTINCT L.SubjectId) AS SubjectsCount
FROM Teachers T
INNER JOIN Lectures L ON T.Id = L.TeacherId
GROUP BY T.Id, T.Name, T.Surname;

SELECT DayOfWeek, COUNT(*) AS LecturesCount
FROM Lectures
GROUP BY DayOfWeek;

SELECT L.LectureRoom, COUNT(DISTINCT D.Id) AS DepartmentsCount
FROM Lectures L
INNER JOIN Teachers T ON L.TeacherId = T.Id
INNER JOIN Departments D ON T.Id = D.Id
GROUP BY L.LectureRoom;

SELECT F.Name AS FacultyName, COUNT(DISTINCT L.SubjectId) AS SubjectsCount
FROM Faculties F
INNER JOIN Departments D ON F.Id = D.FacultyId
INNER JOIN Teachers T ON D.Id = T.Id
INNER JOIN Lectures L ON T.Id = L.TeacherId
GROUP BY F.Id, F.Name;

SELECT T.Name + ' ' + T.Surname AS TeacherName, L.LectureRoom, COUNT(*) AS LecturesCount
FROM Lectures L
INNER JOIN Teachers T ON L.TeacherId = T.Id
GROUP BY T.Id, T.Name, T.Surname, L.LectureRoom;
