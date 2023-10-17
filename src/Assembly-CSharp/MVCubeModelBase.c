
/* Void AddCube(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_AddCube
               (MVCubeModelBase *this,IntVector pos,CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0xbfa8);
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                   );
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    if ((cube != (CubeBase *)0x0) &&
       ((pCVar1 = TypeInfo__Cube,
        (cube->klass->_1).typeHierarchyDepth < (TypeInfo__Cube->_1).typeHierarchyDepth ||
        ((cube->klass->_1).typeHierarchy[(TypeInfo__Cube->_1).typeHierarchyDepth - 1] !=
         (Il2CppClass *)TypeInfo__Cube)))) goto code_?;
    bVar2 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCube
                      (this_00,pos,(Cube *)cube,(MethodInfo *)0x0);
    pCVar3 = TypeInfo__CubeModelChangedEventArgs;
    if (bVar2 == 0) {
      return;
    }
    this_01 = (this->fields).changedEventArgsQueue;
    cube = (CubeBase *)func_?();
    if ((cube != (CubeBase *)0x0) &&
       (pos_00.z = pos.z, pos_00._0_4_ = pCVar3,
       CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
                 ((CubeModelChangedEventArgs *)cube,CubeAction__Enum_Added,pos_00,this,
                  (MethodInfo *)0x0), this_01 != (Queue_1_CubeModelChangedEventArgs_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)this_01,(Object *)cube,
                 MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                );
      return;
    }
  }
  func_?();
  pCVar1 = extraout_EDX;
code_?:
  func_?(cube,pCVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddCubeNetworkUpdate(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_AddCubeNetworkUpdate
               (MVCubeModelBase *this,IntVector pos,CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (CubeBase *)0x0) {
    byteCorners = (cube->fields).byteCorners;
    faceMaterials = (cube->fields).faceMaterials;
    this_01 = (Cube *)func_?(TypeInfo__Cube);
    if (this_01 != (Cube *)0x0) {
      Cube::Cube__ctor(this_01,byteCorners,faceMaterials,(MethodInfo *)0x0);
      this_00 = (this->fields).prototypeCubeModel;
      if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                  (this_00,pos,this_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean ContainsCube(IntVector) */

