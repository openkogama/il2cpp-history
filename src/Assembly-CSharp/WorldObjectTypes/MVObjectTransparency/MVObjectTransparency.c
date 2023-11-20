
/* Void AdjustTransparency(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_AdjustTransparency
               (MVObjectTransparency *this,bool currentlyIsHot,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
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
    func_?(&StringLiteral_AdjustTransparency_invalid_world);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    bVar4 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_01,(MethodInfo *)0x0);
    if ((bVar4 == 0) &&
       (MVar5 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0),
       MVar5 == MVJoinState__Enum_Playing)) {
      currentlyIsHot = 1;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._._._.objectLinkRefs;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffd8,this_00,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                         );
      RStack_7 = pLVar6->_current;
      uStack_1 = 1;
      while( true ) {
        bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                          );
        if (bVar4 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (RStack_7 == (RegexCharClass_SingleRange)0x0) break;
        *(bool *)((int)RStack_7 + 0x14) = currentlyIsHot;
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((RStack_7 == (RegexCharClass_SingleRange)0x0) ||
           (this_02 == (MVWorldObjectClientManager *)0x0)) break;
        method_00 = (MethodInfo *)0x0;
        this_03 = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_02,*(int32_t *)((int)RStack_7 + 0x10),(MethodInfo *)0x0);
        if (this_03 == (MVCubeModelBase *)0x0) break;
        if (((this_03->klass->_1).naturalAligment < (TypeInfo__MVCubeModelBase->_1).naturalAligment)
           || ((MVCubeModelBase__Class *)
               (this_03->klass->_1).typeHierarchy
               [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] != TypeInfo__MVCubeModelBase))
        {
          pTVar8 = mscorlib.dll::System::Object::Object_GetType((Object *)this_03,(MethodInfo *)0x0)
          ;
          pSVar9 = StringLiteral_AdjustTransparency_invalid_world;
          if (pTVar8 == (Type *)0x0) {
            str1 = (String *)0x0;
          }
          else {
            str1 = (String *)func_?();
          }
          pSVar9 = mscorlib.dll::System::String::String_Concat_3(pSVar9,str1,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar9,(MethodInfo *)0x0);
        }
        else {
          MVCubeModelBase::MVCubeModelBase_ObjectLinkTransparency(this_03,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_Destroy(MVObjectTransparency *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__OnEditModeChange_EditModeChangeArgs_
                   );
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
               MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__OnEditModeChange_EditModeChangeArgs_
               ,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_Initialize(MVObjectTransparency *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    func_?(&
                    MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__OnEditModeChange_EditModeChangeArgs_
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar1);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  MVObjectTransparency_UpdateTransparency(this,(MethodInfo *)0x0);
  this_00 = (this->fields).goObjectTransparency;
  if (this_00 != (ObjectTransparency *)0x0) {
    lodGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,lodGameObject,2.0,(MethodInfo *)0x0);
    if ((this->fields).goObjectTransparency != (ObjectTransparency *)0x0) {
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
      pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar2 != (IEditModeUI *)0x0) {
        a = (Delegate *)func_?();
        this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__OnEditModeChange_EditModeChangeArgs_
                   ,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            (a,(Delegate *)this_02,(MethodInfo *)0x0);
        unaff_EDI = TypeInfo__System__Action<EditModeChangeArgs>;
        pAStack3 = (Action_1_EditModeChangeArgs___Class *)0x0;
        if (this_01 == (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
code_?:
          pIStack4 = TypeInfo__IEditModeUI;
          uStack5 = 3;
          pUStack6 = (UnityAction_2_System_Int32_System_Int32_ *)pIVar2;
          func_?();
          return;
        }
        pAStack3 = TypeInfo__System__Action<EditModeChangeArgs>;
        pUStack6 = this_01;
        pAStack3 = (Action_1_EditModeChangeArgs___Class *)func_?();
        if (pAStack3 != (Action_1_EditModeChangeArgs___Class *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  pUStack6 = this_01;
  pAStack3 = unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_InputStateUpdateCallback
               (MVObjectTransparency *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if ((logicInputState == LogicInputState__Enum_FromColdToHot) ||
     (logicInputState == LogicInputState__Enum_FromHotToCold)) {
    MVObjectTransparency_UpdateTransparency(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_OnDataUpdate(MVObjectTransparency *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys)
    ;
    cRam_? = '\x01';
  }
  hashtable = (this->fields)._._._.data;
  if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
  }
  key = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
        static_fields->Alpha;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  fVar1 = Extensions::Extensions_GetValueOrDefault_4
                    (hashtable,key,0.9,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  (this->fields)._Transparency_k__BackingField = fVar1;
  if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
    currentlyIsHot = func_?(1,TypeInfo__IInputSignalReceiver);
    MVObjectTransparency_AdjustTransparency(this,currentlyIsHot,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_OnEditModeChange
               (MVObjectTransparency *this,EditModeChangeArgs arg,MethodInfo *method)

{
  MVObjectTransparency_UpdateTransparency(this,(MethodInfo *)0x0);
  return;
}


/* Void OnObjectLinkChanged(ObjectLinkChangeType, ObjectLink) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_OnObjectLinkChanged
               (MVObjectTransparency *this,ObjectLinkChangeType__Enum changeType,
               ObjectLink *objectLink,MethodInfo *method)

{
  if ((this->fields).isInitialized != 0) {
    MVObjectTransparency_UpdateTransparency(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_Reset(MVObjectTransparency *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IInputSignalReceiver);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    currentlyIsHot = func_?(1,TypeInfo__IInputSignalReceiver,pIVar1);
    MVObjectTransparency_AdjustTransparency(this,currentlyIsHot,(MethodInfo *)0x0);
    pOVar2 = (this->fields).goObjectTransparency;
    if (pOVar2 != (ObjectTransparency *)0x0) {
      (pOVar2->fields)._IsDrawingEnabled_k__BackingField = currentlyIsHot;
      pOVar2 = (this->fields).goObjectTransparency;
      if (pOVar2 != (ObjectTransparency *)0x0) {
        (pOVar2->fields)._Transparency_k__BackingField =
             (this->fields)._Transparency_k__BackingField;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateTransparency() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_UpdateTransparency(MVObjectTransparency *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IInputSignalReceiver);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    currentlyIsHot = func_?(1,TypeInfo__IInputSignalReceiver,pIVar1);
    MVObjectTransparency_AdjustTransparency(this,currentlyIsHot,(MethodInfo *)0x0);
    pOVar2 = (this->fields).goObjectTransparency;
    if (pOVar2 != (ObjectTransparency *)0x0) {
      (pOVar2->fields)._IsDrawingEnabled_k__BackingField = currentlyIsHot;
      pOVar2 = (this->fields).goObjectTransparency;
      if (pOVar2 != (ObjectTransparency *)0x0) {
        (pOVar2->fields)._Transparency_k__BackingField =
             (this->fields)._Transparency_k__BackingField;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ValidateObjectLinkTarget(MVWorldObjectClient) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_ValidateObjectLinkTarget
               (MVObjectTransparency *this,MVWorldObjectClient *wo,MethodInfo *method)

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


/* MVObjectTransparency(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency__ctor
               (MVObjectTransparency *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,
               (ObjectPrefab *)(pPVar1->fields).mvObjectTransparencyPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    unaff_EDI = (this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    (this->fields)._Transparency_k__BackingField = 0.9;
    (this->fields)._ShowingOutline_k__BackingField = 1;
    if (unaff_EDI != (ObjectPrefab *)0x0) {
      if (((unaff_EDI->klass->_1).naturalAligment <
           (TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject->_1).
           naturalAligment) ||
         ((unaff_EDI->klass->_1).typeHierarchy
          [(TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject->_1).
           naturalAligment - 1] !=
          (Il2CppClass *)
          TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject))
      goto code_?;
      (this->fields).goObjectTransparency = (ObjectTransparency *)unaff_EDI[1].klass;
      func_?();
      pOVar3 = (this->fields).goObjectTransparency;
      if (pOVar3 != (ObjectTransparency *)0x0) {
        (pOVar3->fields).woObjectTransparency = this;
        func_?(&(pOVar3->fields).woObjectTransparency,this);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
MVObjectTransparency_get_DocumentationType(MVObjectTransparency *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_ModelTransparency;
}


/* Boolean get_ShowingOutline() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_get_ShowingOutline(MVObjectTransparency *this,MethodInfo *method)

{
  return (this->fields)._ShowingOutline_k__BackingField;
}


/* Single get_Transparency() */

float Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
      MVObjectTransparency_get_Transparency(MVObjectTransparency *this,MethodInfo *method)

{
  return (this->fields)._Transparency_k__BackingField;
}


/* Void set_ShowingOutline(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_set_ShowingOutline
               (MVObjectTransparency *this,bool value,MethodInfo *method)

{
  (this->fields)._ShowingOutline_k__BackingField = value;
  return;
}


/* Void set_Transparency(Single) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_set_Transparency
               (MVObjectTransparency *this,float value,MethodInfo *method)

{
  (this->fields)._Transparency_k__BackingField = value;
  return;
}

