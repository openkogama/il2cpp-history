
/* Void AddCube(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_AddCube
               (MVCubeModelBase *this,IntVector pos,CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    if (cube == (CubeBase *)0x0) {
      cube_00 = (Cube *)0x0;
    }
    else {
      bVar1 = (TypeInfo__Cube->_1).naturalAligment;
      if (((cube->klass->_1).naturalAligment < bVar1) ||
         ((cube->klass->_1).typeHierarchy[bVar1 - 1] != (Il2CppClass *)TypeInfo__Cube)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      cube_00 = (Cube *)0x0;
      if (bVar2) {
        cube_00 = (Cube *)cube;
      }
      unaff_EDI = TypeInfo__Cube;
      if (cube_00 == (Cube *)0x0) goto code_?;
    }
    bVar3 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCube
                      (this_00,pos,cube_00,(MethodInfo *)0x0);
    pCVar4 = TypeInfo__CubeModelChangedEventArgs;
    if (bVar3 == 0) {
      return;
    }
    this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).changedEventArgsQueue;
    item = (SmoothPhysicsMovement_Package *)func_?();
    pos_00.z = pos.z;
    pos_00._0_4_ = pCVar4;
    CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
              ((CubeModelChangedEventArgs *)item,CubeAction__Enum_Added,pos_00,this,
               (MethodInfo *)0x0);
    unaff_EDI = (Cube__Class *)0x0;
    if (this_01 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                (this_01,item,
                 MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                );
      return;
    }
  }
  func_?(0);
  cube = extraout_EDX;
code_?:
  func_?(cube,unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddCubeNetworkUpdate(IntVector, CubeBase) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_AddCubeNetworkUpdate
               (MVCubeModelBase *this,IntVector pos,CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cube != (CubeBase *)0x0) {
    byteCorners = (Byte__Array *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)cube,
                             (MethodInfo *)0x0);
    faceMaterials =
         (Byte__Array *)
         System.dll::System::Collections::Generic::
         SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
         Single,System::Object]::
         SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                   ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)cube,(MethodInfo *)0x0);
    this_01 = (Cube *)func_?(TypeInfo__Cube);
    Cube::Cube__ctor(this_01,byteCorners,faceMaterials,(MethodInfo *)0x0);
    this_00 = (this->fields).prototypeCubeModel;
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                (this_00,pos,this_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean ContainsCube(IntVector) */

