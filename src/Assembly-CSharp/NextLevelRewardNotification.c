
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
    func_?(&StringLiteral_Level__0__Unlocks);
    cRam_? = '\x01';
  }
  pNVar1 = this;
  pTVar2 = (this->fields).levelText;
  (this->fields)._.timeSinceStart = 0.0;
  pSVar3 = TM::TM__(StringLiteral_Level__0__Unlocks,(MethodInfo *)0x0);
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (pLVar5 = (pMVar4->fields).levelRewardsManager, pLVar5 != (LevelRewardsManager *)0x0)) {
    this = (NextLevelRewardNotification *)(pLVar5->fields)._NextReward_k__BackingField.key;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
    pSVar3 = mscorlib.dll::System::String::String_Format(pSVar3,arg0,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar3,(pTVar2->klass->vtable).set_text.method);
      pTVar2 = (pNVar1->fields).goldAmount;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pLVar5 = (pMVar4->fields).levelRewardsManager, pLVar5 != (LevelRewardsManager *)0x0)) {
        IStack_6.m_value = (pLVar5->fields)._NextReward_k__BackingField.value;
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar3,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar2 != (Text *)0x0) {
          (*(pTVar2->klass->vtable).set_text.methodPtr)
                    (pTVar2,pSVar3,(pTVar2->klass->vtable).set_text.method);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

