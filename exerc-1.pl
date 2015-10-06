#! /usr/bin/perl -w
# pregunta 1.- Perl allows both static and a kind of dynamic scoping. Write a Perl program that uses both and clearly shows the difference in effect of the two. Explain clearly the difference between the dynamic scoping described in this chapter and that implemented in Perl

$a = 0;
sub minifun {
  return $a;
}
sub static {
  my $a = 1;
  return minifun();
}

print static(); 

/* aqi me retornara 1
$b = 0;
sub microfun {
  return $b;
}
sub dynamic {
  local $b = 1;
  return microfun();
}
print dynamic()

