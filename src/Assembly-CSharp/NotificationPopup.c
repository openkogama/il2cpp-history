
/* Void Initialize(String, String) */

void Assembly-CSharp.dll::NotificationPopup::NotificationPopup_Initialize
               (NotificationPopup *this,String *text,String *header,MethodInfo *method)

{
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,text,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).header;
    if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,header,(pTVar1->klass->vtable).set_text.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

