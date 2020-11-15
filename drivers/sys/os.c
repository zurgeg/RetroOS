/* System driver */
/* DO NOT MESS WITH THIS */
int System_Component_FS(string cmd) {
     return 0;
}
int System_Component_Screen(string cmd) {
     return 0;
}
string Get_System_Component(string cmd) {
    if cmd.StartsWith('fs') {
        return System_Component_FS;
    }
    else if cmd.StartsWith('scr') {
        return System_Component_Sreen;
    }
    return 1;
        
int OS_Command_Call(string cmd) {
    sys_component = Get_System_Component(cmd);
    if (sys_component == 1) {
        return 1;
    };
    return sys_component(cmd);
    
