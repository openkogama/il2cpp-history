
/* Void Init() */

void Assembly-CSharp.dll::TimeReward::TimeReward_Init(TimeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__TimeReward__RequestRewardData);
    func_?(&TypeInfo__UpdateController);
    func_?(&StringLiteral__MVGameControllerBase_UsingDevSe);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pKVar2 = (pMVar1->fields).koGaMaSettings, pKVar2 != (KoGaMaSettingsContainer *)0x0)) {
    if ((pKVar2->fields).showDebugLogin == 0) {
      System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System::
      Single,System::Object]::
      SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__System_Collections_ICollection_get_IsSynchronized
                ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)0x0,
                 unaff_retaddr);
    }
    pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                       ((Boolean *)&stack0xfffffffb,(IFormatProvider *)0x0,unaff_retaddr);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral__MVGameControllerBase_UsingDevSe,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pKVar2 = (pMVar1->fields).koGaMaSettings, pKVar2 != (KoGaMaSettingsContainer *)0x0)) {
      if (((pKVar2->fields).showDebugLogin == 0) &&
         (bVar4 = System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ValueList[System::Single,System::Object]::
                  SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__System_Collections_ICollection_get_IsSynchronized
                            ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)0x0,
                             unaff_retaddr), bVar4 == 0)) {
        this_00 = (TimeReward_RequestRewardData *)func_?();
        if (this_00 == (TimeReward_RequestRewardData *)0x0) goto code_?;
        TimeReward+RequestRewardData::TimeReward_RequestRewardData__ctor(this_00,(MethodInfo *)0x0);
        (this->fields).rewardStateBase = (TimeReward_RewardStateBase *)this_00;
        func_?(&this->fields);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::TimeReward::TimeReward_UpdateControllerUpdate
               (TimeReward *this,MethodInfo *method)

{
  pTVar1 = (this->fields).rewardStateBase;
  if (pTVar1 != (TimeReward_RewardStateBase *)0x0) {
    pTVar1 = (TimeReward_RewardStateBase *)
             (*(pTVar1->klass->vtable).__unknown.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable).__unknown.method);
    (this->fields).rewardStateBase = pTVar1;
    func_?(&this->fields,pTVar1);
    pTVar1 = (this->fields).rewardStateBase;
    if (pTVar1 != (TimeReward_RewardStateBase *)0x0) {
      pRVar2 = (pTVar1->fields).rewardStateEventArgs;
      (pTVar1->fields).rewardStateEventArgs = (RewardStateDataEventArgs *)0x0;
      func_?(&pTVar1->fields,0);
      if ((pRVar2 != (RewardStateDataEventArgs *)0x0) &&
         ((this->fields).RewardStateChanged != (EventHandler_1_RewardStateDataEventArgs_ *)0x0)) {
        pEVar3 = (this->fields).RewardStateChanged;
        (*(pEVar3->fields)._._.invoke_impl)
                  ((pEVar3->fields)._._.method_code,this,pRVar2,(pEVar3->fields)._._.method);
      }
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TimeReward() */

void Assembly-CSharp.dll::TimeReward::TimeReward__ctor(TimeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TimeReward__RewardDone);
    cRam_? = '\x01';
  }
  value = (TimeReward_RewardStateBase *)func_?(TypeInfo__TimeReward__RewardDone);
  if (value != (TimeReward_RewardStateBase *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).rewardStateBase = value;
    func_?(method_00,value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_RewardStateChanged(EventHandler`1[RewardStateDataEventArgs]) */

void Assembly-CSharp.dll::TimeReward::TimeReward_add_RewardStateChanged
               (TimeReward *this,EventHandler_1_RewardStateDataEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).RewardStateChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<RewardStateDataEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_RewardStateDataEventArgs_ *)
             func_?(&(this->fields).RewardStateChanged,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_RewardStateChanged(EventHandler`1[RewardStateDataEventArgs]) */

void Assembly-CSharp.dll::TimeReward::TimeReward_remove_RewardStateChanged
               (TimeReward *this,EventHandler_1_RewardStateDataEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).RewardStateChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<RewardStateDataEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_RewardStateDataEventArgs_ *)
             func_?(&(this->fields).RewardStateChanged,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

