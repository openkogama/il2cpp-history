
/* Void AddCube(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_AddCube
               (MVCubeModelBase *this,IntVector pos,CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x99a4);
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                   );
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    if (cube != (CubeBase *)0x0) {
      bVar1 = (TypeInfo__Cube->_1).naturalAligment;
      pCVar2 = TypeInfo__Cube;
      if (((cube->klass->_1).naturalAligment < bVar1) ||
         ((cube->klass->_1).typeHierarchy[bVar1 - 1] != (Il2CppClass *)TypeInfo__Cube))
      goto code_?;
    }
    bVar3 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCube
                      (this_00,pos,(Cube *)cube,(MethodInfo *)0x0);
    pCVar4 = TypeInfo__CubeModelChangedEventArgs;
    if (bVar3 == 0) {
      return;
    }
    this_01 = (this->fields).changedEventArgsQueue;
    this_02 = (CubeModelChangedEventArgs *)func_?();
    pos_00.z = pos.z;
    pos_00._0_4_ = pCVar4;
    CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
              (this_02,CubeAction__Enum_Added,pos_00,this,(MethodInfo *)0x0);
    cube = (CubeBase *)0x0;
    if (this_01 != (Queue_1_CubeModelChangedEventArgs_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)this_01,(Object *)this_02,
                 MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                );
      return;
    }
  }
  func_?();
  pCVar2 = extraout_EDX;
code_?:
  func_?(cube,pCVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    Cube::Cube__ctor(this_01,byteCorners,faceMaterials,(MethodInfo *)0x0);
    this_00 = (this->fields).prototypeCubeModel;
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                (this_00,pos,this_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddToChunkInstances(IntVector, ChunkInstances+ChunkInstanceVariables) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_AddToChunkInstances
               (MVCubeModelBase *this,IntVector chunkPos,ChunkInstances_ChunkInstanceVariables civ,
               MethodInfo *method)

{
  pCVar1 = (this->fields).chunkInstances;
  if (pCVar1 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ChunkInstancesChanged);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pCVar1->fields).chunkInstances;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
      IntVector,ChunkInstances+ChunkInstanceVariables]::
      Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__Add
                (this_00,chunkPos,civ,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                );
      pEVar2 = (pCVar1->fields).Changed;
      if (pEVar2 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
        this_01 = (ChunkInstancesChanged *)func_?();
        uStack3 = 0x1030;
        ChunkInstancesChanged::ChunkInstancesChanged__ctor
                  (this_01,ChunkInstancesChanged_ChangeType__Enum_Added,chunkPos,(MethodInfo *)0x0);
        (*(pEVar2->fields)._._.invoke_impl)();
      }
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVCubeModelBase+CurrentTransparencySettings CalculateCurrentTransparencySettings() */

MVCubeModelBase_CurrentTransparencySettings
Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_CalculateCurrentTransparencySettings
          (MVCubeModelBase *this,MethodInfo *method)

