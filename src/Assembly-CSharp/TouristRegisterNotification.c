
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TouristRegisterNotification::TouristRegisterNotification_Initialize
               (TouristRegisterNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Unlock_chat_by_signing_up_here_);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).label;
  (this->fields)._.timeSinceStart = 0.0;
  pSVar2 = TM::TM__(StringLiteral_Unlock_chat_by_signing_up_here_,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).tertiaryNotificationUI;
    l = (*(code *)(this->klass->vtable).get_Lifetime.method)
                  (this,(this->klass->vtable).Initialize.methodPtr);
    if (this_00 != (TertiaryNotificationUI *)0x0) {
      TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                (this_00,(Notification *)this,l,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

