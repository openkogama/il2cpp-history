
/* Void AccessoryCreatedCallback(AvatarAccessory) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_AccessoryCreatedCallback
               (AccessoryInventoryViewItem *this,AvatarAccessory *avatarAccessory,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AccessoryCategory);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryInventoryViewItem__OnPreviewImageDownloadFinished__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarAccessory_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Image_unity3d);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Images_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).wasDestroyed == 0) {
    pTVar1 = (this->fields).rootTransform;
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
    if (pTVar1 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
        if ((avatarAccessory != (AvatarAccessory *)0x0) &&
           (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)avatarAccessory,(MethodInfo *)0x0),
           pTVar1 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar1,(this->fields).rootTransform,(MethodInfo *)0x0);
          pAVar2 = (this->fields).accessoryDataClient;
          if (pAVar2 != (AccessoryDataClient *)0x0) {
            EStack_3.klass = (Enum__Class *)TypeInfo__MV__Common__AccessoryCategory;
            iStack_4 = (pAVar2->fields)._.cat;
            EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
            pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
            pSVar5 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral_AvatarAccessory_,pSVar5,StringLiteral__Images_,
                                (MethodInfo *)0x0);
            pAVar2 = (this->fields).accessoryDataClient;
            if (pAVar2 != (AccessoryDataClient *)0x0) {
              pSVar6 = (pAVar2->fields)._.url;
              pSVar7 = (String__Array *)FUN_?(TypeInfo__System__String);
              if ((pSVar7 != (String__Array *)0x0) &&
                 (FUN_?(pSVar7,0,::StringLiteral__), pSVar6 != (String *)0x0)) {
                uVar8 = 0;
                pSVar7 = mscorlib.dll::System::String::String_SplitInternal_1
                                   (pSVar6,(String *)0x0,pSVar7,0x7fffffff,
                                    StringSplitOptions__Enum_None,(MethodInfo *)0x0);
                if (pSVar7 != (String__Array *)0x0) {
                  iVar9 = (int)pSVar7->max_length;
                  if ((uint)pSVar7->max_length <= iVar9 - 1U) {
code_?:
                    FUN_?();
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pSVar6 = pSVar7->vector[(longlong)iVar9 + -1];
                  pSVar7 = (String__Array *)FUN_?(TypeInfo__System__String);
                  if (((pSVar7 != (String__Array *)0x0) &&
                      (FUN_?(pSVar7,0,::StringLiteral__), pSVar6 != (String *)0x0)) &&
                     (pSVar7 = mscorlib.dll::System::String::String_SplitInternal_1
                                         (pSVar6,(String *)0x0,pSVar7,0x7fffffff,
                                          StringSplitOptions__Enum_None,(MethodInfo *)0x0),
                     pSVar7 != (String__Array *)0x0)) {
                    if ((int)pSVar7->max_length == 0) goto code_?;
                    pSVar6 = mscorlib.dll::System::String::String_Concat_4
                                       (pSVar7->vector[0],StringLiteral_Image_unity3d,
                                        (MethodInfo *)0x0);
                    if (pSVar6 != (String *)0x0) {
                      pSVar6 = mscorlib.dll::System::String::String_ToLower
                                         (pSVar6,(MethodInfo *)0x0);
                      pSVar5 = mscorlib.dll::System::String::String_Concat_4
                                         (pSVar5,pSVar6,(MethodInfo *)0x0);
                      this_00 = (this->fields).previewImageStreaminAssetManual;
                      this_02 = (NavMesh_OnNavMeshPreUpdate *)
                                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                      NavMesh_OnNavMeshPreUpdate__ctor
                                (this_02,(Object *)this,
                                 MethodInfo__AccessoryInventoryViewItem__OnPreviewImageDownloadFinished__
                                 ,(MethodInfo *)0x0);
                      if (this_00 != (StreamedSpriteToImageManual *)0x0) {
                        StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                                  (this_00,pSVar5,(UnityAction *)this_02,(MethodInfo *)0x0);
                        pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_GetComponentsInChildren
                                            ((Component *)avatarAccessory,
                                             SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                            );
                        if (pOVar11 != (Object__Array *)0x0) {
                          ppOVar12 = pOVar11->vector;
                          while( true ) {
                            if ((int)pOVar11->max_length <= (int)uVar8) {
                              return;
                            }
                            if ((uint)pOVar11->max_length <= uVar8) break;
                            pOVar13 = *ppOVar12;
                            if (pOVar13 == (Object *)0x0) goto code_?;
                            bVar14 = cRam_? == '\0';
                            *(undefined1 *)&pOVar13[3].monitor = 0;
                            if (bVar14) {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if ((pMVar15 == (MVGameControllerBase *)0x0) ||
                               (this_01 = (pMVar15->fields).skinnedMeshOptimizeManager,
                               this_01 == (SkinnedMeshOptimizeManager *)0x0))
                            goto code_?;
                            EStack_3.klass = (Enum__Class *)pOVar13[2].monitor;
                            EStack_3.monitor = (MonitorData *)pOVar13[3].klass;
                            SkinnedMeshOptimizeManager::
                            SkinnedMeshOptimizeManager_RemoveoptimizationData
                                      (this_01,(SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData
                                                *)&EStack_3,(MethodInfo *)0x0);
                            uVar8 = uVar8 + 1;
                            ppOVar12 = ppOVar12 + 1;
                          }
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
        goto code_?;
      }
    }
  }
  if (avatarAccessory != (AvatarAccessory *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)avatarAccessory,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(AccessoryDataClient, Transform, MVBody, Boolean) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_Initialize
               (AccessoryInventoryViewItem *this,AccessoryDataClient *accessoryDataClient,
               Transform *rootTransform,MVBody *targetBody,bool bundleView,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryInventoryViewItem__AccessoryCreatedCallback_AvatarAccessory_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<AvatarAccessory>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).accessoryDataClient = accessoryDataClient;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryDataClient >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).rootTransform = rootTransform;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).rootTransform >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  if (accessoryDataClient != (AccessoryDataClient *)0x0) {
    bVar8 = (accessoryDataClient->fields)._.owns;
    (this->fields).targetBody = targetBody;
    (this->fields).locked = bVar8 == 0;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).targetBody >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    (this->fields).bundleView = bundleView;
    pHVar9 = TypeInfo__HighlightManager;
    if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar10 = HighlightManager::HighlightManager_GetHighLights
                        ((HighlightType__Enum)CONCAT71((int7)((ulonglong)pHVar9 >> 8),2),
                         System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                        );
    uVar2 = 0;
    if (pLVar10 != (List_1_Highlight_1_System_Object_ *)0x0) {
      lVar3 = 0x20;
      for (; (int)uVar2 < (pLVar10->fields)._size; uVar2 = uVar2 + 1) {
        if ((uint)(pLVar10->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pHVar12 = (pLVar10->fields)._items;
        if (pHVar12 == (Highlight_1_System_Object___Array *)0x0) goto code_?;
        if ((uint)pHVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar13 = *(longlong *)((longlong)pHVar12->vector + lVar3 + -0x20);
        if ((lVar13 == 0) || (lVar13 = *(longlong *)(lVar13 + 0x18), lVar13 == 0))
        goto code_?;
        if (*(int *)(lVar13 + 0x10) == (accessoryDataClient->fields)._.aMDID) {
          pGVar14 = (this->fields).redDotNotification;
          if (pGVar14 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar14,(this->fields).locked,(MethodInfo *)0x0);
          lVar13 = FUN_?(pLVar10,uVar2);
          if (lVar13 == 0) goto code_?;
          (this->fields).highlightId = *(int32_t *)(lVar13 + 0x10);
        }
        lVar3 = lVar3 + 8;
      }
      this_00 = (this->fields).purchasePopupButton;
      if (this_00 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,bundleView ^ 1,(MethodInfo *)0x0);
        obj = (this->fields).previewImage;
        if (obj != (RectTransform *)0x0) {
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
          pvVar15 = (obj->fields)._._._.m_CachedPtr;
          if (pvVar15 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            pcVar11 = (code *)FUN_?(&UNK_?);
            if (pcVar11 == (code *)0x0) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pcRam_? = pcVar11;
          pvVar15 = (void *)(*pcRam_?)(pvVar15);
          pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar15,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                              );
          if (pOVar17 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar18 = pOVar17[1].klass;
            if (pOVar18 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar17,(MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcVar11 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar11 = (code *)FUN_?(&UNK_?);
              if (pcVar11 == (code *)0x0) {
                uVar16 = func_?(&UNK_?);
                FUN_?(uVar16,0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pcRam_? = pcVar11;
            (*pcRam_?)(pOVar18);
            obj_00 = (this->fields).accessoryItemBackground;
            if (obj_00 != (AccessoryItemBackground *)0x0) {
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
              pvVar15 = (obj_00->fields)._._._._.m_CachedPtr;
              if (pvVar15 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcVar11 = pcRam_?;
              if (pcRam_? == (code *)0x0) {
                pcVar11 = (code *)FUN_?(&UNK_?);
                if (pcVar11 == (code *)0x0) {
                  uVar16 = func_?(&UNK_?);
                  FUN_?(uVar16,0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              pcRam_? = pcVar11;
              pvVar15 = (void *)(*pcRam_?)(pvVar15);
              pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar15,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                  );
              if (pOVar17 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar18 = pOVar17[1].klass;
                if (pOVar18 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar17,(MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcVar11 = pcRam_?;
                if (pcRam_? == (code *)0x0) {
                  pcVar11 = (code *)FUN_?(&UNK_?);
                  if (pcVar11 == (code *)0x0) {
                    uVar16 = func_?(&UNK_?);
                    FUN_?(uVar16,0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                pcRam_? = pcVar11;
                (*pcRam_?)(pOVar18);
                pGVar14 = (this->fields).loadingWheel;
                if (pGVar14 != (GameObject *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar15 = (pGVar14->fields)._.m_CachedPtr;
                  if (pvVar15 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar14,(MethodInfo *)0x0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcVar11 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    pcVar11 = (code *)FUN_?(&UNK_?);
                    if (pcVar11 == (code *)0x0) {
                      uVar16 = func_?(&UNK_?);
                      FUN_?(uVar16,0);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                  }
                  pcRam_? = pcVar11;
                  (*pcRam_?)(pvVar15,1);
                  object = (this->fields).accessoryLoader;
                  pSVar19 = (accessoryDataClient->fields)._.url;
                  pOVar18 = (Object__Class *)
                            FUN_?(TypeInfo__System__Action<AvatarAccessory>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            ((UnityAction_1_System_Object_ *)pOVar18,(Object *)this,
                             MethodInfo__AccessoryInventoryViewItem__AccessoryCreatedCallback_AvatarAccessory_
                             ,(MethodInfo *)0x0);
                  if (object != (AccessoryLoader *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest
                                    ,pSVar19,pOVar18,0);
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryCreatedInternalCallback_int__AvatarAccessory_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&TypeInfo__System__Action<int,_AvatarAccessory>);
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dispose__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Current__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Value__
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pDVar20 = (Dictionary_2_System_UInt32_System_Object_ *)(object->fields).requests;
                    if (pDVar20 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
code_?:
                      FUN_?();
code_?:
                      FUN_?();
code_?:
                      FUN_?();
                      FUN_?();
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    if (iRam_? != 0) {
                      uVar2 = (uint)((ulonglong)&pDStack_21 >> 0xc);
                      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                        LOCK();
                        bVar6 = uVar4 == *puVar5;
                        if (bVar6) {
                          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar6);
                    }
                    uStack_22 = (ulonglong)(uint)(pDVar20->fields)._version;
                    uStack_23 = 2;
                    uStack_24 = 0;
                    uStack_25 = 0;
                    DStack_26._version = (undefined4)uStack_22;
                    DStack_26._index = uStack_22._4_4_;
                    DStack_26._current.key = 0;
                    DStack_26._current._4_4_ = 0;
                    DStack_26._current.value = (Object *)0x0;
                    DStack_26._getEnumeratorRetType = 2;
                    DStack_26._36_4_ = 0;
                    pDStack_21 = pDVar20;
                    DStack_26._dictionary = pDVar20;
code_?:
                    bVar8 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                      (&DStack_26,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                                      );
                    if (bVar8 == 0) {
                      iVar27 = (object->fields).id;
                      this_02 = (Action_2_Int32Enum_Object_ *)
                                FUN_?(TypeInfo__System__Action<int,_AvatarAccessory>);
                      uVar4 = 0;
                      mscorlib.dll::System::Action`2[Int32Enum,Object]::
                      Action_2_Int32Enum_Object___ctor
                                (this_02,(Object *)object,
                                 MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryCreatedInternalCallback_int__AvatarAccessory_
                                 ,(MethodInfo *)0x0);
                      this_03 = (AccessoryLoader_AccessoryLoaderRequest *)
                                FUN_?(
                                             TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest
                                             );
                      (this_03->fields).id = iVar27;
                      (this_03->fields).accessoryCreatedCallback =
                           (Action_2_Int32_AvatarAccessory_ *)this_02;
                      if (iRam_? != 0) {
                        uVar2 = (uint)((ulonglong)&(this_03->fields).accessoryCreatedCallback >>
                                       0xc);
                        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar28 = *(ulonglong *)(lVar3 + 0xADDR);
                          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                          LOCK();
                          bVar6 = uVar28 == *puVar5;
                          if (bVar6) {
                            *puVar5 = uVar28 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar6);
                      }
                      iVar1 = iRam_?;
                      (this_03->fields).subUrl = pSVar19;
                      if (iVar1 != 0) {
                        uVar2 = (uint)((ulonglong)&(this_03->fields).subUrl >> 0xc);
                        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar28 = *(ulonglong *)(lVar3 + 0xADDR);
                          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                          LOCK();
                          bVar6 = uVar28 == *puVar5;
                          if (bVar6) {
                            *puVar5 = uVar28 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar6);
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      this_01 = (object->fields).requests;
                      iVar27 = (object->fields).id;
                      pOVar17 = (Object *)
                                FUN_?(
                                             TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request
                                             );
                      pOVar17[1].klass = pOVar18;
                      if (iRam_? != 0) {
                        uVar2 = (uint)((ulonglong)(pOVar17 + 1) >> 0xc);
                        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar28 = *(ulonglong *)(lVar3 + 0xADDR);
                          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                          LOCK();
                          bVar6 = uVar28 == *puVar5;
                          if (bVar6) {
                            *puVar5 = uVar28 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar6);
                      }
                      iVar1 = iRam_?;
                      pOVar17[1].monitor = (MonitorData *)this_03;
                      if (iVar1 != 0) {
                        uVar2 = (uint)((ulonglong)&pOVar17[1].monitor >> 0xc);
                        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                        uVar4 = (ulonglong)(uVar2 & 0x3f);
                        do {
                          uVar28 = *(ulonglong *)(lVar3 + 0xADDR);
                          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                          LOCK();
                          bVar6 = uVar28 == *puVar5;
                          if (bVar6) {
                            *puVar5 = uVar28 | 1L << uVar4;
                          }
                          UNLOCK();
                        } while (!bVar6);
                      }
                      if (this_01 !=
                          (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
                           *)0x0) {
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,iVar27,pOVar17
                                   ,(InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2),
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
                                   ->klass->rgctx_data[0x22].method);
                        Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
                        AccessoryLoader+AccessoryLoaderRequest::
                        AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
                                  (this_03,(MethodInfo *)0x0);
                        (object->fields).id = (object->fields).id + 1;
                        return;
                      }
                      goto code_?;
                    }
                    if (DStack_26._current.value != (Object *)0x0) {
                      if (DStack_26._current.value[1].monitor != (MonitorData *)0x0)
                      goto code_?;
                      goto code_?;
                    }
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
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  pSVar29 = *(String **)(DStack_26._current.value[1].monitor + 0x20);
  if (pSVar29 == pSVar19) {
    return;
  }
  if ((((pSVar29 != (String *)0x0) && (pSVar19 != (String *)0x0)) &&
      ((pSVar29->fields)._stringLength == (pSVar19->fields)._stringLength)) &&
     (bVar8 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar29->fields)._firstChar,
                         (uint8_t *)&(pSVar19->fields)._firstChar,
                         (longlong)(pSVar29->fields)._stringLength * 2,(MethodInfo *)0x0), bVar8 != 0
     )) {
    return;
  }
  goto code_?;
}


/* IEnumerator OnAndroidEndHoverEvent() */