{
  fStack_1 = -NAN;
  puStack_2 = &DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
  pMStack_4 = (MoveableController *)&stack0xffffffb0;
  pMVar5 = (MoveableController *)&stack0xffffffb0;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                   );
    func_?(&TypeRef__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency);
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    pMVar5 = pMStack_4;
  }
  pMStack_4 = pMVar5;
  lStack_6 = 0x3f66666600000000;
  pMStack_7 = (MVWorldObjectClientManager_WorldObjectMapping *)0x0;
  pDStack_8 = (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
               0x3f666666;
  if ((this->fields).beingEdited != 0) {
    *unaff_FS_OFFSET = fStack_3;
    MVar9.active = 0;
    uVar10._1_3_ = 0;
    register0x00000008 = 0.9;
    return MVar9;
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._._.objectLinkRefs;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    this_01 = (MVWorldObjectClientManager *)&pMStack_11;
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)this_01,this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                       );
    lStack_6 = ZEXT48((Object *)&stack0xffffffbc) << 0x20;
    fStack_1 = 1.4013e-45;
    RVar13 = pLVar12->_current;
    do {
      do {
        do {
          bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                            );
          if (bVar14 == 0) goto code_?;
          if (RVar13 == (RegexCharClass_SingleRange)0x0) goto code_?;
        } while (*(char *)((int)RVar13 + 0x14) == '\0');
        RVar15 = RVar13;
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMStack_16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (this_01,*(int32_t *)((int)RVar13 + 0xc),(MethodInfo *)0x0);
        RVar13 = RVar15;
      } while (pMStack_16 == (MVWorldObject *)0x0);
      left = (XNamespace *)
             mscorlib.dll::System::Object::Object_GetType((Object *)pMStack_16,(MethodInfo *)0x0);
      handle = TypeRef__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      right = (XNamespace *)
              mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      RVar13.First = 0;
      RVar13.Last = 0;
      bVar14 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                        (left,right,(MethodInfo *)0x0);
    } while (bVar14 != 0);
    bVar17 = (TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency->_1).
            naturalAligment;
    if ((bVar17 <= (pMStack_16->klass->_1).naturalAligment) &&
       ((MVObjectTransparency__Class *)(pMStack_16->klass->_1).typeHierarchy[bVar17 - 1] ==
        TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency)) {
      pDStack_8 = (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_
                    *)pMStack_16[2].fields.position.y;
      pMStack_7 = (MVWorldObjectClientManager_WorldObjectMapping *)
                   CONCAT31(pMStack_7._1_3_,_UNK_? < (float)pDStack_8);
code_?:
      fStack_1 = -NAN;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffbc,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                 ,(MethodInfo *)this_01);
      MVar18.alphaToUse = (float)pDStack_8;
      MVar18._0_4_ = pMStack_7;
      *unaff_FS_OFFSET = fStack_3;
      return MVar18;
    }
    lStack_6 = CONCAT44(lStack_6._4_4_,
                         TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency);
    pMStack_19 = pMStack_16;
    func_?();
  }
