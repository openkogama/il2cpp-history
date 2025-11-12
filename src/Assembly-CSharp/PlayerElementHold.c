
/* Void ActivateSubscriberUI(Boolean) */

void Assembly-CSharp.dll::PlayerElementHold::PlayerElementHold_ActivateSubscriberUI(PlayerElementHold *this,bool isFriend,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_);
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
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(this_00,1,(MethodInfo *)0x0);
    this_01 = (this->fields).nonMemberUI;
    if (this_01 != (Image *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this_01,0,(MethodInfo *)0x0);
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
          (*(pTVar1->klass->vtable).set_color.methodPtr)(pTVar1,aCStack_3,(pTVar1->klass->vtable).set_color.method);
          pLVar4 = (this->fields).backgrounds;
          uVar5 = 0;
          if (pLVar4 != (List_1_UnityEngine_UI_Image_ *)0x0) {
            lVar6 = 0x20;
            while( true ) {
              if ((pLVar4->fields)._size <= (int)uVar5) {
                return;
              }
              pLVar4 = (this->fields).backgrounds;
              if (pLVar4 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
              if ((uint)(pLVar4->fields)._size <= uVar5) {
                mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pIVar8 = (pLVar4->fields)._items;
              if (pIVar8 == (Image__Array *)0x0) break;
              if ((uint)pIVar8->max_length <= uVar5) {
                FUN_?();
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              plVar9 = *(longlong **)((longlong)pIVar8->vector + lVar6 + -0x20);
              if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_);
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
              bVar10 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
              fVar11 = 1.0;
              fVar12 = 0.0;
              fVar13 = 1.0;
              fVar14 = 1.0;
              if (bVar10 != 0) {
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__Styles);
                }
                this_02 = TypeInfo__Styles->static_fields->colorStylesDictionary;
                if ((this_02 == (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) || (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0x1c,MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_), pOVar15 == (Object *)0x0)) break;
                fVar11 = *(float *)((longlong)&pOVar15[1].klass + 4);
                fVar12 = *(float *)&pOVar15[1].monitor;
                fVar13 = *(float *)((longlong)&pOVar15[1].monitor + 4);
                fVar14 = *(float *)&pOVar15[2].klass;
              }
              if (plVar9 == (longlong *)0x0) break;
              aCStack_3[0].r = fVar11;
              aCStack_3[0].g = fVar12;
              aCStack_3[0].b = fVar13;
              aCStack_3[0].a = fVar14;
              (**(code **)(*plVar9 + 0x2a8))(plVar9,aCStack_3,*(undefined8 *)(*plVar9 + 0x2b0));
              pLVar4 = (this->fields).backgrounds;
              uVar5 = uVar5 + 1;
              lVar6 = lVar6 + 8;
              if (pLVar4 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(MVPlayer, GameStatCounterType, Int32) */

void Assembly-CSharp.dll::PlayerElementHold::PlayerElementHold_Initialize(PlayerElementHold *this,MVPlayer *player,GameStatCounterType__Enum typeToDisplay,int32_t scoreValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_);
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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) && (player != (MVPlayer *)0x0)) && (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) {
    value = FriendList::FriendList_GetFriendByProfileID(pFVar3,(player->fields)._ProfileID_k__BackingField,(MethodInfo *)0x0);
    uVar4 = 0;
    if (value == (Friend *)0x0) {
      isFriend = false;
    }
    else {
      isFriend = (value->fields).status == 2;
    }
    pIVar5 = (this->fields).redDot;
    if ((pIVar5 != (Image *)0x0) && (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar6,0,(MethodInfo *)0x0);
      if ((value != (Friend *)0x0) && ((value->fields).status == 1)) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar2 == (MVNetworkGame *)0x0) || (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 == (FriendList *)0x0)) || (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_ *)(pFVar3->fields).friends, this_00 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_ *)0x0)) goto code_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__ContainsValue(this_00,(Object *)value,MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_);
        pIVar5 = (this->fields).redDot;
        if ((pIVar5 == (Image *)0x0) || (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar6,bVar7 ^ 1,(MethodInfo *)0x0);
      }
      lVar8 = 0x20;
      if (isFriend == false) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) && (this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) {
          pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
          if ((MVLocalPlayer *)player == pMVar9) {
            pLVar10 = (this->fields).backgrounds;
            if (pLVar10 != (List_1_UnityEngine_UI_Image_ *)0x0) {
              while( true ) {
                if ((pLVar10->fields)._size <= (int)uVar4) goto code_?;
                pLVar10 = (this->fields).backgrounds;
                if (pLVar10 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
                if ((uint)(pLVar10->fields)._size <= uVar4) {
code_?:
                  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pIVar12 = (pLVar10->fields)._items;
                if (pIVar12 == (Image__Array *)0x0) break;
                if ((uint)pIVar12->max_length <= uVar4) {
code_?:
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                plVar13 = *(longlong **)((longlong)pIVar12->vector + lVar8 + -0x20);
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_);
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
                bVar7 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
                fVar14 = 1.0;
                fVar15 = 0.0;
                fVar16 = 1.0;
                fVar17 = 1.0;
                if (bVar7 != 0) {
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__Styles);
                  }
                  this_02 = TypeInfo__Styles->static_fields->colorStylesDictionary;
                  if ((this_02 == (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) || (pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0x26,MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_), pOVar18 == (Object *)0x0)) break;
                  fVar14 = *(float *)((longlong)&pOVar18[1].klass + 4);
                  fVar15 = *(float *)&pOVar18[1].monitor;
                  fVar16 = *(float *)((longlong)&pOVar18[1].monitor + 4);
                  fVar17 = *(float *)&pOVar18[2].klass;
                }
                if (plVar13 == (longlong *)0x0) break;
                CStack_19.r = fVar14;
                CStack_19.g = fVar15;
                CStack_19.b = fVar16;
                CStack_19.a = fVar17;
                (**(code **)(*plVar13 + 0x2a8))(plVar13,&CStack_19,*(undefined8 *)(*plVar13 + 0x2b0));
                pLVar10 = (this->fields).backgrounds;
                uVar4 = uVar4 + 1;
                lVar8 = lVar8 + 8;
                if (pLVar10 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
              }
            }
          }
          else {
code_?:
            pSVar20 = (player->fields)._SubscriptionRules_k__BackingField;
            if ((pSVar20 != (SubscriptionRulesWrapper *)0x0) && (pSVar21 = (pSVar20->fields).subscriptionBase, pSVar21 != (SubscriptionBase *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_03 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(pSVar21->fields).benefits;
              if (this_03 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
                iVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry(this_03,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_->klass->rgctx_data[0x21].method);
                if (iVar22 < 0) {
                  pGVar6 = (this->fields).memberUI;
                  if (pGVar6 == (GameObject *)0x0) goto code_?;
                  if (cRam_? == '\0') {
                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar23 = (pGVar6->fields)._.m_CachedPtr;
                  if (pvVar23 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar6,(MethodInfo *)0x0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcVar11 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                    uVar24 = func_?(&UNK_?);
                    FUN_?(uVar24,0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcRam_? = pcVar11;
                  (*pcRam_?)(pvVar23,0);
                }
                else {
                  PlayerElementHold_ActivateSubscriberUI(this,isFriend,(MethodInfo *)0x0);
                }
                if (((player->fields)._UserProfileData_k__BackingField != (UserProfileData *)0x0) && (pTVar25 = (this->fields).playerName, pTVar25 != (Text *)0x0)) {
                  (*(pTVar25->klass->vtable).set_text.methodPtr)();
                  pTVar25 = (this->fields).score;
                  if ((char)typeToDisplay == '\0') {
                    if (pTVar25 != (Text *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                        LOCK();
                        UNLOCK();
                        FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      CVar26._.m_CachedPtr = (pTVar25->fields)._._._._._._._;
                      if (CVar26._.m_CachedPtr == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar25,(MethodInfo *)0x0);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pcVar11 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                        uVar24 = func_?(&UNK_?);
                        FUN_?(uVar24,0);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pcRam_? = pcVar11;
                      pvVar23 = (void *)(*pcRam_?)(CVar26._.m_CachedPtr);
                      pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar23,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                      if (pOVar18 != (Object *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar27 = pOVar18[1].klass;
                        if (pOVar27 != (Object__Class *)0x0) {
                          pcVar11 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                            uVar24 = func_?(&UNK_?);
                            FUN_?(uVar24,0);
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          pcRam_? = pcVar11;
                          (*pcRam_?)(pOVar27,0);
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar18,(MethodInfo *)0x0);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                    }
                  }
                  else if (pTVar25 != (Text *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                      LOCK();
                      UNLOCK();
                      FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    CVar26._.m_CachedPtr = (pTVar25->fields)._._._._._._._;
                    if (CVar26._.m_CachedPtr == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar25,(MethodInfo *)0x0);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pcVar11 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                      uVar24 = func_?(&UNK_?);
                      FUN_?(uVar24,0);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pcRam_? = pcVar11;
                    pvVar23 = (void *)(*pcRam_?)(CVar26._.m_CachedPtr);
                    pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar23,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                    if (pOVar18 != (Object *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar27 = pOVar18[1].klass;
                      if (pOVar27 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar18,(MethodInfo *)0x0);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pcVar11 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                        uVar24 = func_?(&UNK_?);
                        FUN_?(uVar24,0);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pcRam_? = pcVar11;
                      (*pcRam_?)(pOVar27,1);
                      pTVar25 = (this->fields).score;
                      pSVar28 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText(scoreValue,typeToDisplay & 0xff,(MethodInfo *)0x0);
                      if (pTVar25 != (Text *)0x0) {
                        (*(pTVar25->klass->vtable).set_text.methodPtr)(pTVar25,pSVar28,(pTVar25->klass->vtable).set_text.method);
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
      else {
        pTVar25 = (this->fields).playerName;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar29 = Styles::Styles_GetColor(&CStack_19,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
        if (pTVar25 != (Text *)0x0) {
          CStack_19.r = pCVar29->r;
          CStack_19.g = pCVar29->g;
          CStack_19.b = pCVar29->b;
          CStack_19.a = pCVar29->a;
          (*(pTVar25->klass->vtable).set_color.methodPtr)(pTVar25);
          pLVar10 = (this->fields).backgrounds;
          uVar30 = 0;
          if (pLVar10 != (List_1_UnityEngine_UI_Image_ *)0x0) {
            lVar31 = 0x20;
            do {
              if ((pLVar10->fields)._size <= (int)uVar30) goto code_?;
              pLVar10 = (this->fields).backgrounds;
              if (pLVar10 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
              if ((uint)(pLVar10->fields)._size <= uVar30) goto code_?;
              pIVar12 = (pLVar10->fields)._items;
              if (pIVar12 == (Image__Array *)0x0) break;
              if ((uint)pIVar12->max_length <= uVar30) goto code_?;
              plVar13 = *(longlong **)((longlong)pIVar12->vector + lVar31 + -0x20);
              if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                FUN_?();
              }
              pCVar29 = Styles::Styles_GetColor(aCStack_32,ColorStyle__Enum_FriendListBackground,(MethodInfo *)0x0);
              if (plVar13 == (longlong *)0x0) break;
              CStack_19.r = pCVar29->r;
              CStack_19.g = pCVar29->g;
              CStack_19.b = pCVar29->b;
              CStack_19.a = pCVar29->a;
              (**(code **)(*plVar13 + 0x2a8))(plVar13);
              pLVar10 = (this->fields).backgrounds;
              uVar30 = uVar30 + 1;
              lVar31 = lVar31 + 8;
            } while (pLVar10 != (List_1_UnityEngine_UI_Image_ *)0x0);
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

