using System;

namespace Codeforces {
    class Problem_1926A {
        static void Main(string[] args){
            int t = Convert.ToInt32(Console.ReadLine());

            for(int i=0; i<t; i++){
                int a = 0;
                int b = 0;
                string s = Console.ReadLine();

                for(int j=0; j<5; j++){
                    if(s[j] == 'A'){
                        a++;
                    }else if(s[j] == 'B'){
                        b++;
                    }
                }

                if(a > b){
                    Console.WriteLine("A");
                }else {
                    Console.WriteLine("B");
                }
            }
        }
    }
}