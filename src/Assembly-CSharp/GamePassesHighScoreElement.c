
/* Void DeactivateTopBorder() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_DeactivateTopBorder
               (GamePassesHighScoreElement *this,MethodInfo *method)

{
  pGVar1 = (this->fields).topBorderGameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pGVar1 = (GameObject *)
             mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       ((Void *)pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FriendRequestAccepted(Friend) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::
     GamePassesHighScoreElement_FriendRequestAccepted
               (GamePassesHighScoreElement *this,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if (friend_1 != (Friend *)0x0) {
    if ((friend_1->fields).profileID == (this->fields).profileId) {
      pTVar1 = (this->fields).userNameText;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
      if (pTVar1 == (Text *)0x0) goto code_?;
      CStack_3.r = pCVar2->a;
      CStack_3.g = (float)(pTVar1->klass->vtable).set_color.method;
      (*(pTVar1->klass->vtable).set_color.methodPtr)(pTVar1,pCVar2->r,pCVar2->g,pCVar2->b);
    }
    return;
  }
code_?:
  func_?();
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
    func_?(&MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_);
    func_?(&TypeInfo__FriendList__OnFriendRequestUpdated);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    profileID_00 = profileID;
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pTVar3 = (this->fields).userRankText;
      (this->fields).isLocalPlayerElement =
           profileID == (pMVar2->fields)._._ProfileID_k__BackingField;
      (this->fields).profileId = profileID;
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&userRank,(MethodInfo *)0x0);
      if (pTVar3 != (Text *)0x0) {
        (*(pTVar3->klass->vtable).set_text.methodPtr)
                  (pTVar3,pSVar4,(pTVar3->klass->vtable).set_text.method);
        pTVar3 = (this->fields).userNameText;
        if (pTVar3 != (Text *)0x0) {
          (*(pTVar3->klass->vtable).set_text.methodPtr)
                    (pTVar3,userName,(pTVar3->klass->vtable).set_text.method);
          pTVar3 = (this->fields).userAmountOfGamePointText;
          pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&amountOfGamePoints,(MethodInfo *)0x0);
          if (pTVar3 != (Text *)0x0) {
            (*(pTVar3->klass->vtable).set_text.methodPtr)
                      (pTVar3,pSVar4,(pTVar3->klass->vtable).set_text.method);
            (this->fields).subscriber = isSubscriber;
            if ((this->fields).isLocalPlayerElement == 0) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (pFVar5 = (pMVar1->fields)._Friends_k__BackingField, pFVar5 != (FriendList *)0x0))
              {
                pFVar6 = FriendList::FriendList_GetFriendByProfileID
                                   (pFVar5,profileID_00,(MethodInfo *)0x0);
                if ((pFVar6 != (Friend *)0x0) && ((pFVar6->fields).status == 2)) {
                  pTVar3 = (this->fields).userNameText;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Styles);
                  }
                  pCVar7 = Styles::Styles_GetColor
                                      ((Color *)(auStack_8 + 4),ColorStyle__Enum_FriendGreen,
                                       (MethodInfo *)0x0);
                  if (pTVar3 == (Text *)0x0) goto code_?;
                  auStack_8._0_4_ = (pTVar3->klass->vtable).set_color.method;
                  (*(pTVar3->klass->vtable).set_color.methodPtr)
                            (pTVar3,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a);
                }
                this_00 = (this->fields).embeddedPlayerConfig;
                if (this_00 != (EmbeddedPlayerConfig *)0x0) {
                  pEVar9 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                                      ((EmbeddedSiteConfigData *)auStack_8,this_00,
                                       (MethodInfo *)0x0);
                  if ((pEVar9->allowsOpenInNewTab == 0) && (pEVar9->allowsRedirectToWebpage == 0))
                  {
                    pBVar10 = (this->fields).buttonElement;
                    if (pBVar10 == (Button *)0x0) goto code_?;
                    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                              ((Selectable *)pBVar10,0,(MethodInfo *)0x0);
                  }
code_?:
                  if (isSubscriber != 0) {
                    this_01 = (this->fields).subscriberUI;
                    if (this_01 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_01,1,(MethodInfo *)0x0);
                  }
                  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar1 != (MVNetworkGame *)0x0) &&
                     (pFVar5 = (pMVar1->fields)._Friends_k__BackingField,
                     pFVar5 != (FriendList *)0x0)) {
                    profileID = (int32_t)(pFVar5->fields).OnFriendRequestAccepted;
                    this_02 = (Action_1_Object_ *)
                              func_?(TypeInfo__FriendList__OnFriendRequestUpdated);
                    if (this_02 != (Action_1_Object_ *)0x0) {
                      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                                (this_02,(Object *)this,
                                 MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_
                                 ,(MethodInfo *)0x0);
                      pFVar11 = (FriendList_OnFriendRequestUpdated *)
                                mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)profileID,(Delegate *)this_02,
                                           (MethodInfo *)0x0);
                      uVar12._4_4_ = TypeInfo__FriendList__OnFriendRequestUpdated;
                      uVar12._0_4_ = pFVar11;
                      if (pFVar11 == (FriendList_OnFriendRequestUpdated *)0x0) {
                        (pFVar5->fields).OnFriendRequestAccepted =
                             (FriendList_OnFriendRequestUpdated *)0x0;
                        ppFStack_13 = &(pFVar5->fields).OnFriendRequestAccepted;
                        pFStack_14 = (FriendList_OnFriendRequestUpdated *)0x0;
                        auStack_8._4_4_ = &UNK_?;
                        func_?();
                        return;
                      }
                      pFVar15 = (FriendList_OnFriendRequestUpdated *)0x0;
                      if (pFVar11->klass == TypeInfo__FriendList__OnFriendRequestUpdated) {
                        pFVar15 = pFVar11;
                      }
                      if (pFVar15 != (FriendList_OnFriendRequestUpdated *)0x0) {
                        (pFVar5->fields).OnFriendRequestAccepted = pFVar15;
                        uVar12._4_4_ = TypeInfo__FriendList__OnFriendRequestUpdated;
                        pFStack_14 = (FriendList_OnFriendRequestUpdated *)0x0;
                        if (pFVar11->klass == TypeInfo__FriendList__OnFriendRequestUpdated) {
                          pFStack_14 = pFVar11;
                        }
                        if (pFStack_14 != (FriendList_OnFriendRequestUpdated *)0x0) {
                          ppFStack_13 = &(pFVar5->fields).OnFriendRequestAccepted;
                          auStack_8._4_4_ = &UNK_?;
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
            else {
              pIVar16 = (this->fields).backgroundImage;
              if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Styles);
              }
              pCVar7 = Styles::Styles_GetColor
                                  ((Color *)(auStack_8 + 4),ColorStyle__Enum_OffGray,
                                   (MethodInfo *)0x0);
              if (pIVar16 != (Image *)0x0) {
                (*(pIVar16->klass->vtable).set_color.methodPtr)
                          (pIVar16,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                           (pIVar16->klass->vtable).set_color.method);
                pBVar10 = (this->fields).buttonElement;
                if (pBVar10 != (Button *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                            ((Selectable *)pBVar10,0,(MethodInfo *)0x0);
                  pTVar3 = (this->fields).userRankText;
                  pCVar7 = Styles::Styles_GetColor
                                      ((Color *)(auStack_8 + 4),ColorStyle__Enum_Gray,
                                       (MethodInfo *)0x0);
                  if (pTVar3 != (Text *)0x0) {
                    (*(pTVar3->klass->vtable).set_color.methodPtr)
                              (pTVar3,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                               (pTVar3->klass->vtable).set_color.method);
                    pTVar3 = (this->fields).userNameText;
                    pCVar7 = Styles::Styles_GetColor
                                        ((Color *)(auStack_8 + 4),ColorStyle__Enum_Gray,
                                         (MethodInfo *)0x0);
                    if (pTVar3 != (Text *)0x0) {
                      (*(pTVar3->klass->vtable).set_color.methodPtr)
                                (pTVar3,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                                 (pTVar3->klass->vtable).set_color.method);
                      pTVar3 = (this->fields).userAmountOfGamePointText;
                      pCVar7 = Styles::Styles_GetColor
                                          ((Color *)(auStack_8 + 4),ColorStyle__Enum_Gray,
                                           (MethodInfo *)0x0);
                      if (pTVar3 != (Text *)0x0) {
                        (*(pTVar3->klass->vtable).set_color.methodPtr)
                                  (pTVar3,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                                   (pTVar3->klass->vtable).set_color.method);
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
  uVar12 = func_?();
code_?:
  auStack_8._4_4_ = &UNK_?;
  _ppFStack_10 = uVar12;
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnClick
               (GamePassesHighScoreElement *this,MethodInfo *method)

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
                    PlayerSocialPopup_MethodInfo__UnityEngine__Object__Instantiate<PlayerSocialPopup>_PlayerSocialPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesHighScoreElement____c__DisplayClass15_0___OnClick_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesHighScoreElement____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__GamePassesHighScoreElement____c__DisplayClass15_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).playerSocialPopup;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        PlayerSocialPopup_MethodInfo__UnityEngine__Object__Instantiate<PlayerSocialPopup>_PlayerSocialPopup_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pTVar2 = (this->fields).userNameText;
    remotePlayerProfileId = (this->fields).profileId;
    pOVar1 = value[1].klass;
    if (pTVar2 != (Text *)0x0) {
      name = (String *)
             (*(pTVar2->klass->vtable).get_text.methodPtr)
                       (pTVar2,(pTVar2->klass->vtable).get_text.method);
      if (pOVar1 != (Object__Class *)0x0) {
        PlayerSocialPopup::PlayerSocialPopup_Initialize
                  ((PlayerSocialPopup *)pOVar1,remotePlayerProfileId,name,(this->fields).subscriber,
                   (MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__GamePassesHighScoreElement____c__DisplayClass15_0___OnClick_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
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
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnDestroy
               (GamePassesHighScoreElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_);
    func_?(&TypeInfo__FriendList__OnFriendRequestUpdated);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pFVar2 = (pMVar1->fields)._Friends_k__BackingField;
    if (pFVar2 != (FriendList *)0x0) {
      pFVar3 = (pFVar2->fields).OnFriendRequestAccepted;
      this_00 = (Action_1_Object_ *)func_?(TypeInfo__FriendList__OnFriendRequestUpdated);
      if (this_00 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_,
                   (MethodInfo *)0x0);
        pFVar3 = (FriendList_OnFriendRequestUpdated *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pFVar3,(Delegate *)this_00,(MethodInfo *)0x0);
        uVar4 = CONCAT44(TypeInfo__FriendList__OnFriendRequestUpdated,pFVar3);
        if (pFVar3 == (FriendList_OnFriendRequestUpdated *)0x0) {
          (pFVar2->fields).OnFriendRequestAccepted = (FriendList_OnFriendRequestUpdated *)0x0;
          ppFStack5 = &(pFVar2->fields).OnFriendRequestAccepted;
          pFStack6 = (FriendList_OnFriendRequestUpdated *)0x0;
          func_?();
          return;
        }
        pFVar7 = (FriendList_OnFriendRequestUpdated *)0x0;
        if (pFVar3->klass == TypeInfo__FriendList__OnFriendRequestUpdated) {
          pFVar7 = pFVar3;
        }
        if (pFVar7 != (FriendList_OnFriendRequestUpdated *)0x0) {
          (pFVar2->fields).OnFriendRequestAccepted = pFVar7;
          uVar4 = CONCAT44(TypeInfo__FriendList__OnFriendRequestUpdated,pFVar3);
          pFStack6 = (FriendList_OnFriendRequestUpdated *)0x0;
          if (pFVar3->klass == TypeInfo__FriendList__OnFriendRequestUpdated) {
            pFStack6 = pFVar3;
          }
          if (pFStack6 != (FriendList_OnFriendRequestUpdated *)0x0) {
            ppFStack5 = &(pFVar2->fields).OnFriendRequestAccepted;
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  uVar4 = func_?();
code_?:
  _ppFStack00000018 = uVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnPointerEnter
               (GamePassesHighScoreElement *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) &&
     ((this->fields).isLocalPlayerElement == 0)) {
    pIVar1 = (this->fields).backgroundImage;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_White,(MethodInfo *)0x0);
    if (pIVar1 == (Image *)0x0) {
      CStack_3.g = (float)&UNK_?;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    CStack_3.r = pCVar2->a;
    CStack_3.g = (float)(pIVar1->klass->vtable).set_color.method;
    (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1,pCVar2->r,pCVar2->g,pCVar2->b);
  }
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnPointerExit
               (GamePassesHighScoreElement *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) &&
     ((this->fields).isLocalPlayerElement == 0)) {
    pIVar1 = (this->fields).backgroundImage;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
    if (pIVar1 == (Image *)0x0) {
      CStack_3.g = (float)&UNK_?;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    CStack_3.r = pCVar2->a;
    CStack_3.g = (float)(pIVar1->klass->vtable).set_color.method;
    (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1,pCVar2->r,pCVar2->g,pCVar2->b);
  }
  return;
}

