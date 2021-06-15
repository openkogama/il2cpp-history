
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Activate
               (AccessoryShopController *this,UIPushOption__Enum pushOption,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).pushOption = pushOption;
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUStack2 =
       (UnityAction *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUStack2 != (UnityAction *)0x0) {
    if (pUStack2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUStack2;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar1;
  AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
  return;
}


/* Void Activate(UIPushOption, AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Activate_1
               (AccessoryShopController *this,UIPushOption__Enum pushOption,
               AccessoryCategoryClient__Enum category,MethodInfo *method)

{
  (this->fields).startingCategory = category;
  AccessoryShopController_Activate(this,pushOption,(MethodInfo *)0x0);
  return;
}


/* Void AddDynamicTab(AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_AddDynamicTab
               (AccessoryShopController *this,AccessoryCategoryClient__Enum category,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = AccessoryShopController_GetAccessoryDataFromCategoryType
                      (this,category,(MethodInfo *)0x0);
  if (this_00 != (List_1_AccessoryDataClient_ *)0x0) {
    this_01 = (AccessoryShopController *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                        );
    if (0 < (int)this_01) {
      AccessoryShopController_CreateAndAddTab
                (this_01,(AccessoryCategoryClient__Enum)this_01,(int32_t)this_01,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Attach(MVBody, Single, Single) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Attach
               (AccessoryShopController *this,MVBody *body,float offset,float scale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).attachingReady == 0) {
    return;
  }
  object = (this->fields).accessoryAttacher;
  (this->fields).attachingReady = 0;
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,MethodInfo__AccessoryShopController__AttacherFinished__,
             (MethodInfo *)0x0);
  if (object != (AccessoryAttacher *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Don_t_understand_ordering_of_thi,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Reimplement__AttachAccessory,(MethodInfo *)0x0);
    (object->fields).OnFinishedCallback = (Action *)pUVar1;
    (object->fields).avatarBody = body;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pAVar3 = (pMVar2->fields).OnSetAvatarAccessoryResponse;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)object,
                 MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
                 ,MethodInfo__System__Action<bool>__Action_System__Object__void__);
      pAVar4 = (Action_1_Boolean_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar3,(Delegate *)pUVar1,(MethodInfo *)0x0);
      pAVar3 = (Action_1_Boolean_ *)0x0;
      if (pAVar4 != (Action_1_Boolean_ *)0x0) {
        if (pAVar4->klass == TypeInfo__System__Action<bool>) {
          pAVar3 = pAVar4;
        }
        pAVar5 = TypeInfo__System__Action<bool>;
        if (pAVar3 == (Action_1_Boolean_ *)0x0) goto code_?;
      }
      (pMVar2->fields).OnSetAvatarAccessoryResponse = pAVar3;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      this_00 = (object->fields).avatarBody;
      if ((this_00 != (MVBody *)0x0) &&
         (avatarBodyWoID =
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
         , this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetAvatarAccessorySlot
                  (this_01,(int32_t)avatarBodyWoID,0,offset,scale,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache8 ==
            (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar1,(Object *)0x0,
                     MethodInfo__AccessoryShopController___Attach_m__A_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          TypeInfo__AccessoryShopController->static_fields->__f__am_cache8 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar1;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AccessoryShopController->static_fields->__f__am_cache8;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AttachToBody(Int32, Single, Single) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_AttachToBody
               (AccessoryShopController *this,int32_t productId,float offset,float scale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryShopController___AttachToBody_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)offset;
    (this_00->fields).state = (int32_t)scale;
    (this_00->fields).originalScale.x = (float)this;
    (this->fields).currentlyAttachingID = productId;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_CharacterEditor) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_00,
                 MethodInfo__AccessoryShopController___AttachToBody_c__AnonStorey2____m__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                );
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      body = MVLocalPlayer::MVLocalPlayer_get_Body(this_01,(MethodInfo *)0x0);
      AccessoryShopController_Attach
                (this,body,(float)(this_00->fields)._._._._.m_CachedPtr,
                 (float)(this_00->fields).state,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AttacherFinished() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_AttacherFinished
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).attachingReady = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache9 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__AccessoryShopController___AttacherFinished_m__B_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__AccessoryShopController->static_fields->__f__am_cache9 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__AccessoryShopController->static_fields->__f__am_cache9;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).inventoryController;
  if (this_00 != (InventoryController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (TypeInfo__AccessoryShopController->static_fields->__f__am_cacheA ==
        (ExecuteEvents_EventFunction_1_IAccessoryChanged_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__AccessoryShopController___AttacherFinished_m__C_UnityEngine__EventSystems__IAccessoryChanged__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryChanged>__EventFunction_System__Object__void__
                );
      TypeInfo__AccessoryShopController->static_fields->__f__am_cacheA =
           (ExecuteEvents_EventFunction_1_IAccessoryChanged_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AccessoryShopController->static_fields->__f__am_cacheA;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryChanged>_
              );
    AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ClearShop() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_ClearShop
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).tabs;
  if (this_01 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_01,MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__)
    ;
    if ((this->fields).inventoryController != (InventoryController *)0x0) {
      iVar1 = *(int *)(in_stack_2 + 0x14);
      if (iVar1 == 0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uStack4 = 0;
      uVar5 = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0xfffffff8;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      puVar6 = (undefined4 *)&stack0xffffffb8;
      func_?();
      this_00 = *(Dictionary_2_WinningConditionType_System_Object_ **)(iVar1 + 0xc);
      if ((this_00 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) &&
         (this_02 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[WinningConditionType,System::Object]::
                    Dictionary_2_WinningConditionType_System_Object__get_Values
                              (this_00,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                              ),
         this_02 !=
         (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                    *)&stack0xffffffc4,this_02,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                  );
        while( true ) {
          cVar7 = func_?();
          if (cVar7 == '\0') {
            *puVar6 = 0x43;
            func_?();
            *unaff_FS_OFFSET = uVar5;
            return;
          }
          this_03 = (InventorySlot *)func_?();
          if (this_03 == (InventorySlot *)0x0) break;
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          pGVar8 = InventorySlot::InventorySlot_get_Item(this_03,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pGVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            pGVar8 = InventorySlot::InventorySlot_get_Item(this_03,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar8,(MethodInfo *)0x0);
          }
        }
      }
      func_?(0);
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateAndAddTab(AccessoryCategoryClient, Int32) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_CreateAndAddTab
               (AccessoryShopController *this,AccessoryCategoryClient__Enum category,
               int32_t highestSlotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  name = LocalizedEnums::LocalizedEnums___3(category,(MethodInfo *)0x0);
  slotsPrPage = (this->fields).numberOfSlotsPrPage;
  this_01 = (TabState *)func_?(TypeInfo__TabState);
  TabState::TabState__ctor(this_01,name,slotsPrPage,(MethodInfo *)0x0);
  this_00 = (this->fields).tabs;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
              );
    if (this_01 != (TabState *)0x0) {
      (this_01->fields).highestSlotIndex = highestSlotIndex;
      return;
    }
  }
  uStack1 = 0;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DisplayAllItems() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_DisplayAllItems
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                     (this,AccessoryCategoryClient__Enum_Hats,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                       );
    AccessoryShopController_CreateAndAddTab
              (this,AccessoryCategoryClient__Enum_Hats,(int32_t)pOVar2,(MethodInfo *)0x0);
    pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                       (this,AccessoryCategoryClient__Enum_Particles,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                         );
      AccessoryShopController_CreateAndAddTab
                (this,AccessoryCategoryClient__Enum_Particles,(int32_t)pOVar2,(MethodInfo *)0x0);
      pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                         (this,AccessoryCategoryClient__Enum_BackAccessories,(MethodInfo *)0x0);
      if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                           );
        AccessoryShopController_CreateAndAddTab
                  (this,AccessoryCategoryClient__Enum_BackAccessories,(int32_t)pOVar2,
                   (MethodInfo *)0x0);
        AccessoryShopController_AddDynamicTab
                  (this,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
        AccessoryShopController_AddDynamicTab
                  (this,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
        pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                           (this,AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                             );
          AccessoryShopController_CreateAndAddTab
                    (this,AccessoryCategoryClient__Enum_LevelUnlocks,(int32_t)pOVar2,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DisplayOwnedItems() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_DisplayOwnedItems
               (AccessoryShopController *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = (MethodInfo *)0x0;
  func_?();
  pLStack_8 = (Link__Array *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (pLStack_8 = (Link__Array *)&stack0xffffffa0, puStack_4 = &stack0xffffffa0,
     (TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    pLStack_8 = (Link__Array *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    func_?(TypeInfo__AccessoryDataManager);
  }
  this_01 = AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap((MethodInfo *)0x0);
  if (this_01 != (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffac,(Dictionary_2_WinningConditionType_System_Object_ *)this_01
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    iStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        pLStack_8->klass = (Link__Array__Class *)0x7b;
        iStack_1 = -1;
        func_?();
        *unaff_FS_OFFSET = iStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Current__
                            );
      enumVal = func_?();
      name = LocalizedEnums::LocalizedEnums___3(enumVal,(MethodInfo *)0x0);
      iVar11 = (this->fields).numberOfSlotsPrPage;
      pIStack_12 = (Int32__Array *)func_?();
      TabState::TabState__ctor((TabState *)pIStack_12,name,iVar11,(MethodInfo *)0x0);
      auStack_6._8_4_ = &KStack_7;
      auStack_6._12_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Value__
      ;
      auStack_6._4_4_ = &UNK_?;
      this_02 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)func_?();
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      index = 0;
      pIStack_13 = (Int32__Array *)0x0;
      pIVar14 = pIStack_13;
      while( true ) {
        pIStack_13 = pIVar14;
        if (this_02 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)
        goto code_?;
        pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                           );
        pIVar14 = pIStack_12;
        if ((int)pOVar15 <= index) break;
        pIVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_02,index,
                            MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                           );
        if (pIVar16 == (IEventSystemHandler *)0x0) goto code_?;
        index = index + 1;
        pIVar14 = (Int32__Array *)((int)&pIStack_13->klass + 1);
        if (*(char *)&pIVar16[6].klass == '\0') {
          pIVar14 = pIStack_13;
        }
      }
      if (pIStack_12 == (Int32__Array *)0x0) break;
      pIStack_12->vector[0] = (int32_t)pIStack_13;
      this_00 = (this->fields).tabs;
      iVar11 = func_?();
      if (this_00 == (Dictionary_2_System_Int32_TabState_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar11,(Object *)pIVar14,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                );
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void DisplayPurchasableItems(Boolean) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_DisplayPurchasableItems
               (AccessoryShopController *this,bool displayShopItems,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).displayShopItems = displayShopItems;
  AccessoryShopController_ClearShop(this,(MethodInfo *)0x0);
  if (displayShopItems == 0) {
    AccessoryShopController_DisplayOwnedItems(this,(MethodInfo *)0x0);
  }
  else {
    AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).tabs;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                       (this->fields).selectedTab,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      key = (this->fields).startingCategory;
      (this->fields).selectedTab = key;
    }
    else {
      key = (this->fields).selectedTab;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).tabs;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (this_01,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                          );
      if (this_02 != (TerrainUtility_TerrainMap *)0x0) {
        TabState::TabState_SetPage((TabState *)this_02,1,(MethodInfo *)0x0);
        AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[AccessoryDataClient] GetAccessoryDataFromCategoryType(AccessoryCategoryClient) */

List_1_AccessoryDataClient_ *
Assembly-CSharp.dll::AccessoryShopController::
AccessoryShopController_GetAccessoryDataFromCategoryType
          (AccessoryShopController *this,AccessoryCategoryClient__Enum category,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  _Stack_c.genericMethod = (Il2CppGenericMethod *)&DAT_?;
  IStack_2.rgctxDataDummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->rgctxDataDummy = &IStack_2;
  pIStack_3 = (Il2CppClass *)&stack0xffffff84;
  pIVar4 = (Il2CppClass *)&stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  auStack_5._16_4_ = (Object *)0x0;
  KStack_6.key = 0;
  KStack_6.value = 0;
  auStack_5._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_5._4_4_ = (MonitorData *)0x0;
  auStack_5._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_5._12_4_ = 0.0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  func_?();
  _Stack_18.dummy = &stack0xffffff84;
  pIStack_3 = (Il2CppClass *)&stack0xffffff84;
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (_Stack_18.dummy = &stack0xffffff84, pIStack_3 = (Il2CppClass *)&stack0xffffff84,
     (TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    _Stack_18.dummy = &stack0xffffff84;
    pIStack_3 = (Il2CppClass *)&stack0xffffff84;
    func_?(TypeInfo__AccessoryDataManager);
  }
  this_01 = AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap((MethodInfo *)0x0);
  if (category == AccessoryCategoryClient__Enum_Bundles) {
    _Stack_18.dummy = (void *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)_Stack_18.typeHandle,
               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar8 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0)
    ;
    if (pAVar8 != (AccessoryBundleClient *)0x0) {
      this_00 = (pAVar8->fields)._.accessoryBundleItems;
      iVar9 = 0;
      if (this_00 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
        for (; pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   this_00,
                                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                                  ), iVar9 < (int)pOVar10; iVar9 = iVar9 + 1) {
          pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,iVar9
                              ,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                             );
          if (pIVar11 == (IEventSystemHandler *)0x0) goto code_?;
          id = pIVar11[1].monitor;
          if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
            func_?();
          }
          item_01 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                              ((int32_t)id,(MethodInfo *)0x0);
          if ((item_01 != (AccessoryDataClient *)0x0) && ((item_01->fields)._.owns == 0)) {
            if (_Stack_18.dummy == (Vector4__Array *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)_Stack_18.typeHandle,(UIPushOption__Enum)item_01,
                       MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                      );
          }
        }
        if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache4 ==
            (Func_2_AccessoryDataClient_Int32_ *)0x0) {
          pUVar12 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar12,(Object *)0x0,
                     MethodInfo__AccessoryShopController___GetAccessoryDataFromCategoryType_m__6_AccessoryDataClient_
                     ,
                     MethodInfo__System__Func<AccessoryDataClient,_int>__Func_System__Object__void__
                    );
          TypeInfo__AccessoryShopController->static_fields->__f__am_cache4 =
               (Func_2_AccessoryDataClient_Int32_ *)pUVar12;
        }
        keySelector = (Dictionary_2_WinningConditionType_System_Object_ *)
                      TypeInfo__AccessoryShopController->static_fields->__f__am_cache4;
        this_02 = _Stack_18;
        goto code_?;
      }
    }
  }
  else if (category == AccessoryCategoryClient__Enum_Featured) {
    this_02.dummy = (void *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_02.typeHandle,
               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    _Stack_1c.dummy = this_02.dummy;
    if (this_01 != (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)0x0) {
      pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )&stack0xffffff90,
                          (Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                         );
      auStack_5._0_4_ = pDVar13->dictionary;
      auStack_5._4_4_ = pDVar13->next;
      auStack_5._8_4_ = pDVar13->stamp;
      auStack_5._12_4_ = (pDVar13->current).key;
      auStack_5._16_4_ = (pDVar13->current).value;
      pIStack_1 = (Il2CppClass *)0x0;
      while (cVar14 = func_?(), cVar14 != '\0') {
        KStack_6 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_5,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Current__
                              );
        iVar9 = 0;
        while( true ) {
          pCVar15 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
          if (pCVar15 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
          goto code_?;
          pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (pCVar15,
                              MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                             );
          if ((int)pOVar10 <= iVar9) break;
          pLVar16 = (LevelRewardsManager__Class *)&KStack_6;
          pLVar17 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)func_?();
          if ((pLVar17 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
             (pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 (pLVar17,iVar9,
                                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                                 ), pIVar11 == (IEventSystemHandler *)0x0)) goto code_?;
          if ((*(char *)((int)&pIVar11[2].klass + 2) != '\0') && (*(char *)&pIVar11[6].klass == '\0'))
          {
            if (this_02.dummy == (Vector4__Array *)0x0) goto code_?;
            item._4_4_ = 
            MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Contains_AccessoryDataClient_
            ;
            item.rgba = (int32_t)pIVar11;
            bVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                    List_1_UnityEngine_Color32__Contains
                              ((List_1_UnityEngine_Color32_ *)this_02.typeHandle,item,
                               (MethodInfo *)pLVar16);
            if (bVar18 == 0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)this_02.typeHandle,(UIPushOption__Enum)pIVar11,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                        );
            }
          }
          iVar9 = iVar9 + 1;
        }
      }
      ((_Stack_18.type)->data).__klassIndex = 0x145;
      pIStack_1 = (Il2CppClass *)0xffffffff;
      func_?();
      if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache5 ==
          (Func_2_AccessoryDataClient_Int32_ *)0x0) {
        pUVar12 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar12,(Object *)0x0,
                   MethodInfo__AccessoryShopController___GetAccessoryDataFromCategoryType_m__7_AccessoryDataClient_
                   ,MethodInfo__System__Func<AccessoryDataClient,_int>__Func_System__Object__void__)
        ;
        TypeInfo__AccessoryShopController->static_fields->__f__am_cache5 =
             (Func_2_AccessoryDataClient_Int32_ *)pUVar12;
      }
      keySelector = (Dictionary_2_WinningConditionType_System_Object_ *)
                    TypeInfo__AccessoryShopController->static_fields->__f__am_cache5;
      goto code_?;
    }
  }
  else if (category == AccessoryCategoryClient__Enum_LevelUnlocks) {
    this_02.dummy = (void *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_02.typeHandle,
               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    _Stack_1c.dummy = this_02.dummy;
    if (this_01 != (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                 &stack0xffffff90,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                );
      pIStack_1 = (Il2CppClass *)0x2;
      while (cVar14 = func_?(), cVar14 != '\0') {
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)&stack0xffffffa4,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Current__
                              );
        iVar9 = 0;
        while( true ) {
          pCVar15 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
          if (pCVar15 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
          goto code_?;
          pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (pCVar15,
                              MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                             );
          if ((int)pOVar10 <= iVar9) break;
          pLVar16 = (LevelRewardsManager__Class *)&KStack_7;
          pLVar17 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)func_?();
          if ((pLVar17 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
             (pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 (pLVar17,iVar9,
                                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                                 ), pIVar11 == (IEventSystemHandler *)0x0)) goto code_?;
          if (((99 < (int)pIVar11[3].klass) || (pIVar11[2].monitor == (MonitorData *)0x0)) &&
             (pIVar11[3].monitor != (MonitorData *)0x0)) {
            if (this_02.dummy == (Vector4__Array *)0x0) goto code_?;
            item_00._4_4_ =
                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Contains_AccessoryDataClient_
            ;
            item_00.rgba = (int32_t)pIVar11;
            bVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                    List_1_UnityEngine_Color32__Contains
                              ((List_1_UnityEngine_Color32_ *)this_02.typeHandle,item_00,
                               (MethodInfo *)pLVar16);
            if (bVar18 == 0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)this_02.typeHandle,(UIPushOption__Enum)pIVar11,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                        );
            }
          }
          iVar9 = iVar9 + 1;
        }
      }
      ((_Stack_18.type)->data).__klassIndex = 0x21d;
      pIStack_1 = (Il2CppClass *)0xffffffff;
      func_?();
      if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache6 ==
          (Func_2_AccessoryDataClient_Int32_ *)0x0) {
        pUVar12 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar12,(Object *)0x0,
                   MethodInfo__AccessoryShopController___GetAccessoryDataFromCategoryType_m__8_AccessoryDataClient_
                   ,MethodInfo__System__Func<AccessoryDataClient,_int>__Func_System__Object__void__)
        ;
        TypeInfo__AccessoryShopController->static_fields->__f__am_cache6 =
             (Func_2_AccessoryDataClient_Int32_ *)pUVar12;
      }
      keySelector = (Dictionary_2_WinningConditionType_System_Object_ *)
                    TypeInfo__AccessoryShopController->static_fields->__f__am_cache6;
