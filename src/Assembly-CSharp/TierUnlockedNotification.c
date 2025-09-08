
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
  this_01 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar1 = (this->fields).tierUnlockedText;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(4,data._0_3_);
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      str1 = (String *)(**(code **)(*(int *)TVar2.m_Index + 0xd8))();
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral__YOU_HAVE_UNLOCKED_TIER_,str1,::StringLiteral__,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
        this_00 = (this->fields).tertiaryNotificationUI;
        l = (*(code *)(this->klass->vtable).get_Lifetime.method)
                      (this,(this->klass->vtable).Initialize.methodPtr);
        if (this_00 != (TertiaryNotificationUI *)0x0) {
          TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                    (this_00,(Notification *)this,l,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

