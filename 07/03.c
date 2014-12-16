int main(int argc, char *argv[])
{
  IntNode *L2, *L1 = NULL;
  L1= insertFirst( L1, 5);
  L1= insertFirst( L1, 6);
  L2= reverseListCon(L1);

  // Stelle1 = (6, 5), (5 ,6)

  reverseList(L1);

  //Stelle 2 = (5, 6), (5 ,6)

  L1= insertFirst( L1, 3);
  L2= insertFirst( L2, 4);

  //Stelle 3 = (3, 5 , 6) (4, 5, 6)
  return 0;
}
