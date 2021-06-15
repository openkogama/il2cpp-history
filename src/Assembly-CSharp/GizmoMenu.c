
/* Boolean CanClone() */

bool Assembly-CSharp.dll::GizmoMenu::GizmoMenu_CanClone(GizmoMenu *this,MethodInfo *method)

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

bool Assembly-CSharp.dll::GizmoMenu::GizmoMenu_CanCloneRoot(GizmoMenu *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Clone(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__GizmoMenu->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__GizmoMenu___Clone_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__GizmoMenu->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__GizmoMenu->static_fields->__f__am_cache1;
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
             MethodInfo__GizmoMenu___Clone_m__2_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
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

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_CloneRoot(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GizmoMenu___CloneRoot_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__GizmoMenu->static_fields->__f__am_cache2 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__GizmoMenu___CloneRoot_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__GizmoMenu->static_fields->__f__am_cache2 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__GizmoMenu->static_fields->__f__am_cache2;
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
                 MethodInfo__GizmoMenu___CloneRoot_c__AnonStorey0____m__0_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
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


/* Void HandleCloningHotkey() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_HandleCloningHotkey
               (GizmoMenu *this,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
                    (KeyCode__Enum_Q,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = GizmoMenu_CanClone(this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = GizmoMenu_CanCloneRoot(this,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__GizmoMenu___CloneRoot_c__AnonStorey0;
        this_00 = (MethodInfo *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play
                  ((ScaleAnimationBase *)this_00,(float)this_00,(MethodInfo *)method_00);
        object = (MethodInfo *)0x0;
        root = (MethodInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__GizmoMenu->static_fields->__f__am_cache2 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          root = 
          MethodInfo__GizmoMenu___CloneRoot_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
          ;
          this_00 = 
          MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
          ;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)0x0,
                     MethodInfo__GizmoMenu___CloneRoot_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__GizmoMenu->static_fields->__f__am_cache2 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
          object = this_00;
        }
        pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__GizmoMenu->static_fields->__f__am_cache2;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  ((GameObject *)root,(BaseEventData *)0x0,pEVar3,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
           (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                               (this_01,(this->fields).woID,(MethodInfo *)0x0),
           this_00 != (MethodInfo *)0x0)) {
          this_00->invoker_method = (InvokerMethod)pMVar4;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)object,
                     MethodInfo__GizmoMenu___CloneRoot_c__AnonStorey0____m__0_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>__EventFunction_System__Object__void__
                    );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar5,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                    );
          return;
        }
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__GizmoMenu->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)0x0,
                   MethodInfo__GizmoMenu___Clone_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__GizmoMenu->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
      }
      pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__GizmoMenu->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar5,(BaseEventData *)0x0,pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__GizmoMenu___Clone_m__2_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>__EventFunction_System__Object__void__
                );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                );
    }
  }
  return;
}


/* Void Initialize(Int32, Vector3, EditorStateMachine) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Initialize
               (GizmoMenu *this,int32_t woID,Vector3 worldPosition,EditorStateMachine *esm,
               MethodInfo *method)

{
  (this->fields).editorStateMachine = esm;
  (this->fields).worldPosition.x = worldPosition.x;
  (this->fields).worldPosition.y = worldPosition.y;
  (this->fields).woID = woID;
  (this->fields).worldPosition.z = worldPosition.z;
  GizmoMenu_Setup(this,woID,(MethodInfo *)0x0);
  GizmoMenu_SetToScreenPoint(this,(MethodInfo *)0x0);
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_LateUpdate(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     (in_stack_2,(MethodInfo *)0x0);
    if (TypeInfo__GizmoMenu->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__GizmoMenu___Pop_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__GizmoMenu->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__GizmoMenu->static_fields->__f__am_cache0;
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
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_OnDestroy(GizmoMenu *this,MethodInfo *method)

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
  woID = (this->fields).woID;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__GizmoMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_,
             MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
            );
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
              (this_00,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Pop(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__GizmoMenu->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__GizmoMenu___Pop_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__GizmoMenu->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__GizmoMenu->static_fields->__f__am_cache0;
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


/* Void PopWoDestroyed(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_PopWoDestroyed
               (GizmoMenu *this,Object *obj,WorldObjectDestroyedEventArgs *args,MethodInfo *method)

{
  GizmoMenu_Pop(this,(MethodInfo *)0x0);
  return;
}


/* Void SetToScreenPoint() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_SetToScreenPoint(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    this_02 = (Camera *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                         (MethodInfo *)0x0);
    if (this_02 != (Camera *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                         ((Vector3 *)&stack0xffffffe8,this_02,(this->fields).worldPosition,
                          (MethodInfo *)0x0);
      uVar2 = pVVar1->x;
      fVar3 = pVVar1->z;
      this_00 = (this->fields).rectTransform;
      if (this_00 != (RectTransform *)0x0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          this = (GizmoMenu *)fVar3;
          fVar4 = (float)&UNK_?;
          value.x = (float)uVar2;
          value = (Vector3)CONCAT84(uVar5,value.x);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Setup(Int32) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Setup
               (GizmoMenu *this,int32_t woID,MethodInfo *method)

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
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_00 = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar1,woID,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__GizmoMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_,
             MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
            );
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
            (pMVar1,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,(MethodInfo *)0x0
            );
  if (this_00 == (MVWorldObjectClient *)0x0) goto code_?;
  bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                    (this_00,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      (this_00,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    woID._0_1_ = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                           (this_00,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
  }
  else {
code_?:
    woID._0_1_ = 1;
  }
  pGVar3 = (this->fields).rotate;
  if (pGVar3 != (GizmoButton *)0x0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pGVar3,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,(bool)woID,(MethodInfo *)0x0);
      bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (this_00,InteractionFlags__Enum_NotTranslatbleXZ,(MethodInfo *)0x0);
      pGVar3 = (this->fields).xzTranslate;
      if (pGVar3 != (GizmoButton *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pGVar3,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,bVar2 == 0,(MethodInfo *)0x0);
          bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            (this_00,InteractionFlags__Enum_NotTranslatbleY,(MethodInfo *)0x0);
          pGVar3 = (this->fields).yTranslate;
          if (pGVar3 != (GizmoButton *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pGVar3,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,bVar2 == 0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Update(GizmoMenu *this,MethodInfo *method)

{
  GizmoMenu_SetToScreenPoint(this,(MethodInfo *)0x0);
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
                    (KeyCode__Enum_Q,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = GizmoMenu_CanClone(in_stack_2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = GizmoMenu_CanCloneRoot(in_stack_2,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__GizmoMenu___CloneRoot_c__AnonStorey0;
        this_00 = (MethodInfo *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play
                  ((ScaleAnimationBase *)this_00,(float)this_00,(MethodInfo *)method_00);
        object = (MethodInfo *)0x0;
        root = (MethodInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)in_stack_2,(MethodInfo *)0x0);
        if (TypeInfo__GizmoMenu->static_fields->__f__am_cache2 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          this_00 = 
          MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
          ;
          root = 
          MethodInfo__GizmoMenu___CloneRoot_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
          ;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)0x0,
                     MethodInfo__GizmoMenu___CloneRoot_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__GizmoMenu->static_fields->__f__am_cache2 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
          object = this_00;
        }
        pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__GizmoMenu->static_fields->__f__am_cache2;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  ((GameObject *)root,(BaseEventData *)0x0,pEVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
           (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                               (this_01,(in_stack_2->fields).woID,(MethodInfo *)0x0),
           this_00 != (MethodInfo *)0x0)) {
          this_00->invoker_method = (InvokerMethod)pMVar5;
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)in_stack_2,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)object,
                     MethodInfo__GizmoMenu___CloneRoot_c__AnonStorey0____m__0_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>__EventFunction_System__Object__void__
                    );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar6,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                    );
          return;
        }
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)in_stack_2,(MethodInfo *)0x0);
      if (TypeInfo__GizmoMenu->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__GizmoMenu___Clone_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__GizmoMenu->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
      }
      pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__GizmoMenu->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar6,(BaseEventData *)0x0,pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)in_stack_2,(MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)in_stack_2,
                 MethodInfo__GizmoMenu___Clone_m__2_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>__EventFunction_System__Object__void__
                );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar6,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                );
    }
  }
  return;
}


/* Void <CloneRoot>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu__CloneRoot_m__3
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


/* Void <Clone>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu__Clone_m__1
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


/* Void <Clone>m__2(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu__Clone_m__2
               (GizmoMenu *this,ICloneHandler *handler,BaseEventData *data,MethodInfo *method)

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


/* Void <Pop>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu__Pop_m__0
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

