
/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVCountingCube *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pSVar1 = (SharedCubeFunctions__Class *)0x0;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        pSVar1 = TypeInfo__SharedCubeFunctions;
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = (float)pSVar1;
      rotation.x = gridSize;
      rotation.z = 1.1;
      rotation.w = 0.3;
      scale.y = 1.1;
      scale.x = (float)pSVar1;
      scale.z = 0.3;
      pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVCountingCube *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar1->zeroVector).x;
  (__return_storage_ptr__->m_Center).y = fVar2;
  (__return_storage_ptr__->m_Center).z = fVar3;
  uVar4 = (this->fields).ObjectSize.x;
  uVar5 = (this->fields).ObjectSize.y;
  fVar3 = (this->fields).ObjectSize.z * _UNK_?;
  fVar2 = (float)uVar5 * _UNK_?;
  (__return_storage_ptr__->m_Extents).x = (float)uVar4 * _UNK_?;
  (__return_storage_ptr__->m_Extents).y = fVar2;
  (__return_storage_ptr__->m_Extents).z = fVar3;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_Initialize
               (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&
                    MethodInfo__MVCountingCube__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    func_?(&TypeInfo__OutputSignalTransmitter);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).cubeObject;
  if (pMVar1 != (MVCountingCubeObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__MVCountingCube__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
               ,(MethodInfo *)0x0);
    pIVar2 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                       ((MVWorldObject *)this,0,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                        (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar2;
    func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar2);
    iVar3 = (this->fields)._._._.id;
    pOStack4 = TypeInfo__OutputSignalTransmitter;
    this_01 = (WorldObjectClientRef_1_System_Object_ *)func_?();
    WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
              (this_01,iVar3,(MethodInfo *)0x0);
    (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
    func_?();
    uVar5 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar6 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar6 = (uint)*piVar6 | 0x8000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar5;
    MVCountingCube_SetText(this,(MethodInfo *)0x0);
    iVar3 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (iVar3 == 0) {
      (this->fields).isHot = 1;
    }
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_InputStateUpdateCallback
               (MVCountingCube *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (iVar1 == 1) {
      (this->fields).isHot = 1;
    }
    iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&StringLiteral_reset);
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (this->fields)._._._.data;
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_reset,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
              (TypeInfo__System__Boolean->_0).element_class) goto code_?;
          pcVar3 = (char *)func_?();
          if (*pcVar3 == '\0') goto code_?;
          iVar1 = MVCountingCube_get_StartingValue(this,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    else {
code_?:
      iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
      if (0 < iVar1) {
        iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
        iVar1 = iVar1 + -1;
code_?:
        MVCountingCube_set_CurrentValue(this,iVar1,(MethodInfo *)0x0);
      }
      MVCountingCube_SetText(this,(MethodInfo *)0x0);
      pMVar4 = (this->fields).cubeObject;
      if ((pMVar4 != (MVCountingCubeObject *)0x0) &&
         (this_01 = (pMVar4->fields).audioSource, this_01 != (AudioSource *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                  (this_01,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  else {
code_?:
    this_02 = (this->fields).outputSignalTransmitter;
    if (this_02 != (OutputSignalTransmitter *)0x0) {
      OutputSignalTransmitter::OutputSignalTransmitter_Send
                (this_02,(this->fields).isHot,(MethodInfo *)0x0);
      iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
      if (iVar1 != 0) {
        (this->fields).isHot = 0;
      }
      iVar5 = (this->fields).prevVal;
      iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
      if (iVar5 != iVar1) {
        iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
        (this->fields).prevVal = iVar1;
      }
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PlaySound() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_PlaySound
               (MVCountingCube *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).cubeObject;
  if ((pMVar2 != (MVCountingCubeObject *)0x0) &&
     (pAVar3 = (pMVar2->fields).audioSource, pAVar3 != (AudioSource *)0x0)) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_4 = (undefined *)0x0;
    pAStack_5 = pAVar3;
    (*pcRam_?)();
    return;
  }
  uVar6 = func_?(&pAStack_5);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_Reset
               (MVCountingCube *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  value = MVCountingCube_get_StartingValue(this,(MethodInfo *)0x0);
  MVCountingCube_set_CurrentValue(this,value,(MethodInfo *)0x0);
  (this->fields).isHot = 0;
  MVCountingCube_SetText(this,(MethodInfo *)0x0);
  return;
}


/* Void SetText() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_SetText
               (MVCountingCube *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cubeObject;
  if (pMVar1 != (MVCountingCubeObject *)0x0) {
    pMVar2 = (pMVar1->fields).digitManager;
    MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (pMVar2 != (MVCountingCubeDigits *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Char);
        func_?(&StringLiteral__0);
        cRam_? = '\x01';
      }
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (pSVar3 != (String *)0x0) {
        if ((pSVar3->fields)._stringLength < 2) {
          pSVar3 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral__0,pSVar3,(MethodInfo *)0x0);
          if (pSVar3 == (String *)0x0) goto code_?;
        }
        uVar4 = mscorlib.dll::System::String::String_get_Chars(pSVar3,0,(MethodInfo *)0x0);
        this = (MVCountingCube *)(uint)uVar4;
        if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Char);
        }
        s = mscorlib.dll::System::Char::Char_ToString((Char *)&this,(MethodInfo *)0x0);
        value = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
        uVar4 = mscorlib.dll::System::String::String_get_Chars(pSVar3,1,(MethodInfo *)0x0);
        this = (MVCountingCube *)(uint)uVar4;
        pSVar3 = mscorlib.dll::System::Char::Char_ToString((Char *)&this,(MethodInfo *)0x0);
        value_00 = mscorlib.dll::System::Int32::Int32_Parse(pSVar3,(MethodInfo *)0x0);
        pMVar5 = (pMVar2->fields).FrontFirst;
        if (pMVar5 != (MVCountingCubeDigit *)0x0) {
          MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar5,value,(MethodInfo *)0x0);
          pMVar5 = (pMVar2->fields).FrontSecond;
          if (pMVar5 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar5,value_00,(MethodInfo *)0x0);
            pMVar5 = (pMVar2->fields).BackFirst;
            if (pMVar5 != (MVCountingCubeDigit *)0x0) {
              MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar5,value,(MethodInfo *)0x0);
              pMVar5 = (pMVar2->fields).BackSecond;
              if (pMVar5 != (MVCountingCubeDigit *)0x0) {
                MVCountingCubeDigit::MVCountingCubeDigit_set_Number
                          (pMVar5,value_00,(MethodInfo *)0x0);
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


/* MVCountingCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube__ctor
               (MVCountingCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCountingCubeObject);
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  (this->fields).ObjectSize.x = (float)_UNK_?;
  (this->fields).ObjectSize.y = (float)uVar1;
  (this->fields).ObjectSize.z = 0.35;
  (this->fields).prevVal = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
    func_?();
    pMVar3 = extraout_EDX;
  }
  else {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar2->fields).mvCountingCubePrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar4 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar4 = (uint)*piVar4 | 0x10000;
    pMVar3 = (MVCountingCubeObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pMVar3 == (MVCountingCubeObject *)0x0) {
      (this->fields).cubeObject = (MVCountingCubeObject *)0x0;
code_?:
      func_?(&(this->fields).cubeObject,pMVar3);
      return;
    }
    unaff_EDI = TypeInfo__MVCountingCubeObject;
    if (((TypeInfo__MVCountingCubeObject->_1).naturalAligment <=
         (((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
        [(TypeInfo__MVCountingCubeObject->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__MVCountingCubeObject)) {
      (this->fields).cubeObject = pMVar3;
      unaff_EDI = TypeInfo__MVCountingCubeObject;
      if (((TypeInfo__MVCountingCubeObject->_1).naturalAligment <=
           (((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
          [(TypeInfo__MVCountingCubeObject->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__MVCountingCubeObject)) goto code_?;
    }
  }
  func_?(pMVar3,unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 get_CurrentValue() */

int32_t Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_CurrentValue
                  (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_currentValue);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentValue,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class ==
           (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
    pOVar2 = (ObscuredInt *)func_?();
    iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(*pOVar2,(MethodInfo *)0x0);
    return iVar3;
  }
  func_?(pOVar1);
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->leftVector).x;
  uVar3 = (pVVar1->leftVector).y;
  fVar4 = (pVVar1->leftVector).z * _UNK_?;
  fVar5 = (float)uVar3 * _UNK_?;
  __return_storage_ptr__->x = (float)uVar2 * _UNK_?;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->rightVector).x;
  uVar3 = (pVVar1->rightVector).y;
  fVar4 = (pVVar1->rightVector).z * _UNK_?;
  fVar5 = (float)uVar3 * _UNK_?;
  __return_storage_ptr__->x = (float)uVar2 * _UNK_?;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Boolean get_ResetDataValue() */

bool Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_ResetDataValue
               (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_reset,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Int32 get_StartingValue() */

int32_t Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_StartingValue
                  (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_startingValue,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        return *piVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void set_CurrentValue(Int32) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_set_CurrentValue
               (MVCountingCube *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_currentValue);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    puVar2 = &UNK_?;
    pEVar3 = TypeInfo__Extensions;
    func_?();
  }
  value_00.hiddenValue = (int32_t)pEVar3;
  value_00.currentCryptoKey = (int32_t)puVar2;
  value_00.fakeValue = iVar4;
  value_00.inited = pOVar1->inited;
  value_00._13_3_ = *(undefined3 *)&pOVar1->field_0xd;
  Extensions::Extensions_SetObscuredType_2
            (hashtable,StringLiteral_currentValue,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  return;
}


/* Void set_ResetDataValue(Boolean) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_set_ResetDataValue
               (MVCountingCube *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&StringLiteral_reset);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  bStack1 = value;
  value_00 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_reset,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_StartingValue(Int32) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_set_StartingValue
               (MVCountingCube *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_startingValue);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  this = (MVCountingCube *)value;
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_startingValue,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

