//
// Created by XuanyiHuang on 2021/10/8.
//

#ifndef SWIG_SWIG_STRING_H
#define SWIG_SWIG_STRING_H
typedef struct {
    DOH *file;
    int line;
    int maxsize;            /* Max size allocated */
    int len;            /* Current length     */
    int hashkey;            /* Hash key value     */
    int sp;            /* Current position   */
    char *str;            /* String data        */
} SwigString; //Keep SwigString the same as String in string.c for better debugging.
#endif //SWIG_SWIG_STRING_H
