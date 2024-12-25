{
  margin: 0;
  padding:0;
  font-family: 'Noto Sans', sans-serif;
/* General Reset */
body, ul, li {
  margin: 0;
  padding: 0;
  list-style: none;
  font-family: 'Arial', sans-serif;
  background-color: #121212;
  color: #fff;
}

.header {
  background-color: #1c1c1c;
  padding: 15px 30px;
  box-shadow: 0 2px 4px rgba(0, 0, 0, 0.8);
}

.container {
  display: flex;
  justify-content: space-between;
  align-items: center;
  max-width: 1200px;
  margin: 0 auto;
}

.logo img { url(marvel photos/logo img..jpg)
  height:     px;
  width auto
}

.nav-bar {
  flex-grow: 1;
  margin-left: 30px;
}

.nav-links {
  display: flex;
  gap: 20px;
}

.nav-links a {
  text-decoration: none;
  color: #f5f5f5;
  font-size: 16px;
  transition: color 0.3s;
}

.nav-links a:hover {
  color: #e62429; /* Marvel's iconic red */
}

.cta .cta-button {
  padding: 10px 20px;
  background-color: #e62429;
  color: #fff;
  text-decoration: none;
  font-size: 16px;
  border-radius: 5px;
  transition: background-color 0.3s;
}

.cta .cta-button:hover {
  background-color: #c51d24;
}
/* General Reset */
body {
  margin: 0;
  padding: 0;
  font-family: 'Arial', sans-serif;
  background-color: #121212;
  color: #fff;
}

/* Hero Section */
.hero {
  position: relative;
  height: 100vh;
  background-image: url('hero-bg.jpg'); /* Replace with Marvel-themed background image */
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  display: flex;
  align-items: center;
  justify-content: center;
}

.hero-overlay {
  position: absolute;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  background-color: rgba(18, 18, 18, 0.8); /* Semi-transparent dark overlay */
}

.hero-content {
  position: relative;
  z-index: 2;
  text-align: center;
  color: #f5f5f5;
  max-width: 800px;
  padding: 20px;
}

.hero-content h1 {
  font-size: 3rem;
  margin-bottom: 20px;
  color: #e62429; /* Marvel's iconic red */
}

.hero-content p {
  font-size: 1.5rem;
  margin-bottom: 30px;
  line-height: 1.6;
}

.hero-buttons {
  display: flex;
  gap: 15px;
  justify-content: center;
}

.hero-btn {
  padding: 12px 30px;
  font-size: 1rem;
  text-decoration: none;
  color: #fff;
  background-color: #e62429;
  border: none;
  border-radius: 5px;
  transition: background-color 0.3s ease;
}

.hero-btn:hover {
  background-color: #c51d24;
}

.hero-btn.secondary {
  background-color: #1c1c1c;
  border: 2px solid #e62429;
}

.hero-btn.secondary:hover {
  background-color: #e62429;
  color: #fff;
}



