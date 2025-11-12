
/* Void DisplayCategoryFeatures(AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_DisplayCategoryFeatures
               (AccessoryViewController *this,AccessoryCategoryClient__Enum category,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).featuredTabFlare;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,category == AccessoryCategoryClient__Enum_Featured ||
                      category == AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
    this_00 = (this->fields).levelProgress;
    if ((this_00 != (LevelProgressAccessoryShop *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,category == AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
      this_01 = (this->fields).tabMenuAccessoryShop;
      if (this_01 != (TabMenuAccessoryShop *)0x0) {
        this_02 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                            (this_01,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
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
        if (this_02 != (TabMenuButtonBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((this_02->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_02,(MethodInfo *)0x0);
            if (pGVar1 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,category != AccessoryCategoryClient__Enum_LevelUnlocks,
                       (MethodInfo *)0x0);
          }
        }
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


/* Void HideScreens() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_HideScreens
               (AccessoryViewController *this,MethodInfo *method)

{
  this_00 = (this->fields).bundlePurchaseOptions;
  if ((this_00 != (BundleView *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).inventoryView;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (this->fields).accessoryView;
      if ((this_01 != (AccessoryView *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_OnDestroy
               (AccessoryViewController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 == (MVGameControllerBase *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
    return;
  }
  LStack_4._current = *(Object **)&(this->fields).prevLight;
  fStack_5 = (this->fields).prevLight.b;
  fStack_6 = (this->fields).prevLight.a;
  pcVar3 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar3 = (code *)FUN_?(&UNK_?);
    if (pcVar3 == (code *)0x0) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcRam_? = pcVar3;
  (*pcRam_?)();
  pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
  if (pSVar8 == (SkyboxManager *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pSVar8,(this->fields).wasEnabled,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pWVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                     (this_00,
                      WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                     );
  if (pWVar9 == (WorldObjectClientRef_1_System_Object_ *)0x0) {
    return;
  }
  lVar10 = FUN_?(pWVar9);
  if (lVar10 == 0) {
    return;
  }
  lVar10 = FUN_?(pWVar9);
  if ((lVar10 == 0) || (lVar10 = *(longlong *)(lVar10 + 0x140), lVar10 == 0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(char *)(lVar10 + 0x20) != '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 == (MVGameControllerBase *)0x0) ||
       (pSVar8 = (pMVar2->fields).skyboxManager, pSVar8 == (SkyboxManager *)0x0))
    goto code_?;
    SkyboxManager::SkyboxManager_Disable(pSVar8,(MethodInfo *)0x0);
  }
  LStack_4._list = *(List_1_System_Object_ **)(lVar10 + 0x30);
  if (LStack_4._list != (List_1_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&puStack_12 >> 0xc);
      puVar13 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar14 = *puVar13;
        LOCK();
        uVar15 = *puVar13;
        if (uVar14 == uVar15) {
          *puVar13 = uVar14 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (uVar14 != uVar15);
    }
    pLStack_16 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)((LStack_4._list)->fields)._version << 0x20);
    uStack_17 = 0;
    LStack_4._8_8_ = pLStack_16;
    LStack_4._current = (Object *)0x0;
    puStack_12 = (undefined *)0x0;
    pLStack_16 = &LStack_4;
    while( true ) {
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar1 == 0) {
        return;
      }
      if (LStack_4._current == (Object *)0x0) break;
      (*(code *)(LStack_4._current)->klass[1]._0.image)
                (LStack_4._current,(LStack_4._current)->klass[1]._0.gc_desc);
    }
    FUN_?();
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


/* Void OpenAccessoryManagementScreen(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryViewController::
     AccessoryViewController_OpenAccessoryManagementScreen
               (AccessoryViewController *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  pAVar1 = (this->fields).accessoryView;
  if (pAVar1 != (AccessoryView *)0x0) {
    if ((pAVar1->fields).accessoryDataClient != (AccessoryDataClient *)0x0) {
      if (accessoryData == (AccessoryDataClient *)0x0) goto code_?;
      if ((((pAVar1->fields).accessoryDataClient)->fields)._.aMDID ==
          (accessoryData->fields)._.aMDID) {
        return;
      }
    }
    AccessoryViewController_HideScreens(this,(MethodInfo *)0x0);
    pAVar1 = (this->fields).accessoryView;
    if (pAVar1 != (AccessoryView *)0x0) {
      AccessoryView::AccessoryView_Initialize(pAVar1,accessoryData,(MethodInfo *)0x0);
      pAVar1 = (this->fields).accessoryView;
      if ((pAVar1 != (AccessoryView *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pAVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        pAVar2 = (this->fields).backbackController;
        if ((pAVar2 != (AccessoryShopToggleInventory *)0x0) &&
           (pCVar3 = (pAVar2->fields).canvasGroup, pCVar3 != (CanvasGroup *)0x0)) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar3,_UNK_?,(MethodInfo *)0x0);
          pCVar3 = (pAVar2->fields).canvasGroup;
          if (pCVar3 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                      (pCVar3,0,(MethodInfo *)0x0);
            pAVar4 = (this->fields).previewer;
            if (pAVar4 != (AvatarAccessoryPreviewer *)0x0) {
              AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
                        (pAVar4,(MethodInfo *)0x0);
              pAVar4 = (this->fields).previewer;
              if (pAVar4 != (AvatarAccessoryPreviewer *)0x0) {
                AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
                          (pAVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OpenCategoryScreen(Boolean) */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_OpenCategoryScreen
               (AccessoryViewController *this,bool canSortByInventory,MethodInfo *method)