bool Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ContainsCube
               (MVCubeModelBase *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    a = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube(this_00,pos,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
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
  pRVar3 = (this->fields).prototypeCubeModel;
  if (pRVar3 != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    iVar4 = pos->z;
    uVar5 = pos->x;
    method_00 = (MethodInfo *)(pRVar3->fields).chunkSize;
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    IVar6.z = uVar5;
    IVar6._0_4_ = auStack_7;
    IVar6 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                      (IVar6,CONCAT22(uVar1,iVar4),method_00);
    uVar8 = *IVar6._0_4_;
    sVar9 = *(short *)(IVar6._0_4_ + 1);
    pos->x = pos->x - (short)(pRVar3->fields).chunkSize * (short)uVar8;
    pos->y = pos->y - (short)((uint)uVar8 >> 0x10) * (short)(pRVar3->fields).chunkSize;
    pos->z = pos->z - (short)(pRVar3->fields).chunkSize * sVar9;
    return;
  }
  uStack_10 = 0;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_Destroy
               (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    pAVar2 = (pRVar1->fields).DirtyChunksRegenerated;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,this->klass[1]._0.image,
               MethodInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>__Action_System__Object__void__
              );
    pAStack3 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
    if (pAStack3 !=
        (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      if (pAStack3->klass ==
          TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
         ) {
        pAVar2 = pAStack3;
      }
      pAStack4 =
           TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
      ;
      if (pAVar2 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      goto code_?;
    }
    (pRVar1->fields).DirtyChunksRegenerated = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).changedEventArgsQueue;
  while (this_00 != (Queue_1_CubeModelChangedEventArgs_ *)0x0) {
    pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__get_Count__
                       );
    if ((int)pIVar1 < 1) {
      pAVar2 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
               (this->fields).ChunksChanged;
      if (pAVar2 != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *
                    )0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (pAVar2,(Dictionary_2_System_String_System_Object_ *)chunksChanged,
                   MethodInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>__Invoke_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                  );
      }
      return;
    }
    this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).changedEventArgsQueue;
    if (this_01 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    obj = (Dictionary_2_System_String_System_Object_ *)
          System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
          Queue_1_SmoothPhysicsMovement_Package__Dequeue
                    (this_01,
                     MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Dequeue__
                    );
    pAVar2 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
             (this->fields).Changed;
    if (pAVar2 != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                  0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (pAVar2,obj,
                 MethodInfo__System__Action<CubeModelChangedEventArgs>__Invoke_CubeModelChangedEventArgs_
                );
    }
    this_00 = (this->fields).changedEventArgsQueue;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  puStack_4 = &stack0xffffff14;
  puVar5 = &stack0xffffff14;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  fStack_11 = 0.0;
  uStack_12 = 0;
  fStack_13 = 0.0;
  SStack_14.klass = (SubscribableVariableBase_1_UnityEngine_Quaternion___Class *)0x0;
  SStack_14.monitor = (MonitorData *)0x0;
  SStack_14.fields.value.x = 0.0;
  SStack_14.fields.value.y = 0.0;
  SStack_14.fields.value.z = 0.0;
  SStack_14.fields.value.w = 0.0;
  func_?();
  fStack_15 = 0.0;
  fStack_16 = 0.0;
  fStack_17 = 0.0;
  fStack_18 = 0.0;
  this_00 = (this->fields).chunkInstances;
  uStack_19 = 0;
  puStack_20 = (undefined4 *)&stack0xffffff14;
  puStack_4 = &stack0xffffff14;
  if (this_00 != (ChunkInstances *)0x0) {
    puStack_20 = (undefined4 *)&stack0xffffff14;
    puStack_4 = &stack0xffffff14;
    iVar21 = ChunkInstances::ChunkInstances_get_Count(this_00,(MethodInfo *)0x0);
    if (iVar21 == 0) {
code_?:
      (__return_storage_ptr__->m_Center).x = fStack_15;
      (__return_storage_ptr__->m_Center).y = fStack_16;
      (__return_storage_ptr__->m_Center).z = fStack_17;
      (__return_storage_ptr__->m_Extents).x = fStack_18;
      (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_19;
      (__return_storage_ptr__->m_Extents).z = (float)uStack_19._4_4_;
      *unaff_FS_OFFSET = uStack_3;
      return __return_storage_ptr__;
    }
    func_?();
    func_?();
    if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
      iVar22 = func_?();
      uStack_1 = 0;
      while (iVar22 != 0) {
        cVar23 = func_?();
        if (cVar23 == '\0') {
          *puStack_20 = 0x13a;
          uStack_1 = 0xffffffff;
          iVar22 = func_?(iVar22,TypeInfo__System__IDisposable);
          if (iVar22 != 0) {
            func_?();
          }
          func_?(&fStack_15,uStack_7,uStack_6,uStack_8,uStack_9,0);
          goto code_?;
        }
        piVar24 = (int *)func_?();
        if (piVar24 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar24 + 0x20) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) {
          func_?(piVar24,
                          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                         );
          break;
        }
        puVar25 = (undefined4 *)func_?(piVar24);
        SStack_14.klass = (SubscribableVariableBase_1_UnityEngine_Quaternion___Class *)*puVar25;
        SStack_14.monitor = (MonitorData *)puVar25[1];
        SStack_14.fields.value.x = (float)puVar25[2];
        SStack_14.fields.value.y = (float)puVar25[3];
        SStack_14.fields.value._8_8_ = *(undefined8 *)(puVar25 + 4);
        pQVar26 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
                 SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                           (&QStack_27,&SStack_14,
                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                           );
        this_01 = (BoxCollider *)pQVar26->y;
        if (this_01 == (BoxCollider *)0x0) break;
        pVVar28 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                            (&VStack_29,this_01,in_stack_30);
        uStack_31._0_4_ = pVVar28->x;
        uStack_31._4_4_ = pVVar28->y;
        fVar32 = pVVar28->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        in_stack_30 = (MethodInfo *)((ulonglong)uStack_31 >> 0x20);
        a.z = fVar32;
        a.x = (float)(undefined4)uStack_31;
        a.y = uStack_31._4_4_;
        pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                            (&VStack_33,a,2.0,(MethodInfo *)0x0);
        uStack_31._0_4_ = pVVar28->x;
        uStack_31._4_4_ = pVVar28->y;
        fVar32 = pVVar28->z;
        pVVar28 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                            (&VStack_34,this_01,(MethodInfo *)0x0);
        b.z = fVar32;
        b.x = (float)(undefined4)uStack_31;
        b.y = uStack_31._4_4_;
        pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            (&VStack_35,*pVVar28,b,(MethodInfo *)0x0);
        uStack_10._0_4_ = pVVar28->x;
        uStack_10._4_4_ = pVVar28->y;
        fStack_11 = pVVar28->z;
        pVVar28 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                            (&VStack_36,this_01,(MethodInfo *)0x0);
        b_00.z = fVar32;
        b_00.x = (float)(undefined4)uStack_31;
        b_00.y = uStack_31._4_4_;
        pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            (&VStack_37,*pVVar28,b_00,(MethodInfo *)0x0);
        uStack_12._0_4_ = pVVar28->x;
        uStack_12._4_4_ = pVVar28->y;
        fStack_13 = pVVar28->z;
        for (iVar38 = 0; iVar38 < 3; iVar38 = iVar38 + 1) {
          fVar39 = (float10)func_?();
          uStack_31._4_4_ = (float)fVar39;
          fVar39 = (float10)func_?();
          fStack_40 = (float)fVar39;
          if (uStack_31._4_4_ < fStack_40) {
            fVar39 = (float10)func_?();
            uStack_31._4_4_ = (float)fVar39;
            func_?(&uStack_7,iVar38,uStack_31._4_4_,0);
          }
          fVar39 = (float10)func_?();
          uStack_31 = CONCAT44((float)fVar39,(undefined4)uStack_31);
          fVar39 = (float10)func_?();
          fStack_40 = (float)fVar39;
          if (fStack_40 < uStack_31._4_4_) {
            fVar39 = (float10)func_?();
            uStack_31 = CONCAT44((float)fVar39,(undefined4)uStack_31);
            func_?(&uStack_8,iVar38,(float)fVar39,0);
          }
        }
      }
    }
  }
  func_?(0);
  uVar41 = 0;
  func_?();
  pcVar42 = (code *)swi(3);
  pBVar43 = (Bounds *)(*pcVar42)(uVar41);
  return pBVar43;
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
  func_?();
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
  puStack_4 = &stack0xfffffeb4;
  puVar5 = &stack0xfffffeb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  MStack_10.methodPointer = (Il2CppMethodPointer)0x0;
  MStack_10.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  MStack_10.invoker_method = (InvokerMethod)0x0;
  MStack_10.name = (char *)0x0;
  uStack_11 = 0;
  MStack_10.klass = (Il2CppClass *)0x0;
  MStack_10.return_type = (Il2CppType *)0x0;
  MStack_10.parameters = (Il2CppType **)0x0;
  MStack_10.field7_0x1c.rgctx_data = (Il2CppRGCTXData *)0x0;
  MStack_10.field8_0x20.genericMethod = (Il2CppGenericMethod *)0x0;
  MStack_10.token = 0;
  uStack_12 = 0;
  MStack_10.flags = 0;
  MStack_10.iflags = 0;
  MStack_10.slot = 0;
  MStack_10.parameters_count = 0;
  MStack_10._47_1_ = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  uStack_18 = 0;
  func_?();
  fStack_19 = 0.0;
  fStack_20 = 0.0;
  fStack_21 = 0.0;
  fStack_22 = 0.0;
  this_00 = (this->fields).chunkInstances;
  uStack_23 = 0;
  puStack_24 = (undefined4 *)&stack0xfffffeb4;
  puStack_4 = &stack0xfffffeb4;
  if (this_00 != (ChunkInstances *)0x0) {
    puStack_24 = (undefined4 *)&stack0xfffffeb4;
    puStack_4 = &stack0xfffffeb4;
    iVar25 = ChunkInstances::ChunkInstances_get_Count(this_00,(MethodInfo *)0x0);
    if (iVar25 == 0) {
code_?:
      (__return_storage_ptr__->m_Center).x = fStack_19;
      (__return_storage_ptr__->m_Center).y = fStack_20;
      (__return_storage_ptr__->m_Center).z = fStack_21;
      (__return_storage_ptr__->m_Extents).x = fStack_22;
      (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_23;
      (__return_storage_ptr__->m_Extents).z = (float)uStack_23._4_4_;
      *unaff_FS_OFFSET = uStack_3;
      return __return_storage_ptr__;
    }
    func_?();
    method_00 = (MethodInfo *)0xff7fffff;
    func_?();
    if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
      iVar26 = func_?();
      uStack_1 = 0;
      iStack_27 = iVar26;
      while (iVar26 != 0) {
        cVar28 = func_?();
        if (cVar28 == '\0') {
          *puStack_24 = 0x181;
          uStack_1 = 0xffffffff;
          iVar26 = func_?(iVar26,TypeInfo__System__IDisposable);
          if (iVar26 != 0) {
            func_?();
          }
          func_?(&fStack_19,uStack_7,uStack_6,uStack_8,uStack_9,0);
          goto code_?;
        }
        piVar29 = (int *)func_?();
        if (piVar29 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar29 + 0x20) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) {
          func_?(piVar29,
                          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                         );
          break;
        }
        puVar30 = (undefined4 *)func_?(piVar29);
        MStack_10.methodPointer = (Il2CppMethodPointer)*puVar30;
        MStack_10.virtualMethodPointer = (Il2CppMethodPointer)puVar30[1];
        MStack_10.invoker_method = (InvokerMethod)puVar30[2];
        MStack_10.name = (char *)puVar30[3];
        MStack_10._16_8_ = *(undefined8 *)(puVar30 + 4);
        pMVar31 = &MStack_10;
        pQVar32 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
                 SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                           ((Quaternion *)(auStack_33 + 0x20),
                            (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)pMVar31,
                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                           );
        if ((GameObject *)pQVar32->x == (GameObject *)0x0) break;
        bVar34 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          ((GameObject *)pQVar32->x,method_00);
        if (bVar34 == 0) {
          puVar30 = (undefined4 *)func_?();
          if ((GameObject *)*puVar30 == (GameObject *)0x0) break;
          pMVar31 = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)*puVar30,1,(MethodInfo *)0x0);
        }
        method_00 = (MethodInfo *)auStack_33;
        iVar35 = func_?();
        if (*(Collider **)(iVar35 + 4) == (Collider *)0x0) break;
        pBVar36 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                            (&BStack_37,*(Collider **)(iVar35 + 4),pMVar31);
        MStack_10.parameters = (Il2CppType **)(pBVar36->m_Center).x;
        MStack_10.field7_0x1c = (_union_154)(pBVar36->m_Center).y;
        MStack_10.field8_0x20 = (_union_155)(pBVar36->m_Center).z;
        MStack_10.token = (uint32_t)(pBVar36->m_Extents).x;
        MStack_10._40_8_ = *(undefined8 *)&(pBVar36->m_Extents).y;
        for (iVar35 = 0; iVar35 < 3; iVar35 = iVar35 + 1) {
          puVar38 = (undefined8 *)func_?();
          uStack_13 = *puVar38;
          uStack_11 = *(undefined4 *)(puVar38 + 1);
          fVar39 = (float10)func_?();
          fStack_40 = (float)fVar39;
          fVar39 = (float10)func_?();
          fStack_41 = (float)fVar39;
          if (fStack_40 < fStack_41) {
            puVar38 = (undefined8 *)func_?();
            uStack_14 = *puVar38;
            uStack_12 = *(undefined4 *)(puVar38 + 1);
            fVar39 = (float10)func_?();
            fStack_40 = (float)fVar39;
            func_?(&uStack_7,iVar35,fStack_40,0);
          }
          puVar38 = (undefined8 *)func_?();
          uStack_15 = *puVar38;
          uStack_16 = *(undefined4 *)(puVar38 + 1);
          fVar39 = (float10)func_?();
          fStack_40 = (float)fVar39;
          fVar39 = (float10)func_?();
          fStack_41 = (float)fVar39;
          if (fStack_41 < fStack_40) {
            puVar38 = (undefined8 *)func_?();
            uStack_17 = *puVar38;
            uStack_18 = *(undefined4 *)(puVar38 + 1);
            fVar39 = (float10)func_?();
            fStack_40 = (float)fVar39;
            func_?(&uStack_8,iVar35,fStack_40,0);
          }
        }
        if (bVar34 == 0) {
          pMVar31 = (MethodInfo *)&UNK_?;
          puVar30 = (undefined4 *)func_?();
          if ((GameObject *)*puVar30 == (GameObject *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)*puVar30,0,pMVar31);
        }
      }
    }
  }
  func_?(0);
  uVar42 = 0;
  func_?();
  pcVar43 = (code *)swi(3);
  pBVar36 = (Bounds *)(*pcVar43)(uVar42);
  return pBVar36;
}


