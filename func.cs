using System;

namespace passingpram
{
	clas func
	{
		static void MyMethodref(ref int number)
		{
			number += 20;
			Console.WriteLine("Value Inner Method : {0}", number);
		}

		static void Main(string[] args)
		{
			int num = 10;
			MyMethodref(ref num)
			Console.WriteLine("Value Outer Method : {0}", num);
		}
	}
}