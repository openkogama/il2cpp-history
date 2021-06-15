
/* Void DeactivateTopBorder() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_DeactivateTopBorder
               (GamePassesHighScoreElement *this,MethodInfo *method)

{
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).topBorderGameObject;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = (GameObject *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void FriendRequestAccepted(Friend) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::
     GamePassesHighScoreElement_FriendRequestAccepted
               (GamePassesHighScoreElement *this,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (friend_1 != (Friend *)0x0) {
    if ((friend_1->fields).profileID == (this->fields).profileId) {
      pTVar1 = (this->fields).userNameText;
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
      if (pTVar1 == (Text *)0x0) goto code_?;
      CStack_3.r = pCVar2->a;
      CStack_3.g = (float)(pTVar1->klass->vtable).get_raycastTarget.methodPtr;
      (*(code *)(pTVar1->klass->vtable).set_color.method)(pTVar1,pCVar2->r,pCVar2->g,pCVar2->b);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Int32, String, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_Initialize
               (GamePassesHighScoreElement *this,int32_t userRank,String *userName,
               int32_t amountOfGamePoints,int32_t profileID,bool isSubscriber,MethodInfo *method)

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
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      pOVar2 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,(MethodInfo *)0x0
                         );
      profileID_00 = profileID;
      pTVar3 = (this->fields).userRankText;
      (this->fields).profileId = profileID;
      (this->fields).isLocalPlayerElement = (Object *)profileID == pOVar2;
      uVar4 = func_?(&userRank,0);
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)
                  (pTVar3,uVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        pTVar3 = (this->fields).userNameText;
        if (pTVar3 != (Text *)0x0) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)
                    (pTVar3,userName,
                     (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          pTVar3 = (this->fields).userAmountOfGamePointText;
          uVar4 = func_?(&amountOfGamePoints,0);
          if (pTVar3 != (Text *)0x0) {
            (*(code *)(pTVar3->klass->vtable).set_text.method)
                      (pTVar3,uVar4,
                       (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            (this->fields).subscriber = isSubscriber;
            if ((this->fields).isLocalPlayerElement == 0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar1 != (MVNetworkGame *)0x0) {
                this_03 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                    ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0);
                if (this_03 != (ThemeSkybox *)0x0) {
                  pFVar5 = FriendList::FriendList_GetFriendByProfileID
                                     ((FriendList *)this_03,profileID_00,(MethodInfo *)0x0);
                  if ((pFVar5 != (Friend *)0x0) && ((pFVar5->fields).status == 2)) {
                    pTVar3 = (this->fields).userNameText;
                    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__Styles->_1).cctor_started == 0)) {
                      func_?();
                    }
                    Styles::Styles_GetColor
                              ((Color *)&stack0xffffffec,ColorStyle__Enum_FriendGreen,
                               (MethodInfo *)0x0);
                    if (pTVar3 == (Text *)0x0) goto code_?;
                    (*(code *)(pTVar3->klass->vtable).set_color.method)();
                  }
                  this_00 = (this->fields).embeddedPlayerConfig;
                  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
                    pEVar6 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                                       ((EmbeddedSiteConfigData *)&stack0xffffffec,this_00,
                                        (MethodInfo *)0x0);
                    if ((pEVar6->allowsOpenInNewTab == 0) && (pEVar6->allowsRedirectToWebpage == 0))
                    {
                      pBVar7 = (this->fields).buttonElement;
                      if (pBVar7 == (Button *)0x0) goto code_?;
                      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                                ((Selectable *)pBVar7,0,(MethodInfo *)0x0);
                    }
code_?:
                    if (isSubscriber != 0) {
                      this_01 = (this->fields).subscriberUI;
                      if (this_01 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_01,1,(MethodInfo *)0x0);
                    }
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVGameControllerBase);
                    }
                    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (pMVar1 != (MVNetworkGame *)0x0) {
                      profileID = (int32_t)CloudyThemeBase::CloudyThemeBase_get_Skybox
                                                     ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0);
                      if ((ThemeSkybox *)profileID != (ThemeSkybox *)0x0) {
                        pDVar8 = (Delegate *)
                                  (((ThemeSkybox *)profileID)->fields).skyboxMaterialSerialized;
                        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?(TypeInfo__FriendList__OnFriendRequestUpdated);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (this_04,(Object *)this,
                                   MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_
                                   ,(MethodInfo *)0x0);
                        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                            (pDVar8,(Delegate *)this_04,(MethodInfo *)0x0);
                        pDVar8 = (Delegate *)0x0;
                        if (pDVar9 == (Delegate *)0x0) {
code_?:
                          *(Delegate **)(profileID + 0xc) = pDVar8;
                          return;
                        }
                        if ((FriendList_OnFriendRequestUpdated__Class *)pDVar9->klass ==
                            TypeInfo__FriendList__OnFriendRequestUpdated) {
                          pDVar8 = pDVar9;
                        }
                        if (pDVar8 != (Delegate *)0x0) goto code_?;
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
            else {
              pIVar10 = (this->fields).backgroundImage;
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?(TypeInfo__Styles);
              }
              pCVar11 = Styles::Styles_GetColor
                                  ((Color *)&stack0xffffffec,ColorStyle__Enum_OffGray,
                                   (MethodInfo *)0x0);
              if (pIVar10 != (Image *)0x0) {
                (*(code *)(pIVar10->klass->vtable).set_color.method)
                          (pIVar10,pCVar11->r,pCVar11->g,pCVar11->b,pCVar11->a,
                           (pIVar10->klass->vtable).get_raycastTarget.methodPtr);
                pBVar7 = (this->fields).buttonElement;
                if (pBVar7 != (Button *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                            ((Selectable *)pBVar7,0,(MethodInfo *)0x0);
                  pTVar3 = (this->fields).userRankText;
                  pCVar11 = Styles::Styles_GetColor
                                      ((Color *)&stack0xffffffec,ColorStyle__Enum_Gray,
                                       (MethodInfo *)0x0);
                  if (pTVar3 != (Text *)0x0) {
                    (*(code *)(pTVar3->klass->vtable).set_color.method)
                              (pTVar3,pCVar11->r,pCVar11->g,pCVar11->b,pCVar11->a,
                               (pTVar3->klass->vtable).get_raycastTarget.methodPtr);
                    pTVar3 = (this->fields).userNameText;
                    pCVar11 = Styles::Styles_GetColor
                                        ((Color *)&stack0xffffffec,ColorStyle__Enum_Gray,
                                         (MethodInfo *)0x0);
                    if (pTVar3 != (Text *)0x0) {
                      (*(code *)(pTVar3->klass->vtable).set_color.method)
                                (pTVar3,pCVar11->r,pCVar11->g,pCVar11->b,pCVar11->a,
                                 (pTVar3->klass->vtable).get_raycastTarget.methodPtr);
                      pTVar3 = (this->fields).userAmountOfGamePointText;
                      pCVar11 = Styles::Styles_GetColor
                                          ((Color *)&stack0xffffffec,ColorStyle__Enum_Gray,
                                           (MethodInfo *)0x0);
                      if (pTVar3 != (Text *)0x0) {
                        (*(code *)(pTVar3->klass->vtable).set_color.method)
                                  (pTVar3,pCVar11->r,pCVar11->g,pCVar11->b,pCVar11->a,
                                   (pTVar3->klass->vtable).get_raycastTarget.methodPtr);
                        goto code_?;
                      }
                    }
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
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnClick
               (GamePassesHighScoreElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesHighScoreElement___OnClick_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pPVar1 = (this->fields).playerSocialPopup;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pPVar1 = (PlayerSocialPopup *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pPVar1,
                      PlayerSocialPopup_MethodInfo__UnityEngine__Object__Instantiate<PlayerSocialPopup>_PlayerSocialPopup_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pPVar1;
    pTVar2 = (this->fields).userNameText;
    remotePlayerProfileId = (this->fields).profileId;
    if (pTVar2 != (Text *)0x0) {
      name = (String *)
             (*(code *)(pTVar2->klass->vtable).get_text.method)
                       (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr);
      if (pPVar1 != (PlayerSocialPopup *)0x0) {
        PlayerSocialPopup::PlayerSocialPopup_Initialize
                  (pPVar1,remotePlayerProfileId,name,(this->fields).subscriber,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__GamePassesHighScoreElement___OnClick_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnDestroy
               (GamePassesHighScoreElement *this,MethodInfo *method)

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
    pTVar1 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                       ((CloudyThemeBase *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (ThemeSkybox *)0x0) {
      pDVar2 = (Delegate *)(pTVar1->fields).skyboxMaterialSerialized;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__FriendList__OnFriendRequestUpdated);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_,
                 (MethodInfo *)0x0);
      pDStack3 =
           mscorlib.dll::System::Delegate::Delegate_Remove
                     (pDVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      pDVar2 = (Delegate *)0x0;
      if (pDStack3 == (Delegate *)0x0) {
code_?:
        (pTVar1->fields).skyboxMaterialSerialized = (ThemeSkybox_PlatformSpecificMaterial *)pDVar2;
        return;
      }
      if ((FriendList_OnFriendRequestUpdated__Class *)pDStack3->klass ==
          TypeInfo__FriendList__OnFriendRequestUpdated) {
        pDVar2 = pDStack3;
      }
      pFStack4 = TypeInfo__FriendList__OnFriendRequestUpdated;
      if (pDVar2 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pDStack3 = extraout_ECX;
  pFStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnPointerEnter
               (GamePassesHighScoreElement *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isLocalPlayerElement == 0) {
    pIVar1 = (this->fields).backgroundImage;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_White,(MethodInfo *)0x0);
    if (pIVar1 == (Image *)0x0) {
      CStack_3.g = 0.0;
      CStack_3.r = (float)&UNK_?;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    CStack_3.r = pCVar2->a;
    CStack_3.g = (float)(pIVar1->klass->vtable).get_raycastTarget.methodPtr;
    (*(code *)(pIVar1->klass->vtable).set_color.method)(pIVar1,pCVar2->r,pCVar2->g,pCVar2->b);
  }
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnPointerExit
               (GamePassesHighScoreElement *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isLocalPlayerElement == 0) {
    pIVar1 = (this->fields).backgroundImage;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
    if (pIVar1 == (Image *)0x0) {
      CStack_3.g = 0.0;
      CStack_3.r = (float)&UNK_?;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    CStack_3.r = pCVar2->a;
    CStack_3.g = (float)(pIVar1->klass->vtable).get_raycastTarget.methodPtr;
    (*(code *)(pIVar1->klass->vtable).set_color.method)(pIVar1,pCVar2->r,pCVar2->g,pCVar2->b);
  }
  return;
}

