
/* Void DisplayCategoryFeatures(AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_DisplayCategoryFeatures
               (AccessoryViewController *this,AccessoryCategoryClient__Enum category,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).featuredTabFlare;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,category == AccessoryCategoryClient__Enum_Featured ||
                      category == AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
    this_00 = (this->fields).levelProgress;
    if ((this_00 != (LevelProgressAccessoryShop *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,category == AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
      this_01 = (this->fields).tabMenuAccessoryShop;
      if (this_01 != (TabMenuAccessoryShop *)0x0) {
        this_02 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                            (this_01,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((this_02 == (TabMenuButtonBase *)0x0) ||
             (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_02,(MethodInfo *)0x0),
             pGVar1 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,category != AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HideScreens() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_HideScreens
               (AccessoryViewController *this,MethodInfo *method)

{
  this_00 = (this->fields).bundlePurchaseOptions;
  if (this_00 != (BundleView *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).inventoryView;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        this_01 = (this->fields).accessoryView;
        if (this_01 != (AccessoryView *)0x0) {
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this_01,(MethodInfo *)0x0);
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_OnDestroy
               (AccessoryViewController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
            ((this->fields).prevLight,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
  if (pSVar3 == (SkyboxManager *)0x0) {
code_?:
    puStack4 = (undefined *)0x0;
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  in_stack_6 = (List_1_UnityEngine_Color32_ *)0x0;
  method = (MethodInfo *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pSVar3,(this->fields).wasEnabled,(MethodInfo *)0x0);
  in_stack_6 = (List_1_UnityEngine_Color32_ *)0x0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
  in_stack_7 =
       (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
       WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
  ;
  in_stack_8 =
       MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef_2
                 (this_00,
                  WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                 );
  if (in_stack_8 == (WorldObjectClientRef_1_MVRoundCube_ *)0x0) {
    return;
  }
  in_stack_9 = MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__;
  in_stack_7 =
       (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&UNK_?;
  in_stack_10 = in_stack_8;
  pMVar11 = WorldObjectClientRef`1[MVRoundCube]::
           WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                     (in_stack_8,
                      MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__);
  if (pMVar11 == (MVRoundCube *)0x0) {
    return;
  }
  in_stack_12 = MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__;
  in_stack_9 = (MethodInfo *)&UNK_?;
  pMVar11 = WorldObjectClientRef`1[MVRoundCube]::
           WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                     (in_stack_8,
                      MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__);
  if (pMVar11 == (MVRoundCube *)0x0) goto code_?;
  in_stack_13 = (MethodInfo **)0x0;
  in_stack_12 = (MethodInfo *)&UNK_?;
  in_stack_14 = pMVar11;
  pTVar15 = ThemeWorldObject::ThemeWorldObject_get_Visualization
                      ((ThemeWorldObject *)pMVar11,(MethodInfo *)0x0);
  if (pTVar15 == (Theme *)0x0) goto code_?;
  uStack16 = 0xffffffff;
  puStack4 = &DAT_?;
  puStack17 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0x00000040;
  in_stack_13 = &method;
  method = unaff_EDI;
  ppMVar18 = &method;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    ppMVar18 = in_stack_13;
  }
  in_stack_13 = ppMVar18;
  in_stack_7 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  in_stack_10 = (WorldObjectClientRef_1_MVRoundCube_ *)0x0;
  in_stack_9 = (MethodInfo *)0x0;
  in_stack_8 = (WorldObjectClientRef_1_MVRoundCube_ *)0x0;
  func_?();
  in_stack_14 = (MVRoundCube *)&method;
  in_stack_13 = &method;
  if (*(char *)(in_stack_19 + 0xc) != '\0') {
    in_stack_14 = (MVRoundCube *)&method;
    in_stack_13 = &method;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (in_stack_14 = (MVRoundCube *)&method, in_stack_13 = &method,
       (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      in_stack_14 = (MVRoundCube *)&method;
      in_stack_13 = &method;
      func_?();
    }
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    if (pSVar3 == (SkyboxManager *)0x0) goto code_?;
    SkyboxManager::SkyboxManager_Disable(pSVar3,(MethodInfo *)0x0);
  }
  if (*(List_1_UnityEngine_Color32_ **)(in_stack_19 + 0x14) !=
      (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0x00000014,
                        *(List_1_UnityEngine_Color32_ **)(in_stack_19 + 0x14),
                        MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                       );
    in_stack_7 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar20->l
    ;
    in_stack_10 = (WorldObjectClientRef_1_MVRoundCube_ *)pLVar20->next;
    in_stack_9 = (MethodInfo *)pLVar20->ver;
    in_stack_8 = (WorldObjectClientRef_1_MVRoundCube_ *)(pLVar20->current).rgba;
    uStack16 = 0;
    while( true ) {
      method = (MethodInfo *)&UNK_?;
      cVar21 = func_?();
      if (cVar21 == '\0') {
        in_stack_14->klass = 0x53;
        uStack16 = 0xffffffff;
        func_?(&stack0x00000024,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                       );
        *unaff_FS_OFFSET = puStack17;
        return;
      }
      pOVar22 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          &stack0x00000024,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                         );
      if (pOVar22 == (Object *)0x0) break;
      (*pOVar22->klass[1]._0.gc_desc)();
    }
  }
code_?:
  func_?();
  func_?(0,0,0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OpenAccessoryManagementScreen(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryViewController::
     AccessoryViewController_OpenAccessoryManagementScreen
               (AccessoryViewController *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  pAVar1 = (this->fields).accessoryView;
  if (pAVar1 != (AccessoryView *)0x0) {
    pAVar2 = (pAVar1->fields).accessoryDataClient;
    if (pAVar2 != (AccessoryDataClient *)0x0) {
      if (accessoryData == (AccessoryDataClient *)0x0) goto code_?;
      if ((pAVar2->fields)._.aMDID == (accessoryData->fields)._.aMDID) {
        return;
      }
    }
    AccessoryViewController_HideScreens(this,(MethodInfo *)0x0);
    pAVar1 = (this->fields).accessoryView;
    if (pAVar1 != (AccessoryView *)0x0) {
      AccessoryView::AccessoryView_Initialize(pAVar1,accessoryData,(MethodInfo *)0x0);
      pAVar1 = (this->fields).accessoryView;
      if ((pAVar1 != (AccessoryView *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pAVar1,(MethodInfo *)0x0),
         this_00 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        pAVar3 = (this->fields).backbackController;
        if ((pAVar3 != (AccessoryShopToggleInventory *)0x0) &&
           (pCVar4 = (pAVar3->fields).canvasGroup, pCVar4 != (CanvasGroup *)0x0)) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar4,0.5,(MethodInfo *)0x0);
          pCVar4 = (pAVar3->fields).canvasGroup;
          if (pCVar4 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                      (pCVar4,0,(MethodInfo *)0x0);
            pAVar5 = (this->fields).previewer;
            if (pAVar5 != (AvatarAccessoryPreviewer *)0x0) {
              AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
                        (pAVar5,(MethodInfo *)0x0);
              pAVar5 = (this->fields).previewer;
              if (pAVar5 != (AvatarAccessoryPreviewer *)0x0) {
                AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
                          (pAVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OpenCategoryScreen(Boolean) */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_OpenCategoryScreen
               (AccessoryViewController *this,bool canSortByInventory,MethodInfo *method)