IEnumerator *
Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnAndroidEndHoverEvent
          (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void OnClicked() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnClicked
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryInventoryViewItem___OnClicked_b__30_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryInventoryViewItem___OnClicked_b__30_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).redDotNotification;
  if (pGVar1 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)(pvVar2);
    if ((cVar5 != '\0') && ((this->fields).highlightId != -1)) {
      pGVar1 = (this->fields).redDotNotification;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      highlightId = (this->fields).highlightId;
      if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      HighlightManager::HighlightManager_SetHighlightToSeen(highlightId,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar6,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem___OnClicked_b__30_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,pEVar6,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             FUN_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                          );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar6,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem___OnClicked_b__30_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar7 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
    ;
    if ((
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
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
      if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
              (pGVar1,(IList_1_UnityEngine_Transform_ *)
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                      s_InternalTransformList,(MethodInfo *)0x0);
    pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList;
    if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
      lVar9 = (longlong)(pLVar8->fields)._size;
      uVar10 = 0;
      if (0 < lVar9) {
        lVar11 = 0;
        lVar12 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar8->fields)._size <= uVar10) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar13 = (pLVar8->fields)._items;
          if (pTVar13 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar13->max_length <= uVar10) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
          if (this_00 == (Component *)0x0) goto code_?;
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (this_00,(MethodInfo *)0x0);
          bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_Execute_18
                            (pGVar1,(BaseEventData *)0x0,pEVar6,
                             (pMVar7->field7_0x38).rgctx_data[1].method);
          if (bVar14 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 8;
        } while (lVar11 < lVar9);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnDestroy
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) goto code_?;
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
      pAVar4 = (pMVar3->fields).OnAccessoryUnequipped;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pAVar4 == (Action *)0x0) {
        (pMVar3->fields).OnAccessoryUnequipped = (Action *)0x0;
      }
      else {
        pAVar5 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar4;
        }
        if (pAVar5 == (Action *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pMVar3->fields).OnAccessoryUnequipped = pAVar5;
        pAVar5 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar4;
        }
        if (pAVar5 == (Action *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pMVar3->fields).OnAccessoryUnequipped >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
  }
  this_00 = (this->fields).accessoryLoader;
  (this->fields).wasDestroyed = 1;
  if (this_00 != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              (this_00,(MethodInfo *)0x0);
    bVar11 = iRam_? != 0;
    (this->fields).accessoryLoader = (AccessoryLoader *)0x0;
    if (bVar11) {
      uVar7 = (uint)((ulonglong)&(this->fields).accessoryLoader >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    this_02 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
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
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,(MethodInfo *)0x0);
    bVar11 = iRam_? != 0;
    (this->fields).levelRequirementTextureAsset = (Texture2D *)0x0;
    if (bVar11) {
      uVar7 = (uint)((ulonglong)&(this->fields).levelRequirementTextureAsset >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEquip(Boolean) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnEquip
               (AccessoryInventoryViewItem *this,bool onEquip,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryInventoryViewItem___OnEquip_b__31_0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).locked != 0) {
    return;
  }
  if (onEquip == 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).OnAccessoryUnequipped;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pAVar2 == (Action *)0x0) {
        (pMVar1->fields).OnAccessoryUnequipped = (Action *)0x0;
      }
      else {
        pAVar3 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (Action *)0x0) {
          FUN_?(pAVar2,TypeInfo__System__Action);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pMVar1->fields).OnAccessoryUnequipped = pAVar3;
        pAVar3 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (Action *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&(pMVar1->fields).OnAccessoryUnequipped >> 0xc);
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
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pMVar9 = (this->fields).targetBody;
      if (((pMVar9 != (MVBody *)0x0) &&
          (pAVar10 = (this->fields).accessoryDataClient, pAVar10 != (AccessoryDataClient *)0x0)) &&
         (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnEquipAccessory
                  (this_02,(pMVar9->fields)._._._._.id,(pAVar10->fields)._.slot,(MethodInfo *)0x0);
        return;
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_03,(Object *)this,
             MethodInfo__AccessoryInventoryViewItem___OnEquip_b__31_0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar12 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
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
    if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar12);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar11,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar14 = (longlong)(pLVar13->fields)._size;
    uVar5 = 0;
    if (0 < lVar14) {
      lVar15 = 0;
      lVar16 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar13->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar17 = (pLVar13->fields)._items;
        if (pTVar17 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar17->max_length <= uVar5) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar11,(BaseEventData *)0x0,this_03,
                            (pMVar12->field7_0x38).rgctx_data[1].method);
        if (bVar18 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 8;
      } while (lVar15 < lVar14);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator OnHoverEvent(Single) */

IEnumerator *
Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnHoverEvent
          (AccessoryInventoryViewItem *this,float sizeOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_d__43);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_d__43);
  bVar2 = iRam_? == 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    *(float *)&pIVar1[2].monitor = sizeOffset;
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
  *(float *)&pIVar1[2].monitor = sizeOffset;
  return pIVar1;
}


/* Void OnLevelRequirementLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_OnLevelRequirementLoaded
               (AccessoryInventoryViewItem *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Badge_not_loaded_for_accessory_l);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (www == (UnityWebRequest *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_get_error(www,(MethodInfo *)0x0);
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    pRVar3 = (this->fields).levelRequirement;
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
    if (pRVar3 != (RawImage *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (((void *)(pRVar3->fields)._._._._._._._ != (void *)0x0) &&
         ((this->fields).wasDestroyed == 0)) {
        pTVar4 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
                 DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
        (this->fields).levelRequirementTextureAsset = pTVar4;
        func_?(&(this->fields).levelRequirementTextureAsset);
        pRVar3 = (this->fields).levelRequirement;
        if ((pRVar3 != (RawImage *)0x0) &&
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar3,(MethodInfo *)0x0),
           this_00 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,1,(MethodInfo *)0x0);
          pRVar3 = (this->fields).levelRequirement;
          if (pRVar3 != (RawImage *)0x0) {
            pTVar4 = (this->fields).levelRequirementTextureAsset;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object,pTVar4,0,in_R9,unaff_RDI);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pTVar5 = (Texture2D *)(pRVar3->fields).m_Texture;
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
            if (pTVar4 != (Texture2D *)0x0 || pTVar5 != (Texture2D *)0x0) {
              if (pTVar4 == (Texture2D *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (pTVar5 == (Texture2D *)0x0) {
                  FUN_?();
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                bVar6 = (pTVar5->fields)._._.m_CachedPtr == (void *)0x0;
              }
              else if (pTVar5 == (Texture2D *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                bVar6 = (pTVar4->fields)._._.m_CachedPtr == (void *)0x0;
              }
              else {
                bVar6 = pTVar5 == pTVar4;
              }
              if (!bVar6) {
                bVar6 = iRam_? != 0;
                (pRVar3->fields).m_Texture = (Texture *)pTVar4;
                if (bVar6) {
                  uVar7 = (uint)((ulonglong)&(pRVar3->fields).m_Texture >> 0xc);
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
                (*(pRVar3->klass->vtable).SetVerticesDirty.methodPtr)
                          (pRVar3,(pRVar3->klass->vtable).SetVerticesDirty.method);
                (*(pRVar3->klass->vtable).SetMaterialDirty.methodPtr)
                          (pRVar3,(pRVar3->klass->vtable).SetMaterialDirty.method);
              }
            }
            return;
          }
        }
        goto code_?;
      }
    }
  }
  else {
    pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Badge_not_loaded_for_accessory_l,pSVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnPointerEnter
               (AccessoryInventoryViewItem *this,PointerEventData *eventData,MethodInfo *method)

{
  pIVar1 = AccessoryInventoryViewItem_OnHoverEvent(this,_UNK_?,(MethodInfo *)0x0);
  if (pIVar1 == (IEnumerator *)0x0) {
    uVar2 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
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
  if (this == (AccessoryInventoryViewItem *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar6 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar6,pIVar1);
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnPointerExit
               (AccessoryInventoryViewItem *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pIVar1 = AccessoryInventoryViewItem_OnHoverEvent(this,_UNK_?,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = (IEnumerator *)
             FUN_?(TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41);
    bVar2 = iRam_? != 0;
    *(undefined4 *)&pIVar1[1].klass = 0;
    pIVar1[2].klass = (IEnumerator__Class *)this;
    if (bVar2) {
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
    }
  }
  if (pIVar1 == (IEnumerator *)0x0) {
    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar10 == 0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
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
  if (this == (AccessoryInventoryViewItem *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar11 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,pIVar1);
  return;
}


/* Void OnPreviewImageDownloadFinished() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_OnPreviewImageDownloadFinished
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryInventoryViewItem__OnEquip_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                 );
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
    FUN_?(&StringLiteral___0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).wasDestroyed != 0) {
    return;
  }
  pRVar1 = (this->fields).previewImage;
  if ((pRVar1 == (RectTransform *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,1,(MethodInfo *)0x0);
  pGVar2 = (this->fields).loadingWheel;
  if (pGVar2 == (GameObject *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pAVar3 = (this->fields).accessoryItemBackground;
  if ((pAVar3 == (AccessoryItemBackground *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pAVar3,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,1,(MethodInfo *)0x0);
  pAVar3 = (this->fields).accessoryItemBackground;
  if (pAVar3 == (AccessoryItemBackground *)0x0) goto DAT_?;
  AccessoryItemBackground::AccessoryItemBackground_Initialize
            (pAVar3,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
  pAVar4 = (this->fields).accessoryDataClient;
  method_00 = (MethodInfo *)(this->fields).newAccessoryImage;
  if (pAVar4 == (AccessoryDataClient *)0x0) goto DAT_?;
  if ((pAVar4->fields)._.iNew == 0) {
    pAVar5 = (pAVar4->fields)._.time;
    if (pAVar5 == (AccessoryTimelimit *)0x0) goto DAT_?;
    if ((pAVar5->fields).timeLimit != 0) goto code_?;
    bVar6 = false;
  }
  else {
code_?:
    bVar6 = (pAVar4->fields)._.owns == 0;
  }
  obj = (UnityAction *)0x0;
  if (method_00 == (MethodInfo *)0x0) goto DAT_?;
  pUVar7 = (UnityAction *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            ((GameObject *)method_00,bVar6,(MethodInfo *)0x0);
  if ((this->fields).bundleView != 0) {
    return;
  }
  pAVar4 = (this->fields).accessoryDataClient;
  if (pAVar4 == (AccessoryDataClient *)0x0) goto DAT_?;
  if (((pAVar4->fields)._.lvl != 0) && ((this->fields).locked != 0)) {
    if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    cVar8 = FUN_?();
    if (cVar8 == '\0') {
      if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__LevelingManager);
      }
      pUVar7 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
      this_03 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      method_00 = (MethodInfo *)0x0;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_03,(Object *)this,MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,
                 (MethodInfo *)0x0);
      pUVar7 = (UnityAction *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar7,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pUVar7 == (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
      }
      else {
        pUVar9 = obj;
        if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar9 = pUVar7;
        }
        if (pUVar9 == (UnityAction *)0x0) {
          FUN_?(pUVar7,TypeInfo__UnityEngine__Events__UnityAction);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar9;
        pUVar9 = obj;
        if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar9 = pUVar7;
        }
        if (pUVar9 == (UnityAction *)0x0) {
          FUN_?(pUVar7);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      func_?(TypeInfo__LevelingManager->static_fields);
    }
    else {
      AccessoryInventoryViewItem_SetLevelBadge(this,(MethodInfo *)0x0);
    }
  }
  pUVar9 = (UnityAction *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pUVar9 == (UnityAction *)0x0) goto DAT_?;
  pUVar11 = obj;
  if (pUVar9->klass == (UnityAction__Class *)TypeInfo__UnityEngine__RectTransform) {
    pUVar11 = pUVar9;
  }
  if (pUVar11 == (UnityAction *)0x0) {
    FUN_?(pUVar9);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pUVar11 = obj;
  if (pUVar9->klass == (UnityAction__Class *)TypeInfo__UnityEngine__RectTransform) {
    pUVar11 = pUVar9;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStack_12 = (uint16_t *)0x0;
  uStack_13 = 0;
  pvVar14 = (pUVar11->fields)._._.method_ptr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pUVar11,(MethodInfo *)0x0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(pvVar14);
  pGVar2 = (this->fields).discount;
  fVar16 = (float)uStack_13 / _UNK_?;
  fVar17 = uStack_13._4_4_ / _UNK_?;
  if ((pGVar2 == (GameObject *)0x0) ||
     (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0), value = _UNK_?,
     pTVar18 == (Transform *)0x0)) {
code_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  puStack_12 = (uint16_t *)CONCAT44(fVar17,fVar16);
  uStack_13 = CONCAT44(uStack_13._4_4_,_UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar14 = (pTVar18->fields)._._.m_CachedPtr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar18,(MethodInfo *)0x0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(pvVar14);
  pAVar19 = (this->fields).timeLimitDisplayer;
  if ((pAVar19 == (AccessoryTimeLimitDisplayer *)0x0) ||
     (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pAVar19,(MethodInfo *)0x0), pTVar18 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pTVar18->fields)._._.m_CachedPtr == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar18,(MethodInfo *)0x0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)();
  pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((pMVar20 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar20->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
      (pMVar21 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar21 == (MVLocalPlayer *)0x0)) ||
     (pAVar4 = (this->fields).accessoryDataClient, pAVar4 == (AccessoryDataClient *)0x0))
  goto code_?;
  if ((pMVar21->fields)._.level < (pAVar4->fields)._.lvl) {
    return;
  }
  this_01 = (LinkedList_1_UnityEngine_UIElements_UIR_UIRenderDevice_DeviceToFree_ *)
            (this->fields).timeLimitDisplayer;
  if (this_01 == (LinkedList_1_UnityEngine_UIElements_UIR_UIRenderDevice_DeviceToFree_ *)0x0)
  goto DAT_?;
  System.dll::System::Collections::Generic::LinkedList`1[UnityEngine::UIElements::UIR::
  UIRenderDevice+DeviceToFree]::
  LinkedList_1_UnityEngine_UIElements_UIR_UIRenderDevice_DeviceToFree___ctor_1
            (this_01,(SerializationInfo *)(((this->fields).accessoryDataClient)->fields)._.time,
             (StreamingContext *)pUVar7,method_00);
  pAVar19 = (this->fields).timeLimitDisplayer;
  if (pAVar19 == (AccessoryTimeLimitDisplayer *)0x0) goto DAT_?;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pAVar19,(MethodInfo *)0x0);
  pUVar7 = obj;
  if ((this->fields).locked != 0) {
    pAVar4 = (this->fields).accessoryDataClient;
    if ((pAVar4 == (AccessoryDataClient *)0x0) ||
       (pAVar5 = (pAVar4->fields)._.time, pAVar5 == (AccessoryTimelimit *)0x0)) goto DAT_?;
    pUVar7 = (UnityAction *)(ulonglong)((pAVar5->fields).timeLimit != 0);
  }
  if (pGVar2 == (GameObject *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,(bool)pUVar7,(MethodInfo *)0x0);
  pAVar4 = (this->fields).accessoryDataClient;
  if (pAVar4 == (AccessoryDataClient *)0x0) goto DAT_?;
  if ((pAVar4->fields)._.dsc < 100) {
    bVar6 = (pAVar4->fields)._.cost == 0;
  }
  else {
    bVar6 = true;
  }
  pGVar2 = (this->fields).discount;
  if (((this->fields).locked == 0) || ((pAVar4->fields)._.dsc < 1)) {
    bVar22 = 0;
  }
  else {
    bVar22 = bVar6 ^ 1;
  }
  if (pGVar2 == (GameObject *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,bVar22,(MethodInfo *)0x0);
  pGVar2 = (this->fields).freeLabel;
  if (pGVar2 == (GameObject *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,(this->fields).locked & bVar6,(MethodInfo *)0x0);
  pAVar4 = (this->fields).accessoryDataClient;
  pTVar23 = (this->fields).discountText;
  if (pAVar4 == (AccessoryDataClient *)0x0) goto DAT_?;
  pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                      ((Int32 *)&(pAVar4->fields)._.dsc,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Format
            (StringLiteral___0__,(Object *)pSVar24,(MethodInfo *)0x0);
  if (pTVar23 == (Text *)0x0) goto DAT_?;
  (*(pTVar23->klass->vtable).set_text.methodPtr)(pTVar23);
  pTVar25 = (this->fields).equipCheckbox;
  if ((pTVar25 == (Toggle *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar25,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,(this->fields).locked == 0,(MethodInfo *)0x0);
  if ((this->fields).locked == 0) {
    pAVar4 = (this->fields).accessoryDataClient;
    pTVar25 = (this->fields).equipCheckbox;
    if ((((pAVar4 == (AccessoryDataClient *)0x0) ||
         (pMVar26 = (this->fields).targetBody, pMVar26 == (MVBody *)0x0)) ||
        (this_02 = (pMVar26->fields).bodyAccessoriesController,
        this_02 == (BodyAccessoriesController *)0x0)) ||
       (bVar22 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryEquipped
                           (this_02,(pAVar4->fields)._.sAID,(MethodInfo *)0x0),
       pTVar25 == (Toggle *)0x0)) goto DAT_?;
    UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(pTVar25,bVar22,1,(MethodInfo *)0x0);
  }
  pTVar25 = (this->fields).equipCheckbox;
  if (pTVar25 == (Toggle *)0x0) goto DAT_?;
  this_04 = (CanvasGroup *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)pTVar25,
                       UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                      );
  pTVar25 = (this->fields).equipCheckbox;
  if (pTVar25 == (Toggle *)0x0) goto DAT_?;
  if ((pTVar25->fields).m_IsOn != 0) {
    value = _UNK_?;
  }
  if (this_04 == (CanvasGroup *)0x0) goto DAT_?;
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (this_04,value,(MethodInfo *)0x0);
  pTVar25 = (this->fields).equipCheckbox;
  if (pTVar25 == (Toggle *)0x0) goto DAT_?;
  pTVar27 = (pTVar25->fields).onValueChanged;
  uVar15 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
  FUN_?(uVar15,this);
  if (pTVar27 == (Toggle_ToggleEvent *)0x0) goto DAT_?;
  FUN_?(pTVar27,uVar15);
  pGVar2 = (this->fields).priceDisplay;
  if (pGVar2 == (GameObject *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,(this->fields).locked,(MethodInfo *)0x0);
  pGVar2 = (this->fields).priceStrikeout;
  if ((this->fields).locked == 0) {
code_?:
    bVar6 = false;
  }
  else {
    pAVar4 = (this->fields).accessoryDataClient;
    if (pAVar4 == (AccessoryDataClient *)0x0) goto DAT_?;
    if ((pAVar4->fields)._.dsc < 1) goto code_?;
    bVar6 = 0 < (pAVar4->fields)._.cost;
  }
  if (pGVar2 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,bVar6,(MethodInfo *)0x0);
    pAVar4 = (this->fields).accessoryDataClient;
    pTVar23 = (this->fields).priceStrikeoutText;
    if (((pAVar4 != (AccessoryDataClient *)0x0) &&
        (pSVar24 = mscorlib.dll::System::Int32::Int32_ToString_1
                             ((Int32 *)&(pAVar4->fields)._.cost,StringLiteral_N0,(MethodInfo *)0x0),
        pSVar24 != (String *)0x0)) &&
       (pSVar24 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar24,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
       pTVar23 != (Text *)0x0)) {
      (*(pTVar23->klass->vtable).set_text.methodPtr)
                (pTVar23,pSVar24,(pTVar23->klass->vtable).set_text.method);
      pSVar24 = StringLiteral_N0;
      pAVar4 = (this->fields).accessoryDataClient;
      pTVar23 = (this->fields).priceText;
      if (pAVar4 != (AccessoryDataClient *)0x0) {
        iVar28 = (pAVar4->fields)._.dsc;
        iVar29 = (pAVar4->fields)._.cost;
        iVar30 = (pAVar4->fields)._.cost;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pSVar24 == (String *)0x0) {
          puVar31 = (uint16_t *)0x0;
          uVar32 = 0;
        }
        else {
          puStack_12 = &(pSVar24->fields)._firstChar;
          uVar32 = (pSVar24->fields)._stringLength;
          uStack_13 = (ulonglong)uVar32;
          puVar31 = puStack_12;
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        auStack_33._12_4_ = 0;
        auStack_33._8_4_ = uVar32;
        auStack_33._0_8_ = puVar31;
        pSVar24 = mscorlib.dll::System::Number::Number_FormatInt32
                            (iVar30 - (iVar28 * iVar29) / 100,(ReadOnlySpan_1_Char_ *)auStack_33,
                             (IFormatProvider *)0x0,(MethodInfo *)0x0);
        if ((pSVar24 != (String *)0x0) &&
           (pSVar24 = mscorlib.dll::System::String::String_Replace_1
                                (pSVar24,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
           pTVar23 != (Text *)0x0)) {
          (*(pTVar23->klass->vtable).set_text.methodPtr)
                    (pTVar23,pSVar24,(pTVar23->klass->vtable).set_text.method);
          pRVar34 = (this->fields).levelRequirement;
          if (pRVar34 != (RawImage *)0x0) {
            pRVar1 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pRVar34,(MethodInfo *)0x0);
            pRVar34 = (this->fields).levelRequirement;
            if ((pRVar34 != (RawImage *)0x0) &&
               (pRVar35 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                    ((Graphic *)pRVar34,(MethodInfo *)0x0),
               pRVar35 != (RectTransform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              puStack_12 = (uint16_t *)0x0;
              uStack_13 = uStack_13 & 0xffffffff00000000;
              pvVar14 = (pRVar35->fields)._._._.m_CachedPtr;
              if (pvVar14 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar35,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              (*pcRam_?)(pvVar14);
              pRVar34 = (this->fields).levelRequirement;
              if ((pRVar34 != (RawImage *)0x0) &&
                 (pRVar35 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pRVar34,(MethodInfo *)0x0),
                 pRVar35 != (RectTransform *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar14 = (pRVar35->fields)._._._.m_CachedPtr;
                if (pvVar14 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar35,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar15 = func_?(&UNK_?);
                  FUN_?(uVar15,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                (*pcRam_?)(pvVar14);
                pGVar2 = (this->fields).priceDisplay;
                if ((pGVar2 != (GameObject *)0x0) &&
                   (pUVar7 = (UnityAction *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                   pUVar7 != (UnityAction *)0x0)) {
                  pUVar9 = obj;
                  if (pUVar7->klass == (UnityAction__Class *)TypeInfo__UnityEngine__RectTransform)
                  {
                    pUVar9 = pUVar7;
                  }
                  if (pUVar9 == (UnityAction *)0x0) {
                    FUN_?(pUVar7,TypeInfo__UnityEngine__RectTransform);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  if (pUVar7->klass == (UnityAction__Class *)TypeInfo__UnityEngine__RectTransform)
                  {
                    obj = pUVar7;
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  auStack_33._0_8_ = (void *)0x0;
                  auStack_33._8_8_ = 0;
                  pvVar14 = (obj->fields)._._.method_ptr;
                  if (pvVar14 != (void *)0x0) {
                    pcVar10 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                      uVar15 = func_?(&UNK_?);
                      FUN_?(uVar15,0);
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    pcRam_? = pcVar10;
                    (*pcRam_?)(pvVar14);
                    if (pRVar1 == (RectTransform *)0x0) {
                      FUN_?();
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    puStack_12 = (uint16_t *)
                                 CONCAT44((float)auStack_33._12_4_ + 0.0,puStack_12._0_4_);
                    uStack_13 = uStack_13 & 0xffffffff00000000;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar14 = (pRVar1->fields)._._._.m_CachedPtr;
                    if (pvVar14 != (void *)0x0) {
                      pcVar10 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0))
                      {
                        uVar15 = func_?(&UNK_?);
                        FUN_?(uVar15,0);
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pcRam_? = pcVar10;
                      (*pcRam_?)(pvVar14,&puStack_12);
                      return;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPurchasePopupPop() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnPurchasePopupPop
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IInventoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryInventoryViewItem____c___OnPurchasePopupPop_b__33_0_UnityEngine__EventSystems__IInventoryChanged__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryInventoryViewItem____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AccessoryInventoryViewItem____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AccessoryInventoryViewItem____c);
  }
  this_01 = TypeInfo__AccessoryInventoryViewItem____c->static_fields->__9__33_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IInventoryChanged_ *)0x0) {
    if (*(int *)&(TypeInfo__AccessoryInventoryViewItem____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryInventoryViewItem____c);
    }
    object = TypeInfo__AccessoryInventoryViewItem____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IInventoryChanged_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AccessoryInventoryViewItem____c___OnPurchasePopupPop_b__33_0_UnityEngine__EventSystems__IInventoryChanged__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryInventoryViewItem____c->static_fields->__9__33_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__AccessoryInventoryViewItem____c->static_fields->__9__33_0 >> 0xc);
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
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IInventoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IInventoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>_
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


/* Void SetLevelBadge() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_SetLevelBadge
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
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
            (this_03,(Object *)this,MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,
             (MethodInfo *)0x0);
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
  pAVar8 = (this->fields).accessoryDataClient;
  if (pAVar8 == (AccessoryDataClient *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  key = (pAVar8->fields)._.lvl;
  this_04 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_04,(Object *)this,
             MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
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
  if (TypeInfo__BadgeManager->static_fields->maxLevelBadge != 0) {
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
              TypeInfo__BadgeManager->static_fields->badgeUrls;
    if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                         (this_01,key,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                          ->klass->rgctx_data[0x21].method);
      if (iVar9 < 0) {
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
         (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_02,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                              ), pOVar10 != (Object *)0x0)) {
        pSVar11 = mscorlib.dll::System::String::String_Concat_4
                            ((String *)pOVar10[1].monitor,StringLiteral__Unity_2,(MethodInfo *)0x0);
        this_05 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedTextureRequest);
        AsyncWebRequest::AsyncWebRequest__ctor
                  (this_05,pSVar11,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,
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
          bVar12 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if ((bVar12 <= (this_05->klass->_1).naturalAligment) &&
             ((this_05->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] ==
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AsyncWWWManager);
            }
            pAVar13 = this_05->klass;
            bVar12 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if (((pAVar13->_1).naturalAligment < bVar12) ||
               ((pAVar13->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              FUN_?(this_05,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar13,
                            unaff_RBX);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            cVar14 = (*(code *)pAVar13[1]._0.image)
                               (this_05,TypeInfo__AsyncWWWManager->static_fields->cache,
                                pAVar13[1]._0.gc_desc);
            if (cVar14 != '\0') {
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
           (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                 (this_05->fields).requestPriority,
                                 MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                ), pOVar10 != (Object *)0x0)) {
          if (pOVar10[1].klass != (Object__Class *)0x0) {
            if (*(int *)&pOVar10[2].klass == *(int *)&((pOVar10[1].klass)->_0).namespaze) {
              pOVar15 = pOVar10[1].klass;
              iVar16 = *(int *)&(pOVar15->_0).namespaze * 2;
              if (iVar16 < *(int *)&(pOVar15->_0).namespaze + 4) {
                iVar16 = *(int *)&(pOVar15->_0).namespaze + 4;
              }
              FUN_?(pOVar10,iVar16,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                            ->klass->rgctx_data[5].rgctxDataDummy);
            }
            if (pOVar10[1].klass != (Object__Class *)0x0) {
              FUN_?(pOVar10[1].klass,(longlong)*(int *)((longlong)&pOVar10[1].monitor + 4),
                            this_05);
              if (pOVar10[1].klass != (Object__Class *)0x0) {
                iVar17 = *(int *)((longlong)&pOVar10[1].monitor + 4) + 1;
                iVar16 = 0;
                if (iVar17 != *(int *)&((pOVar10[1].klass)->_0).namespaze) {
                  iVar16 = iVar17;
                }
                *(int *)((longlong)&pOVar10[1].monitor + 4) = iVar16;
                *(int *)&pOVar10[2].klass = *(int *)&pOVar10[2].klass + 1;
                piVar18 = (int *)((longlong)&pOVar10[2].klass + 4);
                *piVar18 = *piVar18 + 1;
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
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar11 = StringLiteral_No_badges_was_loaded;
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
  pIVar19 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar19 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar19,0,pSVar11);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnequipAccessoryCallback() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_UnequipAccessoryCallback
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                 );
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
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pAVar3 = (pMVar2->fields).OnAccessoryUnequipped;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,(MethodInfo *)0x0)
    ;
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar3 == (Action *)0x0) {
      (pMVar2->fields).OnAccessoryUnequipped = (Action *)0x0;
    }
    else {
      pAVar4 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 == (Action *)0x0) {
        FUN_?(pAVar3,TypeInfo__System__Action);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar2->fields).OnAccessoryUnequipped = pAVar4;
      pAVar4 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 == (Action *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(pMVar2->fields).OnAccessoryUnequipped >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pTVar11 = (this->fields).equipCheckbox;
    if (pTVar11 != (Toggle *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(pTVar11,0,1,(MethodInfo *)0x0);
      pTVar11 = (this->fields).equipCheckbox;
      if (pTVar11 != (Toggle *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)pTVar11,
                         UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                        );
        pTVar11 = (this->fields).equipCheckbox;
        if (pTVar11 != (Toggle *)0x0) {
          uVar12 = _UNK_?;
          if ((pTVar11->fields).m_IsOn != 0) {
            uVar12 = _UNK_?;
          }
          if (obj != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                            ,uVar12,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj == (Object *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pOVar13 = obj[1].klass;
            if (pOVar13 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pOVar13,uVar12);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnClicked>b__30_0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnClicked_b__30_0
               (AccessoryInventoryViewItem *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryClicked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if ((pAVar1 == (AccessoryDataClient *)0x0) || (x == (IAccessoryClicked *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (pAVar1->fields)._.cat;
  uVar4 = 0;
  pIVar5 = x->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
        pVVar7 = &(pIVar5->vtable).OpenAccessoryManagementScreen +
                 (pIVar5->interfaceOffsets[uVar4].offset + 2);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(x,(ulonglong)uVar3,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void <OnClicked>b__30_1(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnClicked_b__30_1
               (AccessoryInventoryViewItem *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryClicked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IAccessoryClicked *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pAVar2 = (this->fields).accessoryDataClient;
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
        pVVar6 = &(pIVar3->vtable).OpenAccessoryManagementScreen +
                 pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,0,pAVar2,unaff_RDI
                        );
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(x,pAVar2,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* Void <OnEquip>b__31_0(IAttachToBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnEquip_b__31_0
               (AccessoryInventoryViewItem *this,IAttachToBody *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAttachToBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if ((pAVar1 != (AccessoryDataClient *)0x0) && (x != (IAttachToBody *)0x0)) {
    FUN_?(_UNK_?,0,x,(pAVar1->fields)._.sAID,0,_UNK_?);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AccessoryInventoryViewItem() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__ctor
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (AccessoryLoader *)
            FUN_?(
                         TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                         );
  Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
            (this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).accessoryLoader = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryLoader >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  (this->fields).highlightId = -1;
  (this->fields).effectDuration = 0.1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

