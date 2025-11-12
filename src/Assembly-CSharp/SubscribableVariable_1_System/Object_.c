
/* Void set_ValueSet(Object) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Object]::
     SubscribableVariable_1_System_Object__set_ValueSet
               (SubscribableVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._.value = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if ((this->fields)._.OnChange == (Action_1_Object_ *)0x0) {
    return;
  }
  pAVar6 = (this->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar6->fields)._._.invoke_impl)
            ((pAVar6->fields)._._.method_code,(this->fields)._.value,(pAVar6->fields)._._.method);
  return;
}

