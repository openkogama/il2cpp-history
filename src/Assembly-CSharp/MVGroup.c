
/* Void AddChild(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVGroup::MVGroup_AddChild
               (MVGroup *this,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&StringLiteral_Group_);
    func_?(&StringLiteral_already_contains_child_);
    cRam_? = '\x01';
  }
  if (child != (MVWorldObjectClient *)0x0) {
    puVar1 = (undefined8 *)
             (*(child->klass->vtable).get_Position.methodPtr)
                       (auStack_2,child,(child->klass->vtable).get_Position.method);
    uStack_3 = *puVar1;
    uVar4 = *(undefined4 *)(puVar1 + 1);
    puVar5 = (undefined4 *)
             (*(child->klass->vtable).get_Rotation.methodPtr)
                       (&uStack_6,child,(child->klass->vtable).get_Rotation.method);
    uStack_6 = *puVar5;
    uStack_7 = puVar5[1];
    uStack_8 = puVar5[2];
    puStack_9 = (undefined *)puVar5[3];
    puVar1 = (undefined8 *)
             (*(child->klass->vtable).get_Scale.methodPtr)
                       (&stack0xffffffd4,child,(child->klass->vtable).get_Scale.method);
    this_00 = (child->fields).transform;
    uStack_10 = *puVar1;
    uStack_11 = *(undefined4 *)(puVar1 + 1);
    this_01 = (this->fields)._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_00,value,(MethodInfo *)0x0);
        (*(child->klass->vtable).set_Position.methodPtr)
                  (child,uStack_3,uVar4,(child->klass->vtable).set_Position.method);
        (*(child->klass->vtable).set_Rotation.methodPtr)
                  (child,uStack_6,uStack_7,uStack_8,puStack_9,
                   (child->klass->vtable).set_Rotation.method);
        (*(child->klass->vtable).set_Scale.methodPtr)
                  (child,uStack_10,uStack_11,(child->klass->vtable).set_Scale.method);
        this_02 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).children;
        if (this_02 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (this_02,(Object *)(child->fields)._.id,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                            );
          if (bVar12 != 0) {
            IStack_13.m_value = (this->fields)._._.id;
            pSVar14 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_13,(MethodInfo *)0x0);
            IStack_13.m_value = (child->fields)._.id;
            str3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_13,(MethodInfo *)0x0);
            pSVar14 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral_Group_,pSVar14,StringLiteral_already_contains_child_,
                                str3,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar14,(MethodInfo *)0x0);
            return;
          }
          this_03 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).children;
          if (this_03 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_03,(Object *)(child->fields)._.id,(Object *)child,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    func_?(&TypeInfo__System__Comparison<MVWorldObjectClient>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Sort_System__Comparison<MVWorldObjectClient>_
                   );
    func_?(&TypeInfo__MVGroup);
    func_?(&
                    MethodInfo__MVGroup____c___Clone_b__15_0_MVWorldObjectClient__MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVGroup____c);
    cRam_? = '\x01';
  }
  OStack_4.klass = (Object__Class *)0x0;
  OStack_4.monitor = (MonitorData *)0x0;
  pMVar5 = MVWorldObjectClient::MVWorldObjectClient_Clone
                     ((MVWorldObjectClient *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,
                      worldObjects,prototypes,(MethodInfo *)0x0);
  if (pMVar5 == (MVWorldObjectClient *)0x0) {
    pMVar5 = (MVWorldObjectClient *)0x0;
  }
  else if (((pMVar5->klass->_1).typeHierarchyDepth < (TypeInfo__MVGroup->_1).typeHierarchyDepth) ||
          ((MVGroup__Class *)
           (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] !=
           TypeInfo__MVGroup)) {
    OStack_4.monitor = (MonitorData *)&UNK_?;
    func_?();
    goto code_?;
  }
  OStack_4.monitor = (MonitorData *)&UNK_?;
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            MVGroup_get_Children(this,(MethodInfo *)0x0);
  if ((TypeInfo__MVGroup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = TypeInfo__MVGroup____c->static_fields->__9__15_0;
  if (this_01 == (Comparison_1_MVWorldObjectClient_ *)0x0) {
    if ((TypeInfo__MVGroup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__MVGroup____c->static_fields->__9;
    this_01 = (Comparison_1_MVWorldObjectClient_ *)func_?();
    if (this_01 == (Comparison_1_MVWorldObjectClient_ *)0x0) goto code_?;
    OStack_4.monitor = (MonitorData *)&UNK_?;
    mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
              ((Func_3_Object_Object_Int32_ *)this_01,(Object *)object,
               MethodInfo__MVGroup____c___Clone_b__15_0_MVWorldObjectClient__MVWorldObjectClient_,
               (MethodInfo *)0x0);
    TypeInfo__MVGroup____c->static_fields->__9__15_0 = this_01;
    func_?();
  }
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort_1
              (this_00,(Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_01,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Sort_System__Comparison<MVWorldObjectClient>_
              );
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    OStack_4.klass = (Object__Class *)pLVar6->_list;
    uStack_1 = 1;
    while( true ) {
      OStack_4.monitor = (MonitorData *)&UNK_?;
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&OStack_4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar8 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (&OStack_4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_9);
        *unaff_FS_OFFSET = uStack_3;
        return pMVar5;
      }
      if ((pMVar5 == (MVWorldObjectClient *)0x0) || (pMVar7 == (MethodInfo *)0x0)) break;
      OStack_4.monitor = (MonitorData *)(pMVar5->fields)._.id;
      OStack_4.klass = (Object__Class *)ownerActorNumber;
      (**(code **)(pMVar7->methodPointer + 0x23c))();
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar10)();
  return pMVar5;
}


/* Bounds ComputeBoundsForWOs(List`1[MVWorldObjectClient], BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGroup::MVGroup_ComputeBoundsForWOs
                   (Bounds *__return_storage_ptr__,List_1_MVWorldObjectClient_ *woList,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (woList != (List_1_MVWorldObjectClient_ *)0x0) {
    if ((woList->fields)._size != 0) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)woList
                         ,0,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                        );
      pBVar2 = MVGroup_ComputeLocalChildBounds
                          ((Bounds *)&stack0xffffffc4,(MVWorldObjectClient *)RVar1,boundsContext,
                           (MethodInfo *)0x0);
      fVar3 = (pBVar2->m_Center).x;
      fVar4 = (pBVar2->m_Center).y;
      fVar5 = (pBVar2->m_Center).z;
      fVar6 = (pBVar2->m_Extents).x;
      uVar7._0_4_ = (pBVar2->m_Extents).y;
      uStack_8 = (pBVar2->m_Extents).z;
      for (index = 1; index < (woList->fields)._size; index = index + 1) {
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           woList,index,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        pBVar2 = MVGroup_ComputeLocalChildBounds
                            ((Bounds *)&stack0xffffffc4,(MVWorldObjectClient *)RVar1,boundsContext,
                             (MethodInfo *)0x0);
        fVar3 = (pBVar2->m_Center).z;
        fVar4 = (pBVar2->m_Extents).x;
        uVar7 = uVar7 & 0xffffffff00000000;
        fVar5 = (pBVar2->m_Extents).y;
        fVar6 = (pBVar2->m_Extents).z;
        uVar9 = (pBVar2->m_Center).x;
        uVar10 = (pBVar2->m_Center).y;
        uVar11 = (pBVar2->m_Center).z;
        bounds.m_Center.z = (float)uVar11;
        bounds.m_Center.y = (float)uVar10;
        bounds.m_Center.x = (float)uVar9;
        uVar12 = (pBVar2->m_Extents).x;
        uVar13 = (pBVar2->m_Extents).y;
        bounds.m_Extents.y = (float)uVar13;
        bounds.m_Extents.x = (float)uVar12;
        bounds.m_Extents.z = fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate_1
                  ((Bounds *)&stack0xffffffdc,bounds,(MethodInfo *)0x0);
      }
      (__return_storage_ptr__->m_Center).x = fVar3;
      (__return_storage_ptr__->m_Center).y = fVar4;
      (__return_storage_ptr__->m_Center).z = fVar5;
      (__return_storage_ptr__->m_Extents).x = fVar6;
      uStack_8 = (undefined4)(uVar7 >> 0x20);
      (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uVar7;
      (__return_storage_ptr__->m_Extents).z = (float)uStack_8;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    center = TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
              ((Bounds *)&stack0xffffffc4,center,
               TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
    (__return_storage_ptr__->m_Center).x = fVar5;
    (__return_storage_ptr__->m_Center).y = fVar6;
    (__return_storage_ptr__->m_Center).z = fVar3;
    (__return_storage_ptr__->m_Extents).x = fVar4;
    (__return_storage_ptr__->m_Extents).y = fVar14;
    (__return_storage_ptr__->m_Extents).z = fVar15;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pBVar2 = (Bounds *)(*pcVar16)();
  return pBVar2;
}


/* Bounds ComputeLocalChildBounds(MVWorldObjectClient, BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGroup::MVGroup_ComputeLocalChildBounds
                   (Bounds *__return_storage_ptr__,MVWorldObjectClient *wo,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (this = (wo->fields).transform, this != (Transform *)0x0)) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_2,this,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    fVar4 = pVVar1->z;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       (&QStack_6,this,(MethodInfo *)0x0);
    fStack_7 = pQVar5->x;
    fStack_8 = pQVar5->y;
    fStack_9 = pQVar5->z;
    fStack_10 = pQVar5->w;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_2,this,(MethodInfo *)0x0);
    pos.z = fVar4;
    pos.x = (float)uStack_3;
    pos.y = uStack_3._4_4_;
    q.y = fStack_8;
    q.x = fStack_7;
    q.z = fStack_9;
    q.w = fStack_10;
    pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff64,pos,q,*pVVar1,(MethodInfo *)0x0);
    fStack_7 = pMVar11->m00;
    fStack_8 = pMVar11->m10;
    fStack_9 = pMVar11->m20;
    fStack_10 = pMVar11->m30;
    fStack_12 = pMVar11->m01;
    VStack_2.x = pMVar11->m11;
    VStack_2.y = pMVar11->m21;
    VStack_2.z = pMVar11->m31;
    fStack_13 = pMVar11->m02;
    fStack_14 = pMVar11->m12;
    uStack_3._0_4_ = pMVar11->m22;
    uStack_3._4_4_ = pMVar11->m32;
    QStack_6.x = pMVar11->m03;
    QStack_6.y = pMVar11->m13;
    QStack_6.z = pMVar11->m23;
    QStack_6.w = pMVar11->m33;
    pBVar15 = (Bounds *)(*(wo->klass->vtable).GetLocalBounds.methodPtr)();
    m.m10 = fStack_8;
    m.m00 = fStack_7;
    m.m20 = fStack_9;
    m.m30 = fStack_10;
    m.m01 = fStack_12;
    m.m11 = VStack_2.x;
    m.m21 = VStack_2.y;
    m.m31 = VStack_2.z;
    m.m02 = fStack_13;
    m.m12 = fStack_14;
    m.m22 = (float)uStack_3;
    m.m32 = uStack_3._4_4_;
    m.m03 = QStack_6.x;
    m.m13 = QStack_6.y;
    m.m23 = QStack_6.z;
    m.m33 = QStack_6.w;
    pBVar15 = MathFunctions::MathFunctions_FastAABBTransform
                       ((Bounds *)&stack0xffffffa4,m,*pBVar15,(MethodInfo *)0x0);
    fVar4 = (pBVar15->m_Center).y;
    fVar16 = (pBVar15->m_Center).z;
    fVar17 = (pBVar15->m_Extents).x;
    (__return_storage_ptr__->m_Center).x = (pBVar15->m_Center).x;
    (__return_storage_ptr__->m_Center).y = fVar4;
    (__return_storage_ptr__->m_Center).z = fVar16;
    (__return_storage_ptr__->m_Extents).x = fVar17;
    fVar4 = (pBVar15->m_Extents).z;
    (__return_storage_ptr__->m_Extents).y = (pBVar15->m_Extents).y;
    (__return_storage_ptr__->m_Extents).z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pBVar15 = (Bounds *)(*pcVar18)();
  return pBVar15;
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffd8,this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    uStack_1 = 1;
    method_00 = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      this_01 = (List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8;
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (this_01,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (this_01 == (List_1_T_Enumerator_System_Object_ *)0x0) break;
      (*(code *)this_01->_list[0x1f].fields._size)();
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectClient GetChild(Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVGroup::MVGroup_GetChild(MVGroup *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObjectClient *)0x0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).children;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryGetValue
              (this_00,(Object *)woID,(Object **)&pMStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    return pMStack_1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar3;
}


/* Int32 GetGroupAbove(Int32, Int32, InteractionFlags) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup_GetGroupAbove
                  (int32_t currentParent,int32_t leaf,InteractionFlags__Enum returnParentIfHasFlags,
                  MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    while (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar1,leaf,(MethodInfo *)0x0), pMVar2 != (MVWorldObject *)0x0) {
      id = (pMVar2->fields).groupId;
      if (id == -1) {
        return -1;
      }
      if (returnParentIfHasFlags != InteractionFlags__Enum_CanChangeScale ||
          method != (MethodInfo *)0x0) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
           (this = (MVWorldObjectClient *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar1,id,(MethodInfo *)0x0), this == (MVWorldObjectClient *)0x0))
        break;
        returnParentIfHasFlags = InteractionFlags__Enum_CanChangeScale;
        currentParent = 0;
        bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this,InteractionFlags__Enum_CanChangeScale,method);
        if (bVar3 != 0) {
          return id;
        }
      }
      if (currentParent == id) {
        return leaf;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      leaf = id;
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) break;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* HashSet`1[System.Int32] GetHierarchyWorldObjectIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVGroup::MVGroup_GetHierarchyWorldObjectIDs(MVGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVGroup);
    cRam_? = '\x01';
  }
  this_00 = (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (MethodInfo *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              ((HashSet_1_UnityEngine_Vector3_ *)this_00,
               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    method_01 = this_00;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)this_00,(Object *)(this->fields)._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVGroup_get_Children(this,(MethodInfo *)0x0);
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&pLStack_5,this_01,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                         );
      method_00 = (MethodInfo *)pLVar4->_index;
      RVar6 = pLVar4->_current;
      uStack_1 = 1;
      while( true ) {
        pLStack_5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     &UNK_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                          );
        if (bVar7 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                     ,method_01);
          *unaff_FS_OFFSET = uStack_3;
          return (HashSet_1_System_Int32_ *)this_00;
        }
        if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
        if ((*(byte *)(*(int *)RVar6 + 0xb4) < (TypeInfo__MVGroup->_1).typeHierarchyDepth) ||
           (*(MVGroup__Class **)
             (*(int *)(*(int *)RVar6 + 100) + -4 +
             (uint)(TypeInfo__MVGroup->_1).typeHierarchyDepth * 4) != TypeInfo__MVGroup)) {
          if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Add
                    ((HashSet_1_System_Object_ *)this_00,*(Object **)((int)RVar6 + 8),
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        }
        else {
          if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
          iVar8 = func_?();
          if (iVar8 == 0) break;
          this_02 = (MVGroup *)func_?();
          pHVar9 = MVGroup_GetHierarchyWorldObjectIDs(this_02,method_00);
          method_00 = this_00;
          RVar6 = (RegexCharClass_SingleRange)
                  MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
          ;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__UnionWith
                    ((HashSet_1_System_Int32_ *)this_00,(IEnumerable_1_System_Int32_ *)pHVar9,
                     MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
                    );
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pHVar9 = (HashSet_1_System_Int32_ *)(*pcVar10)();
  return pHVar9;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGroup::MVGroup_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVGroup *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  BStack_1.m_Extents.y = 0.0;
  BStack_1.m_Extents.z = 0.0;
  BStack_1.m_Center.x = 0.0;
  BStack_1.m_Center.y = 0.0;
  BStack_1.m_Center.z = 0.0;
  BStack_1.m_Extents.x = 0.0;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size != 0) {
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,0,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                        );
      pBVar3 = MVGroup_ComputeLocalChildBounds
                         ((Bounds *)&stack0xffffffac,(MVWorldObjectClient *)RVar2,boundsContext,
                          (MethodInfo *)0x0);
      BStack_1.m_Center.x = (pBVar3->m_Center).x;
      BStack_1.m_Center.y = (pBVar3->m_Center).y;
      BStack_1.m_Center.z = (pBVar3->m_Center).z;
      BStack_1.m_Extents.x = (pBVar3->m_Extents).x;
      BStack_1.m_Extents.y = (pBVar3->m_Extents).y;
      BStack_1.m_Extents.z = (pBVar3->m_Extents).z;
      for (index = 1; index < (this_00->fields)._size; index = index + 1) {
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        pBVar3 = MVGroup_ComputeLocalChildBounds
                           ((Bounds *)&stack0xffffff94,(MVWorldObjectClient *)RVar2,boundsContext,
                            (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate_1
                  (&BStack_1,*pBVar3,(MethodInfo *)0x0);
      }
      (__return_storage_ptr__->m_Center).x = BStack_1.m_Center.x;
      (__return_storage_ptr__->m_Center).y = BStack_1.m_Center.y;
      (__return_storage_ptr__->m_Center).z = BStack_1.m_Center.z;
      (__return_storage_ptr__->m_Extents).x = BStack_1.m_Extents.x;
      (__return_storage_ptr__->m_Extents).y = BStack_1.m_Extents.y;
      (__return_storage_ptr__->m_Extents).z = BStack_1.m_Extents.z;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar4->zeroVector).x;
    uStack_5._4_4_ = (pVVar4->zeroVector).y;
    fVar6 = (pVVar4->zeroVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    fVar7 = 0.0;
    center.z = fVar6;
    center.x = (float)(undefined4)uStack_5;
    center.y = (float)uStack_5._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
              ((Bounds *)&stack0xffffffc4,center,
               TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
    (__return_storage_ptr__->m_Center).x = fVar7;
    (__return_storage_ptr__->m_Center).y = 0.0;
    (__return_storage_ptr__->m_Center).z = 0.0;
    (__return_storage_ptr__->m_Extents).x = 0.0;
    (__return_storage_ptr__->m_Extents).y = 0.0;
    (__return_storage_ptr__->m_Extents).z = 0.0;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pBVar3 = (Bounds *)(*pcVar8)();
  return pBVar3;
}


/* Int32 GetParentBelow(Int32, Int32) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup_GetParentBelow
                  (int32_t parentId,int32_t childId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_childId_is_not_valid__Id_is__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,childId,(MethodInfo *)0x0);
    parent = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,parentId,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      childId = (int32_t)&childId;
      method = (MethodInfo *)0x0;
      childId = (int32_t)mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)childId,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      message = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_childId_is_not_valid__Id_is__,(String *)childId,
                           (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)message,(MethodInfo *)0x0);
    }
    else if ((pMVar2->fields).groupId != -1) {
      if (parent != (MVWorldObjectClient *)0x0) {
        if ((parent->fields)._.id == (pMVar2->fields).groupId) {
          return (pMVar2->fields).id;
        }
        method = (MethodInfo *)0x0;
        childId = (int32_t)&UNK_?;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
          method = (MethodInfo *)(pMVar2->fields).groupId;
          childId = (int32_t)pMVar1;
          method = (MethodInfo *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar1,(int32_t)method,(MethodInfo *)0x0);
          childId = (int32_t)parent;
          iVar3 = MVGroup_GetParentBelow_1(parent,(MVWorldObjectClient *)method,(MethodInfo *)0x0);
          return iVar3;
        }
      }
      goto code_?;
    }
    return -1;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Int32 GetParentBelow(MVWorldObjectClient, MVWorldObjectClient) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup_GetParentBelow_1
                  (MVWorldObjectClient *parent,MVWorldObjectClient *child,MethodInfo *method)

{
  if ((child == (MVWorldObjectClient *)0x0) || ((child->fields)._.groupId == -1)) {
    return -1;
  }
  if (parent != (MVWorldObjectClient *)0x0) {
    if ((parent->fields)._.id == (child->fields)._.groupId) {
      return (child->fields)._.id;
    }
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this != (MVWorldObjectClientManager *)0x0) {
      child_00 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this,(child->fields)._.groupId,(MethodInfo *)0x0);
      iVar1 = MVGroup_GetParentBelow_1(parent,child_00,(MethodInfo *)0x0);
      return iVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGroup::MVGroup_Initialize(MVGroup *this,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).children;
  if (this_00 ==
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
  goto code_?;
  this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                      );
  if (this_01 ==
      (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
       *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::Text
  ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
  Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
              *)&stack0xffffffdc,this_01,
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
            );
  while( true ) {
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
    ;
    bVar3 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::Object,System
            ::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                        *)&stack0xffffffc8,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                      );
    if (bVar3 == 0) break;
    if (pMVar2 == (MethodInfo *)0x0) goto code_?;
    (**(code **)(pMVar2->methodPointer + 0x24c))();
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&stack0xffffffc8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
             ,in_stack_4);
  if ((this->fields)._._.groupId == -1) goto code_?;
  iVar5 = (this->fields)._._.groupId;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                     (this_02,(MethodInfo *)0x0);
  if (pMVar6 == (MVGroup *)0x0) goto code_?;
  if (iVar5 == (pMVar6->fields)._._.id) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pMVar6 = (this->fields)._.group;
  if (pMVar6 == (MVGroup *)0x0) goto code_?;
  this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
  if (this_03 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_03,(Object *)this,
             MethodInfo__MVGroup__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_,
             (MethodInfo *)0x0);
  uVar1 = 0;
  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)this,(Delegate *)this_03,(MethodInfo *)0x0);
  if (pDVar7 == (Delegate *)0x0) {
    (pMVar6->fields)._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
    func_?();
code_?:
    *unaff_FS_OFFSET = uVar1;
    return;
  }
  pUVar8 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
  if (pUVar8 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    (pMVar6->fields)._.PositionChanged = pUVar8;
    iVar5 = func_?();
    if (iVar5 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).children;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::
      Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)&stack0xffffffd8,this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                );
      method_00 = (MethodInfo *)0x0;
      uStack_1 = 1;
      while( true ) {
        this_02 = (MVWorldObjectClient *)
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
        ;
        bVar4 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                            *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar4 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (this_02 == (MVWorldObjectClient *)0x0) break;
        MVWorldObjectClient::MVWorldObjectClient_InventoryInitialize(this_02,(MethodInfo *)0x0);
      }
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
  while( true ) {
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this == (MVWorldObjectClientManager *)0x0) break;
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this,leafId,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObject *)0x0) break;
    leafId = (pMVar1->fields).groupId;
    if (leafId == -1) {
      return 0;
    }
    if (leafId == parentId) {
      return 1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVGroup::MVGroup_OnEnterObject
               (MVGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EditorEvent);
    func_?();
    func_?(&StringLiteral_PtrPtrPtr_Entering_group__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    pMVar2 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVCameraBase *)0x0) {
      (*(pMVar2->klass->vtable).FocusOnObject.methodPtr)(pMVar2,this,0x40000000,0,0,0,0);
      pSVar3 = (String *)
               (*(this->klass->vtable).ToString.methodPtr)
                         (this,(this->klass->vtable).ToString.method);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_PtrPtrPtr_Entering_group__,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      if (e != (EditorStateMachine *)0x0) {
        EditorStateMachine::EditorStateMachine_EnterGroup(e,this,(MethodInfo *)0x0);
        pMVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
        if (pMVar4 != (MVGroup *)0x0) {
          t = (pMVar4->fields)._.transform;
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
          pMVar1 = (e->fields).weCamera;
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
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVGroup::MVGroup_OnPositionChanged
               (MVGroup *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  (*(this->klass->vtable).PositionChangedNotify.methodPtr)
            (this,(this->klass->vtable).PositionChangedNotify.method);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).children;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::
      Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)&stack0xffffffd8,this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                );
      method_00 = (MethodInfo *)0x0;
      uStack_1 = 1;
      while( true ) {
        pMVar4 = 
        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
        ;
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                            *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar5 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (pMVar4 == (MethodInfo *)0x0) break;
        (**(code **)(pMVar4->methodPointer + 0x25c))();
      }
    }
  }
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVWorldObjectClient>__get_Value__
                   );
    func_?(&StringLiteral_root_group_cannot_notify_as_this);
    cRam_? = '\x01';
  }
  iVar4 = (this->fields)._._.id;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                       (this_01,(MethodInfo *)0x0);
    if (pMVar5 != (MVGroup *)0x0) {
      if (iVar4 == (pMVar5->fields)._._.id) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_root_group_cannot_notify_as_this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      MVWorldObjectClient::MVWorldObjectClient_PositionChangedNotify
                ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).children;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xffffffb0,this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__GetEnumerator__
                           );
        method_00 = (MethodInfo *)pDVar6->_version;
        uVar7 = *(undefined8 *)&(pDVar6->_current).value;
        uStack_1 = 1;
        while( true ) {
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                             &stack0xffffffc8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                            );
          if (bVar8 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffc8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                       ,method_00);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pOStack_9 = (Object *)uVar7;
          if (pOStack_9 == (Object *)0x0) break;
          (*(code *)pOStack_9->klass[2]._0.namespaze)();
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RemoveChild(Int32) */

