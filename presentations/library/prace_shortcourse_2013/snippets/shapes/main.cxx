int main ()
{    
  /* using shapes polymorphically */
  Shape * shapes[2];
  shapes[0] = new Rectangle (10, 20, 5, 6);
  shapes[1] = new Circle (15, 25, 8);
  
  for (int i=0; i<2; ++i)
    shapes[i]->Draw();
  ...
}
