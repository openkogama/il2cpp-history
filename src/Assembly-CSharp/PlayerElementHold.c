
/* Void ActivateSubscriberUI(Boolean) */

void Assembly-CSharp.dll::PlayerElementHold::PlayerElementHold_ActivateSubscriberUI
               (PlayerElementHold *this,bool isFriend,MethodInfo *method)

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

void Assembly-CSharp.dll::PlayerElementHold::PlayerElementHold_Initialize
               (PlayerElementHold *this,MVPlayer *player,GameStatCounterType__Enum typeToDisplay,
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
    value = FriendList::FriendList_GetFriendByProfileID
                      (pFVar3,(player->fields)._ProfileID_k__BackingField,(MethodInfo *)0x0);
    uVar4 = 0;
    if (value == (Friend *)0x0) {
      isFriend = false;
    }
    else {
      isFriend = (value->fields).status == 2;
    }
    pIVar5 = (this->fields).redDot;
    if ((pIVar5 != (Image *)0x0) &&
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
      if ((value != (Friend *)0x0) && ((value->fields).status == 1)) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar2 == (MVNetworkGame *)0x0) ||
            (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 == (FriendList *)0x0)) ||
           (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)(pFVar3->fields).friends,
           this_00 ==
           (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) goto code_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__ContainsValue
                           (this_00,(Object *)value,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                           );
        pIVar5 = (this->fields).redDot;
        if ((pIVar5 == (Image *)0x0) ||
           (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar5,(MethodInfo *)0x0),
           pGVar6 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,bVar7 ^ 1,(MethodInfo *)0x0);
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
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) {
          pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
          fVar10 = _UNK_?;
          fVar11 = _UNK_?;
          fVar12 = _UNK_?;
          fVar13 = _UNK_?;
          if ((MVLocalPlayer *)player == pMVar9) {
            pLVar14 = (this->fields).backgrounds;
            if (pLVar14 != (List_1_UnityEngine_UI_Image_ *)0x0) {
              while( true ) {
                if ((pLVar14->fields)._size <= (int)uVar4) goto code_?;
                pLVar14 = (this->fields).backgrounds;
                if (pLVar14 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
                if ((uint)(pLVar14->fields)._size <= uVar4) {
code_?:
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pIVar16 = (pLVar14->fields)._items;
                if (pIVar16 == (Image__Array *)0x0) break;
                if ((uint)pIVar16->max_length <= uVar4) {
code_?:
                  FUN_?();
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                plVar17 = *(longlong **)((longlong)pIVar16->vector + lVar8 + -0x20);
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
                bVar7 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
                fVar18 = fVar13;
                fVar19 = fVar12;
                fVar20 = fVar11;
                fVar21 = fVar10;
                if (bVar7 != 0) {
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__Styles);
                  }
                  this_02 = TypeInfo__Styles->static_fields->colorStylesDictionary;
                  if ((this_02 == (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) ||
                     (pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
                                           0x26,
                                           MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                                          ), pOVar22 == (Object *)0x0)) break;
                  fVar18 = *(float *)((longlong)&pOVar22[1].klass + 4);
                  fVar19 = *(float *)&pOVar22[1].monitor;
                  fVar20 = *(float *)((longlong)&pOVar22[1].monitor + 4);
                  fVar21 = *(float *)&pOVar22[2].klass;
                }
                if (plVar17 == (longlong *)0x0) break;
                CStack_23.r = fVar18;
                CStack_23.g = fVar19;
                CStack_23.b = fVar20;
                CStack_23.a = fVar21;
                (**(code **)(*plVar17 + 0x2a8))(plVar17,&CStack_23,*(undefined8 *)(*plVar17 + 0x2b0));
                pLVar14 = (this->fields).backgrounds;
                uVar4 = uVar4 + 1;
                lVar8 = lVar8 + 8;
                if (pLVar14 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
              }
            }
          }
          else {
code_?:
            pSVar24 = (player->fields)._SubscriptionRules_k__BackingField;
            if ((pSVar24 != (SubscriptionRulesWrapper *)0x0) &&
               (pSVar25 = (pSVar24->fields).subscriptionBase, pSVar25 != (SubscriptionBase *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_03 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                        (pSVar25->fields).benefits;
              if (this_03 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
                iVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,UnityEngine::Vector3]::
                         Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                   (this_03,1,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                                    ->klass->rgctx_data[0x21].method);
                if (iVar26 < 0) {
                  pGVar6 = (this->fields).memberUI;
                  if (pGVar6 == (GameObject *)0x0) goto code_?;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar27 = (pGVar6->fields)._.m_CachedPtr;
                  if (pvVar27 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar6,(MethodInfo *)0x0);
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pcVar15 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                    uVar28 = func_?(&UNK_?);
                    FUN_?(uVar28,0);
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pcRam_? = pcVar15;
                  (*pcRam_?)(pvVar27,0);
                }
                else {
                  PlayerElementHold_ActivateSubscriberUI(this,isFriend,(MethodInfo *)0x0);
                }
                if (((player->fields)._UserProfileData_k__BackingField != (UserProfileData *)0x0) &&
                   (pTVar29 = (this->fields).playerName, pTVar29 != (Text *)0x0)) {
                  (*(pTVar29->klass->vtable).set_text.methodPtr)();
                  pTVar29 = (this->fields).score;
                  if ((char)typeToDisplay == '\0') {
                    if (pTVar29 != (Text *)0x0) {
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
                      CVar30._.m_CachedPtr = (pTVar29->fields)._._._._._._._;
                      if (CVar30._.m_CachedPtr == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar29,(MethodInfo *)0x0);
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      pcVar15 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
                      {
                        uVar28 = func_?(&UNK_?);
                        FUN_?(uVar28,0);
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      pcRam_? = pcVar15;
                      pvVar27 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                      pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                Unmarshal_UnmarshalUnityObject
                                          (pvVar27,
                                           UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                          );
                      if (pOVar22 != (Object *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar31 = pOVar22[1].klass;
                        if (pOVar31 != (Object__Class *)0x0) {
                          pcVar15 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar15 = (code *)FUN_?(&UNK_?),
                             pcVar15 == (code *)0x0)) {
                            uVar28 = func_?(&UNK_?);
                            FUN_?(uVar28,0);
                            pcVar15 = (code *)swi(3);
                            (*pcVar15)();
                            return;
                          }
                          pcRam_? = pcVar15;
                          (*pcRam_?)(pOVar31,0);
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar22,(MethodInfo *)0x0);
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                    }
                  }
                  else if (pTVar29 != (Text *)0x0) {
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
                    CVar30._.m_CachedPtr = (pTVar29->fields)._._._._._._._;
                    if (CVar30._.m_CachedPtr == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar29,(MethodInfo *)0x0);
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
                      return;
                    }
                    pcVar15 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                      uVar28 = func_?(&UNK_?);
                      FUN_?(uVar28,0);
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
                      return;
                    }
                    pcRam_? = pcVar15;
                    pvVar27 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                    pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                              Unmarshal_UnmarshalUnityObject
                                        (pvVar27,
                                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                        );
                    if (pOVar22 != (Object *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar31 = pOVar22[1].klass;
                      if (pOVar31 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar22,(MethodInfo *)0x0);
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      pcVar15 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
                      {
                        uVar28 = func_?(&UNK_?);
                        FUN_?(uVar28,0);
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      pcRam_? = pcVar15;
                      (*pcRam_?)(pOVar31,1);
                      pTVar29 = (this->fields).score;
                      pSVar32 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                          (scoreValue,typeToDisplay & 0xff,(MethodInfo *)0x0);
                      if (pTVar29 != (Text *)0x0) {
                        (*(pTVar29->klass->vtable).set_text.methodPtr)
                                  (pTVar29,pSVar32,(pTVar29->klass->vtable).set_text.method);
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
        pTVar29 = (this->fields).playerName;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar33 = Styles::Styles_GetColor(&CStack_23,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0)
        ;
        if (pTVar29 != (Text *)0x0) {
          CStack_23.r = pCVar33->r;
          CStack_23.g = pCVar33->g;
          CStack_23.b = pCVar33->b;
          CStack_23.a = pCVar33->a;
          (*(pTVar29->klass->vtable).set_color.methodPtr)(pTVar29);
          pLVar14 = (this->fields).backgrounds;
          uVar34 = 0;
          if (pLVar14 != (List_1_UnityEngine_UI_Image_ *)0x0) {
            lVar35 = 0x20;
            do {
              if ((pLVar14->fields)._size <= (int)uVar34) goto code_?;
              pLVar14 = (this->fields).backgrounds;
              if (pLVar14 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
              if ((uint)(pLVar14->fields)._size <= uVar34) goto code_?;
              pIVar16 = (pLVar14->fields)._items;
              if (pIVar16 == (Image__Array *)0x0) break;
              if ((uint)pIVar16->max_length <= uVar34) goto code_?;
              plVar17 = *(longlong **)((longlong)pIVar16->vector + lVar35 + -0x20);
              if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                FUN_?();
              }
              pCVar33 = Styles::Styles_GetColor
                                  (aCStack_36,ColorStyle__Enum_FriendListBackground,
                                   (MethodInfo *)0x0);
              if (plVar17 == (longlong *)0x0) break;
              CStack_23.r = pCVar33->r;
              CStack_23.g = pCVar33->g;
              CStack_23.b = pCVar33->b;
              CStack_23.a = pCVar33->a;
              (**(code **)(*plVar17 + 0x2a8))(plVar17);
              pLVar14 = (this->fields).backgrounds;
              uVar34 = uVar34 + 1;
              lVar35 = lVar35 + 8;
            } while (pLVar14 != (List_1_UnityEngine_UI_Image_ *)0x0);
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

