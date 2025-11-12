
/* Void <DOCounter>b__1(Int32) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass35_0::
     DOTweenModuleUI_c_DisplayClass35_0__DOCounter_b__1
               (DOTweenModuleUI_c_DisplayClass35_0 *this,int32_t x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).v = x;
  pTVar1 = (this->fields).target;
  if ((this->fields).addThousandsSeparator == 0) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this->fields,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString_3
                       ((Int32 *)&this->fields,StringLiteral_N0,
                        (IFormatProvider *)(this->fields).cInfo,(MethodInfo *)0x0);
  }
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

