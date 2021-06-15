
/* Void FriendRequestReceived() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_FriendRequestReceived
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).pendingFriendship;
  if ((pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) &&
     (pGVar2 = (GameObject *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                         (pDVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).cancel;
    if ((pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0) &&
       (pGVar2 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (pDVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).acceptFriendRequest;
      if ((pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (pGVar2 = (GameObject *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (pDVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pTVar4 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                               ((CloudyThemeBase *)pMVar3,(MethodInfo *)0x0),
           pTVar4 != (ThemeSkybox *)0x0)) {
          pFVar5 = FriendList::FriendList_GetFriendByProfileID
                             ((FriendList *)pTVar4,(this->fields).profileId,(MethodInfo *)0x0);
          pGVar2 = (this->fields).addFriendButton;
          (this->fields).friend_1 = pFVar5;
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,pFVar5 == (Friend *)0x0,(MethodInfo *)0x0);
            if (pFVar5 == (Friend *)0x0) {
              return;
            }
            pFVar5 = (this->fields).friend_1;
            if (pFVar5 != (Friend *)0x0) {
              if ((pFVar5->fields).status == 1) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar3 == (MVNetworkGame *)0x0) ||
                    (pTVar4 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                        ((CloudyThemeBase *)pMVar3,(MethodInfo *)0x0),
                    pTVar4 == (ThemeSkybox *)0x0)) ||
                   (this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
                              System.Core.dll::System::Linq::
                              Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                          *)pTVar4,(MethodInfo *)0x0),
                   this_00 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0))
                goto code_?;
                value = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[WinningConditionType,System::Object]::
                        Dictionary_2_WinningConditionType_System_Object__ContainsValue
                                  (this_00,(Object *)(this->fields).friend_1,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                  );
                pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).pendingFriendship;
                if ((pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)0x0) ||
                   (pGVar2 = (GameObject *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,value,(MethodInfo *)0x0);
                pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).cancel;
                if ((pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)0x0) ||
                   (pGVar2 = (GameObject *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,value == 0,(MethodInfo *)0x0);
                pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).acceptFriendRequest;
                if ((pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)0x0) ||
                   (pGVar2 = (GameObject *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,value == 0,(MethodInfo *)0x0);
                pFVar5 = (this->fields).friend_1;
              }
              if (pFVar5 != (Friend *)0x0) {
                iVar6 = (pFVar5->fields).status;
                if (iVar6 == 2) {
                  pTVar7 = (this->fields).playerName;
                  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__Styles->_1).cctor_started == 0)) {
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
                pGVar2 = (this->fields).friendButtonsGameObject;
                if (pGVar2 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,iVar6 != 2,(MethodInfo *)0x0);
                  pGVar2 = (this->fields).isFriendTextObject;
                  if (pGVar2 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,iVar6 == 2,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize(Int32, String, Boolean) */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_Initialize
               (PlayerSocialPopup *this,int32_t remotePlayerProfileId,String *name,bool isSubscriber
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  (this->fields).profileId = remotePlayerProfileId;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,name,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pGVar2 = (this->fields).subscriberFrame;
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,isSubscriber,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar3 == MVGameMode__Enum_Edit) {
        if (this_01 == (MVLocalPlayer *)0x0) goto code_?;
        MVar4 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
        value = MVar4 == MVLocalPlayer_PlanetOwnershipType__Enum_Owner;
      }
      else {
        value = false;
      }
      this_00 = (this->fields).manageUserButton;
      if (this_00 != (Button *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_01 != (MVLocalPlayer *)0x0) {
          bVar5 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_01,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            iVar6 = GamePointGainEffect::GamePointGainEffect_get_ID
                              ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
            if (iVar6 == 0) goto code_?;
            if (*(char *)(iVar6 + 8) != '\0') {
              value = true;
            }
          }
          else {
            value = false;
          }
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,value,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?(TypeInfo__Styles);
            }
            pCVar7 = Styles::Styles_GetColor
                               ((Color *)&stack0xffffffec,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
            fVar8 = pCVar7->r;
            fVar9 = pCVar7->g;
            fVar10 = pCVar7->b;
            fVar11 = pCVar7->a;
            if (isSubscriber != 0) {
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?(TypeInfo__Styles);
              }
              pCVar7 = Styles::Styles_GetColor
                                 ((Color *)&stack0xffffffec,ColorStyle__Enum_OffWhite,
                                  (MethodInfo *)0x0);
              fVar8 = pCVar7->r;
              fVar9 = pCVar7->g;
              fVar10 = pCVar7->b;
              fVar11 = pCVar7->a;
            }
            pTVar1 = (this->fields).playerName;
            if (pTVar1 != (Text *)0x0) {
              (*(code *)(pTVar1->klass->vtable).set_color.method)
                        (pTVar1,fVar8,fVar9,fVar10,fVar11,
                         (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              bVar5 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                ((MethodInfo *)0x0);
              if (bVar5 == 0) {
                PlayerSocialPopup_SetupFriendButtons(this,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar12 != (MVNetworkGame *)0x0) {
                  pTVar13 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                      ((CloudyThemeBase *)pMVar12,(MethodInfo *)0x0);
                  if (pTVar13 != (ThemeSkybox *)0x0) {
                    pDVar14 = (Delegate *)(pTVar13->fields).skyboxMaterial;
                    pUVar15 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar15,(Object *)this,
                               MethodInfo__PlayerSocialPopup__FriendRequestReceived__,
                               (MethodInfo *)0x0);
                    pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        (pDVar14,(Delegate *)pUVar15,(MethodInfo *)0x0);
                    pDVar14 = (Delegate *)0x0;
                    if (pDVar16 != (Delegate *)0x0) {
                      if ((UnityAction__Class *)pDVar16->klass ==
                          TypeInfo__UnityEngine__Events__UnityAction) {
                        pDVar14 = pDVar16;
                      }
                      pUVar17 = (UnityAction_1_System_Int32___Class *)
                                TypeInfo__UnityEngine__Events__UnityAction;
                      if (pDVar14 == (Delegate *)0x0) goto code_?;
                    }
                    (pTVar13->fields).skyboxMaterial = (Material *)pDVar14;
                    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (pMVar12 != (MVNetworkGame *)0x0) {
                      pTVar13 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                          ((CloudyThemeBase *)pMVar12,(MethodInfo *)0x0);
                      if (pTVar13 != (ThemeSkybox *)0x0) {
                        pDVar14 = (Delegate *)(pTVar13->fields)._topColor.r;
                        pUVar15 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?(TypeInfo__UnityEngine__Events__UnityAction<int>
                                                    );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar15,(Object *)this,
                                   MethodInfo__PlayerSocialPopup__PendingCountChanged_int_,
                                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                                  );
                        pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                            (pDVar14,(Delegate *)pUVar15,(MethodInfo *)0x0);
                        pDVar14 = (Delegate *)0x0;
                        if (pDVar16 != (Delegate *)0x0) {
                          if ((UnityAction_1_System_Int32___Class *)pDVar16->klass ==
                              TypeInfo__UnityEngine__Events__UnityAction<int>) {
                            pDVar14 = pDVar16;
                          }
                          pUVar17 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                          if (pDVar14 == (Delegate *)0x0) goto code_?;
                        }
                        (pTVar13->fields)._topColor.r = (float)pDVar14;
                        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game
                                           ((MethodInfo *)0x0);
                        if (pMVar12 != (MVNetworkGame *)0x0) {
                          pTVar13 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                              ((CloudyThemeBase *)pMVar12,(MethodInfo *)0x0);
                          if (pTVar13 != (ThemeSkybox *)0x0) {
                            pDVar14 = (pTVar13->fields)._._._._._.m_CachedPtr;
                            pUVar15 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                       *)func_?(
                                                  TypeInfo__FriendList__OnFriendListUpdatedDelegate)
                            ;
                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                            UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                            SceneManagement::Scene]::
                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                      (pUVar15,(Object *)this,
                                       MethodInfo__PlayerSocialPopup__SetupFriendButtons__,
                                       (MethodInfo *)0x0);
                            pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                (pDVar14,(Delegate *)pUVar15,(MethodInfo *)0x0);
                            pDVar14 = (Delegate *)0x0;
                            if (pDVar16 == (Delegate *)0x0) {
code_?:
                              (pTVar13->fields)._._._._._.m_CachedPtr = pDVar14;
                              return;
                            }
                            if ((FriendList_OnFriendListUpdatedDelegate__Class *)pDVar16->klass ==
                                TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
                              pDVar14 = pDVar16;
                            }
                            pUVar17 = (UnityAction_1_System_Int32___Class *)
                                      TypeInfo__FriendList__OnFriendListUpdatedDelegate;
                            if (pDVar14 != (Delegate *)0x0) goto code_?;
                            goto code_?;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                pGVar2 = (this->fields).friendButtonsGameObject;
                if (pGVar2 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,0,(MethodInfo *)0x0);
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
  func_?(0);
  pDVar16 = extraout_ECX;
  pUVar17 = (UnityAction_1_System_Int32___Class *)extraout_EDX;
code_?:
  func_?(pDVar16,pUVar17);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnAcceptFriendClicked() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnAcceptFriendClicked
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  error = TypeInfo__System__String->static_fields->Empty;
  bVar1 = PlayerSocialPopup_ValidateFriendRequest
                    (this,(String **)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    PlayerSocialPopup_PostErrorPopup(this,error,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  error = TypeInfo__System__String->static_fields->Empty;
  bVar1 = PlayerSocialPopup_ValidateFriendRequest
                    (this,(String **)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pTVar2 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                       ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0);
    if (pTVar2 != (ThemeSkybox *)0x0) {
      pDVar3 = (Delegate *)(pTVar2->fields).skyboxMaterial;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__PlayerSocialPopup__FriendRequestReceived__,
                 (MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pDVar3 = (Delegate *)0x0;
      if (pDVar5 != (Delegate *)0x0) {
        if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar3 = pDVar5;
        }
        pUVar6 = (UnityAction_1_System_Int32___Class *)TypeInfo__UnityEngine__Events__UnityAction;
        if (pDVar3 == (Delegate *)0x0) goto code_?;
      }
      (pTVar2->fields).skyboxMaterial = (Material *)pDVar3;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pTVar2 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                           ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0);
        if (pTVar2 != (ThemeSkybox *)0x0) {
          pDVar3 = (Delegate *)(pTVar2->fields)._topColor.r;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,MethodInfo__PlayerSocialPopup__PendingCountChanged_int_,
                     MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                    );
          pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                             (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pDVar3 = (Delegate *)0x0;
          if (pDVar5 != (Delegate *)0x0) {
            if ((UnityAction_1_System_Int32___Class *)pDVar5->klass ==
                TypeInfo__UnityEngine__Events__UnityAction<int>) {
              pDVar3 = pDVar5;
            }
            pUVar6 = TypeInfo__UnityEngine__Events__UnityAction<int>;
            if (pDVar3 == (Delegate *)0x0) goto code_?;
          }
          (pTVar2->fields)._topColor.r = (float)pDVar3;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pTVar2 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                               ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0);
            if (pTVar2 != (ThemeSkybox *)0x0) {
              pDVar3 = (pTVar2->fields)._._._._._.m_CachedPtr;
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)this,MethodInfo__PlayerSocialPopup__SetupFriendButtons__,
                         (MethodInfo *)0x0);
              pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                                 (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
              pDVar3 = (Delegate *)0x0;
              if (pDVar5 == (Delegate *)0x0) {
code_?:
                (pTVar2->fields)._._._._._.m_CachedPtr = pDVar3;
                return;
              }
              if ((FriendList_OnFriendListUpdatedDelegate__Class *)pDVar5->klass ==
                  TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
                pDVar3 = pDVar5;
              }
              pUVar6 = (UnityAction_1_System_Int32___Class *)
                       TypeInfo__FriendList__OnFriendListUpdatedDelegate;
              if (pDVar3 != (Delegate *)0x0) goto code_?;
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pDVar5 = extraout_ECX;
  pUVar6 = (UnityAction_1_System_Int32___Class *)extraout_EDX;
code_?:
  func_?(pDVar5,pUVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnFriendRequestCanceled() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnFriendRequestCanceled
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                        ((CloudyThemeBase *)this_00,(MethodInfo *)0x0);
    if (this_01 != (ThemeSkybox *)0x0) {
      pFVar1 = FriendList::FriendList_GetFriendByProfileID
                         ((FriendList *)this_01,(unaff_ESI->fields).profileId,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((pFVar1 != (Friend *)0x0) && (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestRejectFriendShip
                  (this_02,(pFVar1->fields).friendID,(MethodInfo *)0x0);
        PlayerSocialPopup_SetupFriendButtons(unaff_ESI,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnOpenAdminController() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnOpenAdminController
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = (MethodInfo *)&UNK_?;
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 == (MVLocalPlayer *)0x0) goto code_?;
    pOVar2 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,(MethodInfo *)0x0);
    if (0 < (int)pOVar2) {
      iVar3 = GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
      if (iVar3 == 0) goto code_?;
      if (*(char *)(iVar3 + 8) != '\0') {
        this_02 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,pMVar1);
        pXVar4 = _UNK_?;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_03 = (AdminToolController *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            (pXVar4,
                             AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                            );
        if (((this_02 == (ScaleAnimationBase *)0x0) ||
            ((this_02->fields)._._._._.m_CachedPtr = this_03, _UNK_? == (int *)0x0)) ||
           (pSVar5 = (String *)
                     (**(code **)(*_UNK_? + 0x300))
                               (_UNK_?,*(undefined4 *)(*_UNK_? + 0x304)),
           this_03 == (AdminToolController *)0x0)) goto code_?;
        AdminToolController::AdminToolController_Initialize(this_03,pSVar5,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
        pMVar1 = 
        MethodInfo__PlayerSocialPopup___OnOpenAdminController_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
        ;
        goto code_?;
      }
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar6 != MVGameMode__Enum_Edit) {
      return;
    }
    MVar7 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    if (MVar7 != MVLocalPlayer_PlanetOwnershipType__Enum_Owner) {
      return;
    }
    this_02 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,pMVar1);
    pXVar4 = _UNK_?;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar4,
                        OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                       );
    if (((this_02 != (ScaleAnimationBase *)0x0) &&
        ((this_02->fields)._._._._.m_CachedPtr = pXVar4, _UNK_? != (int *)0x0)) &&
       (pSVar5 = (String *)
                 (**(code **)(*_UNK_? + 0x300))
                           (_UNK_?,*(undefined4 *)(*_UNK_? + 0x304)),
       pXVar4 != (XpBoostParticlePreviewer *)0x0)) {
      OwnerToolController::OwnerToolController_Initialize
                ((OwnerToolController *)pXVar4,pSVar5,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
      this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      pMVar1 = 
      MethodInfo__PlayerSocialPopup___OnOpenAdminController_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_04,(Object *)this_02,pMVar1,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_04,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnViewProfileClicked() */

void Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_OnViewProfileClicked
               (PlayerSocialPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  this = (PlayerSocialPopup *)(this->fields).profileId;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Goto_profile_of_player__,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  BrowserCommGotoRequests::BrowserCommGotoRequests_GotoPlayerProfile
            ((pPVar1->fields).profileId,1,0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerSocialPopup___PostErrorPopup_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = error;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__PlayerSocialPopup___PostErrorPopup_c__AnonStorey2____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).pendingFriendship;
  if ((pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) &&
     (pGVar2 = (GameObject *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                         (pDVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).cancel;
    if ((pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0) &&
       (pGVar2 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (pDVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).acceptFriendRequest;
      if ((pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (pGVar2 = (GameObject *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (pDVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pTVar4 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                               ((CloudyThemeBase *)pMVar3,(MethodInfo *)0x0),
           pTVar4 != (ThemeSkybox *)0x0)) {
          pFVar5 = FriendList::FriendList_GetFriendByProfileID
                             ((FriendList *)pTVar4,(this->fields).profileId,(MethodInfo *)0x0);
          pGVar2 = (this->fields).addFriendButton;
          (this->fields).friend_1 = pFVar5;
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,pFVar5 == (Friend *)0x0,(MethodInfo *)0x0);
            if (pFVar5 == (Friend *)0x0) {
              return;
            }
            pFVar5 = (this->fields).friend_1;
            if (pFVar5 != (Friend *)0x0) {
              if ((pFVar5->fields).status == 1) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar3 == (MVNetworkGame *)0x0) ||
                    (pTVar4 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                        ((CloudyThemeBase *)pMVar3,(MethodInfo *)0x0),
                    pTVar4 == (ThemeSkybox *)0x0)) ||
                   (this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
                              System.Core.dll::System::Linq::
                              Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                          *)pTVar4,(MethodInfo *)0x0),
                   this_00 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0))
                goto code_?;
                value = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[WinningConditionType,System::Object]::
                        Dictionary_2_WinningConditionType_System_Object__ContainsValue
                                  (this_00,(Object *)(this->fields).friend_1,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                  );
                pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).pendingFriendship;
                if ((pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)0x0) ||
                   (pGVar2 = (GameObject *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,value,(MethodInfo *)0x0);
                pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).cancel;
                if ((pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)0x0) ||
                   (pGVar2 = (GameObject *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,value == 0,(MethodInfo *)0x0);
                pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).acceptFriendRequest;
                if ((pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)0x0) ||
                   (pGVar2 = (GameObject *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,value == 0,(MethodInfo *)0x0);
                pFVar5 = (this->fields).friend_1;
              }
              if (pFVar5 != (Friend *)0x0) {
                iVar6 = (pFVar5->fields).status;
                if (iVar6 == 2) {
                  pTVar7 = (this->fields).playerName;
                  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__Styles->_1).cctor_started == 0)) {
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
                pGVar2 = (this->fields).friendButtonsGameObject;
                if (pGVar2 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,iVar6 != 2,(MethodInfo *)0x0);
                  pGVar2 = (this->fields).isFriendTextObject;
                  if (pGVar2 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,iVar6 == 2,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean ValidateFriendRequest(String ByRef) */

bool Assembly-CSharp.dll::PlayerSocialPopup::PlayerSocialPopup_ValidateFriendRequest
               (PlayerSocialPopup *this,String **error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
  if (this_00 == (MVLocalPlayer *)0x0) goto code_?;
  pOVar2 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)this_00,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  iVar3 = BadgeManager::BadgeManager_GetFriendsLimit((int32_t)pOVar2,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  this_01 = CloudyThemeBase::CloudyThemeBase_get_Skybox((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0)
  ;
  if (this_01 == (ThemeSkybox *)0x0) goto code_?;
  this_02 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
             *)System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
               Int32]::
               Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                         ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                          (MethodInfo *)0x0);
  if (this_02 ==
      (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
       *)0x0) goto code_?;
  pOVar4 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
           Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
           Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     (this_02,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__
                     );
  if ((int)pOVar4 < iVar3) {
    return 1;
  }
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_GetFriendsLimit((int32_t)((int)&pOVar2->klass + 1),(MethodInfo *)0x0);
  format = TM::TM__(StringLiteral_You_can_only_have__0__friends_at,(MethodInfo *)0x0);
  args = (Object__Array *)func_?();
  pOVar2 = (Object *)func_?();
  if (args == (Object__Array *)0x0) goto code_?;
  if (pOVar2 == (Object *)0x0) {
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    pOVar2 = (Object *)func_?();
    if (pOVar2 != (Object *)0x0) {
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    pOVar2 = (Object *)func_?();
    if (pOVar2 != (Object *)0x0) {
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    pOVar2 = (Object *)func_?();
    if (pOVar2 != (Object *)0x0) {
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (3 < args->max_length) {
      args->vector[3] = pOVar2;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSRam00000004 = mscorlib.dll::System::String::String_Format_3(format,args,(MethodInfo *)0x0);
      return 0;
    }
  }
  else {
    iVar5 = func_?();
    if (iVar5 != 0) goto code_?;
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
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

