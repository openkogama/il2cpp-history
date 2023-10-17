
/* Void <CreatePopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIOverlay+<>c__DisplayClass8_0::
     AdUIOverlay_c_DisplayClass8_0__CreatePopup_b__0
               (AdUIOverlay_c_DisplayClass8_0 *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 0;
    bVar4 = func_?();
    (this->fields).stackReady = bVar4;
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar5 = func_?(&uStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <CreatePopup>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIOverlay+<>c__DisplayClass8_0::
     AdUIOverlay_c_DisplayClass8_0__CreatePopup_b__1
               (AdUIOverlay_c_DisplayClass8_0 *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).__4__this;
  if (pAVar1 != (AdUIOverlay *)0x0) {
    original = (pAVar1->fields).adBackground;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pOVar2,4,0,0x20);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

