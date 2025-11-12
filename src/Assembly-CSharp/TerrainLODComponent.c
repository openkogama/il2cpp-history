
/* Void AddToLOD(IntVector) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_AddToLOD
               (TerrainLODComponent *this,IntVector *localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__Add_MVTerrainLOD_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__Add_MVTerrainLOD_;
  pRVar2 = (this->fields).prototypeCubeModel;
  this_00 = (List_1_TranslateSoundData_ *)(this->fields).LODBookkeeping;
  if (pRVar2 != (RuntimePrototypeCubeModel *)0x0) {
    fVar3 = (float)(pRVar2->fields).chunkSize * (this->fields).scale;
    TStack_4.worldPos.z = 0.0;
    TStack_4.worldPos.x = 0.0;
    TStack_4.worldPos.y = 0.0;
    TStack_4._0_6_ = *localPos;
    TStack_4._6_2_ = 0;
    uVar5 = TStack_4._0_8_;
    fVar6 = (float)(int)localPos->x * fVar3;
    fVar7 = (float)(int)localPos->y * fVar3;
    fVar3 = (float)(int)localPos->z * fVar3;
    if (this_00 != (List_1_TranslateSoundData_ *)0x0) {
      piVar8 = &(this_00->fields)._version;
      *piVar8 = *piVar8 + 1;
      pTVar9 = (this_00->fields)._items;
      if (pTVar9 != (TranslateSoundData__Array *)0x0) {
        uVar10 = (this_00->fields)._size;
        if ((uint)pTVar9->max_length <= uVar10) {
          TStack_4._6_2_ = 0;
          TStack_4.worldPos.y = fVar7;
          TStack_4.worldPos.x = fVar6;
          TStack_4.worldPos.z = fVar3;
          mscorlib.dll::System::Collections::Generic::List`1[TranslateSoundData]::
          List_1_TranslateSoundData__AddWithResize
                    (this_00,&TStack_4,pMVar1->klass->rgctx_data[0xe].method);
          return;
        }
        (this_00->fields)._size = uVar10 + 1;
        TStack_4.worldPos.y = fVar7;
        TStack_4.worldPos.x = fVar6;
        if (uVar10 < (uint)pTVar9->max_length) {
          pTVar11 = pTVar9->vector + (int)uVar10;
          TStack_4._5_3_ = SUB83(uVar5,5);
          pTVar11->moveValue = TStack_4.moveValue;
          pTVar11->moveToGridPos = TStack_4.moveToGridPos;
          *(undefined3 *)&pTVar11->field_0x5 = TStack_4._5_3_;
          (pTVar11->worldPos).x = fVar6;
          (pTVar11->worldPos).y = fVar7;
          pTVar9->vector[(int)uVar10].worldPos.z = fVar3;
          return;
        }
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ChangeLODChunk(ChunkInstances+ChunkInstanceVariables, IntVector ByRef, Single, Single) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_ChangeLODChunk
               (TerrainLODComponent *this,ChunkInstances_ChunkInstanceVariables *chunk,
               IntVector *chunkPosition,float distance,float renderDistance,MethodInfo *method)

{
  if (renderDistance < distance) {
    if (chunk->renderer == (MeshRenderer *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)chunk->renderer,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (chunk->renderer == (MeshRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)chunk->renderer,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).prototypeCubeModel;
      if (pRVar2 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar3 = (pRVar2->fields).chunks;
      if (pDVar3 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
      goto code_?;
      aIStack_4[0].x = chunkPosition->x;
      aIStack_4[0].y = chunkPosition->y;
      aIStack_4[0].z = chunkPosition->z;
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,aIStack_4,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                         );
      if (pOVar5 == (Object *)0x0) goto code_?;
      *(int *)&pOVar5[5].monitor = *(int *)&pOVar5[5].monitor + -1;
    }
  }
  if (renderDistance <= distance) {
    return;
  }
  if (chunk->renderer != (MeshRenderer *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)chunk->renderer,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if (chunk->renderer != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)chunk->renderer,1,(MethodInfo *)0x0);
      pRVar2 = (this->fields).prototypeCubeModel;
      if (pRVar2 != (RuntimePrototypeCubeModel *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar3 = (pRVar2->fields).chunks;
        if (pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
          aIStack_4[0].x = chunkPosition->x;
          aIStack_4[0].y = chunkPosition->y;
          aIStack_4[0].z = chunkPosition->z;
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   IntVector,System::Object]::
                   Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                             ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,
                              aIStack_4,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                             );
          if (pOVar5 != (Object *)0x0) {
            *(int *)&pOVar5[5].monitor = *(int *)&pOVar5[5].monitor + 1;
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ChangeLODTerrain() */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_ChangeLODTerrain
               (TerrainLODComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__set_Item_int__MVTerrainLOD_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TriangleCount__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_1.transparent = 0;
  CStack_1._49_7_ = 0;
  pLVar2 = (this->fields).LODBookkeeping;
  CStack_1.guid._a = 0;
  CStack_1.guid._b = 0;
  CStack_1.guid._c = 0;
  CStack_1.guid._d = 0;
  CStack_1.guid._e = 0;
  CStack_1.guid._f = 0;
  CStack_1.guid._g = 0;
  CStack_1.guid._h = 0;
  CStack_1.guid._i = 0;
  CStack_1.guid._j = 0;
  CStack_1.guid._k = 0;
  CStack_1.gameObject = (GameObject *)0x0;
  CStack_1.collider = (BoxCollider *)0x0;
  CStack_1.renderer = (MeshRenderer *)0x0;
  CStack_1.filter = (MeshFilter *)0x0;
  if (pLVar2 != (List_1_MVTerrainLOD_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      return;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_02 != (MainCameraManager *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_02,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_3 = 0;
      uStack_4 = 0;
      pvVar5 = (obj->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,&uStack_3);
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      fVar8 = (float)(*pcRam_?)();
      iVar9 = FUN_?(fVar8 * _UNK_?);
      iVar10 = 0;
      if (iVar9 < 1) {
        iVar9 = 1;
        iVar10 = 0;
      }
      do {
        pLVar2 = (this->fields).LODBookkeeping;
        if (pLVar2 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
        if ((pLVar2->fields)._size == 0) {
          return;
        }
        if ((pLVar2->fields)._size <= (this->fields).currentLODPosition) {
          (this->fields).currentLODPosition = 0;
        }
        if (pLVar2 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
        uVar11 = (this->fields).currentLODPosition;
        if ((uint)(pLVar2->fields)._size <= uVar11) goto code_?;
        pMVar12 = (pLVar2->fields)._items;
        if (pMVar12 == (MVTerrainLOD__Array *)0x0) goto code_?;
        if ((uint)pMVar12->max_length <= uVar11) goto code_?;
        this_00 = (this->fields).chunkInstances;
        fStack_13 = pMVar12->vector[(int)uVar11].worldPos.z;
        pMVar14 = pMVar12->vector + (int)uVar11;
        IStack_15.x = (pMVar14->localPos).x;
        IStack_15.y = (pMVar14->localPos).y;
        uVar16._0_2_ = (pMVar14->localPos).x;
        uVar16._2_2_ = (pMVar14->localPos).y;
        IStack_15.z = (pMVar14->localPos).z;
        uStack_17 = *(undefined2 *)&pMVar14->field_0x6;
        uStack_18 = *(undefined2 *)&(pMVar14->worldPos).x;
        uStack_19 = *(undefined2 *)((longlong)&(pMVar14->worldPos).x + 2);
        uStack_20 = *(undefined2 *)&(pMVar14->worldPos).y;
        uStack_21 = *(undefined2 *)((longlong)&(pMVar14->worldPos).y + 2);
        if (this_00 == (ChunkInstances *)0x0) goto code_?;
        IStackX_8._0_4_ = uVar16;
        IStackX_8.z = IStack_15.z;
        bVar22 = ChunkInstances::ChunkInstances_TryGetValue
                           (this_00,&IStackX_8,&CStack_1,(MethodInfo *)0x0);
        pLVar2 = (this->fields).LODBookkeeping;
        if (bVar22 == 0) {
          if (pLVar2 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
          FUN_?(pLVar2,(this->fields).currentLODPosition);
        }
        else {
          if (pLVar2 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
          uVar11 = (this->fields).currentLODPosition;
          if ((uint)(pLVar2->fields)._size <= uVar11) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pMVar12 = (pLVar2->fields)._items;
          if (pMVar12 == (MVTerrainLOD__Array *)0x0) goto code_?;
          if ((uint)pMVar12->max_length <= uVar11) {
code_?:
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fStack_23 = pMVar12->vector[(int)uVar11].worldPos.x;
          fStack_24 = pMVar12->vector[(int)uVar11].worldPos.y;
          fStack_25 = pMVar12->vector[(int)uVar11].worldPos.z;
          uStack_26 = uStack_3;
          uStack_27 = uStack_4;
          fVar8 = (float)FUN_?(&fStack_23,&uStack_26);
          pDVar28 = (this->fields).dynamicLodDistance;
          if (pDVar28 == (DynamicLODDistance *)0x0) goto code_?;
          aCStack_29[0].guid._a = CStack_1.guid._a;
          aCStack_29[0].guid._b = CStack_1.guid._b;
          aCStack_29[0].guid._c = CStack_1.guid._c;
          aCStack_29[0].guid._d = CStack_1.guid._d;
          aCStack_29[0].guid._e = CStack_1.guid._e;
          aCStack_29[0].guid._f = CStack_1.guid._f;
          aCStack_29[0].guid._g = CStack_1.guid._g;
          aCStack_29[0].guid._h = CStack_1.guid._h;
          aCStack_29[0].guid._i = CStack_1.guid._i;
          aCStack_29[0].guid._j = CStack_1.guid._j;
          aCStack_29[0].guid._k = CStack_1.guid._k;
          aCStack_29[0].gameObject = CStack_1.gameObject;
          aCStack_29[0].collider = CStack_1.collider;
          aCStack_29[0].renderer = CStack_1.renderer;
          aCStack_29[0].filter = CStack_1.filter;
          aCStack_29[0].transparent = CStack_1.transparent;
          aCStack_29[0]._49_7_ = CStack_1._49_7_;
          TerrainLODComponent_ChangeLODChunk
                    (this,aCStack_29,&IStack_15,fVar8,(pDVar28->fields).currentRadius,
                     (MethodInfo *)0x0);
          pDVar28 = (this->fields).dynamicLodDistance;
          if (pDVar28 == (DynamicLODDistance *)0x0) goto code_?;
          pTVar30 = (this->fields).triangleCounter;
          if (fVar8 < (pDVar28->fields).maxRadius) {
            if (pTVar30 == (TerrainLODComponent_TriangleCounter *)0x0) goto code_?;
            aIStack_31[0].y = IStack_15.y;
            aIStack_31[0].x = IStack_15.x;
            aIStack_31[0].z = IStack_15.z;
            TerrainLODComponent+TriangleCounter::TerrainLODComponent_TriangleCounter_Add
                      (pTVar30,aIStack_31,(MethodInfo *)0x0);
          }
          else {
            if (pTVar30 == (TerrainLODComponent_TriangleCounter *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_01 = (pTVar30->fields).enabledChunks;
            if (this_01 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
            aIStackX_18[0].y = IStack_15.y;
            aIStackX_18[0].x = IStack_15.x;
            aIStackX_18[0].z = IStack_15.z;
            System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
            HashSet_1_MV_WorldObject_IntVector__Remove
                      (this_01,aIStackX_18,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                      );
          }
          pLVar2 = (this->fields).LODBookkeeping;
          if (pLVar2 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
          uVar11 = (this->fields).currentLODPosition;
          if ((uint)(pLVar2->fields)._size <= uVar11) goto code_?;
          pMVar12 = (pLVar2->fields)._items;
          if (pMVar12 == (MVTerrainLOD__Array *)0x0) goto code_?;
          if ((uint)pMVar12->max_length <= uVar11) goto code_?;
          pMVar14 = pMVar12->vector + (int)uVar11;
          *(ulonglong *)pMVar14 =
               CONCAT26(uStack_17,CONCAT24(IStack_15.z,CONCAT22(IStack_15.y,IStack_15.x)));
          (pMVar14->worldPos).x = (float)CONCAT22(uStack_19,uStack_18);
          (pMVar14->worldPos).y =
               (float)(int)(CONCAT26(uStack_21,CONCAT24(uStack_20,CONCAT22(uStack_19,uStack_18))
                                    ) >> 0x20);
          pMVar12->vector[(int)uVar11].worldPos.z = fStack_13;
          piVar32 = &(pLVar2->fields)._version;
          *piVar32 = *piVar32 + 1;
        }
        piVar32 = &(this->fields).currentLODPosition;
        *piVar32 = *piVar32 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
      pTVar30 = (this->fields).triangleCounter;
      if (pTVar30 != (TerrainLODComponent_TriangleCounter *)0x0) {
        numObjects = TerrainLODComponent+TriangleCounter::
                     TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                               (pTVar30,(this->fields).prototypeCubeModel,(MethodInfo *)0x0);
        pDVar28 = (this->fields).dynamicLodDistance;
        if (pDVar28 != (DynamicLODDistance *)0x0) {
          DynamicLODDistance::DynamicLODDistance_Update(pDVar28,numObjects,(MethodInfo *)0x0);
          if ((this->fields).debug == 0) {
            return;
          }
          pDVar28 = (this->fields).dynamicLodDistance;
          if (pDVar28 != (DynamicLODDistance *)0x0) {
            fVar8 = (pDVar28->fields).currentRadius;
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            info = mscorlib.dll::System::Globalization::NumberFormatInfo::
                   NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar33 = mscorlib.dll::System::Number::Number_FormatSingle
                                (fVar8,(String *)0x0,info,(MethodInfo *)0x0);
            pSVar33 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_dynamicLodDistance_CurrentRadius,pSVar33,
                                 (MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar33,(MethodInfo *)0x0);
            pTVar30 = (this->fields).triangleCounter;
            if (pTVar30 != (TerrainLODComponent_TriangleCounter *)0x0) {
              IStackX_8._0_4_ =
                   TerrainLODComponent+TriangleCounter::
                   TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                             (pTVar30,(this->fields).prototypeCubeModel,(MethodInfo *)0x0);
              pSVar33 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&IStackX_8,(MethodInfo *)0x0);
              pSVar33 = mscorlib.dll::System::String::String_Concat_4
                                  (StringLiteral_TriangleCount__,pSVar33,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar33,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* TerrainLODComponent(RuntimePrototypeCubeModel, ChunkInstances, DynamicLODDistance, Single,
   Boolean) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent__ctor
               (TerrainLODComponent *this,RuntimePrototypeCubeModel *prototypeCubeModel,
               ChunkInstances *chunkInstances,DynamicLODDistance *dynamicLodDistance,float scale,
               bool debug,MethodInfo *method)

{
  pKVar1 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class *
            )chunkInstances;
  pCStackX_18 = chunkInstances;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVTerrainLOD>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TerrainLODComponent__chunkInstances_Changed_System__Object__ChunkInstancesChanged_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TerrainLODComponent__TriangleCounter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStackX_20 = 0;
  pLVar2 = (List_1_MVTerrainLOD_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVTerrainLOD>);
  FUN_?(pLVar2,MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__List__);
  (this->fields).LODBookkeeping = pLVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    pKVar1 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
               *)(ulonglong)(uVar3 & 0x3f);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (longlong)pKVar1;
      }
      UNLOCK();
    } while (!bVar7);
  }
  pTVar8 = (TerrainLODComponent_TriangleCounter *)
           FUN_?(TypeInfo__TerrainLODComponent__TriangleCounter);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar9 = (HashSet_1_MV_WorldObject_IntVector_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                         );
  FUN_?(pHVar9);
  (pTVar8->fields).enabledChunks = pHVar9;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pTVar8->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    pKVar1 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
               *)(ulonglong)(uVar3 & 0x3f);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (longlong)pKVar1;
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar10 = iRam_?;
  (this->fields).triangleCounter = pTVar8;
  if (iVar10 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).triangleCounter >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    pKVar1 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
               *)(ulonglong)(uVar3 & 0x3f);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (longlong)pKVar1;
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).prototypeCubeModel = prototypeCubeModel;
  iVar11 = 0;
  if (iVar10 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).prototypeCubeModel >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    pKVar1 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
               *)(ulonglong)(uVar3 & 0x3f);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (longlong)pKVar1;
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).chunkInstances = chunkInstances;
  iVar10 = 0;
  if (iVar11 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).chunkInstances >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    pKVar1 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
               *)(ulonglong)(uVar3 & 0x3f);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (longlong)pKVar1;
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).dynamicLodDistance = dynamicLodDistance;
  if (iVar10 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).dynamicLodDistance >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    pKVar1 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
               *)(ulonglong)(uVar3 & 0x3f);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (longlong)pKVar1;
      }
      UNLOCK();
    } while (!bVar7);
  }
  (this->fields).scale = scale;
  (this->fields).debug = debug;
  if (chunkInstances == (ChunkInstances *)0x0) {
    plVar12 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar12,pKVar1);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    plStackX_10 = (longlong *)
                  FUN_?(0,TypeInfo__System__Collections__IEnumerable,chunkInstances);
    uStack_13 = 0;
    pplStack_14 = &plStackX_10;
    plStack_15 = &lStackX_20;
    while (plStackX_10 != (longlong *)0x0) {
      cVar16 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      plVar12 = plStackX_10;
      if (cVar16 == '\0') {
        lStackX_20 = FUN_?(plStackX_10,TypeInfo__System__IDisposable);
        if (lStackX_20 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
        }
        this_00 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__TerrainLODComponent__chunkInstances_Changed_System__Object__ChunkInstancesChanged_
                   ,(MethodInfo *)0x0);
        ChunkInstances::ChunkInstances_add_Changed
                  (chunkInstances,(EventHandler_1_ChunkInstancesChanged_ *)this_00,(MethodInfo *)0x0
                  );
        return;
      }
      if (plStackX_10 == (longlong *)0x0) goto code_?;
      lVar17 = *plStackX_10;
      uVar18 = 0;
      if (*(ushort *)(lVar17 + 0x12e) != 0) {
        do {
          if (*(IEnumerator__Class **)(*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar19 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 1) *
                       0x10 + 0x138 + lVar17);
            goto code_?;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar17 + 0x12e));
      }
      puVar19 = (undefined8 *)
                FUN_?(plStackX_10,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      plVar12 = (longlong *)(*(code *)*puVar19)(plVar12,puVar19[1]);
      if (plVar12 == (longlong *)0x0) goto code_?;
      pKVar1 = 
      TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
      ;
      if (*(Il2CppClass **)(*plVar12 + 0x40) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      aIStack_20[0].x = (int16_t)plVar12[2];
      aIStack_20[0].y = *(int16_t *)((longlong)plVar12 + 0x12);
      aIStack_20[0].z = *(int16_t *)((longlong)plVar12 + 0x14);
      TerrainLODComponent_AddToLOD(this,aIStack_20,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void chunkInstances_Changed(Object, ChunkInstancesChanged) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_chunkInstances_Changed
               (TerrainLODComponent *this,Object *sender,ChunkInstancesChanged *e,MethodInfo *method
               )

{
  if (e != (ChunkInstancesChanged *)0x0) {
    if ((e->fields).changeType == 0) {
      aIStackX_18[0].x = (e->fields).chunkPos.x;
      aIStackX_18[0].y = (e->fields).chunkPos.y;
      aIStackX_18[0].z = (e->fields).chunkPos.z;
      TerrainLODComponent_AddToLOD(this,aIStackX_18,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

