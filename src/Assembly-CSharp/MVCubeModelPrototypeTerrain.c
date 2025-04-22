
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
    pCVar1 = ChunkInstances::ChunkInstances_GetChunk(&CStack_2,this_00,chunkPos,(MethodInfo *)0x0)
    ;
    iVar3 = (pCVar1->guid)._b;
    iVar4 = (pCVar1->guid)._c;
    uVar5 = (pCVar1->guid)._d;
    uVar6 = (pCVar1->guid)._e;
    uVar7 = (pCVar1->guid)._f;
    uVar8 = (pCVar1->guid)._g;
    uVar9 = (pCVar1->guid)._h;
    uVar10 = (pCVar1->guid)._i;
    uVar11 = (pCVar1->guid)._j;
    uVar12 = (pCVar1->guid)._k;
    bVar13 = pCVar1->transparent;
    uVar14 = *(undefined3 *)&pCVar1->field_0x21;
    (__return_storage_ptr__->guid)._a = (pCVar1->guid)._a;
    (__return_storage_ptr__->guid)._b = iVar3;
    (__return_storage_ptr__->guid)._c = iVar4;
    (__return_storage_ptr__->guid)._d = uVar5;
    (__return_storage_ptr__->guid)._e = uVar6;
    (__return_storage_ptr__->guid)._f = uVar7;
    (__return_storage_ptr__->guid)._g = uVar8;
    (__return_storage_ptr__->guid)._h = uVar9;
    (__return_storage_ptr__->guid)._i = uVar10;
    (__return_storage_ptr__->guid)._j = uVar11;
    (__return_storage_ptr__->guid)._k = uVar12;
    pBVar15 = pCVar1->collider;
    pMVar16 = pCVar1->renderer;
    pMVar17 = pCVar1->filter;
    __return_storage_ptr__->gameObject = pCVar1->gameObject;
    __return_storage_ptr__->collider = pBVar15;
    __return_storage_ptr__->renderer = pMVar16;
    __return_storage_ptr__->filter = pMVar17;
    __return_storage_ptr__->transparent = bVar13;
    *(undefined3 *)&__return_storage_ptr__->field_0x21 = uVar14;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pCVar1 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar18)();
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
  CullingTerrainManager::CullingTerrainManager__ctor
            (this_00,chunkInstances,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  return;
}


/* Void RemoveCubeNetworkUpdate(IntVector) */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_RemoveCubeNetworkUpdate
               (MVCubeModelPrototypeTerrain *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(0xdb98);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&StringLiteral_This_has_already_been_destroyed);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).removedCubes;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,pos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar2 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_This_has_already_been_destroyed,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).removedCubes;
    value = MVCubeModelBase::MVCubeModelBase_GetCube((MVCubeModelBase *)this,pos,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
      uStack3 =
           (undefined2)
           ((uint)
            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Add_MV__WorldObject__IntVector__MV__WorldObject__CubeBase_
           >> 0x10);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,pos,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Add_MV__WorldObject__IntVector__MV__WorldObject__CubeBase_
                );
      MVCubeModelBase::MVCubeModelBase_RemoveCubeNetworkUpdate
                ((MVCubeModelBase *)this,pos,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_00 = (this->fields).removedCubes;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,intVector,
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
  DStack_6._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key.x = 0;
  DStack_6._current.key.y = 0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._current.key.z = 0;
  DStack_6._current._6_2_ = 0;
  DStack_6._current.value = (Object *)0x0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pDVar7 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)(this->fields).removedCubes;
  if (pDVar7 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)&stack0xffffffa8,pDVar7,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary =
         (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar8->_dictionary;
    DStack_6._version = pDVar8->_version;
    DStack_6._index = pDVar8->_index;
    DStack_6._current.key._0_4_ = (pDVar8->_current).key.sheetInstanceID;
    DStack_6._current._4_8_ = *(undefined8 *)&(pDVar8->_current).key.index;
    DStack_6._getEnumeratorRetType = pDVar8->_getEnumeratorRetType;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__MoveNext__
                        );
      if (bVar11 == 0) break;
      (*(code *)(this->klass->vtable).AddCubeNetworkUpdate_1.method)();
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dispose__
               ,in_stack_12);
    uStack_1 = 0xffffffff;
    pDVar7 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(this->fields).removedCubes;
    if (pDVar7 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (pDVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Clear__
                );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dictionary__
            );
  (this->fields).removedCubes =
       (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)this_01;
  func_?(&(this->fields).removedCubes,this_01);
  if ((TypeInfo__MVCubeModelBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVCubeModelBase);
  }
  MVCubeModelBase::MVCubeModelBase__ctor
            ((MVCubeModelBase *)this,data,worldObjects,prototypes,(MethodInfo *)0x0);
  this_00 = (this->fields)._._.gameObject;
  *(undefined4 *)&(this->fields)._._.interactionFlags = 4;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
  if (this_00 != (GameObject *)0x0) {
    transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pNVar1 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                       ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffc0,transform,
                        (MethodInfo *)0x0);
    if (pNVar1->hasValue == 0) {
      fStack_2 = 0.0;
      fStack_3 = 0.0;
      fStack_4 = 0.0;
      fStack_5 = 0.0;
    }
    else {
      pBVar6 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
               Nullable_1_UnityEngine_Bounds__get_Value
                         ((Bounds *)&stack0xffffffc0,
                          (Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffa4,
                          MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
      fStack_2 = (pBVar6->m_Center).x;
      fStack_3 = (pBVar6->m_Center).y;
      fStack_4 = (pBVar6->m_Center).z;
      fStack_5 = (pBVar6->m_Extents).x;
    }
    puVar7 = &UNK_?;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      bounds.m_Center.y = fStack_3;
      bounds.m_Center.x = fStack_2;
      bounds.m_Center.z = fStack_4;
      bounds.m_Extents.x = fStack_5;
      bounds.m_Extents.y = fStack_5;
      bounds.m_Extents.z = (float)puVar7;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                (this_02,bounds,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).removedCubes;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
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

