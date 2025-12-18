
/* Void Initialize(Int32, String) */

void Assembly-CSharp.dll::BundleTab::BundleTab_Initialize
               (BundleTab *this,int32_t tabId,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__BundleTab__SetLevelBadge__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BundleTab____c__DisplayClass13_0___Initialize_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleTab____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_d__1_h);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__BundleTab____c__DisplayClass13_0);
  if (pOVar1 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    pOVar1[1].klass = (Object__Class *)this;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    *(int32_t *)&pOVar1[1].monitor = tabId;
    this_00 = (this->fields).rectTransform;
    if (this_00 != (RectTransform *)0x0) {
      VStack_7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
      (this->fields).startPos = VStack_7.x;
      pHVar8 = TypeInfo__HighlightManager;
      if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar9 = HighlightManager::HighlightManager_GetHighLights
                          ((HighlightType__Enum)CONCAT71((int7)((ulonglong)pHVar8 >> 8),1),
                           System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                          );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AccessoryDataManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar10 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
      if (pAVar10 != (AccessoryShopDataClient *)0x0) {
        pAVar11 = (pAVar10->fields).accessoryBundle;
        pUVar12 = (UnityAction *)0x0;
        if (pLVar9 != (List_1_Highlight_1_System_Object_ *)0x0) {
          uVar3 = (pLVar9->fields)._size;
          lVar13 = 0x20;
          pUVar14 = pUVar12;
          while (uVar15 = (uint)pUVar14, (int)uVar15 < (int)uVar3) {
            if (uVar3 <= uVar15) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pHVar17 = (pLVar9->fields)._items;
            if (pHVar17 == (Highlight_1_System_Object___Array *)0x0) goto code_?;
            if ((uint)pHVar17->max_length <= uVar15) {
              FUN_?();
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            lVar18 = *(longlong *)((longlong)pHVar17->vector + lVar13 + -0x20);
            if (((lVar18 == 0) || (lVar18 = *(longlong *)(lVar18 + 0x18), lVar18 == 0)) ||
               (pAVar11 == (AccessoryBundleClient *)0x0)) goto code_?;
            if (*(int *)(lVar18 + 0x10) == (pAVar11->fields)._.accessoryBundleID) {
              this_01 = (this->fields).redDot;
              if (this_01 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_01,1,(MethodInfo *)0x0);
              pLVar19 = (pAVar11->fields)._.accessoryBundleItems;
              pTVar20 = (this->fields).redDotCount;
              if (pLVar19 == (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0)
              goto code_?;
              VStack_7.x = (float)(pLVar19->fields)._size;
              pSVar21 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&VStack_7,(MethodInfo *)0x0);
              if (pTVar20 == (Text *)0x0) goto code_?;
              (*(pTVar20->klass->vtable).set_text.methodPtr)
                        (pTVar20,pSVar21,(pTVar20->klass->vtable).set_text.method);
              lVar13 = FUN_?(pLVar9,pUVar14);
              if (lVar13 == 0) goto code_?;
              (this->fields).highlightId = *(int32_t *)(lVar13 + 0x10);
              break;
            }
            lVar13 = lVar13 + 8;
            pUVar14 = (UnityAction *)(ulonglong)(uVar15 + 1);
          }
          pBVar22 = (this->fields).button;
          if (pBVar22 != (Button *)0x0) {
            this_02 = (UnityEvent *)(pBVar22->fields).m_OnClick;
            pNVar23 = (NavMesh_OnNavMeshPreUpdate *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar23,pOVar1,
                       MethodInfo__BundleTab____c__DisplayClass13_0___Initialize_b__0__,
                       (MethodInfo *)0x0);
            if (this_02 != (UnityEvent *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                        (this_02,(UnityAction *)pNVar23,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__AccessoryDataManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pAVar10 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
              if (((pAVar10 != (AccessoryShopDataClient *)0x0) &&
                  (pAVar11 = (pAVar10->fields).accessoryBundle,
                  pAVar11 != (AccessoryBundleClient *)0x0)) &&
                 (pAVar24 = (pAVar11->fields)._.timelimit, pAVar24 != (AccessoryTimelimit *)0x0)) {
                if ((pAVar24->fields).timeLimit != 0) {
                  pAVar11 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                                      ((MethodInfo *)0x0);
                  if ((pAVar11 == (AccessoryBundleClient *)0x0) ||
                     (pAVar24 = (pAVar11->fields)._.timelimit, pAVar24 == (AccessoryTimelimit *)0x0))
                  goto code_?;
                  TVar25 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                           AccessoryTimelimit_GetTimeLeft(pAVar24,(MethodInfo *)0x0);
                  pTVar20 = (this->fields).timeLimitText;
                  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  VStack_7.x = (float)(TVar25._ticks / 864000000000);
                  pOVar1 = (Object *)FUN_?(uRam_?,&VStack_7);
                  VStack_7.x = (float)((int)(TVar25._ticks / 36000000000) +
                                       (int)((TVar25._ticks / 36000000000) / 0x18) * -0x18);
                  arg1 = (Object *)FUN_?(uRam_?,&VStack_7);
                  pSVar21 = StringLiteral__0_d__1_h;
                  PStack_26._arg0 = (Object *)0x0;
                  PStack_26._arg1 = (Object *)0x0;
                  PStack_26._arg2 = (Object *)0x0;
                  PStack_26._args = (Object__Array *)0x0;
                  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                            (&PStack_26,pOVar1,arg1,(MethodInfo *)0x0);
                  PStack_27._arg0 = PStack_26._arg0;
                  PStack_27._arg1 = PStack_26._arg1;
                  PStack_27._arg2 = PStack_26._arg2;
                  PStack_27._args = PStack_26._args;
                  pSVar21 = mscorlib.dll::System::String::String_FormatHelper
                                      ((IFormatProvider *)0x0,pSVar21,&PStack_27,(MethodInfo *)0x0);
                  if (pTVar20 == (Text *)0x0) goto code_?;
                  (*(pTVar20->klass->vtable).set_text.methodPtr)
                            (pTVar20,pSVar21,(pTVar20->klass->vtable).set_text.method);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__AccessoryDataManager);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pAVar10 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
                if ((pAVar10 != (AccessoryShopDataClient *)0x0) &&
                   (pAVar11 = (pAVar10->fields).accessoryBundle,
                   pAVar11 != (AccessoryBundleClient *)0x0)) {
                  if (0 < (pAVar11->fields)._.level) {
                    if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    cVar28 = FUN_?();
                    if (cVar28 == '\0') {
                      if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
                        FUN_?(TypeInfo__LevelingManager);
                      }
                      pUVar14 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
                      pNVar23 = (NavMesh_OnNavMeshPreUpdate *)
                                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                      NavMesh_OnNavMeshPreUpdate__ctor
                                (pNVar23,(Object *)this,MethodInfo__BundleTab__SetLevelBadge__,
                                 (MethodInfo *)0x0);
                      pUVar14 = (UnityAction *)
                                mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pUVar14,(Delegate *)pNVar23,(MethodInfo *)0x0
                                          );
                      if (pUVar14 == (UnityAction *)0x0) {
                        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized =
                             (UnityAction *)0x0;
                      }
                      else {
                        pUVar29 = pUVar12;
                        if (pUVar14->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                          pUVar29 = pUVar14;
                        }
                        if (pUVar29 == (UnityAction *)0x0) {
                          FUN_?(pUVar14,TypeInfo__UnityEngine__Events__UnityAction);
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar29;
                        if (pUVar14->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                          pUVar12 = pUVar14;
                        }
                        if (pUVar12 == (UnityAction *)0x0) {
                          FUN_?(pUVar14);
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                      }
                      func_?(TypeInfo__LevelingManager->static_fields);
                    }
                    else {
                      BundleTab_SetLevelBadge(this,(MethodInfo *)0x0);
                    }
                  }
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* IEnumerator LerpToSize(Single) */

IEnumerator *
Assembly-CSharp.dll::BundleTab::BundleTab_LerpToSize(BundleTab *this,float size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BundleTab___LerpToSize_d__20);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__BundleTab___LerpToSize_d__20);
  bVar2 = iRam_? == 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    *(float *)&pIVar1[2].monitor = size;
    return pIVar1;
  }
  uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
  do {
    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
    LOCK();
    bVar2 = uVar5 == *puVar6;
    if (bVar2) {
      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
    }
    UNLOCK();
  } while (!bVar2);
  *(float *)&pIVar1[2].monitor = size;
  return pIVar1;
}


/* Void OnBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::BundleTab::BundleTab_OnBadgeLoaded
               (BundleTab *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).levelBadge;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar1 != (RawImage *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pRVar1->fields)._._._._._._._ != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (DownloadHandlerTexture *)
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
                DownloadHandler_GetCheckedDownloader
                          (www,
                           UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                          );
      if (this_00 == (DownloadHandlerTexture *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar3 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
               DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                         (this_00,(MethodInfo *)0x0);
      bVar4 = iRam_? != 0;
      (this->fields).badgeTextureAsset = pTVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      pTVar3 = (this->fields).badgeTextureAsset;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar3 != (Texture2D *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pTVar3->fields)._._.m_CachedPtr != (void *)0x0) {
          pRVar1 = (this->fields).levelBadge;
          if (pRVar1 != (RawImage *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (pRVar1,(Texture *)(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
            pRVar1 = (this->fields).levelBadge;
            if ((pRVar1 != (RawImage *)0x0) &&
               (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
               this_01 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_01,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BundleTab::BundleTab_OnDestroy(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
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
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::BundleTab::BundleTab_OnDisable(BundleTab *this,MethodInfo *method)

{
  pRVar1 = (this->fields).rectTransform;
  if (pRVar1 != (RectTransform *)0x0) {
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar1,(MethodInfo *)0x0);
    pRVar1 = (this->fields).rectTransform;
    if (pRVar1 != (RectTransform *)0x0) {
      auStack_3[0] = CONCAT44(VVar2.y,(this->fields).startPos);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                      ,auStack_3[0],0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar1 == (RectTransform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar5 = (pRVar1->fields)._._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar5,auStack_3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAsDeselected() */

void Assembly-CSharp.dll::BundleTab::BundleTab_SetAsDeselected(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).icon;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
  if (pIVar1 != (Image *)0x0) {
    CStack_3.r = pCVar2->r;
    CStack_3.g = pCVar2->g;
    CStack_3.b = pCVar2->b;
    CStack_3.a = pCVar2->a;
    (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (this->fields)._._._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
      pIVar7 = BundleTab_LerpToSize(this,(this->fields).startPos,(MethodInfo *)0x0);
      if (pIVar7 == (IEnumerator *)0x0) {
        uVar6 = func_?(&TypeInfo__System__NullReferenceException);
        this_01 = (NullReferenceException *)func_?(uVar6);
        pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_01,pSVar8,(MethodInfo *)0x0);
        uVar6 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_01,uVar6);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        uVar6 = func_?(&TypeInfo__System__ArgumentException);
        this_02 = (InvalidEnumArgumentException *)func_?(uVar6);
        pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_02,pSVar8,(MethodInfo *)0x0);
        uVar6 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_02,uVar6);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (BundleTab *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar4 = (this->fields)._._._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,pIVar7);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetAsSelected() */

void Assembly-CSharp.dll::BundleTab::BundleTab_SetAsSelected(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
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
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleTab____c___SetAsSelected_b__17_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleTab____c___SetAsSelected_b__17_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BundleTab____c___SetAsSelected_b__17_2_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundleTab____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).icon;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  Styles::Styles_GetColor
            ((Color *)&stack0xffffffffffffffe8,ColorStyle__Enum_SelectedTab,(MethodInfo *)0x0);
  if (pIVar1 != (Image *)0x0) {
    (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1);
    pGVar2 = (this->fields).redDot;
    if (pGVar2 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pGVar2->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      cVar6 = (*pcRam_?)(pvVar3);
      if (cVar6 != '\0') {
        pGVar2 = (this->fields).redDot;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        highlightId = (this->fields).highlightId;
        if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        HighlightManager::HighlightManager_SetHighlightToSeen(highlightId,(MethodInfo *)0x0);
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__BundleTab____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BundleTab____c);
      }
      pEVar7 = TypeInfo__BundleTab____c->static_fields->__9__17_0;
      if (pEVar7 == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
        if (*(int *)&(TypeInfo__BundleTab____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__BundleTab____c);
        }
        pBVar8 = TypeInfo__BundleTab____c->static_fields->__9;
        pEVar7 = (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,(Object *)pBVar8,
                   MethodInfo__BundleTab____c___SetAsSelected_b__17_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__BundleTab____c->static_fields->__9__17_0 = pEVar7;
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&TypeInfo__BundleTab____c->static_fields->__9__17_0 >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__BundleTab____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BundleTab____c);
      }
      pEVar7 = TypeInfo__BundleTab____c->static_fields->__9__17_1;
      if (pEVar7 == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
        if (*(int *)&(TypeInfo__BundleTab____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__BundleTab____c);
        }
        pBVar8 = TypeInfo__BundleTab____c->static_fields->__9;
        pEVar7 = (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,(Object *)pBVar8,
                   MethodInfo__BundleTab____c___SetAsSelected_b__17_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__BundleTab____c->static_fields->__9__17_1 = pEVar7;
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&TypeInfo__BundleTab____c->static_fields->__9__17_1 >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (this->fields)._._._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3);
        obj = (this->fields).rectTransform;
        if (obj != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (obj->fields)._._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3,&stack0xffffffffffffffe8);
          routine = BundleTab_LerpToSize(this,(this->fields).offsetX + 0.0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                    ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__BundleTab____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__BundleTab____c);
          }
          this_01 = TypeInfo__BundleTab____c->static_fields->__9__17_2;
          if (this_01 == (ExecuteEvents_EventFunction_1_IBundleController_ *)0x0) {
            if (*(int *)&(TypeInfo__BundleTab____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__BundleTab____c);
            }
            pBVar8 = TypeInfo__BundleTab____c->static_fields->__9;
            this_01 = (ExecuteEvents_EventFunction_1_IBundleController_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pBVar8,
                       MethodInfo__BundleTab____c___SetAsSelected_b__17_2_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__BundleTab____c->static_fields->__9__17_2 = this_01;
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)&TypeInfo__BundleTab____c->static_fields->__9__17_2 >> 0xc)
              ;
              uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar13 = uVar11 == *puVar12;
                if (bVar13) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar14 = 
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
            if ((pMVar14->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar14);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar2,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar15 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar16 = (longlong)(pLVar15->fields)._size;
            uVar9 = 0;
            if (0 < lVar16) {
              lVar17 = 0;
              lVar18 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar15 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar15->fields)._size <= uVar9) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pTVar19 = (pLVar15->fields)._items;
                if (pTVar19 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar19->max_length <= uVar9) {
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                this_00 = *(Component **)((longlong)pTVar19->vector + lVar18 + -0x20);
                if (this_00 == (Component *)0x0) goto code_?;
                pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_00,(MethodInfo *)0x0);
                bVar20 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                         ExecuteEvents_Execute_18
                                   (pGVar2,(BaseEventData *)0x0,
                                    (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                                    (pMVar14->field7_0x38).rgctx_data[1].method);
                if (bVar20 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
                  return;
                }
                uVar9 = uVar9 + 1;
                lVar17 = lVar17 + 1;
                lVar18 = lVar18 + 8;
              } while (lVar17 < lVar16);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetLevelBadge() */

void Assembly-CSharp.dll::BundleTab::BundleTab_SetLevelBadge(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BundleTab__SetLevelBadge__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_03,(Object *)this,MethodInfo__BundleTab__SetLevelBadge__,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pUVar1,(Delegate *)this_03,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
  }
  else {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar8 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar8 == (AccessoryShopDataClient *)0x0) ||
     (pAVar9 = (pAVar8->fields).accessoryBundle, pAVar9 == (AccessoryBundleClient *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  key = (pAVar9->fields)._.level;
  this_04 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_04,(Object *)this,
             MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,this_04,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedTextureRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Level_exceeds_defined_badges__Us);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_badges_was_loaded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Unity_2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__BadgeManager->static_fields->maxLevelBadge == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar10 = StringLiteral_No_badges_was_loaded;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar11 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar11 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,0,pSVar10);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
            TypeInfo__BadgeManager->static_fields->badgeUrls;
  if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                       (this_01,key,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
    if (iVar12 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Level_exceeds_defined_badges__Us,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      key = TypeInfo__BadgeManager->static_fields->maxLevelBadge;
    }
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_02 = TypeInfo__BadgeManager->static_fields->badgeUrls;
    if ((this_02 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) &&
       (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_02,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                            ), pOVar13 != (Object *)0x0)) {
      pSVar10 = mscorlib.dll::System::String::String_Concat_4
                          ((String *)pOVar13[1].monitor,StringLiteral__Unity_2,(MethodInfo *)0x0);
      this_05 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedTextureRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_05,pSVar10,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      *(undefined1 *)&this_05[1].klass = 0;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AsyncWWWManager,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CachedGetRequest);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
        return;
      }
      if (this_05 != (AsyncWebRequest *)0x0) {
        bVar14 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
        if ((bVar14 <= (this_05->klass->_1).naturalAligment) &&
           ((this_05->klass->_1).typeHierarchy[(ulonglong)bVar14 - 1] ==
            (Il2CppClass *)TypeInfo__CachedGetRequest)) {
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__AsyncWWWManager);
          }
          pAVar15 = this_05->klass;
          bVar14 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if (((pAVar15->_1).naturalAligment < bVar14) ||
             ((pAVar15->_1).typeHierarchy[(ulonglong)bVar14 - 1] !=
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            FUN_?(this_05,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar15,
                          unaff_RBX);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          cVar16 = (*(code *)pAVar15[1]._0.image)
                             (this_05,TypeInfo__AsyncWWWManager->static_fields->cache,
                              pAVar15[1]._0.gc_desc);
          if (cVar16 != '\0') {
            return;
          }
        }
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
      if (((this_05 != (AsyncWebRequest *)0x0) &&
          (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
         (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                               (this_05->fields).requestPriority,
                               MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                              ), pOVar13 != (Object *)0x0)) {
        if (pOVar13[1].klass != (Object__Class *)0x0) {
          if (*(int *)&pOVar13[2].klass == *(int *)&((pOVar13[1].klass)->_0).namespaze) {
            pOVar17 = pOVar13[1].klass;
            iVar18 = *(int *)&(pOVar17->_0).namespaze * 2;
            if (iVar18 < *(int *)&(pOVar17->_0).namespaze + 4) {
              iVar18 = *(int *)&(pOVar17->_0).namespaze + 4;
            }
            FUN_?(pOVar13,iVar18,
                          MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                          ->klass->rgctx_data[5].rgctxDataDummy);
          }
          if (pOVar13[1].klass != (Object__Class *)0x0) {
            FUN_?(pOVar13[1].klass,(longlong)*(int *)((longlong)&pOVar13[1].monitor + 4),
                          this_05);
            if (pOVar13[1].klass != (Object__Class *)0x0) {
              iVar19 = *(int *)((longlong)&pOVar13[1].monitor + 4) + 1;
              iVar18 = 0;
              if (iVar19 != *(int *)&((pOVar13[1].klass)->_0).namespaze) {
                iVar18 = iVar19;
              }
              *(int *)((longlong)&pOVar13[1].monitor + 4) = iVar18;
              *(int *)&pOVar13[2].klass = *(int *)&pOVar13[2].klass + 1;
              piVar20 = (int *)((longlong)&pOVar13[2].klass + 4);
              *piVar20 = *piVar20 + 1;
              return;
            }
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* BundleTab() */

void Assembly-CSharp.dll::BundleTab::BundleTab__ctor(BundleTab *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).lerpTime = 1.0;
  (this->fields).startPos = 200.0;
  (this->fields).highlightId = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af3c,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

