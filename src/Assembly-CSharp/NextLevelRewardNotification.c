
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
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar1 = (this->fields).levelText;
  pSVar2 = TM::TM__(StringLiteral_Level__0__Unlocks_,(MethodInfo *)0x0);
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     ((pMVar3->fields).levelRewardsManager != (LevelRewardsManager *)0x0)) {
    arg0 = (Object *)func_?(TypeInfo__System__Int32);
    pSVar2 = mscorlib.dll::System::String::String_Format(pSVar2,arg0,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1,pSVar2);
      pTVar1 = (this->fields).goldAmount;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         ((pMVar3->fields).levelRewardsManager != (LevelRewardsManager *)0x0)) {
        pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1,pSVar2);
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
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

