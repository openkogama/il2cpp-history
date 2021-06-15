
/* Void Initialize(UnityAction`1[System.Boolean], String, String) */

void Assembly-CSharp.dll::BundleErrorPopUp::BundleErrorPopUp_Initialize
               (BundleErrorPopUp *this,UnityAction_1_System_Boolean_ *resultCallback,String *header,
               String *buttonText,MethodInfo *method)

{
  pTVar1 = (this->fields).buttonText;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,buttonText,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
    ;
    pTVar1 = (this->fields).header;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,header,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      (this->fields).resultCallback = resultCallback;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnButtonPressed() */

void Assembly-CSharp.dll::BundleErrorPopUp::BundleErrorPopUp_OnButtonPressed
               (BundleErrorPopUp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).resultCallback;
  if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke
              (this_00,1,MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnExit() */

void Assembly-CSharp.dll::BundleErrorPopUp::BundleErrorPopUp_OnExit
               (BundleErrorPopUp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).resultCallback;
  if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke
              (this_00,0,MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

