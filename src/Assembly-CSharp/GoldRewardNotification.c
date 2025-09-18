
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::GoldRewardNotification::GoldRewardNotification_Initialize
               (GoldRewardNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__NotificationLifetime);
    cRam_? = '\x01';
  }
  n = this;
  this = (GoldRewardNotification *)CONCAT13(2,this._0_3_);
  (n->fields)._.timeSinceStart = 0.0;
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__NotificationLifetime,TVar1.m_Index);
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
          (TypeInfo__NotificationLifetime->_0).element_class) goto code_?;
      piVar3 = (int32_t *)func_?(TVar1.m_Index);
      this_00 = (n->fields).tertiaryNotificationUI;
      (n->fields).lifeTime = *piVar3;
      l = (*(code *)(n->klass->vtable).get_Lifetime.method)
                    (n,(n->klass->vtable).Initialize.methodPtr);
      if (this_00 != (TertiaryNotificationUI *)0x0) {
        TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                  (this_00,(Notification *)n,l,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RewardClicked() */

void Assembly-CSharp.dll::GoldRewardNotification::GoldRewardNotification_RewardClicked
               (GoldRewardNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TimedPlayReward__RewardTracker);
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__TimedPlayReward__RewardTracker->static_fields;
  if (pTVar1->IsCollected == 0) {
    if (pTVar1->CollectedChanged != (Action *)0x0) {
      pAVar2 = pTVar1->CollectedChanged;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
    }
    iVar3 = (*(code *)(this->klass->vtable).get_Lifetime.method)
                      (this,(this->klass->vtable).Initialize.methodPtr);
    (this->fields)._.timeSinceStart = (float)(iVar3 + 1);
  }
  return;
}

