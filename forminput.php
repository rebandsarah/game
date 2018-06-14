<!DOCTYPE html>
<html>
  <head>
    <title>Pattern Game Players</title>
  </head>


  <body>

    <p>Past Players Are Displayed Below.</p>

    <?php
       // define variables and set to empty values
       $arg1 = $arg2 = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $arg1 = test_input($_POST["arg1"]);
         $arg2 = test_input($_POST["arg2"]);
         exec("/usr/lib/cgi-bin/pi/game" . $arg1 . " " . $arg2, $output, $retc); 
       }
       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Arg1: <input type="text" name="arg1"><br>
      Arg2: <input type="text" name="arg2"><br>
      <input type="submit">
    </form>

    <?php
       echo "<h2>Player Names</h2>";
       echo $arg1;
       echo "<br>";
       echo $arg2;
       echo "<br>";
       
echo "<h2>C Program Output (an array):</h2>";
       foreach ($output as $line) {
         echo $line;
         echo "<br>";
       }

       echo "<h2>C Program Return Code:</h2>";
       echo $retc;

     ?>
    
  </body>
</html>
