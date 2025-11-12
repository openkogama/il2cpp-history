
/* Void <CreatePopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIOverlay+<>c__DisplayClass8_0::
     AdUIOverlay_c_DisplayClass8_0__CreatePopup_b__0
               (AdUIOverlay_c_DisplayClass8_0 *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    bVar1 = FUN_?(0,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    (this->fields).stackReady = bVar1;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <CreatePopup>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIOverlay+<>c__DisplayClass8_0::
     AdUIOverlay_c_DisplayClass8_0__CreatePopup_b__1
               (AdUIOverlay_c_DisplayClass8_0 *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).__4__this;
  if (pAVar1 != (AdUIOverlay *)0x0) {
    original = (pAVar1->fields).adBackground;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
              ((Object *)original,
               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
              );
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

