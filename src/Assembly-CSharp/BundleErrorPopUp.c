
/* Void Initialize(UnityAction`1[System.Boolean], String, String) */

void Assembly-CSharp.dll::BundleErrorPopUp::BundleErrorPopUp_Initialize
               (BundleErrorPopUp *this,UnityAction_1_System_Boolean_ *resultCallback,String *header,
               String *buttonText,MethodInfo *method)

{
  pTVar1 = (this->fields).buttonText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,buttonText,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).header;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,header,(pTVar1->klass->vtable).set_text.method);
      bVar2 = iRam_? != 0;
      (this->fields).resultCallback = resultCallback;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).resultCallback >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnButtonPressed() */

void Assembly-CSharp.dll::BundleErrorPopUp::BundleErrorPopUp_OnButtonPressed
               (BundleErrorPopUp *this,MethodInfo *method)

{
  pUVar1 = (this->fields).resultCallback;
  if (pUVar1 != (UnityAction_1_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?(0,(char)method);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnExit() */

void Assembly-CSharp.dll::BundleErrorPopUp::BundleErrorPopUp_OnExit
               (BundleErrorPopUp *this,MethodInfo *method)

{
  pUVar1 = (this->fields).resultCallback;
  if (pUVar1 != (UnityAction_1_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,0,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

