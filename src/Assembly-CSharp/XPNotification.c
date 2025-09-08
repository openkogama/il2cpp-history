
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::XPNotification::XPNotification_Initialize
               (XPNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__XP_);
    func_?(&StringLiteral__i__);
    func_?(&StringLiteral__from_boost___i_);
    cRam_? = '\x01';
  }
  this_01 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(4,data._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      pSVar3 = (String *)(**(code **)(*(int *)TVar2.m_Index + 0xd8))();
      mscorlib.dll::System::Int32::Int32_Parse(pSVar3,(MethodInfo *)0x0);
      pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                );
      pTVar4 = (this->fields).AmountLabel;
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
      IVar5.m_value =
           (int32_t)mscorlib.dll::System::String::String_Concat_3
                              (pSVar3,StringLiteral__XP_,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        (*(code *)(pTVar4->klass->vtable).set_text.method)();
        if (-1 < IVar5.m_value) {
          pTVar4 = (this->fields).BoostLabel;
          pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
          mscorlib.dll::System::String::String_Concat_4
                    (StringLiteral__i__,pSVar3,StringLiteral__from_boost___i_,(MethodInfo *)0x0);
          if (pTVar4 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar4->klass->vtable).set_text.method)();
        }
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
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

