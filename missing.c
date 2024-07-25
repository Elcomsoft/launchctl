#ifdef HAVE_CONFIG_H
#   include <config.h>

#   ifndef HAVE___ISPLATFORMVERSIONATLEAST
int __isPlatformVersionAtLeast(void){
    return 1;
}
#   endif //HAVE___ISPLATFORMVERSIONATLEAST

#endif //HAVE_CONFIG_H
