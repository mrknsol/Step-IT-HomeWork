using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Authorization;

namespace Project1.Controllers;

[ApiController]
[Route("api/v1/[controller]")]
public class Api_Controller : ControllerBase
{
    [HttpPost("API2")]
    public async Task<IActionResult> Test()
    {
        return Ok("api1 works");
    }
}