bool Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ContainsCube
               (MVCubeModelBase *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    a = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube(this_00,pos,(MethodInfo *)0x0);
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                      ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
    return bVar1 != 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void CornersChanged(IntVector, Cube) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_CornersChanged
               (MVCubeModelBase *this,IntVector iVector,Cube *cube,MethodInfo *method)

{
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CornersChanged
              (this_00,iVector,cube,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CornersChangedDone(IntVector, Cube) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_CornersChangedDone
               (MVCubeModelBase *this,IntVector iVector,Cube *cube,MethodInfo *method)

{
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CornersChangedDone
              (this_00,iVector,cube,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CubePosToChunkPos(IntVector ByRef) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_CubePosToChunkPos
               (MVCubeModelBase *this,IntVector *pos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  puStack_3 = &stack0xfffffffc;
  pRVar4 = (this->fields).prototypeCubeModel;
  if (pRVar4 != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__SharedCubeFunctions);
      cRam_? = '\x01';
    }
    iVar5 = pos->z;
    uVar6 = pos->x;
    method_00 = (MethodInfo *)(pRVar4->fields).chunkSize;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    IVar7.z = uVar6;
    IVar7._0_4_ = &puStack_8;
    IVar7 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                      (IVar7,CONCAT22(uVar1,iVar5),method_00);
    uVar9 = *IVar7._0_4_;
    sVar10 = *(short *)(IVar7._0_4_ + 1);
    pos->x = pos->x - (short)(pRVar4->fields).chunkSize * (short)uVar9;
    pos->y = pos->y - (short)((uint)uVar9 >> 0x10) * (short)(pRVar4->fields).chunkSize;
    pos->z = pos->z - (short)(pRVar4->fields).chunkSize * sVar10;
    return;
  }
  puStack_8 = auStack_11;
  puStack_8 = (undefined1 *)func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_Destroy
               (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    pAVar2 = (pRVar1->fields).DirtyChunksRegenerated;
    this_00 = (Action_1_Object_ *)
              func_?(
                             TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                             );
    unaff_EBX = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
                0x0;
    if (this_00 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_00,(Object *)this,(this->klass->vtable).DirtyChunksRegeneratedHandler.method,
                 (MethodInfo *)0x0);
      this = (MVCubeModelBase *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = 
      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
      if (this == (MVCubeModelBase *)0x0) {
        (pRVar1->fields).DirtyChunksRegenerated =
             (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
        pMStack3 = (MVCubeModelBase *)&(pRVar1->fields).DirtyChunksRegenerated;
        pAStack4 =
             (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)this;
        func_?();
        return;
      }
      pAStack4 =
           TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
      ;
      pMStack3 = this;
      pAVar2 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
               func_?();
      if (pAVar2 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        (pRVar1->fields).DirtyChunksRegenerated = pAVar2;
        unaff_EBX = 
        TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
        ;
        pAStack4 =
             TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
        ;
        pMStack3 = this;
        pAStack4 =
             (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
             func_?();
        if (pAStack4 !=
            (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)0x0) {
          pMStack3 = (MVCubeModelBase *)&(pRVar1->fields).DirtyChunksRegenerated;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pMStack3 = this;
  pAStack4 = unaff_EBX;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DirtyChunksRegeneratedHandler(HashSet`1[MV.WorldObject.IntVector]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_DirtyChunksRegeneratedHandler
               (MVCubeModelBase *this,HashSet_1_MV_WorldObject_IntVector_ *chunksChanged,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).changedEventArgsQueue;
  while (pQVar1 != (Queue_1_CubeModelChangedEventArgs_ *)0x0) {
    if ((pQVar1->fields)._size < 1) {
      if ((this->fields).ChunksChanged !=
          (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
        pAVar2 = (this->fields).ChunksChanged;
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
    if ((this->fields).Changed != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      pAVar4 = (this->fields).Changed;
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,pOVar3,(pAVar4->fields)._._.method);
    }
    pQVar1 = (this->fields).changedEventArgsQueue;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Bounds GetBounds() */

Bounds * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetBounds
                   (Bounds *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff18;
  puVar5 = &stack0xffffff18;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  pCVar6 = (this->fields).chunkInstances;
  if (pCVar6 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                     );
      cRam_? = '\x01';
    }
    this_00 = (pCVar6->fields).chunkInstances;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
      iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                        );
      if (iVar7 == 0) {
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      VStack_8.x = 3.4028235e+38;
      VStack_8.y = 3.4028235e+38;
      VStack_8.z = 3.4028235e+38;
      VStack_9.x = -3.4028235e+38;
      VStack_9.y = -3.4028235e+38;
      VStack_9.z = -3.4028235e+38;
      if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
        iStack_10 = func_?(0);
        uStack_1 = 1;
        while (iStack_10 != 0) {
          cVar11 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_10);
          if (cVar11 == '\0') {
            uStack_1 = 0xffffffff;
            iVar12 = func_?(iStack_10,TypeInfo__System__IDisposable);
            if (iVar12 != 0) {
              func_?(0,TypeInfo__System__IDisposable,iVar12);
            }
            uStack_1 = 0xffffffff;
            min.y = VStack_8.y;
            min.x = VStack_8.x;
            min.z = VStack_8.z;
            max.y = VStack_9.y;
            max.x = VStack_9.x;
            max.z = VStack_9.z;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
                      (__return_storage_ptr__,min,max,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return __return_storage_ptr__;
          }
          if (iStack_10 == 0) break;
          piVar13 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,iStack_10);
          uVar14 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                            ,piVar13);
          if (piVar13 == (int *)0x0) break;
          if (*(Il2CppClass **)(*piVar13 + 0x20) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          iVar12 = func_?(piVar13);
          this_01 = *(BoxCollider **)(iVar12 + 0xc);
          if (this_01 == (BoxCollider *)0x0) break;
          pVVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                              ((Vector3 *)&stack0xffffff54,this_01,(MethodInfo *)0x0);
          uVar16 = pVVar15->x;
          uVar17 = pVVar15->y;
          fStack_18 = (float)uVar16 * _UNK_?;
          fStack_19 = (float)uVar17 * _UNK_?;
          UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                    ((Vector3 *)&stack0xffffff48,this_01,(MethodInfo *)0x0);
          UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                    ((Vector3 *)&stack0xffffff3c,this_01,(MethodInfo *)0x0);
          for (iVar12 = 0; iVar12 < 3; iVar12 = iVar12 + 1) {
            fStack_18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  ((Vector3 *)&stack0xffffff88,iVar12,(MethodInfo *)0x0);
            fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_8,iVar12,(MethodInfo *)0x0);
            if (fStack_18 < fVar20) {
              fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 ((Vector3 *)&stack0xffffff88,iVar12,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_8,iVar12,fVar20,(MethodInfo *)0x0);
            }
            fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               ((Vector3 *)&stack0xffffff7c,iVar12,(MethodInfo *)0x0);
            fStack_18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_9,iVar12,(MethodInfo *)0x0);
            if (fStack_18 < fVar20) {
              fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 ((Vector3 *)&stack0xffffff7c,iVar12,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_9,iVar12,fVar20,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
  }
  uVar14 = func_?();
code_?:
  func_?(uVar14);
  pcVar21 = (code *)swi(3);
  pBVar22 = (Bounds *)(*pcVar21)();
  return pBVar22;
}


/* Cube GetCube(IntVector) */

Cube * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetCube
                 (MVCubeModelBase *this,IntVector pos,MethodInfo *method)

{
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    pCVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                       (this_00,pos,(MethodInfo *)0x0);
    return pCVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pCVar1 = (Cube *)(*pcVar3)();
  return pCVar1;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVCubeModelBase *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  pBVar1 = MVCubeModelBase_GetBounds(&BStack_2,this,(MethodInfo *)0x0);
  fVar3 = (pBVar1->m_Center).y;
  fVar4 = (pBVar1->m_Center).z;
  fVar5 = (pBVar1->m_Extents).x;
  (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar5;
  fVar3 = (pBVar1->m_Extents).z;
  (__return_storage_ptr__->m_Extents).y = (pBVar1->m_Extents).y;
  (__return_storage_ptr__->m_Extents).z = fVar3;
  return __return_storage_ptr__;
}


/* Bounds GetWorldBounds() */

Bounds * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetWorldBounds
                   (Bounds *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff24;
  puVar5 = &stack0xffffff24;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  pCVar7 = (this->fields).chunkInstances;
  if (pCVar7 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                     );
      cRam_? = '\x01';
    }
    this_00 = (pCVar7->fields).chunkInstances;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
      iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                        );
      if (iVar8 == 0) {
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      VStack_9.x = 3.4028235e+38;
      VStack_9.y = 3.4028235e+38;
      VStack_9.z = 3.4028235e+38;
      VStack_10.x = -3.4028235e+38;
      VStack_10.y = -3.4028235e+38;
      VStack_10.z = -3.4028235e+38;
      if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
        iStack_11 = func_?(0);
        uStack_1 = 1;
        while (iStack_11 != 0) {
          cVar12 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_11);
          if (cVar12 == '\0') {
            uStack_1 = 0xffffffff;
            iStack_6 = func_?(iStack_11,TypeInfo__System__IDisposable);
            if (iStack_6 != 0) {
              func_?(0,TypeInfo__System__IDisposable,iStack_6);
            }
            uStack_1 = 0xffffffff;
            min.y = VStack_9.y;
            min.x = VStack_9.x;
            min.z = VStack_9.z;
            max.y = VStack_10.y;
            max.x = VStack_10.x;
            max.z = VStack_10.z;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
                      (__return_storage_ptr__,min,max,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return __return_storage_ptr__;
          }
          if (iStack_11 == 0) break;
          piVar13 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,iStack_11);
          uVar14 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                            ,piVar13);
          if (piVar13 == (int *)0x0) break;
          if (*(Il2CppClass **)(*piVar13 + 0x20) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          iVar15 = func_?(piVar13);
          this_01 = *(GameObject **)(iVar15 + 8);
          this_02 = *(Collider **)(iVar15 + 0xc);
          if (this_01 == (GameObject *)0x0) break;
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (this_01,(MethodInfo *)0x0);
          if (bVar16 == 0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
          }
          if (this_02 == (Collider *)0x0) break;
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                    ((Bounds *)&stack0xffffff30,this_02,(MethodInfo *)0x0);
          for (iVar15 = 0; iVar15 < 3; iVar15 = iVar15 + 1) {
            pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                               ((Vector3 *)&stack0xffffff6c,(Bounds *)&stack0xffffff94,
                                (MethodInfo *)0x0);
            VStack_18.x = pVVar17->x;
            VStack_18.y = pVVar17->y;
            VStack_18.z = pVVar17->z;
            fStack_19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_18,iVar15,(MethodInfo *)0x0);
            fStack_20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_9,iVar15,(MethodInfo *)0x0);
            if (fStack_19 < fStack_20) {
              pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                                 ((Vector3 *)&puStack_21,(Bounds *)&stack0xffffff94,
                                  (MethodInfo *)0x0);
              VStack_18.x = pVVar17->x;
              VStack_18.y = pVVar17->y;
              VStack_18.z = pVVar17->z;
              fStack_19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                    (&VStack_18,iVar15,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_9,iVar15,fStack_19,(MethodInfo *)0x0);
            }
            pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                               ((Vector3 *)&stack0xffffff54,(Bounds *)&stack0xffffff94,
                                (MethodInfo *)0x0);
            VStack_18.x = pVVar17->x;
            VStack_18.y = pVVar17->y;
            VStack_18.z = pVVar17->z;
            fStack_19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_18,iVar15,(MethodInfo *)0x0);
            fStack_20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_10,iVar15,(MethodInfo *)0x0);
            if (fStack_20 < fStack_19) {
              pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                                 ((Vector3 *)&stack0xffffff48,(Bounds *)&stack0xffffff94,
                                  (MethodInfo *)0x0);
              VStack_18.x = pVVar17->x;
              VStack_18.y = pVVar17->y;
              VStack_18.z = pVVar17->z;
              fStack_19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                    (&VStack_18,iVar15,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_10,iVar15,fStack_19,(MethodInfo *)0x0);
            }
          }
          if (bVar16 == 0) {
            if (this_01 == (GameObject *)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,0,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  uVar14 = func_?();
code_?:
  func_?(uVar14);
  pcVar22 = (code *)swi(3);
  pBVar23 = (Bounds *)(*pcVar22)();
  return pBVar23;
}


/* Vector3 GetWorldCenterPos() */

Vector3 * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                    (Vector3 *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  this_00 = (this->fields)._.transform;
  MVCubeModelBase_GetBounds(&BStack_1,this,(MethodInfo *)0x0);
  pRVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     ((Regex_CachedCodeEntryKey *)&BStack_1.m_Extents,
                      (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)&stack0xffffffcc,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       (&BStack_1.m_Extents,this_00,(Vector3)*pRVar2,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    __return_storage_ptr__->x = pVVar3->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar6)();
  return pVVar3;
}


/* Void HandleDelta() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_HandleDelta
               (MVCubeModelBase *this,MethodInfo *method)

{
  rpcm = (this->fields).prototypeCubeModel;
  if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar1 = (rpcm->fields).deltaCubes;
    while (pDVar1 != (DeltaCubes *)0x0) {
      if (cRam_? == '\0') {
        func_?();
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
          this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                    (rpcm->fields).pendingDeltaCubes;
          if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
                    (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                             prototypeData,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
        }
      }
      pDVar1 = (rpcm->fields).deltaCubes;
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean HasInstances() */

bool Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_HasInstances
               (MVCubeModelBase *this,MethodInfo *method)

{
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    iVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                      (this_00,(MethodInfo *)0x0);
    return 1 < iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_Initialize
               (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  source = (this->fields)._.gameObject;
  if (source != (GameObject *)0x0) {
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    pMVar2 = (MonitorData *)0x0;
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar3 = pIVar1 + 2;
      while( true ) {
        if ((int)pIVar1[1].monitor <= (int)pMVar2) {
          return;
        }
        if (pIVar1[1].monitor <= pMVar2) break;
        if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pIVar3->klass,0,(MethodInfo *)0x0);
        pMVar2 = pMVar2 + 1;
        pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
      }
      func_?();
    }
  }
code_?:
  func_?();
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
    iVar2 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                      (pRVar1,(MethodInfo *)0x0);
    if (iVar2 < 2) {
      return;
    }
    pRVar1 = (this->fields).prototypeCubeModel;
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
                (pRVar1,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar3 != (MVNetworkGame *)0x0) &&
          (pWVar4 = (pMVar3->fields).worldNetwork, pWVar4 != (WorldNetwork *)0x0)) &&
         (this_00 = (pWVar4->fields)._.worldInventory, this_00 != (MVWorldInventory *)0x0)) {
        MVWorldInventory::MVWorldInventory_RequestWoMakeUniquePrototype
                  (this_00,(this->fields)._._.id,(MethodInfo *)0x0);
        if ((this->fields).prototypeCubeModel != (RuntimePrototypeCubeModel *)0x0) {
          uStack5 = 0xffffffff;
          puStack6 = &DAT_?;
          uStack7 = *unaff_FS_OFFSET;
          *unaff_FS_OFFSET = &stack0x00000010;
          puStack8 = &stack0xffffffbc;
          puVar9 = &stack0xffffffbc;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                           );
            cRam_? = '\x01';
            puVar9 = puStack8;
          }
          puStack8 = puVar9;
          OStack_10.klass = (Object__Class *)0x0;
          OStack_10.monitor = (MonitorData *)0x0;
          puStack_11 = (undefined *)0x0;
          if (*(Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                **)(in_stack_12 + 0x40) !=
              (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
               *)0x0) {
            pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
                     Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
                     Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                               (&DStack_14,
                                *(Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                                  **)(in_stack_12 + 0x40),
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                               );
            OStack_10.klass = (Object__Class *)pDVar13->_dictionary;
            OStack_10.monitor = (MonitorData *)pDVar13->_version;
            puStack_11 = (undefined *)pDVar13->_index;
            uVar15 = *(undefined8 *)&(pDVar13->_current).key.TypeName;
            uStack5 = 1;
            while( true ) {
              bVar16 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,System::
                      Object]::
                      Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                                  *)&OStack_10,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                                );
              if (bVar16 == 0) {
                uStack5 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (&OStack_10,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                           ,unaff_EDI);
                *unaff_FS_OFFSET = uStack7;
                return;
              }
              if (SUB84(uVar15,4) == (Object *)0x0) break;
              pOVar17 = SUB84(uVar15,4) + 8;
              pOVar17->klass = (Object__Class *)((int)&(pOVar17->klass->_0).image + 1);
            }
          }
          func_?();
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void ObjectLinkChanged(Boolean) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ObjectLinkChanged
               (MVCubeModelBase *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Count__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = (MethodInfo *)(this->fields)._._.objectLinkRefs;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  piStack_7 = (int *)0x0;
  iStack_8 = 0;
  if (visible == 0) {
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    visible = method_00->name == (char *)0x0;
  }
  else {
    visible = 1;
    if (method_00 == (MethodInfo *)0x0) goto code_?;
  }
  pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     (&LStack_10,
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)method_00
                      ,
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                     );
  uStack_11 = 0;
  LStack_6._list = (List_1_System_Object_ *)pLVar9->_list;
  LStack_6._index = pLVar9->_index;
  LStack_6._version = pLVar9->_version;
  LStack_6._current = *(Object **)&pLVar9->_current;
  uStack_1 = 1;
  pLStack_12 = &LStack_6;
  do {
    bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_6,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                      );
    if (bVar13 == 0) goto code_?;
    if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
    goto code_?;
  } while (*(char *)((int)LStack_6._current + 0x14) == '\0');
  visible = 1;
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&LStack_6,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
             ,method_00);
  uStack_1 = 0xffffffff;
  pCVar14 = (this->fields).chunkInstances;
  if (pCVar14 != (ChunkInstances *)0x0) {
    piStack_7 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar14);
    LStack_10._version = (int32_t)&piStack_7;
    LStack_10._current = (RegexCharClass_SingleRange)&iStack_8;
    LStack_10._index = 0;
    uStack_1 = 4;
    while (piStack_7 != (int *)0x0) {
      cVar15 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_7);
      piVar16 = piStack_7;
      if (cVar15 == '\0') {
        uStack_1 = 0xffffffff;
        iStack_8 = func_?(piStack_7,TypeInfo__System__IDisposable);
        if (iStack_8 == 0) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        func_?(0,TypeInfo__System__IDisposable,iStack_8);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      piStack_17 = piStack_7;
      if (piStack_7 == (int *)0x0) break;
      iStack_18 = *piStack_7;
      uVar19 = 0;
      uStack_20 = 0;
      uVar21 = *(ushort *)(iStack_18 + 0xb2);
      pLStack_12 = (List_1_T_Enumerator_System_Object_ *)(uint)uVar21;
      if (uVar21 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(iStack_18 + 0x58) + (uint)uVar19 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar22 = (undefined4 *)
                     (*(int *)(*(int *)(*piStack_7 + 0x58) + 4 + (uint)uVar19 * 8) * 8 + 0xc4 +
                     *piStack_7);
            goto code_?;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar21);
      }
      puVar22 = (undefined4 *)
               func_?(piStack_7,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      piVar16 = (int *)(*(code *)*puVar22)(piVar16,puVar22[1]);
      uVar23 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                        ,piVar16);
      if (piVar16 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar16 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      iVar24 = func_?(piVar16);
      if (*(GameObject **)(iVar24 + 8) == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(iVar24 + 8),visible,(MethodInfo *)0x0);
    }
  }
code_?:
  uVar25 = func_?();
  uVar23 = func_?(uVar25);
code_?:
  func_?(uVar23);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnObjectLinkChanged() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_OnObjectLinkChanged
               (MVCubeModelBase *this,MethodInfo *method)

{
  MVCubeModelBase_ObjectLinkChanged(this,0,(MethodInfo *)0x0);
  return;
}


/* Void RemoveCube(IntVector) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_RemoveCube
               (MVCubeModelBase *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChangedEventArgs);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                   );
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    bVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveCube
                      (this_00,pos,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (this->fields).changedEventArgsQueue;
    this_02 = (CubeModelChangedEventArgs *)func_?();
    if ((this_02 != (CubeModelChangedEventArgs *)0x0) &&
       (CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
                  (this_02,CubeAction__Enum_Deleted,pos,this,(MethodInfo *)0x0),
       this_01 != (Queue_1_CubeModelChangedEventArgs_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)this_01,(Object *)this_02,
                 MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCubeNetworkUpdate(IntVector) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_RemoveCubeNetworkUpdate
               (MVCubeModelBase *this,IntVector pos,MethodInfo *method)

{
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveCubeNetworkUpdate
              (this_00,pos,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReplaceCube(IntVector, Byte) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ReplaceCube
               (MVCubeModelBase *this,IntVector iVector,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0xbfa8);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                   );
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ReplaceCube
              (this_00,iVector,materialId,(MethodInfo *)0x0);
    this_01 = (this->fields).changedEventArgsQueue;
    this_02 = (CubeModelChangedEventArgs *)func_?(TypeInfo__CubeModelChangedEventArgs);
    if (this_02 != (CubeModelChangedEventArgs *)0x0) {
      CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
                (this_02,CubeAction__Enum_FaceChanged,iVector,this,(MethodInfo *)0x0);
      if (this_01 != (Queue_1_CubeModelChangedEventArgs_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)this_01,(Object *)this_02,
                   MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetMaterial(IntVector, Face, Byte) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_SetMaterial
               (MVCubeModelBase *this,IntVector iVector,Face__Enum face,uint8_t material,
               MethodInfo *method)

{
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_SetMaterial
              (this_00,iVector,face,material,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ToString
                   (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__authorProfileID_);
    func_?(&StringLiteral__prototypeCubeModel_PrototypeId_);
    func_?(&StringLiteral__can_add_to_inventory_);
    cRam_? = '\x01';
  }
  method_00.m_value = 0;
  pSVar1 = MVWorldObjectClient::MVWorldObjectClient_ToString
                     ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).prototypeCubeModel != (RuntimePrototypeCubeModel *)0x0) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar1,StringLiteral__authorProfileID_,pSVar2,(MethodInfo *)0x0);
    pRVar3 = (this->fields).prototypeCubeModel;
    if (pRVar3 == (RuntimePrototypeCubeModel *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar4)();
      return pSVar1;
    }
    method_00.m_value = (pRVar3->fields).prototypeId;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar1,StringLiteral__prototypeCubeModel_PrototypeId_,pSVar2,
                        (MethodInfo *)0x0);
  }
  uStack_5 = (undefined *)
             CONCAT13(((this->fields)._.interactionFlags & 0x4000) != 0,(undefined3)uStack_5);
  pSVar2 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)((int)&uStack_5 + 3),(IFormatProvider *)0x0,
                      (MethodInfo *)method_00.m_value);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral__can_add_to_inventory_,pSVar2,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void UnIndentCubeFace(IntVector, Face, Cube) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_UnIndentCubeFace
               (MVCubeModelBase *this,IntVector localPos,Face__Enum face,Cube *cube,
               MethodInfo *method)

{
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UnIndentCubeFace
              (this_00,localPos,face,cube,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdatePrototypeScale(Single) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_UpdatePrototypeScale
               (MVCubeModelBase *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<float>__Nullable_float_);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    iVar2 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                      (pRVar1,(MethodInfo *)0x0);
    if (iVar2 < 2) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pRVar1 = (this->fields).prototypeCubeModel;
      if ((pRVar1 != (RuntimePrototypeCubeModel *)0x0) &&
         (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototypeScale
                  (this_00,(pRVar1->fields).prototypeId,scale,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pRVar1 = (this->fields).prototypeCubeModel;
      NVar3.hasValue = 0;
      NVar3._1_3_ = 0;
      NVar3.value = 0.0;
      mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single___ctor
                ((Nullable_1_Single_ *)&stack0xfffffff4,scale,
                 MethodInfo__System__Nullable<float>__Nullable_float_);
      if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
        (pRVar1->fields).PendingScaleUpdate.hasValue = (bool)NVar3._0_4_;
        *(int3 *)&(pRVar1->fields).PendingScaleUpdate.field_0x1 = SUB43(NVar3._0_4_,1);
        (pRVar1->fields).PendingScaleUpdate.value = NVar3.value;
        MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IModelingConstraint <.ctor>b__27_0() */

IModelingConstraint *
Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase___ctor_b__27_0
          (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ModelingDynamicBoxConstraint);
    func_?(0xb1a4);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  constraintSize = TypeInfo__SharedCubeFunctions->static_fields->constraint;
  this_00 = (ModelingDynamicBoxConstraint *)func_?(TypeInfo__ModelingDynamicBoxConstraint);
  if (this_00 != (ModelingDynamicBoxConstraint *)0x0) {
    ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint__ctor
              (this_00,this,constraintSize,(MethodInfo *)0x0);
    return (IModelingConstraint *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IModelingConstraint *)(*pcVar1)();
  return pIVar2;
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
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                   );
    func_?(&TypeInfo__ChunkInstances);
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Func<IModelingConstraint>);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__MVCubeModelBase____ctor_b__27_0__);
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>);
    func_?(&StringLiteral_protoTypeID);
    cRam_? = '\x01';
  }
  this_01 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
            func_?(TypeInfo__ChunkInstances);
  if (this_01 == (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                     );
      cRam_? = '\x01';
    }
    this_02 = (Object__Array *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                             );
    if (this_02 == (Object__Array *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
              );
    method_00 = (MethodInfo *)&this_01->fields;
    (this_01->fields)._._.method_ptr = this_02;
    func_?(method_00,this_02);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_01,ExceptionArgument__Enum_obj,method_00);
    (this->fields).chunkInstances = (ChunkInstances *)this_01;
    func_?(&(this->fields).chunkInstances);
    this_01 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>
                             );
    if (this_01 == (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Queue__);
    (this->fields).changedEventArgsQueue = (Queue_1_CubeModelChangedEventArgs_ *)this_01;
    func_?(&(this->fields).changedEventArgsQueue,this_01);
    if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVWorldObjectClient);
    }
    MVWorldObjectClient::MVWorldObjectClient__ctor_2
              ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
    this_00 = (this->fields)._._.data;
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_protoTypeID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pIVar3 = (Int32Enum__Enum *)func_?(pOVar1);
    if (prototypes == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    key = *pIVar3;
    pRVar4 = (RuntimePrototypeCubeModel *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)prototypes,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                        );
    (this->fields).prototypeCubeModel = pRVar4;
    func_?(&(this->fields).prototypeCubeModel,pRVar4);
    pRVar4 = (this->fields).prototypeCubeModel;
    if (pRVar4 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (pRVar4,this,(MethodInfo *)0x0);
    pRVar4 = (this->fields).prototypeCubeModel;
    if (pRVar4 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    pAStack_5 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
                (pRVar4->fields).DirtyChunksRegenerated;
    this_03 = (Action_1_Object_ *)
              func_?(
                             TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                             );
    this_01 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0;
    if (this_03 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_03,(Object *)this,(this->klass->vtable).DirtyChunksRegeneratedHandler.method,
               (MethodInfo *)0x0);
    this_01 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAStack_5,(Delegate *)this_03,(MethodInfo *)0x0);
    pAStack_5 = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    if (this_01 == (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
      (pRVar4->fields).DirtyChunksRegenerated =
           (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      iVar6 = 0;
code_?:
      func_?(&(pRVar4->fields).DirtyChunksRegenerated,iVar6);
      pGVar7 = (this->fields)._.gameObject;
      if (pGVar7 != (GameObject *)0x0) {
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar9 = (pVVar8->oneVector).x;
        uVar10 = (pVVar8->oneVector).y;
        fVar11 = (pVVar8->oneVector).z;
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)prototypes,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                           );
        this_01 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)prototypes;
        if (pOVar1 != (Object *)0x0) {
          pOVar12 = pOVar1[6].klass;
          if (this_04 != (Transform *)0x0) {
            value.y = (float)uVar10 * (float)pOVar12;
            value.x = (float)uVar9 * (float)pOVar12;
            value.z = fVar11 * (float)pOVar12;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (this_04,value,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar13 = (pVVar8->oneVector).x;
            uVar14 = (pVVar8->oneVector).y;
            fVar11 = (pVVar8->oneVector).z;
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)prototypes,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                               );
            if (pOVar1 != (Object *)0x0) {
              pOVar12 = pOVar1[6].klass;
              (*(this->klass->vtable).set_Scale.methodPtr)
                        (this,CONCAT44((float)uVar14 * (float)pOVar12,(float)uVar13 * (float)pOVar12),
                         fVar11 * (float)pOVar12,(this->klass->vtable).set_Scale.method);
              this_01 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                        func_?(TypeInfo__System__Func<IModelingConstraint>);
              if (this_01 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
                mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]
                ::RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                          (this_01,(Object *)this,MethodInfo__MVCubeModelBase____ctor_b__27_0__,
                           (MethodInfo *)0x0);
                (this->fields)._ModelingConstraintBuilder_k__BackingField =
                     (Func_1_IModelingConstraint_ *)this_01;
                func_?(&(this->fields)._ModelingConstraintBuilder_k__BackingField,this_01);
                MVWorldObjectClient::MVWorldObjectClient_SetName
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
                pGVar7 = (this->fields)._.gameObject;
                if (pGVar7 != (GameObject *)0x0) {
                  pSVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                      ((Object_1 *)pGVar7,(MethodInfo *)0x0);
                  (this->fields)._.name = pSVar15;
                  func_?(&(this->fields)._.name,pSVar15);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pAVar16 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
              func_?(this_01,
                              TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                             );
    if (pAVar16 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      (pRVar4->fields).DirtyChunksRegenerated = pAVar16;
      pAStack_5 = 
      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
      iVar6 = func_?(this_01,
                               TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                              );
      if (iVar6 != 0) goto code_?;
    }
  }
  uVar2 = func_?(this_01,pAStack_5);
code_?:
  func_?(uVar2);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void add_BeingEditedChanged(EventHandler`1[EditStateEventArgs]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
               (MVCubeModelBase *this,EventHandler_1_EditStateEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).BeingEditedChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<EditStateEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<EditStateEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EditStateEventArgs_ *)
             func_?(&(this->fields).BeingEditedChanged,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
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
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Int32 get_CubeCount() */

int32_t Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_CubeCount
                  (MVCubeModelBase *this,MethodInfo *method)

{
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    uStack_2 = 0xffffffff;
    puStack_3 = &DAT_?;
    uStack_4 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &uStack_4;
    puStack_5 = &stack0xffffff98;
    puVar6 = &stack0xffffff98;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                     );
      cRam_? = '\x01';
      puVar6 = puStack_5;
    }
    puStack_5 = puVar6;
    iVar7 = 0;
    uStack_8._0_2_ = 0;
    uStack_8._2_2_ = 0;
    uStack_8._4_4_ = (Object *)0x0;
    auStack_9._0_4_ = (Object__Class *)0x0;
    auStack_9._4_4_ = (MonitorData *)0x0;
    auStack_9._8_4_ = 0;
    pSStack_10 = (String *)0x0;
    iStack_11 = 0;
    this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
               *)(pRVar1->fields).chunks;
    iStack_12 = 0;
    if (this_00 !=
        (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
         *)0x0) {
      pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
               Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
               Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                         (&DStack_14,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                         );
      uStack_15 = 0;
      auStack_9._0_4_ = pDVar13->_dictionary;
      auStack_9._4_4_ = pDVar13->_version;
      auStack_9._8_4_ = pDVar13->_index;
      pSStack_10 = (pDVar13->_current).key.AssemblyName;
      uStack_8 = *(undefined8 *)&(pDVar13->_current).key.TypeName;
      iStack_11 = pDVar13->_getEnumeratorRetType;
      uStack_2 = 1;
      pOStack_16 = (Object *)auStack_9;
      while( true ) {
        bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                            *)auStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                          );
        if (bVar17 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)auStack_9,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_4;
          return iVar7;
        }
        if (uStack_8._4_4_ == (Object *)0x0) break;
        iVar7 = (int)&((uStack_8._4_4_[7].klass)->_0).image + iVar7;
        iStack_12 = iVar7;
      }
    }
  }
  uVar18 = func_?(&stack0xffffff88);
  func_?(uVar18);
  pcVar19 = (code *)swi(3);
  iVar20 = (*pcVar19)();
  return iVar20;
}


/* MeshFilter[] get_MeshFilters() */

MeshFilter__Array *
Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_MeshFilters
          (MVCubeModelBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&TypeInfo__UnityEngine__MeshFilter);
    cRam_? = '\x01';
  }
  pCVar4 = (this->fields).chunkInstances;
  if (pCVar4 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                     );
      cRam_? = '\x01';
    }
    this_00 = (pCVar4->fields).chunkInstances;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                        );
      pMVar6 = (MeshFilter__Array *)func_?(TypeInfo__UnityEngine__MeshFilter,iVar5);
      uStack_7 = 0;
      pCVar4 = (this->fields).chunkInstances;
      if (pCVar4 != (ChunkInstances *)0x0) {
        piVar8 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar4);
        uStack_1 = 1;
        while (piVar8 != (int *)0x0) {
          cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar8);
          if (cVar9 == '\0') {
            uStack_1 = 0xffffffff;
            iVar10 = func_?(piVar8,TypeInfo__System__IDisposable);
            if (iVar10 == 0) {
              *unaff_FS_OFFSET = uStack_3;
              return pMVar6;
            }
            func_?(0,TypeInfo__System__IDisposable,iVar10);
            *unaff_FS_OFFSET = uStack_3;
            return pMVar6;
          }
          if (piVar8 == (int *)0x0) break;
          uVar11 = 0;
          uVar12 = *(ushort *)(*piVar8 + 0xb2);
          if (uVar12 != 0) {
            do {
              if (*(IEnumerator__Class **)(*(int *)(*piVar8 + 0x58) + (uint)uVar11 * 8) ==
                  TypeInfo__System__Collections__IEnumerator) {
                puVar13 = (undefined4 *)
                         (*(int *)(*(int *)(*piVar8 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xc4 +
                         *piVar8);
                goto code_?;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar12);
          }
          puVar13 = (undefined4 *)
                   func_?(piVar8,TypeInfo__System__Collections__IEnumerator,1);
code_?:
          piVar14 = (int *)(*(code *)*puVar13)(piVar8,puVar13[1]);
          uVar15 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                            ,piVar14);
          if (piVar14 == (int *)0x0) break;
          if (*(Il2CppClass **)(*piVar14 + 0x20) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          iVar10 = func_?(piVar14);
          if (pMVar6 == (MeshFilter__Array *)0x0) break;
          pMStack_16 = (MeshFilter *)((ulonglong)*(undefined8 *)(iVar10 + 0x10) >> 0x20);
          if ((pMStack_16 != (MeshFilter *)0x0) &&
             (iVar10 = func_?(pMStack_16,(pMVar6->klass->_0).element_class), iVar10 == 0))
          {
            uVar17 = func_?();
            func_?(uVar17,0);
code_?:
            func_?();
            break;
          }
          if (pMVar6->max_length <= uStack_7) goto code_?;
          pMVar6->vector[uStack_7] = pMStack_16;
          func_?(pMVar6->vector + uStack_7,pMStack_16);
          uStack_7 = uStack_7 + 1;
        }
      }
    }
  }
  uVar15 = func_?();
