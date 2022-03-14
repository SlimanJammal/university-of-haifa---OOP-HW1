//             Created by Sliman Jammal          //
/** there are 11 tests, the outputs are printed to a new file named "my_output.txt",
  you should pass all the tests and get the message  "yeppeeeeeeeee ALL tests SUCCEEDED"
  ,then diffmerge the file "my_output" to the file "expected_output", enjoy :) **/


#include <fstream>
#include<string>
#include "Cpu.h"
#include "Computer.h"
#include "Store.h"

using std::string;
using std::cout;
using std::endl;


int main(){

    freopen("my_output.txt", "w", stdout);

    int number_of_tests_succeeded = 0;
    int tests[11];

    for(int i=0; i < 11; i++){
        tests[i] = 0;
    }



    Cpu cpu1;
    cpu1.setClockRate(2.4);
    cpu1.setManufacturer("Intel");
    cpu1.setYear(2021);

    Cpu cpu2(3.8, "AMD", 2019);

    Cpu cpu3;
    cpu3.setClockRate(3.4);
    cpu3.setManufacturer("Apple");
    cpu3.setYear(2020);

    Cpu emptyCpu;


    cout << endl << endl<< endl;
    cout << "/*************************************************** CPU CLASS CHECKING ************************/";
    cout << endl << endl<< endl;
    /*************************************************** CPU CLASS CHECKING ************************/


 // clock_rate

 if((cpu1.getClockRate() != 2.4) || (cpu2.getClockRate() != 3.8) || (cpu3.getClockRate() != 3.4 )
 || (emptyCpu.getClockRate() != 0)){

     std::cout << "clock rate test failed"<<std::endl;
 } else {
     number_of_tests_succeeded++;
     tests[0] = 1;
     std::cout << " ************** test 1 success ************** "<<std::endl;
 }



// cpu_manufacturer

 if((cpu1.getManufacturer() == "Intel" ) && (cpu2.getManufacturer() == "AMD" ) && (cpu3.getManufacturer() == "Apple" )
                                                                                    && (emptyCpu.getManufacturer() == "~" ) ){

     cpu1.setManufacturer("lenovoooooooooooooooooooooooooooooooooooooooooooooo");

     if(cpu1.getManufacturer() == "~"){

         number_of_tests_succeeded++;
         tests[1] = 1;
         std::cout << " ************** test 2 success ************** " << std::endl;
         cpu1.setManufacturer("Intel");

     } else{
         std::cout << "cpu_manufacturer test failed"<<std::endl;
       }



 }else {

     std::cout << "cpu_manufacturer test failed"<<std::endl;
     }



// cpu_year

if((cpu1.getYear() == 2021) && (cpu2.getYear() == 2019) && (cpu3.getYear() == 2020) && (emptyCpu.getYear() == 0) ){

    tests[2] = 1;
    std::cout << " ************** test 3 success ************** "<<std::endl;
    number_of_tests_succeeded++;

}else{

    std::cout << "cpu_year failed"<<std::endl;

}



    std::cout <<std::endl<<std::endl<<std::endl<<std::endl;


// cpu_print

    cout << "Cpu 1 details:" << endl;
    cpu1.print();

    cout << "Cpu 2 details:" << endl;
    cpu2.print();

    cout << "Cpu 3 details:" << endl;
    cpu3.print();

    cout << "emptyCpu details:" << endl;
    emptyCpu.print();




    cout << endl << endl<< endl;
    cout << "/********************************* Computer Class testing ************************************/";
    cout << endl << endl<< endl;

/********************************* Computer Class testing ************************************/


    Cpu RISC(0.59, "IBM", 1989);
    Cpu TSL(12,"SpaceX",2049);


    Computer computer1;
    computer1.setManufacturer("Apple");
    computer1.setYear(2022);
    computer1.setColor("Silver");
    computer1.setCpu(cpu1);
    computer1.setIsLaptop(false);



    Computer computer2;
    computer2.setManufacturer("Apple");
    computer2.setYear(2020);
    computer2.setColor("RoseGold");
    computer2.setCpu(cpu3);
    computer2.setIsLaptop(true);


    Computer computer3;
    computer3.setManufacturer("DELL");
    computer3.setYear(2022);
    computer3.setColor("Gray");
    computer3.setCpu(cpu1);
    computer3.setIsLaptop(true);

    Cpu brain(200,"Siiiiiiii",1985);


    Computer computer4(cpu2, "HP", 2020, "Red",true);
    Computer computer5(cpu1, "Lenovo", 2022, "Blue",true);
    Computer computer6(RISC, "IBM", 1990, "Silver",false);
    Computer computer7(brain, "Maria", 1985, "Ronaldo",false);
    Computer computer8(RISC, "ACER", 1995, "Red",false);
    Computer computer9(TSL, "TESLA", 2050, "Gold",true);
    Computer computer10;




// computer_manufacturer

    if((computer1.getManufacturer() == "Apple")  && (computer4.getManufacturer() == "HP") && (computer10.getManufacturer() == "~")){

        computer5.setManufacturer("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaNO");
        if(computer5.getManufacturer() == "~"){
            computer5.setManufacturer("Lenovo");
            number_of_tests_succeeded++;
            tests[3] = 1;
            std::cout << " ************** test 4 success ************** "<<std::endl;
        } else {

            std::cout << "4 failed - manufacturer "<<std::endl;

        }

    }




// computer_cpu


if((computer4.getCpu().getManufacturer() == "AMD") && (computer4.getCpu().getYear() == 2019) && (computer4.getCpu().getClockRate() == 3.8) &&
        (computer3.getCpu().getManufacturer() == "Intel") && (computer3.getCpu().getYear() == 2021) && (computer3.getCpu().getClockRate() == 2.4)
        && (computer10.getCpu().getManufacturer() == "~") && (computer10.getCpu().getYear() == 0) && (computer10.getCpu().getClockRate() == 0)  ){

    std::cout << " ************** test 5 success ************** "<<std::endl;
    tests[4] = 1;
    number_of_tests_succeeded++;

}else{
    std::cout << "test 5 failed - computer_cpu"<<std::endl;                                      // CHECK CPU SET FOR COMPUTER AND CPU GET
}




// COMPUTER_YEAR



if((computer1.getYear() == 2022 )  && (computer4.getYear() == 2020) && (computer10.getYear() == 0)){

    std::cout << " ************** test 6 success ************** "<<std::endl;
    tests[5] = 1;
    number_of_tests_succeeded++;

}else{

    std::cout << "test 6 failed - COMPUTER_YEAR"<<std::endl;

}

// computer_color

if((computer1.getColor() == "Silver" )  && (computer4.getColor() == "Red") && (computer10.getColor() == "~")){

        tests[6] = 1;
        std::cout << " ************** test 7 success ************** "<<std::endl;
        number_of_tests_succeeded++;

}else{

        std::cout << "test 7 failed - computer_color"<<std::endl;

}


// computer_is_laptop


if(!computer1.getIsLaptop() && computer4.getIsLaptop() && !computer10.getIsLaptop()){

        tests[7] = 1;
        std::cout << " ************** test 8 success ************** "<<std::endl;
        number_of_tests_succeeded++;

}else{

        std::cout << "test 8 failed - computer_is_laptop"<<std::endl;

}




    cout << endl << "Computer printer checking... " << endl<< endl<< endl;


computer1.print();
computer6.print();
computer10.print();




    cout << endl << endl<< endl;
    cout << "/************************************Store Testing***************************************/";
    cout << endl << endl<< endl;

/************************************Store Testing***************************************/




    Store store("Hello everyone and welcome to my store - sir you can't park here");


   // store name default
    if(store.getName() == "~"){

        tests[8] = 1;
        cout<< " ************** test 9 success ************** "<<endl;
        number_of_tests_succeeded++;

    }else {

        cout<< "test 9 failed - store name + number fields "<<endl;

    }
    cout << store.getName() << endl;
    Store store2;
    cout << store2.getName() << endl;

    cout << endl << endl<< endl;
    store.setName("SuperStore");
    cout << store.getName() << endl;



    // store name + number fields

    if(store.getNumber() == 0 && store.getName() == "SuperStore"){

        store.setName("Can I get a Siiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii");
        if(store.getName() == "~") {

            tests[9] = 1;
            cout << " ************** test 10 success ************** " << endl;
            number_of_tests_succeeded++;

        } else {

            cout<< "test 10 failed - store name + number fields "<<endl;

        }
    }else {

        cout<< "test 10 failed - store name + number fields "<<endl;

    }


    store.setName("SuperStore");

    store.addComputer(computer1);
    store.addComputer(computer2);
    store.addComputer(computer3);
    store.addComputer(computer4);
    store.addComputer(computer5);
    store.addComputer(computer6);
    store.addComputer(computer7);
    store.addComputer(computer8);
    store.addComputer(computer9);
    store.addComputer(computer10);






 /************************* very important note -  check "get function"'s name if it's the same
 (this one gets the array of computers in store) ************************/
 //store test
    if((store.getComputers()[0].getCpu().getManufacturer() == "Intel") &&( store.getComputers()[6].getColor() =="Ronaldo")){

        tests[10] = 1;
        cout << " ************** test 11 success ************** " << endl;
        number_of_tests_succeeded++;

    } else {
        cout << "test 11 failed - store test" << endl;
    }

    cout<< endl<<endl<<endl;
    cout << "                     Computers in store 1 Sorted By Name:" << endl<<endl<<endl;
    store.printComputersByName();


    cout<< endl<<endl<<endl;




    cout << "                     Computers in store 1 Sorted By Year:" << endl<<endl<<endl;
    store.printComputersByYear();


    cout<< endl<<endl<<endl;




    cout<<"Tests Summary"<<endl;
    for(int i=0; i < 11; i++){
        if(tests[i]){

            cout<< "Test "<<i+1<<" succeeded."<<endl;

        } else {
            cout<< "Test "<<i+1<<" failed."<<endl;
        }
    }
    cout << endl<< endl;
    //number_of_tests_succeeded++;
    cout<< number_of_tests_succeeded << "   passed out of   11"<<endl;
    if(number_of_tests_succeeded == 11){

        cout<< "yeppeeeeeeeee ALL tests SUCCEEDED"<<endl;


    }else {

        cout<< "DNF, try again."<<endl;
        cout<<"Sir, you can't park here "<<endl; // https://www.youtube.com/shorts/v6dPiUfTXDY //
    }




    return 0;
}





//             Created by Sliman Jammal          //