
/* Void Initialize(Int32, MVBody) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_Initialize
               (SellAvatarController *this,int32_t woID,MVBody *currentBody,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (PrefabPool *)0x0) {
    this_03 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab(this_02,(MethodInfo *)0x0);
    if (this_03 != (ObjectPrefab *)0x0) {
      pMVar2 = (MvAvatarMetaData *)0x0;
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_TryGetValue
                ((MvAvatarMetaDataWoMap *)this_03,woID,(MvAvatarMetaData **)&stack0xfffffff8,
                 (MethodInfo *)0x0);
      (this->fields).body = currentBody;
      (this->fields).woID = woID;
      pTVar3 = (this->fields).sellButtonText;
      (this->fields).metaData = pMVar2;
      if (pMVar2 != (MvAvatarMetaData *)0x0) {
        if ((pMVar2->fields).isOnMarketPlace == 0) {
          this = (SellAvatarController *)StringLiteral_Sell;
        }
        else {
          this = (SellAvatarController *)StringLiteral_Update;
        }
        TM::TM__((String *)this,(MethodInfo *)0x0);
        if (pTVar3 != (Text *)0x0) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)();
          this_00 = (pSVar1->fields).removeButton;
          if (this_00 != (Button *)0x0) {
            this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this_00,(MethodInfo *)0x0);
            if ((pMVar2 != (MvAvatarMetaData *)0x0) && (this_04 != (GameObject *)0x0)) {
              value = (pMVar2->fields).isOnMarketPlace;
              pMVar2 = (MvAvatarMetaData *)(uint)value;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_04,value,(MethodInfo *)0x0);
              if ((pMVar2 != (MvAvatarMetaData *)0x0) &&
                 (this_01 = (pSVar1->fields).nameField, this_01 != (InputField *)0x0)) {
                UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                          (this_01,(pMVar2->fields).name,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsSelectedBodyValid() */

bool Assembly-CSharp.dll::SellAvatarController::SellAvatarController_IsSelectedBodyValid
               (SellAvatarController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).metaData;
  if (pMVar1 != (MvAvatarMetaData *)0x0) {
    return (pMVar1->fields).canBeSoldOnMarketPlace;
  }
  return 0;
}


