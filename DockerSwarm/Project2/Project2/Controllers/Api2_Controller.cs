using Microsoft.AspNetCore.Mvc;

namespace Project2.Controllers;

[ApiController]
[Route("api/v1/[controller]")]
public class Api_Controller : ControllerBase
{
    [HttpPost("API1")]
    public async Task<IActionResult> Test()
    {
        return Ok("api1 works");
    }
}