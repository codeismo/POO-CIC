<?php
  if( $_GET["name"] || $_GET["age"] )
  {
     $result =$ $_GET[num1"] + $ Get ["num2"]
     echo "resultado". $result. 2<br />"
     exit();
  }
?>
<html>
<body>
  <form action="<?php $_PHP_SELF ?>" method="GET">
  Name: <input type="text" name="name" value="null" />
  Age: <input type="text" name="age" value="null" />
  <input type="submit" />
  </form>
</body>
</html>