{
  AccessoryViewController_HideScreens(this,(MethodInfo *)0x0);
  this_00 = (this->fields).inventoryView;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pAVar1 = (this->fields).backbackController;
    if (pAVar1 != (AccessoryShopToggleInventory *)0x0) {
      pCVar2 = (pAVar1->fields).canvasGroup;
      value = _UNK_?;
      if (canSortByInventory == 0) {
        value = _UNK_?;
      }
      if (pCVar2 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar2,value,(MethodInfo *)0x0);
        pCVar2 = (pAVar1->fields).canvasGroup;
        if (pCVar2 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                    (pCVar2,canSortByInventory,(MethodInfo *)0x0);
          pAVar3 = (this->fields).previewer;
          if (pAVar3 != (AvatarAccessoryPreviewer *)0x0) {
            AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
                      (pAVar3,(MethodInfo *)0x0);
            pAVar3 = (this->fields).previewer;
            if (pAVar3 != (AvatarAccessoryPreviewer *)0x0) {
              AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
                        (pAVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PurchasedBundle() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_PurchasedBundle
               (AccessoryViewController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pAVar1 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0);
  if (pAVar1 != (AccessoryBundleClient *)0x0) {
    this_00 = (pAVar1->fields)._.accessoryBundleItems;
    this_01 = (this->fields).tabMenuAccessoryShop;
    if (this_01 != (TabMenuAccessoryShop *)0x0) {
      TabMenuAccessoryShop::TabMenuAccessoryShop_DestroyTab
                (this_01,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
      index = 0;
      if (this_00 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
        while( true ) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                             );
          if ((int)pOVar2 <= index) {
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)0x0,(MethodInfo *)0x0);
            if (TypeInfo__AccessoryViewController->static_fields->__f__am_cache0 ==
                (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0) {
              this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_02,(Object *)0x0,
                         MethodInfo__AccessoryViewController___PurchasedBundle_m__0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>__EventFunction_System__Object__void__
                        );
              TypeInfo__AccessoryViewController->static_fields->__f__am_cache0 =
                   (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)this_02;
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__AccessoryViewController->static_fields->__f__am_cache0;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                      );
            return;
          }
          pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,index,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                             );
          if (pIVar3 == (IEventSystemHandler *)0x0) break;
          id = pIVar3[1].monitor;
          if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
            func_?();
          }
          pAVar4 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                             ((int32_t)id,(MethodInfo *)0x0);
          if (pAVar4 != (AccessoryDataClient *)0x0) {
            streamingAssetId = (pAVar4->fields)._.sAID;
            if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
              func_?();
            }
            AccessoryDataManager::AccessoryDataManager_SetToOwns(streamingAssetId,(MethodInfo *)0x0)
            ;
          }
          index = index + 1;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowBundle() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_ShowBundle
               (AccessoryViewController *this,MethodInfo *method)

{
  AccessoryViewController_HideScreens(this,(MethodInfo *)0x0);
  pBVar1 = (this->fields).bundlePurchaseOptions;
  if (pBVar1 != (BundleView *)0x0) {
    BundleView::BundleView_Initialize(pBVar1,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bundlePurchaseOptions;
    if ((pBVar1 != (BundleView *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pGVar2 = (this->fields).inventoryView;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        pAVar3 = (this->fields).backbackController;
        if ((pAVar3 != (AccessoryShopToggleInventory *)0x0) &&
           (pCVar4 = (pAVar3->fields).canvasGroup, pCVar4 != (CanvasGroup *)0x0)) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar4,0.5,(MethodInfo *)0x0);
          pCVar4 = (pAVar3->fields).canvasGroup;
          if (pCVar4 != (CanvasGroup *)0x0) {
            in_stack_5 = &UNK_?;
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                      (pCVar4,0,(MethodInfo *)0x0);
            if ((this->fields).previewer != (AvatarAccessoryPreviewer *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (*(char *)(in_stack_6 + 0x34) == '\0') {
                return;
              }
              if (*(GameObject **)(in_stack_6 + 0x44) != (GameObject *)0x0) {
                this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform
                                    (*(GameObject **)(in_stack_6 + 0x44),(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000
                     ) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                  func_?();
                }
                pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                         Quaternion_get_identity((Quaternion *)&stack0x00000034,(MethodInfo *)0x0);
                in_stack_8 = pQVar7->x;
                in_stack_9 = pQVar7->y;
                in_stack_10 = pQVar7->z;
                in_stack_11 = pQVar7->w;
                pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                                   ((Quaternion *)&stack0x00000024,0.0,180.0,0.0,(MethodInfo *)0x0);
                lhs.y = in_stack_9;
                lhs.x = in_stack_8;
                lhs.z = in_stack_10;
                lhs.w = in_stack_11;
                pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                                   ((Quaternion *)&stack0x00000024,lhs,*pQVar7,(MethodInfo *)0x0);
                if (this_01 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (this_01,*pQVar7,(MethodInfo *)0x0);
                  if ((*(int *)(in_stack_6 + 0x30) != 0) &&
                     (this_00 = *(Camera **)(*(int *)(in_stack_6 + 0x30) + 0x1c),
                     this_00 != (Camera *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                              (this_00,*(float *)(in_stack_6 + 0x50),(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              func_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_Start
               (AccessoryViewController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef_2
                      (this_01,
                       WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                      );
  if (this_02 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) {
    pMVar1 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       (this_02,
                        MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__)
    ;
    if (pMVar1 != (MVRoundCube *)0x0) {
      pMVar1 = WorldObjectClientRef`1[MVRoundCube]::
               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                         (this_02,
                          MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__
                         );
      if (pMVar1 == (MVRoundCube *)0x0) goto code_?;
      this = (AccessoryViewController *)
             ThemeWorldObject::ThemeWorldObject_get_Visualization
                       ((ThemeWorldObject *)pMVar1,(MethodInfo *)0x0);
      if (this == (AccessoryViewController *)0x0) goto code_?;
      Theme::Theme_Deactivate((Theme *)this,(MethodInfo *)0x0);
    }
  }
  pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_get_ambientLight
                     ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar3 = pCVar2->g;
  fVar4 = pCVar2->b;
  fVar5 = pCVar2->a;
  (this->fields).prevLight.r = pCVar2->r;
  (this->fields).prevLight.g = fVar3;
  (this->fields).prevLight.b = fVar4;
  (this->fields).prevLight.a = fVar5;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
  if (pSVar6 != (SkyboxManager *)0x0) {
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pSVar6,(MethodInfo *)0x0);
    (this->fields).wasEnabled = bVar7;
    pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (pSVar6 != (SkyboxManager *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pSVar6,0,(MethodInfo *)0x0);
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      pCVar2 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                                  ((Vector4 *)&stack0xffffffec,(Vector4)*pCVar2,0.55,
                                   (MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
                (*pCVar2,(MethodInfo *)0x0);
      this_00 = (this->fields).playerGoldGameObject;
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabMenuAccessoryShop;
  if (this_00 != (TabMenuAccessoryShop *)0x0) {
    pTVar1 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                       (this_00,category,(MethodInfo *)0x0);
    iVar2 = func_?(pTVar1,TypeInfo__IHighlightedElement);
    if (iVar2 != 0) {
      func_?(0);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <PurchasedBundle>m__0(IAccessoryInventoryControl, BaseEventData) */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController__PurchasedBundle_m__0
               (IAccessoryInventoryControl *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryInventoryControl *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

