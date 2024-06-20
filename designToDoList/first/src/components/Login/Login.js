import React from 'react';
import { FaUser, FaLock } from 'react-icons/fa';
import "../Login/Login.css";

function Login({ goToRegistration }) {
    return (
        <div className='wrapper'>
            <form action=''>
                <h1>Login</h1>
                <div className='inputBox'>
                    <input type='text' placeholder='Username' required />
                    <FaUser className='icon' />
                </div>
                <div className='inputBox'>
                    <input type='password' placeholder='Password' required />
                    <FaLock className='icon' />
                </div>

                <div className='remeber-forgot'>
                    <label><input type='checkbox' />Remember me</label>
                    <a href='#'>Forgot Password?</a>
                </div>

                <button type='submit'>Login</button>

                <div className='registration-link'>
                    <p>Don't have an account? <a href='#' onClick={goToRegistration}>Register</a></p>
                </div>
            </form>
        </div>
    );
}

export default Login;
