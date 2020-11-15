void dummy_test_entrypoint() {
}

void retro_print_string(string) {
    char* video_memory = (char*) 0xb8000;
    *video_memory = string;
    return 0;
void main() {
    retro_print_string('Welcome to RetroOS');
}
