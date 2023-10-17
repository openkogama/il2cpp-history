
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
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    pAVar4 = (pMVar3->fields)._.OnGoldAmountChange;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__,
                 MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__,(MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
      if (pAVar4 == (Action *)0x0) {
        (pMVar3->fields)._.OnGoldAmountChange = (Action *)0x0;
        ppAStack6 = &(pMVar3->fields)._.OnGoldAmountChange;
        pAStack7 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar8 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar4;
      }
      if (pAVar8 != (Action *)0x0) {
        (pMVar3->fields)._.OnGoldAmountChange = pAVar8;
        uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
        pAStack7 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAStack7 = pAVar4;
        }
        if (pAStack7 != (Action *)0x0) {
          ppAStack6 = &(pMVar3->fields)._.OnGoldAmountChange;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar5 = func_?();
code_?:
  _ppAStack00000028 = uVar5;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
          pMStack5 = (pTVar1->klass->vtable).set_text.method;
          pTStack6 = pTVar1;
          (*(pTVar1->klass->vtable).set_text.methodPtr)();
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
          (*(pTVar1->klass->vtable).set_text.methodPtr)();
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 != (MVNetworkGame *)0x0) {
            pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
            if (pMVar3 != (MVLocalPlayer *)0x0) {
              pAVar5 = (pMVar3->fields)._.OnGoldAmountChange;
              this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
              if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,(Object *)this,
                           MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__,
                           (MethodInfo *)0x0);
                pAVar5 = (Action *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
                if (pAVar5 == (Action *)0x0) {
                  (pMVar3->fields)._.OnGoldAmountChange = (Action *)0x0;
                  func_?();
                  return;
                }
                pAVar6 = (Action *)0x0;
                if (pAVar5->klass == TypeInfo__System__Action) {
                  pAVar6 = pAVar5;
                }
                if (pAVar6 != (Action *)0x0) {
                  (pMVar3->fields)._.OnGoldAmountChange = pAVar6;
                  pAVar6 = (Action *)0x0;
                  if (pAVar5->klass == TypeInfo__System__Action) {
                    pAVar6 = pAVar5;
                  }
                  if (pAVar6 != (Action *)0x0) {
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
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

