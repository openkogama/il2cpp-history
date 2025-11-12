
/* Boolean get_IsSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper+InputSuppression::
     MVInputWrapper_InputSuppression_get_IsSuppressed
               (MVInputWrapper_InputSuppression *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  iVar4 = iVar4 - (this->fields).suppressionFrame;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar5 = -iVar4;
  if (iVar5 < 0) {
    iVar5 = iVar4;
  }
  return iVar5 < 2;
}


/* MVInputWrapper+InputSuppression op_Implicit(Boolean) */

MVInputWrapper_InputSuppression *
Assembly-CSharp.dll::MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression_op_Implicit
          (bool a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  (*(pMVar1->klass->vtable).set_IsSuppressed.methodPtr)
            (pMVar1,(ulonglong)a,(pMVar1->klass->vtable).set_IsSuppressed.method);
  return pMVar1;
}


/* Boolean op_Implicit(MVInputWrapper+InputSuppression) */

bool Assembly-CSharp.dll::MVInputWrapper+InputSuppression::
     MVInputWrapper_InputSuppression_op_Implicit_1
               (MVInputWrapper_InputSuppression *a,MethodInfo *method)

{
  if (a != (MVInputWrapper_InputSuppression *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*(a->klass->vtable).get_IsSuppressed.methodPtr)
                      (a,(a->klass->vtable).get_IsSuppressed.method);
    return bVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void set_IsSuppressed(Boolean) */

void Assembly-CSharp.dll::MVInputWrapper+InputSuppression::
     MVInputWrapper_InputSuppression_set_IsSuppressed
               (MVInputWrapper_InputSuppression *this,bool value,MethodInfo *method)

{
  if (value == 0) {
    iVar1 = 0;
  }
  else {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    iVar1 = (*pcRam_?)();
  }
  if (this == (MVInputWrapper_InputSuppression *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->fields).suppressionFrame = iVar1;
  return;
}

