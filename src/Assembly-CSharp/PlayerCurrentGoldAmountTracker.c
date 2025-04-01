
/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerCurrentGoldAmountTracker::PlayerCurrentGoldAmountTracker_OnDestroy
               (PlayerCurrentGoldAmountTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 == (MVLocalPlayer *)0x0)) {
    uVar4 = func_?();
  }
  else {
    pAVar5 = (pMVar3->fields)._.OnGoldAmountChange;
    ppAVar6 = &(pMVar3->fields)._.OnGoldAmountChange;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,unaff_EDI,MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
    ppAStack7 = ppAVar6;
    if (pAVar5 == (Action *)0x0) {
      pAStack8 = (Action *)0x0;
      *ppAVar6 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar9 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar5;
    }
    if (pAVar9 != (Action *)0x0) {
      *ppAVar6 = pAVar9;
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
      pAStack8 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAStack8 = pAVar5;
      }
      if (pAStack8 != (Action *)0x0) {
        func_?();
        return;
      }
    }
  }
  _ppAStack00000018 = uVar4;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RefreshGoldAmount() */

void Assembly-CSharp.dll::PlayerCurrentGoldAmountTracker::
     PlayerCurrentGoldAmountTracker_RefreshGoldAmount
               (PlayerCurrentGoldAmountTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).goldAmount;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) &&
       (pUVar3 = (pMVar2->fields)._._UserProfileData_k__BackingField,
       pUVar3 != (UserProfileData *)0x0)) {
      this_01 = mscorlib.dll::System::Int32::Int32_ToString_1
                          ((Int32 *)&(pUVar3->fields).Gold,StringLiteral_N0,(MethodInfo *)0x0);
      if (this_01 != (String *)0x0) {
        pSStack4 =
             mscorlib.dll::System::String::String_Replace_1
                       (this_01,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          pIStack5 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          pTStack6 = pTVar1;
          (*(code *)(pTVar1->klass->vtable).set_text.method)();
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


/* Void Start() */

void Assembly-CSharp.dll::PlayerCurrentGoldAmountTracker::PlayerCurrentGoldAmountTracker_Start
               (PlayerCurrentGoldAmountTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).goldAmount;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) &&
       (pUVar4 = (pMVar3->fields)._._UserProfileData_k__BackingField,
       pUVar4 != (UserProfileData *)0x0)) {
      this_00 = mscorlib.dll::System::Int32::Int32_ToString_1
                          ((Int32 *)&(pUVar4->fields).Gold,StringLiteral_N0,(MethodInfo *)0x0);
      if (this_00 != (String *)0x0) {
        mscorlib.dll::System::String::String_Replace_1
                  (this_00,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)();
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 != (MVNetworkGame *)0x0) {
            pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
            if (pMVar3 != (MVLocalPlayer *)0x0) {
              pAVar5 = (pMVar3->fields)._.OnGoldAmountChange;
              ppAVar6 = &(pMVar3->fields)._.OnGoldAmountChange;
              this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_01,(Object *)0x0,
                         MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__,
                         (MethodInfo *)0x0);
              pAVar5 = (Action *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
              if (pAVar5 == (Action *)0x0) {
                *ppAVar6 = (Action *)0x0;
                func_?();
                return;
              }
              pAVar7 = (Action *)0x0;
              if (pAVar5->klass == TypeInfo__System__Action) {
                pAVar7 = pAVar5;
              }
              if (pAVar7 != (Action *)0x0) {
                *ppAVar6 = pAVar7;
                pAVar7 = (Action *)0x0;
                if (pAVar5->klass == TypeInfo__System__Action) {
                  pAVar7 = pAVar5;
                }
                if (pAVar7 != (Action *)0x0) {
                  func_?();
                  return;
                }
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

