
/* Void AddChild(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVGroup::MVGroup_AddChild
               (MVGroup *this,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = child;
  if (child == (MVWorldObjectClient *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = func_?();
    func_?(uVar1,uVar3,uVar2);
code_?:
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = func_?();
    func_?(uVar1,uVar3,uVar2);
code_?:
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = func_?();
    func_?(uVar1,uVar3,uVar2);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
  }
  else {
    puVar4 = (undefined8 *)
             (*(code *)(child->klass->vtable).get_Position.method)
                       (auStack_5,child,(child->klass->vtable).set_Position.methodPtr);
    uStack_6 = *puVar4;
    child = *(MVWorldObjectClient **)(puVar4 + 1);
    puVar7 = (undefined4 *)
             (*(code *)(this_01->klass->vtable).get_Rotation.method)
                       (&stack0xffffffc8,this_01,(this_01->klass->vtable).set_Rotation.methodPtr);
    uVar1 = *puVar7;
    uVar3 = puVar7[1];
    uVar2 = puVar7[2];
    uVar8 = puVar7[3];
    puVar4 = (undefined8 *)
             (*(code *)(this_01->klass->vtable).get_Scale.method)
                       (auStack_9,this_01,(this_01->klass->vtable).set_Scale.methodPtr);
    uStack_10 = *puVar4;
    pIStack_11 = *(IList_1_VoxelHit_ **)(puVar4 + 1);
    this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)this_01,(MethodInfo *)0x0)
    ;
    this_00 = (this->fields)._.gameObject;
    if ((this_00 == (GameObject *)0x0) ||
       (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), this_02 == (MVPointLightObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              ((Transform *)this_02,value,(MethodInfo *)0x0);
    (*(code *)(this_01->klass->vtable).set_Position.method)
              (this_01,uStack_6,child,(this_01->klass->vtable).get_Rotation.methodPtr);
    (*(code *)(this_01->klass->vtable).set_Rotation.method)
              (this_01,uVar1,uVar3,uVar2,uVar8,(this_01->klass->vtable).get_Scale.methodPtr);
    (*(code *)(this_01->klass->vtable).set_Scale.method)
              (this_01,uStack_10,pIStack_11,(this_01->klass->vtable).get_WorldPosition.methodPtr);
    pDVar12 = (this->fields).children;
    pIVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
    if (pDVar12 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
    bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,(int32_t)pIVar13,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar14 == 0) {
      pDVar12 = (this->fields).children;
      pIVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
      ;
      if (pDVar12 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,(int32_t)pIVar13,
                   (Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                  );
        return;
      }
      goto code_?;
    }
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_Group_ != (String *)0x0) &&
       (iVar15 = func_?(StringLiteral_Group_,(args->klass->_0).element_class), iVar15 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Group_;
    child = (MVWorldObjectClient *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    pOVar16 = (Object *)func_?(TypeInfo__System__Int32,&child);
    if ((pOVar16 != (Object *)0x0) && (iVar15 = func_?(), iVar15 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar16;
    if ((StringLiteral_already_contains_child_ != (String *)0x0) &&
       (iVar15 = func_?(), iVar15 == 0)) goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral_already_contains_child_;
    pIStack_11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
    pOVar16 = (Object *)func_?();
    if ((pOVar16 == (Object *)0x0) || (iVar15 = func_?(pOVar16), iVar15 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar16;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVGroup::MVGroup_Clone
          (MVGroup *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pMVar4 = MVWorldObjectClient::MVWorldObjectClient_Clone
                     ((MVWorldObjectClient *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,
                      worldObjects,prototypes,(MethodInfo *)0x0);
  if (pMVar4 == (MVWorldObjectClient *)0x0) {
    pMVar5 = (MVWorldObjectClient *)0x0;
  }
  else {
    bVar6 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar4->klass->_1).naturalAligment < bVar6) ||
       ((MVGroup__Class *)(pMVar4->klass->_1).typeHierarchy[bVar6 - 1] != TypeInfo__MVGroup)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pMVar5 = (MVWorldObjectClient *)0x0;
    if (bVar7) {
      pMVar5 = pMVar4;
    }
    if (pMVar5 == (MVWorldObjectClient *)0x0) {
      func_?();
      goto code_?;
    }
  }
  this_00 = (List_1_VoxelHit_ *)MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (TypeInfo__MVGroup->static_fields->__f__am_cache0 == (Comparison_1_MVWorldObjectClient_ *)0x0)
  {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__MVGroup___Clone_m__0_MVWorldObjectClient__MVWorldObjectClient_,
               MethodInfo__System__Comparison<MVWorldObjectClient>__Comparison_System__Object__void__
              );
    TypeInfo__MVGroup->static_fields->__f__am_cache0 = (Comparison_1_MVWorldObjectClient_ *)this_01;
  }
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Sort_2
              (this_00,(Comparison_1_VoxelHit_ *)TypeInfo__MVGroup->static_fields->__f__am_cache0,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Sort_System__Comparison<MVWorldObjectClient>_
              );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc0,
               (List_1_UnityEngine_Color32_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    uStack_1 = 0;
    while( true ) {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        _UNK_? = 0x83;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return pMVar5;
      }
      pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          &stack0xffffffd0,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                         );
      if ((pMVar5 == (MVWorldObjectClient *)0x0) || (pOVar9 == (Object *)0x0)) break;
      (*(code *)pOVar9->klass[2]._1.cctor_started)();
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient *)(*pcVar10)();
  return pMVar4;
}


/* Bounds ComputeBoundsForWOs(List`1[MVWorldObjectClient], BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGroup::MVGroup_ComputeBoundsForWOs
                   (Bounds *__return_storage_ptr__,List_1_MVWorldObjectClient_ *woList,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  uVar1 = (ulonglong)unaff_EBX;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (woList != (List_1_MVWorldObjectClient_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)woList,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                       );
    if (pOVar2 != (Object *)0x0) {
      pMVar3 = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)woList,0,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      pBVar4 = MVGroup_ComputeLocalChildBounds
                         ((Bounds *)&stack0xffffffb8,pMVar3,boundsContext,(MethodInfo *)0x0);
      index = 1;
      puVar5 = (undefined *)(pBVar4->m_Center).x;
      puVar6 = (undefined1 *)(pBVar4->m_Center).y;
      fStack_7 = (pBVar4->m_Center).z;
      fStack_8 = (pBVar4->m_Extents).x;
      uStack_9._0_4_ = (pBVar4->m_Extents).y;
      uStack_9._4_4_ = (pBVar4->m_Extents).z;
      while( true ) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)woList,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                           );
        if ((int)pOVar2 <= index) break;
        pMVar3 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)woList,index,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                           );
        pBVar4 = MVGroup_ComputeLocalChildBounds
                           ((Bounds *)&stack0xffffffb8,pMVar3,boundsContext,(MethodInfo *)0x0);
        fStack_7 = (pBVar4->m_Center).x;
        fStack_8 = (pBVar4->m_Center).y;
        uStack_9 = *(undefined8 *)&(pBVar4->m_Center).z;
        VStack_10.z = 0.0;
        VStack_10.x = (pBVar4->m_Extents).y;
        VStack_10.y = (pBVar4->m_Extents).z;
        puVar6 = &stack0xffffffd0;
        puVar5 = &UNK_?;
        func_?();
        index = index + 1;
      }
      (__return_storage_ptr__->m_Center).x = (float)puVar5;
      (__return_storage_ptr__->m_Center).y = (float)puVar6;
      (__return_storage_ptr__->m_Center).z = fStack_7;
      (__return_storage_ptr__->m_Extents).x = fStack_8;
      (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_9;
      (__return_storage_ptr__->m_Extents).z = (float)uStack_9._4_4_;
      return __return_storage_ptr__;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3,uVar1);
    }
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_10,(MethodInfo *)0x0);
    uStack_12._0_4_ = pVVar11->x;
    uStack_12._4_4_ = pVVar11->y;
    fVar13 = pVVar11->z;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_10,(MethodInfo *)0x0);
    fVar14 = pVVar11->y;
    fVar15 = pVVar11->z;
    uVar16._0_4_ = 0.0;
    uVar16._4_4_ = 0.0;
    func_?(&stack0xffffffb8,uStack_12,fVar13);
    (__return_storage_ptr__->m_Center).x = fVar14;
    (__return_storage_ptr__->m_Center).y = fVar15;
    (__return_storage_ptr__->m_Center).z = 0.0;
    (__return_storage_ptr__->m_Extents).x = 0.0;
    (__return_storage_ptr__->m_Extents).y = (float)uVar16;
    (__return_storage_ptr__->m_Extents).z = SUB84(uVar16,4);
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  pBVar4 = (Bounds *)(*pcVar17)();
  return pBVar4;
}


/* Bounds ComputeLocalChildBounds(MVWorldObjectClient, BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGroup::MVGroup_ComputeLocalChildBounds
                   (Bounds *__return_storage_ptr__,MVWorldObjectClient *wo,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    this = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)wo,(MethodInfo *)0x0);
    if (this != (MVPointLightObject *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         (&VStack_2,(Transform *)this,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar1->x;
      uStack_3._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         (&QStack_6,(Transform *)this,(MethodInfo *)0x0);
      QStack_6.x = pQVar5->x;
      QStack_6.y = pQVar5->y;
      QStack_6.z = pQVar5->z;
      QStack_6.w = pQVar5->w;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         (&VStack_7,(Transform *)this,(MethodInfo *)0x0);
      VStack_2.y = pVVar1->x;
      VStack_2.z = pVVar1->y;
      fVar8 = pVVar1->z;
      if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
        func_?();
      }
      pos.z = fVar4;
      pos.x = (float)uStack_3;
      pos.y = uStack_3._4_4_;
      q.y = QStack_6.y;
      q.x = QStack_6.x;
      q.z = QStack_6.z;
      q.w = QStack_6.w;
      s.z = fVar8;
      s.x = VStack_2.y;
      s.y = VStack_2.z;
      pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                         ((Matrix4x4 *)&stack0xffffff64,pos,q,s,(MethodInfo *)0x0);
      QStack_6.x = pMVar9->m00;
      QStack_6.y = pMVar9->m10;
      QStack_6.z = pMVar9->m20;
      QStack_6.w = pMVar9->m30;
      fVar4 = pMVar9->m01;
      VStack_7.x = pMVar9->m11;
      VStack_7.y = pMVar9->m21;
      VStack_7.z = pMVar9->m31;
      fStack_10 = pMVar9->m02;
      fStack_11 = pMVar9->m12;
      uStack_3._0_4_ = pMVar9->m22;
      uStack_3._4_4_ = pMVar9->m32;
      fStack_12 = pMVar9->m03;
      VStack_2.x = pMVar9->m13;
      VStack_2.y = pMVar9->m23;
      VStack_2.z = pMVar9->m33;
      pBVar13 = (Bounds *)(*(code *)(wo->klass->vtable).GetLocalBounds.method)();
      m.m10 = QStack_6.y;
      m.m00 = QStack_6.x;
      m.m20 = QStack_6.z;
      m.m30 = QStack_6.w;
      m.m01 = fVar4;
      m.m11 = VStack_7.x;
      m.m21 = VStack_7.y;
      m.m31 = VStack_7.z;
      m.m02 = fStack_10;
      m.m12 = fStack_11;
      m.m22 = (float)uStack_3;
      m.m32 = uStack_3._4_4_;
      m.m03 = fStack_12;
      m.m13 = VStack_2.x;
      m.m23 = VStack_2.y;
      m.m33 = VStack_2.z;
      pBVar13 = MathFunctions::MathFunctions_FastAABBTransform
                         ((Bounds *)&stack0xffffffa4,m,*pBVar13,(MethodInfo *)0x0);
      fVar4 = (pBVar13->m_Center).y;
      fVar8 = (pBVar13->m_Center).z;
      fVar14 = (pBVar13->m_Extents).x;
      (__return_storage_ptr__->m_Center).x = (pBVar13->m_Center).x;
      (__return_storage_ptr__->m_Center).y = fVar4;
      (__return_storage_ptr__->m_Center).z = fVar8;
      (__return_storage_ptr__->m_Extents).x = fVar14;
      fVar4 = (pBVar13->m_Extents).z;
      (__return_storage_ptr__->m_Extents).y = (pBVar13->m_Extents).y;
      (__return_storage_ptr__->m_Extents).z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar15 = (code *)swi(3);
  pBVar13 = (Bounds *)(*pcVar15)();
  return pBVar13;
}


/* Void CreateGroup() */

