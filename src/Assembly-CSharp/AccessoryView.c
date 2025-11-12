
/* Void AvatarAccessoryCreateHandler(AvatarAccessory) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_AvatarAccessoryCreateHandler
               (AccessoryView *this,AvatarAccessory *avatarAccessory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AccessoryCategory);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryView__OnPreviewImageFinishedDownloading__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewer>_AccessoryPreviewer_
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
      pAVar2 = (this->fields).accessoryPreviewerPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pAVar2 = (AccessoryPreviewer *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pAVar2,
                           AccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewer>_AccessoryPreviewer_
                          );
      bVar3 = iRam_? != 0;
      (this->fields).previewer = pAVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).previewer >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pAVar2 = (this->fields).previewer;
      if ((pAVar2 != (AccessoryPreviewer *)0x0) &&
         (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pAVar2,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar1,(this->fields).rootTransform,1,(MethodInfo *)0x0);
        uVar8 = _UNK_?;
        uVar4 = _UNK_?;
        pAVar2 = (this->fields).previewer;
        if ((avatarAccessory != (AvatarAccessory *)0x0) &&
           (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)avatarAccessory,(MethodInfo *)0x0),
           pAVar2 != (AccessoryPreviewer *)0x0)) {
          uVar10 = 0;
          VStack_11._0_8_ = ZEXT48(_UNK_?);
          VStack_11.z = 0.0;
          EStack_12.monitor = (MonitorData *)CONCAT44(EStack_12.monitor._4_4_,uVar8);
          EStack_12.klass = (Enum__Class *)((ulonglong)uVar4 << 0x20);
          AccessoryPreviewer::AccessoryPreviewer_Initialize
                    (pAVar2,0x200,0x200,LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,
                     CameraClearFlags__Enum_Color,(Vector3 *)&EStack_12,&VStack_11,pGVar9,
                     (this->fields).rootTransform,(MethodInfo *)0x0);
          if ((this->fields).OnFinished != (Action *)0x0) {
            pAVar13 = (this->fields).OnFinished;
            (*(pAVar13->fields)._._.invoke_impl)((pAVar13->fields)._._.method_code);
          }
          bVar3 = iRam_? != 0;
          (this->fields).OnFinished = (Action *)0x0;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).OnFinished >> 0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pAVar14 = (this->fields).accessoryDataClient;
          if (pAVar14 != (AccessoryDataClient *)0x0) {
            EStack_12.klass = (Enum__Class *)TypeInfo__MV__Common__AccessoryCategory;
            iStack_15 = (pAVar14->fields)._.cat;
            EStack_12.monitor = (MonitorData *)0xffffffffffffffff;
            pSVar16 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
            pSVar16 = mscorlib.dll::System::String::String_Concat_5
                                (StringLiteral_AvatarAccessory_,pSVar16,StringLiteral__Images_,
                                 (MethodInfo *)0x0);
            pAVar14 = (this->fields).accessoryDataClient;
            if (pAVar14 != (AccessoryDataClient *)0x0) {
              pSVar17 = (pAVar14->fields)._.url;
              pSVar18 = (String__Array *)FUN_?(TypeInfo__System__String);
              if (((pSVar18 != (String__Array *)0x0) &&
                  (FUN_?(pSVar18,0,::StringLiteral__), pSVar17 != (String *)0x0)) &&
                 (pSVar18 = mscorlib.dll::System::String::String_SplitInternal_1
                                      (pSVar17,(String *)0x0,pSVar18,0x7fffffff,
                                       StringSplitOptions__Enum_None,(MethodInfo *)0x0),
                 pSVar18 != (String__Array *)0x0)) {
                iVar19 = (int)pSVar18->max_length;
                if ((uint)pSVar18->max_length <= iVar19 - 1U) {
code_?:
                  FUN_?();
                  pcVar20 = (code *)swi(3);
                  (*pcVar20)();
                  return;
                }
                pSVar17 = pSVar18->vector[(longlong)iVar19 + -1];
                pSVar18 = (String__Array *)FUN_?(TypeInfo__System__String);
                if (((pSVar18 != (String__Array *)0x0) &&
                    (FUN_?(pSVar18,0,::StringLiteral__), pSVar17 != (String *)0x0)) &&
                   (pSVar18 = mscorlib.dll::System::String::String_SplitInternal_1
                                        (pSVar17,(String *)0x0,pSVar18,0x7fffffff,
                                         StringSplitOptions__Enum_None,(MethodInfo *)0x0),
                   pSVar18 != (String__Array *)0x0)) {
                  if ((int)pSVar18->max_length == 0) goto code_?;
                  pSVar17 = mscorlib.dll::System::String::String_Concat_4
                                      (pSVar18->vector[0],StringLiteral_Image_unity3d,
                                       (MethodInfo *)0x0);
                  if (pSVar17 != (String *)0x0) {
                    pSVar17 = mscorlib.dll::System::String::String_ToLower
                                        (pSVar17,(MethodInfo *)0x0);
                    pSVar16 = mscorlib.dll::System::String::String_Concat_4
                                        (pSVar16,pSVar17,(MethodInfo *)0x0);
                    pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_GetComponentsInChildren
                                        ((Component *)avatarAccessory,
                                         SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                        );
                    if (pOVar21 != (Object__Array *)0x0) {
                      ppOVar22 = pOVar21->vector;
                      for (; (int)uVar10 < (int)pOVar21->max_length; uVar10 = uVar10 + 1) {
                        if ((uint)pOVar21->max_length <= uVar10) goto code_?;
                        pOVar23 = *ppOVar22;
                        if (pOVar23 == (Object *)0x0) goto code_?;
                        bVar3 = cRam_? == '\0';
                        *(undefined1 *)&pOVar23[3].monitor = 0;
                        if (bVar3) {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if ((pMVar24 == (MVGameControllerBase *)0x0) ||
                           (this_00 = (pMVar24->fields).skinnedMeshOptimizeManager,
                           this_00 == (SkinnedMeshOptimizeManager *)0x0)) goto code_?;
                        EStack_12.klass = (Enum__Class *)pOVar23[2].monitor;
                        EStack_12.monitor = (MonitorData *)pOVar23[3].klass;
                        SkinnedMeshOptimizeManager::
                        SkinnedMeshOptimizeManager_RemoveoptimizationData
                                  (this_00,(SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData *
                                           )&EStack_12,(MethodInfo *)0x0);
                        ppOVar22 = ppOVar22 + 1;
                      }
                      this_01 = (this->fields).previewImageStreamingManager;
                      onAssetSet = (UnityAction *)
                                   FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                      pMVar25 = MethodInfo__AccessoryView__OnPreviewImageFinishedDownloading__;
                      bVar3 = iRam_? != 0;
                      (onAssetSet->fields)._._.method_ptr =
                           MethodInfo__AccessoryView__OnPreviewImageFinishedDownloading__->
                           virtualMethodPointer;
                      (onAssetSet->fields)._._.method = pMVar25;
                      (onAssetSet->fields)._._.m_target = (Object *)this;
                      if (bVar3) {
                        uVar4 = (uint)((ulonglong)&(onAssetSet->fields)._._.m_target >> 0xc);
                        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                        do {
                          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                          LOCK();
                          bVar3 = uVar6 == *puVar7;
                          if (bVar3) {
                            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar3);
                      }
                      uVar26 = pMVar25->parameters_count;
                      (onAssetSet->fields)._._.method_code = onAssetSet;
                      if (((pMVar25->flags & 0x10) == 0) || (uVar26 != 0)) {
                        (onAssetSet->fields)._._.method_code = (onAssetSet->fields)._._.m_target;
                        puVar27 = (onAssetSet->fields)._._.method_ptr;
                      }
                      else {
                        puVar27 = &UNK_?;
                      }
                      (onAssetSet->fields)._._.invoke_impl = puVar27;
                      (onAssetSet->fields)._._.extra_arg = FUN_?;
                      if (this_01 != (StreamedSpriteToImageManual *)0x0) {
                        StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                                  (this_01,pSVar16,onAssetSet,(MethodInfo *)0x0);
                        bVar3 = iRam_? == 0;
                        (this->fields).previewImageUrl = pSVar16;
                        if (bVar3) {
                          return;
                        }
                        uVar4 = (uint)((ulonglong)&(this->fields).previewImageUrl >> 0xc);
                        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                        do {
                          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                          LOCK();
                          bVar3 = uVar6 == *puVar7;
                          if (bVar3) {
                            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar3);
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
      goto code_?;
    }
  }
  if (avatarAccessory != (AvatarAccessory *)0x0) {
    pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
              ((Object_1 *)pGVar9,0.0,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void BackToShop() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_BackToShop
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
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
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryView____c___BackToShop_b__50_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryView____c___BackToShop_b__50_1_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryView____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
      pTVar1 = (this->fields).rootTransform;
      if (pTVar1 == (Transform *)0x0) goto DAT_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar1,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  bVar3 = iRam_? != 0;
  (this->fields).rootTransform = (Transform *)0x0;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).rootTransform >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if ((this->fields).accessoryLoader != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              ((this->fields).accessoryLoader,(MethodInfo *)0x0);
  }
  pAVar8 = (this->fields).previewer;
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
  if (pAVar8 != (AccessoryPreviewer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar8->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar8 = (this->fields).previewer;
      if (pAVar8 == (AccessoryPreviewer *)0x0) goto DAT_?;
      AccessoryPreviewer::AccessoryPreviewer_Destroy(pAVar8,(MethodInfo *)0x0);
    }
  }
  this_00 = (this->fields).tabMenu;
  if (this_00 != (TabMenuAccessoryShop *)0x0) {
    pTVar9 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                        (this_00,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
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
    if (pTVar9 != (TabMenuButtonBase *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar9->fields)._._._._.m_CachedPtr != (void *)0x0) {
        AccessoryView_DestroyFeaturedTab(this,(MethodInfo *)0x0);
      }
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryView____c);
    }
    this_02 = TypeInfo__AccessoryView____c->static_fields->__9__50_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
      if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AccessoryView____c);
      }
      pAVar10 = TypeInfo__AccessoryView____c->static_fields->__9;
      this_02 = (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)pAVar10,
                 MethodInfo__AccessoryView____c___BackToShop_b__50_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryView____c->static_fields->__9__50_0 = this_02;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__AccessoryView____c->static_fields->__9__50_0 >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryView____c);
    }
    this_03 = TypeInfo__AccessoryView____c->static_fields->__9__50_1;
    if (this_03 == (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0) {
      if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AccessoryView____c);
      }
      pAVar10 = TypeInfo__AccessoryView____c->static_fields->__9;
      this_03 = (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)pAVar10,
                 MethodInfo__AccessoryView____c___BackToShop_b__50_1_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryView____c->static_fields->__9__50_1 = this_03;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__AccessoryView____c->static_fields->__9__50_1 >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar11 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
    ;
    if ((
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
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
      if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar11);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
              (pGVar2,(IList_1_UnityEngine_Transform_ *)
                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList,(MethodInfo *)0x0);
    pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList;
    if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
      lVar13 = (longlong)(pLVar12->fields)._size;
      uVar4 = 0;
      if (0 < lVar13) {
        lVar14 = 0;
        lVar15 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar12->fields)._size <= uVar4) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pTVar17 = (pLVar12->fields)._items;
          if (pTVar17 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar17->max_length <= uVar4) {
            FUN_?();
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          this_01 = *(Component **)((longlong)pTVar17->vector + lVar15 + -0x20);
          if (this_01 == (Component *)0x0) goto code_?;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_01,(MethodInfo *)0x0);
          bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                   ExecuteEvents_Execute_18
                             (pGVar2,(BaseEventData *)0x0,
                              (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                              (pMVar11->field7_0x38).rgctx_data[1].method);
          if (bVar18 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_01,(MethodInfo *)0x0);
            return;
          }
          uVar4 = uVar4 + 1;
          lVar14 = lVar14 + 1;
          lVar15 = lVar15 + 8;
        } while (lVar14 < lVar13);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
DAT_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean CurrentlyViewingAccessory(AccessoryDataClient) */

