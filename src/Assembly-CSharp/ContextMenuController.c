
/* Void AddToInventory() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_AddToInventory
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache10 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__ContextMenuController___AddToInventory_m__11_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache10 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
  }
  pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__ContextMenuController->static_fields->__f__am_cache10;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache11 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__ContextMenuController___AddToInventory_m__12_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache11 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__ContextMenuController->static_fields->__f__am_cache11;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__ContextMenuController___AddToInventory_m__13_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
            );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Boolean CanClone() */

bool Assembly-CSharp.dll::ContextMenuController::ContextMenuController_CanClone
               (ContextMenuController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  this_00 = (this->fields).editorStateMachine;
  puStack_9 = &stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((this_00 == (EditorStateMachine *)0x0) ||
     (puStack_9 = &stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     this_01 = EditorStateMachine::EditorStateMachine_get_SelectedWOs(this_00,(MethodInfo *)0x0),
     this_01 == (HashSet_1_MVWorldObjectClient_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    pHVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        &stack0xffffffbc,
                        (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_01,
                        MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                       );
    CStack_7.monitor = (MonitorData *)pHVar10->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar10->stamp;
    CStack_7.fields.syncRoot = (Object *)pHVar10->current;
    uStack_1 = 0;
    do {
      CStack_7.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      cVar11 = func_?();
      if (cVar11 == '\0') {
        iVar12 = 0x66;
        goto code_?;
      }
      this_02 = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_7,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                          );
      if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
      bVar13 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (this_02,InteractionFlags__Enum_CanClone,(MethodInfo *)0x0);
    } while ((bVar13 != 0) &&
            (bVar13 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                               (this_02,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0),
            bVar13 == 0));
    iVar12 = 0x68;
code_?:
    uStack_1 = 0xffffffff;
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
    ;
    func_?();
    if (iStack_6 == 0) {
      if (iVar12 == 0x68) {
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  }
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  func_?();
  pcVar14 = (code *)swi(3);
  bVar13 = (*pcVar14)();
  return bVar13;
}


/* Boolean CanCloneRoot() */

bool Assembly-CSharp.dll::ContextMenuController::ContextMenuController_CanCloneRoot
               (ContextMenuController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  this_00 = (this->fields).editorStateMachine;
  puStack_9 = &stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((this_00 == (EditorStateMachine *)0x0) ||
     (puStack_9 = &stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     this_01 = EditorStateMachine::EditorStateMachine_get_SelectedWOs(this_00,(MethodInfo *)0x0),
     this_01 == (HashSet_1_MVWorldObjectClient_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    pHVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        &stack0xffffffbc,
                        (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_01,
                        MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                       );
    CStack_7.monitor = (MonitorData *)pHVar10->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar10->stamp;
    CStack_7.fields.syncRoot = (Object *)pHVar10->current;
    uStack_1 = 0;
    do {
      CStack_7.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      cVar11 = func_?();
      if (cVar11 == '\0') {
        iVar12 = 0x66;
        goto code_?;
      }
      this_02 = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_7,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                          );
      if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
      bVar13 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (this_02,InteractionFlags__Enum_CanCloneRoot,(MethodInfo *)0x0);
    } while ((bVar13 != 0) &&
            (bVar13 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                               (this_02,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0),
            bVar13 == 0));
    iVar12 = 0x68;
code_?:
    uStack_1 = 0xffffffff;
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
    ;
    func_?();
    if (iStack_6 == 0) {
      if (iVar12 == 0x68) {
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  }
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  func_?();
  pcVar14 = (code *)swi(3);
  bVar13 = (*pcVar14)();
  return bVar13;
}


/* Void Clone() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_Clone
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cacheE ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__ContextMenuController___Clone_m__E_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cacheE =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cacheE;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__ContextMenuController___Clone_m__F_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>__EventFunction_System__Object__void__
            );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
            );
  return;
}


/* Void CloneRoot() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_CloneRoot
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContextMenuController___CloneRoot_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cacheF ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__ContextMenuController___CloneRoot_m__10_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cacheF =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cacheF;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                       (this_01,(this->fields).woID,(MethodInfo *)0x0);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = pMVar3;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this_00,
                 MethodInfo__ContextMenuController___CloneRoot_c__AnonStorey2____m__0_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>__EventFunction_System__Object__void__
                );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                );
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Delete() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_Delete
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContextMenuController___Delete_c__AnonStorey3;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  this_00 = (this->fields).editorStateMachine;
  if (this_00 != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    if (this_01 != (ScaleAnimationBase *)0x0) {
      (this_01->fields)._._._._.m_CachedPtr = TypeInfo__System__String->static_fields->Empty;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,(this->fields).woID,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObject *)0x0) {
          cVar2 = (*(code *)pMVar1->klass[2]._0.byval_arg.data)();
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
          if (cVar2 != '\0') {
            if (TypeInfo__ContextMenuController->static_fields->__f__am_cache15 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)0x0,
                         MethodInfo__ContextMenuController___Delete_m__17_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__ContextMenuController->static_fields->__f__am_cache15 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__ContextMenuController->static_fields->__f__am_cache15;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this_01,
                     MethodInfo__ContextMenuController___Delete_c__AnonStorey3____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DeleteLink(Int32, Boolean) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_DeleteLink
               (ContextMenuController *this,int32_t linkID,bool isObjectLink,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (isObjectLink == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveLink
              (pMVar1,linkID,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveObjectLink
              (pMVar1,linkID,(MethodInfo *)0x0);
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   (unaff_EDI,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ContextMenuController___DeleteLink_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void EnterCubeEdit() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_EnterCubeEdit
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      (*pMVar1->klass[1].vtable.set_Rotation.methodPtr)(pMVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnterPlay() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_EnterPlay
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar2 = (MVAvatarSpawnRoleCreator *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,(this->fields).woID,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,(this->fields).woID,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) {
code_?:
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar4 != (GameEventManager *)0x0) &&
          (pGVar5 = (pGVar4->fields).GameState, pGVar5 != (GameEventManager_GameStateManager *)0x0)
          ) && (this_00 = (JumpState_OnWallJumpDelegate *)(pGVar5->fields).OnDisableLobbyState,
               this_00 != (JumpState_OnWallJumpDelegate *)0x0)) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0)
        ;
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__ContextMenuController->static_fields->__f__am_cache12 ==
            (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)0x0,
                     MethodInfo__ContextMenuController___EnterPlay_m__14_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>__EventFunction_System__Object__void__
                    );
          TypeInfo__ContextMenuController->static_fields->__f__am_cache12 =
               (ExecuteEvents_EventFunction_1_IEditModeController_ *)this_02;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__ContextMenuController->static_fields->__f__am_cache12;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                  );
        return;
      }
      goto code_?;
    }
    bVar6 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if (((pMVar3->klass->_1).naturalAligment < bVar6) ||
       ((MVAvatarSpawnRoleCreator__Class *)(pMVar3->klass->_1).typeHierarchy[bVar6 - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pMVar8 = (MVWorldObject *)0x0;
    if (bVar7) {
      pMVar8 = pMVar3;
    }
    if (pMVar8 == (MVWorldObject *)0x0) goto code_?;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar9 = (MVLocalPlayerBuilder *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar9 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar10 = (MVLocalPlayer__Class *)pMVar9->klass;
    bVar6 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar10->_1).naturalAligment < bVar6) ||
       (bVar7 = true,
       (pMVar10->_1).typeHierarchy[bVar6 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar7 = false;
    }
    pMVar11 = (MVLocalPlayerBuilder *)0x0;
    if (bVar7) {
      pMVar11 = pMVar9;
    }
    if (pMVar11 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    if (((pMVar10->_1).naturalAligment < bVar6) ||
       ((pMVar10->_1).typeHierarchy[bVar6 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pMVar11 = (MVLocalPlayerBuilder *)0x0;
    if (bVar7) {
      pMVar11 = pMVar9;
    }
    if (pMVar11 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar12 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                        ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&stack0xffffffdc,pMVar11,
                         (MethodInfo *)0x0);
    uVar13 = pMVar12->selectedTeam;
    iVar14 = pMVar12->previousSpawnRoleId;
    uVar15 = CONCAT44(&UNK_?,uVar13);
    pMVar9 = (MVLocalPlayerBuilder *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar9 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar10 = (MVLocalPlayer__Class *)pMVar9->klass;
    bVar6 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar10->_1).naturalAligment < bVar6) ||
       (bVar7 = true,
       (pMVar10->_1).typeHierarchy[bVar6 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar7 = false;
    }
    pMVar11 = (MVLocalPlayerBuilder *)0x0;
    if (bVar7) {
      pMVar11 = pMVar9;
    }
    if (pMVar11 != (MVLocalPlayerBuilder *)0x0) {
      if (((pMVar10->_1).naturalAligment < bVar6) ||
         ((pMVar10->_1).typeHierarchy[bVar6 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pMVar11 = (MVLocalPlayerBuilder *)0x0;
      if (bVar7) {
        pMVar11 = pMVar9;
      }
      if (pMVar11 == (MVLocalPlayerBuilder *)0x0) goto code_?;
      uVar16 = (undefined4)uVar15;
      value.previousSpawnRoleId = iVar14;
      value.selectedTeam = (int)uVar15;
      value.selectedSpawnRoleCreator = (int)((ulonglong)uVar15 >> 0x20);
      MVLocalPlayerBuilder::MVLocalPlayerBuilder_set_EnterPlayStateData
                (pMVar11,value,(MethodInfo *)0x0);
      if (pMVar2 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
      pMVar17 = pMVar2->klass;
      bVar6 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
      bVar18 = (pMVar17->_1).naturalAligment;
      if ((bVar18 < bVar6) ||
         ((MVAvatarSpawnRoleCreator__Class *)(pMVar17->_1).typeHierarchy[bVar6 - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pMVar19 = (MVAvatarSpawnRoleCreator *)0x0;
      if (bVar7) {
        pMVar19 = pMVar2;
      }
      if (pMVar19 != (MVAvatarSpawnRoleCreator *)0x0) {
        if ((bVar18 < bVar6) ||
           ((MVAvatarSpawnRoleCreator__Class *)(pMVar17->_1).typeHierarchy[bVar6 - 1] !=
            TypeInfo__MVAvatarSpawnRoleCreator)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pMVar19 = (MVAvatarSpawnRoleCreator *)0x0;
        if (bVar7) {
          pMVar19 = pMVar2;
        }
        if (pMVar19 != (MVAvatarSpawnRoleCreator *)0x0) {
          GVar20 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                             (pMVar19,(MethodInfo *)0x0);
          gamePassTier = CONCAT31((int3)((uint)uVar16 >> 8),(byte)GVar20);
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar21 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if (pPVar21 == (PlayerPlanetData *)0x0) goto code_?;
          if ((pPVar21->fields).gamePassTier < (byte)GVar20) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                      (this_01,gamePassTier,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void Initialize(EditorStateMachine) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_Initialize
               (ContextMenuController *this,EditorStateMachine *editorStateMachine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).editorStateMachine = editorStateMachine;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IEditModeUI *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType == (Il2CppClass *)TypeInfo__IEditModeUI) {
          ppMVar5 = &(&(pIVar1->klass->vtable).get_PlayerInventoryRepository)
                     [pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(pIVar1,TypeInfo__IEditModeUI,6);
code_?:
    iVar6 = (*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    if (iVar6 != 0) {
      pDVar7 = *(Delegate **)(iVar6 + 0x18);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,MethodInfo__ContextMenuController__OnFailedToAddItem__,
                 (MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar7,(Delegate *)this_00,(MethodInfo *)0x0);
      pDVar7 = (Delegate *)0x0;
      if (pDVar8 == (Delegate *)0x0) {
code_?:
        *(Delegate **)(iVar6 + 0x18) = pDVar7;
        return;
      }
      if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
        pDVar7 = pDVar8;
      }
      if (pDVar7 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ItemImageUploaded(Int32) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ItemImageUploaded
               (ContextMenuController *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame_OperationRequests *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (this_00 != (MaterialLoader *)0x0) {
    bVar3 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffffc);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      piVar4 = *(int **)(woId + 0x10);
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (piVar4 != (int *)0x0) {
        uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
        uVar6._1_1_ = (pSVar5->SendReliable).Channel;
        uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
        (**(code **)(*piVar4 + 0x110))
                  (piVar4,0x27,this_01,(pSVar5->SendReliable).DeliveryMode,uVar6);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnClosedStandaloneError(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_OnClosedStandaloneError
               (ContextMenuController *this,bool confirmed,ConfirmationPopup *popup,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (confirmed == 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__ContextMenuController->static_fields->__f__am_cache13 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__ContextMenuController___OnClosedStandaloneError_m__15_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__ContextMenuController->static_fields->__f__am_cache13 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__ContextMenuController->static_fields->__f__am_cache13;
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
  worldObjectID = (this->fields).woID;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddWorldObjectToInventory
              (this_01,worldObjectID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnContextMenuPop() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_OnContextMenuPop
               (ContextMenuController *this,MethodInfo *method)

{
  (this->fields).rightClickGizmoSelect = 0;
  return;
}


/* Void OnFailedToAddItem() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_OnFailedToAddItem
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache14 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ContextMenuController___OnFailedToAddItem_m__16_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache14 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache14;
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


/* Void PointerIsDown() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_PointerIsDown
               (ContextMenuController *this,MethodInfo *method)

{
  (this->fields).rightClickGizmoSelect = 1;
  return;
}


/* Void PopGizmos() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_PopGizmos
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ContextMenuController___PopGizmos_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache0;
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


/* Void ResetLogic() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ResetLogic
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cacheD ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ContextMenuController___ResetLogic_m__D_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cacheD =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cacheD;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetLogicChunk
              (this_01,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowContextMenu(Int32, Vector3) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowContextMenu
               (ContextMenuController *this,int32_t woID,Vector3 worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContextMenuController___ShowContextMenu_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    pCVar1 = (this->fields).contextMenuPrefab;
    (this->fields).woID = woID;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pCVar1,
                        ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                       );
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      this_01 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar3,woID,(MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClient *)0x0) {
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanUseStars,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Stars,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__ShowStarsDialog__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanUseTeam,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Team,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__ShowTeamDialog__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanUseGameCoins,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Game_Coins,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__ShowGameCoinsDialog__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanUseLevel,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Levels,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__ShowLevelsDialog__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVClientSettings);
        }
        bVar4 = MVClientSettings::MVClientSettings_IsFlagSet
                          (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            (this_01,InteractionFlags__Enum_CanUseGameRank,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
            pSVar5 = TM::TM__(StringLiteral_Game_Tier,(MethodInfo *)0x0);
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)this,MethodInfo__ContextMenuController__ShowGameRankDialog__
                       ,(MethodInfo *)0x0);
            if (pCVar1 == (ContextMenu *)0x0) goto code_?;
            ContextMenu::ContextMenu_AddButton
                      (pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
          }
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_HasSettings,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Settings,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__ShowSettingsDialog__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_Sounds,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Sounds,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__ShowSoundsDialog__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_GlobalSounds,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Global_Sounds,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,
                     MethodInfo__ContextMenuController__ShowGlobalSoundsDialog__,(MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanEdit,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            (this_01,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
            pSVar5 = TM::TM__(StringLiteral_Edit_Model,(MethodInfo *)0x0);
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)this,MethodInfo__ContextMenuController__EnterCubeEdit__,
                       (MethodInfo *)0x0);
            if (pCVar1 == (ContextMenu *)0x0) goto code_?;
            ContextMenu::ContextMenu_AddButton
                      (pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
          }
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanResetLogic,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Reset_Logic,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__ResetLogic__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanEnterPlay,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Play,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__EnterPlay__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVClientSettings);
        }
        bVar4 = MVClientSettings::MVClientSettings_IsFlagSet
                          (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            (this_01,InteractionFlags__Enum_CanEarnGamePoints,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
            pSVar5 = TM::TM__(StringLiteral_Crystals,(MethodInfo *)0x0);
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)this,
                       MethodInfo__ContextMenuController__ShowGamePointsDialog__,(MethodInfo *)0x0);
            if (pCVar1 == (ContextMenu *)0x0) goto code_?;
            ContextMenu::ContextMenu_AddButton
                      (pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
          }
        }
        if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVClientSettings);
        }
        bVar4 = MVClientSettings::MVClientSettings_IsFlagSet
                          (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            (this_01,InteractionFlags__Enum_CanEarnGamePointsMinor,(MethodInfo *)0x0
                            );
          if (bVar4 != 0) {
            pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
            pSVar5 = TM::TM__(StringLiteral_Crystals,(MethodInfo *)0x0);
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)this,
                       MethodInfo__ContextMenuController__ShowMinorGamePointsDialog__,
                       (MethodInfo *)0x0);
            if (pCVar1 == (ContextMenu *)0x0) goto code_?;
            ContextMenu::ContextMenu_AddButton
                      (pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
          }
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanRespawn,(MethodInfo *)0x1);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Respawn,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__ShowRespawnDialog__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = ContextMenuController_CanClone(this,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Clone,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__Clone__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = ContextMenuController_CanCloneRoot(this,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          pSVar5 = TM::TM__(StringLiteral_Clone,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,MethodInfo__ContextMenuController__CloneRoot__,
                     (MethodInfo *)0x0);
          if (pCVar1 == (ContextMenu *)0x0) goto code_?;
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
        }
        bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanAddToInventory,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            (this_01,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            pCVar1 = (ContextMenu *)&UNK_?;
            pSVar5 = TM::TM__(StringLiteral_Add_To_Inventory,(MethodInfo *)0x0);
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)this,MethodInfo__ContextMenuController__AddToInventory__,
                       (MethodInfo *)0x0);
            if (pCVar1 == (ContextMenu *)0x0) goto code_?;
            ContextMenu::ContextMenu_AddButton
                      (pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
          }
        }
        pCVar1 = (ContextMenu *)&UNK_?;
        pSVar5 = TM::TM__(StringLiteral_Delete,(MethodInfo *)0x0);
        pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar6,(Object *)this,MethodInfo__ContextMenuController__Delete__,
                   (MethodInfo *)0x0);
        if (pCVar1 != (ContextMenu *)0x0) {
          ContextMenu::ContextMenu_AddButton(pCVar1,pSVar5,(UnityAction *)pUVar6,(MethodInfo *)0x0);
          ContextMenuController_PopGizmos(this,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this_00,
                     MethodInfo__ContextMenuController___ShowContextMenu_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar6,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pCVar1 = (this_00->fields)._._._._.m_CachedPtr;
          woID_00 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
          if (pCVar1 != (ContextMenu *)0x0) {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            (pCVar1->fields).woID = (int32_t)woID_00;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)pCVar1,
                       MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                       ,
                       MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                      );
            if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
              MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                        (pMVar3,(int32_t)woID_00,
                         (Action_2_Object_WorldObjectDestroyedEventArgs_ *)pUVar6,(MethodInfo *)0x0)
              ;
              (pCVar1->fields).worldPosition.x = worldPos.x;
              (pCVar1->fields).worldPosition.y = worldPos.y;
              *(float *)((int)&(pCVar1->fields).worldPosition + 8) = worldPos.z;
              ContextMenu::ContextMenu_SetToScreenPoint(pCVar1,(MethodInfo *)0x0);
              return;
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


/* Void ShowContextMenuLink(Int32, Boolean, Vector3) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowContextMenuLink
               (ContextMenuController *this,int32_t linkID,bool isObjectLink,Vector3 worldPos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContextMenuController___ShowContextMenuLink_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)linkID;
    *(bool *)&(this_00->fields).state = isObjectLink;
    (this_00->fields).originalScale.y = (float)this;
    pCVar1 = (this->fields).contextMenuPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pCVar1 = (ContextMenu *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pCVar1,
                        ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                       );
    (this_00->fields).originalScale.x = (float)pCVar1;
    buttonText = TM::TM__(StringLiteral_Delete,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_00,
               MethodInfo__ContextMenuController___ShowContextMenuLink_c__AnonStorey1____m__0__,
               (MethodInfo *)0x0);
    if (pCVar1 != (ContextMenu *)0x0) {
      ContextMenu::ContextMenu_AddButton(pCVar1,buttonText,(UnityAction *)pUVar2,(MethodInfo *)0x0);
      ContextMenuController_PopGizmos(this,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this_00,
                 MethodInfo__ContextMenuController___ShowContextMenuLink_c__AnonStorey1____m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pCVar1 = (ContextMenu *)(this_00->fields).originalScale.x;
      if (pCVar1 != (ContextMenu *)0x0) {
        (pCVar1->fields).worldPosition.x = worldPos.x;
        (pCVar1->fields).worldPosition.y = worldPos.y;
        (pCVar1->fields).linkMenu = 1;
        (pCVar1->fields).worldPosition.z = worldPos.z;
        ContextMenu::ContextMenu_SetToScreenPoint(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowGameCoinsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGameCoinsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache8 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowGameCoinsDialog_m__8_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache8 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache8;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_GameCoin,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowGamePointsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGamePointsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache4 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowGamePointsDialog_m__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache4 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache4;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateGamePointsSettings
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowGameRankDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGameRankDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache3 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowGameRankDialog_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache3 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache3;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_GameRank,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowGlobalSoundsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGlobalSoundsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cacheC ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowGlobalSoundsDialog_m__C_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cacheC =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cacheC;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateGlobalSoundsInventory
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowLevelsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowLevelsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache9 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowLevelsDialog_m__9_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache9 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache9;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_Level,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowMinorGamePointsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowMinorGamePointsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache5 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowMinorGamePointsDialog_m__5_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache5 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache5;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateGamePointsMinorRewardSettings
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowRespawnDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowRespawnDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache6 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowRespawnDialog_m__6_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache6 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache6;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateRespawnSetting
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowSettingsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowSettingsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cacheA ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowSettingsDialog_m__A_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cacheA =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cacheA;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowSoundsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowSoundsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cacheB ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowSoundsDialog_m__B_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cacheB =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cacheB;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSoundsInventory
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowStarsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowStarsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache2 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowStarsDialog_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache2 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache2;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_Star,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowTeamDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowTeamDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuController->static_fields->__f__am_cache7 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ContextMenuController___ShowTeamDialog_m__7_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuController->static_fields->__f__am_cache7 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuController->static_fields->__f__am_cache7;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_Team,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <AddToInventory>m__11(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__AddToInventory_m__11
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


/* Void <AddToInventory>m__12(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__AddToInventory_m__12
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


/* Void <AddToInventory>m__13(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__AddToInventory_m__13
               (ContextMenuController *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Image_upload_is_disabled_in_stan,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__ContextMenuController__OnClosedStandaloneError_bool__ConfirmationPopup_,
             MethodInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>__UnityAction_System__Object__void__
            );
  TM::TM__(StringLiteral_Are_you_sure_,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(3);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <CloneRoot>m__10(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__CloneRoot_m__10
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Clone>m__E(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__Clone_m__E
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Clone>m__F(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__Clone_m__F
               (ContextMenuController *this,ICloneHandler *handler,BaseEventData *data,
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (handler != (ICloneHandler *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__ICloneHandler,handler,pMVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <DeleteLink>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__DeleteLink_m__1
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0x12);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Delete>m__17(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__Delete_m__17
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,handler);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <EnterPlay>m__14(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__EnterPlay_m__14
               (IEditModeController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IEditModeController *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IEditModeController,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnClosedStandaloneError>m__15(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::
     ContextMenuController__OnClosedStandaloneError_m__15
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


/* Void <OnFailedToAddItem>m__16(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__OnFailedToAddItem_m__16
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0x80);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PopGizmos>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__PopGizmos_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0x12);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ResetLogic>m__D(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ResetLogic_m__D
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowGameCoinsDialog>m__8(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowGameCoinsDialog_m__8
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowGamePointsDialog>m__4(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowGamePointsDialog_m__4
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowGameRankDialog>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowGameRankDialog_m__3
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowGlobalSoundsDialog>m__C(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowGlobalSoundsDialog_m__C
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowLevelsDialog>m__9(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowLevelsDialog_m__9
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowMinorGamePointsDialog>m__5(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::
     ContextMenuController__ShowMinorGamePointsDialog_m__5
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowRespawnDialog>m__6(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowRespawnDialog_m__6
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowSettingsDialog>m__A(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowSettingsDialog_m__A
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowSoundsDialog>m__B(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowSoundsDialog_m__B
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowStarsDialog>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowStarsDialog_m__2
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowTeamDialog>m__7(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__ShowTeamDialog_m__7
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

