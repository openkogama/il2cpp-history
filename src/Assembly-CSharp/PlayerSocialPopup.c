
/* Void FriendRequestReceived() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_FriendRequestReceived
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).pendingFriendship;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pGVar1 = (GameObject *)
               UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
     ) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).cancel;
    if ((pGVar1 != (GameObject *)0x0) &&
       (pGVar1 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
       pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).acceptFriendRequest;
      if ((pGVar1 != (GameObject *)0x0) &&
         (pGVar1 = (GameObject *)
                   UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
         pGVar1 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) {
          pFVar4 = FriendList::FriendList_GetFriendByProfileID
                             (pFVar3,(this->fields).profileId,(MethodInfo *)0x0);
          ppFVar5 = &(this->fields).friend_1;
          *ppFVar5 = pFVar4;
          func_?();
          pGVar1 = (this->fields).addFriendButton;
          pFVar4 = *ppFVar5;
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,pFVar4 == (Friend *)0x0,(MethodInfo *)0x0);
            if (pFVar4 == (Friend *)0x0) {
              return;
            }
            if (*ppFVar5 != (Friend *)0x0) {
              if (((*ppFVar5)->fields).status == 1) {
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar2 == (MVNetworkGame *)0x0) ||
                    (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 == (FriendList *)0x0
                    )) || (this_00 = (Dictionary_2_System_UInt32_System_Object_ *)
                                     (pFVar3->fields).friends,
                          this_00 == (Dictionary_2_System_UInt32_System_Object_ *)0x0))
                goto code_?;
                value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        UInt32,System::Object]::
                        Dictionary_2_System_UInt32_System_Object__ContainsValue
                                  (this_00,(Object *)*ppFVar5,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                  );
                pGVar1 = (this->fields).pendingFriendship;
                if ((pGVar1 == (GameObject *)0x0) ||
                   (pGVar1 = (GameObject *)
                             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
                   pGVar1 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value,(MethodInfo *)0x0);
                pGVar1 = (this->fields).cancel;
                if ((pGVar1 == (GameObject *)0x0) ||
                   (pGVar1 = (GameObject *)
                             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
                   pGVar1 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value == 0,(MethodInfo *)0x0);
                pGVar1 = (this->fields).acceptFriendRequest;
                if ((pGVar1 == (GameObject *)0x0) ||
                   (pGVar1 = (GameObject *)
                             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
                   pGVar1 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value == 0,(MethodInfo *)0x0);
              }
              if (*ppFVar5 != (Friend *)0x0) {
                iVar6 = ((*ppFVar5)->fields).status;
                if (iVar6 == 2) {
                  pTVar7 = (this->fields).playerName;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Styles);
                  }
                  pCVar8 = Styles::Styles_GetColor
                                     ((Color *)&stack0xffffffec,ColorStyle__Enum_FriendGreen,
                                      (MethodInfo *)0x0);
                  if (pTVar7 == (Text *)0x0) goto code_?;
                  (*(code *)(pTVar7->klass->vtable).set_color.method)
                            (pTVar7,pCVar8->r,pCVar8->g,pCVar8->b,pCVar8->a,
                             (pTVar7->klass->vtable).get_raycastTarget.methodPtr);
                }
                pGVar1 = (this->fields).friendButtonsGameObject;
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,iVar6 != 2,(MethodInfo *)0x0);
                  pGVar1 = (this->fields).isFriendTextObject;
                  if (pGVar1 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,iVar6 == 2,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize(Int32, String, Boolean) */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_Initialize
               (PlayerSocialPopup *this,int32_t remotePlayerProfileId,String *name,bool isSubscriber
               ,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    func_?(&MethodInfo__PlayerSocialPopup__FriendRequestReceived__);
    func_?(&MethodInfo__PlayerSocialPopup__PendingCountChanged_int_);
    func_?(&MethodInfo__PlayerSocialPopup__SetupFriendButtons__);
    func_?(&TypeInfo__Styles);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  (this->fields).profileId = remotePlayerProfileId;
  if (pTVar1 == (Text *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,name,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pGVar2 = (this->fields).subscriberFrame;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,isSubscriber,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar3 == MVGameMode__Enum_Edit) {
      if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
      MVar4 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_02,(MethodInfo *)0x0);
      this._3_1_ = MVar4 == MVLocalPlayer_PlanetOwnershipType__Enum_Owner;
    }
    else {
      this._3_1_ = false;
    }
    this_00 = (this_01->fields).manageUserButton;
    if (this_00 == (Button *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
    bVar5 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_02,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      bVar5 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_02,(MethodInfo *)0x0);
      this._0_1_ = bVar5 | this._3_1_;
    }
    else {
      this._0_1_ = 0;
    }
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,(byte)this,(MethodInfo *)0x0);
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pCVar6 = Styles::Styles_GetColor
                       ((Color *)&stack0xffffffec,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
    fVar7 = pCVar6->r;
    fVar8 = pCVar6->g;
    fVar9 = pCVar6->b;
    fVar10 = pCVar6->a;
    if (isSubscriber != 0) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pCVar6 = Styles::Styles_GetColor
                         ((Color *)&stack0xffffffec,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
      fVar7 = pCVar6->r;
      fVar8 = pCVar6->g;
      fVar9 = pCVar6->b;
      fVar10 = pCVar6->a;
    }
    pTVar1 = (this_01->fields).playerName;
    if (pTVar1 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar1->klass->vtable).set_color.method)
              (pTVar1,fVar7,fVar8,fVar9,fVar10,
               (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
    bVar5 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar5 != 0) {
      pGVar2 = (this_01->fields).friendButtonsGameObject;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    PlayerSocialPopup_SetupFriendButtons(this_01,(MethodInfo *)0x0);
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
    pFVar12 = (pMVar11->fields)._Friends_k__BackingField;
    if (pFVar12 == (FriendList *)0x0) goto code_?;
    pUVar13 = (pFVar12->fields).OnFriendRequestReceived;
    pNVar14 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar14,(Object *)this_01,MethodInfo__PlayerSocialPopup__FriendRequestReceived__,
               (MethodInfo *)0x0);
    pUVar13 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar13,(Delegate *)pNVar14,(MethodInfo *)0x0);
    if (pUVar13 != (UnityAction *)0x0) {
      pUVar15 = (UnityAction *)0x0;
      if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar15 = pUVar13;
      }
      if (pUVar15 != (UnityAction *)0x0) {
        (pFVar12->fields).OnFriendRequestReceived = pUVar15;
        pUVar15 = (UnityAction *)0x0;
        if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar15 = pUVar13;
        }
        if (pUVar15 != (UnityAction *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    (pFVar12->fields).OnFriendRequestReceived = (UnityAction *)0x0;
code_?:
    func_?();
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
    pFVar12 = (pMVar11->fields)._Friends_k__BackingField;
    if (pFVar12 == (FriendList *)0x0) goto code_?;
    pUVar16 = (pFVar12->fields).OnPendingCountChanged;
    this_03 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_03,(Object *)this_01,MethodInfo__PlayerSocialPopup__PendingCountChanged_int_,
               (MethodInfo *)0x0);
    pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar16,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar17 == (Delegate *)0x0) {
      (pFVar12->fields).OnPendingCountChanged = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        pFVar12 = (pMVar11->fields)._Friends_k__BackingField;
        if (pFVar12 != (FriendList *)0x0) {
          pFVar18 = (pFVar12->fields).OnFriendListUpdated;
          pNVar14 = (NavMesh_OnNavMeshPreUpdate *)
                    func_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar14,(Object *)this_01,MethodInfo__PlayerSocialPopup__SetupFriendButtons__,
                     (MethodInfo *)0x0);
          pFVar18 = (FriendList_OnFriendListUpdatedDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pFVar18,(Delegate *)pNVar14,(MethodInfo *)0x0);
          if (pFVar18 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar12->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            func_?();
            return;
          }
          pFVar19 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          if (pFVar18->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar19 = pFVar18;
          }
          if (pFVar19 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar12->fields).OnFriendListUpdated = pFVar19;
            pFVar19 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            if (pFVar18->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
              pFVar19 = pFVar18;
            }
            if (pFVar19 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              func_?();
              return;
            }
            goto code_?;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    pUVar16 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar16 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    (pFVar12->fields).OnPendingCountChanged = pUVar16;
    iVar20 = func_?();
    if (iVar20 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnAcceptFriendClicked() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnAcceptFriendClicked
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  error = ::StringLiteral__;
  bVar1 = PlayerSocialPopup_ValidateFriendRequest
                    (this,(String **)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    PlayerSocialPopup_PostErrorPopup(this,error,(MethodInfo *)0x0);
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pFVar2 = (this->fields).friend_1;
  if ((pFVar2 != (Friend *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAcceptFriendShip
              (this_00,(pFVar2->fields).friendID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAddFriendClicked() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnAddFriendClicked
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  error = ::StringLiteral__;
  bVar1 = PlayerSocialPopup_ValidateFriendRequest
                    (this,(String **)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    error = (String *)(this->fields).profileId;
    bVar1 = MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestFriendShipByID
                      (this_00,(int32_t)error,(String **)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      PlayerSocialPopup_SetupFriendButtons(this,(MethodInfo *)0x0);
      return;
    }
  }
  PlayerSocialPopup_PostErrorPopup(this,error,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnDestroy
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    func_?(&MethodInfo__PlayerSocialPopup__FriendRequestReceived__);
    func_?(&MethodInfo__PlayerSocialPopup__PendingCountChanged_int_);
    func_?(&MethodInfo__PlayerSocialPopup__SetupFriendButtons__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    pFVar2 = (pMVar1->fields)._Friends_k__BackingField;
    if (pFVar2 == (FriendList *)0x0) goto code_?;
    pUVar3 = (pFVar2->fields).OnFriendRequestReceived;
    ppUVar4 = &(pFVar2->fields).OnFriendRequestReceived;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__PlayerSocialPopup__FriendRequestReceived__,
               (MethodInfo *)0x0);
    pUVar3 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar3,(Delegate *)pNVar5,(MethodInfo *)0x0);
    if (pUVar3 == (UnityAction *)0x0) {
      *ppUVar4 = (UnityAction *)0x0;
code_?:
      func_?();
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pFVar2 = (pMVar1->fields)._Friends_k__BackingField, pFVar2 != (FriendList *)0x0)) {
        pUVar6 = (pFVar2->fields).OnPendingCountChanged;
        ppUVar7 = &(pFVar2->fields).OnPendingCountChanged;
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)&UNK_?,
                   MethodInfo__PlayerSocialPopup__PendingCountChanged_int_,(MethodInfo *)0x0);
        pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pUVar6,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pDVar8 == (Delegate *)0x0) {
          *ppUVar7 = (UnityAction_1_System_Int32_ *)0x0;
        }
        else {
          pUVar6 = (UnityAction_1_System_Int32_ *)func_?();
          if (pUVar6 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
          *ppUVar7 = pUVar6;
          iVar9 = func_?();
          if (iVar9 == 0) goto code_?;
        }
        func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pFVar2 = (pMVar1->fields)._Friends_k__BackingField, pFVar2 != (FriendList *)0x0)) {
          pFVar10 = (pFVar2->fields).OnFriendListUpdated;
          pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                   func_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar5,(Object *)&UNK_?,
                     MethodInfo__PlayerSocialPopup__SetupFriendButtons__,(MethodInfo *)0x0);
          pFVar10 = (FriendList_OnFriendListUpdatedDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pFVar10,(Delegate *)pNVar5,(MethodInfo *)0x0);
          if (pFVar10 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar2->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            func_?();
            return;
          }
          pFVar11 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          if (pFVar10->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar11 = pFVar10;
          }
          if (pFVar11 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar2->fields).OnFriendListUpdated = pFVar11;
            pFVar11 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            if (pFVar10->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
              pFVar11 = pFVar10;
            }
            if (pFVar11 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    pUVar12 = (UnityAction *)0x0;
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar12 = pUVar3;
    }
    if (pUVar12 != (UnityAction *)0x0) {
      *ppUVar4 = pUVar12;
      pUVar12 = (UnityAction *)0x0;
      if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar12 = pUVar3;
      }
      if (pUVar12 != (UnityAction *)0x0) goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnFriendRequestCanceled() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnFriendRequestCanceled
               (PlayerSocialPopup *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._Friends_k__BackingField, this_00 != (FriendList *)0x0)) {
    pFVar2 = FriendList::FriendList_GetFriendByProfileID
                       (this_00,(this->fields).profileId,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if ((pFVar2 != (Friend *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestRejectFriendShip
                (this_01,(pFVar2->fields).friendID,(MethodInfo *)0x0);
      PlayerSocialPopup_SetupFriendButtons(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnOpenAdminController() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnOpenAdminController
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                   );
    func_?(&
                    OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PlayerSocialPopup____c__DisplayClass19_0___OnOpenAdminController_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerSocialPopup____c__DisplayClass19_0);
    func_?(&
                    MethodInfo__PlayerSocialPopup____c__DisplayClass19_1___OnOpenAdminController_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerSocialPopup____c__DisplayClass19_1);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = (MethodInfo *)&UNK_?;
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar2 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_01,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar3 != MVGameMode__Enum_Edit) {
          return;
        }
        MVar4 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
        if (MVar4 != MVLocalPlayer_PlanetOwnershipType__Enum_Owner) {
          return;
        }
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value,ExceptionArgument__Enum_obj,pMVar1);
        pOVar5 = pORam0000003c;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar6 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           (pOVar5,
                            OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                           );
        if (value != (Object *)0x0) {
          pOVar5 = value + 1;
          pOVar5->klass = pOVar6;
          func_?(pOVar5,pOVar6);
          pOVar6 = pOVar5->klass;
          if ((piRam_? != (int *)0x0) &&
             (pSVar7 = (String *)
                       (**(code **)(*piRam_? + 0x310))
                                 (piRam_?,*(undefined4 *)(*piRam_? + 0x314)),
             pOVar6 != (Object__Class *)0x0)) {
            OwnerToolController::OwnerToolController_Initialize
                      ((OwnerToolController *)pOVar6,pSVar7,(MethodInfo *)0x0);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)0x0,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            pMVar1 = 
            MethodInfo__PlayerSocialPopup____c__DisplayClass19_1___OnOpenAdminController_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
            ;
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,pMVar1,
                       (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
      else {
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value,ExceptionArgument__Enum_obj,pMVar1);
        original = (this->fields).adminToolsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar6 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                           );
        if (value != (Object *)0x0) {
          pOVar5 = value + 1;
          pOVar5->klass = pOVar6;
          func_?(pOVar5,pOVar6);
          pTVar8 = (this->fields).playerName;
          pOVar6 = pOVar5->klass;
          if ((pTVar8 != (Text *)0x0) &&
             (pSVar7 = (String *)
                       (*(code *)(pTVar8->klass->vtable).get_text.method)
                                 (pTVar8,(pTVar8->klass->vtable).set_text.methodPtr),
             pOVar6 != (Object__Class *)0x0)) {
            AdminToolController::AdminToolController_Initialize
                      ((AdminToolController *)pOVar6,pSVar7,(MethodInfo *)0x0);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            pMVar1 = 
            MethodInfo__PlayerSocialPopup____c__DisplayClass19_0___OnOpenAdminController_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
            ;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnViewProfileClicked() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnViewProfileClicked
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Goto_profile_of_player__);
    cRam_? = '\x01';
  }
  this_00 = &(this->fields).profileId;
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Goto_profile_of_player__,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  BrowserCommGotoRequests::BrowserCommGotoRequests_GotoPlayerProfile(*this_00,1,0,(MethodInfo *)0x0)
  ;
  return;
}


/* Void PendingCountChanged(Int32) */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_PendingCountChanged
               (PlayerSocialPopup *this,int32_t count,MethodInfo *method)

{
  PlayerSocialPopup_SetupFriendButtons(this,(MethodInfo *)0x0);
  return;
}


/* Void PostErrorPopup(String) */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_PostErrorPopup
               (PlayerSocialPopup *this,String *error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__PlayerSocialPopup____c__DisplayClass24_0___PostErrorPopup_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerSocialPopup____c__DisplayClass24_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerSocialPopup____c__DisplayClass24_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)error;
    func_?(value + 1,error);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__PlayerSocialPopup____c__DisplayClass24_0___PostErrorPopup_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetupFriendButtons() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_SetupFriendButtons
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).pendingFriendship;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pGVar1 = (GameObject *)
               UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
     ) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).cancel;
    if ((pGVar1 != (GameObject *)0x0) &&
       (pGVar1 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
       pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).acceptFriendRequest;
      if ((pGVar1 != (GameObject *)0x0) &&
         (pGVar1 = (GameObject *)
                   UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
         pGVar1 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) {
          pFVar4 = FriendList::FriendList_GetFriendByProfileID
                             (pFVar3,(this->fields).profileId,(MethodInfo *)0x0);
          ppFVar5 = &(this->fields).friend_1;
          *ppFVar5 = pFVar4;
          func_?();
          pGVar1 = (this->fields).addFriendButton;
          pFVar4 = *ppFVar5;
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,pFVar4 == (Friend *)0x0,(MethodInfo *)0x0);
            if (pFVar4 == (Friend *)0x0) {
              return;
            }
            if (*ppFVar5 != (Friend *)0x0) {
              if (((*ppFVar5)->fields).status == 1) {
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar2 == (MVNetworkGame *)0x0) ||
                    (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 == (FriendList *)0x0
                    )) || (this_00 = (Dictionary_2_System_UInt32_System_Object_ *)
                                     (pFVar3->fields).friends,
                          this_00 == (Dictionary_2_System_UInt32_System_Object_ *)0x0))
                goto code_?;
                value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        UInt32,System::Object]::
                        Dictionary_2_System_UInt32_System_Object__ContainsValue
                                  (this_00,(Object *)*ppFVar5,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                  );
                pGVar1 = (this->fields).pendingFriendship;
                if ((pGVar1 == (GameObject *)0x0) ||
                   (pGVar1 = (GameObject *)
                             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
                   pGVar1 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value,(MethodInfo *)0x0);
                pGVar1 = (this->fields).cancel;
                if ((pGVar1 == (GameObject *)0x0) ||
                   (pGVar1 = (GameObject *)
                             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
                   pGVar1 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value == 0,(MethodInfo *)0x0);
                pGVar1 = (this->fields).acceptFriendRequest;
                if ((pGVar1 == (GameObject *)0x0) ||
                   (pGVar1 = (GameObject *)
                             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
                   pGVar1 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value == 0,(MethodInfo *)0x0);
              }
              if (*ppFVar5 != (Friend *)0x0) {
                iVar6 = ((*ppFVar5)->fields).status;
                if (iVar6 == 2) {
                  pTVar7 = (this->fields).playerName;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Styles);
                  }
                  pCVar8 = Styles::Styles_GetColor
                                     ((Color *)&stack0xffffffec,ColorStyle__Enum_FriendGreen,
                                      (MethodInfo *)0x0);
                  if (pTVar7 == (Text *)0x0) goto code_?;
                  (*(code *)(pTVar7->klass->vtable).set_color.method)
                            (pTVar7,pCVar8->r,pCVar8->g,pCVar8->b,pCVar8->a,
                             (pTVar7->klass->vtable).get_raycastTarget.methodPtr);
                }
                pGVar1 = (this->fields).friendButtonsGameObject;
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,iVar6 != 2,(MethodInfo *)0x0);
                  pGVar1 = (this->fields).isFriendTextObject;
                  if (pGVar1 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,iVar6 == 2,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean ValidateFriendRequest(String ByRef) */

bool Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_ValidateFriendRequest
               (PlayerSocialPopup *this,String **error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BadgeManager);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__)
    ;
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_You_can_only_have__0__friends_at);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  iVar3 = (pMVar2->fields)._.level;
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  iVar4 = BadgeManager::BadgeManager_GetFriendsLimit(iVar3,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 == (MVNetworkGame *)0x0) ||
      (pFVar5 = (pMVar1->fields)._Friends_k__BackingField, pFVar5 == (FriendList *)0x0)) ||
     (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(pFVar5->fields).friends,
     this_00 ==
     (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
      *)0x0)) goto code_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__)
  ;
  if (iVar6 < iVar4) {
    return 1;
  }
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_GetFriendsLimit(iVar3 + 1,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_You_can_only_have__0__friends_at,(MethodInfo *)0x0);
  pSVar7 = (String *)func_?();
  pSVar8 = (String__Class *)func_?();
  if (pSVar7 == (String *)0x0) goto code_?;
  if (pSVar8 == (String__Class *)0x0) {
code_?:
    if (*(int *)&(pSVar7->fields)._firstChar != 0) {
      pSVar7[1].klass = pSVar8;
      func_?();
      pMVar9 = (MonitorData *)func_?(TypeInfo__System__Int32);
      if (pMVar9 != (MonitorData *)0x0) {
        iVar3 = func_?();
        if (iVar3 == 0) goto code_?;
      }
      if (1 < *(uint *)&(pSVar7->fields)._firstChar) {
        pSVar7[1].monitor = pMVar9;
        func_?();
        iVar3 = func_?(TypeInfo__System__Int32);
        if (iVar3 != 0) {
          iVar10 = func_?();
          if (iVar10 == 0) goto code_?;
        }
        if (2 < *(uint *)&(pSVar7->fields)._firstChar) {
          pSVar7[1].fields._stringLength = iVar3;
          func_?();
          iVar3 = func_?(TypeInfo__System__Int32);
          if (iVar3 != 0) {
            iVar10 = func_?();
            if (iVar10 == 0) goto code_?;
          }
          if (3 < *(uint *)&(pSVar7->fields)._firstChar) {
            *(int *)&pSVar7[1].fields._firstChar = iVar3;
            func_?();
            pSVar7 = mscorlib.dll::System::String::String_Format_3
                               (pSVar7,(Object__Array *)pSVar7,(MethodInfo *)0x0);
            *error = pSVar7;
            func_?(error);
            return 0;
          }
        }
      }
    }
  }
  else {
    iVar3 = func_?();
    if (iVar3 != 0) goto code_?;
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}