void Assembly-CSharp.dll::MVGroup::MVGroup_CreateGroup(MVGroup *this,MethodInfo *method)

{
  uVar1 = *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4);
  piVar2 = &(this->fields)._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x82101;
  *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = uVar1;
  return;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVGroup::MVGroup_DeSelect(MVGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_Color32_ *)MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      CStack_6.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      cVar9 = func_?();
      if (cVar9 == '\0') {
        *puStack_7 = 0x45;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                         );
      if (pOVar10 == (Object *)0x0) break;
      (*(code *)pOVar10->klass[3]._0.methods)();
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVWorldObjectClient GetChild(Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVGroup::MVGroup_GetChild(MVGroup *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObjectClient *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).children;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
              (this_00,woID,(TerrainUtility_TerrainMap **)&pMStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    return pMStack_1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar3;
}


/* Int32 GetGroupAbove(Int32, Int32, InteractionFlags) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup_GetGroupAbove
                  (int32_t currentParent,int32_t leaf,InteractionFlags__Enum returnParentIfHasFlags,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  while( true ) {
    id = (Object *)leaf;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar2,(MethodInfo *)0x0), pMVar3 == (MVWorldObjectClientManager *)0x0)
        ) || (this = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar3,(int32_t)id,(MethodInfo *)0x0), this == (MVWorldObject *)0x0)
       ) break;
    leaf = (int32_t)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                               (MethodInfo *)0x0);
    if ((Object *)leaf == (Object *)0xffffffff) {
      return -1;
    }
    if (returnParentIfHasFlags != InteractionFlags__Enum_CanRespawn || method != (MethodInfo *)0x0)
    {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        currentParent = (int32_t)&UNK_?;
        func_?();
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
           (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
          (pMVar3 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar2,(MethodInfo *)0x0),
          pMVar3 == (MVWorldObjectClientManager *)0x0)) ||
         (this_00 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar3,leaf,(MethodInfo *)0x0), this_00 == (MVWorldObjectClient *)0x0
         )) break;
      bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (this_00,returnParentIfHasFlags,method);
      if (bVar4 != 0) {
        return (int32_t)(Object *)leaf;
      }
    }
    if (currentParent == leaf) {
      return (int32_t)id;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* HashSet`1[System.Int32] GetHierarchyWorldObjectIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVGroup::MVGroup_GetHierarchyWorldObjectIDs(MVGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  pHStack_8 = this_00;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  pHStack_9 = this_00;
  if (this_00 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
               (UnityWebRequest *)(this->fields)._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    this_01 = (List_1_UnityEngine_Color32_ *)MVGroup_get_Children(this,(MethodInfo *)0x0);
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffbc,this_01,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                         );
      CStack_6.fields.syncRoot = (Object *)(pLVar10->current).rgba;
      uStack_1 = 0;
      while( true ) {
        CStack_6.fields.list =
             (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
        ;
        CStack_6.monitor = (MonitorData *)&CStack_6;
        CStack_6.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&UNK_?;
        cVar11 = func_?();
        if (cVar11 == '\0') {
          *puStack_7 = 0x79;
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return (HashSet_1_System_Int32_ *)this_00;
        }
        this_02 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                            );
        if (this_02 == (Collection_1_VoxelHit_ *)0x0) break;
        bVar12 = (TypeInfo__MVGroup->_1).naturalAligment;
        if (((this_02->klass->_1).naturalAligment < bVar12) ||
           ((MVGroup__Class *)(this_02->klass->_1).typeHierarchy[bVar12 - 1] != TypeInfo__MVGroup)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        pCVar14 = (Collection_1_VoxelHit_ *)0x0;
        if (bVar13) {
          pCVar14 = this_02;
        }
        if (pCVar14 == (Collection_1_VoxelHit_ *)0x0) {
          item = (UnityWebRequest *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
          this_00 = pHStack_8;
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHStack_8,item,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        }
        else {
          iVar15 = func_?();
          method_00 = (MethodInfo *)0x0;
          if (iVar15 == 0) break;
          this_03 = (MVGroup *)func_?();
          pHVar16 = MVGroup_GetHierarchyWorldObjectIDs(this_03,method_00);
          this_00 = pHStack_8;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__UnionWith
                    ((HashSet_1_System_Int32_ *)pHStack_8,(IEnumerable_1_System_Int32_ *)pHVar16,
                     MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
                    );
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  pHVar16 = (HashSet_1_System_Int32_ *)(*pcVar17)();
  return pHVar16;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGroup::MVGroup_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVGroup *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  this_00 = MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
    pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                       );
    if (pOVar6 != (Object *)0x0) {
      pMVar7 = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,0,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      pBVar8 = MVGroup_ComputeLocalChildBounds
                         ((Bounds *)&stack0xffffff94,pMVar7,boundsContext,(MethodInfo *)0x0);
      index = 1;
      fStack_2 = (pBVar8->m_Center).x;
      fStack_3 = (pBVar8->m_Center).y;
      fStack_4 = (pBVar8->m_Center).z;
      fStack_5 = (pBVar8->m_Extents).x;
      uStack_1._0_4_ = (pBVar8->m_Extents).y;
      uStack_1._4_4_ = (pBVar8->m_Extents).z;
      while( true ) {
        pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                           );
        if ((int)pOVar6 <= index) break;
        pMVar7 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,index,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                           );
        pBVar8 = MVGroup_ComputeLocalChildBounds
                           ((Bounds *)&stack0xffffff7c,pMVar7,boundsContext,(MethodInfo *)0x0);
        fStack_9 = (pBVar8->m_Center).z;
        fStack_10 = (pBVar8->m_Extents).x;
        uStack_11 = uStack_11 & 0xffffffff00000000;
        uStack_12._0_4_ = (pBVar8->m_Extents).y;
        uStack_12._4_4_ = (pBVar8->m_Extents).z;
        func_?();
        index = index + 1;
      }
      (__return_storage_ptr__->m_Center).x = fStack_2;
      (__return_storage_ptr__->m_Center).y = fStack_3;
      (__return_storage_ptr__->m_Center).z = fStack_4;
      (__return_storage_ptr__->m_Extents).x = fStack_5;
      (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_1;
      (__return_storage_ptr__->m_Extents).z = (float)uStack_1._4_4_;
      return __return_storage_ptr__;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_14,(MethodInfo *)0x0);
    uStack_15._0_4_ = pVVar13->x;
    uStack_15._4_4_ = pVVar13->y;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero(&VStack_16,(MethodInfo *)0x0)
    ;
    uStack_11 = 0;
    fStack_9 = 0.0;
    fStack_10 = 0.0;
    uStack_12 = 0;
    func_?(&fStack_9,uStack_15);
    (__return_storage_ptr__->m_Center).x = fStack_9;
    (__return_storage_ptr__->m_Center).y = fStack_10;
    (__return_storage_ptr__->m_Center).z = (float)uStack_12;
    (__return_storage_ptr__->m_Extents).x = uStack_12._4_4_;
    (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_11;
    (__return_storage_ptr__->m_Extents).z = (float)uStack_11._4_4_;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  pBVar8 = (Bounds *)(*pcVar17)();
  return pBVar8;
}


/* Int32 GetParentBelow(Int32, Int32) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup_GetParentBelow
                  (int32_t parentId,int32_t childId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this != (MVWorldObjectClientManager *)0x0) {
    child = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this,childId,(MethodInfo *)0x0);
    parent = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this,parentId,(MethodInfo *)0x0);
    if (child != (MVWorldObjectClient *)0x0) {
      childId = 0;
      iVar1 = MVGroup_GetParentBelow_1(parent,child,(MethodInfo *)0x0);
      return iVar1;
    }
    childId = (int32_t)&childId;
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      childId = (int32_t)TypeInfo__System__String;
      func_?();
    }
    childId = 0;
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_childId_is_not_valid__Id_is__,arg1,
                         (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    method = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)message,(MethodInfo *)0x0);
    return -1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Int32 GetParentBelow(MVWorldObjectClient, MVWorldObjectClient) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup_GetParentBelow_1
                  (MVWorldObjectClient *parent,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (child != (MVWorldObjectClient *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)child,
                        (MethodInfo *)0x0);
    if (pOVar1 != (Object *)0xffffffff) {
      if (parent != (MVWorldObjectClient *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)parent,(MethodInfo *)0x0);
        pIVar3 = (IList_1_VoxelHit_ *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)child,
                            (MethodInfo *)0x0);
        if (pIVar2 == pIVar3) {
          pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)child,(MethodInfo *)0x0);
          return (int32_t)pIVar2;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)child,
                            (MethodInfo *)0x0);
        if (this != (MVWorldObjectClientManager *)0x0) {
          child_00 = (MVWorldObjectClient *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (this,(int32_t)pOVar1,(MethodInfo *)0x0);
          iVar4 = MVGroup_GetParentBelow_1(parent,child_00,(MethodInfo *)0x0);
          return iVar4;
        }
      }
      func_?(0);
      pcVar5 = (code *)swi(3);
      iVar4 = (*pcVar5)();
      return iVar4;
    }
  }
  return -1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGroup::MVGroup_Initialize(MVGroup *this,MethodInfo *method)

{
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_2_ = 0xffff;
  puStack_2 = &DAT_?;
  _Stack_10.genericMethod = *(Il2CppGenericMethod **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->genericMethod = (Il2CppGenericMethod *)&_Stack_10;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields).children;
  if ((this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
     (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffbc,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
              );
    uStack_1._0_2_ = 0;
    uStack_1._2_2_ = 0;
    while (cVar3 = func_?(), cVar3 != '\0') {
      piVar4 = (int *)func_?();
      if (piVar4 == (int *)0x0) goto code_?;
      (**(code **)(*piVar4 + 0x238))();
    }
    uStack_1._0_2_ = 0xffff;
    uStack_1._2_2_ = 0xffff;
    method_00 = (MethodInfo *)&stack0xffffffd0;
    func_?();
    pIVar5 = (IList_1_VoxelHit_ *)(this->fields)._._.groupId;
    if (pIVar5 != (IList_1_VoxelHit_ *)0xffffffff) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
         (this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                              (this_02,(MethodInfo *)0x0), this_03 == (MVGroup *)0x0))
      goto code_?;
      pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_03,method_00);
      if (pIVar5 != pIVar6) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pOVar7 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab((PrefabPool *)this,(MethodInfo *)0x0);
        if (pOVar7 == (ObjectPrefab *)0x0) goto code_?;
        pDVar8 = pOVar7[5].fields._._._._.m_CachedPtr;
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_04,(Object *)this,
                   MethodInfo__MVGroup__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                  );
        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar8,(Delegate *)this_04,(MethodInfo *)0x0);
        pDVar8 = (Delegate *)0x0;
        if (pDVar9 != (Delegate *)0x0) {
          if ((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)pDVar9->klass ==
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
             ) {
            pDVar8 = pDVar9;
          }
          if (pDVar8 == (Delegate *)0x0) {
            _Stack_10.genericMethod =
                 (Il2CppGenericMethod *)
                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            func_?();
            goto code_?;
          }
        }
        pOVar7[5].fields._._._._.m_CachedPtr = pDVar8;
      }
    }
    *unaff_FS_OFFSET = _Stack_10;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGroup::MVGroup_InitializeInventory(MVGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (this->fields).children;
  if ((this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
     (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffbc,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      cVar4 = func_?();
      if (cVar4 == '\0') {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_02 = (MVWorldObjectClient *)func_?();
      if (this_02 == (MVWorldObjectClient *)0x0) break;
      MVWorldObjectClient::MVWorldObjectClient_InventoryInitialize(this_02,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsDescendant(Int32, Int32) */

bool Assembly-CSharp.dll::MVGroup::MVGroup_IsDescendant
               (int32_t parentId,int32_t leafId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  do {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
         (this = (pMVar1->fields).game, this == (MVNetworkGame *)0x0)) ||
        (this_00 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this,(MethodInfo *)0x0)
        , this_00 == (MVWorldObjectClientManager *)0x0)) ||
       (this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_00,leafId,(MethodInfo *)0x0), this_01 == (MVWorldObject *)0x0)) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    leafId = (int32_t)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01
                                 ,(MethodInfo *)0x0);
    if ((Object *)leafId == (Object *)0xffffffff) {
      return 0;
    }
  } while (leafId != parentId);
  return 1;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVGroup::MVGroup_OnEnterObject
               (MVGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    pMVar2 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVCameraBase *)0x0) {
      (*(code *)(pMVar2->klass->vtable).FocusOnObject.method)(pMVar2,this,0x40000000,0,0,0,0);
      pSVar3 = (String *)
               (*(code *)(this->klass->vtable).ToString.method)
                         (this,(this->klass->vtable).get_Position.methodPtr);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_PtrPtrPtr_Entering_group__,pSVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      if (e != (EditorStateMachine *)0x0) {
        EditorStateMachine::EditorStateMachine_EnterGroup(e,this,(MethodInfo *)0x0);
        this_00 = (PrefabPool *)
                  EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
        if (this_00 != (PrefabPool *)0x0) {
          t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            func_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                    ((Transform *)t,1,(MethodInfo *)0x0);
          pMVar1 = (MainCameraManager *)
                   GamePointGainEffect::GamePointGainEffect_get_ID
                             ((GamePointGainEffect *)e,(MethodInfo *)0x0);
          if (pMVar1 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar1,1,(MethodInfo *)0x0);
            value = (Object *)func_?(TypeInfo__EditorEvent);
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVGroup::MVGroup_OnPositionChanged
               (MVGroup *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).PositionChangedNotify.method)
            (this,(this->klass->vtable).get_WorldPivot.methodPtr);
  return;
}


/* Void PlayModeInitialize() */

void Assembly-CSharp.dll::MVGroup::MVGroup_PlayModeInitialize(MVGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (this->fields).children;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                        ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffbc,this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                );
      uStack_1 = 0;
      while( true ) {
        cVar4 = func_?();
        if (cVar4 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        piVar5 = (int *)func_?();
        if (piVar5 == (int *)0x0) break;
        (**(code **)(*piVar5 + 0x248))();
      }
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PositionChangedNotify() */

void Assembly-CSharp.dll::MVGroup::MVGroup_PositionChangedNotify(MVGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
     (this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (this_01,(MethodInfo *)0x0), this_02 != (MVGroup *)0x0)) {
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
    if (pIVar4 == pIVar5) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_root_group_cannot_notify_as_this,(MethodInfo *)0x0);
    }
    else {
      MVWorldObjectClient::MVWorldObjectClient_PositionChangedNotify
                ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      this_00 = (this->fields).children;
      if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                 &stack0xffffffb0,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__GetEnumerator__
                );
      uStack_1 = 0;
      while (cVar6 = func_?(), cVar6 != '\0') {
        LevelRewardsManager::LevelRewardsManager_get_NextReward
                  ((LevelRewardsManager *)&stack0xffffffc4,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                  );
        piVar7 = (int *)func_?();
        if (piVar7 == (int *)0x0) goto code_?;
        (**(code **)(*piVar7 + 0x1c0))();
      }
      uStack_1 = 0xffffffff;
      func_?();
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RemoveChild(Int32) */

void Assembly-CSharp.dll::MVGroup::MVGroup_RemoveChild
               (MVGroup *this,int32_t childId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).children;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
              (this_00,childId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Select() */

void Assembly-CSharp.dll::MVGroup::MVGroup_Select(MVGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_Color32_ *)MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      CStack_6.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      cVar9 = func_?();
      if (cVar9 == '\0') {
        *puStack_7 = 0x45;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                         );
      if (pOVar10 == (Object *)0x0) break;
      (*(code *)pOVar10->klass[3]._0.klass)();
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVGroup::MVGroup_Select_1(MVGroup *this,Color color,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_Color32_ *)MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      CStack_6.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      cVar9 = func_?();
      if (cVar9 == '\0') {
        *puStack_7 = 0x46;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                         );
      if (pOVar10 == (Object *)0x0) break;
      (*(code *)pOVar10->klass[3]._0.events)(pOVar10);
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetupTranformation() */

void Assembly-CSharp.dll::MVGroup::MVGroup_SetupTranformation(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pOVar1 != (ObjectPrefab *)0x0) {
    pDVar2 = pOVar1[5].fields._._._._.m_CachedPtr;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__MVGroup__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pDStack3 =
         mscorlib.dll::System::Delegate::Delegate_Combine
                   (pDVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDStack3 != (Delegate *)0x0) {
      if ((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
          pDStack3->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pDVar2 = pDStack3;
      }
      pUStack4 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if (pDVar2 == (Delegate *)0x0) goto code_?;
    }
    pOVar1[5].fields._._._._.m_CachedPtr = pDVar2;
    return;
  }
  func_?(0);
  pDStack3 = extraout_ECX;
  pUStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TransferChild(Int32) */

void Assembly-CSharp.dll::MVGroup::MVGroup_TransferChild
               (MVGroup *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    this_02 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,id,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      value = (MVGroup *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                         (MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,(int32_t)value,(MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          bVar3 = (TypeInfo__MVGroup->_1).naturalAligment;
          if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
             ((MVGroup__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] != TypeInfo__MVGroup))
          {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          pMVar5 = (MVWorldObject *)0x0;
          if (bVar4) {
            pMVar5 = pMVar2;
          }
          if (pMVar5 == (MVWorldObject *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)pMVar5[1].fields.OnInputLinkChanged;
          if (this_00 !=
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                      (this_00,0,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                      );
            this_03 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_02,(MethodInfo *)0x0);
            if (this_03 != (MVPointLightObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        ((Transform *)this_03,(value->fields)._.transform,(MethodInfo *)0x0);
              LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                        ((LockCursorManager3DMode *)this_02,
                         (Action_1_Boolean_ *)(value->fields)._._.id,(MethodInfo *)0x0);
              MVWorldObjectClient::MVWorldObjectClient_set_Group
                        ((MVWorldObjectClient *)this_02,value,(MethodInfo *)0x0);
              this_01 = (value->fields).children;
              if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          ((Dictionary_2_System_Int32_System_Object_ *)this_01,0,(Object *)this_02,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                          );
                return;
              }
            }
          }
        }
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


/* Void TraverseRecursiveTail(MVWorldObjectClient+CallBackDelegate) */

void Assembly-CSharp.dll::MVGroup::MVGroup_TraverseRecursiveTail
               (MVGroup *this,MVWorldObjectClient_CallBackDelegate *callBack,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (callBack != (MVWorldObjectClient_CallBackDelegate *)0x0) {
    MVWorldObjectClient+CallBackDelegate::MVWorldObjectClient_CallBackDelegate_Invoke
              (callBack,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
    this_00 = (this->fields).children;
    if ((this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Values
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            ),
       this_01 !=
       (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffbc,this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                );
      uStack_1 = 0;
      while( true ) {
        cVar4 = func_?();
        if (cVar4 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        piVar5 = (int *)func_?();
        if (piVar5 == (int *)0x0) break;
        (**(code **)(*piVar5 + 0x210))();
      }
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Int32 <Clone>m__0(MVWorldObjectClient, MVWorldObjectClient) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup__Clone_m__0
                  (MVWorldObjectClient *w1,MVWorldObjectClient *w2,MethodInfo *method)

{
  if (w1 != (MVWorldObjectClient *)0x0) {
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
    Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)w1,(MethodInfo *)0x0);
    if (w2 != (MVWorldObjectClient *)0x0) {
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
      Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)w2,(MethodInfo *)0x0);
      iVar1 = func_?(&stack0xfffffff8);
      return iVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* MVGroup(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGroup::MVGroup__ctor
               (MVGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields).children = this_00;
  if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVWorldObjectClient);
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4);
  piVar2 = &(this->fields)._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x82101;
  *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = uVar1;
  return;
}


/* MVGroup(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGroup::MVGroup__ctor_1
               (MVGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields).children = this_00;
  if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVWorldObjectClient);
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_1
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4);
  piVar2 = &(this->fields)._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x82101;
  *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = uVar1;
  return;
}


/* MVGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGroup::MVGroup__ctor_2
               (MVGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields).children = this_00;
  if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVWorldObjectClient);
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_2
            ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4);
  piVar2 = &(this->fields)._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x82101;
  *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = uVar1;
  return;
}


/* List`1[MVWorldObjectClient] get_Children() */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVGroup::MVGroup_get_Children(MVGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).children;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                        ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffb8,this_02,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                );
      uStack_1 = 0;
      while( true ) {
        cVar4 = func_?();
        if (cVar4 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_MVWorldObjectClient_ *)this_01;
        }
        item = func_?();
        if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,item,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                  );
      }
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar6 = (List_1_MVWorldObjectClient_ *)(*pcVar5)();
  return pLVar6;
}

