
/* Void Init() */

void Assembly-CSharp.dll::TimeReward::TimeReward_Init(TimeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeReward__RequestRewardData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__MVGameControllerBase_UsingDevSe);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  message = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral__MVGameControllerBase_UsingDevSe,StringLiteral_True,
                       (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (TimeReward_RequestRewardData *)FUN_?(TypeInfo__TimeReward__RequestRewardData);
  TimeReward+RequestRewardData::TimeReward_RequestRewardData__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).rewardStateBase = (TimeReward_RewardStateBase *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
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
             (*(pTVar1->klass->vtable).__unknown.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable).__unknown.method);
    (this->fields).rewardStateBase = pTVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    iVar7 = iRam_?;
    pTVar1 = (this->fields).rewardStateBase;
    if (pTVar1 != (TimeReward_RewardStateBase *)0x0) {
      pRVar8 = (pTVar1->fields).rewardStateEventArgs;
      (pTVar1->fields).rewardStateEventArgs = (RewardStateDataEventArgs *)0x0;
      if (iVar7 != 0) {
        uVar2 = (uint)((ulonglong)&pTVar1->fields >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      if ((pRVar8 != (RewardStateDataEventArgs *)0x0) &&
         ((this->fields).RewardStateChanged != (EventHandler_1_RewardStateDataEventArgs_ *)0x0)) {
        pEVar9 = (this->fields).RewardStateChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pEVar9->fields)._._.invoke_impl)
                  ((pEVar9->fields)._._.method_code,this,pRVar8,(pEVar9->fields)._._.method);
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* TimeReward() */

void Assembly-CSharp.dll::TimeReward::TimeReward__ctor(TimeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TimeReward__RewardDone);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (TimeReward_RewardStateBase *)FUN_?(TypeInfo__TimeReward__RewardDone);
  bVar2 = iRam_? != 0;
  (this->fields).rewardStateBase = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void add_RewardStateChanged(EventHandler`1[RewardStateDataEventArgs]) */

void Assembly-CSharp.dll::TimeReward::TimeReward_add_RewardStateChanged
               (TimeReward *this,EventHandler_1_RewardStateDataEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).RewardStateChanged;
  a = (this->fields).RewardStateChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<RewardStateDataEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_RewardStateDataEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_RewardStateDataEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
      if (pEVar4 == (EventHandler_1_RewardStateDataEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Void remove_RewardStateChanged(EventHandler`1[RewardStateDataEventArgs]) */

void Assembly-CSharp.dll::TimeReward::TimeReward_remove_RewardStateChanged
               (TimeReward *this,EventHandler_1_RewardStateDataEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).RewardStateChanged;
  source = (this->fields).RewardStateChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<RewardStateDataEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_RewardStateDataEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_RewardStateDataEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<RewardStateDataEventArgs>);
      if (pEVar4 == (EventHandler_1_RewardStateDataEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

