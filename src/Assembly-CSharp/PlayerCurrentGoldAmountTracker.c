
/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerCurrentGoldAmountTracker::PlayerCurrentGoldAmountTracker_OnDestroy
               (PlayerCurrentGoldAmountTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 == (MVNetworkGame *)0x0) ||
          (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
         (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar5 == (MVLocalPlayer *)0x0)) goto DAT_?;
      pAVar6 = (pMVar5->fields)._.OnGoldAmountChange;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__,(MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pAVar6 == (Action *)0x0) {
        (pMVar5->fields)._.OnGoldAmountChange = (Action *)0x0;
      }
      else {
        pAVar7 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?(pAVar6,TypeInfo__System__Action);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pMVar5->fields)._.OnGoldAmountChange = pAVar7;
        pAVar7 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pMVar5->fields)._.OnGoldAmountChange >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
    }
  }
  return;
}


/* Void RefreshGoldAmount() */

void Assembly-CSharp.dll::PlayerCurrentGoldAmountTracker::
     PlayerCurrentGoldAmountTracker_RefreshGoldAmount
               (PlayerCurrentGoldAmountTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).goldAmount;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar4 != (MVLocalPlayer *)0x0) &&
       (pUVar5 = (pMVar4->fields)._._UserProfileData_k__BackingField,
       pUVar5 != (UserProfileData *)0x0)) {
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString_1
                         ((Int32 *)&(pUVar5->fields).Gold,StringLiteral_N0,(MethodInfo *)0x0);
      if (pSVar6 != (String *)0x0) {
        pSVar6 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar6,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (pTVar1,pSVar6,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PlayerCurrentGoldAmountTracker::PlayerCurrentGoldAmountTracker_Start
               (PlayerCurrentGoldAmountTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).goldAmount;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
      ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
       pMVar5 != (MVLocalPlayer *)0x0 &&
       (pUVar6 = (pMVar5->fields)._._UserProfileData_k__BackingField,
       pUVar6 != (UserProfileData *)0x0)))) &&
     ((pSVar7 = mscorlib.dll::System::Int32::Int32_ToString_1
                           ((Int32 *)&(pUVar6->fields).Gold,StringLiteral_N0,(MethodInfo *)0x0),
      pSVar7 != (String *)0x0 &&
      (pSVar7 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar7,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
      pTVar1 != (Text *)0x0)))) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar7,(pTVar1->klass->vtable).set_text.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
        (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
        pMVar5 != (MVLocalPlayer *)0x0)))) {
      pAVar8 = (pMVar5->fields)._.OnGoldAmountChange;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__,(MethodInfo *)0x0);
      pAVar8 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar8 == (Action *)0x0) {
        (pMVar5->fields)._.OnGoldAmountChange = (Action *)0x0;
      }
      else {
        pAVar9 = (Action *)0x0;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar8;
        }
        if (pAVar9 == (Action *)0x0) {
          FUN_?(pAVar8,TypeInfo__System__Action);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pMVar5->fields)._.OnGoldAmountChange = pAVar9;
        pAVar9 = (Action *)0x0;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar8;
        }
        if (pAVar9 == (Action *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&(pMVar5->fields)._.OnGoldAmountChange >> 0xc);
        puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar13 = *puVar12;
          LOCK();
          uVar14 = *puVar12;
          if (uVar13 == uVar14) {
            *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (uVar13 != uVar14);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