code_?:
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                         ((IOrderedEnumerable_1_System_Object_ *)this_02.typeHandle,
                          (Func_2_Object_Int64_ *)keySelector,
                          System__Linq__IOrderedEnumerable<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__OrderBy<AccessoryDataClient,_int>_System__Collections__Generic__IEnumerable<AccessoryDataClient>__System__Func<AccessoryDataClient,_int>_
                         );
      pLVar19 = (List_1_AccessoryDataClient_ *)
                System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                          ((IEnumerable_1_UseInteractor_ *)source,
                           System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
                          );
      *unaff_FS_OFFSET = IStack_2;
      return pLVar19;
    }
  }
  else {
    category_00 = (this->fields).selectedTab;
    if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
      func_?();
    }
    this_02.typeHandle =
         (Il2CppMetadataTypeHandle)
         AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
                   (category_00,(MethodInfo *)0x0);
    if (this_02.dummy != (Vector4__Array *)0x0) {
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          this_02.typeHandle,
                          MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                         );
      while (pOVar10 = (Object *)((int)&pOVar10[-1].monitor + 3), -1 < (int)pOVar10) {
        this_03 = (AccessoryData *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                             this_02.typeHandle,(int32_t)pOVar10,
                             MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                            );
        if (this_03 == (AccessoryData *)0x0) goto code_?;
        iVar20 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                 AccessoryData_get_DiscountedPrice(this_03,(MethodInfo *)0x0);
        if (iVar20 == 0) {
          pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                              this_02.typeHandle,(int32_t)pOVar10,
                              MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                             );
          if (pIVar11 == (IEventSystemHandler *)0x0) goto code_?;
          if (*(char *)&pIVar11[6].klass == '\0') {
            mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                      ((List_1_MVPlayer_ *)this_02.typeHandle,(int32_t)pOVar10,
                       MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                      );
          }
        }
      }
      if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache7 ==
          (Func_2_AccessoryDataClient_Int32_ *)0x0) {
        pUVar12 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar12,(Object *)0x0,
                   MethodInfo__AccessoryShopController___GetAccessoryDataFromCategoryType_m__9_AccessoryDataClient_
                   ,MethodInfo__System__Func<AccessoryDataClient,_int>__Func_System__Object__void__)
        ;
        TypeInfo__AccessoryShopController->static_fields->__f__am_cache7 =
             (Func_2_AccessoryDataClient_Int32_ *)pUVar12;
      }
      keySelector = (Dictionary_2_WinningConditionType_System_Object_ *)
                    TypeInfo__AccessoryShopController->static_fields->__f__am_cache7;
      goto code_?;
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  pLVar19 = (List_1_AccessoryDataClient_ *)(*pcVar21)();
  return pLVar19;
}


