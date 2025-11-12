
/* Single <DOValue>b__0() */

float Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass33_0::
      DOTweenModuleUI_c_DisplayClass33_0__DOValue_b__0
                (DOTweenModuleUI_c_DisplayClass33_0 *this,MethodInfo *method)

{
  pSVar1 = (this->fields).target;
  if (pSVar1 != (Slider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pSVar1->klass->vtable).get_value.methodPtr)
                             (pSVar1,(pSVar1->klass->vtable).get_value.method);
    return fVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar2 = (float)(*pcVar3)();
  return fVar2;
}


/* Void <DOValue>b__1(Single) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass33_0::
     DOTweenModuleUI_c_DisplayClass33_0__DOValue_b__1
               (DOTweenModuleUI_c_DisplayClass33_0 *this,float x,MethodInfo *method)

{
  pSVar1 = (this->fields).target;
  if (pSVar1 != (Slider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar1->klass->vtable).set_value.methodPtr)
              (pSVar1,x,(pSVar1->klass->vtable).set_value.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

