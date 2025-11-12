
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::GoldRewardNotification::GoldRewardNotification_Initialize
               (GoldRewardNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 2;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__NotificationLifetime->_0).element_class) {
        FUN_?(pOVar1,TypeInfo__NotificationLifetime);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar3 = this->klass;
      this_00 = (this->fields).tertiaryNotificationUI;
      (this->fields).lifeTime = *(int32_t *)&pOVar1[1].klass;
      l = (*(pGVar3->vtable).get_Lifetime.methodPtr)(this,(pGVar3->vtable).get_Lifetime.method);
      if (this_00 != (TertiaryNotificationUI *)0x0) {
        TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                  (this_00,(Notification *)this,l,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RewardClicked() */

void Assembly-CSharp.dll::GoldRewardNotification::GoldRewardNotification_RewardClicked
               (GoldRewardNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TimedPlayReward__RewardTracker);
    LOCK();
    UNLOCK();
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

