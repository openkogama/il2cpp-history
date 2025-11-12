
/* Void Destroy() */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_Destroy
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
            (pRVar1,(this->fields)._._._.id,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pRVar1->fields).DirtyChunksRegenerated;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,(this->klass->vtable).DirtyChunksRegeneratedHandler.method,
             (MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar5 = 
  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
  if (pDVar4 == (Delegate *)0x0) {
    (pRVar1->fields).DirtyChunksRegenerated =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
  }
  else {
    pAVar3 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
             FUN_?(pDVar4,
                           TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                          );
    if (pAVar3 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      FUN_?(pDVar4,pAVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pRVar1->fields).DirtyChunksRegenerated = pAVar3;
    pAVar5 = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    lVar6 = FUN_?(pDVar4,
                          TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                         );
    if (lVar6 == 0) {
      FUN_?(pDVar4,pAVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pRVar1->fields).DirtyChunksRegenerated >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* ChunkInstances+ChunkInstanceVariables GetChunkInstance(IntVector) */

ChunkInstances_ChunkInstanceVariables *
Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_GetChunkInstance
          (ChunkInstances_ChunkInstanceVariables *__return_storage_ptr__,
          MVCubeModelPrototypeTerrain *this,IntVector *chunkPos,MethodInfo *method)

{
  pCVar1 = (this->fields)._.chunkInstances;
  if (pCVar1 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pCVar1->fields).chunkInstances;
    if (pDVar2 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                  0x0) {
      uStackX_8._0_2_ = chunkPos->x;
      uStackX_8._2_2_ = chunkPos->y;
      iStackX_c = chunkPos->z;
      puVar3 = (undefined8 *)FUN_?(auStack_4,pDVar2,&uStackX_8);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      pGVar7 = (GameObject *)puVar3[2];
      pBVar8 = (BoxCollider *)puVar3[3];
      (__return_storage_ptr__->guid)._a = (int)uVar5;
      (__return_storage_ptr__->guid)._b = (short)((ulonglong)uVar5 >> 0x20);
      (__return_storage_ptr__->guid)._c = (short)((ulonglong)uVar5 >> 0x30);
      (__return_storage_ptr__->guid)._d = (char)uVar6;
      (__return_storage_ptr__->guid)._e = (char)((ulonglong)uVar6 >> 8);
      (__return_storage_ptr__->guid)._f = (char)((ulonglong)uVar6 >> 0x10);
      (__return_storage_ptr__->guid)._g = (char)((ulonglong)uVar6 >> 0x18);
      (__return_storage_ptr__->guid)._h = (char)((ulonglong)uVar6 >> 0x20);
      (__return_storage_ptr__->guid)._i = (char)((ulonglong)uVar6 >> 0x28);
      (__return_storage_ptr__->guid)._j = (char)((ulonglong)uVar6 >> 0x30);
      (__return_storage_ptr__->guid)._k = (char)((ulonglong)uVar6 >> 0x38);
      pMVar9 = (MeshRenderer *)puVar3[4];
      pMVar10 = (MeshFilter *)puVar3[5];
      __return_storage_ptr__->gameObject = pGVar7;
      __return_storage_ptr__->collider = pBVar8;
      uVar5 = puVar3[6];
      __return_storage_ptr__->renderer = pMVar9;
      __return_storage_ptr__->filter = pMVar10;
      *(undefined8 *)&__return_storage_ptr__->transparent = uVar5;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pCVar12 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar11)();
  return pCVar12;
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_Initialize
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingTerrainManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVCubeModelBase::MVCubeModelBase_Initialize((MVCubeModelBase *)this,(MethodInfo *)0x0);
  pCVar1 = (this->fields)._.chunkInstances;
  this_04 = (CullingTerrainManager *)FUN_?(TypeInfo__CullingTerrainManager);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CullingTerrainManager__ChunkInstancesOnChanged_System__Object__ChunkInstancesChanged_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CullingTerrainManager__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>
                 );
    LOCK();
    UNLOCK();
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
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_2[0] = 0;
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dictionary__
            );
  (this_04->fields).terrainCullingSubscriberBases =
       (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)this_01;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(this_04->fields).terrainCullingSubscriberBases >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  (this_04->fields).chunkInstances = pCVar1;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&this_04->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  this_00 = (this_04->fields).chunkInstances;
  this_02 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_02,(Object *)this_04,
             MethodInfo__CullingTerrainManager__ChunkInstancesOnChanged_System__Object__ChunkInstancesChanged_
             ,(MethodInfo *)0x0);
  if (this_00 != (ChunkInstances *)0x0) {
    ChunkInstances::ChunkInstances_add_Changed
              (this_00,(EventHandler_1_ChunkInstancesChanged_ *)this_02,(MethodInfo *)0x0);
    (this_04->fields).cubeModelBase = (MVCubeModelBase *)this;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this_04->fields).cubeModelBase >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    if (this == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
    pAVar9 = (this->fields)._.ChunksChanged;
    this_03 = (UnityAction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)this_04,
               MethodInfo__CullingTerrainManager__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
               ,(MethodInfo *)0x0);
    pKVar10 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
               *)0x0;
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar9,(Delegate *)this_03,(MethodInfo *)0x0);
    pAVar12 = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    if (pDVar11 == (Delegate *)0x0) {
      (this->fields)._.ChunksChanged =
           (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
    }
    else {
      pAVar9 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                FUN_?(pDVar11,
                              TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                             );
      if (pAVar9 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        FUN_?(pDVar11,pAVar12);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      (this->fields)._.ChunksChanged = pAVar9;
      pAVar12 = 
      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
      lVar4 = FUN_?(pDVar11,
                             TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                            );
      if (lVar4 == 0) {
        plVar14 = (longlong *)FUN_?(pDVar11,pAVar12);
code_?:
        FUN_?(plVar14,pKVar10);
code_?:
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._.ChunksChanged >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    if (pCVar1 != (ChunkInstances *)0x0) {
      aplStackX_10[0] =
           (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable,pCVar1);
      alStack_2[1] = 0;
      pplStack_15 = aplStackX_10;
      plStack_16 = alStack_2;
      while (aplStackX_10[0] != (longlong *)0x0) {
        cVar17 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        plVar14 = aplStackX_10[0];
        if (cVar17 == '\0') {
          alStack_2[0] = FUN_?(aplStackX_10[0],TypeInfo__System__IDisposable);
          if (alStack_2[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_2[0]);
          }
          return;
        }
        if (aplStackX_10[0] == (longlong *)0x0) goto code_?;
        lVar4 = *aplStackX_10[0];
        uVar18 = 0;
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          do {
            if (*(IEnumerator__Class **)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar19 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 1)
                         * 0x10 + 0x138 + lVar4);
              goto code_?;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar19 = (undefined8 *)
                  FUN_?(aplStackX_10[0],TypeInfo__System__Collections__IEnumerator,1);
code_?:
        plVar14 = (longlong *)(*(code *)*puVar19)(plVar14,puVar19[1]);
        if (plVar14 == (longlong *)0x0) goto code_?;
        pKVar10 = 
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ;
        if (*(Il2CppClass **)(*plVar14 + 0x40) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) goto code_?;
        uStack_20 = (undefined2)plVar14[2];
        uStack_21 = *(undefined2 *)((longlong)plVar14 + 0x12);
        uStack_22 = *(undefined2 *)((longlong)plVar14 + 0x14);
        uStack_23 = *(undefined2 *)((longlong)plVar14 + 0x16);
        uStack_24 = (undefined2)plVar14[3];
        uStack_25 = *(undefined2 *)((longlong)plVar14 + 0x1a);
        uStack_26 = *(undefined2 *)((longlong)plVar14 + 0x1c);
        uStack_27 = *(undefined2 *)((longlong)plVar14 + 0x1e);
        CStack_28.guid._0_8_ = plVar14[3];
        lStack_29 = plVar14[4];
        pGStack_30 = (GameObject *)plVar14[5];
        pBStack_31 = (BoxCollider *)plVar14[6];
        pMStack_32 = (MeshRenderer *)plVar14[7];
        pMStack_33 = (MeshFilter *)plVar14[8];
        lStack_34 = plVar14[9];
        CStack_28.guid._8_8_ = lStack_29;
        CStack_28.gameObject = pGStack_30;
        CStack_28.collider = pBStack_31;
        CStack_28.renderer = pMStack_32;
        CStack_28.filter = pMStack_33;
        CStack_28._48_8_ = lStack_34;
        CullingTerrainManager::CullingTerrainManager_CreateCullingSubscriber
                  (this_04,(IntVector *)&stack0x00000008,&CStack_28,(MethodInfo *)0x0);
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void RemoveCubeNetworkUpdate(IntVector) */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_RemoveCubeNetworkUpdate
               (MVCubeModelPrototypeTerrain *this,IntVector *pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Add_MV__WorldObject__IntVector__MV__WorldObject__CubeBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_has_already_been_destroyed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).removedCubes;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    IStackX_8.x = pos->x;
    IStackX_8.y = pos->y;
    IStackX_8.z = pos->z;
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar3 = StringLiteral_This_has_already_been_destroyed;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pRVar6 = (this->fields)._.prototypeCubeModel;
    pDVar1 = (this->fields).removedCubes;
    if (pRVar6 != (RuntimePrototypeCubeModel *)0x0) {
      IStackX_8.x = pos->x;
      IStackX_8.y = pos->y;
      IStackX_8.z = pos->z;
      value = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                        (pRVar6,&IStackX_8,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
        IStackX_8.x = pos->x;
        IStackX_8.y = pos->y;
        IStackX_8.z = pos->z;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__TryInsert
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,&IStackX_8,
                   (Object *)value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Add_MV__WorldObject__IntVector__MV__WorldObject__CubeBase_
                   ->klass->rgctx_data[0x22].method);
        pRVar6 = (this->fields)._.prototypeCubeModel;
        if (pRVar6 != (RuntimePrototypeCubeModel *)0x0) {
          IStackX_8.x = pos->x;
          IStackX_8.y = pos->y;
          IStackX_8.z = pos->z;
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveFromChunk
                    (pRVar6,&IStackX_8,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean RemovedCubesContainsKey(IntVector) */

bool Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_RemovedCubesContainsKey
               (MVCubeModelPrototypeTerrain *this,IntVector *intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).removedCubes;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    IStackX_8.x = intVector->x;
    IStackX_8.y = intVector->y;
    IStackX_8.z = intVector->z;
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_Reset
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).removedCubes;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_10 = 2;
    DStack_11._version = (undefined4)uStack_9;
    DStack_11._index = uStack_9._4_4_;
    DStack_11._current.key.x = 0;
    DStack_11._current.key.y = 0;
    DStack_11._current.key.z = 0;
    DStack_11._current._6_2_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    pDStack_5 = pDVar1;
    DStack_11._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                             (&DStack_11,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__MoveNext__
                             ), uVar13 = DStack_11._current._0_8_, bVar12 != 0) {
      aIStackX_18[0].x = DStack_11._current.key.x;
      aIStackX_18[0].y = DStack_11._current.key.y;
      DStack_11._current.key.z = SUB82(uVar13,4);
      aIStackX_18[0].z = DStack_11._current.key.z;
      DStack_11._current._0_8_ = uVar13;
      (*(this->klass->vtable).AddCubeNetworkUpdate_1.methodPtr)
                (this,aIStackX_18,DStack_11._current.value,
                 (this->klass->vtable).AddCubeNetworkUpdate_1.method);
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).removedCubes;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Clear__
                );
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).removedCubes =
       (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).removedCubes >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVCubeModelBase::MVCubeModelBase__ctor
            ((MVCubeModelBase *)this,data,worldObjects,prototypes,(MethodInfo *)0x0);
  this_00 = (this->fields)._._.gameObject;
  (this->fields)._._.interactionFlags = 4;
  if (this_00 != (GameObject *)0x0) {
    transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pNVar6 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                       (&NStack_7,transform,(MethodInfo *)0x0);
    bStack_8 = pNVar6->hasValue;
    uStack_9 = pNVar6->field_0x1;
    uStack_10 = pNVar6->field_0x2;
    uStack_11 = pNVar6->field_0x3;
    uStack_12 = *(undefined1 *)&(pNVar6->value).m_Center.x;
    uStack_13 = *(undefined1 *)((longlong)&(pNVar6->value).m_Center.x + 1);
    uStack_14 = *(undefined1 *)((longlong)&(pNVar6->value).m_Center.x + 2);
    uStack_15 = *(undefined1 *)((longlong)&(pNVar6->value).m_Center.x + 3);
    uStack_16 = *(undefined1 *)&(pNVar6->value).m_Center.y;
    uStack_17 = *(undefined1 *)((longlong)&(pNVar6->value).m_Center.y + 1);
    uStack_18 = *(undefined1 *)((longlong)&(pNVar6->value).m_Center.y + 2);
    uStack_19 = *(undefined1 *)((longlong)&(pNVar6->value).m_Center.y + 3);
    NStack_7._0_8_ = *(undefined8 *)&(pNVar6->value).m_Center;
    pfVar20 = &(pNVar6->value).m_Center.z;
    uStack_21 = *(undefined1 *)pfVar20;
    uStack_22 = *(undefined1 *)((longlong)&(pNVar6->value).m_Center.z + 1);
    uStack_23 = *(undefined1 *)((longlong)&(pNVar6->value).m_Center.z + 2);
    uStack_24 = *(undefined1 *)((longlong)&(pNVar6->value).m_Center.z + 3);
    uVar25 = (pNVar6->value).m_Extents.x;
    uVar26 = (pNVar6->value).m_Extents.y;
    NStack_7.value.m_Center._4_8_ = *(undefined8 *)pfVar20;
    fStack_27 = (pNVar6->value).m_Extents.z;
    fVar28 = fStack_27;
    uStack_29 = uVar25;
    fStack_30 = (float)uVar26;
    if (bStack_8 == 0) {
      NStack_7.hasValue = 0;
      NStack_7._1_3_ = 0;
      NStack_7.value.m_Center.x = 0.0;
      NStack_7.value.m_Center.y = 0.0;
      NStack_7.value.m_Center.z = 0.0;
      uStack_29 = 0;
      fStack_30 = 0.0;
      fVar28 = 0.0;
    }
    uVar31._4_4_ = fVar28;
    uVar31._0_4_ = fStack_30;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      NStack_7.value.m_Extents._0_8_ = uVar31;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                (this_02,(Bounds *)&NStack_7,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Boolean get_RequiresResetToEdit() */

bool Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_get_RequiresResetToEdit
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).removedCubes;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    return 0 < (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

