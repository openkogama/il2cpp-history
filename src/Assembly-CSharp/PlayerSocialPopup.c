
/* Void Initialize(Int32, String, Boolean) */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_Initialize
               (PlayerSocialPopup *this,int32_t remotePlayerProfileId,String *name,bool isSubscriber
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerSocialPopup__FriendRequestReceived__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerSocialPopup__PendingCountChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerSocialPopup__SetupFriendButtons__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  (this->fields).profileId = remotePlayerProfileId;
  if (pTVar1 == (Text *)0x0) goto code_?;
  (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,name);
  pGVar2 = (this->fields).subscriberFrame;
  if (pGVar2 == (GameObject *)0x0) goto code_?;
  method_00 = (MethodInfo *)0x0;
  player = (MVPlayer *)(ulonglong)isSubscriber;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,isSubscriber,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar3 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar3->fields).gameMode == 0) {
code_?:
    if ((this_01 == (MVLocalPlayer *)0x0) ||
       (pLVar4 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(this_01,(MethodInfo *)0x0),
       pLVar4 == (List_1_MV_Common_PlanetPermissionType_ *)0x0)) goto code_?;
    if ((pLVar4->fields)._size == 0) {
      bVar5 = false;
    }
    else {
      iVar6 = FUN_?(pLVar4);
      bVar5 = iVar6 != -1;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar3->fields).gameMode == 4) goto code_?;
    bVar5 = false;
  }
  pFVar7 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
  this_00 = (this->fields).manageUserButton;
  if ((this_00 != (Button *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (MVLocalPlayer *)0x0)
     ) {
    iVar6 = (this_01->fields)._._ProfileID_k__BackingField;
    if (iVar6 == 0) {
      bVar8 = 0;
    }
    else {
      if (iVar6 < 1) {
        bVar8 = 0;
      }
      else {
        pUVar9 = (this_01->fields)._._UserProfileData_k__BackingField;
        if (pUVar9 == (UserProfileData *)0x0) goto code_?;
        bVar8 = (pUVar9->fields).IsAdmin;
      }
      bVar8 = bVar8 | bVar5;
    }
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,bVar8 != 0,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar10 = Styles::Styles_GetColor(&CStack_11,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
      fVar12 = pCVar10->r;
      fVar13 = pCVar10->g;
      fVar14 = pCVar10->b;
      fVar15 = pCVar10->a;
      if (isSubscriber != 0) {
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar10 = Styles::Styles_GetColor(&CStack_11,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
        fVar12 = pCVar10->r;
        fVar13 = pCVar10->g;
        fVar14 = pCVar10->b;
        fVar15 = pCVar10->a;
      }
      pTVar1 = (this->fields).playerName;
      if (pTVar1 != (Text *)0x0) {
        CStack_11.r = fVar12;
        CStack_11.g = fVar13;
        CStack_11.b = fVar14;
        CStack_11.a = fVar15;
        (*(pTVar1->klass->vtable).set_color.methodPtr)();
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar3 != (GameSessionData *)0x0) {
          if ((pGVar3->fields).profileID < 1) {
            pGVar2 = (this->fields).friendButtonsGameObject;
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            PlayerSocialPopup_SetupFriendButtons(this,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar16 != (MVGameControllerBase *)0x0) &&
                (pMVar17 = (pMVar16->fields).game, pMVar17 != (MVNetworkGame *)0x0)) &&
               (pFVar18 = (pMVar17->fields)._Friends_k__BackingField, pFVar18 != (FriendList *)0x0)) {
              a = (pFVar18->fields).OnFriendRequestReceived;
              pNVar19 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar19,(Object *)this,
                         MethodInfo__PlayerSocialPopup__FriendRequestReceived__,(MethodInfo *)0x0);
              pFVar20 = (FriendList_OnFriendListUpdatedDelegate *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)a,(Delegate *)pNVar19,(MethodInfo *)0x0);
              if (pFVar20 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                (pFVar18->fields).OnFriendRequestReceived = (UnityAction *)0x0;
              }
              else {
                pFVar21 = pFVar7;
                if (pFVar20->klass ==
                    (FriendList_OnFriendListUpdatedDelegate__Class *)
                    TypeInfo__UnityEngine__Events__UnityAction) {
                  pFVar21 = pFVar20;
                }
                if (pFVar21 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                  FUN_?();
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
                (pFVar18->fields).OnFriendRequestReceived = (UnityAction *)pFVar21;
                pFVar21 = pFVar7;
                if (pFVar20->klass ==
                    (FriendList_OnFriendListUpdatedDelegate__Class *)
                    TypeInfo__UnityEngine__Events__UnityAction) {
                  pFVar21 = pFVar20;
                }
                if (pFVar21 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                  FUN_?();
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar23 = (uint)((ulonglong)&(pFVar18->fields).OnFriendRequestReceived >> 0xc);
                lVar24 = (ulonglong)((uVar23 & 0x1fffff) >> 6) * 8;
                do {
                  uVar25 = *(ulonglong *)(lVar24 + 0xADDR);
                  puVar26 = (ulonglong *)(lVar24 + 0xADDR);
                  LOCK();
                  bVar5 = uVar25 == *puVar26;
                  if (bVar5) {
                    *puVar26 = uVar25 | 1L << (uVar23 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar16 != (MVGameControllerBase *)0x0) &&
                  (pMVar17 = (pMVar16->fields).game, pMVar17 != (MVNetworkGame *)0x0)) &&
                 (pFVar18 = (pMVar17->fields)._Friends_k__BackingField, pFVar18 != (FriendList *)0x0))
              {
                pUVar27 = (pFVar18->fields).OnPendingCountChanged;
                pDVar28 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>)
                ;
                FUN_?(pDVar28,this);
                pDVar28 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pUVar27,pDVar28,(MethodInfo *)0x0);
                pUVar29 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                if (pDVar28 == (Delegate *)0x0) {
                  (pFVar18->fields).OnPendingCountChanged = (UnityAction_1_System_Int32_ *)0x0;
                }
                else {
                  pUVar27 = (UnityAction_1_System_Int32_ *)
                            FUN_?(pDVar28,TypeInfo__UnityEngine__Events__UnityAction<int>);
                  if (pUVar27 == (UnityAction_1_System_Int32_ *)0x0) {
                    FUN_?(pDVar28,pUVar29);
                    pcVar22 = (code *)swi(3);
                    (*pcVar22)();
                    return;
                  }
                  (pFVar18->fields).OnPendingCountChanged = pUVar27;
                  pUVar29 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                  lVar24 = FUN_?(pDVar28,TypeInfo__UnityEngine__Events__UnityAction<int>);
                  if (lVar24 == 0) {
                    FUN_?(pDVar28,pUVar29);
                    pcVar22 = (code *)swi(3);
                    (*pcVar22)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar23 = (uint)((ulonglong)&(pFVar18->fields).OnPendingCountChanged >> 0xc);
                  lVar24 = (ulonglong)((uVar23 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar25 = *(ulonglong *)(lVar24 + 0xADDR);
                    puVar26 = (ulonglong *)(lVar24 + 0xADDR);
                    LOCK();
                    bVar5 = uVar25 == *puVar26;
                    if (bVar5) {
                      *puVar26 = uVar25 | 1L << (uVar23 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar16 != (MVGameControllerBase *)0x0) &&
                    (pMVar17 = (pMVar16->fields).game, pMVar17 != (MVNetworkGame *)0x0)) &&
                   (pFVar18 = (pMVar17->fields)._Friends_k__BackingField, pFVar18 != (FriendList *)0x0)
                   ) {
                  pFVar20 = (pFVar18->fields).OnFriendListUpdated;
                  pNVar19 = (NavMesh_OnNavMeshPreUpdate *)
                            FUN_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar19,(Object *)this,
                             MethodInfo__PlayerSocialPopup__SetupFriendButtons__,(MethodInfo *)0x0);
                  pFVar20 = (FriendList_OnFriendListUpdatedDelegate *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pFVar20,(Delegate *)pNVar19,(MethodInfo *)0x0);
                  if (pFVar20 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                    (pFVar18->fields).OnFriendListUpdated =
                         (FriendList_OnFriendListUpdatedDelegate *)0x0;
                  }
                  else {
                    pFVar21 = pFVar7;
                    if (pFVar20->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
                      pFVar21 = pFVar20;
                    }
                    if (pFVar21 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                      FUN_?(pFVar20);
                      pcVar22 = (code *)swi(3);
                      (*pcVar22)();
                      return;
                    }
                    (pFVar18->fields).OnFriendListUpdated = pFVar21;
                    if (pFVar20->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
                      pFVar7 = pFVar20;
                    }
                    if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                      FUN_?(pFVar20);
                      pcVar22 = (code *)swi(3);
                      (*pcVar22)();
                      return;
                    }
                  }
                  if (iRam_? == 0) {
                    return;
                  }
                  uVar23 = (uint)((ulonglong)&pFVar18->fields >> 0xc);
                  lVar24 = (ulonglong)((uVar23 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar25 = *(ulonglong *)(lVar24 + 0xADDR);
                    puVar26 = (ulonglong *)(lVar24 + 0xADDR);
                    LOCK();
                    bVar5 = uVar25 == *puVar26;
                    if (bVar5) {
                      *puVar26 = uVar25 | 1L << (uVar23 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnAcceptFriendClicked() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnAcceptFriendClicked
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apSStackX_18[0] = ::StringLiteral__;
  bVar1 = PlayerSocialPopup_ValidateFriendRequest(this,apSStackX_18,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    PlayerSocialPopup_PostErrorPopup(this,apSStackX_18[0],(MethodInfo *)0x0);
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pFVar2 = (this->fields).friend_1;
  if ((pFVar2 != (Friend *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAcceptFriendShip
              (this_00,(pFVar2->fields).friendID,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAddFriendClicked() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnAddFriendClicked
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apSStackX_18[0] = ::StringLiteral__;
  bVar1 = PlayerSocialPopup_ValidateFriendRequest(this,apSStackX_18,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestFriendShipByID
                      (this_00,(this->fields).profileId,apSStackX_18,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      PlayerSocialPopup_SetupFriendButtons(this,(MethodInfo *)0x0);
      return;
    }
  }
  PlayerSocialPopup_PostErrorPopup(this,apSStackX_18[0],(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnDestroy
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerSocialPopup__FriendRequestReceived__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerSocialPopup__PendingCountChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerSocialPopup__SetupFriendButtons__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) {
    source = (pFVar3->fields).OnFriendRequestReceived;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction)
    ;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__PlayerSocialPopup__FriendRequestReceived__,
               (MethodInfo *)0x0);
    pFVar5 = (FriendList_OnFriendListUpdatedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)pNVar4,(MethodInfo *)0x0);
    pFVar6 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
    if (pFVar5 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
      (pFVar3->fields).OnFriendRequestReceived = (UnityAction *)0x0;
    }
    else {
      pFVar7 = pFVar6;
      if (pFVar5->klass ==
          (FriendList_OnFriendListUpdatedDelegate__Class *)
          TypeInfo__UnityEngine__Events__UnityAction) {
        pFVar7 = pFVar5;
      }
      if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pFVar3->fields).OnFriendRequestReceived = (UnityAction *)pFVar7;
      pFVar7 = pFVar6;
      if (pFVar5->klass ==
          (FriendList_OnFriendListUpdatedDelegate__Class *)
          TypeInfo__UnityEngine__Events__UnityAction) {
        pFVar7 = pFVar5;
      }
      if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pFVar3->fields).OnFriendRequestReceived >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) {
      pUVar14 = (pFVar3->fields).OnPendingCountChanged;
      pDVar15 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(pDVar15,this);
      pDVar15 = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pUVar14,pDVar15,(MethodInfo *)0x0);
      pUVar16 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      if (pDVar15 == (Delegate *)0x0) {
        (pFVar3->fields).OnPendingCountChanged = (UnityAction_1_System_Int32_ *)0x0;
      }
      else {
        pUVar14 = (UnityAction_1_System_Int32_ *)
                  FUN_?(pDVar15,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (pUVar14 == (UnityAction_1_System_Int32_ *)0x0) {
          FUN_?(pDVar15,pUVar16);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pFVar3->fields).OnPendingCountChanged = pUVar14;
        pUVar16 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        lVar10 = FUN_?(pDVar15,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (lVar10 == 0) {
          FUN_?(pDVar15,pUVar16);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pFVar3->fields).OnPendingCountChanged >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) {
        pFVar5 = (pFVar3->fields).OnFriendListUpdated;
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
                 FUN_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)this,MethodInfo__PlayerSocialPopup__SetupFriendButtons__,
                   (MethodInfo *)0x0);
        pFVar5 = (FriendList_OnFriendListUpdatedDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pFVar5,(Delegate *)pNVar4,(MethodInfo *)0x0);
        if (pFVar5 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          (pFVar3->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
        }
        else {
          pFVar7 = pFVar6;
          if (pFVar5->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar7 = pFVar5;
          }
          if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            FUN_?(pFVar5);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (pFVar3->fields).OnFriendListUpdated = pFVar7;
          if (pFVar5->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar6 = pFVar5;
          }
          if (pFVar6 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            FUN_?(pFVar5);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&pFVar3->fields >> 0xc);
          lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar12 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnFriendRequestCanceled() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnFriendRequestCanceled
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) {
    pFVar4 = FriendList::FriendList_GetFriendByProfileID
                        (pFVar3,(this->fields).profileId,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pFVar4 != (Friend *)0x0 &&
        (this_00 = (pMVar2->fields).operationRequests,
        this_00 != (MVNetworkGame_OperationRequests *)0x0)))) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestRejectFriendShip
                (this_00,(pFVar4->fields).friendID,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__Styles);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar5 = (this->fields).pendingFriendship;
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,0,(MethodInfo *)0x0);
        pGVar5 = (this->fields).cancel;
        if (pGVar5 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0,(MethodInfo *)0x0);
          pGVar5 = (this->fields).acceptFriendRequest;
          if (pGVar5 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
               (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) {
              pFVar4 = FriendList::FriendList_GetFriendByProfileID
                                  (pFVar3,(this->fields).profileId,(MethodInfo *)0x0);
              bVar6 = iRam_? != 0;
              (this->fields).friend_1 = pFVar4;
              if (bVar6) {
                uVar7 = (uint)((ulonglong)&(this->fields).friend_1 >> 0xc);
                puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar9 = *puVar8;
                  LOCK();
                  uVar10 = *puVar8;
                  if (uVar9 == uVar10) {
                    *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar9 != uVar10);
              }
              pGVar5 = (this->fields).addFriendButton;
              if (pGVar5 != (GameObject *)0x0) {
                pFVar4 = (this->fields).friend_1;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,pFVar4 == (Friend *)0x0,(MethodInfo *)0x0);
                if (pFVar4 == (Friend *)0x0) {
                  return;
                }
                pFVar4 = (this->fields).friend_1;
                if (pFVar4 != (Friend *)0x0) {
                  if ((pFVar4->fields).status == 1) {
                    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (((pMVar2 == (MVNetworkGame *)0x0) ||
                        (pFVar3 = (pMVar2->fields)._Friends_k__BackingField,
                        pFVar3 == (FriendList *)0x0)) ||
                       (this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                   *)(pFVar3->fields).friends,
                       this_01 ==
                       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)0x0)) goto code_?;
                    value = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]
                            ::
                            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__ContainsValue
                                      (this_01,(Object *)(this->fields).friend_1,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                      );
                    pGVar5 = (this->fields).pendingFriendship;
                    if (pGVar5 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar5,value,(MethodInfo *)0x0);
                    pGVar5 = (this->fields).cancel;
                    if (pGVar5 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar5,value ^ 1,(MethodInfo *)0x0);
                    pGVar5 = (this->fields).acceptFriendRequest;
                    if (pGVar5 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar5,value ^ 1,(MethodInfo *)0x0);
                  }
                  pFVar4 = (this->fields).friend_1;
                  if (pFVar4 != (Friend *)0x0) {
                    iVar11 = (pFVar4->fields).status;
                    if (iVar11 == 2) {
                      pTVar12 = (this->fields).playerName;
                      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      pCVar13 = Styles::Styles_GetColor
                                          (&CStack_14,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0
                                          );
                      if (pTVar12 == (Text *)0x0) goto code_?;
                      CStack_14.r = pCVar13->r;
                      CStack_14.g = pCVar13->g;
                      CStack_14.b = pCVar13->b;
                      CStack_14.a = pCVar13->a;
                      (*(pTVar12->klass->vtable).set_color.methodPtr)(pTVar12,&CStack_14);
                    }
                    pGVar5 = (this->fields).friendButtonsGameObject;
                    if (pGVar5 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar5,iVar11 != 2,(MethodInfo *)0x0);
                      pGVar5 = (this->fields).isFriendTextObject;
                      if (pGVar5 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar5,iVar11 == 2,(MethodInfo *)0x0);
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
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnOpenAdminController() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnOpenAdminController
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerSocialPopup____c__DisplayClass19_0___OnOpenAdminController_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerSocialPopup____c__DisplayClass19_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerSocialPopup____c__DisplayClass19_1___OnOpenAdminController_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerSocialPopup____c__DisplayClass19_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 == (MVLocalPlayer *)0x0)) goto code_?;
  if (0 < (this_01->fields)._._ProfileID_k__BackingField) {
    pUVar3 = (this_01->fields)._._UserProfileData_k__BackingField;
    if (pUVar3 == (UserProfileData *)0x0) goto code_?;
    if ((pUVar3->fields).IsAdmin != 0) {
      object = (Object *)FUN_?(TypeInfo__PlayerSocialPopup____c__DisplayClass19_0);
      original = (this->fields).adminToolsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                          );
      if (object == (Object *)0x0) goto code_?;
      bVar5 = iRam_? != 0;
      object[1].klass = pOVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pTVar10 = (this->fields).playerName;
      pOVar4 = object[1].klass;
      if ((pTVar10 == (Text *)0x0) ||
         (pSVar11 = (String *)
                    (*(pTVar10->klass->vtable).get_text.methodPtr)
                              (pTVar10,(pTVar10->klass->vtable).get_text.method),
         pOVar4 == (Object__Class *)0x0)) goto code_?;
      AdminToolController::AdminToolController_Initialize
                ((AdminToolController *)pOVar4,pSVar11,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      method_1 = 
      MethodInfo__PlayerSocialPopup____c__DisplayClass19_0___OnOpenAdminController_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar12 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar12 != (GameSessionData *)0x0) {
    if ((pGVar12->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar12 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar12 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar12->fields).gameMode != 4) {
        return;
      }
    }
    pLVar13 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(this_01,(MethodInfo *)0x0);
    if (pLVar13 != (List_1_MV_Common_PlanetPermissionType_ *)0x0) {
      if ((pLVar13->fields)._size == 0) {
        return;
      }
      iVar14 = FUN_?(pLVar13,CONCAT71((int7)((ulonglong)
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                                                  ->klass >> 8),0x16));
      if (iVar14 == -1) {
        return;
      }
      object = (Object *)FUN_?(TypeInfo__PlayerSocialPopup____c__DisplayClass19_1);
      original_00 = (this->fields).ownerToolsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_00,
                           OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                          );
      if (object != (Object *)0x0) {
        bVar5 = iRam_? != 0;
        object[1].klass = pOVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pTVar10 = (this->fields).playerName;
        pOVar4 = object[1].klass;
        if ((pTVar10 != (Text *)0x0) &&
           (pSVar11 = (String *)
                      (*(pTVar10->klass->vtable).get_text.methodPtr)
                                (pTVar10,(pTVar10->klass->vtable).get_text.method),
           pOVar4 != (Object__Class *)0x0)) {
          OwnerToolController::OwnerToolController_Initialize
                    ((OwnerToolController *)pOVar4,pSVar11,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          method_1 = 
          MethodInfo__PlayerSocialPopup____c__DisplayClass19_1___OnOpenAdminController_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
          ;
code_?:
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,object,method_1,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,this_02,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnViewProfileClicked() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnViewProfileClicked
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Goto_profile_of_player__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).profileId,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Goto_profile_of_player__,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  puStackX_8 = (uint16_t *)CONCAT44(puStackX_8._4_4_,(this->fields).profileId);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar1 = (pGVar2->fields).playerProfileURL;
  str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&puStackX_8,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (pSVar1,str1,::StringLiteral__,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_8 = (uint16_t *)0x0;
  puStack_4 = (uint16_t *)0x0;
  uStack_5 = 0;
  uStack_6 = 0;
  ppuStack_7 = &puStackX_8;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_4 = (uint16_t *)0x1;
      uStack_5 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar8 = (pSVar1->fields)._stringLength;
      puStackX_8 = &(pSVar1->fields)._firstChar;
      if (iVar8 == 0) {
        puStackX_8 = (uint16_t *)0x0;
      }
      uStack_5 = CONCAT44(uStack_5._4_4_,iVar8);
      puStack_4 = puStackX_8;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(&puStack_4);
  return;
}


/* Void PendingCountChanged(Int32) */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_PendingCountChanged
               (PlayerSocialPopup *this,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).pendingFriendship;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).cancel;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).acceptFriendRequest;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           (pFVar4 = (pMVar3->fields)._Friends_k__BackingField, pFVar4 != (FriendList *)0x0)) {
          pFVar5 = FriendList::FriendList_GetFriendByProfileID
                              (pFVar4,(this->fields).profileId,(MethodInfo *)0x0);
          bVar6 = iRam_? != 0;
          (this->fields).friend_1 = pFVar5;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(this->fields).friend_1 >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          pGVar1 = (this->fields).addFriendButton;
          if (pGVar1 != (GameObject *)0x0) {
            pFVar5 = (this->fields).friend_1;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,pFVar5 == (Friend *)0x0,(MethodInfo *)0x0);
            if (pFVar5 == (Friend *)0x0) {
              return;
            }
            pFVar5 = (this->fields).friend_1;
            if (pFVar5 != (Friend *)0x0) {
              if ((pFVar5->fields).status == 1) {
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar3 == (MVNetworkGame *)0x0) ||
                    (pFVar4 = (pMVar3->fields)._Friends_k__BackingField,
                    pFVar4 == (FriendList *)0x0)) ||
                   (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)(pFVar4->fields).friends,
                   this_00 ==
                   (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)0x0)) goto code_?;
                value = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__ContainsValue
                                  (this_00,(Object *)(this->fields).friend_1,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                  );
                pGVar1 = (this->fields).pendingFriendship;
                if (pGVar1 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value,(MethodInfo *)0x0);
                pGVar1 = (this->fields).cancel;
                if (pGVar1 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value ^ 1,(MethodInfo *)0x0);
                pGVar1 = (this->fields).acceptFriendRequest;
                if (pGVar1 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value ^ 1,(MethodInfo *)0x0);
              }
              pFVar5 = (this->fields).friend_1;
              if (pFVar5 != (Friend *)0x0) {
                iVar11 = (pFVar5->fields).status;
                if (iVar11 == 2) {
                  pTVar12 = (this->fields).playerName;
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pCVar13 = Styles::Styles_GetColor
                                      (&CStack_14,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
                  if (pTVar12 == (Text *)0x0) goto code_?;
                  CStack_14.r = pCVar13->r;
                  CStack_14.g = pCVar13->g;
                  CStack_14.b = pCVar13->b;
                  CStack_14.a = pCVar13->a;
                  (*(pTVar12->klass->vtable).set_color.methodPtr)(pTVar12,&CStack_14);
                }
                pGVar1 = (this->fields).friendButtonsGameObject;
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,iVar11 != 2,(MethodInfo *)0x0);
                  pGVar1 = (this->fields).isFriendTextObject;
                  if (pGVar1 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,iVar11 == 2,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void PostErrorPopup(String) */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_PostErrorPopup
               (PlayerSocialPopup *this,String *error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerSocialPopup____c__DisplayClass24_0___PostErrorPopup_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerSocialPopup____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PlayerSocialPopup____c__DisplayClass24_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)error;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__PlayerSocialPopup____c__DisplayClass24_0___PostErrorPopup_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar7,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar10 = (longlong)(pLVar9->fields)._size;
    uVar3 = 0;
    if (0 < lVar10) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (pLVar9->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar7,(BaseEventData *)0x0,this_01,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar10);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetupFriendButtons() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_SetupFriendButtons
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).pendingFriendship;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).cancel;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).acceptFriendRequest;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           (pFVar4 = (pMVar3->fields)._Friends_k__BackingField, pFVar4 != (FriendList *)0x0)) {
          pFVar5 = FriendList::FriendList_GetFriendByProfileID
                              (pFVar4,(this->fields).profileId,(MethodInfo *)0x0);
          bVar6 = iRam_? != 0;
          (this->fields).friend_1 = pFVar5;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(this->fields).friend_1 >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          pGVar1 = (this->fields).addFriendButton;
          if (pGVar1 != (GameObject *)0x0) {
            pFVar5 = (this->fields).friend_1;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,pFVar5 == (Friend *)0x0,(MethodInfo *)0x0);
            if (pFVar5 == (Friend *)0x0) {
              return;
            }
            pFVar5 = (this->fields).friend_1;
            if (pFVar5 != (Friend *)0x0) {
              if ((pFVar5->fields).status == 1) {
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar3 == (MVNetworkGame *)0x0) ||
                    (pFVar4 = (pMVar3->fields)._Friends_k__BackingField,
                    pFVar4 == (FriendList *)0x0)) ||
                   (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)(pFVar4->fields).friends,
                   this_00 ==
                   (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)0x0)) goto code_?;
                value = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__ContainsValue
                                  (this_00,(Object *)(this->fields).friend_1,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                  );
                pGVar1 = (this->fields).pendingFriendship;
                if (pGVar1 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value,(MethodInfo *)0x0);
                pGVar1 = (this->fields).cancel;
                if (pGVar1 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value ^ 1,(MethodInfo *)0x0);
                pGVar1 = (this->fields).acceptFriendRequest;
                if (pGVar1 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value ^ 1,(MethodInfo *)0x0);
              }
              pFVar5 = (this->fields).friend_1;
              if (pFVar5 != (Friend *)0x0) {
                iVar11 = (pFVar5->fields).status;
                if (iVar11 == 2) {
                  pTVar12 = (this->fields).playerName;
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pCVar13 = Styles::Styles_GetColor
                                      (&CStack_14,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
                  if (pTVar12 == (Text *)0x0) goto code_?;
                  CStack_14.r = pCVar13->r;
                  CStack_14.g = pCVar13->g;
                  CStack_14.b = pCVar13->b;
                  CStack_14.a = pCVar13->a;
                  (*(pTVar12->klass->vtable).set_color.methodPtr)(pTVar12,&CStack_14);
                }
                pGVar1 = (this->fields).friendButtonsGameObject;
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,iVar11 != 2,(MethodInfo *)0x0);
                  pGVar1 = (this->fields).isFriendTextObject;
                  if (pGVar1 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,iVar11 == 2,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean ValidateFriendRequest(String ByRef) */

bool Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_ValidateFriendRequest
               (PlayerSocialPopup *this,String **error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_can_only_have__0__friends_at);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    level = (pMVar3->fields)._.level;
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar4 = BadgeManager::BadgeManager_GetFriendsLimit(level,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pFVar5 = (pMVar2->fields)._Friends_k__BackingField, pFVar5 != (FriendList *)0x0 &&
        (pDVar6 = (pFVar5->fields).friends, pDVar6 != (Dictionary_2_System_Int32_Friend_ *)0x0)))) {
      if ((pDVar6->fields)._count - (pDVar6->fields)._freeCount < iVar4) {
        bVar7 = 1;
      }
      else {
        if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar8 = BadgeManager::BadgeManager_GetFriendsLimit(level + 1,(MethodInfo *)0x0);
        pSVar9 = TM::TM__(StringLiteral_You_can_only_have__0__friends_at,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
        aiStackX_20[0] = iVar4;
        lVar10 = FUN_?(uRam_?,aiStackX_20);
        if (args == (Object__Array *)0x0) goto code_?;
        if ((lVar10 != 0) &&
           (lVar11 = FUN_?(lVar10,(args->klass->_0).element_class), lVar11 == 0)) {
          uVar12 = FUN_?();
          FUN_?(uVar12,0);
          pcVar13 = (code *)swi(3);
          bVar7 = (*pcVar13)();
          return bVar7;
        }
        FUN_?(args,0,lVar10);
        aiStackX_20[0] = level;
        lVar10 = FUN_?(uRam_?,aiStackX_20);
        if ((lVar10 != 0) &&
           (lVar11 = FUN_?(lVar10,(args->klass->_0).element_class), lVar11 == 0)) {
          uVar12 = FUN_?();
          FUN_?(uVar12,0);
          pcVar13 = (code *)swi(3);
          bVar7 = (*pcVar13)();
          return bVar7;
        }
        FUN_?(args,1,lVar10);
        aiStackX_20[0] = level + 1;
        lVar10 = FUN_?(uRam_?,aiStackX_20);
        if ((lVar10 != 0) &&
           (lVar11 = FUN_?(lVar10,(args->klass->_0).element_class), lVar11 == 0)) {
          uVar12 = FUN_?();
          FUN_?(uVar12,0);
          pcVar13 = (code *)swi(3);
          bVar7 = (*pcVar13)();
          return bVar7;
        }
        FUN_?(args,2,lVar10);
        aiStackX_20[0] = iVar8;
        lVar10 = FUN_?(uRam_?,aiStackX_20);
        if ((lVar10 != 0) &&
           (lVar10 = FUN_?(lVar10,(args->klass->_0).element_class), lVar10 == 0)) {
          uVar12 = FUN_?();
          FUN_?(uVar12,0);
          pcVar13 = (code *)swi(3);
          bVar7 = (*pcVar13)();
          return bVar7;
        }
        FUN_?(args,3);
        PStack_14._arg0 = (Object *)0x0;
        PStack_14._arg1 = (Object *)0x0;
        PStack_14._arg2 = (Object *)0x0;
        PStack_14._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_14,args,(MethodInfo *)0x0);
        PStack_15._arg0 = PStack_14._arg0;
        PStack_15._arg1 = PStack_14._arg1;
        PStack_15._arg2 = PStack_14._arg2;
        PStack_15._args = PStack_14._args;
        pSVar9 = mscorlib.dll::System::String::String_FormatHelper
                            ((IFormatProvider *)0x0,pSVar9,&PStack_15,(MethodInfo *)0x0);
        bVar16 = iRam_? != 0;
        *error = pSVar9;
        if (bVar16) {
          uVar17 = (uint)((ulonglong)error >> 0xc);
          puVar18 = (ulonglong *)((ulonglong)((uVar17 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar19 = *puVar18;
            LOCK();
            uVar20 = *puVar18;
            if (uVar19 == uVar20) {
              *puVar18 = uVar19 | 1L << (uVar17 & 0x3f);
            }
            UNLOCK();
          } while (uVar19 != uVar20);
        }
        bVar7 = 0;
      }
      return bVar7;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar7 = (*pcVar13)();
  return bVar7;
}

