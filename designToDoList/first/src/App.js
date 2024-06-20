import './App.css';
import { useState } from "react";
import Login from './components/Login/Login.js';
import Registration from './components/Registration/Registration.js';

function App() {
  const [page, setPage] = useState("login");

  function goToRegistration() {
    setPage("registration");
  }

  function goToLogin() {
    setPage("login");
  }

  return (
    <div>
      {page === "login" && <Login goToRegistration={goToRegistration} />}
      {page === "registration" && <Registration goToLogin={goToLogin} />}
    </div>
  );
}

export default App;
