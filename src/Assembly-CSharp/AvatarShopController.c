
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_Activate
               (AvatarShopController *this,UIPushOption__Enum pushOption,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarShopController___Activate_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)pushOption;
    (this_00->fields).state = (int32_t)this;
    pIVar1 = (this->fields).inventoryControllerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pIVar1 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pIVar1,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    (this->fields).inventoryController = pIVar1;
    if (pIVar1 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Initialize
                (pIVar1,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
      pTVar2 = (this->fields).tab;
      if ((pTVar2 != (TabState *)0x0) &&
         (pIVar1 = (this->fields).inventoryController, pIVar1 != (InventoryController *)0x0)) {
        InventoryController::InventoryController_AddTab
                  (pIVar1,0,(pTVar2->fields).name,(MethodInfo *)0x0);
        pIVar3 = (this->fields).inventoryController;
        if (pIVar3 != (InventoryController *)0x0) {
          a = (pIVar3->fields).OnPageTurned;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,MethodInfo__AvatarShopController__PageTurned_int_,
                     MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                    );
          pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)a,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pDVar6 = (Delegate *)0x0;
          if (pDVar5 == (Delegate *)0x0) {
code_?:
            (a->fields)._._.method_code = pDVar6;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (TypeInfo__AvatarShopController->static_fields->__f__am_cache0 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)0x0,
                         MethodInfo__AvatarShopController___Activate_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__AvatarShopController->static_fields->__f__am_cache0 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar4;
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__AvatarShopController->static_fields->__f__am_cache0;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar7,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)pIVar1,
                       MethodInfo__AvatarShopController___Activate_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar7,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            AvatarShopController_UpdateContent(this,(MethodInfo *)0x0);
            return;
          }
          if ((UnityAction_1_System_Int32___Class *)pDVar5->klass ==
              TypeInfo__UnityEngine__Events__UnityAction<int>) {
            pDVar6 = pDVar5;
          }
          if (pDVar6 != (Delegate *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AddPreviewObjectForIndex(Int32) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_AddPreviewObjectForIndex
               (AvatarShopController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarRepository;
  if (pAVar1 != (AvatarRepository *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(pAVar1->fields).avatars;
    if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      item = (AvatarRepositoryItem *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (pDVar2,index,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_
                       );
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (item != (AvatarRepositoryItem *)0x0) {
        buffer = (item->fields).data;
        this_01 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (this_01,buffer,(MethodInfo *)0x0);
        this_02 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_02,this_01,0,(MethodInfo *)0x0);
        if (this_02 != (KoGaMaPackageClient *)0x0) {
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_02,(MethodInfo *)0x0);
          pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_02->fields).worldObjects;
          if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            wo = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (pDVar2,(this_02->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
            pXVar3 = (XpBoostParticlePreviewer *)(this->fields).previewItemPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               (pXVar3,
                                AvatarShopPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<AvatarShopPreviewItem>_AvatarShopPreviewItem_
                               );
            if (pXVar3 != (XpBoostParticlePreviewer *)0x0) {
              AvatarShopPreviewItem::AvatarShopPreviewItem_InitializeObjectPreview
                        ((AvatarShopPreviewItem *)pXVar3,item,wo,(this->fields).previewRootTransform
                         ,(MethodInfo *)0x0);
              this_00 = (this->fields).inventoryController;
              item_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)pXVar3,(MethodInfo *)0x0);
              if (this_00 != (InventoryController *)0x0) {
                InventoryController::InventoryController_AddObject
                          (this_00,item_00,index % (this->fields).numberOfSlotsPrPage,
                           (MethodInfo *)0x0);
                return;
              }
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


/* MVWorldObjectClient GetWorldObjectFromItemData(AvatarRepositoryItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::AvatarShopController::AvatarShopController_GetWorldObjectFromItemData
          (AvatarRepositoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (AvatarRepositoryItem *)0x0) {
    buffer = (item->fields).data;
    this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,buffer,(MethodInfo *)0x0);
    this_01 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_01,this_00,0,(MethodInfo *)0x0);
    if (this_01 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
      this = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this_01->fields).worldObjects;
      if (this != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
        pMVar1 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (this,(this_01->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        return pMVar1;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar1;
}


/* Void Initialize(AvatarEditModeBodyController) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_Initialize
               (AvatarShopController *this,AvatarEditModeBodyController *editModeBodyController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).avatarEditModeBodyController = editModeBodyController;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    pOVar1 = PrefabPool::PrefabPool_get_MVPulseBoxPrefab(this_01,(MethodInfo *)0x0);
    (this->fields).avatarRepository = (AvatarRepository *)pOVar1;
    name = TM::TM__(StringLiteral_Avatars,(MethodInfo *)0x0);
    slotsPrPage = (this->fields).numberOfSlotsPrPage;
    this_02 = (TabState *)func_?(TypeInfo__TabState);
    TabState::TabState__ctor(this_02,name,slotsPrPage,(MethodInfo *)0x0);
    pAVar2 = (this->fields).avatarRepository;
    (this->fields).tab = this_02;
    if (pAVar2 != (AvatarRepository *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (pAVar2->fields).avatars;
      if (this_00 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
        pOVar3 = System.Core.dll::System::Linq::
                 Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                 KeyValuePair`2[System::Object,System::Object],System::Object]::
                 Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                             *)this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Count__
                           );
        if (this_02 != (TabState *)0x0) {
          (this_02->fields).highestSlotIndex = (int32_t)((int)&pOVar3[-1].monitor + 3);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_OnPop
               (AvatarShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewRootTransform;
    if (pTVar1 == (Transform *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_PageTurned
               (AvatarShopController *this,int32_t dir,MethodInfo *method)

{
  this_00 = (this->fields).tab;
  if (this_00 != (TabState *)0x0) {
    bVar1 = TabState::TabState_UpdatePage(this_00,dir,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      AvatarShopController_UpdateContent(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseAvatar(AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_PurchaseAvatar
               (AvatarShopController *this,AvatarRepositoryItem *item,MethodInfo *method)

{
  this_00 = (this->fields).avatarEditModeBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (this_00->fields).purchasingItem = item;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_m__8_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_UpdateContent
               (AvatarShopController *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewRootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pGVar3 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar3,StringLiteral_Preview_Root___AvatarShopControl,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    (this->fields).previewRootTransform = pTVar1;
    pIVar4 = (this->fields).inventoryController;
    if (pIVar4 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Clear(pIVar4,(MethodInfo *)0x0);
      pTVar5 = (this->fields).tab;
      pIVar4 = (this->fields).inventoryController;
      if (pTVar5 != (TabState *)0x0) {
        currentPage = (pTVar5->fields).currentPage;
        maxPages = TabState::TabState_get_MaxPages(pTVar5,(MethodInfo *)0x0);
        if (pIVar4 != (InventoryController *)0x0) {
          InventoryController::InventoryController_SelectTab
                    (pIVar4,0,currentPage,maxPages,(MethodInfo *)0x0);
          pAVar6 = (this->fields).avatarRepository;
          if (pAVar6 != (AvatarRepository *)0x0) {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            this_00 = (pAVar6->fields).avatars;
            if (this_00 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
              source = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[WinningConditionType,System::Object]::
                       Dictionary_2_WinningConditionType_System_Object__get_Values
                                 ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Values__
                                 );
              if (TypeInfo__AvatarRepository->static_fields->__f__am_cache0 ==
                  (Func_2_AvatarRepositoryItem_Int32_ *)0x0) {
                this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_02,(Object *)0x0,
                           MethodInfo__AvatarRepository___GetAvatars_m__0_AvatarRepositoryItem_,
                           MethodInfo__System__Func<AvatarRepositoryItem,_int>__Func_System__Object__void__
                          );
                TypeInfo__AvatarRepository->static_fields->__f__am_cache0 =
                     (Func_2_AvatarRepositoryItem_Int32_ *)this_02;
              }
              source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                                    ((IOrderedEnumerable_1_System_Object_ *)source,
                                     (Func_2_Object_Int64_ *)
                                     TypeInfo__AvatarRepository->static_fields->__f__am_cache0,
                                     System__Linq__IOrderedEnumerable<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__OrderBy<AvatarRepositoryItem,_int>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>__System__Func<AvatarRepositoryItem,_int>_
                                    );
              this = (AvatarShopController *)
                     System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                               ((IEnumerable_1_UseInteractor_ *)source_00,
                                System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
                               );
              slotIndex = 0;
              if (this != (AvatarShopController *)0x0) {
                while( true ) {
                  pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                           Json::Serialization::JsonProperty]::
                           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                      this,
                                      MethodInfo__System__Collections__Generic__List<AvatarRepositoryItem>__get_Count__
                                     );
                  if ((int)pOVar7 <= slotIndex) {
                    return;
                  }
                  pTVar5 = (this_01->fields).tab;
                  if (pTVar5 == (TabState *)0x0) break;
                  bVar2 = TabState::TabState_SlotIndexIsInRange(pTVar5,slotIndex,(MethodInfo *)0x0);
                  if (bVar2 != 0) {
                    this = (AvatarShopController *)0x0;
                    AvatarShopController_AddPreviewObjectForIndex
                              (this_01,slotIndex,(MethodInfo *)0x0);
                  }
                  slotIndex = slotIndex + 1;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <Activate>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController__Activate_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0xc);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