bool Assembly-CSharp.dll::AccessoryView::AccessoryView_CurrentlyViewingAccessory
               (AccessoryView *this,AccessoryDataClient *data,MethodInfo *method)

{
  if ((this->fields).accessoryDataClient == (AccessoryDataClient *)0x0) {
    return 0;
  }
  if (data != (AccessoryDataClient *)0x0) {
    return (((this->fields).accessoryDataClient)->fields)._.aMDID == (data->fields)._.aMDID;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Destroy
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
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
      pTVar1 = (this->fields).rootTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  bVar3 = iRam_? != 0;
  (this->fields).rootTransform = (Transform *)0x0;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).rootTransform >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pAVar8 = (this->fields).previewer;
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
  if (pAVar8 != (AccessoryPreviewer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar8->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar8 = (this->fields).previewer;
      if (pAVar8 == (AccessoryPreviewer *)0x0) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar8,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields).accessoryLoader != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              ((this->fields).accessoryLoader,(MethodInfo *)0x0);
  }
  return;
}


/* Void DestroyFeaturedTab() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_DestroyFeaturedTab
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap((MethodInfo *)0x0)
  ;
  bVar1 = false;
  if ((this_01 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Values__
                            ),
        pDVar2 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar3 = uStack_4;
code_?:
    uStack_4 = uVar3;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_5 = (pDVar2->fields)._dictionary;
    puStack_6 = (undefined4 *)0x0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_5 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (uStack_5 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iStack_12 = (uStack_5->fields)._version;
    uStack_7 = 0;
    uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
    uStack_13 = (undefined4)uStack_5;
    uStack_14 = uStack_5._4_4_;
    uStack_4 = 0;
    lStack_15 = 0;
    uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_6 = &uStack_13;
    while (lVar16 = CONCAT44(uStack_14,uStack_13), lVar16 != 0) {
      if (iStack_12 != *(int *)(lVar16 + 0x2c)) goto code_?;
      do {
        if (lVar16 == 0) goto code_?;
        if (*(uint *)(lVar16 + 0x20) <= uStack_4) {
          uStack_4 = *(int *)(lVar16 + 0x20) + 1;
          lStack_15 = 0;
          if (!bVar1) {
            this_00 = (this->fields).tabMenu;
            if (this_00 == (TabMenuAccessoryShop *)0x0) goto code_?;
            TabMenuAccessoryShop::TabMenuAccessoryShop_DestroyTab
                      (this_00,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
          }
          return;
        }
        lVar17 = *(longlong *)(lVar16 + 0x18);
        lVar18 = (longlong)(int)uStack_4;
        uVar3 = uStack_4 + 1;
        if (lVar17 == 0) goto code_?;
        bVar19 = *(uint *)(lVar17 + 0x18) <= uStack_4;
        uStack_4 = uVar3;
        if (bVar19) goto code_?;
      } while (*(int *)(lVar17 + 0x20 + lVar18 * 0x18) < 0);
      lStack_15 = *(longlong *)(lVar17 + (lVar18 + 2) * 0x18);
      func_?();
      lVar16 = lStack_15;
      iVar20 = 0;
      if (lStack_15 == 0) goto code_?;
      for (; iVar20 < *(int *)(lVar16 + 0x18); iVar20 = iVar20 + 1) {
        lVar17 = FUN_?(lVar16,iVar20);
        if (lVar17 == 0) goto code_?;
        if (*(char *)(lVar17 + 0x40) == '\0') {
          lVar17 = FUN_?(lVar16,iVar20);
          if (lVar17 == 0) goto code_?;
          if (*(char *)(lVar17 + 0x1a) != '\0') {
            bVar1 = true;
          }
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void EquipPopupResultCallback() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_EquipPopupResultCallback
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
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
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryView____c___EquipPopupResultCallback_b__52_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryView____c___EquipPopupResultCallback_b__52_1_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryView____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).accessoryDataClient == (AccessoryDataClient *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryView____c);
    }
    this_00 = TypeInfo__AccessoryView____c->static_fields->__9__52_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
      if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AccessoryView____c);
      }
      pAVar2 = TypeInfo__AccessoryView____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)pAVar2,
                 MethodInfo__AccessoryView____c___EquipPopupResultCallback_b__52_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryView____c->static_fields->__9__52_0 = this_00;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__AccessoryView____c->static_fields->__9__52_0 >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryView____c);
    }
    this_01 = TypeInfo__AccessoryView____c->static_fields->__9__52_1;
    if (this_01 == (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0) {
      if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AccessoryView____c);
      }
      pAVar2 = TypeInfo__AccessoryView____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pAVar2,
                 MethodInfo__AccessoryView____c___EquipPopupResultCallback_b__52_1_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryView____c->static_fields->__9__52_1 = this_01;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__AccessoryView____c->static_fields->__9__52_1 >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
              );
  }
  return;
}


/* Void HandleNotOwnedUI() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HandleNotOwnedUI
               (AccessoryView *this,MethodInfo *method)

{
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
     ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar3 != (MVLocalPlayer *)0x0 &&
      (pAVar4 = (this->fields).accessoryDataClient, pAVar4 != (AccessoryDataClient *)0x0)))) {
    if ((pMVar3->fields)._.level < (pAVar4->fields)._.lvl) {
      AccessoryView_SetShowPrices(this,0,(MethodInfo *)0x0);
    }
    else {
      AccessoryView_HandlePrices(this,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
    }
    pAVar4 = (this->fields).accessoryDataClient;
    if ((pAVar4 != (AccessoryDataClient *)0x0) &&
       (pAVar5 = (this->fields).timeLimitDisplayer, pAVar5 != (AccessoryTimeLimitDisplayer *)0x0)) {
      bVar6 = iRam_? != 0;
      (pAVar5->fields).accessoryTimeLimitData = (pAVar4->fields)._.time;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(pAVar5->fields).accessoryTimeLimitData >> 0xc);
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
      pAVar5 = (this->fields).timeLimitDisplayer;
      if (pAVar5 != (AccessoryTimeLimitDisplayer *)0x0) {
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar5,(MethodInfo *)0x0);
        pAVar4 = (this->fields).accessoryDataClient;
        if (pAVar4 != (AccessoryDataClient *)0x0) {
          if ((pAVar4->fields)._.owns == 0) {
            pAVar12 = (pAVar4->fields)._.time;
            if (pAVar12 == (AccessoryTimelimit *)0x0) goto code_?;
            bVar6 = (pAVar12->fields).timeLimit != 0;
          }
          else {
            bVar6 = false;
          }
          if (pGVar11 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar11,bVar6,(MethodInfo *)0x0);
            pAVar4 = (this->fields).accessoryDataClient;
            if ((pAVar4 != (AccessoryDataClient *)0x0) &&
               (pGVar11 = (this->fields).newAccessoryImage, pGVar11 != (GameObject *)0x0)) {
              bVar13 = (pAVar4->fields)._.iNew;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,bVar13,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar11 == (GameObject *)0x0) {
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pvVar15 = (pGVar11->fields)._.m_CachedPtr;
              if (pvVar15 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar11,(MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar16 = func_?(&UNK_?);
                FUN_?(uVar16,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar15,bVar13);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void HandlePreviewing(MVBody) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HandlePreviewing
               (AccessoryView *this,MVBody *avatarBody,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).avatarBody = avatarBody;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarBody >> 0xc);
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
  pAVar6 = (this->fields).accessoryDataClient;
  if (((pAVar6 != (AccessoryDataClient *)0x0) && (avatarBody != (MVBody *)0x0)) &&
     (pBVar7 = (avatarBody->fields).bodyAccessoriesController,
     pBVar7 != (BodyAccessoriesController *)0x0)) {
    bVar8 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryEquipped
                      (pBVar7,(pAVar6->fields)._.sAID,(MethodInfo *)0x0);
    pAVar9 = (this->fields).sizeSlider;
    (this->fields).isPreviewing = bVar8 ^ 1;
    if (pAVar9 != (AccessorySizeSlider *)0x0) {
      (pAVar9->fields).isInPreview = bVar8 ^ 1;
      pAVar10 = (this->fields).offsetSlider;
      if (pAVar10 != (AccessoryOffsetSlider *)0x0) {
        (pAVar10->fields).isInPreview = (this->fields).isPreviewing;
        pAVar6 = (this->fields).accessoryDataClient;
        if ((pAVar6 != (AccessoryDataClient *)0x0) &&
           (pBVar7 = (avatarBody->fields).bodyAccessoriesController,
           pBVar7 != (BodyAccessoriesController *)0x0)) {
          bVar8 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryEquipped
                            (pBVar7,(pAVar6->fields)._.sAID,(MethodInfo *)0x0);
          if (bVar8 == 0) {
            MVBody::MVBody_PreviewAccessory
                      (avatarBody,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void HandlePrices(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HandlePrices
               (AccessoryView *this,AccessoryDataClient *streamingAssetInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FREE);
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
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonAnimation;
  if (((this_00 != (AccessoryShinyButton *)0x0) &&
      (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) &&
     (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0), streamingAssetInfo != (AccessoryDataClient *)0x0)) {
    value = (streamingAssetInfo->fields)._.cost;
    pTVar2 = (this->fields).originalPriceText;
    iVar3 = (streamingAssetInfo->fields)._.dsc;
    aIStackX_8[0].m_value = iVar3;
    if ((pTVar2 != (Text *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0 < iVar3,(MethodInfo *)0x0);
      pTVar2 = (this->fields).goldSavedText;
      if ((pTVar2 != (Text *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0 < iVar3,(MethodInfo *)0x0);
        pGVar1 = (this->fields).discountTag;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0 < iVar3,(MethodInfo *)0x0);
          pTVar2 = (this->fields).claimText;
          if ((pTVar2 != (Text *)0x0) &&
             (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar2,(MethodInfo *)0x0),
             pGVar1 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
            this_01 = (this->fields).purchaseButton;
            if (this_01 != (Button *)0x0) {
              pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                 ((Selectable *)this_01,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                FUN_?();
              }
              pCVar5 = Styles::Styles_GetColor
                                 ((Color *)&BStack_6,ColorStyle__Enum_ButtonSuccess,
                                  (MethodInfo *)0x0);
              if (pIVar4 != (Image *)0x0) {
                BStack_6._value = *(void **)pCVar5;
                uStack_7._0_4_ = pCVar5->b;
                uStack_7._4_4_ = pCVar5->a;
                (*(pIVar4->klass->vtable).set_color.methodPtr)(pIVar4);
                pGVar1 = (this->fields).lockIcon;
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,0,(MethodInfo *)0x0);
                  if (iVar3 < 1) {
                    pTVar2 = (this->fields).priceTextWithoutDiscount;
                    if ((pTVar2 == (Text *)0x0) ||
                       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
                       pGVar1 == (GameObject *)0x0)) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,1,(MethodInfo *)0x0);
                    pTVar2 = (this->fields).priceText;
                    if ((pTVar2 == (Text *)0x0) ||
                       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
                       pGVar1 == (GameObject *)0x0)) goto code_?;
                    value_01 = 0;
                    iVar3 = value;
                  }
                  else {
                    pTVar2 = (this->fields).discountTagText;
                    pSVar8 = StringLiteral_FREE;
                    if (iVar3 < 100) {
                      pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                                         (aIStackX_8,(MethodInfo *)0x0);
                      pSVar8 = mscorlib.dll::System::String::String_Concat_5
                                         (::StringLiteral__,pSVar8,::StringLiteral__,
                                          (MethodInfo *)0x0);
                    }
                    if (pTVar2 == (Text *)0x0) goto code_?;
                    (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar8);
                    value_00 = FUN_?(((float)iVar3 / _UNK_?) * (float)value);
                    pSVar8 = StringLiteral_N0;
                    pTVar2 = (this->fields).originalPriceText;
                    iVar3 = value - value_00;
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
                    if (pSVar8 == (String *)0x0) {
                      puVar9 = (uint16_t *)0x0;
                      uVar10 = 0;
                    }
                    else {
                      BStack_6._value = &(pSVar8->fields)._firstChar;
                      uVar10 = (pSVar8->fields)._stringLength;
                      uStack_7 = (ulonglong)uVar10;
                      puVar9 = BStack_6._value;
                    }
                    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    uStack_7 = (ulonglong)uVar10;
                    BStack_6._value = puVar9;
                    pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                                       (value,(ReadOnlySpan_1_Char_ *)&BStack_6,
                                        (IFormatProvider *)0x0,(MethodInfo *)0x0);
                    if ((pSVar8 == (String *)0x0) ||
                       (mscorlib.dll::System::String::String_Replace_1
                                  (pSVar8,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
                       pTVar2 == (Text *)0x0)) goto code_?;
                    (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2);
                    pTVar2 = (this->fields).goldSavedText;
                    if ((pTVar2 == (Text *)0x0) ||
                       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
                       pGVar1 == (GameObject *)0x0)) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,1,(MethodInfo *)0x0);
                    pSVar8 = StringLiteral_N0;
                    pTVar2 = (this->fields).goldSavedText;
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
                    if (pSVar8 == (String *)0x0) {
                      puVar9 = (uint16_t *)0x0;
                      uVar10 = 0;
                    }
                    else {
                      BStack_6._value = &(pSVar8->fields)._firstChar;
                      uVar10 = (pSVar8->fields)._stringLength;
                      uStack_7 = (ulonglong)uVar10;
                      puVar9 = BStack_6._value;
                    }
                    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    uStack_7 = (ulonglong)uVar10;
                    BStack_6._value = puVar9;
                    pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                                       (value_00,(ReadOnlySpan_1_Char_ *)&BStack_6,
                                        (IFormatProvider *)0x0,(MethodInfo *)0x0);
                    if ((pSVar8 == (String *)0x0) ||
                       (mscorlib.dll::System::String::String_Replace_1
                                  (pSVar8,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
                       pTVar2 == (Text *)0x0)) goto code_?;
                    (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2);
                    pTVar2 = (this->fields).priceTextWithoutDiscount;
                    if ((pTVar2 == (Text *)0x0) ||
                       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
                       pGVar1 == (GameObject *)0x0)) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,0,(MethodInfo *)0x0);
                    pTVar2 = (this->fields).priceText;
                    if ((pTVar2 == (Text *)0x0) ||
                       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
                       pGVar1 == (GameObject *)0x0)) goto code_?;
                    value_01 = 1;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,value_01,(MethodInfo *)0x0);
                  pSVar8 = StringLiteral_N0;
                  pTVar2 = (this->fields).priceText;
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
                  if (pSVar8 == (String *)0x0) {
                    puVar9 = (uint16_t *)0x0;
                    uVar10 = 0;
                  }
                  else {
                    BStack_6._value = &(pSVar8->fields)._firstChar;
                    uVar10 = (pSVar8->fields)._stringLength;
                    uStack_7 = (ulonglong)uVar10;
                    puVar9 = BStack_6._value;
                  }
                  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  uStack_7 = (ulonglong)uVar10;
                  BStack_6._value = puVar9;
                  pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                                     (iVar3,(ReadOnlySpan_1_Char_ *)&BStack_6,
                                      (IFormatProvider *)0x0,(MethodInfo *)0x0);
                  if ((pSVar8 != (String *)0x0) &&
                     (pSVar8 = mscorlib.dll::System::String::String_Replace_1
                                         (pSVar8,::StringLiteral__,::StringLiteral__,
                                          (MethodInfo *)0x0), pTVar2 != (Text *)0x0)) {
                    (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar8);
                    pSVar8 = StringLiteral_N0;
                    pTVar2 = (this->fields).priceTextWithoutDiscount;
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
                    if (pSVar8 == (String *)0x0) {
                      puVar9 = (uint16_t *)0x0;
                      uVar10 = 0;
                    }
                    else {
                      BStack_6._value = &(pSVar8->fields)._firstChar;
                      uVar10 = (pSVar8->fields)._stringLength;
                      uStack_7 = (ulonglong)uVar10;
                      puVar9 = BStack_6._value;
                    }
                    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    uStack_7 = (ulonglong)uVar10;
                    BStack_6._value = puVar9;
                    pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                                       (iVar3,(ReadOnlySpan_1_Char_ *)&BStack_6,
                                        (IFormatProvider *)0x0,(MethodInfo *)0x0);
                    if ((pSVar8 != (String *)0x0) &&
                       (mscorlib.dll::System::String::String_Replace_1
                                  (pSVar8,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
                       pTVar2 != (Text *)0x0)) {
                      (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2);
                      this_02 = (this->fields).levelRequirementPurchaseButton;
                      if ((this_02 != (RawImage *)0x0) &&
                         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)this_02,(MethodInfo *)0x0),
                         pGVar1 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar1,0,(MethodInfo *)0x0);
                        if (iVar3 != 0) {
                          return;
                        }
                        pTVar2 = (this->fields).goldSavedText;
                        if ((pTVar2 != (Text *)0x0) &&
                           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0)
                           , pGVar1 != (GameObject *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar1,0,(MethodInfo *)0x0);
                          pTVar2 = (this->fields).priceTextWithoutDiscount;
                          if ((pTVar2 != (Text *)0x0) &&
                             (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_gameObject
                                                 ((Component *)pTVar2,(MethodInfo *)0x0),
                             pGVar1 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar1,0,(MethodInfo *)0x0);
                            pTVar2 = (this->fields).priceText;
                            if ((pTVar2 != (Text *)0x0) &&
                               (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar2,(MethodInfo *)0x0),
                               pGVar1 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar1,0,(MethodInfo *)0x0);
                              pGVar1 = (this->fields).discountTag;
                              if (pGVar1 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar1,0,(MethodInfo *)0x0);
                                pTVar2 = (this->fields).originalPriceText;
                                if ((pTVar2 != (Text *)0x0) &&
                                   (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                             Component_get_gameObject
                                                       ((Component *)pTVar2,(MethodInfo *)0x0),
                                   pGVar1 != (GameObject *)0x0)) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar1,0,(MethodInfo *)0x0);
                                  pTVar2 = (this->fields).claimText;
                                  if ((pTVar2 != (Text *)0x0) &&
                                     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                               Component_get_gameObject
                                                         ((Component *)pTVar2,(MethodInfo *)0x0),
                                     pGVar1 != (GameObject *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar1,1,(MethodInfo *)0x0);
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
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void HideNotLoadedStreamingAssetsObject() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HideNotLoadedStreamingAssetsObject
               (AccessoryView *this,MethodInfo *method)

{
  this_00 = (this->fields).timeLimitDisplayer;
  if ((this_00 != (AccessoryTimeLimitDisplayer *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).newAccessoryImage;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).discountTag;
      if (pGVar1 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Initialize
               (AccessoryView *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryView__AvatarAccessoryCreateHandler_AvatarAccessory_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryView___Initialize_b__39_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<AvatarAccessory>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Accessory_Preview);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
      pTVar1 = (this->fields).rootTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar1,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar2,(String *)0x0,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).rootTransform = pTVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).rootTransform >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pTVar1 = (this->fields).rootTransform;
    if ((pTVar1 != (Transform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      method_00 = (MethodInfo *)0x0;
      player = (MVPlayer *)StringLiteral_Accessory_Preview;
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                ((Object_1 *)pGVar2,StringLiteral_Accessory_Preview,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).accessoryDataClient = accessoryData;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).accessoryDataClient >> 0xc);
        player = (MVPlayer *)(ulonglong)((uVar4 & 0x1fffff) >> 6);
        method_00 = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
        do {
          uVar5 = *(ulonglong *)((longlong)player * 8 + 0xADDR);
          puVar7 = (ulonglong *)((longlong)player * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar5 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar5 | 1L << (longlong)method_00;
          }
          UNLOCK();
        } while (!bVar3);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar8 != (GameSessionData *)0x0) {
        if ((pGVar8->fields).gameMode == 2) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_06 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_06,(Object *)this,
                     MethodInfo__AccessoryView___Initialize_b__39_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar2,(BaseEventData *)0x0,this_06,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                    );
        }
        else {
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
          if (extraout_RAX == 0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
          this_05 = (MVBody *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                              (this_04,*(int32_t *)(extraout_RAX + 0xa8),
                               MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                              );
          bVar3 = iRam_? != 0;
          (this->fields).avatarBody = this_05;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).avatarBody >> 0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pAVar9 = (this->fields).accessoryDataClient;
          if (((pAVar9 == (AccessoryDataClient *)0x0) || (this_05 == (MVBody *)0x0)) ||
             (pBVar10 = (this_05->fields).bodyAccessoriesController,
             pBVar10 == (BodyAccessoriesController *)0x0)) goto code_?;
          bVar11 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryEquipped
                             (pBVar10,(pAVar9->fields)._.sAID,(MethodInfo *)0x0);
          pAVar12 = (this->fields).sizeSlider;
          (this->fields).isPreviewing = bVar11 ^ 1;
          if (pAVar12 == (AccessorySizeSlider *)0x0) goto code_?;
          (pAVar12->fields).isInPreview = bVar11 ^ 1;
          pAVar13 = (this->fields).offsetSlider;
          if (pAVar13 == (AccessoryOffsetSlider *)0x0) goto code_?;
          (pAVar13->fields).isInPreview = (this->fields).isPreviewing;
          pAVar9 = (this->fields).accessoryDataClient;
          if ((pAVar9 == (AccessoryDataClient *)0x0) ||
             (pBVar10 = (this_05->fields).bodyAccessoriesController,
             pBVar10 == (BodyAccessoriesController *)0x0)) goto code_?;
          bVar11 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryEquipped
                             (pBVar10,(pAVar9->fields)._.sAID,(MethodInfo *)0x0);
          if (bVar11 == 0) {
            MVBody::MVBody_PreviewAccessory
                      (this_05,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
          }
        }
        pTVar14 = (this->fields).goldSavedText;
        if ((pTVar14 != (Text *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar14,(MethodInfo *)0x0),
           pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          pTVar14 = (this->fields).nameText;
          if ((accessoryData != (AccessoryDataClient *)0x0) &&
             ((pSVar15 = (accessoryData->fields)._.name, pSVar15 != (String *)0x0 &&
              (pSVar15 = mscorlib.dll::System::String::String_ToUpper(pSVar15,(MethodInfo *)0x0),
              pTVar14 != (Text *)0x0)))) {
            (*(pTVar14->klass->vtable).set_text.methodPtr)
                      (pTVar14,pSVar15,(pTVar14->klass->vtable).set_text.method);
            pAVar13 = (this->fields).offsetSlider;
            if (pAVar13 != (AccessoryOffsetSlider *)0x0) {
              AccessoryOffsetSlider::AccessoryOffsetSlider_Initialize
                        (pAVar13,(accessoryData->fields)._.slot,(accessoryData->fields)._.sAID,
                         (MethodInfo *)0x0);
              pAVar12 = (this->fields).sizeSlider;
              if (pAVar12 != (AccessorySizeSlider *)0x0) {
                AccessorySizeSlider::AccessorySizeSlider_Initialize
                          (pAVar12,(accessoryData->fields)._.slot,(accessoryData->fields)._.sAID,
                           (MethodInfo *)0x0);
                this_00 = (this->fields).accessoryItemBackground;
                if (this_00 != (AccessoryItemBackground *)0x0) {
                  AccessoryItemBackground::AccessoryItemBackground_Initialize
                            (this_00,accessoryData,(MethodInfo *)0x0);
                  AccessoryView_SetShowNotOwnedUI(this,0,(MethodInfo *)0x0);
                  pBVar16 = (this->fields).purchaseButton;
                  if ((pBVar16 != (Button *)0x0) &&
                     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pBVar16,(MethodInfo *)0x0),
                     pGVar2 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,(accessoryData->fields)._.owns == 0,(MethodInfo *)0x0);
                    this_01 = (this->fields).levelRequirementPurchaseButton;
                    if ((this_01 != (RawImage *)0x0) &&
                       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
                       pGVar2 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar2,0,(MethodInfo *)0x0);
                      pAVar9 = (this->fields).accessoryDataClient;
                      if (pAVar9 != (AccessoryDataClient *)0x0) {
                        if ((pAVar9->fields)._.owns == 0) {
                          AccessoryView_SetShowNotOwnedUI(this,1,(MethodInfo *)0x0);
                          AccessoryView_HandleNotOwnedUI(this,(MethodInfo *)0x0);
                        }
                        else {
                          AccessoryView_SetShowNotOwnedUI(this,0,(MethodInfo *)0x0);
                        }
                        this_02 = (this->fields).timeLimitDisplayer;
                        if ((this_02 != (AccessoryTimeLimitDisplayer *)0x0) &&
                           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)this_02,(MethodInfo *)0x0),
                           pGVar2 != (GameObject *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar2,0,(MethodInfo *)0x0);
                          pGVar2 = (this->fields).newAccessoryImage;
                          if (pGVar2 != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
                            pGVar2 = (this->fields).discountTag;
                            if (pGVar2 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
                              pGVar2 = (this->fields).loadingWheel;
                              if (pGVar2 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar2,1,(MethodInfo *)0x0);
                                pGVar2 = (this->fields).emptyFrame;
                                if (pGVar2 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar2,1,(MethodInfo *)0x0);
                                  this_03 = (this->fields).accessoryLoader;
                                  pSVar15 = (accessoryData->fields)._.url;
                                  this_07 = (UnityAction_1_System_Object_ *)
                                            FUN_?(TypeInfo__System__Action<AvatarAccessory>)
                                  ;
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`1[System::Object]::UnityAction_1_System_Object___ctor
                                            (this_07,(Object *)this,
                                             MethodInfo__AccessoryView__AvatarAccessoryCreateHandler_AvatarAccessory_
                                             ,(MethodInfo *)0x0);
                                  if (this_03 != (AccessoryLoader *)0x0) {
                                    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
                                    AccessoryLoader::AccessoryLoader_LoadAccessory
                                              (this_03,pSVar15,(Action_1_AvatarAccessory_ *)this_07,
                                               (MethodInfo *)0x0);
                                    pEVar17 = (this->fields).embeddedPlayerConfig;
                                    if (pEVar17 != (EmbeddedPlayerConfig *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__UnityEngine__Debug);
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&
                                                  StringLiteral_Embedded_site_data_not_initializ);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      if ((pEVar17->fields).initialized == 0) {
                                        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c
                                            == 0) {
                                          FUN_?();
                                        }
                                        UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                        Debug_2_LogError((Object *)
                                                                                                                  
                                                  StringLiteral_Embedded_site_data_not_initializ,
                                                  (MethodInfo *)0x0);
                                        auVar18._0_8_ = (pEVar17->fields).kogamaDefaultData.sites;
                                        auVar18._8_4_ = (pEVar17->fields).kogamaDefaultData.siteEnum
                                        ;
                                        auVar18[0xc] = (pEVar17->fields).kogamaDefaultData.
                                                       showTouristPromotion;
                                        auVar18[0xd] = (pEVar17->fields).kogamaDefaultData.
                                                       allowsOpenInNewTab;
                                        auVar18[0xe] = (pEVar17->fields).kogamaDefaultData.
                                                       allowsRedirectToWebpage;
                                        auVar18[0xf] = (pEVar17->fields).kogamaDefaultData.
                                                       allowsModals;
                                      }
                                      else {
                                        auVar18._0_8_ = (pEVar17->fields).currentSite.sites;
                                        auVar18._8_4_ = (pEVar17->fields).currentSite.siteEnum;
                                        auVar18[0xc] = (pEVar17->fields).currentSite.
                                                       showTouristPromotion;
                                        auVar18[0xd] = (pEVar17->fields).currentSite.
                                                       allowsOpenInNewTab;
                                        auVar18[0xe] = (pEVar17->fields).currentSite.
                                                       allowsRedirectToWebpage;
                                        auVar18[0xf] = (pEVar17->fields).currentSite.allowsModals;
                                      }
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__MVGameControllerBase);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pGVar8 = TypeInfo__MVGameControllerBase->static_fields->
                                               _GameSessionData_k__BackingField;
                                      if (pGVar8 != (GameSessionData *)0x0) {
                                        if ((pGVar8->fields).profileID < 1) {
                                          pBVar16 = (this->fields).purchaseButton;
                                          if ((auVar18[0xf] == '\0') && (auVar18[0xd] == '\0')) {
                                            uVar19 = auVar18._14_2_ & 0xff;
                                          }
                                          else {
                                            uVar19 = 1;
                                          }
                                          if (pBVar16 == (Button *)0x0) goto code_?;
                                          UnityEngine.UI.dll::UnityEngine::UI::Selectable::
                                          Selectable_set_interactable
                                                    ((Selectable *)pBVar16,uVar19 != 0,
                                                     (MethodInfo *)0x0);
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
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnDisable
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryView__EquipPopupResultCallback__);
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
                  AvatarAccessoryEquipPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryEquipPopup>_AvatarAccessoryEquipPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryView____c__DisplayClass42_0___OnDisable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryView____c__DisplayClass42_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).shopCloseButton;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar1,1,(MethodInfo *)0x0);
  if (((this->fields).accessoryDataClient != (AccessoryDataClient *)0x0) &&
     (pAVar2 = (this->fields).accessoryDataClient, (pAVar2->fields)._.owns != 0)) {
    pMVar3 = (this->fields).avatarBody;
    if ((pMVar3 == (MVBody *)0x0) ||
       (pBVar4 = (pMVar3->fields).bodyAccessoriesController,
       pBVar4 == (BodyAccessoriesController *)0x0)) goto code_?;
    bVar5 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryEquipped
                      (pBVar4,(pAVar2->fields)._.sAID,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      object = (Object *)FUN_?(TypeInfo__AccessoryView____c__DisplayClass42_0);
      original = (this->fields).avatarAccessoryEquipPopup;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar6 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           AvatarAccessoryEquipPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryEquipPopup>_AvatarAccessoryEquipPopup_
                          );
      if (object == (Object *)0x0) goto code_?;
      object[1].klass = pOVar6;
      func_?(object + 1);
      pAVar2 = (this->fields).accessoryDataClient;
      pMVar3 = (this->fields).avatarBody;
      if ((pAVar2 == (AccessoryDataClient *)0x0) || (pMVar3 == (MVBody *)0x0))
      goto code_?;
      if ((pMVar3->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
        pBVar4 = (pMVar3->fields).bodyAccessoriesController;
        if (pBVar4 == (BodyAccessoriesController *)0x0) goto code_?;
      }
      else {
        pBVar4 = (pMVar3->fields).previewBodyAccessoriesController;
      }
      accessoryOffset =
           BodyAccessoriesController::BodyAccessoriesController_GetOffset
                     (pBVar4,(pAVar2->fields)._.slot,(MethodInfo *)0x0);
      pAVar2 = (this->fields).accessoryDataClient;
      pMVar3 = (this->fields).avatarBody;
      if ((pAVar2 == (AccessoryDataClient *)0x0) || (pMVar3 == (MVBody *)0x0))
      goto code_?;
      if ((pMVar3->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
        pBVar4 = (pMVar3->fields).bodyAccessoriesController;
        if (pBVar4 == (BodyAccessoriesController *)0x0) goto code_?;
      }
      else {
        pBVar4 = (pMVar3->fields).previewBodyAccessoriesController;
      }
      accessoryScale =
           BodyAccessoriesController::BodyAccessoriesController_GetScale
                     (pBVar4,(pAVar2->fields)._.slot,(MethodInfo *)0x0);
      pOVar6 = object[1].klass;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__AccessoryView__EquipPopupResultCallback__,
                 (MethodInfo *)0x0);
      if (pOVar6 == (Object__Class *)0x0) goto code_?;
      AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_Initialize
                ((AvatarAccessoryEquipPopup *)pOVar6,(UnityAction *)this_01,
                 (this->fields).previewImageUrl,(this->fields).accessoryDataClient,accessoryOffset,
                 accessoryScale,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object,
                 MethodInfo__AccessoryView____c__DisplayClass42_0___OnDisable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  bVar5 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar5 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar7 == (MVGameControllerBase *)0x0) goto code_?;
    if ((pMVar7->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    if ((this->fields).isPreviewing != 0) {
      pMVar3 = (this->fields).avatarBody;
      if ((pMVar3 == (MVBody *)0x0) ||
         (pBVar4 = (pMVar3->fields).previewBodyAccessoriesController,
         pBVar4 == (BodyAccessoriesController *)0x0)) goto code_?;
      BodyAccessoriesController::BodyAccessoriesController_Destroy(pBVar4,(MethodInfo *)0x0);
      bVar8 = iRam_? != 0;
      (pMVar3->fields).previewBodyAccessoriesController = (BodyAccessoriesController *)0x0;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(pMVar3->fields).previewBodyAccessoriesController >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pBVar4 = (pMVar3->fields).bodyAccessoriesController;
      if (pBVar4 == (BodyAccessoriesController *)0x0) goto code_?;
      BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                (pBVar4,1,(MethodInfo *)0x0);
      pBVar4 = (pMVar3->fields).bodyAccessoriesController;
      if (pBVar4 == (BodyAccessoriesController *)0x0) goto code_?;
      MVBody::MVBody_UpdateBodyClone(pMVar3,(pBVar4->fields).accessoryData,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).tabMenu;
    if (this_00 == (TabMenuAccessoryShop *)0x0) {
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    this_03 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                        (this_00,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
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
    if (this_03 != (TabMenuButtonBase *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((this_03->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_03,(MethodInfo *)0x0);
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
      }
    }
    pTVar14 = (this->fields).rootTransform;
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
    if (pTVar14 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar14->fields)._._.m_CachedPtr != (void *)0x0) {
        pTVar14 = (this->fields).rootTransform;
        if (pTVar14 == (Transform *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar14,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar1,(MethodInfo *)0x0);
        (this->fields).rootTransform = (Transform *)0x0;
        func_?(&(this->fields).rootTransform);
      }
    }
    pAVar15 = (this->fields).previewer;
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
    if (pAVar15 != (AccessoryPreviewer *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pAVar15->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pAVar15 = (this->fields).previewer;
        if (pAVar15 == (AccessoryPreviewer *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar15,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar1,(MethodInfo *)0x0);
      }
    }
    if ((this->fields).accessoryLoader != (AccessoryLoader *)0x0) {
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
      AccessoryLoader_Destroy((this->fields).accessoryLoader,(MethodInfo *)0x0);
    }
    bVar8 = iRam_? != 0;
    (this->fields).accessoryDataClient = (AccessoryDataClient *)0x0;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields).accessoryDataClient >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnEnable
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabMenu;
  if (this_00 != (TabMenuAccessoryShop *)0x0) {
    this_01 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                        (this_00,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
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
    if (this_01 != (TabMenuButtonBase *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((this_01->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
      }
    }
    pGVar1 = (this->fields).shopCloseButton;
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGoldPurchaseDialogResult(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnGoldPurchaseDialogResult
               (AccessoryView *this,bool result,MethodInfo *method)

{
  if (result == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,CONCAT71(in_register_00000011,1),0);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (pGVar1->fields).purchaseGoldURL;
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_8[0] = (uint16_t *)0x0;
  puStack_4 = (uint16_t *)0x0;
  uStack_5 = 0;
  uStack_6 = 0;
  ppuStack_7 = apuStackX_8;
  if (pSVar3 != (String *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      puStack_4 = (uint16_t *)0x1;
      uStack_5 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar8 = (pSVar3->fields)._stringLength;
      apuStackX_8[0] = &(pSVar3->fields)._firstChar;
      if (iVar8 == 0) {
        apuStackX_8[0] = (uint16_t *)0x0;
      }
      uStack_5 = CONCAT44(uStack_5._4_4_,iVar8);
      puStack_4 = apuStackX_8[0];
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&puStack_4);
  return;
}


/* Void OnLevelRequirementLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnLevelRequirementLoaded
               (AccessoryView *this,UnityWebRequest *www,MethodInfo *method)

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
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                     (this_00,(MethodInfo *)0x0);
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
  if (pTVar2 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar3 = (this->fields).levelRequirementPurchaseButton;
      if (pRVar3 != (RawImage *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,pTVar2,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pTVar4 = (Texture2D *)(pRVar3->fields).m_Texture;
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
        if (pTVar2 != (Texture2D *)0x0 || pTVar4 != (Texture2D *)0x0) {
          if (pTVar2 == (Texture2D *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pTVar4 == (Texture2D *)0x0) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            bVar5 = (pTVar4->fields)._._.m_CachedPtr == (void *)0x0;
          }
          else if (pTVar4 == (Texture2D *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar5 = (pTVar2->fields)._._.m_CachedPtr == (void *)0x0;
          }
          else {
            bVar5 = pTVar4 == pTVar2;
          }
          if (!bVar5) {
            bVar5 = iRam_? != 0;
            (pRVar3->fields).m_Texture = (Texture *)pTVar2;
            if (bVar5) {
              uVar6 = (uint)((ulonglong)&(pRVar3->fields).m_Texture >> 0xc);
              puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar8 = *puVar7;
                LOCK();
                uVar9 = *puVar7;
                if (uVar8 == uVar9) {
                  *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (uVar8 != uVar9);
            }
            (*(pRVar3->klass->vtable).SetVerticesDirty.methodPtr)
                      (pRVar3,(pRVar3->klass->vtable).SetVerticesDirty.method);
            (*(pRVar3->klass->vtable).SetMaterialDirty.methodPtr)
                      (pRVar3,(pRVar3->klass->vtable).SetMaterialDirty.method);
          }
        }
        return;
      }
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar10 = StringLiteral_Badge_not_loaded_for_accessory_l;
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
  if (pIVar11 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,2,pSVar10);
  return;
}


/* Void OnPreviewImageFinishedDownloading() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnPreviewImageFinishedDownloading
               (AccessoryView *this,MethodInfo *method)

{
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).emptyFrame;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pAVar2 = (this->fields).accessoryDataClient;
      if (pAVar2 != (AccessoryDataClient *)0x0) {
        if ((pAVar2->fields)._.owns != 0) {
          return;
        }
        this_00 = (this->fields).timeLimitDisplayer;
        if (this_00 != (AccessoryTimeLimitDisplayer *)0x0) {
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          pAVar2 = (this->fields).accessoryDataClient;
          if (((pAVar2 != (AccessoryDataClient *)0x0) &&
              (pAVar3 = (pAVar2->fields)._.time, pAVar3 != (AccessoryTimelimit *)0x0)) &&
             (pGVar1 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,(pAVar3->fields).timeLimit != 0,(MethodInfo *)0x0);
            pAVar2 = (this->fields).accessoryDataClient;
            if ((pAVar2 != (AccessoryDataClient *)0x0) &&
               (pGVar1 = (this->fields).newAccessoryImage, pGVar1 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,(pAVar2->fields)._.iNew,(MethodInfo *)0x0);
              pAVar2 = (this->fields).accessoryDataClient;
              pGVar1 = (this->fields).discountTag;
              if (pAVar2 != (AccessoryDataClient *)0x0) {
                if ((pAVar2->fields)._.dsc < 1) {
                  value = false;
                }
                else {
                  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (((pMVar4 == (MVNetworkGame *)0x0) ||
                      (this_01 = (pMVar4->fields).playerContainer,
                      this_01 == (MVPlayerContainer *)0x0)) ||
                     ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                          (this_01,(MethodInfo *)0x0),
                      pMVar5 == (MVLocalPlayer *)0x0 ||
                      (pAVar2 = (this->fields).accessoryDataClient,
                      pAVar2 == (AccessoryDataClient *)0x0)))) goto code_?;
                  value = (pAVar2->fields)._.lvl <= (pMVar5->fields)._.level;
                }
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,value,(MethodInfo *)0x0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPurchaseButtonPressed() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnPurchaseButtonPressed
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryView__OnTouristSignupClicked_bool_);
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
                  AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
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
                  MethodInfo__AccessoryView____c__DisplayClass47_0___OnPurchaseButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryView____c__DisplayClass47_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryView____c__DisplayClass47_1___OnPurchaseButtonPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryView____c__DisplayClass47_1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sign_up);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Signup_required);
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
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    if ((pMVar4->fields)._._ProfileID_k__BackingField == 0) {
      pOVar5 = (Object *)FUN_?(TypeInfo__AccessoryView____c__DisplayClass47_0);
      original_00 = (this->fields).touristErrorPopup;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar6 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_00,
                           AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                          );
      if (pOVar5 != (Object *)0x0) {
        bVar7 = iRam_? != 0;
        pOVar5[1].klass = pOVar6;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pEVar13 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (pEVar13,pOVar5,
                   MethodInfo__AccessoryView____c__DisplayClass47_0___OnPurchaseButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar12,(BaseEventData *)0x0,pEVar13,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar6 = pOVar5[1].klass;
        resultCallback =
             (UnityAction_1_System_Boolean_ *)
             FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
        FUN_?(resultCallback,this,MethodInfo__AccessoryView__OnTouristSignupClicked_bool_);
        previewImageUrl = (this->fields).previewImageUrl;
        pAVar14 = (this->fields).accessoryDataClient;
        header = TM::TM__(StringLiteral_Signup_required,(MethodInfo *)0x0);
        buttonText = TM::TM__(StringLiteral_Sign_up,(MethodInfo *)0x0);
        if (pOVar6 != (Object__Class *)0x0) {
          AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
                    ((AvatarAccessoryErrorPopup *)pOVar6,resultCallback,previewImageUrl,pAVar14,
                     header,buttonText,(MethodInfo *)0x0);
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
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
          ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
           pMVar4 != (MVLocalPlayer *)0x0 &&
           (pAVar14 = (this->fields).accessoryDataClient, pAVar14 != (AccessoryDataClient *)0x0))))))
      {
        if ((pAVar14->fields)._.lvl <= (pMVar4->fields)._.level) {
          AccessoryView_Purchase(this,(MethodInfo *)0x0);
          return;
        }
        pOVar5 = (Object *)FUN_?(TypeInfo__AccessoryView____c__DisplayClass47_1);
        original = (this->fields).insufficientLevelPopup;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar6 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                            );
        if (pOVar5 != (Object *)0x0) {
          bVar7 = iRam_? != 0;
          pOVar5[1].klass = pOVar6;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          pEVar13 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (pEVar13,pOVar5,
                     MethodInfo__AccessoryView____c__DisplayClass47_1___OnPurchaseButtonPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar12,(BaseEventData *)0x0,pEVar13,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pAVar14 = (this->fields).accessoryDataClient;
          if ((pAVar14 != (AccessoryDataClient *)0x0) && (pOVar5[1].klass != (Object__Class *)0x0))
          {
            LevelErrorPopup::LevelErrorPopup_Initialize
                      ((LevelErrorPopup *)pOVar5[1].klass,(UnityAction *)0x0,(pAVar14->fields)._.lvl
                       ,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnTouristSignupClicked(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnTouristSignupClicked
               (AccessoryView *this,bool confirmed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EmbeddedSite);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (confirmed != 0) {
    pEVar1 = (this->fields).embeddedPlayerConfig;
    if (pEVar1 == (EmbeddedPlayerConfig *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pEVar1->fields).initialized == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
      auVar3._0_8_ = (pEVar1->fields).kogamaDefaultData.sites;
      auVar3._8_4_ = (pEVar1->fields).kogamaDefaultData.siteEnum;
      auVar3[0xc] = (pEVar1->fields).kogamaDefaultData.showTouristPromotion;
      auVar3[0xd] = (pEVar1->fields).kogamaDefaultData.allowsOpenInNewTab;
      auVar3[0xe] = (pEVar1->fields).kogamaDefaultData.allowsRedirectToWebpage;
      auVar3[0xf] = (pEVar1->fields).kogamaDefaultData.allowsModals;
    }
    else {
      auVar3._0_8_ = (pEVar1->fields).currentSite.sites;
      auVar3._8_4_ = (pEVar1->fields).currentSite.siteEnum;
      auVar3[0xc] = (pEVar1->fields).currentSite.showTouristPromotion;
      auVar3[0xd] = (pEVar1->fields).currentSite.allowsOpenInNewTab;
      auVar3[0xe] = (pEVar1->fields).currentSite.allowsRedirectToWebpage;
      auVar3[0xf] = (pEVar1->fields).currentSite.allowsModals;
    }
    if ((auVar3[0xf] != '\0') || (auVar3[0xd] != '\0')) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__BrowserComm,auVar3._8_8_,0);
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
      pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar4 == (GameSessionData *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSVar5 = (pGVar4->fields).signupURL;
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__BrowserComm);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BrowserComm);
      }
      if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      puStack_6 = (uint16_t *)0x0;
      uStack_7 = 0;
      pSStack_8 = (String *)0x0;
      puStack_9 = &stack0x00000008;
      if (pSVar5 != (String *)0x0) {
        if ((pSVar5->fields)._stringLength == 0) {
          puStack_6 = (uint16_t *)0x1;
          uStack_7 = 0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar10 = (pSVar5->fields)._stringLength;
          puStack_6 = &(pSVar5->fields)._firstChar;
          if (iVar10 == 0) {
            puStack_6 = (uint16_t *)0x0;
          }
          uStack_7 = CONCAT44(uStack_7._4_4_,iVar10);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(&puStack_6);
      return;
    }
    if (auVar3[0xe] == '\0') {
      message = (Object *)FUN_?(TypeInfo__EmbeddedSite);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      pSVar5 = StringLiteral_Signup_not_permitted_for_site_;
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
      pIVar12 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar12 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSStack_8 = pSVar5;
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar12,0);
      return;
    }
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Pop(AccessoryView *this,MethodInfo *method)

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
                  MethodInfo__AccessoryView____c___Pop_b__46_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryView____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AccessoryView____c);
  }
  this_01 = TypeInfo__AccessoryView____c->static_fields->__9__46_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AccessoryView____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryView____c);
    }
    object = TypeInfo__AccessoryView____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AccessoryView____c___Pop_b__46_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryView____c->static_fields->__9__46_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__AccessoryView____c->static_fields->__9__46_0 >> 0xc);
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


/* Void Purchase() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Purchase
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryView__OnGoldPurchaseDialogResult_bool_);
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
                  AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarAccessoryPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryPurchasePopup>_AvatarAccessoryPurchasePopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryView____c__DisplayClass48_0___Purchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryView____c__DisplayClass48_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryView____c__DisplayClass48_1___Purchase_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryView____c__DisplayClass48_1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Get_gold);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_enough_gold);
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
     (((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0 &&
       (pUVar4 = (pMVar3->fields)._._UserProfileData_k__BackingField,
       pUVar4 != (UserProfileData *)0x0)) &&
      (pAVar5 = (this->fields).accessoryDataClient, pAVar5 != (AccessoryDataClient *)0x0)))) {
    if ((pUVar4->fields).Gold <
        (pAVar5->fields)._.cost - ((pAVar5->fields)._.dsc * (pAVar5->fields)._.cost) / 100) {
      object = (Object *)FUN_?(TypeInfo__AccessoryView____c__DisplayClass48_1);
      if (object != (Object *)0x0) {
        bVar6 = iRam_? != 0;
        object[1].monitor = (MonitorData *)this;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&object[1].monitor >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        original = (this->fields).insufficientResourcePopup;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar11 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                            );
        bVar6 = iRam_? != 0;
        object[1].klass = pOVar11;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        pOVar11 = object[1].klass;
        resultCallback =
             (UnityAction_1_System_Boolean_ *)
             FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
        FUN_?(resultCallback,this,
                      MethodInfo__AccessoryView__OnGoldPurchaseDialogResult_bool_);
        previewImageUrl = (this->fields).previewImageUrl;
        pAVar5 = (this->fields).accessoryDataClient;
        header = TM::TM__(StringLiteral_Not_enough_gold,(MethodInfo *)0x0);
        buttonText = TM::TM__(StringLiteral_Get_gold,(MethodInfo *)0x0);
        if (pOVar11 != (Object__Class *)0x0) {
          AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
                    ((AvatarAccessoryErrorPopup *)pOVar11,resultCallback,previewImageUrl,pAVar5,
                     header,buttonText,(MethodInfo *)0x0);
          pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          pMVar13 = 
          MethodInfo__AccessoryView____c__DisplayClass48_1___Purchase_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
          ;
code_?:
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,object,pMVar13,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar13 = 
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
            if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar13);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar12,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar8 = (longlong)(pLVar14->fields)._size;
            uVar7 = 0;
            if (0 < lVar8) {
              lVar15 = 0;
              lVar16 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar14->fields)._size <= uVar7) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pTVar18 = (pLVar14->fields)._items;
                if (pTVar18 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar18->max_length <= uVar7) {
                  FUN_?();
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                this_01 = *(Component **)((longlong)pTVar18->vector + lVar16 + -0x20);
                if (this_01 == (Component *)0x0) goto code_?;
                pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_01,(MethodInfo *)0x0);
                bVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                         ExecuteEvents_Execute_18
                                   (pGVar12,(BaseEventData *)0x0,this_02,
                                    (pMVar13->field7_0x38).rgctx_data[1].method);
                if (bVar19 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
                  return;
                }
                uVar7 = uVar7 + 1;
                lVar15 = lVar15 + 1;
                lVar16 = lVar16 + 8;
              } while (lVar15 < lVar8);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
      }
    }
    else {
      object = (Object *)FUN_?(TypeInfo__AccessoryView____c__DisplayClass48_0);
      if (object != (Object *)0x0) {
        bVar6 = iRam_? != 0;
        object[1].monitor = (MonitorData *)this;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&object[1].monitor >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        original_00 = (this->fields).AvatarAccessoryPurchasePopupPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar11 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_00,
                             AvatarAccessoryPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryPurchasePopup>_AvatarAccessoryPurchasePopup_
                            );
        bVar6 = iRam_? != 0;
        object[1].klass = pOVar11;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        if (object[1].klass != (Object__Class *)0x0) {
          AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Initialize
                    ((AvatarAccessoryPurchasePopup *)object[1].klass,
                     (this->fields).accessoryDataClient,(this->fields).previewImageUrl,
                     (MethodInfo *)0x0);
          pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          pMVar13 = 
          MethodInfo__AccessoryView____c__DisplayClass48_0___Purchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
          ;
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SetShowNotOwnedUI(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_SetShowNotOwnedUI
               (AccessoryView *this,bool shouldShow,MethodInfo *method)

{
  this_00 = (this->fields).purchaseButton;
  if ((this_00 != (Button *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,shouldShow,(MethodInfo *)0x0);
    this_01 = (this->fields).timeLimitDisplayer;
    if ((this_01 != (AccessoryTimeLimitDisplayer *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,shouldShow,(MethodInfo *)0x0);
      pGVar1 = (this->fields).newAccessoryImage;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,shouldShow,(MethodInfo *)0x0);
        pTVar2 = (this->fields).originalPriceText;
        if ((pTVar2 != (Text *)0x0) &&
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,shouldShow,(MethodInfo *)0x0);
          pGVar1 = (this->fields).discountTag;
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,shouldShow,(MethodInfo *)0x0);
            pTVar2 = (this->fields).goldSavedText;
            if ((pTVar2 != (Text *)0x0) &&
               (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
               pGVar1 != (GameObject *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,shouldShow,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar1 == (GameObject *)0x0) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pvVar4 = (pGVar1->fields)._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar4,shouldShow);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetShowPrices(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_SetShowPrices
               (AccessoryView *this,bool shouldShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonAnimation;
  if ((this_00 != (AccessoryShinyButton *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,shouldShow,(MethodInfo *)0x0);
    pTVar2 = (this->fields).priceTextWithoutDiscount;
    if ((pTVar2 != (Text *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,shouldShow,(MethodInfo *)0x0);
      pTVar2 = (this->fields).priceText;
      if ((pTVar2 != (Text *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,shouldShow,(MethodInfo *)0x0);
        pTVar2 = (this->fields).goldSavedText;
        if ((pTVar2 != (Text *)0x0) &&
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,shouldShow,(MethodInfo *)0x0);
          pTVar2 = (this->fields).originalPriceText;
          if ((pTVar2 != (Text *)0x0) &&
             (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar2,(MethodInfo *)0x0),
             pGVar1 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,shouldShow,(MethodInfo *)0x0);
            pGVar1 = (this->fields).discountTag;
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,shouldShow,(MethodInfo *)0x0);
              pTVar2 = (this->fields).claimText;
              if ((pTVar2 != (Text *)0x0) &&
                 (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
                 pGVar1 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,shouldShow,(MethodInfo *)0x0);
                this_01 = (this->fields).levelRequirementPurchaseButton;
                if ((this_01 != (RawImage *)0x0) &&
                   (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
                   pGVar1 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,shouldShow ^ 1,(MethodInfo *)0x0);
                  pTVar2 = (this->fields).claimText;
                  if ((pTVar2 != (Text *)0x0) &&
                     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
                     pGVar1 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,shouldShow,(MethodInfo *)0x0);
                    pBVar3 = (this->fields).purchaseButton;
                    if (pBVar3 != (Button *)0x0) {
                      pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                         ((Selectable *)pBVar3,(MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      pCVar5 = Styles::Styles_GetColor
                                         (&CStack_6,ColorStyle__Enum_ButtonSuccess,
                                          (MethodInfo *)0x0);
                      if (pIVar4 != (Image *)0x0) {
                        CStack_6.r = pCVar5->r;
                        CStack_6.g = pCVar5->g;
                        CStack_6.b = pCVar5->b;
                        CStack_6.a = pCVar5->a;
                        (*(pIVar4->klass->vtable).set_color.methodPtr)(pIVar4,&CStack_6);
                        if (shouldShow != 0) {
                          return;
                        }
                        pGVar1 = (this->fields).lockIcon;
                        if (pGVar1 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar1,1,(MethodInfo *)0x0);
                          pBVar3 = (this->fields).purchaseButton;
                          if (pBVar3 != (Button *)0x0) {
                            pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::
                                     Selectable_get_image((Selectable *)pBVar3,(MethodInfo *)0x0);
                            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pCVar5 = Styles::Styles_GetColor
                                               (&CStack_6,ColorStyle__Enum_DisabledButton,
                                                (MethodInfo *)0x0);
                            if (pIVar4 != (Image *)0x0) {
                              CStack_6.r = pCVar5->r;
                              CStack_6.g = pCVar5->g;
                              CStack_6.b = pCVar5->b;
                              CStack_6.a = pCVar5->a;
                              (*(pIVar4->klass->vtable).set_color.methodPtr)
                                        (pIVar4,&CStack_6,(pIVar4->klass->vtable).set_color.method)
                              ;
                              pAVar7 = (this->fields).accessoryDataClient;
                              if (pAVar7 != (AccessoryDataClient *)0x0) {
                                level = (pAVar7->fields)._.lvl;
                                this_02 = (UnityAction_1_System_Object_ *)
                                          FUN_?(
                                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                                  );
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`1[System::Object]::UnityAction_1_System_Object___ctor
                                          (this_02,(Object *)this,
                                           MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                                           ,(MethodInfo *)0x0);
                                if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                BadgeManager::BadgeManager_GetBadgeTexture
                                          (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *
                                                 )this_02,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ShowLoadedStreamingAssetsObject() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_ShowLoadedStreamingAssetsObject
               (AccessoryView *this,MethodInfo *method)

{
  pAVar1 = (this->fields).accessoryDataClient;
  if (pAVar1 != (AccessoryDataClient *)0x0) {
    if ((pAVar1->fields)._.owns != 0) {
      return;
    }
    this_00 = (this->fields).timeLimitDisplayer;
    if (this_00 != (AccessoryTimeLimitDisplayer *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      pAVar1 = (this->fields).accessoryDataClient;
      if (((pAVar1 != (AccessoryDataClient *)0x0) &&
          (pAVar3 = (pAVar1->fields)._.time, pAVar3 != (AccessoryTimelimit *)0x0)) &&
         (pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,(pAVar3->fields).timeLimit != 0,(MethodInfo *)0x0);
        pAVar1 = (this->fields).accessoryDataClient;
        if ((pAVar1 != (AccessoryDataClient *)0x0) &&
           (pGVar2 = (this->fields).newAccessoryImage, pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,(pAVar1->fields)._.iNew,(MethodInfo *)0x0);
          pAVar1 = (this->fields).accessoryDataClient;
          pGVar2 = (this->fields).discountTag;
          if (pAVar1 != (AccessoryDataClient *)0x0) {
            if ((pAVar1->fields)._.dsc < 1) {
              value = false;
            }
            else {
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar4 == (MVNetworkGame *)0x0) ||
                  (this_01 = (pMVar4->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0))
                 || ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                         (this_01,(MethodInfo *)0x0), pMVar5 == (MVLocalPlayer *)0x0
                     || (pAVar1 = (this->fields).accessoryDataClient,
                        pAVar1 == (AccessoryDataClient *)0x0)))) goto code_?;
              value = (pAVar1->fields)._.lvl <= (pMVar5->fields)._.level;
            }
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <Initialize>b__39_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__Initialize_b__39_0
               (AccessoryView *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryView__HandlePreviewing_MVBody_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MVBody>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,MethodInfo__AccessoryView__HandlePreviewing_MVBody_,
             (MethodInfo *)0x0);
  if (x == (IGetCurrentBody *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        pIVar5 = &pIVar2->vtable + pIVar2->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar5 = (IGetCurrentBody__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0,this_00,unaff_RDI)
  ;
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar5->GetCurrentBody).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,this_00,(pIVar5->GetCurrentBody).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* AccessoryView() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__ctor(AccessoryView *this,MethodInfo *method)

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
  if (cRam_? == '\0') {
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

