
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
  pGVar1 = this;
  this = (GoldRewardNotification *)CONCAT13(2,this._0_3_);
  (pGVar1->fields)._.timeSinceStart = 0.0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == (TypeInfo__NotificationLifetime->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        (pGVar1->fields).lifeTime = *piVar3;
        return;
      }
      goto code_?;
    }
  }
  pOVar2 = (Object *)func_?();
code_?:
  func_?(pOVar2);
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
    iVar3 = (*(this->klass->vtable).get_Lifetime.methodPtr)
                      (this,(this->klass->vtable).get_Lifetime.method);
    (this->fields)._.timeSinceStart = (float)(iVar3 + 1);
  }
  return;
}