/* Int32 GetOwnedAmount(List`1[AccessoryDataClient]) */

int32_t Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_GetOwnedAmount
                  (AccessoryShopController *this,List_1_AccessoryDataClient_ *accessoryList,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  iVar2 = 0;
  if (accessoryList != (List_1_AccessoryDataClient_ *)0x0) {
    while( true ) {
      iVar3 = iVar2;
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)accessoryList,
                          MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                         );
      if ((int)pOVar4 <= iStack_1) {
        return iVar3;
      }
      pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)accessoryList,
                          iStack_1,
                          MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                         );
      if (pIVar5 == (IEventSystemHandler *)0x0) break;
      iStack_1 = iStack_1 + 1;
      iVar2 = iVar3 + 1;
      if (*(char *)&pIVar5[6].klass == '\0') {
        iVar2 = iVar3;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void InventoryChanged() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_InventoryChanged
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache2 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AccessoryShopController___InventoryChanged_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__AccessoryShopController->static_fields->__f__am_cache2 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AccessoryShopController->static_fields->__f__am_cache2;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  AccessoryShopController_Activate(this,(this->fields).currentlyPushOption,(MethodInfo *)0x0);
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_OnPop
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 != (UnityAction *)0x0) {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar1;
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache3 ==
      (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__AccessoryShopController___OnPop_m__4_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>__EventFunction_System__Object__void__
              );
    TypeInfo__AccessoryShopController->static_fields->__f__am_cache3 =
         (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AccessoryShopController->static_fields->__f__am_cache3;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar4,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
            );
  pTVar5 = (this->fields).previewItemsRoot;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    pTVar5 = (this->fields).previewItemsRoot;
    if (pTVar5 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar4,(MethodInfo *)0x0);
  }
  (this->fields).previewItemsRoot = (Transform *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  AccessoryShopController_SetAccessoriesToSelectable(this,0,(MethodInfo *)0x0);
  return;
}


