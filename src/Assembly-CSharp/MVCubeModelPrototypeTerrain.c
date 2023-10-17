
/* Void Destroy() */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_Destroy
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
              (this_00,(this->fields)._._._.id,(MethodInfo *)0x0);
    MVCubeModelBase::MVCubeModelBase_Destroy((MVCubeModelBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ChunkInstances+ChunkInstanceVariables GetChunkInstance(IntVector) */

ChunkInstances_ChunkInstanceVariables *
Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_GetChunkInstance
          (ChunkInstances_ChunkInstanceVariables *__return_storage_ptr__,
          MVCubeModelPrototypeTerrain *this,IntVector chunkPos,MethodInfo *method)

{
  this_00 = (this->fields)._.chunkInstances;
  if (this_00 != (ChunkInstances *)0x0) {
    pCVar1 = ChunkInstances::ChunkInstances_GetChunk(&CStack_2,this_00,chunkPos,(MethodInfo *)0x0);
    pBVar3 = pCVar1->collider;
    pMVar4 = pCVar1->renderer;
    pMVar5 = pCVar1->filter;
    __return_storage_ptr__->gameObject = pCVar1->gameObject;
    __return_storage_ptr__->collider = pBVar3;
    __return_storage_ptr__->renderer = pMVar4;
    __return_storage_ptr__->filter = pMVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pCVar1 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar6)();
  return pCVar1;
}


/* Vector3 GetRandomCubePos() */

Vector3 * Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
          MVCubeModelPrototypeTerrain_GetRandomCubePos
                    (Vector3 *__return_storage_ptr__,MVCubeModelPrototypeTerrain *this,
                    MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    pVVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetRandomCubePos
                       (&VStack_2,this_00,(this->fields)._._.gameObject,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_Initialize
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingTerrainManager);
    cRam_? = '\x01';
  }
  MVCubeModelBase::MVCubeModelBase_Initialize((MVCubeModelBase *)this,(MethodInfo *)0x0);
  chunkInstances = (this->fields)._.chunkInstances;
  this_00 = (CullingTerrainManager *)func_?(TypeInfo__CullingTerrainManager);
  if (this_00 != (CullingTerrainManager *)0x0) {
    CullingTerrainManager::CullingTerrainManager__ctor
              (this_00,chunkInstances,(MVCubeModelBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveCubeNetworkUpdate(IntVector) */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_RemoveCubeNetworkUpdate
               (MVCubeModelPrototypeTerrain *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(0x929c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&StringLiteral_This_has_already_been_destroyed);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            (this->fields).removedCubes;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      (this_00,pos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_This_has_already_been_destroyed,(MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields).removedCubes;
    value = MVCubeModelBase::MVCubeModelBase_GetCube((MVCubeModelBase *)this,pos,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
      uStack2 =
           (undefined2)
           ((uint)
            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Add_MV__WorldObject__IntVector__MV__WorldObject__CubeBase_
           >> 0x10);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,pos,(Object *)value
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Add_MV__WorldObject__IntVector__MV__WorldObject__CubeBase_
                );
      MVCubeModelBase::MVCubeModelBase_RemoveCubeNetworkUpdate
                ((MVCubeModelBase *)this,pos,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean RemovedCubesContainsKey(IntVector) */

bool Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_RemovedCubesContainsKey
               (MVCubeModelPrototypeTerrain *this,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            (this->fields).removedCubes;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      (this_00,intVector,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_Reset
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pSStack_7 = (String *)0x0;
  iStack_8 = 0;
  uStack_9._0_2_ = 0;
  uStack_9._2_2_ = 0;
  uStack_9._4_4_ = (Object *)0x0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)(this->fields).removedCubes;
  if (this_00 !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
             Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
             Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                         *)&stack0xffffffa8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__GetEnumerator__
                       );
    uStack_11 = 0;
    auStack_6._0_4_ = pDVar10->_dictionary;
    auStack_6._4_4_ = pDVar10->_version;
    auStack_6._8_4_ = pDVar10->_index;
    pSStack_7 = (pDVar10->_current).key.AssemblyName;
    uStack_9 = *(undefined8 *)&(pDVar10->_current).key.TypeName;
    iStack_8 = pDVar10->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_12 = (Object *)auStack_6;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__MoveNext__
                        );
      if (bVar13 == 0) break;
      (*(this->klass->vtable).AddCubeNetworkUpdate_1.methodPtr)();
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)auStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dispose__
               ,in_stack_14);
    uStack_1 = 0xffffffff;
    this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).removedCubes;
    if (this_01 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Clear__
                );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MVCubeModelPrototypeTerrain(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
               (MVCubeModelPrototypeTerrain *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
               Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>
                   );
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  NStack_1.value.m_Extents.z = 0.0;
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value.m_Center.x = 0.0;
  NStack_1.value.m_Center.y = 0.0;
  NStack_1.value.m_Center.z = 0.0;
  NStack_1.value.m_Extents.x = 0.0;
  NStack_1.value.m_Extents.y = 0.0;
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>
                           );
  if (this_01 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dictionary__
              );
    (this->fields).removedCubes = this_01;
    func_?(&(this->fields).removedCubes,this_01);
    MVCubeModelBase::MVCubeModelBase__ctor
              ((MVCubeModelBase *)this,data,worldObjects,prototypes,(MethodInfo *)0x0);
    this_00 = (this->fields)._._.gameObject;
    *(undefined4 *)&(this->fields)._._.interactionFlags = 4;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
    if (this_00 != (GameObject *)0x0) {
      transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_00,(MethodInfo *)0x0);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pNVar2 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                         (&NStack_3,transform,(MethodInfo *)0x0);
      NStack_1.hasValue = pNVar2->hasValue;
      NStack_1._1_3_ = *(undefined3 *)&pNVar2->field_0x1;
      NStack_1.value.m_Center.x = (pNVar2->value).m_Center.x;
      NStack_1.value.m_Center.y = (pNVar2->value).m_Center.y;
      NStack_1.value.m_Center.z = (pNVar2->value).m_Center.z;
      NStack_1.value.m_Extents.x = (pNVar2->value).m_Extents.x;
      NStack_1.value.m_Extents.y = (pNVar2->value).m_Extents.y;
      NStack_1.value.m_Extents.z = (pNVar2->value).m_Extents.z;
      if (pNVar2->hasValue == 0) {
        fStack_4 = 0.0;
        fStack_5 = 0.0;
        fStack_6 = 0.0;
        fStack_7 = 0.0;
        uStack_8 = 0;
      }
      else {
        pBVar9 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
                 Nullable_1_UnityEngine_Bounds__get_Value
                           (&NStack_3.value,&NStack_1,
                            MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
        fStack_4 = (pBVar9->m_Center).x;
        fStack_5 = (pBVar9->m_Center).y;
        fStack_6 = (pBVar9->m_Center).z;
        fStack_7 = (pBVar9->m_Extents).x;
        uStack_8._0_4_ = (pBVar9->m_Extents).y;
        uStack_8._4_4_ = (pBVar9->m_Extents).z;
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        bounds.m_Center.y = fStack_5;
        bounds.m_Center.x = fStack_4;
        bounds.m_Center.z = fStack_6;
        bounds.m_Extents.x = fStack_7;
        bounds.m_Extents.y = (float)(int)uStack_8;
        bounds.m_Extents.z = (float)((ulonglong)uStack_8 >> 0x20);
        MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                  (this_02,bounds,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_RequiresResetToEdit() */

bool Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_get_RequiresResetToEdit
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).removedCubes;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Count__
                      );
    return 0 < iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

