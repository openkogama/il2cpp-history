
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TierUnlockedNotification::TierUnlockedNotification_Initialize
               (TierUnlockedNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__YOU_HAVE_UNLOCKED_TIER_);
    cRam_? = '\x01';
  }
  pTVar1 = this;
  this = (TierUnlockedNotification *)CONCAT13(4,this._0_3_);
  pTVar2 = (pTVar1->fields).tierUnlockedText;
  (pTVar1->fields)._.timeSinceStart = 0.0;
  pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar3 != (Object *)0x0) {
      pSVar4 = (String *)(*(pOVar3->klass->vtable).ToString.methodPtr)(pOVar3);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral__YOU_HAVE_UNLOCKED_TIER_,pSVar4,::StringLiteral__,
                          (MethodInfo *)0x0);
      if (pTVar2 != (Text *)0x0) {
        (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar4);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

