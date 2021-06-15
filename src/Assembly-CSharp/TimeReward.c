
/* Void DestroyRewardRequest() */

void Assembly-CSharp.dll::TimeReward::TimeReward_DestroyRewardRequest
               (TimeReward *this,MethodInfo *method)

{
  pTVar1 = (this->fields).rewardStateBase;
  if (pTVar1 != (TimeReward_RewardStateBase *)0x0) {
    (*(code *)(pTVar1->klass->vtable).__unknown_1.method)(pTVar1,pTVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::TimeReward::TimeReward_Init(TimeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
  arg1 = (Object *)func_?(CONCAT13(bVar1 == 0,(int3)TypeInfo__System__Boolean));
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral__MVGameControllerBase_UsingDevSe,arg1,
                       (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
  if (bVar1 == 0) {
    pTStack2 = TypeInfo__TimeReward__RequestRewardData;
    this_00 = (TimeReward_RequestRewardData *)func_?();
    TimeReward+RequestRewardData::TimeReward_RequestRewardData__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).rewardStateBase = (TimeReward_RewardStateBase *)this_00;
  }
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::TimeReward::TimeReward_UpdateControllerUpdate
               (TimeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rewardStateBase;
  if (pTVar1 != (TimeReward_RewardStateBase *)0x0) {
    pTVar1 = (TimeReward_RewardStateBase *)
             (*(code *)(pTVar1->klass->vtable).__unknown.method)
                       (pTVar1,(pTVar1->klass->vtable).__unknown_1.methodPtr);
    (this->fields).rewardStateBase = pTVar1;
    if (pTVar1 != (TimeReward_RewardStateBase *)0x0) {
      e = (pTVar1->fields).rewardStateEventArgs;
      (pTVar1->fields).rewardStateEventArgs = (RewardStateDataEventArgs *)0x0;
      if ((e != (RewardStateDataEventArgs *)0x0) &&
         (this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                    (this->fields).RewardStateChanged,
         this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)) {
        mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
        EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                  (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)e,
                   MethodInfo__System__EventHandler<RewardStateDataEventArgs>__Invoke_System__Object__RewardStateDataEventArgs_
                  );
      }
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* TimeReward() */

void Assembly-CSharp.dll::TimeReward::TimeReward__ctor(TimeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TimeReward__RewardDone;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).rewardStateBase = (TimeReward_RewardStateBase *)this_00;
  return;
}


/* Void add_RewardStateChanged(EventHandler`1[RewardStateDataEventArgs]) */

void Assembly-CSharp.dll::TimeReward::TimeReward_add_RewardStateChanged
               (TimeReward *this,EventHandler_1_RewardStateDataEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).RewardStateChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_RewardStateDataEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<RewardStateDataEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_RewardStateDataEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_RewardStateChanged(EventHandler`1[RewardStateDataEventArgs]) */

void Assembly-CSharp.dll::TimeReward::TimeReward_remove_RewardStateChanged
               (TimeReward *this,EventHandler_1_RewardStateDataEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).RewardStateChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_RewardStateDataEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<RewardStateDataEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_RewardStateDataEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

