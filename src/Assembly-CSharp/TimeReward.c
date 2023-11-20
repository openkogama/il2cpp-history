
/* Void DestroyRewardRequest() */

void Assembly-CSharp.dll::TimeReward::TimeReward_DestroyRewardRequest
               (TimeReward *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pTStack_2 = (this->fields).rewardStateBase;
  if (pTStack_2 != (TimeReward_RewardStateBase *)0x0) {
    pIStack_1 = pTStack_2->klass[1]._0.image;
    (*(code *)(pTStack_2->klass->vtable).__unknown_1.method)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::TimeReward::TimeReward_Init(TimeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
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
  MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                     ((Boolean *)&stack0xfffffffb,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral__MVGameControllerBase_UsingDevSe,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
  if (bVar2 == 0) {
    pTStack3 = TypeInfo__TimeReward__RequestRewardData;
    this_00 = (TimeReward_RequestRewardData *)func_?();
    TimeReward+RequestRewardData::TimeReward_RequestRewardData__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).rewardStateBase = (TimeReward_RewardStateBase *)this_00;
    func_?();
  }
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::TimeReward::TimeReward_UpdateControllerUpdate
               (TimeReward *this,MethodInfo *method)

{
  pTVar1 = (this->fields).rewardStateBase;
  if (pTVar1 != (TimeReward_RewardStateBase *)0x0) {
    pTVar1 = (TimeReward_RewardStateBase *)
             (*(code *)(pTVar1->klass->vtable).__unknown.method)
                       (pTVar1,(pTVar1->klass->vtable).__unknown_1.methodPtr);
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
  method_01 = TypeInfo__TimeReward__RewardDone;
  value = (TimeReward_RewardStateBase *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).rewardStateBase = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
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

