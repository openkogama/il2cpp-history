
/* Void UpdateToggleState() */

void Assembly-CSharp.dll::ToggleStateHandlerTransparent::
     ToggleStateHandlerTransparent_UpdateToggleState
               (ToggleStateHandlerTransparent *this,MethodInfo *method)

{
  if ((this->fields)._.usingImageComponent == 0) {
    this_00 = (this->fields)._.button;
    if (this_00 == (Button *)0x0) goto code_?;
    pIVar1 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)this_00,(MethodInfo *)0x0);
  }
  else {
    pIVar1 = (this->fields)._.imageComponent;
  }
  if (pIVar1 != (Image *)0x0) {
    puVar2 = (undefined4 *)
             (*(code *)(pIVar1->klass->vtable).get_color.method)
                       (&uStack_3,pIVar1,(pIVar1->klass->vtable).set_color.methodPtr);
    uStack_3 = *puVar2;
    uStack_4 = puVar2[1];
    uStack_5 = puVar2[2];
    fStack_6 = (&(this->fields).toggled)[(this->fields)._.toggleState == 0];
    (*(code *)(pIVar1->klass->vtable).set_color.method)
              (pIVar1,uStack_3,uStack_4,uStack_5,fStack_6,
               (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* ToggleStateHandlerTransparent() */

void Assembly-CSharp.dll::ToggleStateHandlerTransparent::ToggleStateHandlerTransparent__ctor
               (ToggleStateHandlerTransparent *this,MethodInfo *method)

{
  (this->fields).toggled = 1.0;
  (this->fields).notToggled = 0.3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

