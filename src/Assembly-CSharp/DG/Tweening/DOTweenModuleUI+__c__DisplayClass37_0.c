
/* String <DOText>b__0() */

String * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass37_0::
         DOTweenModuleUI_c_DisplayClass37_0__DOText_b__0
                   (DOTweenModuleUI_c_DisplayClass37_0 *this,MethodInfo *method)

{
  pTVar1 = (this->fields).target;
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (String *)
             (*(pTVar1->klass->vtable).get_text.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable).get_text.method);
    return pSVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Void <DOText>b__1(String) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass37_0::
     DOTweenModuleUI_c_DisplayClass37_0__DOText_b__1
               (DOTweenModuleUI_c_DisplayClass37_0 *this,String *x,MethodInfo *method)

{
  pTVar1 = (this->fields).target;
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,x,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

