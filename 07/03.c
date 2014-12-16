int main(int argc, char *argv[])
{
  IntNode *L2, *L1 = NULL;
  L1= insertFirst( L1, 5);
  L1= insertFirst( L1, 6);
  L2= reverseListCon(L1);

  // Stelle1 = (5, 6), (6 ,5)

  reverseList(L1);

  //Stelle 2 = (6, 5), (6 ,5)

  L1= insertFirst( L1, 3);
  L2= insertFirst( L2, 4);

  //Stelle 3 = (3, 6 , 5) (4, 6, 5)
  return 0;
}
