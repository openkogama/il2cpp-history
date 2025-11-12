
/* Void ActivateSubscriberUI(Boolean) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_ActivateSubscriberUI
               (PlayerElement *this,bool isFriend,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).memberUI;
  (this->fields).subscriber = 1;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    this_01 = (this->fields).nonMemberUI;
    if (this_01 != (Image *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,0,(MethodInfo *)0x0);
      pTVar1 = (this->fields).rank;
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,::StringLiteral__);
        if (isFriend == 0) {
          pTVar1 = (this->fields).playerName;
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          pCVar2 = Styles::Styles_GetColor(aCStack_3,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
          if (pTVar1 == (Text *)0x0) goto code_?;
          aCStack_3[0].r = pCVar2->r;
          aCStack_3[0].g = pCVar2->g;
          aCStack_3[0].b = pCVar2->b;
          aCStack_3[0].a = pCVar2->a;
          (*(pTVar1->klass->vtable).set_color.methodPtr)(pTVar1,aCStack_3);
        }
        pTVar1 = (this->fields).score;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar2 = Styles::Styles_GetColor(aCStack_3,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          aCStack_3[0].r = pCVar2->r;
          aCStack_3[0].g = pCVar2->g;
          aCStack_3[0].b = pCVar2->b;
          aCStack_3[0].a = pCVar2->a;
          (*(pTVar1->klass->vtable).set_color.methodPtr)
                    (pTVar1,aCStack_3,(pTVar1->klass->vtable).set_color.method);
          fVar4 = _UNK_?;
          fVar5 = _UNK_?;
          fVar6 = _UNK_?;
          fVar7 = _UNK_?;
          pLVar8 = (this->fields).backgrounds;
          uVar9 = 0;
          if (pLVar8 != (List_1_UnityEngine_UI_Image_ *)0x0) {
            lVar10 = 0x20;
            while( true ) {
              if ((pLVar8->fields)._size <= (int)uVar9) {
                return;
              }
              pLVar8 = (this->fields).backgrounds;
              if (pLVar8 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
              if ((uint)(pLVar8->fields)._size <= uVar9) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pIVar12 = (pLVar8->fields)._items;
              if (pIVar12 == (Image__Array *)0x0) break;
              if ((uint)pIVar12->max_length <= uVar9) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              plVar13 = *(longlong **)((longlong)pIVar12->vector + lVar10 + -0x20);
              if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__Styles);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar14 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
              fVar15 = fVar7;
              fVar16 = fVar6;
              fVar17 = fVar5;
              fVar18 = fVar4;
              if (bVar14 != 0) {
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__Styles);
                }
                this_02 = TypeInfo__Styles->static_fields->colorStylesDictionary;
                if ((this_02 == (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) ||
                   (pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
                                         0x1c,
                                         MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                                        ), pOVar19 == (Object *)0x0)) break;
                fVar15 = *(float *)((longlong)&pOVar19[1].klass + 4);
                fVar16 = *(float *)&pOVar19[1].monitor;
                fVar17 = *(float *)((longlong)&pOVar19[1].monitor + 4);
                fVar18 = *(float *)&pOVar19[2].klass;
              }
              if (plVar13 == (longlong *)0x0) break;
              aCStack_3[0].r = fVar15;
              aCStack_3[0].g = fVar16;
              aCStack_3[0].b = fVar17;
              aCStack_3[0].a = fVar18;
              (**(code **)(*plVar13 + 0x2a8))(plVar13,aCStack_3,*(undefined8 *)(*plVar13 + 0x2b0));
              pLVar8 = (this->fields).backgrounds;
              uVar9 = uVar9 + 1;
              lVar10 = lVar10 + 8;
              if (pLVar8 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize(MVPlayer, GameStatCounterType, Int32) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_Initialize
               (PlayerElement *this,MVPlayer *player,GameStatCounterType__Enum typeToDisplay,
               int32_t scoreValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                 );
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
      (player != (MVPlayer *)0x0)) &&
     (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) {
    value_00 = FriendList::FriendList_GetFriendByProfileID
                         (pFVar3,(player->fields)._ProfileID_k__BackingField,(MethodInfo *)0x0);
    this_00 = (this->fields).underline;
    if ((this_00 != (Image *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pBVar5 = (this->fields).dotsImage;
      if ((pBVar5 != (Button *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar5,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        pBVar5 = (this->fields).incomingFriendRequestRedDot;
        if ((pBVar5 != (Button *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pBVar5,(MethodInfo *)0x0),
           pGVar4 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          if (value_00 == (Friend *)0x0) {
            bVar6 = false;
          }
          else {
            bVar6 = (value_00->fields).status == 2;
            if ((value_00->fields).status == 1) {
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar2 == (MVNetworkGame *)0x0) ||
                  (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 == (FriendList *)0x0)
                  ) || (this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                   *)(pFVar3->fields).friends,
                       this_01 ==
                       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)0x0)) goto code_?;
              value = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__ContainsValue
                                (this_01,(Object *)value_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                );
              pBVar5 = (this->fields).dotsImage;
              if ((pBVar5 == (Button *)0x0) ||
                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pBVar5,(MethodInfo *)0x0),
                 pGVar4 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,value,(MethodInfo *)0x0);
              pBVar5 = (this->fields).incomingFriendRequestRedDot;
              if ((pBVar5 == (Button *)0x0) ||
                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pBVar5,(MethodInfo *)0x0),
                 pGVar4 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,value ^ 1,(MethodInfo *)0x0);
            }
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
             (pMVar7 = (pMVar2->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0)) {
            pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar7,(MethodInfo *)0x0)
            ;
            if ((MVLocalPlayer *)player == pMVar8) {
              pLVar9 = (this->fields).backgrounds;
              uVar10 = 0;
              if (pLVar9 != (List_1_UnityEngine_UI_Image_ *)0x0) {
                lVar11 = 0x20;
                do {
                  if ((pLVar9->fields)._size <= (int)uVar10) goto code_?;
                  pLVar9 = (this->fields).backgrounds;
                  if (pLVar9 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
                  if ((uint)(pLVar9->fields)._size <= uVar10) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pIVar13 = (pLVar9->fields)._items;
                  if (pIVar13 == (Image__Array *)0x0) break;
                  if ((uint)pIVar13->max_length <= uVar10) {
                    FUN_?();
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  plVar14 = *(longlong **)((longlong)pIVar13->vector + lVar11 + -0x20);
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pCVar15 = Styles::Styles_GetColor
                                      (&CStack_16,ColorStyle__Enum_LocalPlayerBackground,
                                       (MethodInfo *)0x0);
                  if (plVar14 == (longlong *)0x0) break;
                  fStack_17 = pCVar15->r;
                  fStack_18 = pCVar15->g;
                  fStack_19 = pCVar15->b;
                  fStack_20 = pCVar15->a;
                  (**(code **)(*plVar14 + 0x2a8))(plVar14,&fStack_17);
                  pLVar9 = (this->fields).backgrounds;
                  uVar10 = uVar10 + 1;
                  lVar11 = lVar11 + 8;
                } while (pLVar9 != (List_1_UnityEngine_UI_Image_ *)0x0);
              }
            }
            else {
code_?:
              pSVar21 = (player->fields)._SubscriptionRules_k__BackingField;
              if ((pSVar21 != (SubscriptionRulesWrapper *)0x0) &&
                 (pSVar22 = (pSVar21->fields).subscriptionBase, pSVar22 != (SubscriptionBase *)0x0))
              {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                this_02 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                          (pSVar22->fields).benefits;
                if (this_02 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
                  iVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32Enum,UnityEngine::Vector3]::
                           Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                     (this_02,1,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                                      ->klass->rgctx_data[0x21].method);
                  if (iVar23 < 0) {
                    pGVar4 = (this->fields).memberUI;
                    if (pGVar4 == (GameObject *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar24 = (pGVar4->fields)._.m_CachedPtr;
                    if (pvVar24 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar4,(MethodInfo *)0x0)
                      ;
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pcVar12 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                      uVar25 = func_?(&UNK_?);
                      FUN_?(uVar25,0);
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pcRam_? = pcVar12;
                    (*pcRam_?)(pvVar24,0);
                  }
                  else {
                    PlayerElement_ActivateSubscriberUI(this,bVar6,(MethodInfo *)0x0);
                  }
                  if (bVar6 != false) {
                    pTVar26 = (this->fields).playerName;
                    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pCVar15 = Styles::Styles_GetColor
                                        (&CStack_16,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
                    if (pTVar26 == (Text *)0x0) goto code_?;
                    fStack_17 = pCVar15->r;
                    fStack_18 = pCVar15->g;
                    fStack_19 = pCVar15->b;
                    fStack_20 = pCVar15->a;
                    (*(pTVar26->klass->vtable).set_color.methodPtr)
                              (pTVar26,&fStack_17,(pTVar26->klass->vtable).set_color.method);
                  }
                  pUVar27 = (player->fields)._UserProfileData_k__BackingField;
                  if (pUVar27 != (UserProfileData *)0x0) {
                    bVar6 = iRam_? != 0;
                    (this->fields).realPlayerName = (pUVar27->fields).UserName;
                    if (bVar6) {
                      uVar10 = (uint)((ulonglong)&(this->fields).realPlayerName >> 0xc);
                      puVar28 = (ulonglong *)
                               ((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
                      do {
                        uVar29 = *puVar28;
                        LOCK();
                        uVar30 = *puVar28;
                        if (uVar29 == uVar30) {
                          *puVar28 = uVar29 | 1L << (uVar10 & 0x3f);
                        }
                        UNLOCK();
                      } while (uVar29 != uVar30);
                    }
                    pTVar26 = (this->fields).playerName;
                    if (pTVar26 != (Text *)0x0) {
                      (*(pTVar26->klass->vtable).set_text.methodPtr)();
                      pTVar26 = (this->fields).score;
                      if ((char)typeToDisplay == '\0') {
                        if (pTVar26 == (Text *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&
                                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        CVar31._.m_CachedPtr = (pTVar26->fields)._._._._._._._;
                        if (CVar31._.m_CachedPtr == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pTVar26,(MethodInfo *)0x0);
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        pcVar12 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)
                           ) {
                          uVar25 = func_?(&UNK_?);
                          FUN_?(uVar25,0);
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        pcRam_? = pcVar12;
                        pvVar24 = (void *)(*pcRam_?)(CVar31._.m_CachedPtr);
                        pOVar32 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                  Unmarshal_UnmarshalUnityObject
                                            (pvVar24,
                                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                            );
                        if (pOVar32 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar33 = pOVar32[1].klass;
                        if (pOVar33 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException(pOVar32,(MethodInfo *)0x0);
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        pcVar12 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)
                           ) {
                          uVar25 = func_?(&UNK_?);
                          FUN_?(uVar25,0);
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        pcRam_? = pcVar12;
                        (*pcRam_?)(pOVar33);
                      }
                      else {
                        if (pTVar26 == (Text *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&
                                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        CVar31._.m_CachedPtr = (pTVar26->fields)._._._._._._._;
                        if (CVar31._.m_CachedPtr == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pTVar26,(MethodInfo *)0x0);
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        pcVar12 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)
                           ) {
                          uVar25 = func_?(&UNK_?);
                          FUN_?(uVar25,0);
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        pcRam_? = pcVar12;
                        pvVar24 = (void *)(*pcRam_?)(CVar31._.m_CachedPtr);
                        pOVar32 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                  Unmarshal_UnmarshalUnityObject
                                            (pvVar24,
                                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                            );
                        if (pOVar32 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar33 = pOVar32[1].klass;
                        if (pOVar33 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException(pOVar32,(MethodInfo *)0x0);
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        pcVar12 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)
                           ) {
                          uVar25 = func_?(&UNK_?);
                          FUN_?(uVar25,0);
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        pcRam_? = pcVar12;
                        (*pcRam_?)(pOVar33,1);
                        pTVar26 = (this->fields).score;
                        WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                  (scoreValue,typeToDisplay & 0xff,(MethodInfo *)0x0);
                        if (pTVar26 == (Text *)0x0) goto code_?;
                        (*(pTVar26->klass->vtable).set_text.methodPtr)(pTVar26);
                      }
                      iVar34 = (player->fields)._ProfileID_k__BackingField;
                      (this->fields).profileId = iVar34;
                      if (iVar34 != 0) {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if (((pMVar1 == (MVGameControllerBase *)0x0) ||
                            (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
                           (pMVar7 = (pMVar2->fields).playerContainer,
                           pMVar7 == (MVPlayerContainer *)0x0)) goto code_?;
                        pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                            (pMVar7,(MethodInfo *)0x0);
                        if ((MVLocalPlayer *)player != pMVar8) {
                          return;
                        }
                      }
                      pBVar5 = (this->fields).playerNameAndScoreButton;
                      if (pBVar5 != (Button *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                                  ((Selectable *)pBVar5,0,(MethodInfo *)0x0);
                        pBVar5 = (this->fields).dotsImage;
                        if (pBVar5 != (Button *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          OVar35.m_CachedPtr = (pBVar5->fields)._._._._._._.m_CachedPtr;
                          if (OVar35.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pBVar5,(MethodInfo *)0x0);
                            pcVar12 = (code *)swi(3);
                            (*pcVar12)();
                            return;
                          }
                          pcVar12 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar12 = (code *)FUN_?(&UNK_?),
                             pcVar12 == (code *)0x0)) {
                            uVar25 = func_?(&UNK_?);
                            FUN_?(uVar25,0);
                            pcVar12 = (code *)swi(3);
                            (*pcVar12)();
                            return;
                          }
                          pcRam_? = pcVar12;
                          pvVar24 = (void *)(*pcRam_?)(OVar35.m_CachedPtr);
                          pOVar32 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar24,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar32 != (Object *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pOVar33 = pOVar32[1].klass;
                            if (pOVar33 == (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException(pOVar32,(MethodInfo *)0x0);
                              pcVar12 = (code *)swi(3);
                              (*pcVar12)();
                              return;
                            }
                            pcVar12 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar12 = (code *)FUN_?(&UNK_?),
                               pcVar12 == (code *)0x0)) {
                              uVar25 = func_?(&UNK_?);
                              FUN_?(uVar25,0);
                              pcVar12 = (code *)swi(3);
                              (*pcVar12)();
                              return;
                            }
                            pcRam_? = pcVar12;
                            (*pcRam_?)(pOVar33);
                            pBVar5 = (this->fields).incomingFriendRequestRedDot;
                            if (pBVar5 != (Button *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                             );
                                LOCK();
                                UNLOCK();
                                FUN_?(&
                                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              OVar35.m_CachedPtr = (pBVar5->fields)._._._._._._.m_CachedPtr;
                              if (OVar35.m_CachedPtr == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pBVar5,(MethodInfo *)0x0);
                                pcVar12 = (code *)swi(3);
                                (*pcVar12)();
                                return;
                              }
                              pcVar12 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar12 = (code *)FUN_?(&UNK_?),
                                 pcVar12 == (code *)0x0)) {
                                uVar25 = func_?(&UNK_?);
                                FUN_?(uVar25,0);
                                pcVar12 = (code *)swi(3);
                                (*pcVar12)();
                                return;
                              }
                              pcRam_? = pcVar12;
                              pvVar24 = (void *)(*pcRam_?)(OVar35.m_CachedPtr);
                              pOVar32 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal
                                        ::Unmarshal_UnmarshalUnityObject
                                                  (pvVar24,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                              if (pOVar32 != (Object *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar33 = pOVar32[1].klass;
                                if (pOVar33 != (Object__Class *)0x0) {
                                  pcVar12 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar12 = (code *)FUN_?(&UNK_?),
                                     pcVar12 == (code *)0x0)) {
                                    uVar25 = func_?(&UNK_?);
                                    FUN_?(uVar25,0);
                                    pcVar12 = (code *)swi(3);
                                    (*pcVar12)();
                                    return;
                                  }
                                  pcRam_? = pcVar12;
                                  (*pcRam_?)(pOVar33,0);
                                  return;
                                }
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException(pOVar32,(MethodInfo *)0x0)
                                ;
                                pcVar12 = (code *)swi(3);
                                (*pcVar12)();
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
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnPlayerClicked() */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_OnPlayerClicked
               (PlayerElement *this,MethodInfo *method)

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
                  MethodInfo__PlayerElement____c__DisplayClass18_0___OnPlayerClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerElement____c__DisplayClass18_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PlayerElement____c__DisplayClass18_0);
  original = (this->fields).playerSocialPopupPrefab;
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
    if (object[1].klass != (Object__Class *)0x0) {
      PlayerSocialPopup::PlayerSocialPopup_Initialize
                ((PlayerSocialPopup *)object[1].klass,(this->fields).profileId,
                 (this->fields).realPlayerName,(this->fields).subscriber,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__PlayerElement____c__DisplayClass18_0___OnPlayerClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
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
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pTVar14 = (pLVar9->fields)._items;
            if (pTVar14 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar14->max_length <= uVar3) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar15 != 0) {
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
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_OnPointerEnter
               (PlayerElement *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).underline;
  if ((this_00 == (Image *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
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
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_OnPointerExit
               (PlayerElement *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).underline;
  if ((this_00 == (Image *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
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


/* Void UpdateScoreIndex() */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_UpdateScoreIndex
               (PlayerElement *this,MethodInfo *method)

{
  obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (obj_00 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj_00->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    iVar4 = (*pcRam_?)(pvVar1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_5[0]._pointer._value = (void *)0x0;
    aRStack_5[0]._length = 0;
    aRStack_5[0]._12_4_ = 0;
    pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                       (iVar4 + 1,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    obj = (this->fields).memberUI;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar1 = (obj->fields)._.m_CachedPtr;
      if (pvVar1 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      cVar7 = (*pcRam_?)(pvVar1);
      if (cVar7 == '\0') {
        pTVar8 = (this->fields).rank;
        if (pTVar8 == (Text *)0x0) goto code_?;
        (*(pTVar8->klass->vtable).set_text.methodPtr)
                  (pTVar8,pSVar6,(pTVar8->klass->vtable).set_text.method);
      }
      pTVar8 = (this->fields).memberRank;
      if (pTVar8 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pTVar8->klass->vtable).set_text.methodPtr)
                  (pTVar8,pSVar6,(pTVar8->klass->vtable).set_text.method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String get_PlayerName() */

String * Assembly-CSharp.dll::PlayerElement::PlayerElement_get_PlayerName
                   (PlayerElement *this,MethodInfo *method)

{
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (String *)
             (*(pTVar1->klass->vtable).get_text.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable).get_text.method);
    return pSVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}

