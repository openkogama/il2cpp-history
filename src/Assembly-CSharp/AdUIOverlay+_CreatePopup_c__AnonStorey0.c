
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIOverlay+<CreatePopup>c__AnonStorey0::
     AdUIOverlay_CreatePopup_c_AnonStorey0___m__0
               (AdUIOverlay_CreatePopup_c_AnonStorey0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    bVar1 = func_?(0,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    (this->fields).stackReady = bVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIOverlay+<CreatePopup>c__AnonStorey0::
     AdUIOverlay_CreatePopup_c_AnonStorey0___m__1
               (AdUIOverlay_CreatePopup_c_AnonStorey0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._this;
  if (pAVar1 != (AdUIOverlay *)0x0) {
    pXVar2 = (XpBoostParticlePreviewer *)(pAVar1->fields).adBackground;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar2,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pXVar2,4,0,0x20);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

