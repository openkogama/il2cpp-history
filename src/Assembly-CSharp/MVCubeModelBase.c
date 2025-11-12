
/* Void AddCube(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_AddCube
               (MVCubeModelBase *this,IntVector *pos,CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChangedEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    if (cube != (CubeBase *)0x0) {
      bVar1 = (TypeInfo__Cube->_1).naturalAligment;
      if (((cube->klass->_1).naturalAligment < bVar1) ||
         ((cube->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo__Cube)) {
        FUN_?(cube);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__SharedCubeFunctions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar3 = (this_00->fields).chunkSize;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IStackX_8.x = pos->x;
    IStackX_8.y = pos->y;
    IStackX_8.z = pos->z;
    pIVar4 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                       (&IStackX_10,&IStackX_8,iVar3,(MethodInfo *)0x0);
    pDVar5 = (this_00->fields).chunks;
    uVar6._0_2_ = pIVar4->x;
    uVar6._2_2_ = pIVar4->y;
    iVar7 = pIVar4->z;
    if (pDVar5 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
      IStackX_8._0_4_ = uVar6;
      IStackX_8.z = iVar7;
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar5,&IStackX_8,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar3) {
        pDVar5 = (this_00->fields).chunks;
        if ((pDVar5 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) ||
           (IStackX_8._0_4_ = uVar6, IStackX_8.z = iVar7,
           pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar5,
                               &IStackX_8,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                              ), pOVar8 == (Object *)0x0)) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pOVar8[6].klass == (Object__Class *)0x0) goto code_?;
        IStackX_8.x = pos->x;
        IStackX_8.y = pos->y;
        IStackX_8.z = pos->z;
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                          ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)pOVar8[6].klass,&IStackX_8
                           ,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                            ->klass->rgctx_data[0x21].method);
        if (-1 < iVar3) {
          return;
        }
      }
      IStackX_8.x = pos->x;
      IStackX_8.y = pos->y;
      IStackX_8.z = pos->z;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
                (this_00,&IStackX_8,(Cube *)cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
                 (MethodInfo *)0x0);
      this_01 = (this_00->fields).deltaCubes;
      if (this_01 != (DeltaCubes *)0x0) {
        IStackX_8.x = pos->x;
        IStackX_8.y = pos->y;
        IStackX_8.z = pos->z;
        DeltaCubes::DeltaCubes_Enqueue
                  (this_01,&IStackX_8,(CubeAction__Enum)CONCAT71((int7)((ulonglong)cube >> 8),2),
                   (MethodInfo *)0x0);
        this_02 = (this->fields).changedEventArgsQueue;
        this_03 = (CubeModelChangedEventArgs *)FUN_?(TypeInfo__CubeModelChangedEventArgs);
        IStackX_8.x = pos->x;
        IStackX_8.y = pos->y;
        IStackX_8.z = pos->z;
        CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
                  (this_03,(CubeAction__Enum)CONCAT71((uint7)(byte)((ushort)IStackX_8.z >> 8),2),
                   &IStackX_8,this,(MethodInfo *)0x0);
        if (this_02 != (Queue_1_CubeModelChangedEventArgs_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
          Queue_1_System_Object__Enqueue
                    ((Queue_1_System_Object_ *)this_02,(Object *)this_03,
                     MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                    );
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddCubeNetworkUpdate(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_AddCubeNetworkUpdate
               (MVCubeModelBase *this,IntVector *pos,CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube != (CubeBase *)0x0) {
    byteCorners = (cube->fields).byteCorners;
    faceMaterials = (cube->fields).faceMaterials;
    this_01 = (Cube *)FUN_?(TypeInfo__Cube);
    Cube::Cube__ctor(this_01,byteCorners,faceMaterials,(MethodInfo *)0x0);
    this_00 = (this->fields).prototypeCubeModel;
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      aIStackX_18[0].x = pos->x;
      aIStackX_18[0].y = pos->y;
      aIStackX_18[0].z = pos->z;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
                (this_00,aIStackX_18,this_01,MeshGeneratePriority__Enum_Low,1,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddToChunkInstances(IntVector, ChunkInstances+ChunkInstanceVariables) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_AddToChunkInstances
               (MVCubeModelBase *this,IntVector *chunkPos,ChunkInstances_ChunkInstanceVariables *civ
               ,MethodInfo *method)

{
  pCVar1 = (this->fields).chunkInstances;
  if (pCVar1 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ChunkInstancesChanged);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pCVar1->fields).chunkInstances;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
      IStackX_8.x = chunkPos->x;
      IStackX_8.y = chunkPos->y;
      CStack_2.guid._a = (civ->guid)._a;
      CStack_2.guid._b = (civ->guid)._b;
      CStack_2.guid._c = (civ->guid)._c;
      CStack_2.guid._d = (civ->guid)._d;
      CStack_2.guid._e = (civ->guid)._e;
      CStack_2.guid._f = (civ->guid)._f;
      CStack_2.guid._g = (civ->guid)._g;
      CStack_2.guid._h = (civ->guid)._h;
      CStack_2.guid._i = (civ->guid)._i;
      CStack_2.guid._j = (civ->guid)._j;
      CStack_2.guid._k = (civ->guid)._k;
      CStack_2.gameObject = civ->gameObject;
      CStack_2.collider = civ->collider;
      IStackX_8.z = chunkPos->z;
      CStack_2.renderer = civ->renderer;
      CStack_2.filter = civ->filter;
      CStack_2.transparent = civ->transparent;
      CStack_2._49_7_ = *(undefined7 *)&civ->field_0x31;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
      IntVector,ChunkInstances+ChunkInstanceVariables]::
      Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__TryInsert
                (this_00,&IStackX_8,&CStack_2,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                 ->klass->rgctx_data[0x22].method);
      pEVar3 = (pCVar1->fields).Changed;
      if (pEVar3 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
        lVar4 = FUN_?(TypeInfo__ChunkInstancesChanged);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__EventArgs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
          FUN_?();
        }
        *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)chunkPos;
        *(int16_t *)(lVar4 + 0x18) = chunkPos->z;
        *(undefined4 *)(lVar4 + 0x10) = 0;
        (*(pEVar3->fields)._._.invoke_impl)
                  ((pEVar3->fields)._._.method_code,this,lVar4,(pEVar3->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVCubeModelBase+CurrentTransparencySettings CalculateCurrentTransparencySettings() */

MVCubeModelBase_CurrentTransparencySettings
Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_CalculateCurrentTransparencySettings
          (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).beingEdited != 0) {
    MVar1.active = 0;
    MVar1._1_3_ = 0;
    MVar1.alphaToUse = 0.9;
    return MVar1;
  }
  pLVar2 = (this->fields)._._.objectLinkRefs;
  if (pLVar2 == (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
    uStack_10 = 0;
    LStack_11._8_8_ = pLStack_9;
    LStack_11._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_9 = &LStack_11;
    LStack_11._list = (List_1_System_Object_ *)pLVar2;
    do {
      do {
        do {
          bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_11,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                            );
          pOVar13 = LStack_11._current;
          if (bVar12 == 0) {
            MVar14.active = 0;
            MVar14._1_3_ = 0;
            MVar14.alphaToUse = 0.9;
            return MVar14;
          }
          if (LStack_11._current == (Object *)0x0) goto code_?;
        } while (*(char *)((longlong)&LStack_11._current[1].monitor + 4) == '\0');
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
        unaff_RDI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (this_00,*(int32_t *)((longlong)&pOVar13[1].klass + 4),
                               (MethodInfo *)0x0);
      } while (unaff_RDI == (MVWorldObjectClient *)0x0);
      pTVar15 = (Type *)FUN_?(&(unaff_RDI->klass->_0).byval_arg);
      handle = TypeRef__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar16 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    } while (pTVar15 != pTVar16);
    bVar17 = (TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency->_1).
            naturalAligment;
    if ((bVar17 <= (unaff_RDI->klass->_1).naturalAligment) &&
       ((MVObjectTransparency__Class *)(unaff_RDI->klass->_1).typeHierarchy[(ulonglong)bVar17 - 1] ==
        TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency)) {
      fVar18 = unaff_RDI[1].fields._.position.y;
      MStackX_8 = (MVCubeModelBase_CurrentTransparencySettings)((ulonglong)(uint)fVar18 << 0x20);
      MStackX_8.active = 0.0 < fVar18;
      return MStackX_8;
    }
  }
  FUN_?(unaff_RDI);
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar19 = (code *)swi(3);
  MVar1 = (MVCubeModelBase_CurrentTransparencySettings)(*pcVar19)();
  return MVar1;
}


/* Boolean ContainsCube(IntVector) */

