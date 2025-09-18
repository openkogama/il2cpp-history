
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
  n = this;
  this = (TierUnlockedNotification *)CONCAT13(4,this._0_3_);
  pTVar1 = (n->fields).tierUnlockedText;
  (n->fields)._.timeSinceStart = 0.0;
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      pSVar3 = (String *)
               (**(code **)(*(int *)TVar2.m_Index + 0xd8))
                         (TVar2.m_Index,*(undefined4 *)(*(int *)TVar2.m_Index + 0xdc));
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral__YOU_HAVE_UNLOCKED_TIER_,pSVar3,::StringLiteral__,
                          (MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,pSVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

