
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TierUnlockedNotification::TierUnlockedNotification_Initialize
               (TierUnlockedNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__YOU_HAVE_UNLOCKED_TIER_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).tierUnlockedText;
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 4;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      pSVar3 = (String *)
               (*(pOVar2->klass->vtable).ToString.methodPtr)
                         (pOVar2,(pOVar2->klass->vtable).ToString.method);
      pSVar3 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral__YOU_HAVE_UNLOCKED_TIER_,pSVar3,::StringLiteral__,
                          (MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)
                  (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method);
        this_00 = (this->fields).tertiaryNotificationUI;
        l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                      (this,(this->klass->vtable).get_Lifetime.method);
        if (this_00 != (TertiaryNotificationUI *)0x0) {
          TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                    (this_00,(Notification *)this,l,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

