<DOCTYPE HTML>
  <html>

  <head>
    <link href="includes/bootstrap.min.css" rel="stylesheet" type="text/css">
    <script src="includes/jquery.js"> </script>
    <script src="includes/bootstrap.min.js"></script>
    <style>
      

      #hiring-h1 {
        margin-top: 50px;
        margin-bottom: 50px
      }
    </style>
  </head>

  <body class="bg-primary">
    <nav class="navbar navbar-expand-lg navbar-dark bg-danger fs-4 shadow">
      <div class="container-fluid">
        <a class="navbar-brand" href="index.php">NATALIE GENERAL HOSPITAL</a>
        <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent"
          aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
          <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarSupportedContent">
          <ul class="navbar-nav me-auto mb-2 mb-lg-0">
            <li class="nav-item">
              <a class="nav-link text-light fw-bold" aria-current="page" href="#">HOSPITAL MANAGMENT SYSTEM</a>
            </li>

          </ul>
          
        </div>
      </div>
    </nav>
    <div class="w-75 mx-auto mt-3 p-3"id="bg-form">
    <img src="includes/cheer.jpg"class="w-100 mx-auto rounded-3">
      </div>
    <h1 class="w-50 mx-auto fs-5 mt-3 p-1 bg-light text-primary rounded-3 mb-3 shadow shadow-3 shadow-danger">Natalie General Hospitals </h1>
    <form class="w-50 mx-auto border  p-3 bg-light rounded-3"action="backend/login.php" method="post">
      <p class="fs-5 mb-3 mt-3 "id="feedback"></p>
      <input type="username" class="form-control mb-3 mt-3" placeholder="Type Your Username "id="username" name="username">
      <input type="password" class="form-control mb-3 mt-3" placeholder="Type Your Password"id="password"name="password">
      <button type="submit" class="btn btn-secondary mb-3 mt-3" id="login-btn" name="login">log in</button>
      <a href="backend/signup.php" class="d-block">create new account</a>
    </form>
  </div>
    <footer class="fixed-bottom">
      <div class="bg-dark">
        <div class="container ">
          <div class="row">
            <div class="col">
              <p class="lead fs-6 text-light">HOSPITAL MANAGEMENT SYSTEM &copy; 2022</p>

            </div>

          
          </div>
          <!--endof row for cta-->

        </div>
      </div>
      <!--endof cta-->
    </footer>
    <script>
      $(document).ready(function () {
       /* $('#login-btn').click(function () {
          event.preventDefault();
          //formdata
          let email = $('#email').val();
          let password = $('#password').val();
          //
          let formdata = new FormData();
           formdata.append('email',email);
           formdata.append('password',password);
           formdata.append('login',true);
         //AJAX
         $.ajax({
                    type: "POST",
                    enctype: 'multipart/form-data',
                    url: "backend/login.php",
                    data: formdata,
                    processData: false,
                    contentType: false,
                    cache: false,
                    timeout: 800000,
                    success: function (data) {
                      $('#feedback').html(data);
                    }
                    
                });
        });*/

      });
    </script>
  </body>


  </html>