using System.Data.SqlClient;
using Microsoft.Extensions.Configuration;

var builder = new ConfigurationBuilder();
builder.AddJsonFile("appsettings.json");
var config = builder.Build();
using SqlConnection conn = new(config.GetConnectionString("Default"));
conn.Open();

var command = new SqlCommand("select count(*) from Departments", conn);
{
    var res1 = command.ExecuteScalar();

    Console.WriteLine($"Count of Departments: {res1}");
}

command = new SqlCommand("select max(GroupRating) from Groups", conn);
{
    var res2 = command.ExecuteScalar();
    Console.WriteLine($"Max GroupRating: {res2}");
}

command = new SqlCommand("select sum(DepartmentFinancing) from Departments", conn);
{
    var res3 = command.ExecuteScalar();

    Console.WriteLine($"Sum of Financing: {res3}");
}

command = new SqlCommand("insert into Faculties(FacultyName, Dean) values(N'Programing', N'Elvin')", conn);
{
    var res4 = command.ExecuteNonQuery();
     
    Console.WriteLine($"Number of Faculties added: {res4}");
}
 
command = new SqlCommand("delete from Teachers where Salary = 2000", conn);
{
    var res5 = command.ExecuteNonQuery();
     
    Console.WriteLine($"Number of Teachers deleted: {res5}");
}
 
command = new SqlCommand("update Groups set CourseYear = 2 where GroupName = N'FBMS_3_22_8_ru'", conn);
{
    var res6 = command.ExecuteNonQuery();
     
    Console.WriteLine($"Number of Groups updated: {res6}");
}