code_?:
  uVar20 = func_?();
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  MVar9 = (MVCubeModelBase_CurrentTransparencySettings)(*pcVar21)();
  return MVar9;
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
    return bVar1;
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
  if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pRVar1->fields).DirtyChunksRegenerated;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(
                                TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                                );
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    if (unaff_ESI == (Delegate *)0x0) {
      pDStack3 = (Delegate *)&(pRVar1->fields).DirtyChunksRegenerated;
      *(Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ **)pDStack3 =
           (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      pAStack4 =
           (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
           unaff_ESI;
      func_?();
      return;
    }
    pAStack4 =
         TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
    ;
    pDStack3 = unaff_ESI;
    pAVar2 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
             func_?();
    if (pAVar2 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
    goto code_?;
    unaff_EDI = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
                &(pRVar1->fields).DirtyChunksRegenerated;
    *(Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ **)unaff_EDI = pAVar2;
    this = (MVCubeModelBase *)
           TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
    ;
    pAStack4 =
         TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
    ;
    pDStack3 = unaff_ESI;
    pAStack4 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
         func_?();
    if (pAStack4 !=
        (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)0x0) {
      pDStack3 = (Delegate *)unaff_EDI;
      func_?();
      return;
    }
  }
  pDStack3 = unaff_ESI;
  pAStack4 =
       (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)this;
  func_?();
code_?:
  pDStack3 = unaff_ESI;
  pAStack4 = unaff_EDI;
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
  this_00 = (this->fields).changedEventArgsQueue;
  while (this_00 != (Queue_1_CubeModelChangedEventArgs_ *)0x0) {
    if ((this_00->fields)._size < 1) {
      pAVar1 = (this->fields).ChunksChanged;
      if (pAVar1 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,chunksChanged,(pAVar1->fields)._._.method);
      }
      return;
    }
    if (this_00 == (Queue_1_CubeModelChangedEventArgs_ *)0x0) break;
    pOVar2 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
             Queue_1_System_Object__Dequeue
                       ((Queue_1_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Dequeue__
                       );
    pAVar3 = (this->fields).Changed;
    if (pAVar3 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      (*(pAVar3->fields)._._.invoke_impl)
                ((pAVar3->fields)._._.method_code,pOVar2,(pAVar3->fields)._._.method);
    }
    this_00 = (this->fields).changedEventArgsQueue;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  puStack_4 = &stack0xffffff04;
  puVar5 = &stack0xffffff04;
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
  pCVar6 = (this->fields).chunkInstances;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
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
      iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
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
            fVar13 = (VStack_9.z - VStack_8.z) * _UNK_?;
            fVar14 = (VStack_9.x - VStack_8.x) * _UNK_?;
            fVar15 = (VStack_9.y - VStack_8.y) * _UNK_?;
            (__return_storage_ptr__->m_Extents).x = fVar14;
            (__return_storage_ptr__->m_Extents).y = fVar15;
            (__return_storage_ptr__->m_Extents).z = fVar13;
            (__return_storage_ptr__->m_Center).x = fVar14 + VStack_8.x;
            (__return_storage_ptr__->m_Center).y = fVar15 + VStack_8.y;
            (__return_storage_ptr__->m_Center).z = fVar13 + VStack_8.z;
            *unaff_FS_OFFSET = uStack_3;
            return __return_storage_ptr__;
          }
          if (iStack_10 == 0) break;
          piVar16 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,iStack_10);
          uVar17 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                            ,piVar16);
          if (piVar16 == (int *)0x0) break;
          if (*(Il2CppClass **)(*piVar16 + 0x20) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          iVar12 = func_?(piVar16);
          this_01 = *(BoxCollider **)(iVar12 + 0x1c);
          if (this_01 == (BoxCollider *)0x0) break;
          pVVar18 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                              ((Vector3 *)&stack0xffffff54,this_01,(MethodInfo *)0x0);
          uVar19 = pVVar18->x;
          uVar20 = pVVar18->y;
          fStack_21 = (float)uVar19 * _UNK_?;
          fStack_22 = (float)uVar20 * _UNK_?;
          UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                    ((Vector3 *)&stack0xffffff48,this_01,(MethodInfo *)0x0);
          UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                    ((Vector3 *)&stack0xffffff3c,this_01,(MethodInfo *)0x0);
          for (iVar12 = 0; iVar12 < 3; iVar12 = iVar12 + 1) {
            fStack_21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  ((Vector3 *)&stack0xffffff7c,iVar12,(MethodInfo *)0x0);
            fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_8,iVar12,(MethodInfo *)0x0);
            if (fStack_21 < fVar13) {
              fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 ((Vector3 *)&stack0xffffff7c,iVar12,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_8,iVar12,fVar13,(MethodInfo *)0x0);
            }
            fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               ((Vector3 *)&stack0xffffff70,iVar12,(MethodInfo *)0x0);
            fStack_21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_9,iVar12,(MethodInfo *)0x0);
            if (fStack_21 < fVar13) {
              fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 ((Vector3 *)&stack0xffffff70,iVar12,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_9,iVar12,fVar13,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
  }
  uVar17 = func_?();
code_?:
  func_?(uVar17);
  pcVar23 = (code *)swi(3);
  pBVar24 = (Bounds *)(*pcVar23)();
  return pBVar24;
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
  puStack_4 = &stack0xffffff10;
  puVar5 = &stack0xffffff10;
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
  pCVar7 = (this->fields).chunkInstances;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
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
      iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
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
        piStack_12 = &iStack_6;
        piStack_13 = &iStack_11;
        uStack_14 = 0;
        uStack_1 = 1;
        while (iStack_11 != 0) {
          cVar15 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_11);
          if (cVar15 == '\0') {
            uStack_1 = 0xffffffff;
            iStack_6 = func_?(iStack_11,TypeInfo__System__IDisposable);
            if (iStack_6 != 0) {
              func_?(0,TypeInfo__System__IDisposable,iStack_6);
            }
            fVar16 = (VStack_10.z - VStack_9.z) * _UNK_?;
            fVar17 = (VStack_10.x - VStack_9.x) * _UNK_?;
            fVar18 = (VStack_10.y - VStack_9.y) * _UNK_?;
            (__return_storage_ptr__->m_Extents).x = fVar17;
            (__return_storage_ptr__->m_Extents).y = fVar18;
            (__return_storage_ptr__->m_Extents).z = fVar16;
            (__return_storage_ptr__->m_Center).x = fVar17 + VStack_9.x;
            (__return_storage_ptr__->m_Center).y = fVar18 + VStack_9.y;
            (__return_storage_ptr__->m_Center).z = fVar16 + VStack_9.z;
            *unaff_FS_OFFSET = uStack_3;
            return __return_storage_ptr__;
          }
          if (iStack_11 == 0) break;
          piVar19 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,iStack_11);
          uVar20 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                            ,piVar19);
          if (piVar19 == (int *)0x0) break;
          if (*(Il2CppClass **)(*piVar19 + 0x20) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          iVar21 = func_?(piVar19);
          this_01 = *(GameObject **)(iVar21 + 0x18);
          this_02 = *(Collider **)(iVar21 + 0x1c);
          if (this_01 == (GameObject *)0x0) break;
          bVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (this_01,(MethodInfo *)0x0);
          if (bVar22 == 0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
          }
          if (this_02 == (Collider *)0x0) break;
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                    ((Bounds *)&stack0xffffff1c,this_02,(MethodInfo *)0x0);
          for (iVar21 = 0; iVar21 < 3; iVar21 = iVar21 + 1) {
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                               ((Vector3 *)&stack0xffffff58,(Bounds *)&stack0xffffff90,
                                (MethodInfo *)0x0);
            VStack_24.x = pVVar23->x;
            VStack_24.y = pVVar23->y;
            VStack_24.z = pVVar23->z;
            fStack_25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_24,iVar21,(MethodInfo *)0x0);
            fStack_26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_9,iVar21,(MethodInfo *)0x0);
            if (fStack_25 < fStack_26) {
              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                                 ((Vector3 *)&puStack_27,(Bounds *)&stack0xffffff90,
                                  (MethodInfo *)0x0);
              VStack_24.x = pVVar23->x;
              VStack_24.y = pVVar23->y;
              VStack_24.z = pVVar23->z;
              fStack_25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                    (&VStack_24,iVar21,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_9,iVar21,fStack_25,(MethodInfo *)0x0);
            }
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                               ((Vector3 *)&stack0xffffff40,(Bounds *)&stack0xffffff90,
                                (MethodInfo *)0x0);
            VStack_24.x = pVVar23->x;
            VStack_24.y = pVVar23->y;
            VStack_24.z = pVVar23->z;
            fStack_25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_24,iVar21,(MethodInfo *)0x0);
            fStack_26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  (&VStack_10,iVar21,(MethodInfo *)0x0);
            if (fStack_26 < fStack_25) {
              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                                 ((Vector3 *)&stack0xffffff34,(Bounds *)&stack0xffffff90,
                                  (MethodInfo *)0x0);
              VStack_24.x = pVVar23->x;
              VStack_24.y = pVVar23->y;
              VStack_24.z = pVVar23->z;
              fStack_25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                    (&VStack_24,iVar21,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        (&VStack_10,iVar21,fStack_25,(MethodInfo *)0x0);
            }
          }
          if (bVar22 == 0) {
            if (this_01 == (GameObject *)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,0,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  uVar20 = func_?();
code_?:
  func_?(uVar20);
  pcVar28 = (code *)swi(3);
  pBVar29 = (Bounds *)(*pcVar28)();
  return pBVar29;
}


/* Vector3 GetWorldCenterPos() */

Vector3 * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                    (Vector3 *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  this_00 = (this->fields)._.transform;
  pBVar1 = MVCubeModelBase_GetBounds((Bounds *)&stack0xffffffcc,this,(MethodInfo *)0x0);
  VStack_2.x = (pBVar1->m_Extents).x;
  VStack_2.y = (pBVar1->m_Extents).y;
  VStack_2.z = (pBVar1->m_Extents).z;
  if (this_00 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       (&VStack_2,this_00,pBVar1->m_Center,(MethodInfo *)0x0);
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
        iVar3 = (rpcm->fields).prototypeState;
        if (iVar3 == 0) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 == (MVNetworkGame_OperationRequests *)0x0) break;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                    (this_01,(rpcm->fields).prototypeId,prototypeData,(MethodInfo *)0x0);
        }
        else if (iVar3 == 1) {
          this_00 = (rpcm->fields).pendingDeltaCubes;
          if (this_00 == (List_1_System_Byte_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
          List_1_System_Byte__AddRange
                    (this_00,(IEnumerable_1_System_Byte_ *)prototypeData,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
        }
      }
      pDVar1 = (rpcm->fields).deltaCubes;
    }
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_00 = (this->fields)._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    uVar2 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar3 = pOVar1->vector;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pOVar1->max_length <= uVar2) break;
        if ((Renderer *)*ppOVar3 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppOVar3,0,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppOVar3 = ppOVar3 + 1;
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
          if (*(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                **)(in_stack_10 + 0x3c) !=
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                     UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                               (&DStack_12,
                                *(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  **)(in_stack_10 + 0x3c),
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                               );
            OStack_13.klass = (Object__Class *)pDVar11->_dictionary;
            OStack_13.monitor = (MonitorData *)pDVar11->_version;
            puStack_14 = (undefined *)pDVar11->_index;
            uVar15 = *(undefined8 *)&(pDVar11->_current).key.index;
            uStack5 = 1;
            while( true ) {
              bVar16 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,System::
                      Object]::
                      Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                                  *)&OStack_13,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                                );
              if (bVar16 == 0) {
                uStack5 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          (&OStack_13,
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
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
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
    func_?(&TypeRef__MVObjectEnabler);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  piStack_6 = (int *)0x0;
  iStack_7 = 0;
  this_00 = (MVWorldObjectClientManager *)(this->fields)._._.objectLinkRefs;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                       );
    uStack_10 = 0;
    LStack_11._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_11._index = pLVar8->_index;
    LStack_11._version = pLVar8->_version;
    LStack_11._current = *(Object **)&pLVar8->_current;
    uStack_1 = 1;
    pLStack_12 = &LStack_11;
    do {
      do {
        do {
          bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_11,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                            );
          pOVar14 = LStack_11._current;
          if (bVar13 == 0) goto code_?;
          if ((RegexCharClass_SingleRange)LStack_11._current == (RegexCharClass_SingleRange)0x0)
          goto code_?;
        } while (*(char *)((int)LStack_11._current + 0x14) == '\0');
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
        this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_00,*(int32_t *)((int)pOVar14 + 0xc),(MethodInfo *)0x0);
      } while (this_01 == (MVWorldObject *)0x0);
      pTStack_15 = mscorlib.dll::System::Object::Object_GetType((Object *)this_01,(MethodInfo *)0x0)
      ;
      handle = TypeRef__MVObjectEnabler;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      rhs = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      bVar13 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_EnumEquals
                        ((Int32Enum__Enum)pTStack_15,(Int32Enum__Enum)rhs,(MethodInfo *)0x0);
    } while (bVar13 == 0);
    visible = 1;
