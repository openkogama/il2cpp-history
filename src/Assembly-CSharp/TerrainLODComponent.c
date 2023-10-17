
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
  pLVar2 = (this->fields).LODBookkeeping;
  if ((this->fields).prototypeCubeModel != (RuntimePrototypeCubeModel *)0x0) {
    uVar3 = localPos._0_4_;
    fVar4 = (float)(((this->fields).prototypeCubeModel)->fields).chunkSize * (this->fields).scale;
    fVar5 = fVar4 * (float)(int)localPos.x;
    uStack_6 = (uint)(ushort)localPos.z;
    if (pLVar2 != (List_1_MVTerrainLOD_ *)0x0) {
      piVar7 = &(pLVar2->fields)._version;
      *piVar7 = *piVar7 + 1;
      pMVar8 = (pLVar2->fields)._items;
      if (pMVar8 != (MVTerrainLOD__Array *)0x0) {
        uVar9 = (pLVar2->fields)._size;
        if (pMVar8->max_length <= uVar9) {
          (*(pMVar1->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                    (pLVar2,uVar3,uStack_6,fVar5,fVar4 * (float)(int)localPos.y,
                     fVar4 * (float)(int)localPos.z,pMVar1->klass->rgctx_data[0xb].rgctxDataDummy);
          return;
        }
        (pLVar2->fields)._size = uVar9 + 1;
        if (uVar9 < pMVar8->max_length) {
          pIVar10 = &pMVar8->vector[uVar9].localPos;
          pIVar10->x = (short)uVar3;
          pIVar10->y = (short)((uint)uVar3 >> 0x10);
          *(uint *)&pIVar10->z = uStack_6;
          ((Vector3 *)((int)(pIVar10 + 1) + 2))->x = fVar5;
          *(float *)(pIVar10 + 2) = fVar4 * (float)(int)localPos.y;
          pMVar8->vector[uVar9].worldPos.z = fVar4 * (float)(int)localPos.z;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
                (pRVar2,(IntVector *)0x0,(MethodInfo *)0x0);
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
    func_?(0xc19c);
    func_?(&StringLiteral_dynamicLodDistance_CurrentRadius);
    cRam_? = '\x01';
  }
  CStack_1.gameObject = (GameObject *)0x0;
  CStack_1.collider = (BoxCollider *)0x0;
  CStack_1.renderer = (MeshRenderer *)0x0;
  CStack_1.filter = (MeshFilter *)0x0;
  fStack_2 = 0.0;
  uStack_3._0_2_ = 0;
  uStack_3._2_2_ = 0;
  uStack_3._4_4_ = (undefined *)0x0;
  pDStack_4 = (Debug_1__Class *)0x0;
  uStack_5 = 0;
  pLVar6 = (this->fields).LODBookkeeping;
  SStack_7.m_value = 0.0;
  IStack_8.m_value = 0;
  if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
  if ((pLVar6->fields)._size == 0) {
    return;
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_02 == (MainCameraManager *)0x0) ||
     (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_02,(MethodInfo *)0x0), this_03 == (Transform *)0x0))
  goto code_?;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)auStack_10,this_03,(MethodInfo *)0x0);
  uStack_11._0_4_ = pVVar9->x;
  uStack_11._4_4_ = pVVar9->y;
  fStack_12 = pVVar9->z;
  fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar13 = fVar13 * _UNK_?;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if ((double)fVar13 < _UNK_?) {
    fVar14 = (float10)func_?();
    auStack_10._4_8_ = (undefined8)fVar14;
    if ((double)auStack_10._4_8_ != _UNK_?) {
      auStack_10._4_8_ = (double)fVar13 - _UNK_?;
      fVar14 = (float10)func_?();
      goto code_?;
    }
    uVar15 = func_?();
    dVar16 = dStack_17;
    if ((uVar15 & 1) != 0) {
      dVar16 = dStack_17 - _UNK_?;
    }
  }
  else {
    fVar14 = (float10)func_?();
    auStack_10._4_8_ = (undefined8)fVar14;
    if ((double)auStack_10._4_8_ == _UNK_?) {
      uVar15 = func_?();
      dVar16 = dStack_17;
      if ((uVar15 & 1) != 0) {
        dVar16 = dStack_17 + _UNK_?;
      }
    }
    else {
      auStack_10._4_8_ = (double)fVar13 + _UNK_?;
      fVar14 = (float10)func_?();
code_?:
      dStack_17 = (double)fVar14;
      dVar16 = dStack_17;
    }
  }
  iVar18 = (int)dVar16;
  iVar19 = 0;
  if (iVar18 < 1) {
    iVar18 = 1;
  }
  do {
    pLVar6 = (this->fields).LODBookkeeping;
    if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
    if ((pLVar6->fields)._size == 0) {
      return;
    }
    if ((pLVar6->fields)._size <= (this->fields).currentLODPosition) {
      (this->fields).currentLODPosition = 0;
    }
    if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
    puVar20 = (undefined8 *)
             func_?(&stack0xffffff94,pLVar6,(this->fields).currentLODPosition,
                             MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Item_int_
                            );
    this_00 = (this->fields).chunkInstances;
    uStack_3._0_4_ = *(undefined4 *)puVar20;
    uStack_3._4_4_ = *(undefined **)((int)puVar20 + 4);
    pDStack_4 = *(Debug_1__Class **)(puVar20 + 1);
    uStack_5 = *(undefined4 *)((int)puVar20 + 0xc);
    fStack_2 = *(float *)(puVar20 + 2);
    uStack_21 = *puVar20;
    auStack_10._0_4_ = *(undefined4 *)(puVar20 + 1);
    auStack_10._4_4_ = *(undefined4 *)((int)puVar20 + 0xc);
    if (this_00 == (ChunkInstances *)0x0) goto code_?;
    bVar22 = ChunkInstances::ChunkInstances_TryGetValue
                      (this_00,SUB86(uStack_21,0),&CStack_1,(MethodInfo *)0x0);
    pLVar6 = (this->fields).LODBookkeeping;
    if (bVar22 == 0) {
      if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__RemoveAt
                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pLVar6,
                 (this->fields).currentLODPosition,
                 MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__RemoveAt_int_);
    }
    else {
      if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
      iVar23 = func_?(&stack0xffffff94,(short)pLVar6,(this->fields).currentLODPosition,
                               MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Item_int_
                              );
      fVar14 = (float10)func_?(*(undefined4 *)(iVar23 + 8),*(undefined4 *)(iVar23 + 0xc),
                                        *(undefined4 *)(iVar23 + 0x10),(int)uStack_11,
                                        (short)((ulonglong)uStack_11 >> 0x20),fStack_12,0);
      pDVar24 = (this->fields).dynamicLodDistance;
      if (pDVar24 == (DynamicLODDistance *)0x0) goto code_?;
      chunk.collider = CStack_1.collider;
      chunk.gameObject = CStack_1.gameObject;
      chunk.renderer = CStack_1.renderer;
      chunk.filter = CStack_1.filter;
      TerrainLODComponent_ChangeLODChunk
                (this,chunk,(IntVector *)&uStack_3,(float)fVar14,(pDVar24->fields).currentRadius,
                 (MethodInfo *)0x0);
      pDVar24 = (this->fields).dynamicLodDistance;
      if (pDVar24 == (DynamicLODDistance *)0x0) goto code_?;
      pTVar25 = (this->fields).triangleCounter;
      if ((float)fVar14 < (pDVar24->fields).maxRadius) {
        if (pTVar25 == (TerrainLODComponent_TriangleCounter *)0x0) goto code_?;
        localPos_00.z = uStack_3._4_2_;
        localPos_00.x = (int16_t)uStack_3;
        localPos_00.y = uStack_3._2_2_;
        TerrainLODComponent+TriangleCounter::TerrainLODComponent_TriangleCounter_Add
                  (pTVar25,localPos_00,(MethodInfo *)0x0);
      }
      else {
        if (pTVar25 == (TerrainLODComponent_TriangleCounter *)0x0) goto code_?;
        localPos.z = uStack_3._4_2_;
        localPos.x = (int16_t)uStack_3;
        localPos.y = uStack_3._2_2_;
        TerrainLODComponent+TriangleCounter::TerrainLODComponent_TriangleCounter_Remove
                  (pTVar25,localPos,(MethodInfo *)0x0);
      }
      this_01 = (List_1_TranslateSoundData_ *)(this->fields).LODBookkeeping;
      if (this_01 == (List_1_TranslateSoundData_ *)0x0) goto code_?;
      value._4_4_ = uStack_3._4_4_;
      value.moveValue = (float)(undefined4)uStack_3;
      value.worldPos.x = (float)pDStack_4;
      value.worldPos.y = (float)uStack_5;
      value.worldPos.z = fStack_2;
      mscorlib.dll::System::Collections::Generic::List`1[TranslateSoundData]::
      List_1_TranslateSoundData__set_Item
                (this_01,(this->fields).currentLODPosition,value,
                 MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__set_Item_int__MVTerrainLOD_
                );
    }
    piVar26 = &(this->fields).currentLODPosition;
    *piVar26 = *piVar26 + 1;
    iVar19 = iVar19 + 1;
  } while (iVar19 < iVar18);
  pTVar25 = (this->fields).triangleCounter;
  if (pTVar25 != (TerrainLODComponent_TriangleCounter *)0x0) {
    numObjects = TerrainLODComponent+TriangleCounter::
                 TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                           (pTVar25,(this->fields).prototypeCubeModel,(MethodInfo *)0x0);
    pDVar24 = (this->fields).dynamicLodDistance;
    if (pDVar24 != (DynamicLODDistance *)0x0) {
      DynamicLODDistance::DynamicLODDistance_Update(pDVar24,numObjects,(MethodInfo *)0x0);
      if ((this->fields).debug == 0) {
        return;
      }
      pDVar24 = (this->fields).dynamicLodDistance;
      if (pDVar24 != (DynamicLODDistance *)0x0) {
        SStack_7.m_value = (pDVar24->fields).currentRadius;
        pSVar27 = mscorlib.dll::System::Single::Single_ToString(&SStack_7,(MethodInfo *)0x0);
        pSVar27 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_dynamicLodDistance_CurrentRadius,pSVar27,
                             (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          pDStack_4 = TypeInfo__UnityEngine__Debug;
          uStack_3._4_4_ = &UNK_?;
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar27,(MethodInfo *)0x0);
        pTVar25 = (this->fields).triangleCounter;
        if (pTVar25 != (TerrainLODComponent_TriangleCounter *)0x0) {
          IStack_8.m_value =
               TerrainLODComponent+TriangleCounter::
               TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                         (pTVar25,(this->fields).prototypeCubeModel,(MethodInfo *)0x0);
          pSVar27 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
          pSVar27 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_TriangleCount__,pSVar27,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar27,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
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
    func_?(0xe3ec);
    func_?(0x935c);
    func_?(&TypeInfo__System__Collections__Generic__List<MVTerrainLOD>);
    func_?(&
                    MethodInfo__TerrainLODComponent__chunkInstances_Changed_System__Object__ChunkInstancesChanged_
                   );
    func_?(&TypeInfo__TerrainLODComponent__TriangleCounter);
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVTerrainLOD_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVTerrainLOD>);
  if (this_00 != (List_1_MVTerrainLOD_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__List__);
    (this->fields).LODBookkeeping = this_00;
    func_?(&this->fields,this_00);
    value = (TerrainLODComponent_TriangleCounter *)
            func_?(TypeInfo__TerrainLODComponent__TriangleCounter);
    if (value != (TerrainLODComponent_TriangleCounter *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                       );
        func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                       );
        cRam_? = '\x01';
      }
      this_01 = (HashSet_1_UnityEngine_Vector3_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                               );
      if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                  );
        pMVar4 = (MethodInfo *)&value->fields;
        (value->fields).enabledChunks = (HashSet_1_MV_WorldObject_IntVector_ *)this_01;
        func_?(pMVar4,this_01);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,pMVar4);
        pMVar4 = (MethodInfo *)&(this->fields).triangleCounter;
        (this->fields).triangleCounter = value;
        func_?(pMVar4,value);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,pMVar4);
        (this->fields).prototypeCubeModel = prototypeCubeModel;
        func_?((short)&(this->fields).prototypeCubeModel,prototypeCubeModel);
        (this->fields).chunkInstances = chunkInstances;
        func_?(&(this->fields).chunkInstances,(short)chunkInstances);
        (this->fields).dynamicLodDistance = dynamicLodDistance;
        func_?(&(this->fields).dynamicLodDistance,dynamicLodDistance);
        (this->fields).scale = scale;
        (this->fields).debug = debug;
        if (chunkInstances != (ChunkInstances *)0x0) {
          piVar5 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,
                                          chunkInstances);
          uStack_1 = 1;
          while (piVar5 != (int *)0x0) {
            cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar5);
            if (cVar6 == '\0') {
              uStack_1 = 0xffffffff;
              iVar7 = func_?(piVar5,TypeInfo__System__IDisposable);
              if (iVar7 != 0) {
                func_?(0,TypeInfo__System__IDisposable,iVar7);
              }
              uStack_1 = 0xffffffff;
              this_02 = (UnityAction_2_System_Object_System_Object_ *)
                        func_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
              if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (this_02,(Object *)this,
                           MethodInfo__TerrainLODComponent__chunkInstances_Changed_System__Object__ChunkInstancesChanged_
                           ,(MethodInfo *)0x0);
                ChunkInstances::ChunkInstances_add_Changed
                          (chunkInstances,(EventHandler_1_ChunkInstancesChanged_ *)this_02,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              break;
            }
            if (piVar5 == (int *)0x0) break;
            uVar8 = 0;
            uVar9 = *(ushort *)(*piVar5 + 0xb2);
            if (uVar9 != 0) {
              do {
                if (*(IEnumerator__Class **)(*(int *)(*piVar5 + 0x58) + (uint)uVar8 * 8) ==
                    TypeInfo__System__Collections__IEnumerator) {
                  puVar10 = (undefined4 *)
                           (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar8 * 8) * 8 + 0xc4 +
                           *piVar5);
                  goto code_?;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar9);
            }
            puVar10 = (undefined4 *)
                     func_?(piVar5,TypeInfo__System__Collections__IEnumerator,1);
code_?:
            piVar11 = (int *)(*(code *)*puVar10)(piVar5,puVar10[1]);
            if (piVar11 == (int *)0x0) break;
            if (*(Il2CppClass **)(*piVar11 + 0x20) !=
                (
                TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                ->_0).element_class) {
              func_?(piVar11,
                              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                             );
              break;
            }
            pIVar12 = (IntVector *)func_?(piVar11);
            TerrainLODComponent_AddToLOD(this,*pIVar12,(MethodInfo *)0x0);
          }
        }
      }
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

