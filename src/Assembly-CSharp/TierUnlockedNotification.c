
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
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar1 = (this->fields).tierUnlockedText;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(4,data._0_3_);
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      data = *(Dictionary_2_System_Object_System_Object_ **)(*(int *)TVar2.m_Index + 0xdc);
      str1 = (String *)(**(code **)(*(int *)TVar2.m_Index + 0xd8))();
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral__YOU_HAVE_UNLOCKED_TIER_,str1,::StringLiteral__,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        pTVar3 = pTVar1->klass;
        data = (Dictionary_2_System_Object_System_Object_ *)
               (pTVar3->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(pTVar3->vtable).set_text.method)();
        return;
      }
    }
  }
  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