code_?:
  func_?(uVar15);
  pcVar18 = (code *)swi(3);
  pMVar6 = (MeshFilter__Array *)(*pcVar18)();
  return pMVar6;
}


/* Int32 get_Pid() */

int32_t Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_Pid
                  (MVCubeModelBase *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pRVar2 = (this->fields).prototypeCubeModel;
  if (pRVar2 != (RuntimePrototypeCubeModel *)0x0) {
    return (pRVar2->fields).prototypeId;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Single get_PrototypeScale() */

float Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_PrototypeScale
                (MVCubeModelBase *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pRVar2 = (this->fields).prototypeCubeModel;
  if (pRVar2 != (RuntimePrototypeCubeModel *)0x0) {
    return (pRVar2->fields)._Scale_k__BackingField;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  KStack_1.key._options = 0;
  KStack_1.key._cultureKey = (String *)0x0;
  KStack_1.key._pattern = (String *)0x0;
  KStack_1.value = (Object *)0x0;
  uStack_2 = 0;
  pBVar3 = MVCubeModelBase_GetWorldBounds(&BStack_4,this,(MethodInfo *)0x0);
  KStack_1.key._options = (int32_t)(pBVar3->m_Center).x;
  KStack_1.key._cultureKey = (String *)(pBVar3->m_Center).y;
  KStack_1.key._pattern = (String *)(pBVar3->m_Center).z;
  KStack_1.value = (Object *)(pBVar3->m_Extents).x;
  uStack_2._0_4_ = (pBVar3->m_Extents).y;
  uStack_2._4_4_ = (pBVar3->m_Extents).z;
  pRVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     ((Regex_CachedCodeEntryKey *)&BStack_4.m_Extents,&KStack_1,(MethodInfo *)0x0)
  ;
  pSVar6 = pRVar5->_cultureKey;
  pSVar7 = pRVar5->_pattern;
  __return_storage_ptr__->x = (float)pRVar5->_options;
  __return_storage_ptr__->y = (float)pSVar6;
  __return_storage_ptr__->z = (float)pSVar7;
  return __return_storage_ptr__;
}


/* Void remove_BeingEditedChanged(EventHandler`1[EditStateEventArgs]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_remove_BeingEditedChanged
               (MVCubeModelBase *this,EventHandler_1_EditStateEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).BeingEditedChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<EditStateEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<EditStateEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EditStateEventArgs_ *)
             func_?(&(this->fields).BeingEditedChanged,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void set_BeingEdited(Boolean) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_set_BeingEdited
               (MVCubeModelBase *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditStateEventArgs);
    cRam_? = '\x01';
  }
  if (((this->fields).beingEdited != value) &&
     ((this->fields).beingEdited = value,
     (this->fields).BeingEditedChanged != (EventHandler_1_EditStateEventArgs_ *)0x0)) {
    pEVar1 = (this->fields).BeingEditedChanged;
    this_00 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__EditStateEventArgs);
    if (this_00 == (TweenRunner_1_FloatTween_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    *(bool *)&(this_00->fields).m_CoroutineContainer = value;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void set_ModelingConstraintBuilder(Func`1[IModelingConstraint]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_set_ModelingConstraintBuilder
               (MVCubeModelBase *this,Func_1_IModelingConstraint_ *value,MethodInfo *method)

{
  (this->fields)._ModelingConstraintBuilder_k__BackingField = value;
  func_?(&(this->fields)._ModelingConstraintBuilder_k__BackingField,value);
  return;
}


/* Void set_PrototypeCubeModel(RuntimePrototypeCubeModel) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
               (MVCubeModelBase *this,RuntimePrototypeCubeModel *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).prototypeCubeModel == value) {
    return;
  }
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) {
code_?:
    func_?();
  }
  else {
    pAVar2 = (pRVar1->fields).DirtyChunksRegenerated;
    pAVar3 = (Action_1_Object_ *)
             func_?(
                            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                            );
    if (pAVar3 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (pAVar3,(Object *)this,(this->klass->vtable).DirtyChunksRegeneratedHandler.method,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pAVar3,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pRVar1->fields).DirtyChunksRegenerated =
           (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      pRVar1 = (RuntimePrototypeCubeModel *)0x0;
    }
    else {
      pAVar2 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
               func_?();
      if (pAVar2 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      goto code_?;
      (pRVar1->fields).DirtyChunksRegenerated = pAVar2;
      pRVar1 = (RuntimePrototypeCubeModel *)func_?();
      if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    }
    func_?();
    (this->fields).prototypeCubeModel = pRVar1;
    func_?(&(this->fields).prototypeCubeModel);
    pRVar1 = (this->fields).prototypeCubeModel;
    if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    pAVar2 = (pRVar1->fields).DirtyChunksRegenerated;
    pAVar3 = (Action_1_Object_ *)
             func_?(
                            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                            );
    if (pAVar3 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (pAVar3,(Object *)this,(this->klass->vtable).DirtyChunksRegeneratedHandler.method,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)pAVar3,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pRVar1->fields).DirtyChunksRegenerated =
           (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      func_?();
      return;
    }
    pAVar2 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
             func_?();
    if (pAVar2 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      (pRVar1->fields).DirtyChunksRegenerated = pAVar2;
      iVar5 = func_?();
      if (iVar5 != 0) {
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

