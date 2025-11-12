
/* Void DeactivateTopBorder() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_DeactivateTopBorder
               (GamePassesHighScoreElement *this,MethodInfo *method)

{
  obj = (this->fields).topBorderGameObject;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void FriendRequestAccepted(Friend) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::
     GamePassesHighScoreElement_FriendRequestAccepted
               (GamePassesHighScoreElement *this,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (friend_1 != (Friend *)0x0) {
    if ((friend_1->fields).profileID == (this->fields).profileId) {
      pTVar1 = (this->fields).userNameText;
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
      if (pTVar1 == (Text *)0x0) goto code_?;
      CStack_3.r = pCVar2->r;
      CStack_3.g = pCVar2->g;
      CStack_3.b = pCVar2->b;
      CStack_3.a = pCVar2->a;
      (*(pTVar1->klass->vtable).set_color.methodPtr)
                (pTVar1,&CStack_3,(pTVar1->klass->vtable).set_color.method);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Int32, String, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_Initialize
               (GamePassesHighScoreElement *this,int32_t userRank,String *userName,
               int32_t amountOfGamePoints,int32_t profileID,bool isSubscriber,MethodInfo *method)

{
  aIStackX_10[0].m_value = userRank;
  aIStackX_20[0].m_value = amountOfGamePoints;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FriendList__OnFriendRequestUpdated);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
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
    iVar4 = (pMVar3->fields)._._ProfileID_k__BackingField;
    pTVar5 = (this->fields).userRankText;
    (this->fields).profileId = profileID;
    (this->fields).isLocalPlayerElement = profileID == iVar4;
    pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    if (pTVar5 != (Text *)0x0) {
      (*(pTVar5->klass->vtable).set_text.methodPtr)
                (pTVar5,pSVar6,(pTVar5->klass->vtable).set_text.method);
      pTVar5 = (this->fields).userNameText;
      if (pTVar5 != (Text *)0x0) {
        (*(pTVar5->klass->vtable).set_text.methodPtr)
                  (pTVar5,userName,(pTVar5->klass->vtable).set_text.method);
        pTVar5 = (this->fields).userAmountOfGamePointText;
        pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
        if (pTVar5 != (Text *)0x0) {
          (*(pTVar5->klass->vtable).set_text.methodPtr)(pTVar5,pSVar6);
          (this->fields).subscriber = isSubscriber;
          if ((this->fields).isLocalPlayerElement == 0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 == (MVGameControllerBase *)0x0) ||
                (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
               (pFVar7 = (pMVar2->fields)._Friends_k__BackingField, pFVar7 == (FriendList *)0x0))
            goto code_?;
            pFVar8 = FriendList::FriendList_GetFriendByProfileID
                                (pFVar7,profileID,(MethodInfo *)0x0);
            if ((pFVar8 != (Friend *)0x0) && ((pFVar8->fields).status == 2)) {
              pTVar5 = (this->fields).userNameText;
              if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                FUN_?();
              }
              pCVar9 = Styles::Styles_GetColor
                                  (&CStack_10,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
              if (pTVar5 == (Text *)0x0) goto code_?;
              CStack_10.r = pCVar9->r;
              CStack_10.g = pCVar9->g;
              CStack_10.b = pCVar9->b;
              CStack_10.a = pCVar9->a;
              (*(pTVar5->klass->vtable).set_color.methodPtr)(pTVar5);
            }
            pEVar11 = (this->fields).embeddedPlayerConfig;
            if (pEVar11 == (EmbeddedPlayerConfig *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((pEVar11->fields).initialized == 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0)
              ;
              bVar12 = (pEVar11->fields).kogamaDefaultData.allowsOpenInNewTab;
              bVar13 = (pEVar11->fields).kogamaDefaultData.allowsRedirectToWebpage;
              uVar14._0_1_ = (pEVar11->fields).kogamaDefaultData.integratedSdk;
              uVar14._1_1_ = (pEVar11->fields).kogamaDefaultData.allowsFallbackAds;
              uVar14._2_1_ = (pEVar11->fields).kogamaDefaultData.showPlayButtonAd;
              uVar14._3_1_ = (pEVar11->fields).kogamaDefaultData.hideGoldShop;
              uVar15 = (pEVar11->fields).kogamaDefaultData.allowInHouseAds;
              uVar16 = (pEVar11->fields).kogamaDefaultData.removeFullscreenButton;
              uVar17 = (pEVar11->fields).kogamaDefaultData.hideSignUp;
              uVar18 = (pEVar11->fields).kogamaDefaultData.noPlayButtonVideoIcon;
              uVar19 = CONCAT11(uVar18,uVar17);
              uVar20 = CONCAT21(uVar19,uVar16);
              uVar14._4_4_ = CONCAT31(uVar20,uVar15);
              uVar21 = (undefined4)uVar14;
              uVar22._4_4_ = uVar14._4_4_;
            }
            else {
              bVar12 = (pEVar11->fields).currentSite.allowsOpenInNewTab;
              bVar13 = (pEVar11->fields).currentSite.allowsRedirectToWebpage;
              uVar22._0_1_ = (pEVar11->fields).currentSite.integratedSdk;
              uVar22._1_1_ = (pEVar11->fields).currentSite.allowsFallbackAds;
              uVar22._2_1_ = (pEVar11->fields).currentSite.showPlayButtonAd;
              uVar22._3_1_ = (pEVar11->fields).currentSite.hideGoldShop;
              uVar23 = (pEVar11->fields).currentSite.allowInHouseAds;
              uVar24 = (pEVar11->fields).currentSite.removeFullscreenButton;
              uVar25 = (pEVar11->fields).currentSite.hideSignUp;
              uVar26 = (pEVar11->fields).currentSite.noPlayButtonVideoIcon;
              uVar27 = CONCAT11(uVar26,uVar25);
              uVar28 = CONCAT21(uVar27,uVar24);
              uVar22._4_4_ = CONCAT31(uVar28,uVar23);
              uVar21 = (undefined4)uVar22;
            }
            uStack_29 = CONCAT44(uVar22._4_4_,uVar21);
            if ((bVar12 == 0) && (bVar13 == 0)) {
              pBVar30 = (this->fields).buttonElement;
              if (pBVar30 == (Button *)0x0) goto code_?;
              UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                        ((Selectable *)pBVar30,0,(MethodInfo *)0x0);
            }
          }
          else {
            pIVar31 = (this->fields).backgroundImage;
            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
              FUN_?();
            }
            pCVar9 = Styles::Styles_GetColor(&CStack_10,ColorStyle__Enum_OffGray,(MethodInfo *)0x0)
            ;
            if (pIVar31 == (Image *)0x0) goto code_?;
            CStack_10.r = pCVar9->r;
            CStack_10.g = pCVar9->g;
            CStack_10.b = pCVar9->b;
            CStack_10.a = pCVar9->a;
            (*(pIVar31->klass->vtable).set_color.methodPtr)(pIVar31);
            pBVar30 = (this->fields).buttonElement;
            if (pBVar30 == (Button *)0x0) goto code_?;
            UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                      ((Selectable *)pBVar30,0,(MethodInfo *)0x0);
            pTVar5 = (this->fields).userRankText;
            pCVar9 = Styles::Styles_GetColor(&CStack_10,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
            if (pTVar5 == (Text *)0x0) goto code_?;
            CStack_10.r = pCVar9->r;
            CStack_10.g = pCVar9->g;
            CStack_10.b = pCVar9->b;
            CStack_10.a = pCVar9->a;
            (*(pTVar5->klass->vtable).set_color.methodPtr)(pTVar5,&CStack_10);
            pTVar5 = (this->fields).userNameText;
            pCVar9 = Styles::Styles_GetColor(&CStack_10,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
            if (pTVar5 == (Text *)0x0) goto code_?;
            CStack_10.r = pCVar9->r;
            CStack_10.g = pCVar9->g;
            CStack_10.b = pCVar9->b;
            CStack_10.a = pCVar9->a;
            (*(pTVar5->klass->vtable).set_color.methodPtr)(pTVar5,&CStack_10);
            pTVar5 = (this->fields).userAmountOfGamePointText;
            pCVar9 = Styles::Styles_GetColor(&CStack_10,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
            if (pTVar5 == (Text *)0x0) goto code_?;
            CStack_10.r = pCVar9->r;
            CStack_10.g = pCVar9->g;
            CStack_10.b = pCVar9->b;
            CStack_10.a = pCVar9->a;
            (*(pTVar5->klass->vtable).set_color.methodPtr)(pTVar5,&CStack_10);
          }
          if (isSubscriber != 0) {
            this_01 = (this->fields).subscriberUI;
            if (this_01 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
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
             (pFVar7 = (pMVar2->fields)._Friends_k__BackingField, pFVar7 != (FriendList *)0x0)) {
            pFVar32 = (pFVar7->fields).OnFriendRequestAccepted;
            this_02 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__FriendList__OnFriendRequestUpdated);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_02,(Object *)this,
                       MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_,
                       (MethodInfo *)0x0);
            pFVar32 = (FriendList_OnFriendRequestUpdated *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pFVar32,(Delegate *)this_02,(MethodInfo *)0x0);
            if (pFVar32 == (FriendList_OnFriendRequestUpdated *)0x0) {
              (pFVar7->fields).OnFriendRequestAccepted = (FriendList_OnFriendRequestUpdated *)0x0;
            }
            else {
              pFVar33 = (FriendList_OnFriendRequestUpdated *)0x0;
              if (pFVar32->klass == TypeInfo__FriendList__OnFriendRequestUpdated) {
                pFVar33 = pFVar32;
              }
              if (pFVar33 == (FriendList_OnFriendRequestUpdated *)0x0) {
                FUN_?(pFVar32,TypeInfo__FriendList__OnFriendRequestUpdated);
                pcVar34 = (code *)swi(3);
                (*pcVar34)();
                return;
              }
              (pFVar7->fields).OnFriendRequestAccepted = pFVar33;
              pFVar33 = (FriendList_OnFriendRequestUpdated *)0x0;
              if (pFVar32->klass == TypeInfo__FriendList__OnFriendRequestUpdated) {
                pFVar33 = pFVar32;
              }
              if (pFVar33 == (FriendList_OnFriendRequestUpdated *)0x0) {
                FUN_?();
                pcVar34 = (code *)swi(3);
                (*pcVar34)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar35 = (uint)((ulonglong)&(pFVar7->fields).OnFriendRequestAccepted >> 0xc);
              puVar36 = (ulonglong *)((ulonglong)((uVar35 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar37 = *puVar36;
                LOCK();
                uVar38 = *puVar36;
                if (uVar37 == uVar38) {
                  *puVar36 = uVar37 | 1L << (uVar35 & 0x3f);
                }
                UNLOCK();
              } while (uVar37 != uVar38);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnClick
               (GamePassesHighScoreElement *this,MethodInfo *method)

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
                  PlayerSocialPopup_MethodInfo__UnityEngine__Object__Instantiate<PlayerSocialPopup>_PlayerSocialPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesHighScoreElement____c__DisplayClass15_0___OnClick_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesHighScoreElement____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesHighScoreElement____c__DisplayClass15_0);
  original = (this->fields).playerSocialPopup;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       PlayerSocialPopup_MethodInfo__UnityEngine__Object__Instantiate<PlayerSocialPopup>_PlayerSocialPopup_
                      );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
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
    pTVar7 = (this->fields).userNameText;
    pOVar1 = object[1].klass;
    remotePlayerProfileId = (this->fields).profileId;
    if ((pTVar7 != (Text *)0x0) &&
       (name = (String *)
               (*(pTVar7->klass->vtable).get_text.methodPtr)
                         (pTVar7,(pTVar7->klass->vtable).get_text.method),
       pOVar1 != (Object__Class *)0x0)) {
      PlayerSocialPopup::PlayerSocialPopup_Initialize
                ((PlayerSocialPopup *)pOVar1,remotePlayerProfileId,name,(this->fields).subscriber,
                 (MethodInfo *)0x0);
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__GamePassesHighScoreElement____c__DisplayClass15_0___OnClick_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar9 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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
        if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar9);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar8,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar11 = (longlong)(pLVar10->fields)._size;
        uVar3 = 0;
        if (0 < lVar11) {
          lVar12 = 0;
          lVar13 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar10->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar15 = (pLVar10->fields)._items;
            if (pTVar15 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar15->max_length <= uVar3) {
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar15->vector + lVar13 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar8,(BaseEventData *)0x0,this_01,
                               (pMVar9->field7_0x38).rgctx_data[1].method);
            if (bVar16 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar12 = lVar12 + 1;
            lVar13 = lVar13 + 8;
          } while (lVar12 < lVar11);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnDestroy
               (GamePassesHighScoreElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FriendList__OnFriendRequestUpdated);
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
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 == (FriendList *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar5 = (pFVar3->fields).OnFriendRequestAccepted;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__FriendList__OnFriendRequestUpdated);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GamePassesHighScoreElement__FriendRequestAccepted_Friend_,(MethodInfo *)0x0
            );
  pFVar5 = (FriendList_OnFriendRequestUpdated *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pFVar5,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pFVar5 == (FriendList_OnFriendRequestUpdated *)0x0) {
    (pFVar3->fields).OnFriendRequestAccepted = (FriendList_OnFriendRequestUpdated *)0x0;
  }
  else {
    pFVar6 = (FriendList_OnFriendRequestUpdated *)0x0;
    if (pFVar5->klass == TypeInfo__FriendList__OnFriendRequestUpdated) {
      pFVar6 = pFVar5;
    }
    if (pFVar6 == (FriendList_OnFriendRequestUpdated *)0x0) {
      FUN_?(pFVar5,TypeInfo__FriendList__OnFriendRequestUpdated);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pFVar3->fields).OnFriendRequestAccepted = pFVar6;
    pFVar6 = (FriendList_OnFriendRequestUpdated *)0x0;
    if (pFVar5->klass == TypeInfo__FriendList__OnFriendRequestUpdated) {
      pFVar6 = pFVar5;
    }
    if (pFVar6 == (FriendList_OnFriendRequestUpdated *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pFVar3->fields).OnFriendRequestAccepted >> 0xc);
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
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnPointerEnter
               (GamePassesHighScoreElement *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
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
  if ((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) &&
     ((this->fields).isLocalPlayerElement == 0)) {
    pIVar1 = (this->fields).backgroundImage;
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_White,(MethodInfo *)0x0);
    if (pIVar1 == (Image *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    CStack_3.r = pCVar2->r;
    CStack_3.g = pCVar2->g;
    CStack_3.b = pCVar2->b;
    CStack_3.a = pCVar2->a;
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,&CStack_3,(pIVar1->klass->vtable).set_color.method);
  }
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::GamePassesHighScoreElement::GamePassesHighScoreElement_OnPointerExit
               (GamePassesHighScoreElement *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
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
  if ((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) &&
     ((this->fields).isLocalPlayerElement == 0)) {
    pIVar1 = (this->fields).backgroundImage;
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
    if (pIVar1 == (Image *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    CStack_3.r = pCVar2->r;
    CStack_3.g = pCVar2->g;
    CStack_3.b = pCVar2->b;
    CStack_3.a = pCVar2->a;
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,&CStack_3,(pIVar1->klass->vtable).set_color.method);
  }
  return;
}