/* Void OnAddToMarketplace(Boolean) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnAddToMarketplace
               (SellAvatarController *this,bool added,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SellAvatarController___OnAddToMarketplace_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMStack_1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMStack_1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMStack_1->fields).OnMarketPlaceActionComplete;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__SellAvatarController__OnAddToMarketplace_bool_,
               (MethodInfo *)0x0);
    pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar4 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      if (pMVar4->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar2 = pMVar4;
      }
      if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        func_?(pMVar4,TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
        goto code_?;
      }
    }
    (pMStack_1->fields).OnMarketPlaceActionComplete = pMVar2;
    pMStack_1 = (MVNetworkGame *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SellAvatarController->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__SellAvatarController___OnAddToMarketplace_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__SellAvatarController->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
    }
    pEVar5 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__SellAvatarController->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)pMStack_1,(BaseEventData *)0x0,pEVar5,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (added == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_02 != (MVNetworkGame *)0x0) &&
         (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
         this_03 != (MVLocalPlayer *)0x0)) {
        pOVar6 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)this_03,(MethodInfo *)0x0);
        pPVar7 = (PrefabPool *)
                 MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pPVar7 != (PrefabPool *)0x0) {
          pVVar8 = PrefabPool::PrefabPool_get_MVJetPackPrefab(pPVar7,(MethodInfo *)0x0);
          if ((int)pOVar6 < (int)pVVar8) {
            pSVar9 = TM::TM__(StringLiteral_You_need_to_be_level__0__to_plac,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pPVar7 = (PrefabPool *)
                     MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pPVar7 != (PrefabPool *)0x0) {
              pMStack_1 = (MVNetworkGame *)
                          PrefabPool::PrefabPool_get_MVJetPackPrefab(pPVar7,(MethodInfo *)0x0);
              pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&pMStack_1);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar9 = mscorlib.dll::System::String::String_Format
                                  (pSVar9,pOVar6,(MethodInfo *)0x0);
              if (this_01 != (ScaleAnimationBase *)0x0) {
                (this_01->fields)._._._._.m_CachedPtr = pSVar9;
code_?:
                pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                           );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar3,(Object *)this_01,
                           MethodInfo__SellAvatarController___OnAddToMarketplace_c__AnonStorey0____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          (pGVar10,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                          );
                return;
              }
            }
          }
          else {
            pMVar11 = (this->fields).metaData;
            if (pMVar11 != (MvAvatarMetaData *)0x0) {
              pSVar9 = StringLiteral_Failed_to_update_Avatar_;
              if ((pMVar11->fields).isOnMarketPlace == 0) {
                pSVar9 = StringLiteral_Failed_to_put_Avatar_in_your_sho;
              }
              pSVar9 = TM::TM__(pSVar9,(MethodInfo *)0x0);
              if (this_01 != (ScaleAnimationBase *)0x0) {
                (this_01->fields)._._._._.m_CachedPtr = pSVar9;
                goto code_?;
              }
            }
          }
        }
      }
    }
    else {
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__SellAvatarController->static_fields->__f__am_cache2 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__SellAvatarController___OnAddToMarketplace_m__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__SellAvatarController->static_fields->__f__am_cache2 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      pEVar5 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__SellAvatarController->static_fields->__f__am_cache2;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar10,(BaseEventData *)0x0,pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      pMVar11 = (this->fields).metaData;
      if (pMVar11 != (MvAvatarMetaData *)0x0) {
        pSVar9 = StringLiteral_Avatar_updated_in_your_shop_;
        if ((pMVar11->fields).isOnMarketPlace == 0) {
          pSVar9 = StringLiteral_Avatar_is_now_available_in_your_;
        }
        pSVar9 = TM::TM__(pSVar9,(MethodInfo *)0x0);
        if (this_01 != (ScaleAnimationBase *)0x0) {
          (this_01->fields)._._._._.m_CachedPtr = pSVar9;
          this_00 = (this->fields).removeButton;
          if ((this_00 != (Button *)0x0) &&
             (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0),
             pGVar10 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar10,1,(MethodInfo *)0x0);
            pTVar12 = (this->fields).sellButtonText;
            pSVar9 = TM::TM__(StringLiteral_Update,(MethodInfo *)0x0);
            if (pTVar12 != (Text *)0x0) {
              (*(code *)(pTVar12->klass->vtable).set_text.method)
                        (pTVar12,pSVar9,
                         (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnImageUploaded() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnImageUploaded
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  this_00 = (this->fields).nameField;
  worldObjectId = (this->fields).woID;
  if (this_00 != (InputField *)0x0) {
    name = (String *)
           TriggerCube::TriggerCube_get_InputSignalReceiver
                     ((TriggerCube *)this_00,(MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_AddAvatarToAvatarShopInventory
                (this_01,worldObjectId,name,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnPop
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__SellAvatarController->static_fields->__f__am_cache3 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__SellAvatarController___OnPop_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__SellAvatarController->static_fields->__f__am_cache3 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__SellAvatarController->static_fields->__f__am_cache3;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void OnRemoveFromMarketplace(Boolean) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnRemoveFromMarketplace
               (SellAvatarController *this,bool added,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SellAvatarController___OnRemoveFromMarketplace_c__AnonStorey1;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_
               ,(MethodInfo *)0x0);
    pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar4 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      if (pMVar4->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar2 = pMVar4;
      }
      pMVar5 = TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate;
      if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    }
    (pMVar1->fields).OnMarketPlaceActionComplete = pMVar2;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SellAvatarController->static_fields->__f__am_cache5 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__SellAvatarController___OnRemoveFromMarketplace_m__5_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__SellAvatarController->static_fields->__f__am_cache5 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__SellAvatarController->static_fields->__f__am_cache5;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar6,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pSVar7 = TM::TM__(StringLiteral_Failed_to_remove_Avatar_from_you,(MethodInfo *)0x0);
    if (this_01 != (ScaleAnimationBase *)0x0) {
      (this_01->fields)._._._._.m_CachedPtr = pSVar7;
      if (added == 0) {
code_?:
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this_01,
                   MethodInfo__SellAvatarController___OnRemoveFromMarketplace_c__AnonStorey1____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar6,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      pSVar7 = TM::TM__(StringLiteral_Avatar_removed_from_your_shop_,(MethodInfo *)0x0);
      (this_01->fields)._._._._.m_CachedPtr = pSVar7;
      this_00 = (this->fields).removeButton;
      if (this_00 != (Button *)0x0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (pGVar6 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,0,(MethodInfo *)0x0);
          pTVar8 = (this->fields).sellButtonText;
          pSVar7 = TM::TM__(StringLiteral_Sell,(MethodInfo *)0x0);
          if (pTVar8 != (Text *)0x0) {
            (*(code *)(pTVar8->klass->vtable).set_text.method)
                      (pTVar8,pSVar7,
                       (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
  pMVar4 = extraout_ECX;
  pMVar5 = extraout_EDX;
code_?:
  func_?(pMVar4,pMVar5);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnRemovePressed() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnRemovePressed
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__SellAvatarController->static_fields->__f__am_cache4 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,
               MethodInfo__SellAvatarController___OnRemovePressed_m__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__SellAvatarController->static_fields->__f__am_cache4 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar1;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__SellAvatarController->static_fields->__f__am_cache4;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pMVar3 = (pMVar2->fields).OnMarketPlaceActionComplete;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)&UNK_?,
               MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0);
    pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)pUVar1,(MethodInfo *)0x0);
    pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar4 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      if (pMVar4->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar3 = pMVar4;
      }
      pMVar5 = TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate;
      if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    }
    (pMVar2->fields).OnMarketPlaceActionComplete = pMVar3;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_DeleteAvatarFromShopInventory
                (this_00,_UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pMVar4 = extraout_ECX;
  pMVar5 = extraout_EDX;
code_?:
  func_?(pMVar4,pMVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSellPressed() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnSellPressed
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).metaData;
  if ((pMVar1 != (MvAvatarMetaData *)0x0) && ((pMVar1->fields).canBeSoldOnMarketPlace != 0)) {
    this_00 = (this->fields).nameField;
    if (this_00 == (InputField *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    value = (String *)
            TriggerCube::TriggerCube_get_InputSignalReceiver
                      ((TriggerCube *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      this_01 = (this->fields).screenShooter;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>)
      ;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,
                 MethodInfo__SellAvatarController__ScreenShotCallback_UnityEngine__Texture2D__System__String_
                 ,
                 MethodInfo__System__Action<UnityEngine::Texture2D,_System::String>__Action_System__Object__void__
                );
      if (this_01 == (AvatarScreenShooter *)0x0) goto code_?;
      AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
                (this_01,(Action_2_UnityEngine_Texture2D_String_ *)this_02,(this->fields).body,1,
                 StringLiteral_Screenshot_taken_successfully_,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ScreenShotCallback(Texture2D, String) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_ScreenShotCallback
               (SellAvatarController *this,Texture2D *texture,String *successMessage,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__SellAvatarController__OnAddToMarketplace_bool_,
               (MethodInfo *)0x0);
    pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar4 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      if (pMVar4->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar2 = pMVar4;
      }
      pMVar5 = TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate;
      if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    }
    (pMVar1->fields).OnMarketPlaceActionComplete = pMVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SellAvatarController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__SellAvatarController___ScreenShotCallback_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__SellAvatarController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__SellAvatarController->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectId = (this->fields).woID;
    this_00 = (this->fields).nameField;
    if (this_00 != (InputField *)0x0) {
      name = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)this_00,(MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_AddAvatarToAvatarShopInventory
                  (this_01,worldObjectId,name,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pMVar4 = extraout_ECX;
  pMVar5 = extraout_EDX;
code_?:
  func_?(pMVar4,pMVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OnAddToMarketplace>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController__OnAddToMarketplace_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x20);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnAddToMarketplace>m__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController__OnAddToMarketplace_m__2
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Avatar_uploaded_to_marketplace__,(MethodInfo *)0x0);
  pSVar1 = TM::TM__(StringLiteral_Warning,(MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar6 = &(&(x->klass->vtable).CreateErrorNotificationPopup)
                   [pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,1);
code_?:
  (*(code *)*ppMVar6)(x,ppMVar6[1],pSVar1);
  return;
}


/* Void <OnPop>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController__OnPop_m__3
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


/* Void <OnRemoveFromMarketplace>m__5(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController__OnRemoveFromMarketplace_m__5
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


/* Void <OnRemovePressed>m__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController__OnRemovePressed_m__4
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


/* Void <ScreenShotCallback>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController__ScreenShotCallback_m__0
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


/* SellAvatarController() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController__ctor
               (SellAvatarController *this,MethodInfo *method)

{
  (this->fields).woID = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