/* IEnumerator OpenAccessoryViewDelayed() */

IEnumerator *
Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_OpenAccessoryViewDelayed
          (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OpenInventoryAtItem(UIPushOption, AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_OpenInventoryAtItem
               (AccessoryShopController *this,UIPushOption__Enum pushOption,
               AccessoryDataClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).accessoryDataToShow = accessoryData;
  (this->fields).pushOption = pushOption;
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar2 != (UnityAction *)0x0) {
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar2;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar1;
  AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_PageTurned
               (AccessoryShopController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).tabs;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,(this->fields).selectedTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TerrainUtility_TerrainMap *)0x0) {
      bVar1 = TabState::TabState_UpdatePage((TabState *)this_01,dir,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReadyCallback() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_ReadyCallback
               (AccessoryShopController *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MethodInfo *)0x0;
  func_?();
  (this->fields).selectedTab = (this->fields).startingCategory;
  if ((this->fields).firstTimeSetup != 0) {
    AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
    (this->fields).firstTimeSetup = 0;
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar3,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar4 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)0x0;
  if (pUVar4 == (UnityAction *)0x0) {
code_?:
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__AccessoryShopController___ReadyCallback_m__0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>__EventFunction_System__Object__void__
                );
      TypeInfo__AccessoryShopController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)pUVar3;
    }
    pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AccessoryShopController->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar5,(BaseEventData *)0x0,pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
              );
    (this->fields).currentlyPushOption = (this->fields).pushOption;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    pIVar7 = (this->fields).inventoryControllerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar7 = (InventoryController *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)pIVar7,
                         InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                        );
    (this->fields).inventoryController = pIVar7;
    if (pIVar7 != (InventoryController *)0x0) {
      pUVar8 = (pIVar7->fields).OnPageTurned;
      pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__AccessoryShopController__PageTurned_int_,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                );
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar8,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pDVar11 = (Delegate *)0x0;
      if (pDVar10 != (Delegate *)0x0) {
        if ((UnityAction_1_System_Int32___Class *)pDVar10->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<int>) {
          pDVar11 = pDVar10;
        }
        if (pDVar11 == (Delegate *)0x0) goto code_?;
      }
      *(Delegate **)&(pUVar9->_0).this_arg.attrs = pDVar11;
      pIVar7 = (this->fields).inventoryController;
      if (pIVar7 != (InventoryController *)0x0) {
        pUVar8 = (pIVar7->fields).OnTabSelected;
        pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__AccessoryShopController__TabSelected_int_,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                  );
        pIVar12 = (Il2CppClass *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar8,(Delegate *)pUVar3,(MethodInfo *)0x0);
        pIVar13 = (Il2CppClass *)0x0;
        if (pIVar12 != (Il2CppClass *)0x0) {
          if ((UnityAction_1_System_Int32___Class *)pIVar12->image ==
              TypeInfo__UnityEngine__Events__UnityAction<int>) {
            pIVar13 = pIVar12;
          }
          if (pIVar13 == (Il2CppClass *)0x0) goto code_?;
        }
        (pUVar9->_0).element_class = pIVar13;
        pIVar7 = (this->fields).inventoryController;
        if (pIVar7 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Initialize
                    (pIVar7,(this->fields).numberOfSlotsPrPage,pMVar1);
          (this->fields).displayShopItems = 1;
          AccessoryShopController_ClearShop(this,(MethodInfo *)0x0);
          AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
          pDVar14 = (this->fields).tabs;
          if (pDVar14 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
            __return_storage_ptr__ =
                 (Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                 &stack0xffffffb0;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
            Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                      (__return_storage_ptr__,
                       (Dictionary_2_WinningConditionType_System_Object_ *)pDVar14,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                      );
            while (cVar15 = func_?(), cVar15 != '\0') {
              LevelRewardsManager::LevelRewardsManager_get_NextReward
                        ((LevelRewardsManager *)&stack0xffffffc4,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                        );
              pIVar7 = (this->fields).inventoryController;
              func_?();
              iVar16 = func_?();
              if ((iVar16 == 0) || (pIVar7 == (InventoryController *)0x0)) goto code_?;
              __return_storage_ptr__ =
                   *(Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ **)
                    (iVar16 + 0xc);
              InventoryController::InventoryController_AddTab
                        (pIVar7,0,(String *)__return_storage_ptr__,(MethodInfo *)0x0);
            }
            __return_storage_ptr__->dictionary =
                 (Dictionary_2_WinningConditionType_System_Object_ *)0x15a;
            func_?();
            pMVar1 = (MethodInfo *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            if (TypeInfo__AccessoryShopController->static_fields->__f__am_cache1 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              pMVar1 = (MethodInfo *)0x0;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)0x0,
                         MethodInfo__AccessoryShopController___ReadyCallback_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__AccessoryShopController->static_fields->__f__am_cache1 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
            }
            pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                     TypeInfo__AccessoryShopController->static_fields->__f__am_cache1;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            puVar17 = &UNK_?;
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      ((GameObject *)pMVar1,(BaseEventData *)0x0,pEVar6,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__AccessoryShopController___ReadyCallback_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar5,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            AccessoryShopController_SetAccessoriesToSelectable(this,0,(MethodInfo *)0x0);
            pDVar14 = (this->fields).tabs;
            if (pDVar14 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
              bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                );
              if ((bVar18 == 0) || ((this->fields).startingCategory == 0xfe)) {
                pIVar7 = (this->fields).inventoryController;
                pSVar19 = LocalizedEnums::LocalizedEnums___3
                                    ((this->fields).selectedTab,(MethodInfo *)0x0);
                if (pIVar7 != (InventoryController *)0x0) {
                  InventoryController::InventoryController_SetHeaderText
                            (pIVar7,pSVar19,(MethodInfo *)0x0);
                  AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = puVar17;
                  return;
                }
              }
              else {
                (this->fields).selectedTab = 0xff;
                bVar18 = (this->fields).displayShopItems;
                AccessoryShopController_DisplayPurchasableItems(this,1,(MethodInfo *)0x0);
                (this->fields).displayShopItems = bVar18;
                pIVar7 = (this->fields).inventoryController;
                pSVar19 = LocalizedEnums::LocalizedEnums___3
                                    (AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
                if (pIVar7 != (InventoryController *)0x0) {
                  InventoryController::InventoryController_SetHeaderText(pIVar7,pSVar19,pMVar1);
                  *unaff_FS_OFFSET = pSVar19;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar4;
    }
    if (pUVar2 != (UnityAction *)0x0) goto code_?;
    func_?();
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void ReadyCallbackAccessoryView() */

void Assembly-CSharp.dll::AccessoryShopController::
     AccessoryShopController_ReadyCallbackAccessoryView
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar2 != (UnityAction *)0x0) {
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar2;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar1;
  AccessoryShopController_ReadyCallback(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_c__Iterator0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_01,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RefreshItems() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_RefreshItems
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).tabs;
  if (pDVar1 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(this->fields).selectedTab
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      AccessoryShopController_TabSelected(this,(this->fields).startingCategory,(MethodInfo *)0x0);
    }
    pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).tabs;
    if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      pTVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (pDVar3,(this->fields).selectedTab,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                         );
      if (pTVar4 != (TerrainUtility_TerrainMap *)0x0) {
        page = (pTVar4->fields).m_errorCode;
        AccessoryShopController_ClearShop(this,(MethodInfo *)0x0);
        if ((this->fields).displayShopItems == 0) {
          AccessoryShopController_DisplayOwnedItems(this,(MethodInfo *)0x0);
        }
        else {
          AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
        }
        pDVar1 = (this->fields).tabs;
        if (pDVar1 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                             (this->fields).selectedTab,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                            );
          if (bVar2 == 0) {
            AccessoryShopController_TabSelected
                      (this,(this->fields).startingCategory,(MethodInfo *)0x0);
          }
          pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).tabs;
          if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            pTVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (pDVar3,(this->fields).selectedTab,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                               );
            if (pTVar4 != (TerrainUtility_TerrainMap *)0x0) {
              TabState::TabState_SetPage((TabState *)pTVar4,page,(MethodInfo *)0x0);
              AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetAfterBundlePurchase() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_ResetAfterBundlePurchase
               (AccessoryShopController *this,MethodInfo *method)

{
  (this->fields).startingCategory = 1;
  AccessoryShopController_TabSelected(this,1,(MethodInfo *)0x0);
  return;
}


/* Void SetAccessoriesToSelectable(Boolean) */

void Assembly-CSharp.dll::AccessoryShopController::
     AccessoryShopController_SetAccessoriesToSelectable
               (AccessoryShopController *this,bool selectable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryShopController___SetAccessoriesToSelectable_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)0x0;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_CharacterEditor) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_00,
                 MethodInfo__AccessoryShopController___SetAccessoriesToSelectable_c__AnonStorey1____m__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar2,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                );
      pMVar3 = (this_00->fields)._._._._.m_CachedPtr;
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_01 == (MVLocalPlayer *)0x0) goto code_?;
      pMVar3 = MVLocalPlayer::MVLocalPlayer_get_Body(this_01,(MethodInfo *)0x0);
      (this_00->fields)._._._._.m_CachedPtr = pMVar3;
    }
    if (pMVar3 != (MVBody *)0x0) {
      iVar4 = *(int *)(_selectable + 0xe8);
      if (iVar4 == 0) {
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack6 = 0;
      uVar7 = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0xfffffff4;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      func_?();
      *(undefined1 *)(iVar4 + 8) = 0;
      if ((*(Component_1 **)(iVar4 + 0x18) != (Component_1 *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (*(Component_1 **)(iVar4 + 0x18),(MethodInfo *)0x0),
         pGVar2 != (GameObject *)0x0)) {
        pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_20
                           (pGVar2,1,
                            SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                           );
        uVar9 = 0;
        if (pCVar8 != (CFX_LightIntensityFade__Array *)0x0) {
          ppCVar10 = pCVar8->vector;
          while( true ) {
            if ((int)pCVar8->max_length <= (int)uVar9) {
              *unaff_FS_OFFSET = uVar7;
              return;
            }
            if (pCVar8->max_length <= uVar9) break;
            if (*ppCVar10 == (CFX_LightIntensityFade *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)*ppCVar10,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar2,(MethodInfo *)0x0);
            uVar9 = uVar9 + 1;
            ppCVar10 = ppCVar10 + 1;
          }
          uVar7 = func_?(0);
          func_?(uVar7);
        }
      }
code_?:
      func_?(0);
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Setup() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Setup
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                     (this,AccessoryCategoryClient__Enum_Hats,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                       );
    AccessoryShopController_CreateAndAddTab
              (this,AccessoryCategoryClient__Enum_Hats,(int32_t)pOVar2,(MethodInfo *)0x0);
    pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                       (this,AccessoryCategoryClient__Enum_Particles,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                         );
      AccessoryShopController_CreateAndAddTab
                (this,AccessoryCategoryClient__Enum_Particles,(int32_t)pOVar2,(MethodInfo *)0x0);
      pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                         (this,AccessoryCategoryClient__Enum_BackAccessories,(MethodInfo *)0x0);
      if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                           );
        AccessoryShopController_CreateAndAddTab
                  (this,AccessoryCategoryClient__Enum_BackAccessories,(int32_t)pOVar2,
                   (MethodInfo *)0x0);
        AccessoryShopController_AddDynamicTab
                  (this,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
        AccessoryShopController_AddDynamicTab
                  (this,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
        pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                           (this,AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                             );
          AccessoryShopController_CreateAndAddTab
                    (this,AccessoryCategoryClient__Enum_LevelUnlocks,(int32_t)pOVar2,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_TabSelected
               (AccessoryShopController *this,int32_t tabId,MethodInfo *method)

{
  (this->fields).selectedTab = tabId;
  if ((tabId == 0xff) || (tabId == 0xfe)) {
    bVar1 = (this->fields).displayShopItems;
    AccessoryShopController_DisplayPurchasableItems(this,1,(MethodInfo *)0x0);
    (this->fields).displayShopItems = bVar1;
  }
  else {
    AccessoryShopController_DisplayPurchasableItems
              (this,(this->fields).displayShopItems,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).inventoryController;
  category = LocalizedEnums::LocalizedEnums___3(tabId,(MethodInfo *)0x0);
  if (this_00 != (InventoryController *)0x0) {
    InventoryController::InventoryController_SetHeaderText(this_00,category,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_UpdateContent
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewItemsRoot;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewItemsRoot;
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
            (pGVar3,StringLiteral_Preview_Root___AccessoryShopCont,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    (this->fields).previewItemsRoot = pTVar1;
    pIVar4 = (this->fields).inventoryController;
    if (pIVar4 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Clear(pIVar4,(MethodInfo *)0x0);
      this_00 = (this->fields).tabs;
      if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          iVar5 = (this->fields).startingCategory;
          (this->fields).selectedTab = iVar5;
        }
        else {
          iVar5 = (this->fields).selectedTab;
        }
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).tabs;
        if (this_01 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (this_01,iVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          iVar5 = (this->fields).selectedTab;
          pIVar4 = (this->fields).inventoryController;
          if (this_02 != (TerrainUtility_TerrainMap *)0x0) {
            currentPage = (this_02->fields).m_errorCode;
            maxPages = TabState::TabState_get_MaxPages((TabState *)this_02,(MethodInfo *)0x0);
            if (pIVar4 != (InventoryController *)0x0) {
              InventoryController::InventoryController_SelectTab
                        (pIVar4,iVar5,currentPage,maxPages,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              if (MVar6 == MVGameMode__Enum_CharacterEditor) {
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(
                                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                            );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_04,(Object *)this,
                           MethodInfo__AccessoryShopController___UpdateContent_m__5_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          (pGVar3,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_04,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                          );
                return;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                  ((MethodInfo *)0x0);
              if (this_03 != (MVLocalPlayer *)0x0) {
                avatarBody = MVLocalPlayer::MVLocalPlayer_get_Body(this_03,(MethodInfo *)0x0);
                AccessoryShopController_UpdateContentWithBody(this,avatarBody,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateContentWithBody(MVBody) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_UpdateContentWithBody
               (AccessoryShopController *this,MVBody *avatarBody,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (List_1_MVPlayer_ *)
            AccessoryShopController_GetAccessoryDataFromCategoryType
                      (this,(this->fields).selectedTab,(MethodInfo *)0x0);
  if ((this->fields).displayShopItems == 0) {
    if (this_01 == (List_1_MVPlayer_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                        MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                       );
    while (pOVar2 = (Object *)((int)&pOVar2[-1].monitor + 3), -1 < (int)pOVar2) {
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                          (int32_t)pOVar2,
                          MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                         );
      if (pIVar3 == (IEventSystemHandler *)0x0) goto code_?;
      if (*(char *)&pIVar3[6].klass == '\0') {
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_01,(int32_t)pOVar2,
                   MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                  );
      }
    }
  }
  pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).tabs;
  if (((pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) &&
      (pTVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar4,(this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                          ), pTVar5 != (TerrainUtility_TerrainMap *)0x0)) &&
     (pIVar6 = TabState::TabState_get_SlotRange((TabState *)pTVar5,(MethodInfo *)0x0),
     pIVar6 != (Int32__Array *)0x0)) {
    if (pIVar6->max_length == 0) {
code_?:
      uVar7 = func_?(0,0);
      func_?(uVar7);
    }
    else {
      this = (AccessoryShopController *)pIVar6->vector[0];
      pAStack_8 = this;
      if (this_01 != (List_1_MVPlayer_ *)0x0) {
        do {
          while( true ) {
            index = pAStack_8;
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                                MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                               );
            if ((int)pOVar2 <= (int)pAStack_8) {
              return;
            }
            this_02 = (AccessoryData *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                                 (int32_t)pAStack_8,
                                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                                );
            pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(pAVar1->fields).tabs;
            if (((pDVar4 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                             *)0x0) ||
                (pTVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (pDVar4,(pAVar1->fields).selectedTab,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                    ), pTVar5 == (TerrainUtility_TerrainMap *)0x0)) ||
               (pIVar6 = TabState::TabState_get_SlotRange((TabState *)pTVar5,(MethodInfo *)0x0),
               pIVar6 == (Int32__Array *)0x0)) goto code_?;
            if (pIVar6->max_length < 2) goto code_?;
            if ((int)this < pIVar6->vector[1]) break;
code_?:
            pAStack_8 = (AccessoryShopController *)((int)&index->klass + 1);
          }
          if (this_02 == (AccessoryData *)0x0) break;
          bVar9 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                  AccessoryData_GetShowInShop(this_02,(MethodInfo *)0x0);
          if ((bVar9 == 0) && ((this_02->fields).owns == 0)) goto code_?;
          pAVar10 = (pAVar1->fields).accessoryInventoryItemPrefab;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          pAVar10 = (AccessoryInventoryViewItem *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             ((XpBoostParticlePreviewer *)pAVar10,
                              AccessoryInventoryViewItem_MethodInfo__UnityEngine__Object__Instantiate<AccessoryInventoryViewItem>_AccessoryInventoryViewItem_
                             );
          this_00 = (pAVar1->fields).inventoryController;
          if ((pAVar10 == (AccessoryInventoryViewItem *)0x0) ||
             (item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pAVar10,(MethodInfo *)0x0),
             this_00 == (InventoryController *)0x0)) break;
          InventoryController::InventoryController_AddObject
                    (this_00,item,(int)this % (pAVar1->fields).numberOfSlotsPrPage,(MethodInfo *)0x0
                    );
          accessoryDataClient =
               (AccessoryDataClient *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                          (int32_t)index,
                          MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                         );
          AccessoryInventoryViewItem::AccessoryInventoryViewItem_Initialize
                    (pAVar10,accessoryDataClient,(pAVar1->fields).previewItemsRoot,avatarBody,
                     (pAVar1->fields).selectedTab == 0xfe,(MethodInfo *)0x0);
          this = (AccessoryShopController *)((int)&this->klass + 1);
          pAStack_8 = (AccessoryShopController *)((int)&index->klass + 1);
        } while( true );
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <Attach>m__A(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__Attach_m__A
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <AttacherFinished>m__B(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__AttacherFinished_m__B
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <AttacherFinished>m__C(IAccessoryChanged, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__AttacherFinished_m__C
               (IAccessoryChanged *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryChanged *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IAccessoryChanged,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 <GetAccessoryDataFromCategoryType>m__8(AccessoryDataClient) */

int32_t Assembly-CSharp.dll::AccessoryShopController::
        AccessoryShopController__GetAccessoryDataFromCategoryType_m__8
                  (AccessoryDataClient *o,MethodInfo *method)

{
  if (o != (AccessoryDataClient *)0x0) {
    return (o->fields)._.lvl;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Int32 <GetAccessoryDataFromCategoryType>m__9(AccessoryDataClient) */

int32_t Assembly-CSharp.dll::AccessoryShopController::
        AccessoryShopController__GetAccessoryDataFromCategoryType_m__9
                  (AccessoryDataClient *o,MethodInfo *method)

{
  if (o != (AccessoryDataClient *)0x0) {
    iVar1 = (o->fields)._.cost;
    return iVar1 - ((o->fields)._.dsc * iVar1) / 100;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void <InventoryChanged>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__InventoryChanged_m__3
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPop>m__4(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__OnPop_m__4
               (IEditStateCommands *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    func_?(0,TypeInfo__IEditStateCommands,x,0x34);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ReadyCallback>m__0(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__ReadyCallback_m__0
               (IEditStateCommands *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    func_?(0,TypeInfo__IEditStateCommands,x,0x36);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ReadyCallback>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__ReadyCallback_m__1
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


/* Void <ReadyCallback>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__ReadyCallback_m__2
               (AccessoryShopController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inventoryController;
  if (this_00 != (InventoryController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    iVar2 = (this->fields).pushOption;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__AccessoryShopController__OnPop__,(MethodInfo *)0x0
              );
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,iVar2,this_01,4);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <UpdateContent>m__5(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__UpdateContent_m__5
               (AccessoryShopController *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController__UpdateContentWithBody_MVBody_,
             MethodInfo__System__Action<MVBody>__Action_System__Object__void__);
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AccessoryShopController() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__ctor
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_TabState_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  (this->fields).tabs = this_00;
  method_00 = TypeInfo__AccessoryAttacher;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  (this->fields).accessoryAttacher = (AccessoryAttacher *)this_01;
  (this->fields).attachingReady = 1;
  (this->fields).startingCategory = 1;
  (this->fields).displayShopItems = 1;
  (this->fields).firstTimeSetup = 1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