/* Vector3 GetWorldCenterPos() */

Vector3 * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_GetWorldCenterPos
                    (Vector3 *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  this_00 = (this->fields)._.transform;
  MVCubeModelBase_GetBounds(&BStack_1,this,(MethodInfo *)0x0);
  pVVar2 = (Vector3 *)func_?(&BStack_1.m_Extents,&stack0xffffffcc,0);
  if (this_00 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       (&BStack_1.m_Extents,this_00,*pVVar2,(MethodInfo *)0x0);
    fVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    __return_storage_ptr__->x = pVVar2->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Void HandleDelta() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_HandleDelta
               (MVCubeModelBase *this,MethodInfo *method)

{
  rpcm = (this->fields).prototypeCubeModel;
  if (rpcm == (RuntimePrototypeCubeModel *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar2 = (rpcm->fields).deltaCubes;
  while (pDVar2 != (DeltaCubes *)0x0) {
    iVar3 = DeltaCubes::DeltaCubes_get_Count(pDVar2,(MethodInfo *)0x0);
    if (iVar3 < 1) {
      return;
    }
    pDVar2 = (rpcm->fields).deltaCubes;
    if (pDVar2 == (DeltaCubes *)0x0) break;
    prototypeData = DeltaCubes::DeltaCubes_Dequeue(pDVar2,rpcm,(MethodInfo *)0x0);
    if (prototypeData != (Byte__Array *)0x0) {
      iVar4 = (rpcm->fields).prototypeState;
      if (iVar4 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame_OperationRequests *)0x0) break;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                  (this_01,(rpcm->fields).prototypeId,prototypeData,(MethodInfo *)0x0);
      }
      else if (iVar4 == 1) {
        this_00 = (List_1_VoxelHit_ *)(rpcm->fields).pendingDeltaCubes;
        if (this_00 == (List_1_VoxelHit_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                  (this_00,(IEnumerable_1_VoxelHit_ *)prototypeData,
                   MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                  );
      }
    }
    pDVar2 = (rpcm->fields).deltaCubes;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 ICubeModelCollider.get_Id() */

int32_t Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ICubeModelCollider_get_Id
                  (MVCubeModelBase *this,MethodInfo *method)

{
  return (this->fields)._._.id;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_Initialize
               (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields)._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (this_00,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    uVar2 = 0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pUVar1->max_length <= uVar2) break;
        if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppUVar3,0,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppUVar3 = ppUVar3 + 1;
      }
      uVar4 = func_?(0,0);
      func_?(uVar4);
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void MakeUnique() */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_MakeUnique
               (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    IStack_2.fields.direction.z = (float)&UNK_?;
    iVar3 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                      (pRVar1,(MethodInfo *)0x0);
    if (iVar3 < 2) {
      return;
    }
    pRVar1 = (this->fields).prototypeCubeModel;
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
                (pRVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        _method = _method & 0xffffffff00000000;
        this_02 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                  CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_01,(MethodInfo *)0x0);
        if (this_02 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
          _method = CONCAT44(this_02,&UNK_?);
          this_03 = (MVWorldInventory *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (this_02,(MethodInfo *)0x0);
          if (this_03 != (MVWorldInventory *)0x0) {
            _method = CONCAT44(&UNK_?,method);
            MVWorldInventory::MVWorldInventory_RequestWoMakeUniquePrototype
                      (this_03,(this->fields)._._.id,(MethodInfo *)0x0);
            if ((this->fields).prototypeCubeModel != (RuntimePrototypeCubeModel *)0x0) {
              _method = _method & 0xffffffff00000000;
              uStack4 = 0xffffffff;
              puStack5 = &DAT_?;
              puStack6 = (undefined *)*unaff_FS_OFFSET;
              *unaff_FS_OFFSET = &stack0x00000020;
              puStack7 = &stack0xffffffcc;
              puVar8 = &stack0xffffffcc;
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
                puVar8 = puStack7;
              }
              puStack7 = puVar8;
              method = (MethodInfo *)0x0;
              in_stack_9 = (MonitorData *)0x0;
              IStack_2.klass = (InputToPlayerMovementAndroid__Class *)0x0;
              IStack_2.monitor = (MonitorData *)0x0;
              IStack_2.fields.jump = 0;
              IStack_2.fields.jumpFrameUpdate = 0;
              IStack_2.fields.jumpFixedUpdate = 0;
              IStack_2.fields._3_1_ = 0;
              IStack_2.fields.direction.x = 0.0;
              IStack_2.fields.direction.y = 0.0;
              IStack_2.fields.direction.z = 0.0;
              func_?();
              puStack7 = &stack0xffffffcc;
              if (*(Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                    **)(in_stack_10 + 0x34) !=
                  (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                   *)0x0) {
                puStack7 = &stack0xffffffcc;
                pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                         Experimental::TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::
                         Object]::
                         Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                                   ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                                     *)&stack0xfffffff0,
                                    *(Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                                      **)(in_stack_10 + 0x34),
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                                   );
                IStack_2.klass = (InputToPlayerMovementAndroid__Class *)pDVar11->dictionary;
                IStack_2.monitor = (MonitorData *)pDVar11->next;
                IStack_2.fields._0_4_ = pDVar11->stamp;
                IStack_2.fields.direction.x = (float)(pDVar11->current).key.tileX;
                IStack_2.fields.direction._4_8_ = *(undefined8 *)&(pDVar11->current).key.tileZ;
                uStack4 = 0;
                while( true ) {
                  cVar12 = func_?();
                  if (cVar12 == '\0') {
                    uStack4 = 0xffffffff;
                    func_?(&IStack_2,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                                   );
                    *unaff_FS_OFFSET = puStack6;
                    return;
                  }
                  pVVar13 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                     ((Vector3 *)&stack0xfffffffc,&IStack_2,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                                     );
                  method = (MethodInfo *)pVVar13->x;
                  in_stack_9 = (MonitorData *)pVVar13->y;
                  this_00 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
                            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items
                                      ((Collection_1_VoxelHit_ *)&method,
                                       MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                                      );
                  if (this_00 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) break;
                  pOVar14 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                           TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                           TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                     (this_00,(MethodInfo *)0x0);
                  SpawnRolePreviewer::SpawnRolePreviewer_set_PreviewGameObject
                            ((SpawnRolePreviewer *)this_00,(GameObject *)((int)&pOVar14->klass + 1),
                             (MethodInfo *)0x0);
                }
              }
              func_?(0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
        }
      }
    }
  }
  puStack5 = (undefined *)0x0;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  piStack_8 = (int *)0xffffffff;
  if (visible == 0) {
    piStack_9 = (int *)&stack0xffffff84;
    puStack_4 = &stack0xffffff84;
    this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
              System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
              ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
              ::
              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                          *)this,(MethodInfo *)0x0);
    if (this_00 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (this_00,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Count__
                         );
      bVar11 = pOVar10 == (Object *)0x0;
      goto code_?;
    }
  }
  else {
    bVar11 = true;
    piStack_9 = (int *)&stack0xffffff84;
    puStack_4 = &stack0xffffff84;
code_?:
    _bStack_20 = CONCAT31(uStack_12,bVar11);
    this_01 = (List_1_UnityEngine_Color32_ *)
              System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
              ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
              ::
              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                          *)this,(MethodInfo *)0x0);
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_14,this_01,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                         );
      CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar13->l
      ;
      CStack_7.monitor = (MonitorData *)pLVar13->next;
      CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar13->ver;
      CStack_7.fields.syncRoot = (Object *)(pLVar13->current).rgba;
      uStack_1 = 0;
      do {
        cVar15 = func_?();
        if (cVar15 == '\0') goto code_?;
        pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_7,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                           );
        if (pOVar10 == (Object *)0x0) goto code_?;
      } while (*(char *)&pOVar10[2].monitor == '\0');
      _bStack_20 = CONCAT31(uStack_12,1);
