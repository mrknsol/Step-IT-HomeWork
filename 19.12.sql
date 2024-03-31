

    CREATE TABLE Curators (
		Curatorid int primary key IDENTITY(1,1),
		[Name] nvarchar(max) NOT NULL,
		[Surname] nvarchar(max) NOT NULL
	);
    CREATE TABLE Faculties (
		id int primary key IDENTITY(1,1),
		[Name] nvarchar(max) NOT NULL
	);
 
	CREATE TABLE Departments(
		id int primary key IDENTITY(1,1),
		[Name] nvarchar(max) NOT NULL,
		Financing money NOT NULL DEFAULT 0 CHECK(Financing > 0),
		FacultiesId int NOT NULL foreign key references Faculties(id)
	);
	CREATE TABLE [Subject] (
		id int primary key IDENTITY(1,1),
		[Name] nvarchar(max) NOT NULL
	);
	CREATE TABLE Teachers(
		id int primary key IDENTITY(1,1),
		[Name] nvarchar(max) NOT NULL,
		Surname nvarchar(max) NOT NULL,
		Salary money NOT NULL CHECK(Salary > 0)
	);
		
	CREATE TABLE Groups(
		id int primary key IDENTITY(1,1),
		[Name] nvarchar(max) NOT NULL,
		CourseYear int NOT NULL CHECK(CourseYear > 1 AND CourseYear < 5),
		DepartmentId int foreign key references Departments(id),
	);
	CREATE TABLE Lectures(
		id int primary key IDENTITY(1,1),
		[DayOfWeek] INT NOT NULL CHECK([DayOfWeek] >= 1 AND [DayOfWeek] <= 7),
		LectureRoom nvarchar(max) NOT NULL,
		SubjectId int foreign key references [Subject](id),
		TeacherId int foreign key references Teachers(id)
	);
	CREATE TABLE GroupsLectures(
		id int primary key IDENTITY(1,1),
		GroupId int foreign key references Groups(id),
		LectureId INT NOT NULL FOREIGN KEY REFERENCES Lectures(Id)
	);

SELECT Teachers.Name AS TeacherName, Teachers.Surname AS TeacherSurname, Groups.Name AS GroupName
FROM Teachers, Groups;

SELECT DISTINCT F1.Name AS FacultyName
FROM Faculties F1, Departments D1, Faculties F2, Departments D2
WHERE D1.Financing > F1.Id AND D1.FacultiesId = F1.Id AND D2.Financing > F2.Name  AND D2.FacultiesId = F2.Id;

SELECT C.Surname AS CuratorSurname, G.Name AS GroupName
FROM Curators C
JOIN Curators  GC ON C.CuratorId  = GC.CuratorId
JOIN Groups G ON GC.Curatorid = G.Id;

SELECT T.Name AS TeacherName, T.Surname AS TeacherSurname
FROM Teachers T
JOIN Lectures L ON T.Id = L.TeacherId
JOIN GroupsLectures GL ON L.Id = GL.LectureId
JOIN Groups G ON GL.GroupId = G.Id
WHERE G.Name = 'P107';

SELECT T.Surname AS TeacherSurname, F.Name AS FacultyName
FROM Teachers T
JOIN Lectures L ON T.Id = L.TeacherId
JOIN [Subject] S ON L.SubjectId = S.Id
JOIN Departments D ON S.id = D.Id
JOIN Faculties F ON D.FacultiesId = F.Id;

SELECT D.Name AS DepartmentName, G.Name AS GroupName
FROM Departments D
JOIN Groups G ON D.Id = G.DepartmentId;

SELECT DISTINCT S.Name AS SubjectName
FROM Teachers T
JOIN Lectures L ON T.Id = L.TeacherId
JOIN [Subject] S ON L.SubjectId = S.Id
WHERE T.Name = 'Samantha' AND T.Surname = 'Adams';

SELECT D.Name AS DepartmentName
FROM [Subject] S
JOIN Departments D ON S.id = D.Id
WHERE S.Name = 'Database Theory';

SELECT G.Name AS GroupName
FROM Groups G
JOIN Departments D ON G.DepartmentId = D.Id
JOIN Faculties F ON D.FacultiesId = F.Id
WHERE F.Name = 'Computer Science';

SELECT G.Name AS GroupName, F.Name AS FacultyName
FROM Groups G
JOIN Faculties F ON G.DepartmentId = F.Id
WHERE G.CourseYear = 5;

SELECT T.Name AS TeacherName, T.Surname AS TeacherSurname, L.LectureRoom, S.Name AS SubjectName, G.Name AS GroupName
FROM Teachers T
JOIN Lectures L ON T.Id = L.TeacherId
JOIN [Subject] S ON L.SubjectId = S.Id
JOIN GroupsLectures GL ON L.Id = GL.LectureId
JOIN Groups G ON GL.GroupId = G.Id
WHERE L.LectureRoom = 'B103';
