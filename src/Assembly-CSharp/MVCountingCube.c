
/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVCountingCube *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.gameObject;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_3.x = 0.0;
  QStack_3.y = 0.0;
  QStack_3.z = 0.0;
  QStack_3.w = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&QStack_3);
  uVar6 = _UNK_?;
  VStack_7.z = _UNK_?;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_8.z = position->z;
  VStack_8.x = position->x;
  VStack_8.y = position->y;
  VStack_7._0_8_ = (ulonglong)uVar6 << 0x20;
  aQStack_9[0].x = QStack_3.x;
  aQStack_9[0].y = QStack_3.y;
  aQStack_9[0].z = QStack_3.z;
  aQStack_9[0].w = QStack_3.w;
  pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                     ((Vector3 *)&QStack_3,&VStack_8,aQStack_9,gridSize,&VStack_7,
                      (MethodInfo *)0x0);
  fVar10 = pVVar2->y;
  fVar11 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar10;
  __return_storage_ptr__->z = fVar11;
  return __return_storage_ptr__;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVCountingCube *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = (this->fields).ObjectSize.z * _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar3->zeroVector).x;
  (__return_storage_ptr__->m_Center).y = fVar4;
  uVar6 = (this->fields).ObjectSize.x;
  uVar7 = (this->fields).ObjectSize.y;
  (__return_storage_ptr__->m_Center).z = fVar5;
  (__return_storage_ptr__->m_Extents).x = (float)uVar6 * fVar1;
  (__return_storage_ptr__->m_Extents).y = (float)uVar7 * fVar1;
  (__return_storage_ptr__->m_Extents).z = fVar2;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_Initialize
               (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCountingCube__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OutputSignalTransmitter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).cubeObject;
  if (pMVar1 != (MVCountingCubeObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar1->fields).visualObject,
               TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
    this_01 = (Action_2_Int32Enum_Object_ *)
              FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__MVCountingCube__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
               ,(MethodInfo *)0x0);
    pIVar2 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                       ((MVWorldObject *)this,0,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                        (Action_2_LogicInputState_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    iVar8 = (this->fields)._._._.id;
    pOVar9 = (OutputSignalTransmitter *)FUN_?(TypeInfo__OutputSignalTransmitter);
    bVar3 = iRam_? != 0;
    (pOVar9->fields).woId = iVar8;
    (this->fields).outputSignalTransmitter = pOVar9;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).outputSignalTransmitter >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    piVar10 = &(this->fields)._._.interactionFlags;
    *piVar10 = *piVar10 | 0x8000;
    pMVar1 = (this->fields).cubeObject;
    if (pMVar1 != (MVCountingCubeObject *)0x0) {
      this_00 = (pMVar1->fields).digitManager;
      iVar8 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
      if (this_00 != (MVCountingCubeDigits *)0x0) {
        MVCountingCubeDigits::MVCountingCubeDigits_AssignNewNumber(this_00,iVar8,(MethodInfo *)0x0);
        iVar8 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
        if (iVar8 == 0) {
          (this->fields).isHot = 1;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_reset);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (this->fields)._._._.data;
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_reset,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)&pOVar2[1].klass == '\0') goto code_?;
      iVar4 = MVCountingCube_get_StartingValue(this,(MethodInfo *)0x0);
code_?:
      MVCountingCube_set_CurrentValue(this,iVar4,(MethodInfo *)0x0);
    }
    else {
code_?:
      iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
      if (0 < iVar1) {
        iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
        iVar4 = iVar1 + -1;
        goto code_?;
      }
    }
    pMVar5 = (this->fields).cubeObject;
    if (pMVar5 == (MVCountingCubeObject *)0x0) goto code_?;
    this_01 = (pMVar5->fields).digitManager;
    iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (this_01 == (MVCountingCubeDigits *)0x0) goto code_?;
    MVCountingCubeDigits::MVCountingCubeDigits_AssignNewNumber(this_01,iVar1,(MethodInfo *)0x0);
    pMVar5 = (this->fields).cubeObject;
    if ((pMVar5 == (MVCountingCubeObject *)0x0) ||
       (this_02 = (pMVar5->fields).audioSource, this_02 == (AudioSource *)0x0))
    goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
              (this_02,(MethodInfo *)0x0);
  }
  this_03 = (this->fields).outputSignalTransmitter;
  if (this_03 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send
              (this_03,(this->fields).isHot,(MethodInfo *)0x0);
    iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      (this->fields).isHot = 0;
    }
    iVar4 = (this->fields).prevVal;
    iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (iVar4 != iVar1) {
      iVar1 = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
      (this->fields).prevVal = iVar1;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PlaySound() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_PlaySound
               (MVCountingCube *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cubeObject;
  if ((pMVar1 == (MVCountingCubeObject *)0x0) ||
     (obj = (pMVar1->fields).audioSource, obj == (AudioSource *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (AudioSource *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)obj,StringLiteral_source,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_Reset
               (MVCountingCube *this,MethodInfo *method)

{
  iVar1 = MVCountingCube_get_StartingValue(this,(MethodInfo *)0x0);
  MVCountingCube_set_CurrentValue(this,iVar1,(MethodInfo *)0x0);
  pMVar2 = (this->fields).cubeObject;
  (this->fields).isHot = 0;
  if (pMVar2 != (MVCountingCubeObject *)0x0) {
    pMVar3 = (pMVar2->fields).digitManager;
    aIStackX_10[0].m_value = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (pMVar3 != (MVCountingCubeDigits *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      if ((pSVar4 == (String *)0x0) ||
         (((pSVar4->fields)._stringLength < 2 &&
          (pSVar4 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral__0,pSVar4,(MethodInfo *)0x0),
          pSVar4 == (String *)0x0)))) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (0 < (pSVar4->fields)._stringLength) {
        uVar6 = (pSVar4->fields)._firstChar;
        if ((*(int *)(lRam_? + 0xe4) == 0) &&
           (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
          FUN_?();
        }
        s = mscorlib.dll::System::Char::Char_ToString_2(uVar6,(MethodInfo *)0x0);
        iVar1 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
        if (1 < (pSVar4->fields)._stringLength) {
          uVar6 = *(uint16_t *)&(pSVar4->fields).field_0x6;
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pSVar4 = mscorlib.dll::System::Char::Char_ToString_2(uVar6,(MethodInfo *)0x0);
          value = mscorlib.dll::System::Int32::Int32_Parse(pSVar4,(MethodInfo *)0x0);
          pMVar7 = (pMVar3->fields).FrontFirst;
          if (pMVar7 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar7,iVar1,(MethodInfo *)0x0);
            pMVar7 = (pMVar3->fields).FrontSecond;
            if (pMVar7 != (MVCountingCubeDigit *)0x0) {
              MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar7,value,(MethodInfo *)0x0);
              pMVar7 = (pMVar3->fields).BackFirst;
              if (pMVar7 != (MVCountingCubeDigit *)0x0) {
                MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar7,iVar1,(MethodInfo *)0x0);
                pMVar7 = (pMVar3->fields).BackSecond;
                if (pMVar7 != (MVCountingCubeDigit *)0x0) {
                  (pMVar7->fields)._number = value;
                  pMVar8 = MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
                                     (pMVar7,(MethodInfo *)0x0);
                  if ((pMVar8 != (MeshRenderer *)0x0) &&
                     (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                               Renderer_get_material((Renderer *)pMVar8,(MethodInfo *)0x0),
                     pMVar9 != (Material *)0x0)) {
                    VVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                            Material_get_mainTextureOffset(pMVar9,(MethodInfo *)0x0);
                    fVar11 = (float)((uint)((float)(pMVar7->fields)._number / _UNK_?) ^
                                    _UNK_?);
                    pMVar8 = MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
                                       (pMVar7,(MethodInfo *)0x0);
                    if ((pMVar8 != (MeshRenderer *)0x0) &&
                       (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                 Renderer_get_material((Renderer *)pMVar8,(MethodInfo *)0x0),
                       pMVar9 != (Material *)0x0)) {
                      offset.y = fVar11;
                      offset.x = VVar10.x;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Material);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                              Material_GetFirstPropertyNameIdByAttribute
                                        (pMVar9,ShaderPropertyFlags__Enum_MainTexture,
                                         (MethodInfo *)0x0);
                      if (iVar1 < 0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                          FUN_?(TypeInfo__UnityEngine__Material);
                        }
                        iVar1 = TypeInfo__UnityEngine__Material->static_fields->k_MainTexId;
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Material::
                      Material_SetTextureOffsetImpl(pMVar9,iVar1,offset,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  FUN_?();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetText() */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_SetText
               (MVCountingCube *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cubeObject;
  if (pMVar1 != (MVCountingCubeObject *)0x0) {
    pMVar2 = (pMVar1->fields).digitManager;
    aIStackX_10[0].m_value = MVCountingCube_get_CurrentValue(this,(MethodInfo *)0x0);
    if (pMVar2 != (MVCountingCubeDigits *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      if ((pSVar3 == (String *)0x0) ||
         (((pSVar3->fields)._stringLength < 2 &&
          (pSVar3 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral__0,pSVar3,(MethodInfo *)0x0),
          pSVar3 == (String *)0x0)))) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (0 < (pSVar3->fields)._stringLength) {
        uVar5 = (pSVar3->fields)._firstChar;
        if ((*(int *)(lRam_? + 0xe4) == 0) &&
           (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
          FUN_?();
        }
        s = mscorlib.dll::System::Char::Char_ToString_2(uVar5,(MethodInfo *)0x0);
        iVar6 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
        if (1 < (pSVar3->fields)._stringLength) {
          uVar5 = *(uint16_t *)&(pSVar3->fields).field_0x6;
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pSVar3 = mscorlib.dll::System::Char::Char_ToString_2(uVar5,(MethodInfo *)0x0);
          value = mscorlib.dll::System::Int32::Int32_Parse(pSVar3,(MethodInfo *)0x0);
          pMVar7 = (pMVar2->fields).FrontFirst;
          if (pMVar7 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar7,iVar6,(MethodInfo *)0x0);
            pMVar7 = (pMVar2->fields).FrontSecond;
            if (pMVar7 != (MVCountingCubeDigit *)0x0) {
              MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar7,value,(MethodInfo *)0x0);
              pMVar7 = (pMVar2->fields).BackFirst;
              if (pMVar7 != (MVCountingCubeDigit *)0x0) {
                MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar7,iVar6,(MethodInfo *)0x0);
                pMVar7 = (pMVar2->fields).BackSecond;
                if (pMVar7 != (MVCountingCubeDigit *)0x0) {
                  (pMVar7->fields)._number = value;
                  pMVar8 = MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
                                     (pMVar7,(MethodInfo *)0x0);
                  if ((pMVar8 != (MeshRenderer *)0x0) &&
                     (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                               Renderer_get_material((Renderer *)pMVar8,(MethodInfo *)0x0),
                     pMVar9 != (Material *)0x0)) {
                    VVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                            Material_get_mainTextureOffset(pMVar9,(MethodInfo *)0x0);
                    fVar11 = (float)((uint)((float)(pMVar7->fields)._number / _UNK_?) ^
                                    _UNK_?);
                    pMVar8 = MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
                                       (pMVar7,(MethodInfo *)0x0);
                    if ((pMVar8 != (MeshRenderer *)0x0) &&
                       (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                 Renderer_get_material((Renderer *)pMVar8,(MethodInfo *)0x0),
                       pMVar9 != (Material *)0x0)) {
                      offset.y = fVar11;
                      offset.x = VVar10.x;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Material);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                              Material_GetFirstPropertyNameIdByAttribute
                                        (pMVar9,ShaderPropertyFlags__Enum_MainTexture,
                                         (MethodInfo *)0x0);
                      if (iVar6 < 0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                          FUN_?(TypeInfo__UnityEngine__Material);
                        }
                        iVar6 = TypeInfo__UnityEngine__Material->static_fields->k_MainTexId;
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Material::
                      Material_SetTextureOffsetImpl(pMVar9,iVar6,offset,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVCountingCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube__ctor
               (MVCountingCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCountingCubeObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  fVar2 = _UNK_?;
  bVar3 = cRam_? == '\0';
  (this->fields).ObjectSize.x = (float)TypeRef__System__Activator__T._0_4_;
  (this->fields).ObjectSize.y = (float)uVar1;
  (this->fields).ObjectSize.z = fVar2;
  (this->fields).prevVal = -1;
  if (bVar3) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar4 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar4->fields).mvCountingCubePrefab,
             worldObjects,(MethodInfo *)0x0);
  piVar6 = &(this->fields)._._.interactionFlags;
  *piVar6 = *piVar6 | 0x10000;
  pMVar7 = (MVCountingCubeObject *)(this->fields)._._.component;
  if (pMVar7 == (MVCountingCubeObject *)0x0) {
    (this->fields).cubeObject = (MVCountingCubeObject *)0x0;
  }
  else {
    bVar8 = (TypeInfo__MVCountingCubeObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar7->klass)->_1).naturalAligment < bVar8) ||
       ((((ObjectPrefab__Class *)pMVar7->klass)->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
        (Il2CppClass *)TypeInfo__MVCountingCubeObject)) {
      FUN_?(pMVar7);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (this->fields).cubeObject = pMVar7;
    bVar8 = (TypeInfo__MVCountingCubeObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar7->klass)->_1).naturalAligment < bVar8) ||
       ((((ObjectPrefab__Class *)pMVar7->klass)->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
        (Il2CppClass *)TypeInfo__MVCountingCubeObject)) {
      FUN_?(pMVar7);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar9 = (uint)((ulonglong)&(this->fields).cubeObject >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar11 == *puVar12;
      if (bVar3) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* Int32 get_CurrentValue() */

int32_t Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_CurrentValue
                  (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentValue,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      OStack_2.currentCryptoKey = *(int32_t *)&pOVar1[1].klass;
      OStack_2.hiddenValue = *(int32_t *)((longlong)&pOVar1[1].klass + 4);
      OStack_2.fakeValue = *(int32_t *)&pOVar1[1].monitor;
      OStack_2._12_4_ = *(undefined4 *)((longlong)&pOVar1[1].monitor + 4);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_InternalDecrypt(&OStack_2,(MethodInfo *)0x0);
      return iVar3;
    }
    FUN_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    pcVar4 = (code *)swi(3);
    iVar3 = (*pcVar4)();
    return iVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->leftVector).x;
  fVar3 = (pVVar1->leftVector).y * _UNK_?;
  fVar4 = (pVVar1->leftVector).z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar2 * _UNK_?;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->rightVector).x;
  fVar3 = (pVVar1->rightVector).y * _UNK_?;
  fVar4 = (pVVar1->rightVector).z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar2 * _UNK_?;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Boolean get_ResetDataValue() */

bool Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_ResetDataValue
               (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_reset);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_reset,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(bool *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Int32 get_StartingValue() */

int32_t Assembly-CSharp.dll::MVCountingCube::MVCountingCube_get_StartingValue
                  (MVCountingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_startingValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_startingValue,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(int32_t *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_CurrentValue(Int32) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_set_CurrentValue
               (MVCountingCube *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uStack_3._0_5_ = CONCAT14(1,(int32_t)uStack_3);
  uStack_2 = CONCAT44(iVar4,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                             static_fields->cryptoKey);
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar4 = 0;
  if (bVar5 != 0) {
    iVar4 = value;
  }
  uStack_3._0_4_ = iVar4;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(uVar1,StringLiteral_currentValue,&uStack_2);
  return;
}


/* Void set_ResetDataValue(Boolean) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_set_ResetDataValue
               (MVCountingCube *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_reset);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  abStackX_10[0] = value;
  value_00 = (Object *)FUN_?(uRam_?,abStackX_10);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)StringLiteral_reset,value_00,CONCAT31((int3)((uint)in_R9D >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_StartingValue(Int32) */

void Assembly-CSharp.dll::MVCountingCube::MVCountingCube_set_StartingValue
               (MVCountingCube *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_startingValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  aiStackX_10[0] = value;
  value_00 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)StringLiteral_startingValue,value_00,
               CONCAT31((int3)((uint)in_R9D >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

