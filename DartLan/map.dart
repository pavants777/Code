
void main()
{
  Map<int,int> mp = {     // key : value 
     1 : 2,
     2 : 3,
     3 : 4,
     4 : 5,
     5 : 6,
     7 : 8,
     8 : 9,
     9 : 0,
     0 : 1,
  };

  final list = mp.entries.where((e)=>e.key%2==0).map((e)=>e.key).toList()..sort();
  print(list);
}
