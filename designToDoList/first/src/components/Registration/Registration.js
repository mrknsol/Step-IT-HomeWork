import React from 'react';
import { FaUser, FaLock } from 'react-icons/fa';
import { CiMail } from 'react-icons/ci';
import "../Registration/Registration.css"

function Registration({ goToLogin }) {
    return (
        <div className='wrapper'>
            <h1>Register</h1>
            <form action=''>
                <div className='inputBox'>
                    <input type='text' placeholder='Username' required />
                    <FaUser className='icon'/>
                </div>
                <div className='inputBox'>
                    <input type='email' placeholder='Email' required />
                    <CiMail className='icon'/>
                </div>
                <div className='inputBox'>
                    <input type='password' placeholder='Password' required />
                    <FaLock className='icon'/>
                </div>
                <button type='submit'>Register</button>

                <div className='login-link'>
                    <p>Already have an account? <a href='#' onClick={goToLogin}>Login</a></p>
                </div>
            </form>
        </div>
    );
}

export default Registration;
