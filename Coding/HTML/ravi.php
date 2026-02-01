<?php
// Simple single-file dynamic template for "Ravi" (Facebook-like)
$page = isset($_GET['page']) ? $_GET['page'] : 'login';
?>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>
    <?php
      if ($page == 'login') echo "Ravi – Log in or Sign Up";
      elseif ($page == 'signup') echo "Sign Up for Ravi";
      else echo "Ravi Home";
    ?>
  </title>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css">
  <style>
    body { font-family: Arial, Helvetica, sans-serif; background: #f0f2f5; }
    .card { border-radius: 10px; }
    .navbar-brand { font-size: 1.8rem; text-transform: lowercase; font-weight: bold; }
    footer { font-size: 0.9rem; }
  </style>
</head>
<body>

<?php if ($page == 'home'): ?>
  <!-- Navbar for Home -->
  <nav class="navbar navbar-expand-lg navbar-dark bg-primary">
    <div class="container">
      <a class="navbar-brand" href="ravi.php?page=home">ravi</a>
      <form class="d-flex ms-auto">
        <input class="form-control me-2" type="search" placeholder="Search Ravi">
      </form>
      <a href="#" class="btn btn-outline-light ms-2">Profile</a>
      <a href="ravi.php?page=login" class="btn btn-light ms-2">Logout</a>
    </div>
  </nav>
<?php endif; ?>

<div class="container py-5">
  <?php if ($page == 'login'): ?>
    <!-- Login Page -->
    <div class="row align-items-center">
      <div class="col-md-6 text-center text-md-start">
        <h1 class="fw-bold text-primary">ravi</h1>
        <p class="fs-5 text-muted">Ravi helps you connect and share with the people in your life.</p>
      </div>
      <div class="col-md-6">
        <div class="card shadow-sm p-4">
          <form>
            <input type="email" class="form-control mb-3" placeholder="Email address" required>
            <input type="password" class="form-control mb-3" placeholder="Password" required>
            <a href="ravi.php?page=home" class="btn btn-primary w-100 mb-3">Log In</a>
            <div class="text-center">
              <a href="#" class="small text-decoration-none">Forgotten password?</a>
            </div>
            <hr>
            <div class="text-center">
              <a href="ravi.php?page=signup" class="btn btn-success mt-2">Create New Account</a>
            </div>
          </form>
        </div>
      </div>
    </div>

  <?php elseif ($page == 'signup'): ?>
    <!-- Signup Page -->
    <div class="row justify-content-center">
      <div class="col-md-6 col-lg-5">
        <div class="card shadow-sm p-4">
          <h3 class="text-center text-primary mb-4">Create a new account</h3>
          <form>
            <div class="row g-2">
              <div class="col"><input type="text" class="form-control" placeholder="First name"></div>
              <div class="col"><input type="text" class="form-control" placeholder="Surname"></div>
            </div>
            <input type="email" class="form-control mt-3" placeholder="Email address">
            <input type="password" class="form-control mt-3" placeholder="New password">
            <a href="ravi.php?page=home" class="btn btn-success w-100 mt-4">Sign Up</a>
          </form>
          <div class="text-center mt-3">
            <a href="ravi.php?page=login" class="text-decoration-none small">Already have an account?</a>
          </div>
        </div>
      </div>
    </div>

  <?php elseif ($page == 'home'): ?>
    <!-- Home Page -->
    <div class="row justify-content-center">
      <div class="col-md-8">
        <!-- Create Post -->
        <div class="card mb-4">
          <div class="card-body">
            <textarea class="form-control mb-2" rows="2" placeholder="What's on your mind, Ravi?"></textarea>
            <button class="btn btn-primary float-end">Post</button>
          </div>
        </div>

        <!-- Example Post -->
        <div class="card mb-4">
          <div class="card-body">
            <h6><strong>Ravi Sharma</strong> <small class="text-muted">· 2 hrs ago</small></h6>
            <p>Just created my new website called Ravi! 🚀</p>
            <div class="d-flex">
              <button class="btn btn-light btn-sm me-2">👍 Like</button>
              <button class="btn btn-light btn-sm">💬 Comment</button>
            </div>
          </div>
        </div>

        <div class="card mb-4">
          <div class="card-body">
            <h6><strong>Anita Verma</strong> <small class="text-muted">· 4 hrs ago</small></h6>
            <p>Good morning everyone! ☀️</p>
            <div class="d-flex">
              <button class="btn btn-light btn-sm me-2">👍 Like</button>
              <button class="btn btn-light btn-sm">💬 Comment</button>
            </div>
          </div>
        </div>
      </div>
    </div>
  <?php endif; ?>
</div>

<!-- Footer -->
<footer class="text-center py-4 bg-white mt-5 border-top">
  <p class="mb-0 text-muted">&copy; <?php echo date("Y"); ?> Ravi. Connect with friends and the world around you.</p>
</footer>

<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"></script>
</body>
</html>
