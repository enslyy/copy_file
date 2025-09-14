
int copy(const char* src_path, const char* dest_path) {
    FILE* src_file = fopen(src_path, "rb");
    FILE* dest_file = fopen(dest_path, "wb");

    if (src_file == NULL || dest_file == NULL) {
        if (src_file) fclose(src_file);
        if (dest_file) fclose(dest_file);
        return 1;
    }

    char buffer[4096];
    size_t bytes_read;

    while ((bytes_read = fread(buffer, 1, sizeof(buffer), src_file)) > 0) {
        fwrite(buffer, 1, bytes_read, dest_file);
    }

    fclose(src_file);
    fclose(dest_file);
    return 0;
}