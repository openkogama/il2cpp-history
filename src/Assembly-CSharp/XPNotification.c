
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
  n = this;
  this = (XPNotification *)CONCAT13(4,this._0_3_);
  (n->fields)._.timeSinceStart = 0.0;
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_01 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      pSVar3 = (String *)
               (**(code **)(*(int *)TVar2.m_Index + 0xd8))
                         (TVar2.m_Index,*(undefined4 *)(*(int *)TVar2.m_Index + 0xdc));
      iVar4 = mscorlib.dll::System::Int32::Int32_Parse(pSVar3,(MethodInfo *)0x0);
      uStack_5 = 0x14;
      pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&uStack_5);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                );
      IStack_6.m_value = iVar4 + 10;
      IStack_7.m_value = IStack_6.m_value - iVar4;
      pTVar8 = (n->fields).AmountLabel;
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar3,StringLiteral__XP_,(MethodInfo *)0x0);
      if (pTVar8 != (Text *)0x0) {
        (*(code *)(pTVar8->klass->vtable).set_text.method)
                  (pTVar8,pSVar3,(pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        if (-1 < IStack_7.m_value) {
          pTVar8 = (n->fields).BoostLabel;
          pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__i__,pSVar3,StringLiteral__from_boost___i_,
                              (MethodInfo *)0x0);
          if (pTVar8 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar8->klass->vtable).set_text.method)
                    (pTVar8,pSVar3,
                     (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        }
        this_00 = (n->fields).tertiaryNotificationUI;
        l = (*(code *)(n->klass->vtable).get_Lifetime.method)
                      (n,(n->klass->vtable).Initialize.methodPtr);
        if (this_00 != (TertiaryNotificationUI *)0x0) {
          TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                    (this_00,(Notification *)n,l,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

