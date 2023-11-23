
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
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(2,data._0_3_);
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      data = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__NotificationLifetime;
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__NotificationLifetime->_0).element_class) {
        data = (Dictionary_2_System_Object_System_Object_ *)TVar1;
        piVar2 = (int32_t *)func_?();
        (this->fields).lifeTime = *piVar2;
        return;
      }
      goto code_?;
    }
  }
  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
  func_?();
  data = (Dictionary_2_System_Object_System_Object_ *)extraout_EDX;
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    return;
  }
  return;
}

