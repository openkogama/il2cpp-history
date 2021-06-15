
/* Void UpdateToggleState() */

void Assembly-CSharp.dll::ToggleStateHandlerTransparent::
     ToggleStateHandlerTransparent_UpdateToggleState
               (ToggleStateHandlerTransparent *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._.button;
  if (pBVar1 != (Button *)0x0) {
    pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)pBVar1,(MethodInfo *)0x0);
    if (pIVar2 != (Image *)0x0) {
      pIStack_3 = (pIVar2->klass->vtable).set_color.methodPtr;
      puVar4 = (undefined4 *)(*(code *)(pIVar2->klass->vtable).get_color.method)(&pIStack_3,pIVar2)
      ;
      pIStack_3 = (Il2CppMethodPointer)*puVar4;
      uStack_5 = puVar4[1];
      uStack_6 = puVar4[2];
      uStack_7 = puVar4[3];
      if ((this->fields)._.toggleState == 0) {
        fVar8 = (this->fields).notToggled;
      }
      else {
        fVar8 = (this->fields).toggled;
      }
      pBVar1 = (this->fields)._.button;
      if (pBVar1 != (Button *)0x0) {
        pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                           ((Selectable *)pBVar1,(MethodInfo *)0x0);
        pIVar9 = pIStack_3;
        pIStack_10 = pIStack_3;
        uStack_11 = uStack_5;
        uStack_12 = uStack_6;
        fStack_13 = fVar8;
        if (pIVar2 != (Image *)0x0) {
          pIStack_3 = (pIVar2->klass->vtable).get_raycastTarget.methodPtr;
          (*(code *)(pIVar2->klass->vtable).set_color.method)
                    (pIVar2,pIVar9,uStack_5,uStack_6,fVar8);
          return;
        }
      }
    }
  }
  pIStack_3 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* ToggleStateHandlerTransparent() */

void Assembly-CSharp.dll::ToggleStateHandlerTransparent::ToggleStateHandlerTransparent__ctor
               (ToggleStateHandlerTransparent *this,MethodInfo *method)

{
  (this->fields).toggled = 1.0;
  (this->fields).notToggled = 0.3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

