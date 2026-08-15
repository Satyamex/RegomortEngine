#ifndef TIME_H
#define TIME_H

float GetTime();
float GetDeltaTime();

// C wrapper
#ifdef __cplusplus
extern "C" {
#endif

float re_get_time(void);
float re_get_deltatime(void);

#ifdef __cplusplus
}
#endif

#endif
