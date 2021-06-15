
/* Void Destroy() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_Destroy
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IEditModeUI *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar1 == (IEditModeUI *)0x0) {
      func_?();
      pDStack2 = extraout_ECX;
      pAStack3 = extraout_EDX;
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pDVar5 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar1);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,unaff_ESI,MethodInfo__MVObjectEnabler__OnEditModeChange_EditModeChangeArgs_,
               MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
    pDStack2 =
         mscorlib.dll::System::Delegate::Delegate_Remove
                   (pDVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    pDVar5 = (Delegate *)0x0;
    if (pDStack2 != (Delegate *)0x0) {
      if ((Action_1_EditModeChangeArgs___Class *)pDStack2->klass ==
          TypeInfo__System__Action<EditModeChangeArgs>) {
        pDVar5 = pDStack2;
      }
      pAStack3 = TypeInfo__System__Action<EditModeChangeArgs>;
      if (pDVar5 == (Delegate *)0x0) goto code_?;
    }
    pIStack6 = TypeInfo__IEditModeUI;
    uStack7 = 3;
    pDStack2 = (Delegate *)pIVar1;
    pAStack3 = (Action_1_EditModeChangeArgs___Class *)pDVar5;
    func_?();
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_Initialize
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__MVObjectEnabler__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,
             MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
            );
  pIVar2 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)pUVar1,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar2;
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  MVObjectEnabler_UpdateShowObjects(this,(MethodInfo *)0x0);
  pOVar3 = (this->fields).goObjectEnabler;
  if (pOVar3 != (ObjectEnabler *)0x0) {
    lodGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)pOVar3,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,lodGameObject,2.0,(MethodInfo *)0x0);
    pOVar3 = (this->fields).goObjectEnabler;
    if (pOVar3 != (ObjectEnabler *)0x0) {
      ObjectEnabler::ObjectEnabler_Initialize(pOVar3,(MethodInfo *)0x0);
      (this->fields).isInitialized = 1;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar4 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar4 == (IEditModeUI *)0x0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar4 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar4 != (IEditModeUI *)0x0) {
        pDVar5 = (Delegate *)func_?();
        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar1,(Object *)this,
                   MethodInfo__MVObjectEnabler__OnEditModeChange_EditModeChangeArgs_,
                   MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
        pDStack6 =
             mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar5,(Delegate *)pUVar1,(MethodInfo *)0x0);
        pDVar5 = (Delegate *)0x0;
        if (pDStack6 == (Delegate *)0x0) {
code_?:
          pIStack7 = TypeInfo__IEditModeUI;
          uStack8 = 3;
          pDStack6 = (Delegate *)pIVar4;
          pAStack9 = (Action_1_EditModeChangeArgs___Class *)pDVar5;
          func_?();
          return;
        }
        if ((Action_1_EditModeChangeArgs___Class *)pDStack6->klass ==
            TypeInfo__System__Action<EditModeChangeArgs>) {
          pDVar5 = pDStack6;
        }
        pAStack9 = TypeInfo__System__Action<EditModeChangeArgs>;
        if (pDVar5 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
  pDStack6 = extraout_ECX;
  pAStack9 = extraout_EDX;
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_InputStateUpdateCallback
               (MVObjectEnabler *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if ((logicInputState == LogicInputState__Enum_FromColdToHot) ||
     (logicInputState == LogicInputState__Enum_FromHotToCold)) {
    MVObjectEnabler_UpdateShowObjects(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_OnDataUpdate
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_showOutline,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        (this->fields).showingOutline = *pbVar2;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_OnEditModeChange
               (MVObjectEnabler *this,EditModeChangeArgs arg,MethodInfo *method)

{
  MVObjectEnabler_UpdateShowObjects(this,(MethodInfo *)0x0);
  return;
}


/* Void OnObjectLinkChanged() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_OnObjectLinkChanged
               (MVObjectEnabler *this,MethodInfo *method)

{
  if ((this->fields).isInitialized == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    visible = func_?(1,TypeInfo__IInputSignalReceiver,pIVar1);
    MVObjectEnabler_ShowObjects(this,visible,(MethodInfo *)0x0);
    this_00 = (this->fields).goObjectEnabler;
    if (this_00 != (ObjectEnabler *)0x0) {
      UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
      CrossPlatformInputManager_VirtualAxis_set_matchWithInputManager
                ((CrossPlatformInputManager_VirtualAxis *)this_00,visible,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_Reset
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    visible = func_?(1,TypeInfo__IInputSignalReceiver,pIVar1);
    MVObjectEnabler_ShowObjects(this,visible,(MethodInfo *)0x0);
    this_00 = (this->fields).goObjectEnabler;
    if (this_00 != (ObjectEnabler *)0x0) {
      UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
      CrossPlatformInputManager_VirtualAxis_set_matchWithInputManager
                ((CrossPlatformInputManager_VirtualAxis *)this_00,visible,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowObjects(Boolean) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_ShowObjects
               (MVObjectEnabler *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  uVar7 = func_?();
  uStack_8 = CONCAT31((int3)((uint)uVar7 >> 8),visible);
  puStack_9 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_9 = (undefined4 *)&stack0xffffffb4, puStack_4 = &stack0xffffffb4,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_9 = (undefined4 *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    bVar10 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVar11 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      uStack_8 = uStack_8 & 0xff;
      if (MVar11 == MVJoinState__Enum_Playing) {
        uStack_8 = 1;
      }
      visible = (bool)uStack_8;
    }
    this_01 = (List_1_UnityEngine_Color32_ *)
              System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
              ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
              ::
              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                          *)this,(MethodInfo *)0x0);
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc0,this_01,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                         );
      CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar12->l
      ;
      CStack_6.monitor = (MonitorData *)pLVar12->next;
      CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar12->ver;
      CStack_6.fields.syncRoot = (Object *)(pLVar12->current).rgba;
      uStack_1 = 0;
      while( true ) {
        cVar13 = func_?();
        if (cVar13 == '\0') {
          *puStack_9 = 0xcd;
          uStack_1 = 0xffffffff;
          func_?(&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                         );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        unaff_ESI = (MVWorldObject *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (&CStack_6,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                              );
        if (unaff_ESI == (MVWorldObject *)0x0) break;
        (unaff_ESI->fields).inputState = (bool)uStack_8;
        method_01 = in_stack_14;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
          method_01 = in_stack_14;
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 == (MVWorldObjectClientManager *)0x0) break;
        unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_02,(unaff_ESI->fields).itemId,(MethodInfo *)0x0);
        in_stack_14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((unaff_ESI == (MVWorldObject *)0x0) ||
           (id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)unaff_ESI,
                            (MethodInfo *)method_01),
           in_stack_14 == (MVWorldObjectClientManager *)0x0)) break;
        pMVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (in_stack_14,(int32_t)id,in_stack_16);
        CStack_6.fields.list =
             (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)TypeInfo__MVMovable;
        CStack_6.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&UNK_?;
        CStack_6.monitor = (MonitorData *)pMVar15;
        iVar17 = func_?();
        pMVar18 = TypeInfo__MVCubeModelBase;
        if (iVar17 == 0) {
          CStack_6.fields.list =
               (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)TypeInfo__MVCubeModelBase;
          CStack_6.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&UNK_?;
          CStack_6.monitor = (MonitorData *)unaff_ESI;
          iVar17 = func_?();
          if (iVar17 != 0) {
            CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar18;
            CStack_6.klass =
                 (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&UNK_?;
            CStack_6.monitor = (MonitorData *)unaff_ESI;
            iVar17 = func_?();
            goto joined_?;
          }
          CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)_visible;
          CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x4d;
          in_stack_16 = (MethodInfo *)&UNK_?;
          CStack_6.monitor = (MonitorData *)unaff_ESI;
          func_?();
        }
        else {
          CStack_6.fields.list =
               (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)TypeInfo__MVMovable;
          CStack_6.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&UNK_?;
          CStack_6.monitor = (MonitorData *)pMVar15;
          iVar17 = func_?();
          if (iVar17 == 0) break;
          uVar7 = func_?(pMVar15);
          func_?(0x4d,uVar7);
          pMVar18 = TypeInfo__MVCubeModelBase;
          iVar17 = func_?(unaff_ESI);
joined_?:
          if (iVar17 == 0) break;
          method_00 = (MethodInfo *)0x0;
          pMVar19 = _visible;
          this_03 = (MVCubeModelBase *)func_?(unaff_ESI,pMVar18);
          MVCubeModelBase::MVCubeModelBase_ObjectLinkChanged(this_03,(bool)pMVar19,method_00);
        }
      }
    }
  }
  func_?();
  func_?(unaff_ESI,0,0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void UpdateShowObjects() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_UpdateShowObjects
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    visible = func_?(1,TypeInfo__IInputSignalReceiver,pIVar1);
    MVObjectEnabler_ShowObjects(this,visible,(MethodInfo *)0x0);
    this_00 = (this->fields).goObjectEnabler;
    if (this_00 != (ObjectEnabler *)0x0) {
      UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
      CrossPlatformInputManager_VirtualAxis_set_matchWithInputManager
                ((CrossPlatformInputManager_VirtualAxis *)this_00,visible,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ValidateObjectLinkTarget(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_ValidateObjectLinkTarget
               (MVObjectEnabler *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      return wo != (MVWorldObjectClient *)0x0;
    }
    return 0;
  }
  return 0;
}


/* MVObjectEnabler(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler__ctor
               (MVObjectEnabler *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).showingOutline = 1;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = MVBuildModeAvatar::MVBuildModeAvatar_get_LimbManager
                             ((MVBuildModeAvatar *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    piVar1 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar1 = (uint)*piVar1 | 0x18000;
    pOVar2 = (this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pOVar2 != (ObjectPrefab *)0x0) {
      bVar3 = (TypeInfo__MVObjectEnablerObject->_1).naturalAligment;
      pOVar4 = pOVar2->klass;
      if (((pOVar4->_1).naturalAligment < bVar3) ||
         (bVar5 = true,
         (pOVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVObjectEnablerObject)) {
        bVar5 = false;
      }
      pOVar6 = (ObjectPrefab *)0x0;
      if (bVar5) {
        pOVar6 = pOVar2;
      }
      if (pOVar6 == (ObjectPrefab *)0x0) goto code_?;
      if (((pOVar4->_1).naturalAligment < bVar3) ||
         ((pOVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVObjectEnablerObject))
      {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pOVar6 = (ObjectPrefab *)0x0;
      if (bVar5) {
        pOVar6 = pOVar2;
      }
      if (pOVar6 == (ObjectPrefab *)0x0) goto code_?;
      pOVar4 = pOVar6[1].klass;
      (this->fields).goObjectEnabler = (ObjectEnabler *)pOVar4;
      if (pOVar4 != (ObjectPrefab__Class *)0x0) {
        (pOVar4->_0).namespaze = (char *)this;
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_get_DocumentationType
          (MVObjectEnabler *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_ModelToggle;
}


/* Boolean get_ShowingOutline() */

bool Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_get_ShowingOutline
               (MVObjectEnabler *this,MethodInfo *method)

{
  return (this->fields).showingOutline;
}

