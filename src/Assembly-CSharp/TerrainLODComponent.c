
/* Void AddToLOD(IntVector) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_AddToLOD
               (TerrainLODComponent *this,IntVector localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__Add_MVTerrainLOD_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__Add_MVTerrainLOD_;
  this_00 = (List_1_TranslateSoundData_ *)(this->fields).LODBookkeeping;
  if ((this->fields).prototypeCubeModel != (RuntimePrototypeCubeModel *)0x0) {
    fVar2 = (float)(((this->fields).prototypeCubeModel)->fields).chunkSize * (this->fields).scale;
    fVar3 = fVar2 * (float)(int)localPos.x;
    uStack_4 = (uint)(ushort)localPos.z;
    if (this_00 != (List_1_TranslateSoundData_ *)0x0) {
      piVar5 = &(this_00->fields)._version;
      *piVar5 = *piVar5 + 1;
      pTVar6 = (this_00->fields)._items;
      if (pTVar6 != (TranslateSoundData__Array *)0x0) {
        uVar7 = (this_00->fields)._size;
        if (pTVar6->max_length <= uVar7) {
          item._6_2_ = 0;
          item._0_6_ = localPos;
          item.worldPos.x = fVar3;
          item.worldPos.y = fVar2 * (float)(int)localPos.y;
          item.worldPos.z = fVar2 * (float)(int)localPos.z;
          mscorlib.dll::System::Collections::Generic::List`1[TranslateSoundData]::
          List_1_TranslateSoundData__AddWithResize
                    (this_00,item,pMVar1->klass->rgctx_data[0xe].method);
          return;
        }
        (this_00->fields)._size = uVar7 + 1;
        if (uVar7 < pTVar6->max_length) {
          pTVar8 = pTVar6->vector + uVar7;
          pTVar8->moveValue = localPos._0_4_;
          *(uint *)&pTVar8->moveToGridPos = uStack_4;
          (pTVar8->worldPos).x = fVar3;
          (pTVar8->worldPos).y = fVar2 * (float)(int)localPos.y;
          pTVar6->vector[uVar7].worldPos.z = fVar2 * (float)(int)localPos.z;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ChangeLODChunk(ChunkInstances+ChunkInstanceVariables, IntVector ByRef, Single, Single) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_ChangeLODChunk
               (TerrainLODComponent *this,ChunkInstances_ChunkInstanceVariables chunk,
               IntVector *chunkPosition,float distance,float renderDistance,MethodInfo *method)

{
  if (renderDistance < distance) {
    if (chunk.renderer == (MeshRenderer *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)chunk.renderer,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)chunk.renderer,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).prototypeCubeModel;
      if (pRVar2 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveRefenceFromChunk
                (pRVar2,chunkPosition,(MethodInfo *)0x0);
    }
  }
  if (distance < renderDistance) {
    if (chunk.renderer == (MeshRenderer *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)chunk.renderer,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)chunk.renderer,1,(MethodInfo *)0x0);
      pRVar2 = (this->fields).prototypeCubeModel;
      if (pRVar2 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddRefenceToChunk
                (pRVar2,chunkPosition,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ChangeLODTerrain() */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_ChangeLODTerrain
               (TerrainLODComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__set_Item_int__MVTerrainLOD_
                   );
    func_?(0xe174);
    func_?(&StringLiteral_dynamicLodDistance_CurrentRadius);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).LODBookkeeping;
  fStack_2 = 0.0;
  SStack_3.m_value = 0.0;
  IStack_4.m_value = 0;
  uStack_5._0_2_ = 0;
  uStack_5._2_2_ = 0;
  uStack_5._4_4_ = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  if (pLVar1 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
  if ((pLVar1->fields)._size == 0) {
    return;
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_03 == (MainCameraManager *)0x0) ||
     (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_03,(MethodInfo *)0x0), this_04 == (Transform *)0x0))
  goto code_?;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)auStack_9,this_04,(MethodInfo *)0x0);
  uStack_10._0_4_ = pVVar8->x;
  uStack_10._4_4_ = pVVar8->y;
  fStack_11 = pVVar8->z;
  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar12 = fVar12 * _UNK_?;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar13 = (double)fVar12;
  if (dVar13 < _UNK_?) {
    puVar14 = &UNK_?;
    fVar15 = (float10)func_?();
    auStack_9._4_8_ = (undefined8)fVar15;
    if ((double)auStack_9._4_8_ != _UNK_?) {
      auStack_9._4_8_ = (double)fVar12 - _UNK_?;
      uVar16 = (undefined4)auStack_9._4_8_;
      puStack_17 = (undefined *)((ulonglong)auStack_9._4_8_ >> 0x20);
      puVar18 = &UNK_?;
      fVar15 = (float10)func_?();
      goto code_?;
    }
    uVar19 = func_?();
    dVar20 = dStack_21;
    if ((uVar19 & 1) != 0) {
      dVar20 = dStack_21 - _UNK_?;
    }
  }
  else {
    puVar14 = &UNK_?;
    fVar15 = (float10)func_?();
    auStack_9._4_8_ = (undefined8)fVar15;
    if ((double)auStack_9._4_8_ == _UNK_?) {
      uVar19 = func_?();
      dVar20 = dStack_21;
      if ((uVar19 & 1) != 0) {
        dVar20 = dStack_21 + _UNK_?;
      }
    }
    else {
      auStack_9._4_8_ = (double)fVar12 + _UNK_?;
      uVar16 = (undefined4)auStack_9._4_8_;
      puStack_17 = (undefined *)((ulonglong)auStack_9._4_8_ >> 0x20);
      puVar18 = &UNK_?;
      fVar15 = (float10)func_?();
code_?:
      dVar13 = (double)CONCAT44(uVar16,puVar18);
      dStack_21 = (double)fVar15;
      dVar20 = dStack_21;
    }
  }
  iVar22 = (int)dVar20;
  iVar23 = 0;
  if (iVar22 < 1) {
    iVar22 = 1;
  }
  do {
    pLVar1 = (this->fields).LODBookkeeping;
    if (pLVar1 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    if ((pLVar1->fields)._size <= (this->fields).currentLODPosition) {
      (this->fields).currentLODPosition = 0;
    }
    if (pLVar1 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
    puVar24 = (undefined8 *)
             func_?(auStack_25,pLVar1,(this->fields).currentLODPosition,
                             MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Item_int_
                            );
    this_00 = (this->fields).chunkInstances;
    uStack_5._0_4_ = *(undefined4 *)puVar24;
    uStack_5._4_4_ = *(undefined4 *)((int)puVar24 + 4);
    uStack_6 = *(undefined4 *)(puVar24 + 1);
    uStack_7 = *(undefined4 *)((int)puVar24 + 0xc);
    fStack_2 = *(float *)(puVar24 + 2);
    uStack_26 = *puVar24;
    auStack_9._0_4_ = *(undefined4 *)(puVar24 + 1);
    auStack_9._4_4_ = *(undefined4 *)((int)puVar24 + 0xc);
    if (this_00 == (ChunkInstances *)0x0) goto code_?;
    bVar27 = ChunkInstances::ChunkInstances_TryGetValue
                      (this_00,SUB86(uStack_26,0),
                       (ChunkInstances_ChunkInstanceVariables *)&stack0xffffff80,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)
              (this->fields).LODBookkeeping;
    if (bVar27 == 0) {
      if (this_01 ==
          (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      Implementation::UIRStylePainter+RepeatRectUV]::
      List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
                (this_01,(this->fields).currentLODPosition,
                 MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__RemoveAt_int_);
    }
    else {
      if (this_01 ==
          (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0)
      goto code_?;
      iVar28 = func_?(auStack_25,(short)this_01,(this->fields).currentLODPosition,
                               MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Item_int_
                              );
      fVar15 = (float10)func_?(*(undefined4 *)(iVar28 + 8),*(undefined4 *)(iVar28 + 0xc),
                                        *(undefined4 *)(iVar28 + 0x10),(int)uStack_10,
                                        (short)((ulonglong)uStack_10 >> 0x20),fStack_11,0);
      pDVar29 = (this->fields).dynamicLodDistance;
      if (pDVar29 == (DynamicLODDistance *)0x0) goto code_?;
      TerrainLODComponent_ChangeLODChunk
                (this,(ChunkInstances_ChunkInstanceVariables)
                      ZEXT1636(CONCAT412(puStack_17,
                                         CONCAT48((int)((ulonglong)dVar13 >> 0x20),
                                                  CONCAT44(SUB84(dVar13,0),puVar14)))),
                 (IntVector *)&uStack_5,(float)fVar15,(pDVar29->fields).currentRadius,
                 (MethodInfo *)0x0);
      pDVar29 = (this->fields).dynamicLodDistance;
      if (pDVar29 == (DynamicLODDistance *)0x0) goto code_?;
      pTVar30 = (this->fields).triangleCounter;
      if ((float)fVar15 < (pDVar29->fields).maxRadius) {
        if (pTVar30 == (TerrainLODComponent_TriangleCounter *)0x0) goto code_?;
        localPos_00.z = uStack_5._4_2_;
        localPos_00.x = (int16_t)uStack_5;
        localPos_00.y = uStack_5._2_2_;
        TerrainLODComponent+TriangleCounter::TerrainLODComponent_TriangleCounter_Add
                  (pTVar30,localPos_00,(MethodInfo *)0x0);
      }
      else {
        if (pTVar30 == (TerrainLODComponent_TriangleCounter *)0x0) goto code_?;
        localPos.z = uStack_5._4_2_;
        localPos.x = (int16_t)uStack_5;
        localPos.y = uStack_5._2_2_;
        TerrainLODComponent+TriangleCounter::TerrainLODComponent_TriangleCounter_Remove
                  (pTVar30,localPos,(MethodInfo *)0x0);
      }
      this_02 = (List_1_TranslateSoundData_ *)(this->fields).LODBookkeeping;
      if (this_02 == (List_1_TranslateSoundData_ *)0x0) goto code_?;
      value._4_4_ = uStack_5._4_4_;
      value.moveValue = (float)(undefined4)uStack_5;
      value.worldPos.x = (float)uStack_6;
      value.worldPos.y = (float)uStack_7;
      value.worldPos.z = fStack_2;
      mscorlib.dll::System::Collections::Generic::List`1[TranslateSoundData]::
      List_1_TranslateSoundData__set_Item
                (this_02,(this->fields).currentLODPosition,value,
                 MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__set_Item_int__MVTerrainLOD_
                );
    }
    piVar31 = &(this->fields).currentLODPosition;
    *piVar31 = *piVar31 + 1;
    iVar23 = iVar23 + 1;
  } while (iVar23 < iVar22);
  pTVar30 = (this->fields).triangleCounter;
  if (pTVar30 != (TerrainLODComponent_TriangleCounter *)0x0) {
    numObjects = TerrainLODComponent+TriangleCounter::
                 TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                           (pTVar30,(this->fields).prototypeCubeModel,(MethodInfo *)0x0);
    pDVar29 = (this->fields).dynamicLodDistance;
    if (pDVar29 != (DynamicLODDistance *)0x0) {
      DynamicLODDistance::DynamicLODDistance_Update(pDVar29,numObjects,(MethodInfo *)0x0);
      if ((this->fields).debug == 0) {
        return;
      }
      pDVar29 = (this->fields).dynamicLodDistance;
      if (pDVar29 != (DynamicLODDistance *)0x0) {
        SStack_3.m_value = (pDVar29->fields).currentRadius;
        pSVar32 = mscorlib.dll::System::Single::Single_ToString(&SStack_3,(MethodInfo *)0x0);
        pSVar32 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_dynamicLodDistance_CurrentRadius,pSVar32,
                             (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar32,(MethodInfo *)0x0);
        pTVar30 = (this->fields).triangleCounter;
        if (pTVar30 != (TerrainLODComponent_TriangleCounter *)0x0) {
          IStack_4.m_value =
               TerrainLODComponent+TriangleCounter::
               TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                         (pTVar30,(this->fields).prototypeCubeModel,(MethodInfo *)0x0);
          pSVar32 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
          pSVar32 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_TriangleCount__,pSVar32,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar32,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* TerrainLODComponent(RuntimePrototypeCubeModel, ChunkInstances, DynamicLODDistance, Single,
   Boolean) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent__ctor
               (TerrainLODComponent *this,RuntimePrototypeCubeModel *prototypeCubeModel,
               ChunkInstances *chunkInstances,DynamicLODDistance *dynamicLodDistance,float scale,
               bool debug,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Key__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVTerrainLOD>);
    func_?(&
                    MethodInfo__TerrainLODComponent__chunkInstances_Changed_System__Object__ChunkInstancesChanged_
                   );
    func_?(&TypeInfo__TerrainLODComponent__TriangleCounter);
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVTerrainLOD_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVTerrainLOD>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__List__);
  (this->fields).LODBookkeeping = this_00;
  func_?(&this->fields,this_00);
  value = (TerrainLODComponent_TriangleCounter *)
          func_?(TypeInfo__TerrainLODComponent__TriangleCounter);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_MV_WorldObject_IntVector_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
  HashSet_1_MV_WorldObject_IntVector___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  pMVar4 = (MethodInfo *)&value->fields;
  (value->fields).enabledChunks = this_01;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar4);
  pMVar4 = (MethodInfo *)&(this->fields).triangleCounter;
  (this->fields).triangleCounter = value;
  func_?(pMVar4,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar4);
  (this->fields).prototypeCubeModel = prototypeCubeModel;
  func_?(&(this->fields).prototypeCubeModel,prototypeCubeModel);
  (this->fields).chunkInstances = chunkInstances;
  func_?(&(this->fields).chunkInstances,chunkInstances);
  (this->fields).dynamicLodDistance = dynamicLodDistance;
  func_?(&(this->fields).dynamicLodDistance,dynamicLodDistance);
  (this->fields).scale = scale;
  (this->fields).debug = debug;
  if (chunkInstances != (ChunkInstances *)0x0) {
    piVar5 = (int *)func_?();
    uStack_1 = 1;
    while (piVar5 != (int *)0x0) {
      cVar6 = func_?();
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        iVar7 = func_?();
        if (iVar7 != 0) {
          func_?();
        }
        uStack_1 = 0xffffffff;
        this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__TerrainLODComponent__chunkInstances_Changed_System__Object__ChunkInstancesChanged_
                   ,(MethodInfo *)0x0);
        ChunkInstances::ChunkInstances_add_Changed
                  (chunkInstances,(EventHandler_1_ChunkInstancesChanged_ *)this_02,(MethodInfo *)0x0
                  );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar5 == (int *)0x0) break;
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar5 + 0xb6);
      if (uVar9 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar5 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar10 = (undefined4 *)
                     (*piVar5 +
                     (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar8 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar10 = (undefined4 *)func_?();
code_?:
      piVar11 = (int *)(*(code *)*puVar10)();
      if (piVar11 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar11 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) {
        func_?();
        break;
      }
      pIVar12 = (IntVector *)func_?();
      TerrainLODComponent_AddToLOD(this,*pIVar12,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void chunkInstances_Changed(Object, ChunkInstancesChanged) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_chunkInstances_Changed
               (TerrainLODComponent *this,Object *sender,ChunkInstancesChanged *e,MethodInfo *method
               )

{
  if (e != (ChunkInstancesChanged *)0x0) {
    if ((e->fields).changeType == 0) {
      TerrainLODComponent_AddToLOD(this,(e->fields).chunkPos,(MethodInfo *)0x0);
    }
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