code_?:
      *piStack_9 = 0x62;
      _visible = 0;
      uStack_1 = 0xffffffff;
      func_?();
      if (iStack_6 != 0) goto code_?;
      if (*piStack_9 == 0x62) {
        _visible = -1;
      }
      if ((this->fields).chunkInstances != (ChunkInstances *)0x0) {
        piVar16 = (int *)func_?();
        uStack_1 = 2;
        piStack_8 = piVar16;
        while (piVar16 != (int *)0x0) {
          cVar15 = func_?();
          iVar17 = iStack_6;
          if (cVar15 == '\0') {
            piStack_9[_visible + 1] = 0xbf;
            uStack_1 = 0xffffffff;
            iVar18 = func_?();
            if (iVar18 != 0) {
              func_?();
            }
            if (iVar17 == 0) {
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            goto code_?;
          }
          iStack_19 = *piVar16;
          uVar20 = 0;
          uStack_21 = 0;
          uVar22 = *(ushort *)(iStack_19 + 0xb6);
          uStack_23 = (uint)uVar22;
          if (uVar22 != 0) {
            do {
              piVar16 = piStack_8;
              if (*(IEnumerator__Class **)(*(int *)(iStack_19 + 0x58) + (uint)uVar20 * 8) ==
                  TypeInfo__System__Collections__IEnumerator) {
                puVar24 = (undefined4 *)
                          (*piStack_8 +
                          (*(int *)(*(int *)(*piStack_8 + 0x58) + 4 + (uint)uVar20 * 8) + 0x18) * 8)
                ;
                goto code_?;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar22);
          }
          puVar24 = (undefined4 *)func_?();
code_?:
          piVar25 = (int *)(*(code *)*puVar24)();
          if (piVar25 == (int *)0x0) break;
          if (*(Il2CppClass **)(*piVar25 + 0x20) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          func_?();
          pQVar26 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
                    SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                              ((Quaternion *)auStack_14,
                               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)
                               &stack0xffffff90,
                               MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                              );
          if ((GameObject *)pQVar26->x == (GameObject *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)pQVar26->x,(bool)_bStack_20,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    bVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveCube
                      (this_00,pos,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).changedEventArgsQueue;
      item = (SmoothPhysicsMovement_Package *)func_?();
      CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
                ((CubeModelChangedEventArgs *)item,CubeAction__Enum_Deleted,pos,this,
                 (MethodInfo *)0x0);
      if (this_01 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                (this_01,item,
                 MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                );
    }
    return;
  }
code_?:
  func_?(0);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReplaceCube(IntVector, Byte) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_ReplaceCube
               (MVCubeModelBase *this,IntVector iVector,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  MVCubeModelBase_MakeUnique(this,(MethodInfo *)0x0);
  this_00 = (this->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ReplaceCube
              (this_00,iVector,materialId,(MethodInfo *)0x0);
    this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).changedEventArgsQueue;
    item = (SmoothPhysicsMovement_Package *)func_?(TypeInfo__CubeModelChangedEventArgs);
    CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
              ((CubeModelChangedEventArgs *)item,CubeAction__Enum_FaceChanged,iVector,this,
               (MethodInfo *)0x0);
    if (this_01 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                (this_01,item,
                 MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                );
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pSVar2 = MVWorldObjectClient::MVWorldObjectClient_ToString
                     ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (pMVar1->fields).prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    pOStack_3 = System.Core.dll::System::Linq::
                Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                           (MethodInfo *)0x0);
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_3);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)pSVar2,(Object *)StringLiteral__authorProfileID_,pOVar4,
                        (MethodInfo *)0x0);
    this = (MVCubeModelBase *)(pMVar1->fields).prototypeCubeModel;
    method = (MethodInfo *)0x0;
    if (this == (MVCubeModelBase *)0x0) {
      this = (MVCubeModelBase *)&UNK_?;
      func_?();
      pcVar5 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar5)();
      return pSVar2;
    }
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name
              ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,(MethodInfo *)0x0);
    method = (MethodInfo *)&stack0xfffffff4;
    this = (MVCubeModelBase *)TypeInfo__System__Int32;
    pOVar4 = (Object *)func_?();
    pSVar2 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)pSVar2,(Object *)StringLiteral__prototypeCubeModel_PrototypeId_,
                        pOVar4,(MethodInfo *)0x0);
  }
  this = (MVCubeModelBase *)CONCAT13(((pMVar1->fields)._.interactionFlags & 0x4000) != 0,this._0_3_)
  ;
  pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_1
                     ((Object *)pSVar2,(Object *)StringLiteral__can_add_to_inventory_,pOVar4,
                      (MethodInfo *)0x0);
  return pSVar2;
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


