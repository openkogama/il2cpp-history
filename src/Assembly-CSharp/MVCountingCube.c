
/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVCountingCube *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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
  func_?(0);
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
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  VStack_2.x = 0.0;
  fVar5 = (this->fields).ObjectSize.z;
  uVar6._0_4_ = (this->fields).ObjectSize.x;
  uVar6._4_4_ = (this->fields).ObjectSize.y;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  func_?(__return_storage_ptr__,uVar3,fVar4,uVar6,fVar5);
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_Initialize
               (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).cubeObject;
  if (pMVar1 != (MVCountingCubeObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__MVCountingCube__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
               ,
               MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
              );
    pIVar2 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                       ((MVWorldObject *)this,0,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                        (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar2;
    woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    pOStack3 = TypeInfo__OutputSignalTransmitter;
    this_01 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)func_?();
    WorldObjectClientRef`1[MVWorldObjectClient]::WorldObjectClientRef_1_MVWorldObjectClient___ctor
              (this_01,(int32_t)woId,(MethodInfo *)0x0);
    uVar4 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar5 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar5 = (uint)*piVar5 | 0x8000;
    (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar4;
    MVCountingCube_SetText(this,(MethodInfo *)0x0);
    iVar6 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (iVar6 == 0) {
      (this->fields).isHot = 1;
    }
    return;
  }
  func_?(0);
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
        cRam_? = '\x01';
      }
      this_02 = (Dictionary_2_System_Type_Pool_ *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (this_02 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_02,(Type *)StringLiteral_reset,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar2 != (Pool *)0x0) {
          if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
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
         (this_00 = (pMVar4->fields).audioSource, this_00 != (AudioSource *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (this_00,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  else {
code_?:
    this_01 = (this->fields).outputSignalTransmitter;
    if (this_01 != (OutputSignalTransmitter *)0x0) {
      OutputSignalTransmitter::OutputSignalTransmitter_Send
                (this_01,(this->fields).isHot,(MethodInfo *)0x0);
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


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_OnDataUpdate
               (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            ((int32_t)woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void PlaySound() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_PlaySound
               (MVCountingCube *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cubeObject;
  if ((pMVar1 == (MVCountingCubeObject *)0x0) ||
     (pAVar2 = (pMVar1->fields).audioSource, pAVar2 == (AudioSource *)0x0)) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)func_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?,0,0);
    func_?(uVar4);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pAVar2,0,0);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_Reset
               (MVCountingCube *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
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
    iVar3 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (pMVar2 != (MVCountingCubeDigits *)0x0) {
      iStack_4 = iVar3;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this = (MVCountingCube *)0x0;
      uStack_5 = 0;
      this_00 = (Collection_1_VoxelHit_ *)func_?(&iStack_4,0);
      if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
        pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
        if ((int)pIVar6 < 2) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          this_00 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::String::String_Concat_2
                              (StringLiteral__0,(String *)this_00,(MethodInfo *)0x0);
        }
        if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
          uVar7 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)this_00,0,(MethodInfo *)0x0);
          this = (MVCountingCube *)(uint)uVar7;
          pSVar8 = (String *)func_?(&this,0);
          iVar3 = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar8,(MethodInfo *)0x0);
          uVar7 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)this_00,1,(MethodInfo *)0x0);
          uStack_5 = (uint)uVar7;
          pSVar8 = (String *)func_?(&uStack_5,0);
          value = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar8,(MethodInfo *)0x0);
          pMVar9 = (pMVar2->fields).FrontFirst;
          if (pMVar9 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar9,iVar3,(MethodInfo *)0x0);
            pMVar9 = (pMVar2->fields).FrontSecond;
            if (pMVar9 != (MVCountingCubeDigit *)0x0) {
              MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar9,value,(MethodInfo *)0x0);
              pMVar9 = (pMVar2->fields).BackFirst;
              if (pMVar9 != (MVCountingCubeDigit *)0x0) {
                MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar9,iVar3,(MethodInfo *)0x0);
                pMVar9 = (pMVar2->fields).BackSecond;
                if (pMVar9 != (MVCountingCubeDigit *)0x0) {
                  MVCountingCubeDigit::MVCountingCubeDigit_set_Number
                            (pMVar9,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVCountingCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube__ctor
               (MVCountingCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0x40000000,0x3f99999a,0x3eb33333,0);
  (this->fields).ObjectSize.x = (float)(undefined4)uStack_2;
  (this->fields).ObjectSize.y = (float)uStack_2._4_4_;
  (this->fields).ObjectSize.z = fStack_1;
  (this->fields).prevVal = -1;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 == (PrefabPool *)0x0) {
    func_?();
  }
  else {
    prefabObject = (ObjectPrefab *)
                   UseLever::UseLever_get_InputSignalReceiver((UseLever *)this_00,(MethodInfo *)0x0)
    ;
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x10000;
    pMVar4 = (MVCountingCubeObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pMVar4 == (MVCountingCubeObject *)0x0) {
      (this->fields).cubeObject = (MVCountingCubeObject *)0x0;
      return;
    }
    bVar5 = (TypeInfo__MVCountingCubeObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar4->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pMVar4->klass)->_1).typeHierarchy[bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__MVCountingCubeObject)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pMVar7 = (MVCountingCubeObject *)0x0;
    if (bVar6) {
      pMVar7 = pMVar4;
    }
    if (pMVar7 != (MVCountingCubeObject *)0x0) {
      (this->fields).cubeObject = pMVar7;
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Int32 get_CurrentValue() */

int32_t Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_CurrentValue
                  (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentValue,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_DocumentationType
          (MVCountingCube *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_CountingCube;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,*pVVar1,1.5,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,*pVVar1,1.5,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Boolean get_ResetDataValue() */

bool Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_ResetDataValue
               (MVCountingCube *this,MethodInfo *method)

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
                       (this_00,(Type *)StringLiteral_reset,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pBStack2 = TypeInfo__System__Boolean;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pBStack2 = (Boolean__Class *)pPVar1;
        pbVar3 = (bool *)func_?();
        return *pbVar3;
      }
      goto code_?;
    }
  }
  pBStack2 = (Boolean__Class *)0x0;
  func_?();
  pBStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Int32 get_StartingValue() */

int32_t Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_StartingValue
                  (MVCountingCube *this,MethodInfo *method)

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
                       (this_00,(Type *)StringLiteral_startingValue,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pIStack2 = TypeInfo__System__Int32;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        pIStack2 = (Int32__Class *)pPVar1;
        piVar3 = (int32_t *)func_?();
        return *piVar3;
      }
      goto code_?;
    }
  }
  pIStack2 = (Int32__Class *)0x0;
  func_?();
  pIStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void set_CurrentValue(Int32) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_set_CurrentValue
               (MVCountingCube *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_Theme_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  value_00 = (Theme *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_00,StringLiteral_reset,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_StartingValue(Int32) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_set_StartingValue
               (MVCountingCube *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_Theme_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  value_00 = (Theme *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_00,StringLiteral_startingValue,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