bool Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ContainsCube
               (MVCubeModelBase *this,IntVector *pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    IStackX_8.x = pos->x;
    IStackX_8.y = pos->y;
    IStackX_8.z = pos->z;
    pCVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                       (this_00,&IStackX_8,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    return pCVar1 != (Cube *)0x0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void CornersChanged(IntVector, Cube) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_CornersChanged
               (MVCubeModelBase *this,IntVector *iVector,Cube *cube,MethodInfo *method)

{
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
              (this_00,&IStackX_8,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
               (MethodInfo *)0x0);
    this_01 = (this_00->fields).deltaCubes;
    if (this_01 != (DeltaCubes *)0x0) {
      IStackX_8.x = iVector->x;
      IStackX_8.y = iVector->y;
      IStackX_8.z = iVector->z;
      DeltaCubes::DeltaCubes_Enqueue
                (this_01,&IStackX_8,(CubeAction__Enum)CONCAT71((int7)((ulonglong)cube >> 8),1),
                 (MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CornersChangedDone(IntVector, Cube) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_CornersChangedDone
               (MVCubeModelBase *this,IntVector *iVector,Cube *cube,MethodInfo *method)

{
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
              (this_00,&IStackX_8,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
               (MethodInfo *)0x0);
    this_01 = (this_00->fields).deltaCubes;
    if (this_01 != (DeltaCubes *)0x0) {
      IStackX_8.x = iVector->x;
      IStackX_8.y = iVector->y;
      IStackX_8.z = iVector->z;
      DeltaCubes::DeltaCubes_Enqueue
                (this_01,&IStackX_8,(CubeAction__Enum)CONCAT71((int7)((ulonglong)cube >> 8),4),
                 (MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CubePosToChunkPos(IntVector ByRef) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_CubePosToChunkPos
               (MVCubeModelBase *this,IntVector *pos,MethodInfo *method)

{
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__SharedCubeFunctions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar2._0_2_ = pos->x;
    uVar2._2_2_ = pos->y;
    iVar3 = pos->z;
    chunkSize = (pRVar1->fields).chunkSize;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IStackX_8._0_4_ = uVar2;
    IStackX_8.z = iVar3;
    pIVar4 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                       (&IStackX_10,&IStackX_8,chunkSize,(MethodInfo *)0x0);
    uVar5 = pIVar4->x;
    uVar6 = pIVar4->y;
    sVar7 = pIVar4->z;
    pos->x = pos->x - (short)(pRVar1->fields).chunkSize * uVar5;
    pos->y = pos->y - (short)(pRVar1->fields).chunkSize * uVar6;
    pos->z = pos->z - (short)(pRVar1->fields).chunkSize * sVar7;
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_Destroy
               (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pRVar1 = (this->fields).prototypeCubeModel;
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


/* Void DirtyChunksRegeneratedHandler(HashSet`1[MV.WorldObject.IntVector]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_DirtyChunksRegeneratedHandler
               (MVCubeModelBase *this,HashSet_1_MV_WorldObject_IntVector_ *chunksChanged,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).changedEventArgsQueue;
  while (pQVar1 != (Queue_1_CubeModelChangedEventArgs_ *)0x0) {
    if ((pQVar1->fields)._size < 1) {
      pAVar2 = (this->fields).ChunksChanged;
      if (pAVar2 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        (*(pAVar2->fields)._._.invoke_impl)
                  ((pAVar2->fields)._._.method_code,chunksChanged,(pAVar2->fields)._._.method);
      }
      return;
    }
    pQVar1 = (this->fields).changedEventArgsQueue;
    if (pQVar1 == (Queue_1_CubeModelChangedEventArgs_ *)0x0) break;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
             Queue_1_System_Object__Dequeue
                       ((Queue_1_System_Object_ *)pQVar1,
                        MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Dequeue__
                       );
    pAVar4 = (this->fields).Changed;
    if (pAVar4 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,pOVar3,(pAVar4->fields)._._.method);
    }
    pQVar1 = (this->fields).changedEventArgsQueue;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Bounds GetBounds() */

Bounds * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetBounds
                   (Bounds *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  lStackX_20 = 0;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  pCVar1 = (this->fields).chunkInstances;
  if (pCVar1 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pCVar1->fields).chunkInstances;
    if (pDVar2 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                  0x0) {
      if ((pDVar2->fields)._count == (pDVar2->fields)._freeCount) {
        return __return_storage_ptr__;
      }
      VStack_3.x = 3.4028235e+38;
      VStack_3.y = 3.4028235e+38;
      VStack_3.z = 3.4028235e+38;
      VStack_4.x = -3.4028235e+38;
      VStack_4.y = -3.4028235e+38;
      VStack_4.z = -3.4028235e+38;
      method = (MethodInfo *)0x0;
      if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
        alStackX_10[0] = FUN_?(0,TypeInfo__System__Collections__IEnumerable);
        fVar5 = _UNK_?;
        uStack_6 = 0;
        plStack_7 = alStackX_10;
        plStack_8 = &lStackX_20;
        while (alStackX_10[0] != 0) {
          cVar9 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar9 == '\0') {
            lStackX_20 = FUN_?(alStackX_10[0],TypeInfo__System__IDisposable);
            if (lStackX_20 != 0) {
              FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
            }
            fVar10 = (VStack_4.x - VStack_3.x) * fVar5;
            fVar11 = (VStack_4.y - VStack_3.y) * fVar5;
            fVar5 = (VStack_4.z - VStack_3.z) * fVar5;
            (__return_storage_ptr__->m_Extents).x = fVar10;
            (__return_storage_ptr__->m_Extents).y = fVar11;
            (__return_storage_ptr__->m_Extents).z = fVar5;
            (__return_storage_ptr__->m_Center).x = fVar10 + VStack_3.x;
            (__return_storage_ptr__->m_Center).y = fVar11 + VStack_3.y;
            (__return_storage_ptr__->m_Center).z = fVar5 + VStack_3.z;
            return __return_storage_ptr__;
          }
          if (alStackX_10[0] == 0) goto code_?;
          method = (MethodInfo *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
          if (method == (MethodInfo *)0x0) goto code_?;
          if (*(Il2CppClass **)(method->methodPointer + 0x40) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          this = (MVCubeModelBase *)method->parameters;
          if (this == (MVCubeModelBase *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_12 = 0;
          fStack_13 = 0.0;
          lVar14._0_4_ = (this->fields)._._.id;
          lVar14._4_4_ = (this->fields)._._.groupId;
          if (lVar14 == 0) goto code_?;
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar15;
          (*pcRam_?)(lVar14);
          fVar11 = fStack_13 * fVar5;
          fVar10 = uStack_12._4_4_ * fVar5;
          fVar16 = (float)uStack_12 * fVar5;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_17 = 0;
          fStack_18 = 0.0;
          lVar19._0_4_ = (this->fields)._._.id;
          lVar19._4_4_ = (this->fields)._._.groupId;
          if (lVar19 == 0) goto code_?;
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar15;
          (*pcRam_?)(lVar19);
          VStack_20.z = fStack_18 - fVar11;
          VStack_20.y = uStack_17._4_4_ - fVar10;
          VStack_20.x = (float)uStack_17 - fVar16;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_21 = 0;
          fStack_22 = 0.0;
          lVar23._0_4_ = (this->fields)._._.id;
          lVar23._4_4_ = (this->fields)._._.groupId;
          if (lVar23 == 0) goto code_?;
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar15;
          (*pcRam_?)(lVar23,&uStack_21);
          VStack_24.z = fStack_22 + fVar11;
          VStack_24.y = uStack_21._4_4_ + fVar10;
          VStack_24.x = (float)uStack_21 + fVar16;
          for (index = 0; index < 3; index = index + 1) {
            fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_20,index,method);
            fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_3,index,method);
            if (fVar11 < fVar10) {
              fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 (&VStack_20,index,method);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_3,index,fVar11,in_R9);
            }
            fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_24,index,method);
            fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_4,index,method);
            if (fVar10 < fVar11) {
              fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 (&VStack_24,index,method);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_4,index,fVar11,in_R9);
            }
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  uVar25 = func_?(&UNK_?);
  FUN_?(uVar25);
code_?:
  uVar25 = func_?(&UNK_?);
  FUN_?(uVar25);
code_?:
  uVar25 = func_?(&UNK_?);
  FUN_?(uVar25);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?(method);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  pBVar26 = (Bounds *)(*pcVar15)();
  return pBVar26;
}


/* Cube GetCube(IntVector) */

Cube * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetCube
                 (MVCubeModelBase *this,IntVector *pos,MethodInfo *method)

{
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    aIStackX_8[0].x = pos->x;
    aIStackX_8[0].y = pos->y;
    aIStackX_8[0].z = pos->z;
    pCVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                       (this_00,aIStackX_8,(MethodInfo *)0x0);
    return pCVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar1 = (Cube *)(*pcVar2)();
  return pCVar1;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVCubeModelBase *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  pBVar1 = MVCubeModelBase_GetBounds(&BStack_2,this,(MethodInfo *)0x0);
  fVar3 = (pBVar1->m_Center).y;
  uVar4 = *(undefined8 *)&(pBVar1->m_Center).z;
  fVar5 = (pBVar1->m_Extents).y;
  fVar6 = (pBVar1->m_Extents).z;
  (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
  (__return_storage_ptr__->m_Center).y = fVar3;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar4;
  (__return_storage_ptr__->m_Extents).y = fVar5;
  (__return_storage_ptr__->m_Extents).z = fVar6;
  return __return_storage_ptr__;
}


/* Bounds GetWorldBounds() */

Bounds * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetWorldBounds
                   (Bounds *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  lStackX_20 = 0;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  this_01 = (this->fields).chunkInstances;
  if (this_01 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = ((Object_1__Fields *)&(this_01->fields).chunkInstances)->m_CachedPtr;
    if (pvVar1 != (void *)0x0) {
      if (*(int *)((longlong)pvVar1 + 0x20) == *(int *)((longlong)pvVar1 + 0x28)) {
        return __return_storage_ptr__;
      }
      VStack_2.x = 3.4028235e+38;
      VStack_2.y = 3.4028235e+38;
      VStack_2.z = 3.4028235e+38;
      VStack_3.x = -3.4028235e+38;
      VStack_3.y = -3.4028235e+38;
      VStack_3.z = -3.4028235e+38;
      method = (MethodInfo *)0x0;
      if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
        lStackX_10 = FUN_?(0,TypeInfo__System__Collections__IEnumerable);
        uStack_4 = 0;
        plStack_5 = &lStackX_10;
        plStack_6 = &lStackX_20;
        while (lStackX_10 != 0) {
          cVar7 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar7 == '\0') {
            lStackX_20 = FUN_?(lStackX_10,TypeInfo__System__IDisposable);
            if (lStackX_20 != 0) {
              FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
            }
            fVar8 = (VStack_3.x - VStack_2.x) * _UNK_?;
            fVar9 = (VStack_3.y - VStack_2.y) * _UNK_?;
            fVar10 = (VStack_3.z - VStack_2.z) * _UNK_?;
            (__return_storage_ptr__->m_Extents).x = fVar8;
            (__return_storage_ptr__->m_Extents).y = fVar9;
            (__return_storage_ptr__->m_Extents).z = fVar10;
            (__return_storage_ptr__->m_Center).x = fVar8 + VStack_2.x;
            (__return_storage_ptr__->m_Center).y = fVar9 + VStack_2.y;
            (__return_storage_ptr__->m_Center).z = fVar10 + VStack_2.z;
            return __return_storage_ptr__;
          }
          if (lStackX_10 == 0) goto code_?;
          method = (MethodInfo *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
          if (method == (MethodInfo *)0x0) goto code_?;
          if (*(Il2CppClass **)(method->methodPointer + 0x40) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          this_00 = (Collider *)method->parameters;
          this_01 = (ChunkInstances *)method->return_type;
          if (this_01 == (ChunkInstances *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar1 = ((Object_1__Fields *)&(this_01->fields).chunkInstances)->m_CachedPtr;
          if (pvVar1 == (void *)0x0) goto code_?;
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar11;
          cVar7 = (*pcRam_?)(pvVar1);
          if (cVar7 == '\0') {
            method = (MethodInfo *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)this_01,1,(MethodInfo *)0x0);
          }
          if (this_00 == (Collider *)0x0) goto code_?;
          method = (MethodInfo *)0x0;
          pBVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                             (aBStack_13,this_00,(MethodInfo *)0x0);
          fVar10 = (pBVar12->m_Center).x;
          fVar9 = (pBVar12->m_Center).y;
          fVar8 = (pBVar12->m_Center).z;
          fVar14 = (pBVar12->m_Extents).x;
          uVar15._0_4_ = (pBVar12->m_Extents).y;
          uVar15._4_4_ = (pBVar12->m_Extents).z;
          uStack_16 = uVar15;
          for (index = 0; index < 3; index = index + 1) {
            VStack_17.z = fVar8 - (float)uVar15._4_4_;
            VStack_17.y = fVar9 - (float)(undefined4)uVar15;
            VStack_17.x = fVar10 - fVar14;
            fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (&VStack_17,index,method);
            fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (&VStack_2,index,method);
            if (fVar18 < fVar19) {
              VStack_17.z = fVar8 - (float)uVar15._4_4_;
              VStack_17.y = fVar9 - (float)(undefined4)uVar15;
              VStack_17.x = fVar10 - fVar14;
              fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                (&VStack_17,index,method);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_2,index,fVar18,in_R9);
            }
            VStack_17.z = (float)uVar15._4_4_ + fVar8;
            VStack_17.y = (float)(undefined4)uVar15 + fVar9;
            VStack_17.x = fVar14 + fVar10;
            fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (&VStack_17,index,method);
            fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (&VStack_3,index,method);
            if (fVar19 < fVar18) {
              VStack_17.z = (float)uVar15._4_4_ + fVar8;
              VStack_17.y = (float)(undefined4)uVar15 + fVar9;
              VStack_17.x = fVar14 + fVar10;
              fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                (&VStack_17,index,method);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_3,index,fVar18,in_R9);
            }
          }
          if (cVar7 == '\0') {
            if (this_01 == (ChunkInstances *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)this_01,0,(MethodInfo *)0x0);
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  uVar15 = func_?(&UNK_?);
  FUN_?(uVar15);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?(method);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  pBVar12 = (Bounds *)(*pcVar11)();
  return pBVar12;
}


/* Vector3 GetWorldCenterPos() */

Vector3 * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                    (Vector3 *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  obj = (this->fields)._.transform;
  pBVar1 = MVCubeModelBase_GetBounds(&BStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = (pBVar1->m_Extents).y;
  uStack_3._4_4_ = (pBVar1->m_Extents).z;
  uStack_4._0_4_ = (pBVar1->m_Center).x;
  uStack_4._4_4_ = (pBVar1->m_Center).y;
  uStack_5 = (undefined4)*(undefined8 *)&(pBVar1->m_Center).z;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pVVar7 = (Vector3 *)(*pcVar6)();
    return pVVar7;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_8 = 0;
  fStack_9 = 0.0;
  pvVar10 = (obj->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pVVar7 = (Vector3 *)(*pcVar6)();
    return pVVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar6 = (code *)swi(3);
    pVVar7 = (Vector3 *)(*pcVar6)();
    return pVVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar10,&uStack_4,&uStack_8);
  __return_storage_ptr__->x = (float)(undefined4)uStack_8;
  __return_storage_ptr__->y = (float)uStack_8._4_4_;
  __return_storage_ptr__->z = fStack_9;
  return __return_storage_ptr__;
}


/* Void HandleDelta() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_HandleDelta
               (MVCubeModelBase *this,MethodInfo *method)

{
  rpcm = (this->fields).prototypeCubeModel;
  if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar1 = (rpcm->fields).deltaCubes;
    while (pDVar1 != (DeltaCubes *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar2 = (pDVar1->fields).cubeChange;
      if (pQVar2 == (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
                    0x0) break;
      if ((pQVar2->fields)._size < 1) {
        return;
      }
      pDVar1 = (rpcm->fields).deltaCubes;
      if (pDVar1 == (DeltaCubes *)0x0) break;
      prototypeData = DeltaCubes::DeltaCubes_Dequeue(pDVar1,rpcm,(MethodInfo *)0x0);
      if (prototypeData != (Byte__Array *)0x0) {
        if ((rpcm->fields).prototypeState == 0) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 == (MVNetworkGame_OperationRequests *)0x0) break;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                    (this_01,(rpcm->fields).prototypeId,prototypeData,(MethodInfo *)0x0);
        }
        else if ((rpcm->fields).prototypeState == 1) {
          this_00 = (rpcm->fields).pendingDeltaCubes;
          if (this_00 == (List_1_System_Byte_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
          List_1_System_Byte__InsertRange
                    (this_00,(this_00->fields)._size,(IEnumerable_1_System_Byte_ *)prototypeData,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                     ->klass->rgctx_data[0x12].method);
        }
      }
      pDVar1 = (rpcm->fields).deltaCubes;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean HasInstances() */

bool Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_HasInstances
               (MVCubeModelBase *this,MethodInfo *method)

{
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pHVar2 = (pRVar1->fields).instances;
    if (pHVar2 != (HashSet_1_System_Int32_ *)0x0) {
      return 1 < (pHVar2->fields)._count;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_Initialize
               (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._.previewOwnerProfileId != 0) {
    (*(this->klass->vtable).AddPreviewBox.methodPtr)(this);
    piVar1 = &(this->fields)._.interactionFlags;
    *piVar1 = *piVar1 | 0x20000;
  }
  pMVar2 = 
  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
  ;
  this_00 = (this->fields)._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    }
    p_Var4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar2->field7_0x38).rgctx_data)->method);
    uVar3 = 0;
    if (p_Var4 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var8 = p_Var4->vector;
      while( true ) {
        if ((int)p_Var4->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)p_Var4->max_length <= uVar3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        obj = (Object *)*pp_Var8;
        if (obj == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = obj[1].klass;
        if (pOVar5 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pOVar5);
        uVar3 = uVar3 + 1;
        pp_Var8 = pp_Var8 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void MakeUnique() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_MakeUnique
               (MVCubeModelBase *this,MethodInfo *method)

{
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pHVar2 = (pRVar1->fields).instances;
    if (pHVar2 != (HashSet_1_System_Int32_ *)0x0) {
      if ((pHVar2->fields)._count < 2) {
        return;
      }
      pRVar1 = (this->fields).prototypeCubeModel;
      if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
                  (pRVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
             (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
            (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 != (WorldNetwork *)0x0)) &&
           (this_00 = (pWVar5->fields)._.worldInventory, this_00 != (MVWorldInventory *)0x0)) {
          MVWorldInventory::MVWorldInventory_RequestWoMakeUniquePrototype
                    (this_00,(this->fields)._._.id,(MethodInfo *)0x0);
          pRVar1 = (this->fields).prototypeCubeModel;
          if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddReferenceToAllChunks
                      (pRVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ObjectLinkChanged(Boolean) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ObjectLinkChanged
               (MVCubeModelBase *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                 );
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
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MVObjectEnabler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStackX_20 = (List_1_System_Object_ *)0x0;
  lStack_1 = 0;
  pLVar2 = (this->fields)._._.objectLinkRefs;
  if (pLVar2 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      method = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (longlong)method;
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
    plStack_9 = (longlong *)0x0;
    aLStack_10[0]._8_8_ = pLStack_8;
    aLStack_10[0]._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = aLStack_10;
    aLStack_10[0]._list = (List_1_System_Object_ *)pLVar2;
    do {
      do {
        do {
          bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (aLStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                             );
          pOVar12 = aLStack_10[0]._current;
          if (bVar11 == 0) goto code_?;
          if (aLStack_10[0]._current == (Object *)0x0) {
code_?:
            FUN_?();
            FUN_?();
            goto code_?;
          }
        } while (*(char *)((longlong)&aLStack_10[0]._current[1].monitor + 4) == '\0');
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 == (MVWorldObjectClientManager *)0x0) {
          FUN_?();
          goto code_?;
        }
        method = (MethodInfo *)0x0;
        pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_00,*(int32_t *)((longlong)&pOVar12[1].klass + 4),(MethodInfo *)0x0)
        ;
      } while (pMVar13 == (MVWorldObjectClient *)0x0);
      unaff_RDI = (Type *)FUN_?(&(pMVar13->klass->_0).byval_arg);
      handle = TypeRef__MVObjectEnabler;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar14 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    } while (unaff_RDI != pTVar14);
    visible = 1;
code_?:
    if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
      pLStackX_20 = (List_1_System_Object_ *)
                    FUN_?(0,TypeInfo__System__Collections__IEnumerable);
      uStack_4 = 0;
      pLStack_8 = (List_1_T_Enumerator_System_Object_ *)&pLStackX_20;
      plStack_9 = &lStack_1;
      while (pLStackX_20 != (List_1_System_Object_ *)0x0) {
        cVar15 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        pLVar16 = pLStackX_20;
        if (cVar15 == '\0') {
          lStack_1 = FUN_?(pLStackX_20,TypeInfo__System__IDisposable);
          if (lStack_1 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lStack_1);
          }
          return;
        }
        if (pLStackX_20 == (List_1_System_Object_ *)0x0) goto code_?;
        pLVar17 = pLStackX_20->klass;
        uVar18 = 0;
        uVar19._0_1_ = (pLVar17->_1).rank;
        uVar19._1_1_ = (pLVar17->_1).minimumAlignment;
        if (uVar19 != 0) {
          do {
            if (pLVar17->interfaceOffsets[uVar18].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar20 = &(pLVar17->vtable).Equals + (pLVar17->interfaceOffsets[uVar18].offset + 1);
              goto code_?;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar19);
        }
        pVVar20 = (VirtualInvokeData *)
                  FUN_?(pLStackX_20,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        plVar21 = (longlong *)(*pVVar20->methodPtr)(pLVar16,pVVar20->method);
        if (plVar21 == (longlong *)0x0) goto code_?;
        method = (MethodInfo *)
                 TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ;
        if (*(Il2CppClass **)(*plVar21 + 0x40) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) goto code_?;
        unaff_RDI = (Type *)plVar21[5];
        if (unaff_RDI == (Type *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar22 = (unaff_RDI->fields)._impl.value;
        if (pvVar22 == (void *)0x0) goto code_?;
        pcVar23 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0))
        goto code_?;
        pcRam_? = pcVar23;
        (*pcRam_?)(pvVar22,visible);
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
code_?:
  uVar24 = func_?(&UNK_?);
  FUN_?(uVar24);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_RDI,(MethodInfo *)0x0);
code_?:
  plVar21 = (longlong *)FUN_?();
code_?:
  FUN_?(plVar21,method);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void ObjectLinkTransparency() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ObjectLinkTransparency
               (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVar1 = MVCubeModelBase_CalculateCurrentTransparencySettings(this,(MethodInfo *)0x0);
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (ChunkInstances *)0x0) {
    ChunkInstances::ChunkInstances_SetTransparent(this_00,MVar1.active,(MethodInfo *)0x0);
    if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
      plVar2 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
      fStackX_24 = MVar1.alphaToUse;
code_?:
      do {
        if (plVar2 == (longlong *)0x0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar4 == '\0') {
          lVar5 = FUN_?(plVar2,TypeInfo__System__IDisposable);
          if (lVar5 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lVar5);
          }
          return;
        }
        if (plVar2 == (longlong *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        lVar5 = *plVar2;
        uVar6 = 0;
        if (*(ushort *)(lVar5 + 0x12e) != 0) {
          do {
            if (*(IEnumerator__Class **)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) + 1) *
                        0x10 + 0x138 + lVar5);
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_?(plVar2,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        plVar8 = (longlong *)(*(code *)*puVar7)(plVar2,puVar7[1]);
        if (plVar8 == (longlong *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pKVar9 = 
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ;
        if (*(Il2CppClass **)(*plVar8 + 0x40) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) {
code_?:
          FUN_?(plVar8,pKVar9);
          goto code_?;
        }
        this_01 = (Renderer *)plVar8[7];
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        if (MVar1.active == 0) {
          if (pMVar10 != (MaterialLoader *)0x0) {
            if (this_01 != (Renderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                        (this_01,(pMVar10->fields)._CubeModelMaterial_k__BackingField,
                         (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                        (this_01,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
              goto code_?;
            }
            FUN_?();
          }
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          plVar8 = (longlong *)FUN_?();
          goto code_?;
        }
        if (pMVar10 == (MaterialLoader *)0x0) goto code_?;
        if (this_01 == (Renderer *)0x0) goto code_?;
        pKVar9 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                   *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                  (this_01,(pMVar10->fields)._CubeModelMaterialTransp_k__BackingField,
                   (MethodInfo *)0x0);
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            (this_01,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MVCubeModelBase);
        }
        if (this_02 == (Material *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (this_02,TypeInfo__MVCubeModelBase->static_fields->TransparencyShaderProperty,
                   fStackX_24,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                  (this_01,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
      } while( true );
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnObjectLinkChanged(ObjectLinkChangeType, ObjectLink) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_OnObjectLinkChanged
               (MVCubeModelBase *this,ObjectLinkChangeType__Enum changeType,ObjectLink *objectLink,
               MethodInfo *method)

{
  MVCubeModelBase_ObjectLinkChanged(this,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
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
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVar1 = MVCubeModelBase_CalculateCurrentTransparencySettings(this,(MethodInfo *)0x0);
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (ChunkInstances *)0x0) {
    ChunkInstances::ChunkInstances_SetTransparent(this_00,MVar1.active,(MethodInfo *)0x0);
    if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
      plVar2 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
      fStackX_24 = MVar1.alphaToUse;
code_?:
      do {
        if (plVar2 == (longlong *)0x0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar4 == '\0') {
          lVar5 = FUN_?(plVar2,TypeInfo__System__IDisposable);
          if (lVar5 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lVar5);
          }
          return;
        }
        if (plVar2 == (longlong *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        lVar5 = *plVar2;
        uVar6 = 0;
        if (*(ushort *)(lVar5 + 0x12e) != 0) {
          do {
            if (*(IEnumerator__Class **)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) + 1) *
                        0x10 + 0x138 + lVar5);
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_?(plVar2,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        plVar8 = (longlong *)(*(code *)*puVar7)(plVar2,puVar7[1]);
        if (plVar8 == (longlong *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pKVar9 = 
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ;
        if (*(Il2CppClass **)(*plVar8 + 0x40) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) {
code_?:
          FUN_?(plVar8,pKVar9);
          goto code_?;
        }
        this_01 = (Renderer *)plVar8[7];
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        if (MVar1.active == 0) {
          if (pMVar10 != (MaterialLoader *)0x0) {
            if (this_01 != (Renderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                        (this_01,(pMVar10->fields)._CubeModelMaterial_k__BackingField,
                         (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                        (this_01,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
              goto code_?;
            }
            FUN_?();
          }
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          plVar8 = (longlong *)FUN_?();
          goto code_?;
        }
        if (pMVar10 == (MaterialLoader *)0x0) goto code_?;
        if (this_01 == (Renderer *)0x0) goto code_?;
        pKVar9 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                   *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                  (this_01,(pMVar10->fields)._CubeModelMaterialTransp_k__BackingField,
                   (MethodInfo *)0x0);
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            (this_01,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MVCubeModelBase);
        }
        if (this_02 == (Material *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (this_02,TypeInfo__MVCubeModelBase->static_fields->TransparencyShaderProperty,
                   fStackX_24,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                  (this_01,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
      } while( true );
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveCube(IntVector) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_RemoveCube
               (MVCubeModelBase *this,IntVector *pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChangedEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__SharedCubeFunctions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar1 = (this_00->fields).chunkSize;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IStackX_8.x = pos->x;
    IStackX_8.y = pos->y;
    IStackX_8.z = pos->z;
    pIVar2 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                       (&IStackX_10,&IStackX_8,iVar1,(MethodInfo *)0x0);
    pDVar3 = (this_00->fields).chunks;
    uVar4._0_2_ = pIVar2->x;
    uVar4._2_2_ = pIVar2->y;
    iVar5 = pIVar2->z;
    if (pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
      IStackX_8._0_4_ = uVar4;
      IStackX_8.z = iVar5;
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,&IStackX_8,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                         ->klass->rgctx_data[0x21].method);
      if (iVar1 < 0) {
        return;
      }
      pDVar3 = (this_00->fields).chunks;
      if ((pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
         (IStackX_8._0_4_ = uVar4, IStackX_8.z = iVar5,
         pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,
                             &IStackX_8,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                            ), pOVar6 != (Object *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pOVar6[6].klass != (Object__Class *)0x0) {
          IStackX_8.x = pos->x;
          IStackX_8.y = pos->y;
          IStackX_8.z = pos->z;
          iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                            ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)pOVar6[6].klass,
                             &IStackX_8,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                             ->klass->rgctx_data[0x21].method);
          if (iVar1 < 0) {
            return;
          }
          IStackX_8.x = pos->x;
          IStackX_8.y = pos->y;
          IStackX_8.z = pos->z;
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveFromChunk
                    (this_00,&IStackX_8,MeshGeneratePriority__Enum_HighGenerateAllDirty,
                     (MethodInfo *)0x0);
          this_01 = (this_00->fields).deltaCubes;
          if (this_01 != (DeltaCubes *)0x0) {
            IStackX_8.x = pos->x;
            IStackX_8.y = pos->y;
            IStackX_8.z = pos->z;
            DeltaCubes::DeltaCubes_Enqueue
                      (this_01,&IStackX_8,CubeAction__Enum_Deleted,(MethodInfo *)0x0);
            this_02 = (this->fields).changedEventArgsQueue;
            this_03 = (CubeModelChangedEventArgs *)
                      FUN_?(TypeInfo__CubeModelChangedEventArgs);
            IStackX_8.x = pos->x;
            IStackX_8.y = pos->y;
            IStackX_8.z = pos->z;
            CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
                      (this_03,CubeAction__Enum_Deleted,&IStackX_8,this,(MethodInfo *)0x0);
            if (this_02 != (Queue_1_CubeModelChangedEventArgs_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Enqueue
                        ((Queue_1_System_Object_ *)this_02,(Object *)this_03,
                         MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                        );
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RemoveCubeNetworkUpdate(IntVector) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_RemoveCubeNetworkUpdate
               (MVCubeModelBase *this,IntVector *pos,MethodInfo *method)

{
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    aIStackX_8[0].x = pos->x;
    aIStackX_8[0].y = pos->y;
    aIStackX_8[0].z = pos->z;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveFromChunk
              (this_00,aIStackX_8,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReplaceCube(IntVector, Byte) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ReplaceCube
               (MVCubeModelBase *this,IntVector *iVector,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChangedEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    IStackX_8 = *iVector;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ReplaceCube
              (this_00,&IStackX_8,materialId,(MethodInfo *)0x0);
    pQVar1 = (this->fields).changedEventArgsQueue;
    this_01 = (CubeModelChangedEventArgs *)FUN_?(TypeInfo__CubeModelChangedEventArgs);
    _IStackX_8 = CONCAT26(uStackX_e,*iVector);
    CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
              (this_01,(CubeAction__Enum)CONCAT71((uint7)(byte)((ushort)iVector->z >> 8),3),
               &IStackX_8,this,(MethodInfo *)0x0);
    if (pQVar1 != (Queue_1_CubeModelChangedEventArgs_ *)0x0) {
      pCVar2 = (pQVar1->fields)._array;
      if (pCVar2 != (CubeModelChangedEventArgs__Array *)0x0) {
        if ((pQVar1->fields)._size == (int)pCVar2->max_length) {
          pCVar2 = (pQVar1->fields)._array;
          iVar3 = (int)pCVar2->max_length * 2;
          if (iVar3 < (int)pCVar2->max_length + 4) {
            iVar3 = (int)pCVar2->max_length + 4;
          }
          FUN_?(pQVar1,iVar3,
                        MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                        ->klass->rgctx_data[5].rgctxDataDummy);
        }
        pCVar2 = (pQVar1->fields)._array;
        if (pCVar2 != (CubeModelChangedEventArgs__Array *)0x0) {
          FUN_?(pCVar2,(longlong)(pQVar1->fields)._tail,this_01);
          pCVar2 = (pQVar1->fields)._array;
          if (pCVar2 != (CubeModelChangedEventArgs__Array *)0x0) {
            iVar4 = (pQVar1->fields)._tail + 1;
            iVar3 = 0;
            if (iVar4 != (int)pCVar2->max_length) {
              iVar3 = iVar4;
            }
            (pQVar1->fields)._tail = iVar3;
            piVar5 = &(pQVar1->fields)._size;
            *piVar5 = *piVar5 + 1;
            piVar5 = &(pQVar1->fields)._version;
            *piVar5 = *piVar5 + 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetMaterial(IntVector, Face, Byte) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_SetMaterial
               (MVCubeModelBase *this,IntVector *iVector,Face__Enum face,uint8_t material,
               MethodInfo *method)

{
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Cube);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    cube = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                     (this_00,&IStackX_8,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cube == (Cube *)0x0) {
      return;
    }
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar1 = (cube->fields)._.faceMaterials;
    if (pBVar1 != (Byte__Array *)0x0) {
      if ((Face__Enum)pBVar1->max_length <= face) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      IStackX_8.x = iVector->x;
      IStackX_8.y = iVector->y;
      IStackX_8.z = iVector->z;
      pBVar1->vector[(int)face] = material;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
                (this_00,&IStackX_8,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
                 (MethodInfo *)0x0);
      this_01 = (this_00->fields).deltaCubes;
      if (this_01 != (DeltaCubes *)0x0) {
        IStackX_8.x = iVector->x;
        IStackX_8.y = iVector->y;
        IStackX_8.z = iVector->z;
        DeltaCubes::DeltaCubes_Enqueue
                  (this_01,&IStackX_8,(CubeAction__Enum)CONCAT71((int7)((ulonglong)cube >> 8),3),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ToString
                   (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__authorProfileID_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__prototypeCubeModel_PrototypeId_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__can_add_to_inventory_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__group_id_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__id_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__item_id_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  values = (String__Array *)FUN_?(TypeInfo__System__String,7);
  plVar1 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
  if ((plVar1 != (longlong *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170)),
     values != (String__Array *)0x0)) {
    FUN_?(values,0,uVar2);
    bVar3 = true;
    FUN_?(values,1,StringLiteral__id_);
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this->fields,(MethodInfo *)0x0);
    FUN_?(values,2,pSVar4);
    FUN_?(values,3,StringLiteral__group_id_);
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(this->fields)._._.groupId,(MethodInfo *)0x0);
    FUN_?(values,4,pSVar4);
    FUN_?(values,5,StringLiteral__item_id_);
    mscorlib.dll::System::Int32::Int32_ToString
              ((Int32 *)&(this->fields)._._.itemId,(MethodInfo *)0x0);
    FUN_?(values);
    pSVar4 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
    if ((this->fields).prototypeCubeModel != (RuntimePrototypeCubeModel *)0x0) {
      iVar5 = (((this->fields).prototypeCubeModel)->fields)._AuthorProfileID_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_6[0]._pointer._value = (void *)0x0;
      aRStack_6[0]._length = 0;
      aRStack_6[0]._12_4_ = 0;
      pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                          (iVar5,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_5
                          (pSVar4,StringLiteral__authorProfileID_,pSVar7,(MethodInfo *)0x0);
      pRVar8 = (this->fields).prototypeCubeModel;
      if (pRVar8 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      iVar5 = (pRVar8->fields).prototypeId;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_6[0]._pointer._value = (void *)0x0;
      aRStack_6[0]._length = 0;
      aRStack_6[0]._12_4_ = 0;
      pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                          (iVar5,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_5
                          (pSVar4,StringLiteral__prototypeCubeModel_PrototypeId_,pSVar7,
                           (MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar9 != (MVGameControllerBase *)0x0) &&
        (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar10->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (((pMVar11 == (MVLocalPlayer *)0x0) ||
          ((this->fields).prototypeCubeModel == (RuntimePrototypeCubeModel *)0x0)) ||
         ((pMVar11->fields)._._ProfileID_k__BackingField !=
          (((this->fields).prototypeCubeModel)->fields)._AuthorProfileID_k__BackingField)) {
        bVar3 = false;
      }
      else {
        bVar12 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if (((this->klass->_1).naturalAligment < bVar12) ||
           ((MVCubeModelInstance__Class *)(this->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
            TypeInfo__MVCubeModelInstance)) {
          bVar3 = false;
        }
        pMVar13 = (MVCubeModelBase *)0x0;
        if (bVar3) {
          pMVar13 = this;
        }
        bVar3 = pMVar13 != (MVCubeModelBase *)0x0;
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_False);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_True);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar7 = StringLiteral__can_add_to_inventory_;
      pSVar14 = StringLiteral_False;
      if (bVar3) {
        pSVar14 = StringLiteral_True;
      }
      pSVar15 = StringLiteral__can_add_to_inventory_;
      pSVar16 = pSVar14;
      if (((((pSVar4 == (String *)0x0) || ((pSVar4->fields)._stringLength == 0)) ||
           (pSVar15 = pSVar4, StringLiteral__can_add_to_inventory_ == (String *)0x0)) ||
          (((StringLiteral__can_add_to_inventory_->fields)._stringLength == 0 ||
           (pSVar16 = StringLiteral__can_add_to_inventory_, pSVar14 == (String *)0x0)))) ||
         ((pSVar14->fields)._stringLength == 0)) {
        if ((pSVar15 == (String *)0x0) || ((pSVar15->fields)._stringLength == 0)) {
          if ((pSVar16 != (String *)0x0) && ((pSVar16->fields)._stringLength != 0)) {
            return pSVar16;
          }
          return (String *)**(undefined8 **)(lRam_? + 0xb8);
        }
        if ((pSVar16 == (String *)0x0) || ((pSVar16->fields)._stringLength == 0)) {
          return pSVar15;
        }
        iVar17 = (pSVar15->fields)._stringLength;
        pSVar4 = (String *)FUN_?((pSVar16->fields)._stringLength + iVar17,pSVar16,0,0);
        if (pSVar4 == (String *)0x0) {
          FUN_?();
          pcVar18 = (code *)swi(3);
          pSVar4 = (String *)(*pcVar18)();
          return pSVar4;
        }
        if ((pSVar4->fields)._stringLength < (pSVar15->fields)._stringLength) {
          uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar19 = (IndexOutOfRangeException *)func_?(uVar2);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                    (pIVar19,(MethodInfo *)0x0);
          uVar2 = func_?(&
                                       MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                      );
          FUN_?(pIVar19,uVar2);
          pcVar18 = (code *)swi(3);
          pSVar4 = (String *)(*pcVar18)();
          return pSVar4;
        }
        puVar20 = &(pSVar4->fields)._firstChar;
        puVar21 = &(pSVar15->fields)._firstChar;
        uVar22 = (pSVar15->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar20 - (longlong)puVar21) < (ulonglong)uVar22) ||
           ((ulonglong)((longlong)puVar21 - (longlong)puVar20) < (ulonglong)uVar22)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    ((uint8_t *)puVar20,(uint8_t *)puVar21,uVar22,(MethodInfo *)0x0);
        }
        if ((pSVar4->fields)._stringLength - iVar17 < (pSVar16->fields)._stringLength) {
          uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar19 = (IndexOutOfRangeException *)func_?(uVar2);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                    (pIVar19,(MethodInfo *)0x0);
          uVar2 = func_?(&
                                       MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                      );
          FUN_?(pIVar19,uVar2);
          pcVar18 = (code *)swi(3);
          pSVar4 = (String *)(*pcVar18)();
          return pSVar4;
        }
        puVar21 = &(pSVar4->fields)._firstChar + iVar17;
        puVar20 = &(pSVar16->fields)._firstChar;
        uVar22 = (pSVar16->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar21 - (longlong)puVar20) < (ulonglong)uVar22) ||
           ((ulonglong)((longlong)puVar20 - (longlong)puVar21) < (ulonglong)uVar22)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    ((uint8_t *)puVar21,(uint8_t *)puVar20,uVar22,(MethodInfo *)0x0);
        }
        return pSVar4;
      }
      pSVar15 = (String *)
                FUN_?((pSVar4->fields)._stringLength +
                              (StringLiteral__can_add_to_inventory_->fields)._stringLength +
                              (pSVar14->fields)._stringLength,StringLiteral__can_add_to_inventory_,
                              pSVar14,0);
      if (pSVar15 == (String *)0x0) {
        FUN_?();
        pcVar18 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar18)();
        return pSVar4;
      }
      if ((pSVar15->fields)._stringLength < (pSVar4->fields)._stringLength) {
        uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar19 = (IndexOutOfRangeException *)func_?(uVar2);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar19,(MethodInfo *)0x0);
        uVar2 = func_?(&
                                     MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                    );
        FUN_?(pIVar19,uVar2);
        pcVar18 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar18)();
        return pSVar4;
      }
      puVar20 = &(pSVar15->fields)._firstChar;
      puVar21 = &(pSVar4->fields)._firstChar;
      uVar22 = (pSVar4->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar20 - (longlong)puVar21) < (ulonglong)uVar22) ||
         ((ulonglong)((longlong)puVar21 - (longlong)puVar20) < (ulonglong)uVar22)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar20,(uint8_t *)puVar21,uVar22,(MethodInfo *)0x0);
      }
      iVar17 = (pSVar4->fields)._stringLength;
      if ((pSVar15->fields)._stringLength - iVar17 < (pSVar7->fields)._stringLength) {
        uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar19 = (IndexOutOfRangeException *)func_?(uVar2);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar19,(MethodInfo *)0x0);
        uVar2 = func_?(&
                                     MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                    );
        FUN_?(pIVar19,uVar2);
        pcVar18 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar18)();
        return pSVar4;
      }
      puVar21 = &(pSVar15->fields)._firstChar + iVar17;
      puVar20 = &(pSVar7->fields)._firstChar;
      uVar22 = (pSVar7->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar21 - (longlong)puVar20) < (ulonglong)uVar22) ||
         ((ulonglong)((longlong)puVar20 - (longlong)puVar21) < (ulonglong)uVar22)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar21,(uint8_t *)puVar20,uVar22,(MethodInfo *)0x0);
      }
      iVar17 = (pSVar4->fields)._stringLength + (pSVar7->fields)._stringLength;
      if ((pSVar15->fields)._stringLength - iVar17 < (pSVar14->fields)._stringLength) {
        uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar19 = (IndexOutOfRangeException *)func_?(uVar2);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar19,(MethodInfo *)0x0);
        uVar2 = func_?(&
                                     MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                    );
        FUN_?(pIVar19,uVar2);
        pcVar18 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar18)();
        return pSVar4;
      }
      puVar20 = &(pSVar14->fields)._firstChar;
      puVar21 = &(pSVar15->fields)._firstChar + iVar17;
      uVar22 = (pSVar14->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar21 - (longlong)puVar20) < (ulonglong)uVar22) ||
         ((ulonglong)((longlong)puVar20 - (longlong)puVar21) < (ulonglong)uVar22)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar21,(uint8_t *)puVar20,uVar22,(MethodInfo *)0x0);
      }
      return pSVar15;
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar18)();
  return pSVar4;
}


/* Void UnIndentCubeFace(IntVector, Face, Cube) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_UnIndentCubeFace
               (MVCubeModelBase *this,IntVector *localPos,Face__Enum face,Cube *cube,
               MethodInfo *method)

{
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Cube);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_UnIndentCubeFace);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_UnIndentCubeFace,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cube != (Cube *)0x0) {
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      Cube::Cube_UnIndentFace(cube,face,(MethodInfo *)0x0);
      IStackX_8.x = localPos->x;
      IStackX_8.y = localPos->y;
      IStackX_8.z = localPos->z;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
                (this_00,&IStackX_8,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
                 (MethodInfo *)0x0);
      this_01 = (this_00->fields).deltaCubes;
      if (this_01 == (DeltaCubes *)0x0) goto code_?;
      IStackX_8.x = localPos->x;
      IStackX_8.y = localPos->y;
      IStackX_8.z = localPos->z;
      DeltaCubes::DeltaCubes_Enqueue
                (this_01,&IStackX_8,(CubeAction__Enum)CONCAT71((int7)((ulonglong)cube >> 8),4),
                 (MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdatePrototypeScale(Single) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_UpdatePrototypeScale
               (MVCubeModelBase *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Nullable<float>__Nullable_float_,in_RDX,method,in_R9,
                  CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da),CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pHVar2 = (pRVar1->fields).instances;
    if (pHVar2 != (HashSet_1_System_Int32_ *)0x0) {
      if ((pHVar2->fields)._count < 2) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        pRVar1 = (this->fields).prototypeCubeModel;
        if ((pRVar1 != (RuntimePrototypeCubeModel *)0x0) &&
           (pMVar3 != (MVNetworkGame_OperationRequests *)0x0)) {
          uVar4 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          ,(pRVar1->fields).prototypeId,scale,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          pOVar5 = (Object *)FUN_?(uRam_?,&stack0x00000010);
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            uVar6 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0x2f,pOVar5,(InsertionBehavior__Enum)uVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pOVar5 = (Object *)FUN_?(uRam_?,&stack0x00000010);
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar4 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x22);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0x22,pOVar5,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),method_00
                      );
            pPVar7 = (pMVar3->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar7 != (PhotonPeer *)0x0) {
              (*(pPVar7->klass->vtable).SendOperation.methodPtr)
                        (pPVar7,CONCAT71((int7)((ulonglong)uVar4 >> 8),8),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar7->klass->vtable).SendOperation.method);
              return;
            }
          }
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        pRVar1 = (this->fields).prototypeCubeModel;
        NStackX_8 = (Nullable_1_Single_)((ulonglong)(uint)scale << 0x20);
        NStackX_8.hasValue = 1;
        if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
          (pRVar1->fields).PendingScaleUpdate = NStackX_8;
          pRVar1 = (this->fields).prototypeCubeModel;
          if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pHVar2 = (pRVar1->fields).instances;
            if (pHVar2 != (HashSet_1_System_Int32_ *)0x0) {
              if ((pHVar2->fields)._count < 2) {
                return;
              }
              pRVar1 = (this->fields).prototypeCubeModel;
              if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
                RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
                          (pRVar1,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
                     (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
                    (pWVar11 = (pMVar10->fields).worldNetwork, pWVar11 != (WorldNetwork *)0x0)) &&
                   (this_00 = (pWVar11->fields)._.worldInventory, this_00 != (MVWorldInventory *)0x0)
                   ) {
                  MVWorldInventory::MVWorldInventory_RequestWoMakeUniquePrototype
                            (this_00,(this->fields)._._.id,(MethodInfo *)0x0);
                  pRVar1 = (this->fields).prototypeCubeModel;
                  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
                    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddReferenceToAllChunks
                              (pRVar1,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IModelingConstraint <.ctor>b__28_0() */

IModelingConstraint *
Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase___ctor_b__28_0
          (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ModelingDynamicBoxConstraint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__SharedCubeFunctions->static_fields;
  uVar2._0_2_ = (pSVar1->constraint).x;
  uVar2._2_2_ = (pSVar1->constraint).y;
  iVar3 = (pSVar1->constraint).z;
  this_00 = (ModelingDynamicBoxConstraint *)FUN_?(TypeInfo__ModelingDynamicBoxConstraint);
  IStackX_18._0_4_ = uVar2;
  IStackX_18.z = iVar3;
  ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint__ctor
            (this_00,this,&IStackX_18,(MethodInfo *)0x0);
  return (IModelingConstraint *)this_00;
}


/* MVCubeModelBase() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Transparency);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__Transparency,(MethodInfo *)0x0);
  TypeInfo__MVCubeModelBase->static_fields->TransparencyShaderProperty = iVar1;
  return;
}


/* MVCubeModelBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase__ctor
               (MVCubeModelBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
               Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChunkInstances);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<IModelingConstraint>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVCubeModelBase____ctor_b__28_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_protoTypeID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (ChunkInstances *)FUN_?(TypeInfo__ChunkInstances);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                         );
  pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[MV::WorldObject::
            IntVector]::EqualityComparer_1_MV_WorldObject_IntVector__get_Default
                      (MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                       ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar3 != (EqualityComparer_1_MV_WorldObject_IntVector_ *)0x0) &&
     (bVar4 = iRam_? != 0,
     (pDVar2->fields)._comparer = (IEqualityComparer_1_MV_WorldObject_IntVector_ *)0x0, bVar4)) {
    uVar5 = (uint)((ulonglong)&(pDVar2->fields)._comparer >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  bVar4 = iRam_? != 0;
  (pCVar1->fields).chunkInstances = pDVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&pCVar1->fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  bVar4 = iRam_? != 0;
  (this->fields).chunkInstances = pCVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).chunkInstances >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  this_01 = (Queue_1_CubeModelChangedEventArgs_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Queue__);
  bVar4 = iRam_? != 0;
  (this->fields).changedEventArgsQueue = this_01;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).changedEventArgsQueue >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_2
            ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
  this_00 = (this->fields)._._.data;
  if ((this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_00,(Object *)StringLiteral_protoTypeID,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar9 != (Object *)0x0)) {
    if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar9);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (prototypes != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
      key = *(int32_t *)&pOVar9[1].klass;
      pRVar11 = (RuntimePrototypeCubeModel *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)prototypes,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                          );
      bVar4 = iRam_? != 0;
      (this->fields).prototypeCubeModel = pRVar11;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).prototypeCubeModel >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pRVar11 = (this->fields).prototypeCubeModel;
      if (pRVar11 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                  (pRVar11,this,(MethodInfo *)0x0);
        pRVar11 = (this->fields).prototypeCubeModel;
        if (pRVar11 != (RuntimePrototypeCubeModel *)0x0) {
          pAVar12 = (pRVar11->fields).DirtyChunksRegenerated;
          this_02 = (UnityAction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_02,(Object *)this,
                     (this->klass->vtable).DirtyChunksRegeneratedHandler.method,(MethodInfo *)0x0);
          pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar12,(Delegate *)this_02,(MethodInfo *)0x0);
          pAVar14 = 
          TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
          ;
          if (pDVar13 == (Delegate *)0x0) {
            (pRVar11->fields).DirtyChunksRegenerated =
                 (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
          }
          else {
            pAVar12 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                      FUN_?(pDVar13,
                                    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                                   );
            if (pAVar12 ==
                (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
              FUN_?(pDVar13,pAVar14);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            (pRVar11->fields).DirtyChunksRegenerated = pAVar12;
            pAVar14 = 
            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
            ;
            lVar15 = FUN_?();
            if (lVar15 == 0) {
              FUN_?(pDVar13,pAVar14);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&(pRVar11->fields).DirtyChunksRegenerated >> 0xc);
            uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            do {
              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
              LOCK();
              bVar4 = uVar7 == *puVar8;
              if (bVar4) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar4);
          }
          pGVar16 = (this->fields)._.gameObject;
          if (pGVar16 != (GameObject *)0x0) {
            obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar16,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_18._0_4_ = (pVVar17->oneVector).x;
            uStack_18._4_4_ = (pVVar17->oneVector).y;
            fVar19 = (pVVar17->oneVector).z;
            pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)prototypes,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            if (pOVar9 != (Object *)0x0) {
              fVar20 = *(float *)&pOVar9[7].klass;
              fStack_21 = fVar19 * fVar20;
              if (obj == (Transform *)0x0) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uStack_18 = CONCAT44(uStack_18._4_4_ * fVar20,(float)uStack_18 * fVar20);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar22 = (obj->fields)._._.m_CachedPtr;
              if (pvVar22 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar23 = func_?(&UNK_?);
                FUN_?(uVar23,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              (*pcRam_?)(pvVar22,&uStack_18);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
              uStack_18._0_4_ = (pVVar17->oneVector).x;
              uStack_18._4_4_ = (pVVar17->oneVector).y;
              fVar19 = (pVVar17->oneVector).z;
              pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)prototypes,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  );
              if (pOVar9 != (Object *)0x0) {
                fVar20 = *(float *)&pOVar9[7].klass;
                fStack_21 = fVar19 * fVar20;
                uStack_18 = CONCAT44(uStack_18._4_4_ * fVar20,(float)uStack_18 * fVar20);
                (*(this->klass->vtable).set_Scale.methodPtr)
                          (this,&uStack_18,(this->klass->vtable).set_Scale.method);
                this_03 = (Func_1_UnityEngine_Vector2Int_ *)
                          FUN_?(TypeInfo__System__Func<IModelingConstraint>);
                mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::
                Func_1_UnityEngine_Vector2Int___ctor
                          (this_03,(Object *)this,MethodInfo__MVCubeModelBase____ctor_b__28_0__,
                           (MethodInfo *)0x0);
                bVar4 = iRam_? != 0;
                (this->fields)._ModelingConstraintBuilder_k__BackingField =
                     (Func_1_IModelingConstraint_ *)this_03;
                if (bVar4) {
                  uVar5 = (uint)((ulonglong)
                                  &(this->fields)._ModelingConstraintBuilder_k__BackingField >> 0xc)
                  ;
                  uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                  do {
                    uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                    puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                    LOCK();
                    bVar4 = uVar7 == *puVar8;
                    if (bVar4) {
                      *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar4);
                }
                pGVar16 = (this->fields)._.gameObject;
                pSVar24 = (String *)
                          (*(this->klass->vtable).ToString.methodPtr)
                                    (this,(this->klass->vtable).ToString.method);
                if (pGVar16 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                            ((Object_1 *)pGVar16,pSVar24,(MethodInfo *)0x0);
                  pGVar16 = (this->fields)._.gameObject;
                  if (pGVar16 != (GameObject *)0x0) {
                    pSVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                        ((Object_1 *)pGVar16,(MethodInfo *)0x0);
                    bVar4 = iRam_? != 0;
                    (this->fields)._.name = pSVar24;
                    if (bVar4) {
                      uVar5 = (uint)((ulonglong)&(this->fields)._.name >> 0xc);
                      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                      do {
                        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                        LOCK();
                        bVar4 = uVar7 == *puVar8;
                        if (bVar4) {
                          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar4);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void add_BeingEditedChanged(EventHandler`1[EditStateEventArgs]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
               (MVCubeModelBase *this,EventHandler_1_EditStateEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).BeingEditedChanged;
  a = (this->fields).BeingEditedChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<EditStateEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EditStateEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EditStateEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<EditStateEventArgs>);
      if (pEVar4 == (EventHandler_1_EditStateEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Boolean get_BeingEdited() */

bool Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_BeingEdited
               (MVCubeModelBase *this,MethodInfo *method)

{
  return (this->fields).beingEdited;
}


/* Boolean get_ContainsCubes() */

bool Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_ContainsCubes
               (MVCubeModelBase *this,MethodInfo *method)

{
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    iVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_CubeCount
                      (this_00,(MethodInfo *)0x0);
    return iVar1 != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Int32 get_CubeCount() */

int32_t Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_CubeCount
                  (MVCubeModelBase *this,MethodInfo *method)

{
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar5 = 0;
  pDVar6 = (pRVar1->fields).chunks;
  if (pDVar6 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
  }
  else {
    uStack_7 = 0;
    uStack_8 = 0;
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&pDStack_10 >> 0xc);
      puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar12 = *puVar11;
        LOCK();
        uVar13 = *puVar11;
        if (uVar12 == uVar13) {
          *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar12 != uVar13);
    }
    uStack_14 = (ulonglong)(uint)(pDVar6->fields)._version;
    uStack_15 = 2;
    auStack_2._8_8_ = uStack_14;
    KStack_16.key.x = 0;
    KStack_16.key.y = 0;
    KStack_16.key.z = 0;
    KStack_16._6_2_ = 0;
    KStack_16.value = (Object *)0x0;
    uStack_17._0_4_ = 2;
    uStack_17._4_4_ = 0;
    pDStack_10 = pDVar6;
    auStack_2._0_8_ = pDVar6;
    while( true ) {
      bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar18 == 0) {
        return iVar5;
      }
      if (KStack_16.value == (Object *)0x0) break;
      iVar5 = iVar5 + *(int *)&KStack_16.value[5].klass;
    }
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* MeshFilter[] get_MeshFilters() */

MeshFilter__Array *
Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_MeshFilters
          (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__MeshFilter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pCVar2 = (this->fields).chunkInstances;
  if (pCVar2 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar3 = (pCVar2->fields).chunkInstances;
    if (pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                  0x0) {
      pMVar4 = (MeshFilter__Array *)
               FUN_?(TypeInfo__UnityEngine__MeshFilter,
                             (pDVar3->fields)._count - (pDVar3->fields)._freeCount);
      in_R8 = (longlong *)0x0;
      if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
        plVar5 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
        while (plVar5 != (longlong *)0x0) {
          cVar6 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar6 == '\0') {
            lVar7 = FUN_?(plVar5,TypeInfo__System__IDisposable);
            if (lVar7 != 0) {
              FUN_?(0,TypeInfo__System__IDisposable,lVar7);
            }
            return pMVar4;
          }
          if (plVar5 == (longlong *)0x0) goto code_?;
          lVar7 = *plVar5;
          uVar8 = 0;
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            do {
              if (*(IEnumerator__Class **)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar8 * 0x10)
                  == TypeInfo__System__Collections__IEnumerator) {
                puVar9 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                           1) * 0x10 + 0x138 + lVar7);
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar9 = (undefined8 *)FUN_?(plVar5,TypeInfo__System__Collections__IEnumerator,1)
          ;
code_?:
          in_R8 = (longlong *)(*(code *)*puVar9)(plVar5,puVar9[1]);
          if (in_R8 == (longlong *)0x0) goto code_?;
          if (*(Il2CppClass **)(*in_R8 + 0x40) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          if (pMVar4 == (MeshFilter__Array *)0x0) goto code_?;
          if ((uint)pMVar4->max_length <= uVar1) goto code_?;
          pMVar4->vector[(int)uVar1] = (MeshFilter *)in_R8[8];
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)(pMVar4->vector + (int)uVar1) >> 0xc);
            puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar12 = *puVar11;
              LOCK();
              uVar13 = *puVar11;
              if (uVar12 == uVar13) {
                *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (uVar12 != uVar13);
          }
          uVar1 = uVar1 + 1;
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(in_R8);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  pMVar4 = (MeshFilter__Array *)(*pcVar14)();
  return pMVar4;
}


/* Int32 get_Pid() */

int32_t Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_Pid
                  (MVCubeModelBase *this,MethodInfo *method)

{
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    return (pRVar1->fields).prototypeId;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Single get_PrototypeScale() */

float Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_PrototypeScale
                (MVCubeModelBase *this,MethodInfo *method)

{
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    return (pRVar1->fields)._Scale_k__BackingField;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  pBVar1 = MVCubeModelBase_GetWorldBounds(&BStack_2,this,(MethodInfo *)0x0);
  fVar3 = (pBVar1->m_Center).y;
  fVar4 = (pBVar1->m_Center).z;
  __return_storage_ptr__->x = (pBVar1->m_Center).x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void remove_BeingEditedChanged(EventHandler`1[EditStateEventArgs]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_remove_BeingEditedChanged
               (MVCubeModelBase *this,EventHandler_1_EditStateEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).BeingEditedChanged;
  source = (this->fields).BeingEditedChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<EditStateEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EditStateEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EditStateEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<EditStateEventArgs>);
      if (pEVar4 == (EventHandler_1_EditStateEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}


/* Void set_BeingEdited(Boolean) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_set_BeingEdited
               (MVCubeModelBase *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditStateEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).beingEdited != value) {
    pEVar1 = (this->fields).BeingEditedChanged;
    (this->fields).beingEdited = value;
    if (pEVar1 != (EventHandler_1_EditStateEventArgs_ *)0x0) {
      lVar2 = FUN_?(TypeInfo__EditStateEventArgs);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(bool *)(lVar2 + 0x10) = value;
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,lVar2,(pEVar1->fields)._._.method);
    }
  }
  return;
}


/* Void set_PrototypeCubeModel(RuntimePrototypeCubeModel) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
               (MVCubeModelBase *this,RuntimePrototypeCubeModel *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).prototypeCubeModel == value) {
    return;
  }
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    pAVar2 = (pRVar1->fields).DirtyChunksRegenerated;
    pUVar3 = (UnityAction_1_System_Object_ *)
             FUN_?(
                          TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                          );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar3,(Object *)this,(this->klass->vtable).DirtyChunksRegeneratedHandler.method,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pAVar5 = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    if (pDVar4 == (Delegate *)0x0) {
      (pRVar1->fields).DirtyChunksRegenerated =
           (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
               FUN_?(pDVar4,
                             TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                            );
      if (pAVar2 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pRVar1->fields).DirtyChunksRegenerated = pAVar2;
      pAVar5 = 
      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
      lVar7 = FUN_?(pDVar4,
                             TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                            );
      if (lVar7 == 0) {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pRVar1->fields).DirtyChunksRegenerated >> 0xc);
      lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar10 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    iVar12 = iRam_?;
    (this->fields).prototypeCubeModel = value;
    if (iVar12 != 0) {
      uVar8 = (uint)((ulonglong)&(this->fields).prototypeCubeModel >> 0xc);
      lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar10 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pRVar1 = (this->fields).prototypeCubeModel;
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      pAVar2 = (pRVar1->fields).DirtyChunksRegenerated;
      pUVar3 = (UnityAction_1_System_Object_ *)
               FUN_?(
                            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                            );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar3,(Object *)this,(this->klass->vtable).DirtyChunksRegeneratedHandler.method,
                 (MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar5 = 
      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
      if (pDVar4 == (Delegate *)0x0) {
        (pRVar1->fields).DirtyChunksRegenerated =
             (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      }
      else {
        pAVar2 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                 FUN_?(pDVar4,
                               TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                              );
        if (pAVar2 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0
           ) {
          FUN_?(pDVar4,pAVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pRVar1->fields).DirtyChunksRegenerated = pAVar2;
        pAVar5 = 
        TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
        ;
        lVar7 = FUN_?(pDVar4,
                               TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                              );
        if (lVar7 == 0) {
          FUN_?(pDVar4,pAVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? == 0) {
        return;
      }
      uVar8 = (uint)((ulonglong)&(pRVar1->fields).DirtyChunksRegenerated >> 0xc);
      lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar10 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

