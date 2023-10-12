 23 #include <stdio.h>
 22 #include <cjson/cJSON.h>
 21
 20 int main() {
 19     printf("hellow json\n");
 18     cJSON *json = cJSON_CreateObject();
 17     cJSON_AddStringToObject(json, "name", "Ashok Sharma");
 16     cJSON_AddNumberToObject(json, "age", 35);
 15
 14     char *json_str = cJSON_Print(json);
 13
 12     FILE *fp = fopen("data.jason", "w");
 11     if(fp == NULL) {
 10         printf("error: unable to open the file.\n");
  9         return 1;
  8     }
  7     printf("%s\n", json_str);
  6     fputs(json_str, fp);
  5     fclose(fp);
  4
  3     cJSON_free(json_str);
  2     cJSON_Delete(json);
  1     return 0;
  0 }