code_?:
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_11,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
               ,(MethodInfo *)this_00);
    uStack_1 = 0xffffffff;
    pCVar16 = (this->fields).chunkInstances;
    if (pCVar16 != (ChunkInstances *)0x0) {
      piStack_6 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar16);
      LStack_9._version = (int32_t)&piStack_6;
      LStack_9._current = (RegexCharClass_SingleRange)&iStack_7;
      LStack_9._index = 0;
      uStack_1 = 4;
      while (piStack_6 != (int *)0x0) {
        cVar17 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_6);
        piVar18 = piStack_6;
        if (cVar17 == '\0') {
          uStack_1 = 0xffffffff;
          iStack_7 = func_?(piStack_6,TypeInfo__System__IDisposable);
          if (iStack_7 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iStack_7);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        piStack_19 = piStack_6;
        if (piStack_6 == (int *)0x0) break;
        pTStack_15 = (Type *)*piStack_6;
        uVar20 = 0;
        uVar21 = *(ushort *)((int)&pTStack_15[0xf].klass + 2);
        pLStack_12 = (List_1_T_Enumerator_System_Object_ *)(uint)uVar21;
        if (uVar21 != 0) {
          do {
            if (*(IEnumerator__Class **)(pTStack_15[7].monitor + (uint)uVar20 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar22 = (undefined4 *)
                       (*piStack_6 +
                       (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar20 * 8) + 0x19) * 8);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar21);
        }
        puVar22 = (undefined4 *)
                 func_?(piStack_6,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        piVar18 = (int *)(*(code *)*puVar22)(piVar18,puVar22[1]);
        uVar23 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                          ,piVar18);
        if (piVar18 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar18 + 0x20) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) goto code_?;
        iVar24 = func_?(piVar18);
        if (*(GameObject **)(iVar24 + 0x18) == (GameObject *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(iVar24 + 0x18),visible,(MethodInfo *)0x0);
      }
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


/* Void ObjectLinkTransparency() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ObjectLinkTransparency
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
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  MVar4 = MVCubeModelBase_CalculateCurrentTransparencySettings(this,(MethodInfo *)0x0);
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (ChunkInstances *)0x0) {
    ChunkInstances::ChunkInstances_SetTransparent(this_00,MVar4.active,(MethodInfo *)0x0);
    if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
      piVar5 = (int *)func_?();
      uStack_1 = 1;
      while (fStack_6 = MVar4.alphaToUse, piVar5 != (int *)0x0) {
        cVar7 = func_?();
        if (cVar7 == '\0') {
          uStack_1 = 0xffffffff;
          iVar8 = func_?();
          if (iVar8 != 0) {
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (piVar5 == (int *)0x0) break;
        uVar9 = 0;
        uVar10 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar10 != 0) {
          do {
            if (*(IEnumerator__Class **)(*(int *)(*piVar5 + 0x58) + (uint)uVar9 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar11 = (undefined4 *)
                       (*piVar5 +
                       (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar9 * 8) + 0x19) * 8);
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        puVar11 = (undefined4 *)func_?();
code_?:
        piVar12 = (int *)(*(code *)*puVar11)();
        if (piVar12 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar12 + 0x20) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) goto code_?;
        iVar8 = func_?();
        uVar13 = *(undefined8 *)(iVar8 + 0x20);
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        pRStack_15 = (Renderer *)uVar13;
        if (MVar4.active == 0) {
          if ((pMVar14 == (MaterialLoader *)0x0) || (pRStack_15 == (Renderer *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    (pRStack_15,(pMVar14->fields)._CubeModelMaterial_k__BackingField,
                     (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                    (pRStack_15,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
        }
        else {
          if ((pMVar14 == (MaterialLoader *)0x0) || (pRStack_15 == (Renderer *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    (pRStack_15,(pMVar14->fields)._CubeModelMaterialTransp_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              (pRStack_15,(MethodInfo *)0x0);
          if ((TypeInfo__MVCubeModelBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (this_01 == (Material *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat_1
                    (this_01,TypeInfo__MVCubeModelBase->static_fields->TransparencyShaderProperty,
                     fStack_6,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                    (pRStack_15,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnObjectLinkChanged(ObjectLinkChangeType, ObjectLink) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_OnObjectLinkChanged
               (MVCubeModelBase *this,ObjectLinkChangeType__Enum changeType,ObjectLink *objectLink,
               MethodInfo *method)

{
  MVCubeModelBase_ObjectLinkChanged(this,1,(MethodInfo *)0x0);
  MVCubeModelBase_ObjectLinkTransparency(this,(MethodInfo *)0x0);
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
    if (bVar1 != 0) {
      this_01 = (this->fields).changedEventArgsQueue;
      this_02 = (CubeModelChangedEventArgs *)func_?();
      CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
                (this_02,CubeAction__Enum_Deleted,pos,this,(MethodInfo *)0x0);
      if (this_01 == (Queue_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)this_01,(Object *)this_02,
                 MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                );
    }
    return;
  }
code_?:
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
    func_?(0x99a4);
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
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&StringLiteral__authorProfileID_);
    func_?(&StringLiteral__prototypeCubeModel_PrototypeId_);
    func_?(&StringLiteral__can_add_to_inventory_);
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObjectClient::MVWorldObjectClient_ToString
                     ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).prototypeCubeModel != (RuntimePrototypeCubeModel *)0x0) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar1,StringLiteral__authorProfileID_,pSVar2,(MethodInfo *)0x0);
    if ((this->fields).prototypeCubeModel == (RuntimePrototypeCubeModel *)0x0)
    goto code_?;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar1,StringLiteral__prototypeCubeModel_PrototypeId_,pSVar2,
                        (MethodInfo *)0x0);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar2 = mscorlib.dll::System::Boolean::Boolean_ToString
                       ((Boolean *)&stack0xfffffffb,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar1,StringLiteral__can_add_to_inventory_,pSVar2,(MethodInfo *)0x0);
    return pSVar1;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
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


/* IModelingConstraint <.ctor>b__28_0() */

IModelingConstraint *
Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase___ctor_b__28_0
          (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ModelingDynamicBoxConstraint);
    func_?(0x6db8);
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
  ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint__ctor
            (this_00,this,constraintSize,(MethodInfo *)0x0);
  return (IModelingConstraint *)this_00;
}


