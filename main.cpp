#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctype.h>

int main(int argc, char** argv){
 
    printf("Mayank Kumar (c) 2019. C++ binary execution tool. \n");
    printf("USAGE : cxxtool \"FULL FILE LOCATION\"\n");
    if(argc > 2) printf("More than one arguments. Error 101.\n");
    else if( argc == 1) printf("Only one argument. ERROR 102.\n");
    else{
        std::string arg ( argv[1]),cmd = "/mnt/";
        cmd = cmd + (char)(tolower(arg.at(0)));
        arg.erase(0,2);
        cmd = cmd + arg;
        std::cout<<"Arg : "<< arg <<std::endl;
        for(int i = 0 ; i < cmd.length() ; i++){
            if(cmd[i]=='\\')
            cmd[i] = '/';
            if(cmd[i]==' '){
                cmd[i] = '\\';
                cmd.insert(i+1," ");
                i++;
            }
      
        
            
        }
        cmd = "start C:/windows/sysnative/wsl "+cmd;
          std::cout<<"Cmd : "<<cmd << std::endl;
          
     system(cmd.c_str());
    }    
}