/* IModelingConstraint <MVCubeModelBase>m__0() */

IModelingConstraint *
Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase__MVCubeModelBase_m__0
          (MVCubeModelBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?((short)TypeInfo__SharedCubeFunctions);
  }
  uVar1 = 0;
  IVar2 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraint
                    ((MethodInfo *)&stack0xfffffff4);
  IVar2 = *IVar2._0_4_;
  this_00 = (ModelingDynamicBoxConstraint *)
            func_?(TypeInfo__ModelingDynamicBoxConstraint,uVar1);
  ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint__ctor
            (this_00,this,IVar2,(MethodInfo *)0x0);
  return (IModelingConstraint *)this_00;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ChunkInstances *)func_?(TypeInfo__ChunkInstances);
  ChunkInstances::ChunkInstances__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).chunkInstances = this_00;
  this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>
                           );
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Queue__);
  (this->fields).changedEventArgsQueue = (Queue_1_CubeModelChangedEventArgs_ *)this_01;
  if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
    func_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_2
            ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
  this_02 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_02,(Type *)StringLiteral_protoTypeID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 == (Pool *)0x0) goto code_?;
    if ((pPVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar2 = (int32_t *)func_?();
    if (prototypes == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    key = *piVar2;
    pRVar3 = (RuntimePrototypeCubeModel *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)prototypes,key,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                       );
    (this->fields).prototypeCubeModel = pRVar3;
    if (pRVar3 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (pRVar3,this,(MethodInfo *)0x0);
    pRVar3 = (this->fields).prototypeCubeModel;
    if (pRVar3 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    a = (pRVar3->fields).DirtyChunksRegenerated;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,this->klass[1]._0.image,
               MethodInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>__Action_System__Object__void__
              );
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)pUVar4,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
code_?:
      pGVar6 = (this->fields)._.gameObject;
      if (pGVar6 != (GameObject *)0x0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                            ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar7->x;
        uVar8._4_4_ = pVVar7->y;
        fVar9 = pVVar7->z;
        pFVar10 = (FloatAttribute *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)prototypes,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            );
        if (pFVar10 != (FloatAttribute *)0x0) {
          fVar11 = ThemeAttributes::FloatAttribute::FloatAttribute_get_Max
                             (pFVar10,(MethodInfo *)0x0);
          a_01.z = fVar9;
          a_01.x = (float)(int)uVar8;
          a_01.y = (float)(int)((ulonglong)uVar8 >> 0x20);
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffffe4,a_01,fVar11,(MethodInfo *)0x0);
          if (this_03 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (this_03,*pVVar7,(MethodInfo *)0x0);
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
            uVar12._0_4_ = pVVar7->x;
            uVar12._4_4_ = pVVar7->y;
            fVar9 = pVVar7->z;
            pFVar10 = (FloatAttribute *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                  *)prototypes,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            if (pFVar10 != (FloatAttribute *)0x0) {
              fVar11 = ThemeAttributes::FloatAttribute::FloatAttribute_get_Max
                                 (pFVar10,(MethodInfo *)0x0);
              a_00.z = fVar9;
              a_00.x = (float)(int)uVar12;
              a_00.y = (float)(int)((ulonglong)uVar12 >> 0x20);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffe4,a_00,fVar11,(MethodInfo *)0x0);
              (*(code *)(this->klass->vtable).set_Scale.method)();
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)this,MethodInfo__MVCubeModelBase___MVCubeModelBase_m__0__,
                         MethodInfo__System__Func<IModelingConstraint>__Func_System__Object__void__)
              ;
              (this->fields)._ModelingConstraintBuilder_k__BackingField =
                   (Func_1_IModelingConstraint_ *)pUVar4;
              MVWorldObjectClient::MVWorldObjectClient_SetName
                        ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
              pGVar6 = (this->fields)._.gameObject;
              if (pGVar6 != (GameObject *)0x0) {
                pSVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                    ((Object_1 *)pGVar6,(MethodInfo *)0x0);
                (this->fields)._.name = pSVar13;
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pDVar14 = (Delegate *)0x0;
    if ((Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
        pDVar5->klass ==
        TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
       ) {
      pDVar14 = pDVar5;
    }
    if (pDVar14 != (Delegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void add_BeingEditedChanged(EventHandler`1[EditStateEventArgs]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
               (MVCubeModelBase *this,EventHandler_1_EditStateEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).BeingEditedChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EditStateEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<EditStateEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<EditStateEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EditStateEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
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
  func_?(0);
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
    uStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  uStack_2 = 0xffffffff;
  puStack_5 = &DAT_?;
  uStack_6 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_6;
  puStack_7 = &stack0xffffff98;
  puVar8 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar8 = puStack_7;
  }
  puStack_7 = puVar8;
  CStack_9.fields.list = (IList_1_VoxelHit_ *)0x0;
  CStack_9.klass = (Collection_1_VoxelHit___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  IStack_10.klass = (InputToPlayerMovementAndroid__Class *)0x0;
  IStack_10.monitor = (MonitorData *)0x0;
  IStack_10.fields.jump = 0;
  IStack_10.fields.jumpFrameUpdate = 0;
  IStack_10.fields.jumpFixedUpdate = 0;
  IStack_10.fields._3_1_ = 0;
  IStack_10.fields.direction.x = 0.0;
  IStack_10.fields.direction.y = 0.0;
  IStack_10.fields.direction.z = 0.0;
  func_?();
  iVar11 = 0;
  iStack_12 = 0;
  this_00 = (pRVar1->fields).chunks;
  puStack_13 = (undefined4 *)&stack0xffffff98;
  puStack_7 = &stack0xffffff98;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    puStack_13 = (undefined4 *)&stack0xffffff98;
    puStack_7 = &stack0xffffff98;
    pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       (&DStack_15,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    IStack_10.klass = (InputToPlayerMovementAndroid__Class *)pDVar14->dictionary;
    IStack_10.monitor = (MonitorData *)pDVar14->next;
    IStack_10.fields._0_4_ = pDVar14->stamp;
    IStack_10.fields.direction.x = (float)(pDVar14->current).key.tileX;
    IStack_10.fields.direction._4_8_ = *(undefined8 *)&(pDVar14->current).key.tileZ;
    uStack_2 = 0;
    while( true ) {
      cVar16 = func_?();
      if (cVar16 == '\0') {
        *puStack_13 = 0x49;
        uStack_2 = 0xffffffff;
        func_?(&IStack_10,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_6;
        return iVar11;
      }
      pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&DStack_15.current,&IStack_10,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      CStack_9.klass = (Collection_1_VoxelHit___Class *)pVVar17->x;
      CStack_9.monitor = (MonitorData *)pVVar17->y;
      CStack_9.fields.list = (IList_1_VoxelHit_ *)pVVar17->z;
      this_01 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (&CStack_9,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                          );
      if (this_01 == (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) break;
      pOVar18 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      iVar11 = (int)&pOVar18->klass + iVar11;
      iStack_12 = iVar11;
    }
  }
  func_?(0);
  func_?(0,0,0);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
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
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (SubscribableVariableBase_1_UnityEngine_Quaternion___Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0.0;
  auStack_6._12_4_ = 0.0;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  func_?();
  pCVar7 = (this->fields).chunkInstances;
  pMVar8 = this;
  puStack_9 = (undefined4 *)&stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  if (pCVar7 != (ChunkInstances *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffff90;
    puStack_4 = &stack0xffffff90;
    iVar10 = ChunkInstances::ChunkInstances_get_Count(pCVar7,(MethodInfo *)0x0);
    pMStack_11 = (MeshFilter__Array *)func_?(TypeInfo__UnityEngine__MeshFilter,iVar10);
    pCVar7 = (this->fields).chunkInstances;
    uStack_12 = 0;
    if (pCVar7 != (ChunkInstances *)0x0) {
      piVar13 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar7);
      uStack_1 = 0;
      while (pMVar8 = this, piVar13 != (int *)0x0) {
        cVar14 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar13);
        pMVar8 = (MVCubeModelBase *)TypeInfo__System__Collections__IEnumerator;
        if (cVar14 == '\0') {
          *puStack_9 = 0x6d;
          uStack_1 = 0xffffffff;
          iVar15 = func_?(piVar13,TypeInfo__System__IDisposable);
          if (iVar15 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar15);
          }
          *unaff_FS_OFFSET = uStack_3;
          return pMStack_11;
        }
        iStack_16 = *piVar13;
        uVar17 = 0;
        uStack_18 = 0;
        if (*(ushort *)(iStack_16 + 0xb6) != 0) {
          do {
            if (*(IEnumerator__Class **)(*(int *)(iStack_16 + 0x58) + (uint)uVar17 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar19 = (undefined4 *)
                       (iStack_16 + 0xc0 +
                       *(int *)(*(int *)(iStack_16 + 0x58) + 4 + (uint)uVar17 * 8) * 8);
              goto code_?;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(ushort *)(iStack_16 + 0xb6));
        }
        puVar19 = (undefined4 *)func_?(piVar13,TypeInfo__System__Collections__IEnumerator,0);
code_?:
        piVar20 = (int *)(*(code *)*puVar19)(piVar13,puVar19[1]);
        uVar21 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                          ,piVar20);
        if (piVar20 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar20 + 0x20) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) goto code_?;
        puVar19 = (undefined4 *)func_?(piVar20);
        auStack_6._0_4_ = *puVar19;
        auStack_6._4_4_ = puVar19[1];
        auStack_6._8_4_ = puVar19[2];
        auStack_6._12_4_ = puVar19[3];
        auStack_6._16_8_ = *(undefined8 *)(puVar19 + 4);
        pQVar22 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
                  SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                            ((Quaternion *)(auStack_6 + 0x18),
                             (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)auStack_6,
                             MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                            );
        fStack_23 = pQVar22->x;
        fStack_24 = pQVar22->y;
        fStack_25 = pQVar22->z;
        this = (MVCubeModelBase *)pQVar22->w;
        pMStack_26 = this;
        if (pMStack_11 == (MeshFilter__Array *)0x0) break;
        if ((this != (MVCubeModelBase *)0x0) &&
           (iVar15 = func_?(this,(pMStack_11->klass->_0).element_class), iVar15 == 0)) {
          uVar27 = func_?();
          func_?(uVar27,0,0);
code_?:
          uVar27 = func_?();
          func_?(uVar27,0,0);
          pMVar8 = this;
          break;
        }
        if (pMStack_11->max_length <= uStack_12) goto code_?;
        pMStack_11->vector[uStack_12] = (MeshFilter *)this;
        uStack_12 = uStack_12 + 1;
      }
    }
  }
  uVar21 = func_?(0);
code_?:
  func_?(uVar21);
  func_?(pMVar8,0,0);
  pcVar28 = (code *)swi(3);
  pMVar29 = (MeshFilter__Array *)(*pcVar28)();
  return pMVar29;
}


/* Func`1[IModelingConstraint] get_ModelingConstraintBuilder() */

Func_1_IModelingConstraint_ *
Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_ModelingConstraintBuilder
          (MVCubeModelBase *this,MethodInfo *method)

{
  return (this->fields)._ModelingConstraintBuilder_k__BackingField;
}


/* Int32 get_Pid() */

int32_t Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_Pid
                  (MVCubeModelBase *this,MethodInfo *method)

{
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    return (pRVar1->fields).prototypeId;
  }
  func_?(0);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVCubeModelBase *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  pBVar6 = MVCubeModelBase_GetWorldBounds(&BStack_7,this,(MethodInfo *)0x0);
  fStack_1 = (pBVar6->m_Center).x;
  fStack_2 = (pBVar6->m_Center).y;
  fStack_3 = (pBVar6->m_Center).z;
  fStack_4 = (pBVar6->m_Extents).x;
  uStack_5._0_4_ = (pBVar6->m_Extents).y;
  uStack_5._4_4_ = (pBVar6->m_Extents).z;
  puVar8 = (undefined8 *)func_?(&BStack_7.m_Extents,&fStack_1,0);
  uVar9 = *puVar8;
  fVar10 = *(float *)(puVar8 + 1);
  __return_storage_ptr__->x = (float)(int)uVar9;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar9 >> 0x20);
  __return_storage_ptr__->z = fVar10;
  return __return_storage_ptr__;
}


/* Void remove_BeingEditedChanged(EventHandler`1[EditStateEventArgs]) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_remove_BeingEditedChanged
               (MVCubeModelBase *this,EventHandler_1_EditStateEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).BeingEditedChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EditStateEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<EditStateEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<EditStateEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EditStateEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_BeingEdited(Boolean) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_set_BeingEdited
               (MVCubeModelBase *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).beingEdited != value) {
    this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).BeingEditedChanged
    ;
    (this->fields).beingEdited = value;
    if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      e = (InitializedGameQueryDataEventArgs *)func_?(TypeInfo__EditStateEventArgs);
      EditStateEventArgs::EditStateEventArgs__ctor((EditStateEventArgs *)e,value,(MethodInfo *)0x0);
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (this_00,(Object *)this,e,
                 MethodInfo__System__EventHandler<EditStateEventArgs>__Invoke_System__Object__EditStateEventArgs_
                );
    }
  }
  return;
}


/* Void set_PrototypeCubeModel(RuntimePrototypeCubeModel) */

void Assembly-CSharp.dll::MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
               (MVCubeModelBase *this,RuntimePrototypeCubeModel *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).prototypeCubeModel;
  if (pRVar1 == value) {
    return;
  }
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    pAVar2 = (pRVar1->fields).DirtyChunksRegenerated;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,this->klass[1]._0.image,
               MethodInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>__Action_System__Object__void__
              );
    pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pAVar2 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
    if (pAVar4 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      if (pAVar4->klass ==
          TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
         ) {
        pAVar2 = pAVar4;
      }
      pAVar5 = 
      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
      if (pAVar2 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      goto code_?;
    }
    (pRVar1->fields).DirtyChunksRegenerated = pAVar2;
    (this->fields).prototypeCubeModel = value;
    if (value != (RuntimePrototypeCubeModel *)0x0) {
      pAVar2 = (value->fields).DirtyChunksRegenerated;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,this->klass[1]._0.image,
                 MethodInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>__Action_System__Object__void__
                );
      pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar2 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      if (pAVar4 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
code_?:
        (value->fields).DirtyChunksRegenerated = pAVar2;
        return;
      }
      if (pAVar4->klass ==
          TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
         ) {
        pAVar2 = pAVar4;
      }
      pAVar5 = 
      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
      if (pAVar2 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

