
/* Void Destroy() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_Destroy
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__MVObjectEnabler__OnEditModeChange_EditModeChangeArgs_);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar1 == (IEditModeUI *)0x0) {
      func_?();
code_?:
      pDStack2 = unaff_ESI;
      pAStack3 = unaff_EDI;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    source = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar1);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__MVObjectEnabler__OnEditModeChange_EditModeChangeArgs_,(MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                          (source,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<EditModeChangeArgs>;
    pAStack3 = (Action_1_EditModeChangeArgs___Class *)0x0;
    if (unaff_ESI != (Delegate *)0x0) {
      pAStack3 = TypeInfo__System__Action<EditModeChangeArgs>;
      pDStack2 = unaff_ESI;
      pAStack3 = (Action_1_EditModeChangeArgs___Class *)func_?();
      if (pAStack3 == (Action_1_EditModeChangeArgs___Class *)0x0) goto code_?;
    }
    pDStack2 = (Delegate *)pIVar1;
    func_?();
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_Initialize
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__MVObjectEnabler__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    func_?(&MethodInfo__MVObjectEnabler__OnEditModeChange_EditModeChangeArgs_);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_01,(Object *)this,
             MethodInfo__MVObjectEnabler__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar1);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  MVObjectEnabler_UpdateShowObjects(this,(MethodInfo *)0x0);
  this_00 = (this->fields).goObjectEnabler;
  if (this_00 != (ObjectEnabler *)0x0) {
    lodGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,lodGameObject,2.0,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)(this->fields).goObjectEnabler;
    if (this_01 != (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UpdateController::UpdateController_AddUpdateObject
                ((IUpdatecontrollerSubscriberUpdate *)this_01,
                 UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
      pvVar2 = (void *)UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                 (StringLiteral_Default,(MethodInfo *)0x0);
      (this_01->fields)._._.extra_arg = pvVar2;
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      (this_01->fields)._._.interp_method = pCVar3;
      func_?();
      (this->fields).isInitialized = 1;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) {
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar4 != (IEditModeUI *)0x0) {
        a = (Delegate *)func_?();
        this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__MVObjectEnabler__OnEditModeChange_EditModeChangeArgs_,
                   (MethodInfo *)0x0);
        this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            (a,(Delegate *)this_02,(MethodInfo *)0x0);
        unaff_EDI = TypeInfo__System__Action<EditModeChangeArgs>;
        pAStack5 = (Action_1_EditModeChangeArgs___Class *)0x0;
        if (this_01 == (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
code_?:
          pIStack6 = TypeInfo__IEditModeUI;
          uStack7 = 3;
          pUStack8 = (UnityAction_2_System_Int32_System_Int32_ *)pIVar4;
          func_?();
          return;
        }
        pAStack5 = TypeInfo__System__Action<EditModeChangeArgs>;
        pUStack8 = this_01;
        pAStack5 = (Action_1_EditModeChangeArgs___Class *)func_?();
        if (pAStack5 != (Action_1_EditModeChangeArgs___Class *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  pUStack8 = this_01;
  pAStack5 = unaff_EDI;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    func_?(&
                    bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_showOutline);
    cRam_? = '\x01';
  }
  hashtable = (this->fields)._._._.data;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  bVar1 = Extensions::Extensions_GetValueOrDefault
                    (hashtable,StringLiteral_showOutline,1,
                     bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                    );
  (this->fields).showingOutline = bVar1;
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_OnEditModeChange
               (MVObjectEnabler *this,EditModeChangeArgs arg,MethodInfo *method)

{
  MVObjectEnabler_UpdateShowObjects(this,(MethodInfo *)0x0);
  return;
}


/* Void OnObjectLinkChanged(ObjectLinkChangeType, ObjectLink) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_OnObjectLinkChanged
               (MVObjectEnabler *this,ObjectLinkChangeType__Enum changeType,ObjectLink *objectLink,
               MethodInfo *method)

{
  if ((this->fields).isInitialized != 0) {
    MVObjectEnabler_UpdateShowObjects(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_Reset
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IInputSignalReceiver);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    visible = func_?(1,TypeInfo__IInputSignalReceiver,pIVar1);
    MVObjectEnabler_ShowObjects(this,visible,(MethodInfo *)0x0);
    pOVar2 = (this->fields).goObjectEnabler;
    if (pOVar2 != (ObjectEnabler *)0x0) {
      (pOVar2->fields)._IsDrawingEnabled_k__BackingField = visible;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowObjects(Boolean) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_ShowObjects
               (MVObjectEnabler *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uVar3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb4;
  puVar6 = &stack0xffffffb4;
  uStack_4 = uVar3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVCubeModelBase);
    in_stack_7 = (MethodInfo *)&UNK_?;
    uVar3 = func_?(&TypeInfo__MVMovable);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  uStack_8 = CONCAT31((int3)((uint)uVar3 >> 8),visible);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    bVar9 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_01,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      MVar10 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      uStack_8 = uStack_8 & 0xff;
      if (MVar10 == MVJoinState__Enum_Playing) {
        uStack_8 = 1;
      }
      visible = (bool)uStack_8;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._._._.objectLinkRefs;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_12,this_00,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                         );
      RStack_13 = pLVar11->_current;
      LStack_12._version = 0;
      uStack_1 = 1;
      LStack_12._current = (RegexCharClass_SingleRange)&stack0xffffffc0;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                     ,(MethodInfo *)this_01);
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        if (RStack_13 == (RegexCharClass_SingleRange)0x0) break;
        *(char *)((int)RStack_13 + 0x14) = (char)uStack_8;
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((RStack_13 == (RegexCharClass_SingleRange)0x0) ||
           (pMVar14 == (MVWorldObjectClientManager *)0x0)) break;
        this_01 = (MVNetworkGame *)0x0;
        pMVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar14,(((Il2CppType *)((int)RStack_13 + 0x10))->data).__klassIndex,
                            (MethodInfo *)0x0);
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar15 == (MVWorldObject *)0x0) || (pMVar14 == (MVWorldObjectClientManager *)0x0))
        break;
        pMStack_16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar14,(pMVar15->fields).groupId,(MethodInfo *)0x0);
        if (((pMStack_16 == (MVWorldObject *)0x0) ||
            ((pMStack_16->klass->_1).naturalAligment < (TypeInfo__MVMovable->_1).naturalAligment))
           || ((MVMovable__Class *)
               (pMStack_16->klass->_1).typeHierarchy[(TypeInfo__MVMovable->_1).naturalAligment - 1]
               != TypeInfo__MVMovable)) {
          iVar17 = func_?();
          if (iVar17 != 0) goto code_?;
          RStack_13 = _visible;
          func_?();
        }
        else {
          iVar17 = func_?();
          if ((iVar17 == 0) || (iVar17 = func_?(), iVar17 == 0)) goto code_?;
          func_?();
code_?:
          RStack_13 = (RegexCharClass_SingleRange)TypeInfo__MVCubeModelBase;
          iVar17 = func_?();
          if (iVar17 == 0) break;
          this_01 = (MVNetworkGame *)&UNK_?;
          this_02 = (MVCubeModelBase *)func_?();
          MVCubeModelBase::MVCubeModelBase_ObjectLinkChanged
                    (this_02,in_stack_18,in_stack_7);
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void UpdateShowObjects() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_UpdateShowObjects
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IInputSignalReceiver);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    visible = func_?(1,TypeInfo__IInputSignalReceiver,pIVar1);
    MVObjectEnabler_ShowObjects(this,visible,(MethodInfo *)0x0);
    pOVar2 = (this->fields).goObjectEnabler;
    if (pOVar2 != (ObjectEnabler *)0x0) {
      (pOVar2->fields)._IsDrawingEnabled_k__BackingField = visible;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ValidateObjectLinkTarget(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_ValidateObjectLinkTarget
               (MVObjectEnabler *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelInstance);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (wo->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
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
    func_?(&TypeInfo__MVObjectEnablerObject);
    cRam_? = '\x01';
  }
  (this->fields).showingOutline = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pOVar2 = unaff_EDI;
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvObjectEnablerPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x10000;
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x8000;
    unaff_EDI = (this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (unaff_EDI != (ObjectPrefab *)0x0) {
      if (((unaff_EDI->klass->_1).naturalAligment <
           (TypeInfo__MVObjectEnablerObject->_1).naturalAligment) ||
         ((unaff_EDI->klass->_1).typeHierarchy
          [(TypeInfo__MVObjectEnablerObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVObjectEnablerObject)) goto code_?;
      (this->fields).goObjectEnabler = (ObjectEnabler *)unaff_EDI[1].klass;
      unaff_EDI = pOVar2;
      func_?();
      pOVar4 = (this->fields).goObjectEnabler;
      if (pOVar4 != (ObjectEnabler *)0x0) {
        (pOVar4->fields).woObjectEnabler = this;
        func_?(&(pOVar4->fields).woObjectEnabler,this);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_get_DocumentationType
          (MVObjectEnabler *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_ModelToggle;
}

