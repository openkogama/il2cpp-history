
/* Void HandleLevel(AccessoryBundleClient) */

void Assembly-CSharp.dll::BundleView::BundleView_HandleLevel
               (BundleView *this,AccessoryBundleClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    pIVar1 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_DisabledButton,(MethodInfo *)0x0);
    if (pIVar1 != (Image *)0x0) {
      CStack_3.r = pCVar2->r;
      CStack_3.g = pCVar2->g;
      CStack_3.b = pCVar2->b;
      CStack_3.a = pCVar2->a;
      (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1);
      this_01 = (this->fields).shineEffect;
      if ((this_01 != (AccessoryShinyButton *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        pIVar1 = (this->fields).levelLocked;
        if ((pIVar1 != (Image *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar1,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,1,(MethodInfo *)0x0);
          pTVar5 = (this->fields).originalPriceText;
          if ((pTVar5 != (Text *)0x0) &&
             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar5,(MethodInfo *)0x0),
             pGVar4 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
            pTVar5 = (this->fields).discountedPriceText;
            if ((pTVar5 != (Text *)0x0) &&
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar5,(MethodInfo *)0x0),
               pGVar4 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              pTVar5 = (this->fields).bundlePriceWithoutDiscount;
              if ((pTVar5 != (Text *)0x0) &&
                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pTVar5,(MethodInfo *)0x0),
                 pGVar4 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,0,(MethodInfo *)0x0);
                pGVar4 = (this->fields).discountTag;
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0,(MethodInfo *)0x0);
                  pTVar5 = (this->fields).goldSavedText;
                  if ((pTVar5 != (Text *)0x0) &&
                     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pTVar5,(MethodInfo *)0x0),
                     pGVar4 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,0,(MethodInfo *)0x0);
                    pGVar4 = (this->fields).claimText;
                    if (pGVar4 != (GameObject *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                      ,0,0);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (pGVar4 == (GameObject *)0x0) {
                        FUN_?();
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pvVar7 = (pGVar4->fields)._.m_CachedPtr;
                      if (pvVar7 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pGVar4,(MethodInfo *)0x0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcVar6 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam_?)(pvVar7,0);
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
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandlePrices(AccessoryBundleClient) */

void Assembly-CSharp.dll::BundleView::BundleView_HandlePrices
               (BundleView *this,AccessoryBundleClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Bundle_shown__but_all_items_are_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).levelLocked;
  iVar2 = 0;
  (this->fields).originalPrice = 0;
  if ((pIVar1 != (Image *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    this_00 = (this->fields).purchaseButton;
    if (this_00 != (Button *)0x0) {
      pIVar1 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                          ((Selectable *)this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar4 = Styles::Styles_GetColor
                          ((Color *)&BStack_5,ColorStyle__Enum_ButtonSuccess,(MethodInfo *)0x0);
      if (pIVar1 != (Image *)0x0) {
        BStack_5._value = *(void **)pCVar4;
        uStack_6._0_4_ = pCVar4->b;
        uStack_6._4_4_ = pCVar4->a;
        (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1);
        this_01 = (this->fields).shineEffect;
        if (((this_01 != (AccessoryShinyButton *)0x0) &&
            (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_01,(MethodInfo *)0x0),
            pGVar3 != (GameObject *)0x0)) &&
           (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0), accessoryData != (AccessoryBundleClient *)0x0))
        {
          pLVar7 = (accessoryData->fields)._.accessoryBundleItems;
          uVar8 = 0;
          if (pLVar7 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
            lVar9 = 0x20;
            for (; (int)uVar8 < (pLVar7->fields)._size; uVar8 = uVar8 + 1) {
              if ((uint)(pLVar7->fields)._size <= uVar8) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pAVar11 = (pLVar7->fields)._items;
              if (pAVar11 == (AccessoryBundleItem__Array *)0x0) goto code_?;
              if ((uint)pAVar11->max_length <= uVar8) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar12 = *(longlong *)((longlong)pAVar11->vector + lVar9 + -0x20);
              if (lVar12 == 0) goto code_?;
              pAVar13 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                                  (*(int32_t *)(lVar12 + 0x14),(MethodInfo *)0x0);
              if ((pAVar13 != (AccessoryDataClient *)0x0) && ((pAVar13->fields)._.owns == 0)) {
                piVar14 = &(this->fields).originalPrice;
                *piVar14 = *piVar14 + (pAVar13->fields)._.cost;
                iVar2 = iVar2 + 1;
              }
              lVar9 = lVar9 + 8;
            }
            if (iVar2 == 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Bundle_shown__but_all_items_are_,(MethodInfo *)0x0)
              ;
              return;
            }
            pTVar15 = (this->fields).originalPriceText;
            iVar16 = (accessoryData->fields)._.discount;
            (this->fields).price = (this->fields).originalPrice;
            if (pTVar15 != (Text *)0x0) {
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
              CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
              if (CVar17._.m_CachedPtr == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar18 = func_?(&UNK_?);
                FUN_?(uVar18,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
              pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar19,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                  );
              if (pOVar20 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar21 = pOVar20[1].klass;
                if (pOVar21 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar18 = func_?(&UNK_?);
                  FUN_?(uVar18,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                (*pcRam_?)(pOVar21);
                pGVar3 = (this->fields).discountTag;
                if (pGVar3 != (GameObject *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar19 = (pGVar3->fields)._.m_CachedPtr;
                  if (pvVar19 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar18 = func_?(&UNK_?);
                    FUN_?(uVar18,0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  (*pcRam_?)(pvVar19);
                  pTVar15 = (this->fields).goldSavedText;
                  if (pTVar15 != (Text *)0x0) {
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
                    CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                    if (CVar17._.m_CachedPtr == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    pcVar10 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                      uVar18 = func_?(&UNK_?);
                      FUN_?(uVar18,0);
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    pcRam_? = pcVar10;
                    pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
                    pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                              Unmarshal_UnmarshalUnityObject
                                        (pvVar19,
                                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                        );
                    if (pOVar20 != (Object *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar21 = pOVar20[1].klass;
                      if (pOVar21 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pcVar10 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0))
                      {
                        uVar18 = func_?(&UNK_?);
                        FUN_?(uVar18,0);
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pcRam_? = pcVar10;
                      (*pcRam_?)(pOVar21);
                      pGVar3 = (this->fields).claimText;
                      if (pGVar3 != (GameObject *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar19 = (pGVar3->fields)._.m_CachedPtr;
                        if (pvVar19 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pGVar3,(MethodInfo *)0x0);
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        pcVar10 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)
                           ) {
                          uVar18 = func_?(&UNK_?);
                          FUN_?(uVar18,0);
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        pcRam_? = pcVar10;
                        (*pcRam_?)(pvVar19);
                        if (iVar16 < 1) {
                          pTVar15 = (this->fields).discountedPriceText;
                          if (pTVar15 == (Text *)0x0) goto code_?;
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
                          CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                          if (CVar17._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar15,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
                          pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar19,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar20 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar21 = pOVar20[1].klass;
                          if (pOVar21 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          (*pcRam_?)(pOVar21);
                          pTVar15 = (this->fields).bundlePriceWithoutDiscount;
                          if (pTVar15 == (Text *)0x0) goto code_?;
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
                          CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                          if (CVar17._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar15,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
                          pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar19,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar20 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar21 = pOVar20[1].klass;
                          if (pOVar21 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                        }
                        else {
                          pTVar15 = (this->fields).discountTagText;
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Number);
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               ->klass->field_0x135 & 1) == 0) {
                            FUN_?();
                          }
                          uVar8 = 0;
                          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          BStack_5._value = (uint16_t *)0x0;
                          uStack_6 = 0;
                          pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                                              (iVar16,(ReadOnlySpan_1_Char_ *)&BStack_5,
                                               (IFormatProvider *)0x0,(MethodInfo *)0x0);
                          pSVar22 = mscorlib.dll::System::String::String_Concat_5
                                              (::StringLiteral__,pSVar22,::StringLiteral__,
                                               (MethodInfo *)0x0);
                          if (pTVar15 == (Text *)0x0) goto code_?;
                          (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar22);
                          iVar2 = FUN_?(((float)iVar16 / _UNK_?) *
                                                 (float)(this->fields).originalPrice);
                          pTVar15 = (this->fields).originalPriceText;
                          bVar23 = cRam_? == '\0';
                          (this->fields).price = (this->fields).originalPrice - iVar2;
                          pSVar22 = StringLiteral_N0;
                          if (bVar23) {
                            FUN_?(&TypeInfo__System__Number);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          iVar16 = (this->fields).originalPrice;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          puVar24 = (uint16_t *)0x0;
                          if (pSVar22 != (String *)0x0) {
                            BStack_5._value = &(pSVar22->fields)._firstChar;
                            uVar8 = (pSVar22->fields)._stringLength;
                            uStack_6 = (ulonglong)uVar8;
                            puVar24 = BStack_5._value;
                          }
                          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          uStack_6 = (ulonglong)uVar8;
                          BStack_5._value = puVar24;
                          pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                                              (iVar16,(ReadOnlySpan_1_Char_ *)&BStack_5,
                                               (IFormatProvider *)0x0,(MethodInfo *)0x0);
                          if ((pSVar22 == (String *)0x0) ||
                             (pSVar22 = mscorlib.dll::System::String::String_Replace_1
                                                  (pSVar22,::StringLiteral__,::StringLiteral__,
                                                   (MethodInfo *)0x0), pTVar15 == (Text *)0x0))
                          goto code_?;
                          (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar22);
                          pSVar22 = StringLiteral_N0;
                          pTVar15 = (this->fields).goldSavedText;
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Number);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (pSVar22 == (String *)0x0) {
                            puVar24 = (uint16_t *)0x0;
                            uVar8 = 0;
                          }
                          else {
                            BStack_5._value = &(pSVar22->fields)._firstChar;
                            uVar8 = (pSVar22->fields)._stringLength;
                            uStack_6 = (ulonglong)uVar8;
                            puVar24 = BStack_5._value;
                          }
                          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          uStack_6 = (ulonglong)uVar8;
                          BStack_5._value = puVar24;
                          pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                                              (iVar2,(ReadOnlySpan_1_Char_ *)&BStack_5,
                                               (IFormatProvider *)0x0,(MethodInfo *)0x0);
                          if ((pSVar22 == (String *)0x0) ||
                             (mscorlib.dll::System::String::String_Replace_1
                                        (pSVar22,::StringLiteral__,::StringLiteral__,
                                         (MethodInfo *)0x0), pTVar15 == (Text *)0x0))
                          goto code_?;
                          (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15);
                          pTVar15 = (this->fields).discountedPriceText;
                          if (pTVar15 == (Text *)0x0) goto code_?;
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
                          CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                          if (CVar17._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar15,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
                          pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar19,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar20 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar21 = pOVar20[1].klass;
                          if (pOVar21 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          (*pcRam_?)(pOVar21);
                          pTVar15 = (this->fields).bundlePriceWithoutDiscount;
                          if (pTVar15 == (Text *)0x0) goto code_?;
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
                          CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                          if (CVar17._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar15,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
                          pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar19,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar20 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar21 = pOVar20[1].klass;
                          if (pOVar21 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                        }
                        pcRam_? = pcVar10;
                        (*pcRam_?)(pOVar21);
                        if ((this->fields).price == 0) {
                          pGVar3 = (this->fields).discountTag;
                          if (pGVar3 == (GameObject *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar19 = (pGVar3->fields)._.m_CachedPtr;
                          if (pvVar19 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pGVar3,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          (*pcRam_?)(pvVar19);
                          pTVar15 = (this->fields).discountedPriceText;
                          if (pTVar15 == (Text *)0x0) goto code_?;
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
                          CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                          if (CVar17._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar15,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
                          pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar19,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar20 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar21 = pOVar20[1].klass;
                          if (pOVar21 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          (*pcRam_?)(pOVar21);
                          pTVar15 = (this->fields).bundlePriceWithoutDiscount;
                          if (pTVar15 == (Text *)0x0) goto code_?;
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
                          CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                          if (CVar17._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar15,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
                          pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar19,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar20 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar21 = pOVar20[1].klass;
                          if (pOVar21 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          (*pcRam_?)(pOVar21);
                          pTVar15 = (this->fields).originalPriceText;
                          if (pTVar15 == (Text *)0x0) goto code_?;
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
                          CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                          if (CVar17._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar15,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
                          pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar19,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar20 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar21 = pOVar20[1].klass;
                          if (pOVar21 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          (*pcRam_?)(pOVar21);
                          pTVar15 = (this->fields).goldSavedText;
                          if (pTVar15 == (Text *)0x0) goto code_?;
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
                          CVar17._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                          if (CVar17._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar15,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          pvVar19 = (void *)(*pcRam_?)(CVar17._.m_CachedPtr);
                          pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar19,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar20 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar21 = pOVar20[1].klass;
                          if (pOVar21 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          (*pcRam_?)(pOVar21);
                          pGVar3 = (this->fields).claimText;
                          if (pGVar3 == (GameObject *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar19 = (pGVar3->fields)._.m_CachedPtr;
                          if (pvVar19 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pGVar3,(MethodInfo *)0x0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          (*pcRam_?)(pvVar19,1);
                        }
                        pSVar22 = StringLiteral_N0;
                        pTVar15 = (this->fields).discountedPriceText;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__System__Number);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        iVar16 = (this->fields).price;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (pSVar22 == (String *)0x0) {
                          puVar24 = (uint16_t *)0x0;
                          uVar8 = 0;
                        }
                        else {
                          BStack_5._value = &(pSVar22->fields)._firstChar;
                          uVar8 = (pSVar22->fields)._stringLength;
                          uStack_6 = (ulonglong)uVar8;
                          puVar24 = BStack_5._value;
                        }
                        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        uStack_6 = (ulonglong)uVar8;
                        BStack_5._value = puVar24;
                        pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                                            (iVar16,(ReadOnlySpan_1_Char_ *)&BStack_5,
                                             (IFormatProvider *)0x0,(MethodInfo *)0x0);
                        if ((pSVar22 != (String *)0x0) &&
                           (pSVar22 = mscorlib.dll::System::String::String_Replace_1
                                                (pSVar22,::StringLiteral__,::StringLiteral__,
                                                 (MethodInfo *)0x0), pTVar15 != (Text *)0x0)) {
                          (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar22);
                          pSVar22 = StringLiteral_N0;
                          pTVar15 = (this->fields).bundlePriceWithoutDiscount;
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Number);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          iVar16 = (this->fields).price;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (pSVar22 == (String *)0x0) {
                            puVar24 = (uint16_t *)0x0;
                            uVar8 = 0;
                          }
                          else {
                            BStack_5._value = &(pSVar22->fields)._firstChar;
                            uVar8 = (pSVar22->fields)._stringLength;
                            uStack_6 = (ulonglong)uVar8;
                            puVar24 = BStack_5._value;
                          }
                          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          uStack_6 = (ulonglong)uVar8;
                          BStack_5._value = puVar24;
                          pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                                              (iVar16,(ReadOnlySpan_1_Char_ *)&BStack_5,
                                               (IFormatProvider *)0x0,(MethodInfo *)0x0);
                          if ((pSVar22 != (String *)0x0) &&
                             (pSVar22 = mscorlib.dll::System::String::String_Replace_1
                                                  (pSVar22,::StringLiteral__,::StringLiteral__,
                                                   (MethodInfo *)0x0), pTVar15 != (Text *)0x0)) {
                            (*(pTVar15->klass->vtable).set_text.methodPtr)
                                      (pTVar15,pSVar22,(pTVar15->klass->vtable).set_text.method);
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
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::BundleView::BundleView_Initialize(BundleView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if (pAVar1 != (AccessoryShopDataClient *)0x0) {
    bVar2 = iRam_? != 0;
    (this->fields).bundleData = (pAVar1->fields).accessoryBundle;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).bundleData >> 0xc);
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar7 != (MVGameControllerBase *)0x0) &&
        (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar8->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if ((pMVar9 != (MVLocalPlayer *)0x0) &&
         (pAVar10 = (this->fields).bundleData, pAVar10 != (AccessoryBundleClient *)0x0)) {
        if ((pMVar9->fields)._.level < (pAVar10->fields)._.level) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Styles);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pBVar11 = (this->fields).purchaseButton;
          if (pBVar11 != (Button *)0x0) {
            pIVar12 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                ((Selectable *)pBVar11,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
              FUN_?();
            }
            Styles::Styles_GetColor
                      ((Color *)&stack0xffffffffffffffe8,ColorStyle__Enum_DisabledButton,
                       (MethodInfo *)0x0);
            if (pIVar12 != (Image *)0x0) {
              (*(pIVar12->klass->vtable).set_color.methodPtr)(pIVar12);
              pAVar13 = (this->fields).shineEffect;
              if (pAVar13 != (AccessoryShinyButton *)0x0) {
                pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pAVar13,(MethodInfo *)0x0);
                if (pGVar14 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar14,0,(MethodInfo *)0x0);
                  pIVar12 = (this->fields).levelLocked;
                  if (pIVar12 != (Image *)0x0) {
                    pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pIVar12,(MethodInfo *)0x0);
                    if (pGVar14 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar14,1,(MethodInfo *)0x0);
                      pTVar15 = (this->fields).originalPriceText;
                      if (pTVar15 != (Text *)0x0) {
                        pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pTVar15,(MethodInfo *)0x0);
                        if (pGVar14 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar14,0,(MethodInfo *)0x0);
                          pTVar15 = (this->fields).discountedPriceText;
                          if (pTVar15 != (Text *)0x0) {
                            pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)pTVar15,(MethodInfo *)0x0);
                            if (pGVar14 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar14,0,(MethodInfo *)0x0);
                              pTVar15 = (this->fields).bundlePriceWithoutDiscount;
                              if (pTVar15 != (Text *)0x0) {
                                pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)pTVar15,(MethodInfo *)0x0);
                                if (pGVar14 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar14,0,(MethodInfo *)0x0);
                                  pGVar14 = (this->fields).discountTag;
                                  if (pGVar14 != (GameObject *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar14,0,(MethodInfo *)0x0);
                                    pTVar15 = (this->fields).goldSavedText;
                                    if (pTVar15 != (Text *)0x0) {
                                      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_gameObject
                                                          ((Component *)pTVar15,(MethodInfo *)0x0);
                                      if (pGVar14 != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar14,0,(MethodInfo *)0x0);
                                        pGVar14 = (this->fields).claimText;
                                        if (pGVar14 != (GameObject *)0x0) {
                                          if (cRam_? == '\0') {
                                            FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  ,0,0);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          if (pGVar14 != (GameObject *)0x0) {
                                            pvVar16 = (pGVar14->fields)._.m_CachedPtr;
                                            if (pvVar16 == (void *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                              ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                        ((Object *)pGVar14,(MethodInfo *)0x0);
                                              pcVar17 = (code *)swi(3);
                                              (*pcVar17)();
                                              return;
                                            }
                                            pcVar17 = pcRam_?;
                                            if (pcRam_? == (code *)0x0) {
                                              pcVar17 = (code *)FUN_?(&UNK_?);
                                              if (pcVar17 == (code *)0x0) {
                                                uVar18 = func_?(&UNK_?);
                                                FUN_?(uVar18,0);
                                                pcVar17 = (code *)swi(3);
                                                (*pcVar17)();
                                                return;
                                              }
                                            }
                                            pcRam_? = pcVar17;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                            (*pcRam_?)(pvVar16,0);
                                            return;
                                          }
                                          FUN_?();
                                          pcVar17 = (code *)swi(3);
                                          (*pcVar17)();
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
          }
          FUN_?();
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__Styles);
          LOCK();
          UNLOCK();
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_N0);
          LOCK();
          UNLOCK();
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Bundle_shown__but_all_items_are_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar12 = (this->fields).levelLocked;
        iVar19 = 0;
        (this->fields).originalPrice = 0;
        if ((pIVar12 != (Image *)0x0) &&
           (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar12,(MethodInfo *)0x0),
           pGVar14 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar14,0,(MethodInfo *)0x0);
          pBVar11 = (this->fields).purchaseButton;
          if (pBVar11 != (Button *)0x0) {
            pIVar12 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                ((Selectable *)pBVar11,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
              FUN_?();
            }
            pCVar20 = Styles::Styles_GetColor
                                ((Color *)&BStack_21,ColorStyle__Enum_ButtonSuccess,
                                 (MethodInfo *)0x0);
            if (pIVar12 != (Image *)0x0) {
              BStack_21._value = *(void **)pCVar20;
              puStack_22._0_4_ = pCVar20->b;
              puStack_22._4_4_ = pCVar20->a;
              (*(pIVar12->klass->vtable).set_color.methodPtr)(pIVar12);
              pAVar13 = (this->fields).shineEffect;
              if (((pAVar13 != (AccessoryShinyButton *)0x0) &&
                  (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pAVar13,(MethodInfo *)0x0),
                  pGVar14 != (GameObject *)0x0)) &&
                 (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar14,1,(MethodInfo *)0x0), pAVar10 != (AccessoryBundleClient *)0x0))
              {
                pLVar23 = (pAVar10->fields)._.accessoryBundleItems;
                uVar3 = 0;
                if (pLVar23 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
                  lVar24 = 0x20;
                  for (; (int)uVar3 < (pLVar23->fields)._size; uVar3 = uVar3 + 1) {
                    if ((uint)(pLVar23->fields)._size <= uVar3) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    pAVar25 = (pLVar23->fields)._items;
                    if (pAVar25 == (AccessoryBundleItem__Array *)0x0) goto code_?;
                    if ((uint)pAVar25->max_length <= uVar3) {
                      FUN_?();
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    lVar26 = *(longlong *)((longlong)pAVar25->vector + lVar24 + -0x20);
                    if (lVar26 == 0) goto code_?;
                    pAVar27 = AccessoryDataManager::
                              AccessoryDataManager_GetAccessoryDataByMetaDataId
                                        (*(int32_t *)(lVar26 + 0x14),(MethodInfo *)0x0);
                    if ((pAVar27 != (AccessoryDataClient *)0x0) && ((pAVar27->fields)._.owns == 0))
                    {
                      piVar28 = &(this->fields).originalPrice;
                      *piVar28 = *piVar28 + (pAVar27->fields)._.cost;
                      iVar19 = iVar19 + 1;
                    }
                    lVar24 = lVar24 + 8;
                  }
                  if (iVar19 == 0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Bundle_shown__but_all_items_are_,
                               (MethodInfo *)0x0);
                    return;
                  }
                  pTVar15 = (this->fields).originalPriceText;
                  iVar29 = (pAVar10->fields)._.discount;
                  (this->fields).price = (this->fields).originalPrice;
                  if (pTVar15 != (Text *)0x0) {
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
                    CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                    if (CVar30._.m_CachedPtr == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0)
                      ;
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    pcVar17 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
                      uVar18 = func_?(&UNK_?);
                      FUN_?(uVar18,0);
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    pcRam_? = pcVar17;
                    pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                    pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                              Unmarshal_UnmarshalUnityObject
                                        (pvVar16,
                                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                        );
                    if (pOVar31 != (Object *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar32 = pOVar31[1].klass;
                      if (pOVar32 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                        pcVar17 = (code *)swi(3);
                        (*pcVar17)();
                        return;
                      }
                      pcVar17 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
                      {
                        uVar18 = func_?(&UNK_?);
                        FUN_?(uVar18,0);
                        pcVar17 = (code *)swi(3);
                        (*pcVar17)();
                        return;
                      }
                      pcRam_? = pcVar17;
                      (*pcRam_?)(pOVar32);
                      pGVar14 = (this->fields).discountTag;
                      if (pGVar14 != (GameObject *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar16 = (pGVar14->fields)._.m_CachedPtr;
                        if (pvVar16 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pGVar14,(MethodInfo *)0x0);
                          pcVar17 = (code *)swi(3);
                          (*pcVar17)();
                          return;
                        }
                        pcVar17 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)
                           ) {
                          uVar18 = func_?(&UNK_?);
                          FUN_?(uVar18,0);
                          pcVar17 = (code *)swi(3);
                          (*pcVar17)();
                          return;
                        }
                        pcRam_? = pcVar17;
                        (*pcRam_?)(pvVar16);
                        pTVar15 = (this->fields).goldSavedText;
                        if (pTVar15 != (Text *)0x0) {
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
                          CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                          if (CVar30._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar15,(MethodInfo *)0x0);
                            pcVar17 = (code *)swi(3);
                            (*pcVar17)();
                            return;
                          }
                          pcVar17 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar17 = (code *)FUN_?(&UNK_?),
                             pcVar17 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar17 = (code *)swi(3);
                            (*pcVar17)();
                            return;
                          }
                          pcRam_? = pcVar17;
                          pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                          pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar16,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                              );
                          if (pOVar31 != (Object *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pOVar32 = pOVar31[1].klass;
                            if (pOVar32 == (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                            pcVar17 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar17 = (code *)FUN_?(&UNK_?),
                               pcVar17 == (code *)0x0)) {
                              uVar18 = func_?(&UNK_?);
                              FUN_?(uVar18,0);
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                            pcRam_? = pcVar17;
                            (*pcRam_?)(pOVar32);
                            pGVar14 = (this->fields).claimText;
                            if (pGVar14 != (GameObject *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pvVar16 = (pGVar14->fields)._.m_CachedPtr;
                              if (pvVar16 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pGVar14,(MethodInfo *)0x0);
                                pcVar17 = (code *)swi(3);
                                (*pcVar17)();
                                return;
                              }
                              pcVar17 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar17 = (code *)FUN_?(&UNK_?),
                                 pcVar17 == (code *)0x0)) {
                                uVar18 = func_?(&UNK_?);
                                FUN_?(uVar18,0);
                                pcVar17 = (code *)swi(3);
                                (*pcVar17)();
                                return;
                              }
                              pcRam_? = pcVar17;
                              (*pcRam_?)(pvVar16);
                              if (iVar29 < 1) {
                                pTVar15 = (this->fields).discountedPriceText;
                                if (pTVar15 == (Text *)0x0) goto code_?;
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
                                CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                                if (CVar30._.m_CachedPtr == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar15,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                                pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          Unmarshal::Unmarshal_UnmarshalUnityObject
                                                    (pvVar16,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                if (pOVar31 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar32 = pOVar31[1].klass;
                                if (pOVar32 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            (pOVar31,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                (*pcRam_?)(pOVar32);
                                pTVar15 = (this->fields).bundlePriceWithoutDiscount;
                                if (pTVar15 == (Text *)0x0) goto code_?;
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
                                CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                                if (CVar30._.m_CachedPtr == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar15,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                                pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          Unmarshal::Unmarshal_UnmarshalUnityObject
                                                    (pvVar16,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                if (pOVar31 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar32 = pOVar31[1].klass;
                                if (pOVar32 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            (pOVar31,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                              }
                              else {
                                pTVar15 = (this->fields).discountTagText;
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__System__Number);
                                  LOCK();
                                  UNLOCK();
                                  FUN_?(&
                                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                     ->klass->field_0x135 & 1) == 0) {
                                  FUN_?();
                                }
                                uVar3 = 0;
                                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                BStack_21._value = (uint16_t *)0x0;
                                puStack_22 = (undefined *)0x0;
                                pSVar33 = mscorlib.dll::System::Number::Number_FormatInt32
                                                    (iVar29,(ReadOnlySpan_1_Char_ *)&BStack_21,
                                                     (IFormatProvider *)0x0,(MethodInfo *)0x0);
                                pSVar33 = mscorlib.dll::System::String::String_Concat_5
                                                    (::StringLiteral__,pSVar33,::StringLiteral__,
                                                     (MethodInfo *)0x0);
                                if (pTVar15 == (Text *)0x0) goto code_?;
                                (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar33);
                                iVar19 = FUN_?(((float)iVar29 / _UNK_?) *
                                                       (float)(this->fields).originalPrice);
                                pTVar15 = (this->fields).originalPriceText;
                                bVar2 = cRam_? == '\0';
                                (this->fields).price = (this->fields).originalPrice - iVar19;
                                pSVar33 = StringLiteral_N0;
                                if (bVar2) {
                                  FUN_?(&TypeInfo__System__Number);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                iVar29 = (this->fields).originalPrice;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                puVar34 = (uint16_t *)0x0;
                                if (pSVar33 != (String *)0x0) {
                                  BStack_21._value = &(pSVar33->fields)._firstChar;
                                  uVar3 = (pSVar33->fields)._stringLength;
                                  puStack_22 = (undefined *)(ulonglong)uVar3;
                                  puVar34 = BStack_21._value;
                                }
                                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                puStack_22 = (undefined *)(ulonglong)uVar3;
                                BStack_21._value = puVar34;
                                pSVar33 = mscorlib.dll::System::Number::Number_FormatInt32
                                                    (iVar29,(ReadOnlySpan_1_Char_ *)&BStack_21,
                                                     (IFormatProvider *)0x0,(MethodInfo *)0x0);
                                if ((pSVar33 == (String *)0x0) ||
                                   (pSVar33 = mscorlib.dll::System::String::String_Replace_1
                                                        (pSVar33,::StringLiteral__,::StringLiteral__
                                                         ,(MethodInfo *)0x0), pTVar15 == (Text *)0x0
                                   )) goto code_?;
                                (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar33);
                                pSVar33 = StringLiteral_N0;
                                pTVar15 = (this->fields).goldSavedText;
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__System__Number);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (pSVar33 == (String *)0x0) {
                                  puVar34 = (uint16_t *)0x0;
                                  uVar3 = 0;
                                }
                                else {
                                  BStack_21._value = &(pSVar33->fields)._firstChar;
                                  uVar3 = (pSVar33->fields)._stringLength;
                                  puStack_22 = (undefined *)(ulonglong)uVar3;
                                  puVar34 = BStack_21._value;
                                }
                                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                puStack_22 = (undefined *)(ulonglong)uVar3;
                                BStack_21._value = puVar34;
                                pSVar33 = mscorlib.dll::System::Number::Number_FormatInt32
                                                    (iVar19,(ReadOnlySpan_1_Char_ *)&BStack_21,
                                                     (IFormatProvider *)0x0,(MethodInfo *)0x0);
                                if ((pSVar33 == (String *)0x0) ||
                                   (mscorlib.dll::System::String::String_Replace_1
                                              (pSVar33,::StringLiteral__,::StringLiteral__,
                                               (MethodInfo *)0x0), pTVar15 == (Text *)0x0))
                                goto code_?;
                                (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15);
                                pTVar15 = (this->fields).discountedPriceText;
                                if (pTVar15 == (Text *)0x0) goto code_?;
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
                                CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                                if (CVar30._.m_CachedPtr == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar15,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                                pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          Unmarshal::Unmarshal_UnmarshalUnityObject
                                                    (pvVar16,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                if (pOVar31 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar32 = pOVar31[1].klass;
                                if (pOVar32 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            (pOVar31,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                (*pcRam_?)(pOVar32);
                                pTVar15 = (this->fields).bundlePriceWithoutDiscount;
                                if (pTVar15 == (Text *)0x0) goto code_?;
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
                                CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                                if (CVar30._.m_CachedPtr == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar15,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                                pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          Unmarshal::Unmarshal_UnmarshalUnityObject
                                                    (pvVar16,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                if (pOVar31 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar32 = pOVar31[1].klass;
                                if (pOVar32 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            (pOVar31,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                              }
                              pcRam_? = pcVar17;
                              (*pcRam_?)(pOVar32);
                              if ((this->fields).price == 0) {
                                pGVar14 = (this->fields).discountTag;
                                if (pGVar14 == (GameObject *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pvVar16 = (pGVar14->fields)._.m_CachedPtr;
                                if (pvVar16 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pGVar14,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                (*pcRam_?)(pvVar16);
                                pTVar15 = (this->fields).discountedPriceText;
                                if (pTVar15 == (Text *)0x0) goto code_?;
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
                                CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                                if (CVar30._.m_CachedPtr == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar15,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                                pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          Unmarshal::Unmarshal_UnmarshalUnityObject
                                                    (pvVar16,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                if (pOVar31 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar32 = pOVar31[1].klass;
                                if (pOVar32 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            (pOVar31,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                (*pcRam_?)(pOVar32);
                                pTVar15 = (this->fields).bundlePriceWithoutDiscount;
                                if (pTVar15 == (Text *)0x0) goto code_?;
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
                                CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                                if (CVar30._.m_CachedPtr == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar15,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                                pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          Unmarshal::Unmarshal_UnmarshalUnityObject
                                                    (pvVar16,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                if (pOVar31 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar32 = pOVar31[1].klass;
                                if (pOVar32 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            (pOVar31,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                (*pcRam_?)(pOVar32);
                                pTVar15 = (this->fields).originalPriceText;
                                if (pTVar15 == (Text *)0x0) goto code_?;
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
                                CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                                if (CVar30._.m_CachedPtr == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar15,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                                pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          Unmarshal::Unmarshal_UnmarshalUnityObject
                                                    (pvVar16,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                if (pOVar31 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar32 = pOVar31[1].klass;
                                if (pOVar32 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            (pOVar31,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                (*pcRam_?)(pOVar32);
                                pTVar15 = (this->fields).goldSavedText;
                                if (pTVar15 == (Text *)0x0) goto code_?;
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
                                CVar30._.m_CachedPtr = (pTVar15->fields)._._._._._._._;
                                if (CVar30._.m_CachedPtr == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar15,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                pvVar16 = (void *)(*pcRam_?)(CVar30._.m_CachedPtr);
                                pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          Unmarshal::Unmarshal_UnmarshalUnityObject
                                                    (pvVar16,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                if (pOVar31 == (Object *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pOVar32 = pOVar31[1].klass;
                                if (pOVar32 == (Object__Class *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            (pOVar31,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                (*pcRam_?)(pOVar32);
                                pGVar14 = (this->fields).claimText;
                                if (pGVar14 == (GameObject *)0x0) goto code_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pvVar16 = (pGVar14->fields)._.m_CachedPtr;
                                if (pvVar16 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pGVar14,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                (*pcRam_?)(pvVar16,1);
                              }
                              pSVar33 = StringLiteral_N0;
                              pTVar15 = (this->fields).discountedPriceText;
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__System__Number);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              iVar29 = (this->fields).price;
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              if (pSVar33 == (String *)0x0) {
                                puVar34 = (uint16_t *)0x0;
                                uVar3 = 0;
                              }
                              else {
                                BStack_21._value = &(pSVar33->fields)._firstChar;
                                uVar3 = (pSVar33->fields)._stringLength;
                                puStack_22 = (undefined *)(ulonglong)uVar3;
                                puVar34 = BStack_21._value;
                              }
                              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                                FUN_?();
                              }
                              puStack_22 = (undefined *)(ulonglong)uVar3;
                              BStack_21._value = puVar34;
                              pSVar33 = mscorlib.dll::System::Number::Number_FormatInt32
                                                  (iVar29,(ReadOnlySpan_1_Char_ *)&BStack_21,
                                                   (IFormatProvider *)0x0,(MethodInfo *)0x0);
                              if ((pSVar33 != (String *)0x0) &&
                                 (pSVar33 = mscorlib.dll::System::String::String_Replace_1
                                                      (pSVar33,::StringLiteral__,::StringLiteral__,
                                                       (MethodInfo *)0x0), pTVar15 != (Text *)0x0))
                              {
                                (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar33);
                                pSVar33 = StringLiteral_N0;
                                pTVar15 = (this->fields).bundlePriceWithoutDiscount;
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__System__Number);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                iVar29 = (this->fields).price;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (pSVar33 == (String *)0x0) {
                                  puVar34 = (uint16_t *)0x0;
                                  uVar3 = 0;
                                }
                                else {
                                  BStack_21._value = &(pSVar33->fields)._firstChar;
                                  uVar3 = (pSVar33->fields)._stringLength;
                                  puStack_22 = (undefined *)(ulonglong)uVar3;
                                  puVar34 = BStack_21._value;
                                }
                                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                puStack_22 = (undefined *)(ulonglong)uVar3;
                                BStack_21._value = puVar34;
                                pSVar33 = mscorlib.dll::System::Number::Number_FormatInt32
                                                    (iVar29,(ReadOnlySpan_1_Char_ *)&BStack_21,
                                                     (IFormatProvider *)0x0,(MethodInfo *)0x0);
                                if ((pSVar33 != (String *)0x0) &&
                                   (pSVar33 = mscorlib.dll::System::String::String_Replace_1
                                                        (pSVar33,::StringLiteral__,::StringLiteral__
                                                         ,(MethodInfo *)0x0), pTVar15 != (Text *)0x0
                                   )) {
                                  (*(pTVar15->klass->vtable).set_text.methodPtr)
                                            (pTVar15,pSVar33,
                                             (pTVar15->klass->vtable).set_text.method);
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
code_?:
        FUN_?();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnBundlePurchaseClicked() */

void Assembly-CSharp.dll::BundleView::BundleView_OnBundlePurchaseClicked
               (BundleView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__BundleView__OnInsufficientLevelCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BundleView__OnInsufficientResourceCallback_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BundleView__OnPurchaseBundleConfirmation_bool_);
    LOCK();
    UNLOCK();
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
                  BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  BundlePurchasePopUp_MethodInfo__UnityEngine__Object__Instantiate<BundlePurchasePopUp>_BundlePurchasePopUp_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView____c__DisplayClass18_0___OnBundlePurchaseClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c__DisplayClass18_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView____c__DisplayClass18_1___OnBundlePurchaseClicked_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c__DisplayClass18_1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView____c__DisplayClass18_2___OnBundlePurchaseClicked_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c__DisplayClass18_2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Get_Gold);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NOT_ENOUGH_GOLD);
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
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
      pMVar4 != (MVLocalPlayer *)0x0 &&
      (pAVar5 = (this->fields).bundleData, pAVar5 != (AccessoryBundleClient *)0x0)))) {
    if ((pMVar4->fields)._.level < (pAVar5->fields)._.level) {
      pOVar6 = (Object *)FUN_?(TypeInfo__BundleView____c__DisplayClass18_0);
      original_01 = (this->fields).levelErrorPopUp;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar7 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_01,
                           LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                          );
      if (pOVar6 != (Object *)0x0) {
        bVar8 = iRam_? != 0;
        pOVar6[1].klass = pOVar7;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
          lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar12 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pEVar14 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (pEVar14,pOVar6,
                   MethodInfo__BundleView____c__DisplayClass18_0___OnBundlePurchaseClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar13,(BaseEventData *)0x0,pEVar14,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar7 = pOVar6[1].klass;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)this,MethodInfo__BundleView__OnInsufficientLevelCallback__,
                   (MethodInfo *)0x0);
        pAVar5 = (this->fields).bundleData;
        if ((pAVar5 != (AccessoryBundleClient *)0x0) && (pOVar7 != (Object__Class *)0x0)) {
          LevelErrorPopup::LevelErrorPopup_Initialize
                    ((LevelErrorPopup *)pOVar7,(UnityAction *)this_00,(pAVar5->fields)._.level,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
          (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
         ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
          pMVar4 != (MVLocalPlayer *)0x0 &&
          (pUVar15 = (pMVar4->fields)._._UserProfileData_k__BackingField,
          pUVar15 != (UserProfileData *)0x0)))) {
        if ((pUVar15->fields).Gold < (this->fields).price) {
          pOVar6 = (Object *)FUN_?(TypeInfo__BundleView____c__DisplayClass18_1);
          original_00 = (this->fields).bundleErrorPopUp;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar7 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_00,
                               BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                              );
          if (pOVar6 != (Object *)0x0) {
            bVar8 = iRam_? != 0;
            pOVar6[1].klass = pOVar7;
            if (bVar8) {
              uVar9 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
              lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
              do {
                uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                LOCK();
                bVar8 = uVar11 == *puVar12;
                if (bVar8) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            pEVar14 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (pEVar14,pOVar6,
                       MethodInfo__BundleView____c__DisplayClass18_1___OnBundlePurchaseClicked_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar13,(BaseEventData *)0x0,pEVar14,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pOVar7 = pOVar6[1].klass;
            pUVar16 = (UnityAction_1_System_Boolean_ *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
            FUN_?(pUVar16,this,MethodInfo__BundleView__OnInsufficientResourceCallback_bool_)
            ;
            header = TM::TM__(StringLiteral_NOT_ENOUGH_GOLD,(MethodInfo *)0x0);
            buttonText = TM::TM__(StringLiteral_Get_Gold,(MethodInfo *)0x0);
            if (pOVar7 != (Object__Class *)0x0) {
              BundleErrorPopUp::BundleErrorPopUp_Initialize
                        ((BundleErrorPopUp *)pOVar7,pUVar16,header,buttonText,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          pOVar6 = (Object *)FUN_?(TypeInfo__BundleView____c__DisplayClass18_2);
          original = (this->fields).bundlePurchasePopup;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar7 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               BundlePurchasePopUp_MethodInfo__UnityEngine__Object__Instantiate<BundlePurchasePopUp>_BundlePurchasePopUp_
                              );
          if (pOVar6 != (Object *)0x0) {
            bVar8 = iRam_? != 0;
            pOVar6[1].klass = pOVar7;
            if (bVar8) {
              uVar9 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
              lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
              do {
                uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                LOCK();
                bVar8 = uVar11 == *puVar12;
                if (bVar8) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            pOVar7 = pOVar6[1].klass;
            pAVar5 = (this->fields).bundleData;
            price = (this->fields).price;
            originalPrice = (this->fields).originalPrice;
            pUVar16 = (UnityAction_1_System_Boolean_ *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
            FUN_?(pUVar16,this,MethodInfo__BundleView__OnPurchaseBundleConfirmation_bool_);
            if (pOVar7 != (Object__Class *)0x0) {
              BundlePurchasePopUp::BundlePurchasePopUp_Initialize
                        ((BundlePurchasePopUp *)pOVar7,pAVar5,price,originalPrice,pUVar16,
                         (MethodInfo *)0x0);
              pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              pEVar14 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        (pEVar14,pOVar6,
                         MethodInfo__BundleView____c__DisplayClass18_2___OnBundlePurchaseClicked_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar13,(BaseEventData *)0x0,pEVar14,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnInsufficientResourceCallback(Boolean) */

void Assembly-CSharp.dll::BundleView::BundleView_OnInsufficientResourceCallback
               (BundleView *this,bool confirmed,MethodInfo *method)

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
                  MethodInfo__BundleView____c___OnInsufficientResourceCallback_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BundleView____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BundleView____c);
  }
  this_00 = TypeInfo__BundleView____c->static_fields->__9__22_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__BundleView____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BundleView____c);
    }
    object = TypeInfo__BundleView____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__BundleView____c___OnInsufficientResourceCallback_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BundleView____c->static_fields->__9__22_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__BundleView____c->static_fields->__9__22_0 >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (confirmed != 0) {
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoPurchaseGold(0,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::BundleView::BundleView_OnPop(BundleView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBundleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView____c___OnPop_b__21_0_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BundleView____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BundleView____c);
  }
  this_01 = TypeInfo__BundleView____c->static_fields->__9__21_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IBundleController_ *)0x0) {
    if (*(int *)&(TypeInfo__BundleView____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BundleView____c);
    }
    object = TypeInfo__BundleView____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IBundleController_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__BundleView____c___OnPop_b__21_0_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BundleView____c->static_fields->__9__21_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__BundleView____c->static_fields->__9__21_0 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBundleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBundleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>_
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
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnPurchaseBundleConfirmation(Boolean) */

void Assembly-CSharp.dll::BundleView::BundleView_OnPurchaseBundleConfirmation
               (BundleView *this,bool confirmed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
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
                  MethodInfo__BundleView____c___OnPurchaseBundleConfirmation_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (confirmed == 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BundleView____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BundleView____c);
    }
    this_00 = TypeInfo__BundleView____c->static_fields->__9__19_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__BundleView____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BundleView____c);
      }
      object = TypeInfo__BundleView____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__BundleView____c___OnPurchaseBundleConfirmation_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BundleView____c->static_fields->__9__19_0 = this_00;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__BundleView____c->static_fields->__9__19_0 >> 0xc);
        lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar4 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar6 != (MVGameControllerBase *)0x0) &&
     (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
    pAVar8 = (pMVar7->fields).PurchaseProductResponseHandler;
    this_01 = (Action_2_Int32Enum_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
    uVar9 = 0;
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar11 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar10 == (Delegate *)0x0) {
      (pMVar7->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar8 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)FUN_?(pDVar10,
                                 TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                );
      if (pAVar8 ==
          (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
         ) {
        FUN_?(pDVar10,pAVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      (pMVar7->fields).PurchaseProductResponseHandler = pAVar8;
      pAVar11 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      lVar2 = FUN_?(pDVar10,
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (lVar2 == 0) {
        FUN_?(pDVar10,pAVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(pMVar7->fields).PurchaseProductResponseHandler >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AccessoryDataManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar13 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
    if (((pAVar13 != (AccessoryShopDataClient *)0x0) &&
        (pAVar14 = (pAVar13->fields).accessoryBundle, pAVar14 != (AccessoryBundleClient *)0x0)) &&
       (iVar15 = (pAVar14->fields)._.accessoryBundleID,
       this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0xc1);
      key = (Object *)FUN_?(uRam_?,aiStackX_10);
      aiStackX_10[0] = iVar15;
      value = (Object *)FUN_?(uRam_?,aiStackX_10);
      if (this_03 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_03,key,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseProduct
                  (this_02,MVProductType__Enum_AccessoryBundle,
                   (Dictionary_2_System_Object_System_Object_ *)this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BundleView::BundleView_ProductPurchaseResponseHandler
               (BundleView *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BundleView__OnInsufficientLevelCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BundleView__OnInsufficientResourceCallback_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView____c___ProductPurchaseResponseHandler_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView____c__DisplayClass20_0___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c__DisplayClass20_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView____c__DisplayClass20_1___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c__DisplayClass20_1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView____c__DisplayClass20_2___ProductPurchaseResponseHandler_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c__DisplayClass20_2);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleView____c__DisplayClass20_3___ProductPurchaseResponseHandler_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c__DisplayClass20_3);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleView____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Get_Gold);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NOT_ENOUGH_GOLD);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__BundleView____c__DisplayClass20_0);
  if (pOVar1 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    pOVar1[1].klass = (Object__Class *)this;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    bVar2 = cRam_? == '\0';
    *(int32_t *)&pOVar1[1].monitor = returnCode;
    if (bVar2) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar7 != (MVGameControllerBase *)0x0) &&
       (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
      pAVar9 = (pMVar8->fields).PurchaseProductResponseHandler;
      this_00 = (Action_2_Int32Enum_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar9,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar11 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      pSVar12 = (String *)0x0;
      if (pDVar10 == (Delegate *)0x0) {
        (pMVar8->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
      }
      else {
        pAVar9 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)FUN_?(pDVar10,
                                   TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                  );
        if (pAVar9 ==
            (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
            0x0) {
          FUN_?(pDVar10,pAVar11);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        (pMVar8->fields).PurchaseProductResponseHandler = pAVar9;
        pAVar11 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar4 = FUN_?();
        if (lVar4 == 0) {
          FUN_?(pDVar10,pAVar11);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pMVar8->fields).PurchaseProductResponseHandler >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__BundleView____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BundleView____c);
      }
      this_01 = TypeInfo__BundleView____c->static_fields->__9__20_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__BundleView____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__BundleView____c);
        }
        object = TypeInfo__BundleView____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__BundleView____c___ProductPurchaseResponseHandler_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__BundleView____c->static_fields->__9__20_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__BundleView____c->static_fields->__9__20_0 >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar14,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      iVar15 = *(int *)&pOVar1[1].monitor;
      if (iVar15 == 0) {
        object_00 = (Object *)FUN_?(TypeInfo__BundleView____c__DisplayClass20_1);
        if (object_00 != (Object *)0x0) {
          bVar2 = iRam_? != 0;
          object_00[1].monitor = (MonitorData *)pOVar1;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&object_00[1].monitor >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          auStack_16[0] = 0x6f;
          pOVar1 = (Object *)FUN_?(uRam_?,auStack_16);
          if (purchaseResponseData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pSVar17 = (String *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (purchaseResponseData,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
              FUN_?();
            }
            value = pSVar12;
            if (pSVar17 != (String *)0x0) {
              if (pSVar17->klass == pSRam0000000182dc50c0) {
                value = pSVar17;
              }
              if (value == (String *)0x0) {
                FUN_?(pSVar17);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                     JsonConvert_DeserializeObject_2
                               (value,
                                System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                               );
            if (pOVar1 != (Object *)0x0) {
              previewAccessories = (AccessoryDataClient__Array *)FUN_?();
              lVar4 = 0x20;
              while (uVar3 = (uint)pSVar12, (int)uVar3 < *(int *)&pOVar1[1].monitor) {
                if (*(uint *)&pOVar1[1].monitor <= uVar3) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pOVar18 = pOVar1[1].klass;
                if (pOVar18 == (Object__Class *)0x0) goto code_?;
                if (*(uint *)&(pOVar18->_0).namespaze <= uVar3) {
                  FUN_?();
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pAVar19 = AccessoryDataManager::
                          AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                                    (*(int32_t *)((longlong)&(pOVar18->_0).image + lVar4),
                                     (MethodInfo *)0x0);
                if (pAVar19 != (AccessoryDataClient *)0x0) {
                  if (previewAccessories == (AccessoryDataClient__Array *)0x0)
                  goto code_?;
                  lVar20 = FUN_?(pAVar19,(previewAccessories->klass->_0).element_class);
                  if (lVar20 == 0) {
                    uVar21 = FUN_?();
                    FUN_?(uVar21,0);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  FUN_?();
                }
                lVar4 = lVar4 + 4;
                pSVar12 = (String *)(ulonglong)(uVar3 + 1);
              }
              original = (this->fields).previewSlideshowPrefab;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pOVar18 = (Object__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original,
                                   PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                                  );
              bVar2 = iRam_? != 0;
              object_00[1].klass = pOVar18;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              if (object_00[1].klass != (Object__Class *)0x0) {
                PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
                          ((PurchasedAccessoryPreviewer *)object_00[1].klass,previewAccessories,
                           (MethodInfo *)0x0);
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
                pvVar22 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar22 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pcVar13 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                  uVar21 = func_?(&UNK_?);
                  FUN_?(uVar21,0);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pcRam_? = pcVar13;
                pvVar22 = (void *)(*pcRam_?)(pvVar22);
                pGVar14 = (GameObject *)
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (pvVar22,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                    );
                pEVar23 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (pEVar23,object_00,
                           MethodInfo__BundleView____c__DisplayClass20_1___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                method_00 = 
                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                ;
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                  method_00 = 
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  ;
                }
                goto code_?;
              }
            }
          }
        }
      }
      else if (iVar15 == 1) {
        pOVar1 = (Object *)FUN_?(TypeInfo__BundleView____c__DisplayClass20_3);
        original_00 = (this->fields).bundleErrorPopUp;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar18 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_00,
                             BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                            );
        if (pOVar1 != (Object *)0x0) {
          bVar2 = iRam_? != 0;
          pOVar1[1].klass = pOVar18;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          pEVar23 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (pEVar23,pOVar1,
                     MethodInfo__BundleView____c__DisplayClass20_3___ProductPurchaseResponseHandler_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar14,(BaseEventData *)0x0,pEVar23,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pOVar18 = pOVar1[1].klass;
          resultCallback =
               (UnityAction_1_System_Boolean_ *)
               FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
          FUN_?(resultCallback,this,
                        MethodInfo__BundleView__OnInsufficientResourceCallback_bool_);
          pSVar12 = TM::TM__(StringLiteral_NOT_ENOUGH_GOLD,(MethodInfo *)0x0);
          pSVar17 = TM::TM__(StringLiteral_Get_Gold,(MethodInfo *)0x0);
          if (pOVar18 != (Object__Class *)0x0) {
            BundleErrorPopUp::BundleErrorPopUp_Initialize
                      ((BundleErrorPopUp *)pOVar18,resultCallback,pSVar12,pSVar17,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
      else {
        if (iVar15 != 6) {
          pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          pEVar23 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (pEVar23,pOVar1,
                     MethodInfo__BundleView____c__DisplayClass20_0___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          method_00 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
          ;
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
            method_00 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            ;
          }
code_?:
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy(pGVar14,(BaseEventData *)0x0,pEVar23,method_00);
          return;
        }
        pOVar1 = (Object *)FUN_?(TypeInfo__BundleView____c__DisplayClass20_2);
        original_01 = (this->fields).levelErrorPopUp;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar18 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_01,
                             LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                            );
        if (pOVar1 != (Object *)0x0) {
          pOVar1[1].klass = pOVar18;
          func_?(pOVar1 + 1);
          pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          pEVar23 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (pEVar23,pOVar1,
                     MethodInfo__BundleView____c__DisplayClass20_2___ProductPurchaseResponseHandler_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar14,(BaseEventData *)0x0,pEVar23,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pOVar18 = pOVar1[1].klass;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,MethodInfo__BundleView__OnInsufficientLevelCallback__,
                     (MethodInfo *)0x0);
          pAVar24 = (this->fields).bundleData;
          if ((pAVar24 != (AccessoryBundleClient *)0x0) && (pOVar18 != (Object__Class *)0x0)) {
            LevelErrorPopup::LevelErrorPopup_Initialize
                      ((LevelErrorPopup *)pOVar18,(UnityAction *)this_02,(pAVar24->fields)._.level,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

