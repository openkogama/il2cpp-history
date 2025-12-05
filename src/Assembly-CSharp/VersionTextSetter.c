
/* Void SetText() */

void Assembly-CSharp.dll::VersionTextSetter::VersionTextSetter_SetText
               (VersionTextSetter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000Av__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).textObject;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_TextOverhaul);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = StringLiteral_TextOverhaul;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__3_2_10);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_5
                     (pSVar2,StringLiteral_u000Av__,StringLiteral__3_2_10,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

