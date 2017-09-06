using System;
using System.Linq;

namespace cs
{
    class Program
    {
        static void Main(string[] args)
        {
            string path = "../input/1.txt";
            string[] stringArray = GetFileLines(path)[1].Split(' ');
            int[] intArray = ConvertArray(stringArray);
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

        static string[] GetFileLines(string path)
        {
            return System.IO.File.ReadAllLines(path);
        }

        static int[] ConvertArray(string[] stringArray)
        {
            return stringArray.Select(element => Int32.Parse(element)).ToArray();
        }
    }
}