void Assembly-CSharp.dll::MVGroup::MVGroup_RemoveChild
               (MVGroup *this,int32_t childId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).children;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,childId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Select() */

void Assembly-CSharp.dll::MVGroup::MVGroup_Select(MVGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffd8,this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    uStack_1 = 1;
    method_00 = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      this_01 = (List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8;
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (this_01,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (this_01 == (List_1_T_Enumerator_System_Object_ *)0x0) break;
      (*(code *)this_01->_list[0x1e].fields._syncRoot)();
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVGroup::MVGroup_Select_1(MVGroup *this,Color color,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffd8,this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    uStack_1 = 1;
    method_00 = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      this_01 = (List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8;
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (this_01,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (this_01 == (List_1_T_Enumerator_System_Object_ *)0x0) break;
      (*(code *)this_01->_list[0x1f].monitor)();
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupTranformation() */

void Assembly-CSharp.dll::MVGroup::MVGroup_SetupTranformation(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVGroup__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.group;
  if (pMVar1 != (MVGroup *)0x0) {
    pUVar2 = (pMVar1->fields)._.PositionChanged;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVGroup__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields)._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        func_?();
        return;
      }
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar2 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        (pMVar1->fields)._.PositionChanged = pUVar2;
        iVar4 = func_?();
        if (iVar4 != 0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVGroup);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    value = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar1,id,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((value != (MVWorldObject *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,(value->fields).groupId,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObject *)0x0) {
        if (((pMVar2->klass->_1).typeHierarchyDepth < (TypeInfo__MVGroup->_1).typeHierarchyDepth) ||
           ((MVGroup__Class *)
            (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] !=
            TypeInfo__MVGroup)) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = pMVar2[2].klass;
        if (this_00 != (MVWorldObject__Class *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                    );
          this_01 = (Transform *)value[1].fields.ownerActorNr;
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_01,(Transform *)(this_00->_1).static_fields_size,(MethodInfo *)0x0);
            (value->fields).groupId =
                 (int32_t)((Dictionary_2_System_Int32_System_Object___Fields *)&(this_00->_0).name)
                          ->_buckets;
            value[1].fields.position.y = (float)this_00;
            func_?();
            this_02 = (this_00->vtable).ToString.method;
            if (this_02 != (MethodInfo *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)id,
                         (Object *)value,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  if (callBack != (MVWorldObjectClient_CallBackDelegate *)0x0) {
    (*(callBack->fields)._._.invoke_impl)
              ((callBack->fields)._._.method_code,this,(callBack->fields)._._.method);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).children;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        pDVar7 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           (&DStack_8,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
        DStack_6._index = pDVar7->_index;
        DStack_6._version = pDVar7->_version;
        DStack_6._currentValue = pDVar7->_currentValue;
        DStack_8._version = 0;
        uStack_1 = 1;
        DStack_8._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar9 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                            );
          if (bVar9 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (DStack_6._currentValue == (Object *)0x0) break;
          (*(code *)(DStack_6._currentValue)->klass[2]._1.initializationExceptionGCHandle)
                    (DStack_6._currentValue,callBack,
                     (DStack_6._currentValue)->klass[2]._1.cctor_started);
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVGroup(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGroup::MVGroup__ctor
               (MVGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
              );
    (this->fields).children = this_00;
    func_?(&(this->fields).children,this_00);
    if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
              );
    (this->fields).children = this_00;
    func_?(&(this->fields).children,this_00);
    if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGroup::MVGroup__ctor_2
               (MVGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
              );
    (this->fields).children = this_00;
    func_?(&(this->fields).children,this_00);
    if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pLVar4 = (List_1_MVWorldObjectClient_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  if (pLVar4 != (List_1_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).children;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System
        ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)&stack0xffffffd4,this_01,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                  );
        method_00 = (MethodInfo *)0x0;
        uStack_1 = 1;
        while( true ) {
          item = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
          ;
          bVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                              *)&stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                            );
          if (bVar5 == 0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar4,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return pLVar4;
      }
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar4 = (List_1_MVWorldObjectClient_ *)(*pcVar6)();
  return pLVar4;
}

