
/* Void <OnShow>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup+<>c__DisplayClass9_0::
     FirstTimeActivatableEditToolPopup_c_DisplayClass9_0__OnShow_b__0
               (FirstTimeActivatableEditToolPopup_c_DisplayClass9_0 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

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
    pFVar2 = (this->fields).__4__this;
    if (pFVar2 != (FirstTimeActivatableEditToolPopup *)0x0) {
      pGVar3 = (pFVar2->fields).stackParent;
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
        (this->fields).blocked = 0;
        return;
      }
      if (pGVar3 != (GameObject *)0x0) {
        if (pGVar1 != (GameObject *)0x0) {
          (this->fields).blocked = pGVar1 != pGVar3;
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        (this->fields).blocked = (pGVar3->fields)._.m_CachedPtr != (void *)0x0;
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pGVar1 != (GameObject *)0x0) {
        (this->fields).blocked = (pGVar1->fields)._.m_CachedPtr != (void *)0x0;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

