
/* Quaternion Align(Transform, Vector3, TransformAxis) */

Quaternion *
Assembly-CSharp.dll::RTG::TransformEx::TransformEx_Align
          (Quaternion *__return_storage_ptr__,Transform *transform,Vector3 normAlignVector,
          TransformAxis__Enum alignmentAxis,MethodInfo *method)

{
  if (transform == (Transform *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      ((Vector3 *)&stack0xffffffc8,transform,(MethodInfo *)0x0);
  fStack_4 = pVVar3->x;
  fStack_5 = pVVar3->y;
  fStack_6 = pVVar3->z;
  if (alignmentAxis != TransformAxis__Enum_PositiveY) {
    if (alignmentAxis == TransformAxis__Enum_PositiveX) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
      fStack_4 = pVVar3->x;
      fStack_5 = pVVar3->y;
code_?:
      fStack_6 = pVVar3->z;
    }
    else if (alignmentAxis == TransformAxis__Enum_NegativeX) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
      uVar7 = pVVar3->x;
      uVar8 = pVVar3->y;
      fStack_4 = (float)(uVar7 ^ 
                         __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fStack_5 = (float)(uVar8 ^ 
                         __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fStack_6 = (float)((uint)pVVar3->z ^
                         __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    }
    else if (alignmentAxis == TransformAxis__Enum_NegativeY) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
      uVar9 = pVVar3->x;
      uVar10 = pVVar3->y;
      fStack_4 = (float)(uVar9 ^ 
                         __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fStack_5 = (float)(uVar10 ^ 
                         __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fStack_6 = (float)((uint)pVVar3->z ^
                         __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    }
    else {
      if (alignmentAxis == TransformAxis__Enum_PositiveZ) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
        fStack_4 = pVVar3->x;
        fStack_5 = pVVar3->y;
        goto code_?;
      }
      if (alignmentAxis == TransformAxis__Enum_NegativeZ) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
        uVar11 = pVVar3->x;
        uVar12 = pVVar3->y;
        fStack_4 = (float)(uVar11 ^ 
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field)
        ;
        fStack_5 = (float)(uVar12 ^ 
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field)
        ;
        fStack_6 = (float)((uint)pVVar3->z ^
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field)
        ;
      }
    }
  }
  fVar13 = normAlignVector.y * fStack_5 + normAlignVector.x * fStack_4 +
           normAlignVector.z * fStack_6;
  if (_UNK_? - fVar13 < _UNK_?) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar14 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar13 = (pQVar14->identityQuaternion).y;
    fVar15 = (pQVar14->identityQuaternion).z;
    fVar16 = (pQVar14->identityQuaternion).w;
    __return_storage_ptr__->x = (pQVar14->identityQuaternion).x;
    __return_storage_ptr__->y = fVar13;
    __return_storage_ptr__->z = fVar15;
    __return_storage_ptr__->w = fVar16;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar18._0_4_ = (pVVar17->zeroVector).x;
  uVar18._4_4_ = (pVVar17->zeroVector).y;
  fVar15 = (pVVar17->zeroVector).z;
  if (_UNK_? <= fVar13 + _UNK_?) {
    value.y = normAlignVector.x * fStack_6 - normAlignVector.z * fStack_4;
    value.x = normAlignVector.z * fStack_5 - normAlignVector.y * fStack_6;
    value.z = normAlignVector.y * fStack_4 - normAlignVector.x * fStack_5;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffb8,value,(MethodInfo *)0x0);
    uVar18._0_4_ = pVVar3->x;
    uVar18._4_4_ = pVVar3->y;
    fVar15 = pVVar3->z;
    uStack_19 = (undefined4)uVar18;
    uVar20 = uVar18._4_4_;
    goto code_?;
  }
  if (alignmentAxis == TransformAxis__Enum_PositiveX) {
code_?:
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
    uVar18._0_4_ = pVVar3->x;
    uVar18._4_4_ = pVVar3->y;
    fVar15 = pVVar3->z;
    uStack_19 = (undefined4)uVar18;
    uVar20 = uVar18._4_4_;
  }
  else {
    if (alignmentAxis == TransformAxis__Enum_NegativeX) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
    }
    else {
      if (alignmentAxis == TransformAxis__Enum_PositiveY) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
        uVar18._0_4_ = pVVar3->x;
        uVar18._4_4_ = pVVar3->y;
        fVar15 = pVVar3->z;
        uStack_19 = (undefined4)uVar18;
        uVar20 = uVar18._4_4_;
        goto code_?;
      }
      if (alignmentAxis != TransformAxis__Enum_NegativeY) {
        if (alignmentAxis != TransformAxis__Enum_PositiveZ) {
          uStack_19 = (undefined4)uVar18;
          uVar20 = uVar18._4_4_;
          if (alignmentAxis == TransformAxis__Enum_NegativeZ) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
            uVar21 = pVVar3->x;
            uVar22 = pVVar3->y;
            uStack_19 = uVar21 ^ 
                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
            fVar15 = (float)((uint)pVVar3->z ^
                            __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                            );
            uVar18 = CONCAT44(uVar22 ^ 
                              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                              ,uStack_19);
            uVar20 = uVar22 ^ 
                     __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
          }
          goto code_?;
        }
        goto code_?;
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffffb8,transform,(MethodInfo *)0x0);
    }
    uVar23 = pVVar3->x;
    uVar24 = pVVar3->y;
    uStack_19 = uVar23 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
    fVar15 = (float)((uint)pVVar3->z ^
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    uVar18 = CONCAT44(uVar24 ^ 
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field,
                      uStack_19);
    uVar20 = uVar24 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
  }
code_?:
  from.y = 0.0;
  from.x = fVar15;
  from.z = fStack_6;
  axis.z = fVar15;
  axis.x = (float)(int)uVar18;
  axis.y = (float)(int)((ulonglong)uVar18 >> 0x20);
  fVar13 = Vector3Ex::Vector3Ex_SignedAngle(from,normAlignVector,axis,(MethodInfo *)0x0);
  axis_00.y = (float)uVar20;
  axis_00.x = (float)uStack_19;
  axis_00.z = fVar15;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
            (transform,axis_00,fVar13,Space__Enum_World,(MethodInfo *)0x0);
  axis_01.y = (float)transform;
  axis_01.x = (float)&UNK_?;
  axis_01.z = fVar15;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffff90,fVar13,axis_01,(MethodInfo *)0x0);
  fVar13 = pQVar2->y;
  fVar15 = pQVar2->z;
  fVar16 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar13;
  __return_storage_ptr__->z = fVar15;
  __return_storage_ptr__->w = fVar16;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Transform] FilterParentsOnly(IEnumerable`1[UnityEngine.Transform]) */

List_1_UnityEngine_Transform_ *
Assembly-CSharp.dll::RTG::TransformEx::TransformEx_FilterParentsOnly
          (IEnumerable_1_UnityEngine_Transform_ *transforms,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Transform>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Transform>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  if (transforms == (IEnumerable_1_UnityEngine_Transform_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    *unaff_FS_OFFSET = uStack_3;
    return (List_1_UnityEngine_Transform_ *)this;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,10,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List_int_);
  iVar4 = func_?(0,
                          TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Transform>
                          ,transforms);
  uStack_1 = 0;
code_?:
  uStack_1._0_1_ = 1;
  while (iVar4 != 0) {
    cVar5 = func_?();
    if (cVar5 == '\0') {
      uStack_1 = 0xffffffff;
      if (iVar4 != 0) {
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_UnityEngine_Transform_ *)this;
      }
      *unaff_FS_OFFSET = uStack_3;
      return (List_1_UnityEngine_Transform_ *)this;
    }
    if (iVar4 == 0) break;
    this_00 = (Transform *)func_?();
    iVar6 = func_?();
    uStack_1._0_1_ = 3;
    while( true ) {
      if (iVar6 == 0) goto code_?;
      cVar5 = func_?();
      if (cVar5 == '\0') break;
      if (iVar6 == 0) goto code_?;
      this_01 = (Component *)func_?();
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_01,(Object_1 *)this_00,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        if (this_01 == (Component *)0x0) goto code_?;
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (this_01,(MethodInfo *)0x0);
        if (this_00 == (Transform *)0x0) goto code_?;
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_IsChildOf
                          (this_00,parent,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
          func_?();
          goto code_?;
        }
      }
    }
    uStack_1._0_1_ = 1;
    func_?();
    uStack_1._0_1_ = 1;
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) break;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this,(Object *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
              );
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pLVar9 = (List_1_UnityEngine_Transform_ *)(*pcVar8)();
  return pLVar9;
}


/* List`1[UnityEngine.Transform]
   GetGameObjectTransformCollection(IEnumerable`1[UnityEngine.GameObject]) */

List_1_UnityEngine_Transform_ *
Assembly-CSharp.dll::RTG::TransformEx::TransformEx_GetGameObjectTransformCollection
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,10,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List_int_);
  if (gameObjects != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    piVar4 = (int *)func_?();
    uStack_1 = 1;
    while( true ) {
      if (piVar4 == (int *)0x0) break;
      cVar5 = func_?();
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar4 != (int *)0x0) {
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Transform_ *)this;
        }
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_UnityEngine_Transform_ *)this;
      }
      if (piVar4 == (int *)0x0) break;
      uVar6 = 0;
      uVar7 = *(ushort *)(*piVar4 + 0xb6);
      if (uVar7 != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(int *)(*piVar4 + 0x58) + (uint)uVar6 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar8 = (undefined4 *)
                     (*piVar4 +
                     (*(int *)(*(int *)(*piVar4 + 0x58) + 4 + (uint)uVar6 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      puVar8 = (undefined4 *)func_?();
code_?:
      this_00 = (GameObject *)(*(code *)*puVar8)();
      if (this_00 == (GameObject *)0x0) break;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                );
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Transform_ *)(*pcVar9)();
  return pLVar10;
}


/* Vector3 GetLocalAxis(Transform, AxisDescriptor) */

Vector3 * Assembly-CSharp.dll::RTG::TransformEx::TransformEx_GetLocalAxis
                    (Vector3 *__return_storage_ptr__,Transform *transform,AxisDescriptor *axisDesc,
                    MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (transform == (Transform *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                     ((Vector3 *)&stack0xfffffff0,transform,(MethodInfo *)0x0);
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  if (axisDesc == (AxisDescriptor *)0x0) goto code_?;
  if ((axisDesc->fields)._index == 1) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       ((Vector3 *)&stack0xfffffff0,transform,(MethodInfo *)0x0);
  }
  else {
    if ((axisDesc->fields)._index != 2) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       ((Vector3 *)&stack0xfffffff0,transform,(MethodInfo *)0x0);
  }
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
code_?:
  if ((axisDesc->fields)._sign == 1) {
    uVar5 = __return_storage_ptr__->x;
    uVar6 = __return_storage_ptr__->y;
    uVar7 = uVar6 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
    fVar4 = (float)((uint)__return_storage_ptr__->z ^
                   __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    __return_storage_ptr__->x =
         (float)(uVar5 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    __return_storage_ptr__->y = (float)uVar7;
    __return_storage_ptr__->z = fVar4;
  }
  return __return_storage_ptr__;
}


/* Plane GetLocalPlane(Transform, PlaneDescriptor) */

Plane * Assembly-CSharp.dll::RTG::TransformEx::TransformEx_GetLocalPlane
                  (Plane *__return_storage_ptr__,Transform *transform,PlaneDescriptor planeDesc,
                  MethodInfo *method)

{
  pVVar1 = TransformEx_GetLocalAxis
                      ((Vector3 *)&fStack_2,transform,planeDesc._firstAxisDescriptor,
                       (MethodInfo *)0x0);
  fVar3 = pVVar1->x;
  fVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = TransformEx_GetLocalAxis
                      ((Vector3 *)&puStack_6,transform,planeDesc._secondAxisDescriptor,
                       (MethodInfo *)0x0);
  uVar7 = pVVar1->x;
  uVar8 = pVVar1->y;
  value_00.y = (float)uVar7 * fVar5 - fVar3 * pVVar1->z;
  value_00.x = pVVar1->z * fVar4 - (float)uVar8 * fVar5;
  value_00.z = fVar3 * (float)uVar8 - (float)uVar7 * fVar4;
  fStack_2 = (float)uVar7;
  puStack_9 = (undefined *)uVar8;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&puStack_6,value_00,(MethodInfo *)0x0);
  uVar10 = pVVar1->x;
  fVar3 = pVVar1->z;
  if (transform != (Transform *)0x0) {
    pVVar1 = (Vector3 *)&puStack_6;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (pVVar1,transform,(MethodInfo *)0x0);
    fVar5 = pVVar11->x;
    fVar12 = pVVar11->y;
    fVar4 = pVVar11->z;
    (__return_storage_ptr__->m_Normal).x = 0.0;
    (__return_storage_ptr__->m_Normal).y = 0.0;
    (__return_storage_ptr__->m_Normal).z = 0.0;
    __return_storage_ptr__->m_Distance = 0.0;
    value.y = (float)pVVar1;
    value.x = (float)puStack_9;
    value.z = fVar3;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&puStack_6,value,(MethodInfo *)0x0);
    uVar13 = pVVar1->x;
    uVar14 = pVVar1->y;
    fVar3 = pVVar1->z;
    (__return_storage_ptr__->m_Normal).x = (float)uVar13;
    (__return_storage_ptr__->m_Normal).y = (float)uVar14;
    (__return_storage_ptr__->m_Normal).z = fVar3;
    __return_storage_ptr__->m_Distance =
         (float)((uint)(fVar12 * (float)uVar14 + fVar5 * (float)uVar13 + fVar4 * fVar3) ^
                __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    return __return_storage_ptr__;
  }
  puStack_9 = (undefined *)uVar10;
  func_?();
  pcVar15 = (code *)swi(3);
  pPVar16 = (Plane *)(*pcVar15)();
  return pPVar16;
}


/* Void RotateAroundPivot(Transform, Quaternion, Vector3) */

void Assembly-CSharp.dll::RTG::TransformEx::TransformEx_RotateAroundPivot
               (Transform *transform,Quaternion rotation,Vector3 pivot,MethodInfo *method)

{
  if (transform != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc0,transform,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    fVar5 = (float)uVar2 - pivot.x;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffff90,transform,(MethodInfo *)0x0);
    fVar7 = pQVar6->y;
    fVar8 = pQVar6->z;
    fVar9 = pQVar6->w;
    value.y = (rotation.w * fVar7 + rotation.y * fVar9 + rotation.z * pQVar6->x) -
              rotation.x * fVar8;
    value.x = (rotation.x * fVar9 + rotation.w * pQVar6->x + rotation.y * fVar8) -
              rotation.z * fVar7;
    value.z = (rotation.w * fVar8 + rotation.z * fVar9 + rotation.x * fVar7) -
              rotation.y * pQVar6->x;
    value.w = ((rotation.w * fVar9 - rotation.x * pQVar6->x) - rotation.y * fVar7) -
              rotation.z * fVar8;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (transform,value,(MethodInfo *)0x0);
    point.y = (float)uVar3 - pivot.y;
    point.x = fVar5;
    point.z = fVar4 - pivot.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffc0,rotation,point,(MethodInfo *)0x0);
    uVar10 = pVVar1->x;
    uVar11 = pVVar1->y;
    value_00.y = pivot.y + (float)uVar11;
    value_00.x = fVar5 + (float)uVar10;
    value_00.z = pivot.z + pVVar1->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (transform,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ScaleFromPivot(Transform, Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::TransformEx::TransformEx_ScaleFromPivot
               (Transform *transform,Vector3 scaleFactor,Vector3 pivot,MethodInfo *method)

{
  if (transform != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&fStack_2,transform,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fVar5 = pVVar1->z;
    VStack_6.x = scaleFactor.x * (float)uVar3;
    VStack_6.y = 0.0;
    VStack_6.z = 0.0;
    uStack_7 = 0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (transform,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0)
    ;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&fStack_2,transform,(MethodInfo *)0x0);
    fVar8 = pVVar1->x;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&fStack_2,transform,(MethodInfo *)0x0);
    VStack_6.x = VStack_6.x / fVar8;
    fVar8 = pVVar1->y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&fStack_2,transform,(MethodInfo *)0x0);
    pTVar9 = (Transform *)((scaleFactor.z * fVar5) / pVVar1->z);
    value.y = (scaleFactor.y * (float)uVar4) / fVar8;
    value.x = VStack_6.x;
    value.z = (float)pTVar9;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar9,value,(MethodInfo *)0x0);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       ((Vector3 *)&fStack_2,transform,(MethodInfo *)0x0);
    uVar10 = pVVar1->x;
    uVar11 = pVVar1->y;
    fVar5 = pVVar1->z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       ((Vector3 *)&fStack_2,transform,(MethodInfo *)0x0);
    __return_storage_ptr__ = pVVar1->x;
    this = pVVar1->y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       ((Vector3 *)__return_storage_ptr__,(Transform *)this,(MethodInfo *)pVVar1->z)
    ;
    fVar12 = 0.0;
    fStack_2 = pVVar1->x;
    puStack_13 = (undefined *)pVVar1->y;
    fVar8 = pVVar1->z;
    pVVar1 = &VStack_6;
    pTVar9 = transform;
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (pVVar1,transform,(MethodInfo *)0x0);
    uVar15 = pVVar14->x;
    uVar16 = pVVar14->y;
    fVar17 = (float)uVar15 - pivot.x;
    fVar18 = (float)uVar16 - pivot.y;
    fVar19 = pVVar14->z - pivot.z;
    fVar20 = ((float)uVar10 * fVar17 + (float)uVar11 * fVar18 + fVar5 * fVar19) * scaleFactor.x;
    fVar21 = ((float)pVVar1 * fVar17 + (float)pTVar9 * fVar18 + fVar12 * fVar19) * scaleFactor.y;
    fVar18 = (fStack_2 * fVar17 + (float)puStack_13 * fVar18 + fVar8 * fVar19) * scaleFactor.z;
    value_00.y = (float)puStack_13 * fVar18 +
                 pivot.y + (float)uVar11 * fVar20 + (float)pTVar9 * fVar21;
    value_00.x = fStack_2 * fVar18 + pivot.x + (float)uVar10 * fVar20 + (float)pVVar1 * fVar21;
    value_00.z = fVar8 * fVar18 + pivot.z + fVar5 * fVar20 + fVar12 * fVar21;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (transform,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void SetWorldScale(Transform, Vector3) */

void Assembly-CSharp.dll::RTG::TransformEx::TransformEx_SetWorldScale
               (Transform *transform,Vector3 worldScale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (transform != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (transform,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0)
    ;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&stack0xffffffd8,transform,(MethodInfo *)0x0);
    fVar2 = pVVar1->x;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&stack0xffffffd8,transform,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&stack0xffffffd8,transform,(MethodInfo *)0x0);
    value.y = worldScale.y / fVar3;
    value.x = worldScale.x / fVar2;
    value.z = worldScale.z / pVVar1->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (transform,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TransformPoints(Transform, List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::TransformEx::TransformEx_TransformPoints
               (Transform *transform,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    while( true ) {
      if ((points->fields)._size <= index) {
        return;
      }
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      if (transform == (Transform *)0x0) break;
      pPVar2 = (PlaneIdHelper_PlaneQuadrantInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         ((Vector3 *)&stack0xffffffe4,transform,(Vector3)*pVVar1,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)points,index,*pPVar2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                );
      index = index + 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

