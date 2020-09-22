#ifndef APPLICATION_H
#define	APPLICATION_H

#ifdef	__cplusplus
extern "C" {
#endif
    void ApplicationInit(void);
    void ApplicationTask(void);
    void CheckSleepMode(void);
    void FillFSMstate(void);
    void FillDispenseData(void);
    void CLC_DefaultState();
    void lcd_put_init_message(void);

#ifdef	__cplusplus
}
#endif

#endif	/* APPLICATION_H */

