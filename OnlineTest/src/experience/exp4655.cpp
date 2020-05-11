/*
循环控制结构。预测多人身高。
任务说明：使用标记控制的循环实现当预测一个人的身高完成后，程序给出提示信息："Do you want to continue(y(Y)|n(N))?" ，用户 输入y或Y表示继续预测下一个人的身高，输入n或N表示程序不再继续执行，程序执行结束。用字符变量 replay 来存放用户输入的字符 y|Y 或 n|N 。
预测一个人身高的要求如下（注意与前面预测一个人身高的题目要求不同）：
每个做父母的都关心自己孩子成人后的身高，据有关生理卫生知识与数理统计分析表明，影响小孩成人后的身高的因素包括遗传、饮食习惯与体育锻炼等。小孩成人后的身高与其父母的身高和自身的性别密切相关。
设faHeight为其父身高，moHeight为其母身高，yourHeight为被测人身高。基础身高预测公式为：
男性成人时基础身高yourHeight= (faHeight+moHeight) × 0.54cm
女性成人时基础身高yourHeight= (faHeight× 0.923 +moHeight)/2cm
此外，如果只喜爱体育锻炼，那么在基础身高上可增加身高2%；
如果只有良好的卫生饮食习惯，那么在基础身高上可增加身高1.5%；
如果即喜爱体育锻炼又有良了的卫生饮食习惯，那么在基础身高上可增加身高3.5%；
要求：
1）编程从键盘输入用户的性别，输入字符F或f表示女性，输入字符M或m表示男性；
2）父母身高单位是厘米）；
3）是否喜爱体育锻炼，输入字符Y或y表示喜爱，输入字符N或n表示不喜爱；
4）是否有良好的饮食习惯等条件，输入字符Y或y表示良好，输入字符N或n表示不好。
请利用给定公式和身高预测方法对身高进行预测，并以整数形式输出预测身高。
程序运行结果如下：
Input your gender(m|f|M|F):f↙
Input your father's height(cm):174↙
Input your mother's height(cm):156↙
Do you like sports?(y|n|Y|N):y↙
Do you have good diet?(y|n|Y|N):n↙
Your Height will be:161
Do you want to continue?(y(Y)|n(N)):y↙
Input your gender(m|f|M|F):f↙
Input your father's height(cm):174↙
Input your mother's height(cm):156↙
Do you like sports?(y|n|Y|N):y↙
Do you have good diet?(y|n|Y|N):n↙
Your Height will be:161
Do you want to continue?(y(Y)|n(N)):n↙
over!*/
//#include<iostream>
//using namespace std;
//int main()
//{
//    float faHeight, moHeight, yourHeight;//提示。你可能还需要其他变量帮助你计算，也可以自行设计变量名称
//    char gender, likeSport, goodDiet;
//    int flag = 1;
//    while (flag == 1) {
//        cout << "Input your gender(m|f|M|F):";
//        cin >> gender;
//        cout << "Input your father's height(cm):";
//        cin >> faHeight;
//        cout << "Input your mother's height(cm):";
//        cin >> moHeight;
//
//        //根据性别计算基础身高
//        if (gender == 'm' || gender == 'M')
//        {
//            //在此输入计算男生身高的代码
//            yourHeight = (faHeight + moHeight) * 0.54;
//        }
//        else
//        {
//            //在此输入计算女生身高的代码
//            yourHeight = (faHeight * 0.923 + moHeight) / 2;
//        }
//
//        //依据是否喜欢运动计算身高
//        cout << "Do you like sports?(y|n|Y|N):";
//        cin >> likeSport;
//        //依据是否有良好的饮食习惯计算身高
//        cout << "Do you have good diet?(y|n|Y|N):";
//        cin >> goodDiet;
//        if (likeSport == 'y' || likeSport == 'Y')
//        {
//            if (goodDiet == 'y' || goodDiet == 'Y')
//            {
//                yourHeight *= 1.035;
//            }
//            else {
//                yourHeight *= 1.02;
//            }
//        }
//        else
//        {
//            if (goodDiet == 'y' || goodDiet == 'Y')
//            {
//                yourHeight *= 1.015;
//            }
//        }
//
//        
//
//        cout << "Your Height will be:" << int(yourHeight) << endl;
//        cout << "Do you want to continue?(y(Y)|n(N)):";
//        //to do
//        char isConn;
//        cin >> isConn;
//        if (isConn=='n'||isConn=='N') {
//            //to do
//            cout << "over!" << endl;
//            break;
//        }
//    }
//    return 0;
//}