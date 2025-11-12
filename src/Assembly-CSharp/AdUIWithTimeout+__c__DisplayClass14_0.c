
/* Void <PopInterstitial>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIWithTimeout+<>c__DisplayClass14_0::
     AdUIWithTimeout_c_DisplayClass14_0__PopInterstitial_b__0
               (AdUIWithTimeout_c_DisplayClass14_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pGVar1 = (GameObject *)FUN_?(7,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    pAVar2 = (this->fields).__4__this;
    if (pAVar2 != (AdUIWithTimeout *)0x0) {
      pGVar3 = (pAVar2->fields).overlayPushedToStack;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0 && pGVar3 == (GameObject *)0x0) {
        (this->fields).stackBlocked = 0;
        return;
      }
      if (pGVar3 != (GameObject *)0x0) {
        if (pGVar1 != (GameObject *)0x0) {
          (this->fields).stackBlocked = pGVar1 != pGVar3;
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        (this->fields).stackBlocked = (pGVar3->fields)._.m_CachedPtr != (void *)0x0;
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pGVar1 != (GameObject *)0x0) {
        (this->fields).stackBlocked = (pGVar1->fields)._.m_CachedPtr != (void *)0x0;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