/* MVCubeModelBase() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&StringLiteral__Transparency);
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
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                   );
    func_?(&TypeInfo__ChunkInstances);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Func<IModelingConstraint>);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__MVCubeModelBase____ctor_b__28_0__);
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>);
    func_?(&StringLiteral_protoTypeID);
    cRam_? = '\x01';
  }
  value_00 = (ChunkInstances *)func_?(TypeInfo__ChunkInstances);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
            );
  method_00 = (MethodInfo *)&value_00->fields;
  ((ChunkInstances__Fields *)method_00)->chunkInstances = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_00,ExceptionArgument__Enum_obj,method_00);
  ppCVar1 = &(this->fields).chunkInstances;
  *ppCVar1 = value_00;
  func_?(ppCVar1,value_00);
  this_02 = (Queue_1_CubeModelChangedEventArgs_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>
                           );
  System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::Object]::
  ReadOnlyCollectionBuilder_1_System_Object___ctor
            ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_02,
             MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Queue__);
  ppQVar2 = &(this->fields).changedEventArgsQueue;
  *ppQVar2 = this_02;
  func_?(ppQVar2,this_02);
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVWorldObjectClient);
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_2
            ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._.data;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_00,(Object *)StringLiteral_protoTypeID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar4 = (int32_t *)func_?();
    if (prototypes == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    key = *piVar4;
    pRVar5 = (RuntimePrototypeCubeModel *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)prototypes,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                        );
    ppRVar6 = &(this->fields).prototypeCubeModel;
    *ppRVar6 = pRVar5;
    func_?();
    if (*ppRVar6 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (*ppRVar6,this,(MethodInfo *)0x0);
    if (*ppRVar6 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    a = ((*ppRVar6)->fields).DirtyChunksRegenerated;
    this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_03,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      iRam_? = 0;
code_?:
      func_?();
      pGVar8 = (this->fields)._.gameObject;
      if (pGVar8 != (GameObject *)0x0) {
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar8,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar10._0_4_ = (pVVar9->oneVector).x;
        uVar10._4_4_ = (pVVar9->oneVector).y;
        fVar11 = (pVVar9->oneVector).z;
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)prototypes,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            );
        if (pOVar12 != (Object *)0x0) {
          pMVar13 = pOVar12[8].monitor;
          if (this_04 != (Transform *)0x0) {
            value.y = (float)((ulonglong)uVar10 >> 0x20) * (float)pMVar13;
            value.x = (float)uVar10 * (float)pMVar13;
            value.z = fVar11 * (float)pMVar13;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (this_04,value,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            fVar11 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).x;
            pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)prototypes,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            if (pOVar12 != (Object *)0x0) {
              (*(code *)(this->klass->vtable).set_Scale.method)
                        (this,fVar11 * (float)pOVar12[8].monitor);
              this_05 = (Func_1_Object_ *)func_?();
              mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
                        (this_05,(Object *)this,MethodInfo__MVCubeModelBase____ctor_b__28_0__,
                         (MethodInfo *)0x0);
              ppFVar14 = &(this->fields)._ModelingConstraintBuilder_k__BackingField;
              *ppFVar14 = (Func_1_IModelingConstraint_ *)this_05;
              func_?(ppFVar14,this_05);
              MVWorldObjectClient::MVWorldObjectClient_SetName
                        ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
              pGVar8 = (this->fields)._.gameObject;
              if (pGVar8 != (GameObject *)0x0) {
                pSVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                    ((Object_1 *)pGVar8,(MethodInfo *)0x0);
                (this->fields)._.name = pSVar15;
                func_?();
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    iVar16 = func_?();
    if (iVar16 != 0) {
      iRam_? = iVar16;
      iVar16 = func_?();
      if (iVar16 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
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
  ppEVar1 = &(this->fields).BeingEditedChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<EditStateEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<EditStateEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_EditStateEventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
  return;
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
    iStack_8 = 0;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(pRVar1->fields).chunks;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_10,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                         );
      uStack_11 = 0;
      DStack_12._dictionary =
           (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar9->_dictionary;
      DStack_12._version = pDVar9->_version;
      DStack_12._index = pDVar9->_index;
      DStack_12._current.key._0_4_ = (pDVar9->_current).key.sheetInstanceID;
      DStack_12._current._4_8_ = *(undefined8 *)&(pDVar9->_current).key.index;
      DStack_12._getEnumeratorRetType = pDVar9->_getEnumeratorRetType;
      uStack_2 = 1;
      pDStack_13 = &DStack_12;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                          (&DStack_12,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                          );
        if (bVar14 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_12,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_4;
          return iVar7;
        }
        if (DStack_12._current.value == (Object *)0x0) break;
        iVar7 = (int)&((DStack_12._current.value[7].klass)->_0).image + iVar7;
        iStack_8 = iVar7;
      }
    }
  }
  uVar15 = func_?(&stack0xffffff88);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  iVar17 = (*pcVar16)();
  return iVar17;
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
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
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
          uVar12 = *(ushort *)(*piVar8 + 0xb6);
          if (uVar12 != 0) {
            do {
              if (*(IEnumerator__Class **)(*(int *)(*piVar8 + 0x58) + (uint)uVar11 * 8) ==
                  TypeInfo__System__Collections__IEnumerator) {
                puVar13 = (undefined4 *)
                         (*piVar8 +
                         (*(int *)(*(int *)(*piVar8 + 0x58) + 4 + (uint)uVar11 * 8) + 0x19) * 8);
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
          if (pMVar6->max_length <= uStack_7) {
            func_?();
            break;
          }
          pMStack_16 = (MeshFilter *)((ulonglong)*(undefined8 *)(iVar10 + 0x20) >> 0x20);
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
  pcVar17 = (code *)swi(3);
  pMVar6 = (MeshFilter__Array *)(*pcVar17)();
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
    func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).BeingEditedChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<EditStateEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<EditStateEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_EditStateEventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
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
  if ((this->fields).beingEdited != value) {
    pEVar1 = (this->fields).BeingEditedChanged;
    (this->fields).beingEdited = value;
    if (pEVar1 != (EventHandler_1_EditStateEventArgs_ *)0x0) {
      this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__EditStateEventArgs);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__EventArgs);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__EventArgs);
      }
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
      *(bool *)&(this_00->fields)._._defaultValue_k__BackingField = value;
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
    }
  }
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
  ppRVar1 = &(this->fields).prototypeCubeModel;
  pRVar2 = *ppRVar1;
  if (pRVar2 == value) {
    return;
  }
  if (pRVar2 == (RuntimePrototypeCubeModel *)0x0) {
code_?:
    func_?();
  }
  else {
    ppAVar3 = &(pRVar2->fields).DirtyChunksRegenerated;
    pAVar4 = *ppAVar3;
    pDVar5 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?(
                               TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                               );
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pDVar5,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,(Delegate *)pDVar5,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      *ppAVar3 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      object = (Object *)0x0;
code_?:
      func_?();
      *ppRVar1 = value;
      func_?(ppRVar1,value);
      pRVar2 = *ppRVar1;
      if (pRVar2 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      pAVar4 = (pRVar2->fields).DirtyChunksRegenerated;
      ppAVar3 = &(pRVar2->fields).DirtyChunksRegenerated;
      pDVar5 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?(
                                 TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                                 );
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDVar5,object,(void *)object->klass[4]._1.native_size,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar4,(Delegate *)pDVar5,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        *ppAVar3 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
        func_?();
        return;
      }
      pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
               func_?();
      if (pAVar4 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        *ppAVar3 = pAVar4;
        iVar7 = func_?();
        if (iVar7 != 0) {
          func_?();
          return;
        }
      }
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
               func_?();
      if (pAVar4 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        *ppAVar3 = pAVar4;
        object = (Object *)func_?();
        if (object == (Object *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

