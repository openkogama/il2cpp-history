
/* Void DeactivateTopBorder() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_DeactivateTopBorder
               (GamePassesHighScoreElement *this,MethodInfo *method)

{
  pGVar1 = (this->fields).topBorderGameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pGVar1 = (GameObject *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0);
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
      CStack_3.g = (float)(pTVar1->klass->vtable).get_raycastTarget.methodPtr;
      (*(code *)(pTVar1->klass->vtable).set_color.method)(pTVar1,pCVar2->r,pCVar2->g,pCVar2->b);
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
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    pDStack_2 = (Delegate *)func_?();
  }
  else {
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    profileID_00 = profileID;
    if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
    unaff_ESI = (FriendList_OnFriendRequestUpdated__Class *)(this->fields).userRankText;
    (this->fields).isLocalPlayerElement = profileID == (pMVar3->fields)._._ProfileID_k__BackingField
    ;
    (this->fields).profileId = profileID;
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&userRank,(MethodInfo *)0x0);
    if (unaff_ESI == (FriendList_OnFriendRequestUpdated__Class *)0x0) goto code_?;
    pIVar5 = (unaff_ESI->_0).image;
    (*(code *)pIVar5[0x12].name)(unaff_ESI,pSVar4,pIVar5[0x12].nameNoExt);
    pTVar6 = (this->fields).userNameText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar6->klass->vtable).set_text.method)
              (pTVar6,userName,(pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    unaff_ESI = (FriendList_OnFriendRequestUpdated__Class *)(this->fields).userAmountOfGamePointText
    ;
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&amountOfGamePoints,(MethodInfo *)0x0);
    if (unaff_ESI == (FriendList_OnFriendRequestUpdated__Class *)0x0) goto code_?;
    pIVar5 = (unaff_ESI->_0).image;
    (*(code *)pIVar5[0x12].name)(unaff_ESI,pSVar4,pIVar5[0x12].nameNoExt);
    (this->fields).subscriber = isSubscriber;
    if ((this->fields).isLocalPlayerElement != 0) {
      unaff_ESI = (FriendList_OnFriendRequestUpdated__Class *)(this->fields).backgroundImage;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pCVar7 = Styles::Styles_GetColor
                         ((Color *)(auStack_8 + 4),ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
      if (unaff_ESI != (FriendList_OnFriendRequestUpdated__Class *)0x0) {
        pIVar5 = (unaff_ESI->_0).image;
        (*(code *)pIVar5[8].metadataHandle)
                  (unaff_ESI,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,pIVar5[8].nameToClassHashTable)
        ;
        pBVar9 = (this->fields).buttonElement;
        if (pBVar9 != (Button *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                    ((Selectable *)pBVar9,0,(MethodInfo *)0x0);
          pTVar6 = (this->fields).userRankText;
          pCVar7 = Styles::Styles_GetColor
                             ((Color *)(auStack_8 + 4),ColorStyle__Enum_Gray,(MethodInfo *)0x0);
          unaff_ESI = (FriendList_OnFriendRequestUpdated__Class *)0x0;
          if (pTVar6 != (Text *)0x0) {
            (*(code *)(pTVar6->klass->vtable).set_color.method)
                      (pTVar6,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                       (pTVar6->klass->vtable).get_raycastTarget.methodPtr);
            pTVar6 = (this->fields).userNameText;
            pCVar7 = Styles::Styles_GetColor
                               ((Color *)(auStack_8 + 4),ColorStyle__Enum_Gray,(MethodInfo *)0x0);
            unaff_ESI = (FriendList_OnFriendRequestUpdated__Class *)0x0;
            if (pTVar6 != (Text *)0x0) {
              (*(code *)(pTVar6->klass->vtable).set_color.method)
                        (pTVar6,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                         (pTVar6->klass->vtable).get_raycastTarget.methodPtr);
              unaff_ESI = (FriendList_OnFriendRequestUpdated__Class *)
                          (this->fields).userAmountOfGamePointText;
              pCVar7 = Styles::Styles_GetColor
                                 ((Color *)(auStack_8 + 4),ColorStyle__Enum_Gray,(MethodInfo *)0x0)
              ;
              if (unaff_ESI != (FriendList_OnFriendRequestUpdated__Class *)0x0) {
                pIVar5 = (unaff_ESI->_0).image;
                (*(code *)pIVar5[8].metadataHandle)
                          (unaff_ESI,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                           pIVar5[8].nameToClassHashTable);
                goto code_?;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar1->fields)._Friends_k__BackingField, this_00 == (FriendList *)0x0))
    goto code_?;
    pFVar10 = FriendList::FriendList_GetFriendByProfileID(this_00,profileID_00,(MethodInfo *)0x0);
    if ((pFVar10 != (Friend *)0x0) && ((pFVar10->fields).status == 2)) {
      unaff_ESI = (FriendList_OnFriendRequestUpdated__Class *)(this->fields).userNameText;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pCVar7 = Styles::Styles_GetColor
                         ((Color *)(auStack_8 + 4),ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
      if (unaff_ESI == (FriendList_OnFriendRequestUpdated__Class *)0x0) goto code_?;
      pIVar5 = (unaff_ESI->_0).image;
      auStack_8._0_4_ = pIVar5[8].nameToClassHashTable;
      (*(code *)pIVar5[8].metadataHandle)(unaff_ESI,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a);
    }
    this_01 = (this->fields).embeddedPlayerConfig;
    if (this_01 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar11 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                        ((EmbeddedSiteConfigData *)auStack_8,this_01,(MethodInfo *)0x0);
    if ((pEVar11->allowsOpenInNewTab == 0) && (pEVar11->allowsRedirectToWebpage == 0)) {
      pBVar9 = (this->fields).buttonElement;
      if (pBVar9 == (Button *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)pBVar9,0,(MethodInfo *)0x0);
    }
code_?:
    if (isSubscriber != 0) {
      this_02 = (this->fields).subscriberUI;
      if (this_02 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    profileID = (int32_t)(pMVar1->fields)._Friends_k__BackingField;
    if ((FriendList *)profileID == (FriendList *)0x0) goto code_?;
    a = (((FriendList *)profileID)->fields).OnFriendRequestAccepted;
    this_03 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__FriendList__OnFriendRequestUpdated);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_,
               (MethodInfo *)0x0);
    pDStack_2 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDStack_2 == (Delegate *)0x0) {
      pFStack_12 = (FriendList_OnFriendRequestUpdated__Class *)0x0;
      *(undefined4 *)(profileID + 0xc) = 0;
      pDStack_2 = (Delegate *)(profileID + 0xc);
      auStack_8._4_4_ = &UNK_?;
      func_?();
      return;
    }
    pDVar13 = (Delegate *)0x0;
    if ((FriendList_OnFriendRequestUpdated__Class *)pDStack_2->klass ==
        TypeInfo__FriendList__OnFriendRequestUpdated) {
      pDVar13 = pDStack_2;
    }
    pFStack_12 = TypeInfo__FriendList__OnFriendRequestUpdated;
    if (pDVar13 == (Delegate *)0x0) goto code_?;
    *(Delegate **)(profileID + 0xc) = pDVar13;
    pFStack_12 = (FriendList_OnFriendRequestUpdated__Class *)(Delegate *)0x0;
    if ((FriendList_OnFriendRequestUpdated__Class *)pDStack_2->klass ==
        TypeInfo__FriendList__OnFriendRequestUpdated) {
      pFStack_12 = (FriendList_OnFriendRequestUpdated__Class *)pDStack_2;
    }
    unaff_ESI = TypeInfo__FriendList__OnFriendRequestUpdated;
    if (pFStack_12 != (FriendList_OnFriendRequestUpdated__Class *)0x0) {
      pDStack_2 = (Delegate *)(profileID + 0xc);
      auStack_8._4_4_ = &UNK_?;
      func_?();
      return;
    }
  }
  auStack_8._4_4_ = &UNK_?;
  pFStack_12 = unaff_ESI;
  pDStack_2 = (Delegate *)func_?();
  pFStack_12 = extraout_ECX;
code_?:
  auStack_8._4_4_ = &UNK_?;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__GamePassesHighScoreElement____c__DisplayClass15_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  pPVar1 = (this->fields).playerSocialPopup;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pLVar2 = (List_1_System_Object_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pPVar1,
                      PlayerSocialPopup_MethodInfo__UnityEngine__Object__Instantiate<PlayerSocialPopup>_PlayerSocialPopup_
                     );
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_00->fields)._._defaultValue_k__BackingField = pLVar2;
    func_?(&this_00->fields,pLVar2);
    pTVar3 = (this->fields).userNameText;
    remotePlayerProfileId = (this->fields).profileId;
    pPVar1 = (PlayerSocialPopup *)(this_00->fields)._._defaultValue_k__BackingField;
    if (pTVar3 != (Text *)0x0) {
      name = (String *)
             (*(code *)(pTVar3->klass->vtable).get_text.method)
                       (pTVar3,(pTVar3->klass->vtable).set_text.methodPtr);
      if (pPVar1 != (PlayerSocialPopup *)0x0) {
        PlayerSocialPopup::PlayerSocialPopup_Initialize
                  (pPVar1,remotePlayerProfileId,name,(this->fields).subscriber,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
                   MethodInfo__GamePassesHighScoreElement____c__DisplayClass15_0___OnClick_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      this_00 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__FriendList__OnFriendRequestUpdated);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
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
  uVar4 = func_?();
code_?:
  _ppFStack00000010 = uVar4;
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
    CStack_3.g = (float)(pIVar1->klass->vtable).get_raycastTarget.methodPtr;
    (*(code *)(pIVar1->klass->vtable).set_color.method)(pIVar1,pCVar2->r,pCVar2->g,pCVar2->b);
  }
  return;
}

