using System;

namespace cs
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] lines = System.IO.File.ReadAllLines("../input/1.txt");
            string[] stringArray = lines[1].Split(' ');
            int[] intArray = new int[stringArray.Length];
            for (int i = 0; i < stringArray.Length; i++)
            {
                intArray[i] = Int32.Parse(stringArray[i]);
            }
            Console.WriteLine(SumArray(intArray));
        }

        static int SumArray(int[] intArray)
        {
            int sum = 0;
            foreach (int number in intArray)
            {
                sum += number;
            }
            return sum;
        }
    }
}
