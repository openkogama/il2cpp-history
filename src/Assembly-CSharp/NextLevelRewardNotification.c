
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NextLevelRewardNotification::NextLevelRewardNotification_Initialize
               (NextLevelRewardNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Level__0__Unlocks_);
    cRam_? = '\x01';
  }
  n = this;
  pTVar1 = (this->fields).levelText;
  (this->fields)._.timeSinceStart = 0.0;
  pSVar2 = TM::TM__(StringLiteral_Level__0__Unlocks_,(MethodInfo *)0x0);
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (pLVar4 = (pMVar3->fields).levelRewardsManager, pLVar4 != (LevelRewardsManager *)0x0)) {
    this = (NextLevelRewardNotification *)(pLVar4->fields)._NextReward_k__BackingField.key;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
    pSVar2 = mscorlib.dll::System::String::String_Format(pSVar2,arg0,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar1 = (n->fields).goldAmount;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pLVar4 = (pMVar3->fields).levelRewardsManager, pLVar4 != (LevelRewardsManager *)0x0)) {
        IStack_5.m_value = (pLVar4->fields)._NextReward_k__BackingField.value;
        pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)
                    (pTVar1,pSVar2,
                     (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
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
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