{
  AccessoryViewController_HideScreens(this,(MethodInfo *)0x0);
  pGVar1 = (this->fields).inventoryView;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pAVar2 = (this->fields).backbackController;
    if (pAVar2 != (AccessoryShopToggleInventory *)0x0) {
      fVar3 = _UNK_?;
      if (canSortByInventory != 0) {
        fVar3 = _UNK_?;
      }
      pCVar4 = (pAVar2->fields).canvasGroup;
      if (pCVar4 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar4,fVar3,(MethodInfo *)0x0);
        pCVar4 = (pAVar2->fields).canvasGroup;
        if (pCVar4 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                    (pCVar4,canSortByInventory,(MethodInfo *)0x0);
          pAVar5 = (this->fields).previewer;
          if (pAVar5 != (AvatarAccessoryPreviewer *)0x0) {
            AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
                      (pAVar5,(MethodInfo *)0x0);
            pAVar5 = (this->fields).previewer;
            if (pAVar5 != (AvatarAccessoryPreviewer *)0x0) {
              if ((pAVar5->fields).imagesReady == 0) {
                return;
              }
              pGVar1 = (pAVar5->fields).bodyClone;
              if (pGVar1 == (GameObject *)0x0) {
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar1,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Quaternion);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
              fVar3 = (pQVar7->identityQuaternion).x;
              fVar8 = (pQVar7->identityQuaternion).y;
              fVar9 = (pQVar7->identityQuaternion).z;
              fVar10 = (pQVar7->identityQuaternion).w;
              lStack_11 = (ulonglong)_UNK_? << 0x20;
              uStack_12 = 0;
              uStack_13 = 0;
              uStack_14 = 0;
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(&lStack_11);
              fStack_16 = ((float)uStack_13 * fVar10 + uStack_14._4_4_ * fVar3 +
                          (float)uStack_14 * fVar8) - uStack_13._4_4_ * fVar9;
              fStack_17 = (uStack_13._4_4_ * fVar10 + uStack_14._4_4_ * fVar8 +
                          (float)uStack_13 * fVar9) - (float)uStack_14 * fVar3;
              fStack_18 = ((float)uStack_14 * fVar10 + uStack_14._4_4_ * fVar9 +
                          uStack_13._4_4_ * fVar3) - (float)uStack_13 * fVar8;
              fStack_19 = ((uStack_14._4_4_ * fVar10 - (float)uStack_13 * fVar3) -
                          uStack_13._4_4_ * fVar8) - (float)uStack_14 * fVar9;
              if (obj != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar20 = (obj->fields)._._.m_CachedPtr;
                if (pvVar20 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcVar6 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar15 = func_?(&UNK_?);
                  FUN_?(uVar15,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcRam_? = pcVar6;
                (*pcRam_?)(pvVar20,&fStack_16);
                pAVar21 = (pAVar5->fields).toPreviewer;
                if ((pAVar21 != (AvatarPreviewer *)0x0) &&
                   (this_00 = (pAVar21->fields).previewCam, this_00 != (Camera *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                            (this_00,(pAVar5->fields).startFov,(MethodInfo *)0x0);
                  return;
                }
              }
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
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


/* Void PurchasedBundle() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_PurchasedBundle
               (AccessoryViewController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
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
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryViewController____c___PurchasedBundle_b__18_0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryViewController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
     (pAVar2 = (pAVar1->fields).accessoryBundle, pAVar2 != (AccessoryBundleClient *)0x0)) {
    this_00 = (this->fields).tabMenuAccessoryShop;
    pLVar3 = (pAVar2->fields)._.accessoryBundleItems;
    if (this_00 != (TabMenuAccessoryShop *)0x0) {
      TabMenuAccessoryShop::TabMenuAccessoryShop_DestroyTab
                (this_00,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
      uVar4 = 0;
      if (pLVar3 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
        lVar5 = 0x20;
        for (; (int)uVar4 < (pLVar3->fields)._size; uVar4 = uVar4 + 1) {
          if ((uint)(pLVar3->fields)._size <= uVar4) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pAVar7 = (pLVar3->fields)._items;
          if (pAVar7 == (AccessoryBundleItem__Array *)0x0) goto code_?;
          if ((uint)pAVar7->max_length <= uVar4) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar8 = *(longlong *)((longlong)pAVar7->vector + lVar5 + -0x20);
          if (lVar8 == 0) goto code_?;
          pAVar9 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                              (*(int32_t *)(lVar8 + 0x14),(MethodInfo *)0x0);
          if (pAVar9 != (AccessoryDataClient *)0x0) {
            AccessoryDataManager::AccessoryDataManager_SetToOwns
                      ((pAVar9->fields)._.sAID,(MethodInfo *)0x0);
          }
          lVar5 = lVar5 + 8;
        }
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
        pvVar10 = (this->fields)._._._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        pvVar10 = (void *)(*pcRam_?)(pvVar10);
        pGVar12 = (GameObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar10,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
        if (*(int *)&(TypeInfo__AccessoryViewController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AccessoryViewController____c);
        }
        this_02 = TypeInfo__AccessoryViewController____c->static_fields->__9__18_0;
        if (this_02 == (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0) {
          if (*(int *)&(TypeInfo__AccessoryViewController____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__AccessoryViewController____c);
          }
          object = TypeInfo__AccessoryViewController____c->static_fields->__9;
          this_02 = (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                     MethodInfo__AccessoryViewController____c___PurchasedBundle_b__18_0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AccessoryViewController____c->static_fields->__9__18_0 = this_02;
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)
                            &TypeInfo__AccessoryViewController____c->static_fields->__9__18_0 >> 0xc
                           );
            puVar13 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar14 = *puVar13;
              LOCK();
              uVar15 = *puVar13;
              if (uVar14 == uVar15) {
                *puVar13 = uVar14 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (uVar14 != uVar15);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar16 = 
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
          if ((pMVar16->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar16);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar12,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar17 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar17 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar5 = (longlong)(pLVar17->fields)._size;
          uVar4 = 0;
          if (0 < lVar5) {
            lVar18 = 0;
            lVar8 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar17 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar17 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar17->fields)._size <= uVar4) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pTVar19 = (pLVar17->fields)._items;
              if (pTVar19 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar19->max_length <= uVar4) {
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar19->vector + lVar8 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar20 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar12,(BaseEventData *)0x0,
                                  (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                                  (pMVar16->field7_0x38).rgctx_data[1].method);
              if (bVar20 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar4 = uVar4 + 1;
              lVar18 = lVar18 + 1;
              lVar8 = lVar8 + 8;
            } while (lVar18 < lVar5);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowBundle() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_ShowBundle
               (AccessoryViewController *this,MethodInfo *method)

{
  AccessoryViewController_HideScreens(this,(MethodInfo *)0x0);
  pBVar1 = (this->fields).bundlePurchaseOptions;
  if (pBVar1 != (BundleView *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AccessoryDataManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar2 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
    if (pAVar2 != (AccessoryShopDataClient *)0x0) {
      bVar3 = iRam_? != 0;
      (pBVar1->fields).bundleData = (pAVar2->fields).accessoryBundle;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(pBVar1->fields).bundleData >> 0xc);
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar8 != (MVGameControllerBase *)0x0) &&
          (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
         (this_00 = (pMVar9->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
        if ((pMVar10 != (MVLocalPlayer *)0x0) &&
           (accessoryData = (pBVar1->fields).bundleData,
           accessoryData != (AccessoryBundleClient *)0x0)) {
          if ((pMVar10->fields)._.level < (accessoryData->fields)._.level) {
            BundleView::BundleView_HandleLevel(pBVar1,accessoryData,(MethodInfo *)0x0);
          }
          else {
            BundleView::BundleView_HandlePrices(pBVar1,accessoryData,(MethodInfo *)0x0);
          }
          pBVar1 = (this->fields).bundlePurchaseOptions;
          if (pBVar1 != (BundleView *)0x0) {
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pBVar1,(MethodInfo *)0x0);
            if (pGVar11 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar11,1,(MethodInfo *)0x0);
              pGVar11 = (this->fields).inventoryView;
              if (pGVar11 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar11,1,(MethodInfo *)0x0);
                pAVar12 = (this->fields).backbackController;
                if ((pAVar12 != (AccessoryShopToggleInventory *)0x0) &&
                   (pCVar13 = (pAVar12->fields).canvasGroup, pCVar13 != (CanvasGroup *)0x0)) {
                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                            (pCVar13,_UNK_?,(MethodInfo *)0x0);
                  pCVar13 = (pAVar12->fields).canvasGroup;
                  if (pCVar13 != (CanvasGroup *)0x0) {
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                              (pCVar13,0,(MethodInfo *)0x0);
                    pAVar14 = (this->fields).previewer;
                    if (pAVar14 != (AvatarAccessoryPreviewer *)0x0) {
                      if ((pAVar14->fields).imagesReady == 0) {
                        return;
                      }
                      pGVar11 = (pAVar14->fields).bodyClone;
                      if (pGVar11 == (GameObject *)0x0) {
                        FUN_?();
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Quaternion);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pQVar16 = TypeInfo__UnityEngine__Quaternion->static_fields;
                      fVar17 = (pQVar16->identityQuaternion).x;
                      fVar18 = (pQVar16->identityQuaternion).y;
                      fVar19 = (pQVar16->identityQuaternion).z;
                      fVar20 = (pQVar16->identityQuaternion).w;
                      lStack_21 = (ulonglong)_UNK_? << 0x20;
                      uStack_22 = 0;
                      uStack_23 = 0;
                      uStack_24 = 0;
                      pcVar15 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
                      {
                        uVar25 = func_?(&UNK_?);
                        FUN_?(uVar25,0);
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      pcRam_? = pcVar15;
                      (*pcRam_?)(&lStack_21);
                      fStack_26 = ((float)uStack_23 * fVar20 + uStack_24._4_4_ * fVar17 +
                                  (float)uStack_24 * fVar18) - uStack_23._4_4_ * fVar19;
                      fStack_27 = (uStack_23._4_4_ * fVar20 + uStack_24._4_4_ * fVar18 +
                                  (float)uStack_23 * fVar19) - (float)uStack_24 * fVar17;
                      fStack_28 = ((float)uStack_24 * fVar20 + uStack_24._4_4_ * fVar19 +
                                  uStack_23._4_4_ * fVar17) - (float)uStack_23 * fVar18;
                      fStack_29 = ((uStack_24._4_4_ * fVar20 - (float)uStack_23 * fVar17) -
                                  uStack_23._4_4_ * fVar18) - (float)uStack_24 * fVar19;
                      if (obj != (Transform *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar30 = (obj->fields)._._.m_CachedPtr;
                        if (pvVar30 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0)
                          ;
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        pcVar15 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)
                           ) {
                          uVar25 = func_?(&UNK_?);
                          FUN_?(uVar25,0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        pcRam_? = pcVar15;
                        (*pcRam_?)(pvVar30,&fStack_26);
                        pAVar31 = (pAVar14->fields).toPreviewer;
                        if ((pAVar31 != (AvatarPreviewer *)0x0) &&
                           (this_01 = (pAVar31->fields).previewCam, this_01 != (Camera *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                                    (this_01,(pAVar14->fields).startFov,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      FUN_?();
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_Start
               (AccessoryViewController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pWVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                       (pMVar1,
                        WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                       );
    pMVar3 = MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__;
    if (pWVar2 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                         (pMVar1,(pWVar2->fields).woId,pMVar3->klass->rgctx_data[1].method);
      if (pOVar4 != (Object *)0x0) {
        lVar5 = FUN_?(pWVar2);
        if ((lVar5 == 0) || (*(Theme **)(lVar5 + 0x140) == (Theme *)0x0)) goto code_?;
        Theme::Theme_Deactivate(*(Theme **)(lVar5 + 0x140),(MethodInfo *)0x0);
      }
    }
    uStack_6 = 0;
    uStack_7 = 0;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(&uStack_6);
    bVar10 = cRam_? == '\0';
    (this->fields).prevLight.r = (float)(undefined4)uStack_6;
    (this->fields).prevLight.g = (float)uStack_6._4_4_;
    (this->fields).prevLight.b = (float)(undefined4)uStack_7;
    (this->fields).prevLight.a = (float)uStack_7._4_4_;
    if (bVar10) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar11 != (MVGameControllerBase *)0x0) &&
       (pSVar12 = (pMVar11->fields).skyboxManager, pSVar12 != (SkyboxManager *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar13 = (pSVar12->fields)._._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar12,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      bVar14 = (*pcRam_?)(pvVar13);
      bVar10 = cRam_? == '\0';
      (this->fields).wasEnabled = bVar14;
      if (bVar10) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar11 != (MVGameControllerBase *)0x0) &&
         (pSVar12 = (pMVar11->fields).skyboxManager, pSVar12 != (SkyboxManager *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pSVar12,0,(MethodInfo *)0x0);
        uStack_6 = _UNK_?;
        uStack_7 = _UNK_?;
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(&uStack_6);
        this_00 = (this->fields).playerGoldGameObject;
        if (this_00 == (GameObject *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateHighlightedTab(AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_UpdateHighlightedTab
               (AccessoryViewController *this,AccessoryCategoryClient__Enum category,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IHighlightedElement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabMenuAccessoryShop;
  if (this_00 != (TabMenuAccessoryShop *)0x0) {
    pTVar1 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                       (this_00,category,(MethodInfo *)0x0);
    lVar2 = FUN_?(pTVar1,TypeInfo__IHighlightedElement);
    if (lVar2 != 0) {
      FUN_?(0,TypeInfo__IHighlightedElement,lVar2);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

