
/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::AABB::AABB_ContainsPoint(AABB *this,Vector3 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (this->_center).x;
  uStack_1._4_4_ = (this->_center).y;
  fVar2 = (this->_center).z;
  VStack_3.x = (this->_size).x;
  VStack_3.y = (this->_size).y;
  VStack_3.z = (this->_size).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  fStack_4 = 0.0;
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fStack_6 = (pQVar5->identityQuaternion).x;
  fStack_7 = (pQVar5->identityQuaternion).y;
  fStack_8 = (pQVar5->identityQuaternion).z;
  fStack_9 = (pQVar5->identityQuaternion).w;
  uStack_10 = 0;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  VStack_3.z = fStack_4 + VStack_3.z;
  pos.z = fVar2;
  pos.x = (float)(undefined4)uStack_1;
  pos.y = (float)uStack_1._4_4_;
  q.y = fStack_7;
  q.x = fStack_6;
  q.z = fStack_8;
  q.w = fStack_9;
  s.y = VStack_3.y + uStack_10._4_4_;
  s.x = VStack_3.x + (float)uStack_10;
  s.z = VStack_3.z;
  pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&stack0xffffff0c,pos,q,s,(MethodInfo *)0x0);
  MStack_12.m00 = pMVar11->m00;
  MStack_12.m10 = pMVar11->m10;
  MStack_12.m20 = pMVar11->m20;
  MStack_12.m30 = pMVar11->m30;
  MStack_12.m01 = pMVar11->m01;
  MStack_12.m11 = pMVar11->m11;
  MStack_12.m21 = pMVar11->m21;
  MStack_12.m31 = pMVar11->m31;
  MStack_12.m02 = pMVar11->m02;
  MStack_12.m12 = pMVar11->m12;
  MStack_12.m22 = pMVar11->m22;
  MStack_12.m32 = pMVar11->m32;
  MStack_12.m03 = pMVar11->m03;
  MStack_12.m13 = pMVar11->m13;
  MStack_12.m23 = pMVar11->m23;
  MStack_12.m33 = pMVar11->m33;
  pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffff0c,&MStack_12,(MethodInfo *)0x0);
  MStack_13.m00 = pMVar11->m00;
  MStack_13.m10 = pMVar11->m10;
  MStack_13.m20 = pMVar11->m20;
  MStack_13.m30 = pMVar11->m30;
  MStack_13.m01 = pMVar11->m01;
  MStack_13.m11 = pMVar11->m11;
  MStack_13.m21 = pMVar11->m21;
  MStack_13.m31 = pMVar11->m31;
  MStack_13.m02 = pMVar11->m02;
  MStack_13.m12 = pMVar11->m12;
  MStack_13.m22 = pMVar11->m22;
  MStack_13.m32 = pMVar11->m32;
  MStack_13.m03 = pMVar11->m03;
  MStack_13.m13 = pMVar11->m13;
  MStack_13.m23 = pMVar11->m23;
  MStack_13.m33 = pMVar11->m33;
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&VStack_3,&MStack_13,point,(MethodInfo *)0x0);
  uVar15 = pVVar14->x;
  uVar16 = pVVar14->y;
  if ((((_UNK_? <= (float)uVar15) && ((float)uVar15 <= _UNK_?)) &&
      (_UNK_? <= (float)uVar16)) &&
     (((float)uVar16 <= _UNK_? && (_UNK_? <= pVVar14->z)))) {
    return pVVar14->z <= _UNK_?;
  }
  return 0;
}


/* Void Encapsulate(Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Encapsulate(AABB *this,Vector3 point,MethodInfo *method)

{
  uVar1 = (this->_center).x;
  uVar2 = (this->_center).y;
  uVar3 = (this->_size).x;
  uVar4 = (this->_size).y;
  fVar5 = (float)uVar1 - (float)uVar3 * _UNK_?;
  fVar6 = (float)uVar2 - (float)uVar4 * _UNK_?;
  fVar7 = (this->_center).z - (this->_size).z * _UNK_?;
  uVar8 = (this->_center).x;
  uVar9 = (this->_center).y;
  uVar10 = (this->_size).x;
  uVar11 = (this->_size).y;
  fStack_12 = (float)uVar8 + (float)uVar10 * _UNK_?;
  fStack_13 = (float)uVar9 + (float)uVar11 * _UNK_?;
  fVar14 = (this->_center).z + (this->_size).z * _UNK_?;
  if (point.x < fVar5) {
    fVar5 = point.x;
  }
  if (fStack_12 < point.x) {
    fStack_12 = point.x;
  }
  if (point.y < fVar6) {
    fVar6 = point.y;
  }
  if (fStack_13 < point.y) {
    fStack_13 = point.y;
  }
  if (point.z < fVar7) {
    fVar7 = point.z;
  }
  if (fVar14 < point.z) {
    fVar14 = point.z;
  }
  this->_isValid = 1;
  value.z = fVar7;
  value.x = fVar5;
  value.y = fVar6;
  AABB_set_Min(this,value,(MethodInfo *)0x0);
  value_00.y = fStack_13;
  value_00.x = fStack_12;
  value_00.z = fVar14;
  AABB_set_Max(this,value_00,(MethodInfo *)0x0);
  return;
}


/* Void Encapsulate(IEnumerable`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Encapsulate_1
               (AABB *this,IEnumerable_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (points != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    piStack_6 = (int *)func_?(0,
                                        TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>
                                        ,points);
    ppiStack_7 = &piStack_6;
    uStack_8 = 0;
    uStack_1 = 1;
    while( true ) {
      if (piStack_6 == (int *)0x0) break;
      cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_6);
      piVar10 = piStack_6;
      if (cVar9 == '\0') {
        uStack_1 = 0xffffffff;
        if (piStack_6 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piStack_6);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      piStack_11 = piStack_6;
      if (piStack_6 == (int *)0x0) break;
      iStack_12 = *piStack_6;
      uVar13 = 0;
      if (*(ushort *)(iStack_12 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)
               (*(int *)(iStack_12 + 0x58) + (uint)uVar13 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar14 = (undefined4 *)
                     (*piStack_6 +
                     (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar13 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(iStack_12 + 0xb6));
      }
      puVar14 = (undefined4 *)
               func_?(piStack_6,
                               TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                               ,0);
code_?:
      pVVar15 = (Vector3 *)(*(code *)*puVar14)(auStack_16,piVar10,puVar14[1]);
      AABB_Encapsulate(this,*pVVar15,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Encapsulate(AABB) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Encapsulate_2(AABB *this,AABB aabb,MethodInfo *method)

{
  uVar1 = (this->_center).x;
  uVar2 = (this->_center).y;
  uVar3 = (this->_size).x;
  uVar4 = (this->_size).y;
  fVar5 = (float)uVar1 - (float)uVar3 * _UNK_?;
  fVar6 = (float)uVar2 - (float)uVar4 * _UNK_?;
  fVar7 = (this->_center).z - (this->_size).z * _UNK_?;
  uVar8 = (this->_center).x;
  uVar9 = (this->_center).y;
  uVar10 = (this->_size).x;
  uVar11 = (this->_size).y;
  fStack_12 = (float)uVar8 + (float)uVar10 * _UNK_?;
  fStack_13 = (float)uVar9 + (float)uVar11 * _UNK_?;
  fVar14 = (this->_center).z + (this->_size).z * _UNK_?;
  fVar15 = aabb._center.x - aabb._size.x * _UNK_?;
  fVar16 = aabb._center.y - aabb._size.y * _UNK_?;
  fVar17 = aabb._center.z - aabb._size.z * _UNK_?;
  fVar18 = aabb._center.x + aabb._size.x * _UNK_?;
  fVar19 = aabb._center.y + aabb._size.y * _UNK_?;
  fVar20 = aabb._center.z + aabb._size.z * _UNK_?;
  if (fVar15 < fVar5) {
    fVar5 = fVar15;
  }
  if (fVar16 < fVar6) {
    fVar6 = fVar16;
  }
  if (fVar17 < fVar7) {
    fVar7 = fVar17;
  }
  if (fStack_12 < fVar18) {
    fStack_12 = fVar18;
  }
  if (fStack_13 < fVar19) {
    fStack_13 = fVar19;
  }
  if (fVar14 < fVar20) {
    fVar14 = fVar20;
  }
  this->_isValid = 1;
  value.z = fVar7;
  value.x = fVar5;
  value.y = fVar6;
  AABB_set_Min(this,value,(MethodInfo *)0x0);
  value_00.y = fStack_13;
  value_00.x = fStack_12;
  value_00.z = fVar14;
  AABB_set_Max(this,value_00,(MethodInfo *)0x0);
  return;
}


/* List`1[UnityEngine.Vector3] GetCenterAndCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::AABB::AABB_GetCenterAndCornerPoints(AABB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = AABB_GetCornerPoints(this,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar2._0_4_ = (this->_center).x;
    uVar2._4_4_ = (this->_center).y;
    func_?(pLVar1,uVar2,(this->_center).z,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    return pLVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar3)();
  return pLVar1;
}


/* List`1[UnityEngine.Vector3] GetCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::AABB::AABB_GetCornerPoints(AABB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  boxCenter = this->_center;
  boxSize = this->_size;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  boxRotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  pLVar1 = BoxMath::BoxMath_CalcBoxCornerPoints(boxCenter,boxSize,boxRotation,(MethodInfo *)0x0);
  return pLVar1;
}


/* AABB GetInvalid() */

AABB * Assembly-CSharp.dll::RTG::AABB::AABB_GetInvalid
                 (AABB *__return_storage_ptr__,MethodInfo *method)

{
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector2] GetScreenCenterAndCornerPoints(Camera) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::AABB::AABB_GetScreenCenterAndCornerPoints
          (AABB *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLStack_7 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
               AABB_GetCenterAndCornerPoints(this,(MethodInfo *)0x0);
  if (pLStack_7 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    capacity = (pLStack_7->fields)._size;
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_00,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    pLStack_8 = this_00;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                        (&LStack_10,pLStack_7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                        );
    uStack_11 = 0;
    LStack_12._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar9->_list;
    LStack_12._index = pLVar9->_index;
    LStack_12._version = pLVar9->_version;
    LStack_12._current.Quadrant = (int32_t)(pLVar9->_current).alias;
    uVar13 = (pLVar9->_current).path;
    uVar14 = (pLVar9->_current).asset;
    uStack_1 = 1;
    LStack_12._current.FirstAxisSign = uVar13;
    LStack_12._current.SecondAxisSign = uVar14;
    pLStack_15 = &LStack_12;
    while( true ) {
      while( true ) {
        bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          (&LStack_12,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar16 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_12,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Vector2_ *)this_00;
        }
        if (camera == (Camera *)0x0) goto code_?;
        position.y = (float)LStack_12._current.FirstAxisSign;
        position.x = (float)LStack_12._current.Quadrant;
        position.z = (float)LStack_12._current.SecondAxisSign;
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            ((Vector3 *)&LStack_10._current,camera,position,(MethodInfo *)0x0);
        pMVar18 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        VStack_19.x = pVVar17->x;
        VStack_19.y = pVVar17->y;
        fStack_20 = VStack_19.x;
        pSStack_21 = (String *)VStack_19.y;
        if (this_00 ==
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) goto code_?;
        piVar22 = &(this_00->fields)._version;
        *piVar22 = *piVar22 + 1;
        pMVar23 = (this_00->fields)._items;
        uVar24 = (this_00->fields)._size;
        if (pMVar23 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        if (uVar24 < pMVar23->max_length) break;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  ((List_1_UnityEngine_Vector2_ *)this_00,VStack_19,
                   pMVar18->klass->rgctx_data[0xe].method);
      }
      (this_00->fields)._size = uVar24 + 1;
      if (pMVar23->max_length <= uVar24) break;
      (&pMVar23->vector[0].index)[uVar24 * 2] = (int32_t)VStack_19.x;
      (&pMVar23->vector[0].name)[uVar24 * 2] = (String *)VStack_19.y;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  pLVar26 = (List_1_UnityEngine_Vector2_ *)(*pcVar25)();
  return pLVar26;
}


/* List`1[UnityEngine.Vector2] GetScreenCornerPoints(Camera) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::AABB::AABB_GetScreenCornerPoints
          (AABB *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLStack_7 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
               AABB_GetCornerPoints(this,(MethodInfo *)0x0);
  if (pLStack_7 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    capacity = (pLStack_7->fields)._size;
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_00,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    pLStack_8 = this_00;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                        (&LStack_10,pLStack_7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                        );
    uStack_11 = 0;
    LStack_12._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar9->_list;
    LStack_12._index = pLVar9->_index;
    LStack_12._version = pLVar9->_version;
    LStack_12._current.Quadrant = (int32_t)(pLVar9->_current).alias;
    uVar13 = (pLVar9->_current).path;
    uVar14 = (pLVar9->_current).asset;
    uStack_1 = 1;
    LStack_12._current.FirstAxisSign = uVar13;
    LStack_12._current.SecondAxisSign = uVar14;
    pLStack_15 = &LStack_12;
    while( true ) {
      while( true ) {
        bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          (&LStack_12,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar16 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_12,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Vector2_ *)this_00;
        }
        if (camera == (Camera *)0x0) goto code_?;
        position.y = (float)LStack_12._current.FirstAxisSign;
        position.x = (float)LStack_12._current.Quadrant;
        position.z = (float)LStack_12._current.SecondAxisSign;
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            ((Vector3 *)&LStack_10._current,camera,position,(MethodInfo *)0x0);
        pMVar18 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        VStack_19.x = pVVar17->x;
        VStack_19.y = pVVar17->y;
        fStack_20 = VStack_19.x;
        pSStack_21 = (String *)VStack_19.y;
        if (this_00 ==
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) goto code_?;
        piVar22 = &(this_00->fields)._version;
        *piVar22 = *piVar22 + 1;
        pMVar23 = (this_00->fields)._items;
        uVar24 = (this_00->fields)._size;
        if (pMVar23 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        if (uVar24 < pMVar23->max_length) break;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  ((List_1_UnityEngine_Vector2_ *)this_00,VStack_19,
                   pMVar18->klass->rgctx_data[0xe].method);
      }
      (this_00->fields)._size = uVar24 + 1;
      if (pMVar23->max_length <= uVar24) break;
      (&pMVar23->vector[0].index)[uVar24 * 2] = (int32_t)VStack_19.x;
      (&pMVar23->vector[0].name)[uVar24 * 2] = (String *)VStack_19.y;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  pLVar26 = (List_1_UnityEngine_Vector2_ *)(*pcVar25)();
  return pLVar26;
}


/* Rect GetScreenRectangle(Camera) */

Rect * Assembly-CSharp.dll::RTG::AABB::AABB_GetScreenRectangle
                 (Rect *__return_storage_ptr__,AABB *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = AABB_GetScreenCornerPoints(this,camera,(MethodInfo *)0x0);
  if (this_00 == (List_1_UnityEngine_Vector2_ *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pRVar2 = (Rect *)(*pcVar1)();
    return pRVar2;
  }
  VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__get_Item
                    (this_00,0,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                    );
  fStack_4 = VVar3.y;
  uVar5 = CONCAT44(fStack_4,pLStack_6);
  method_00 = (MethodInfo *)0x0;
  VVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__get_Item
                    (this_00,0,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                    );
  pLStack_6 = (List_1_UnityEngine_Vector2_ *)VVar3.x;
  fStack_4 = VVar7.y;
  fStack_8 = (float)pLStack_6;
  fStack_9 = fStack_4;
  for (index = 1; index < (this_00->fields)._size; index = index + 1) {
    VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    pLStack_6 = (List_1_UnityEngine_Vector2_ *)VVar3.x;
    this_01 = (List_1_UnityEngine_Vector2_ *)uVar5;
    if ((float)pLStack_6 <= (float)(List_1_UnityEngine_Vector2_ *)uVar5) {
      this_01 = pLStack_6;
    }
    fStack_4 = VVar3.y;
    fVar10 = (float)((ulonglong)uVar5 >> 0x20);
    if (fStack_4 <= fVar10) {
      fVar10 = fStack_4;
    }
    if (0.0 <= (float)method_00) {
      method_00 = (MethodInfo *)0x0;
    }
    uVar5 = CONCAT44(fVar10,this_01);
    VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item(this_01,(int32_t)fVar10,method_00);
    fStack_11 = VVar3.x;
    if (fStack_8 <= fStack_11) {
      fStack_8 = fStack_11;
    }
    fStack_12 = VVar3.y;
    if (fStack_9 <= fStack_12) {
      fStack_9 = fStack_12;
    }
  }
  fVar10 = (float)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->m_XMin = (float)uVar5;
  __return_storage_ptr__->m_YMin = fVar10;
  __return_storage_ptr__->m_Width = fStack_8 - (float)uVar5;
  __return_storage_ptr__->m_Height = fStack_9 - fVar10;
  return __return_storage_ptr__;
}


/* Matrix4x4 GetUnitBoxTransform() */

Matrix4x4 *
Assembly-CSharp.dll::RTG::AABB::AABB_GetUnitBoxTransform
          (Matrix4x4 *__return_storage_ptr__,AABB *this,MethodInfo *method)

{
  uStack_1._0_4_ = (this->_center).x;
  uStack_1._4_4_ = (this->_center).y;
  fVar2 = (this->_center).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pos.z = fVar2;
  pos.x = (float)(undefined4)uStack_1;
  pos.y = (float)uStack_1._4_4_;
  pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     (&MStack_4,pos,
                      TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                      this->_size,(MethodInfo *)0x0);
  fVar2 = pMVar3->m10;
  fVar5 = pMVar3->m20;
  fVar6 = pMVar3->m30;
  __return_storage_ptr__->m00 = pMVar3->m00;
  __return_storage_ptr__->m10 = fVar2;
  __return_storage_ptr__->m20 = fVar5;
  __return_storage_ptr__->m30 = fVar6;
  fVar2 = pMVar3->m11;
  fVar5 = pMVar3->m21;
  fVar6 = pMVar3->m31;
  __return_storage_ptr__->m01 = pMVar3->m01;
  __return_storage_ptr__->m11 = fVar2;
  __return_storage_ptr__->m21 = fVar5;
  __return_storage_ptr__->m31 = fVar6;
  fVar2 = pMVar3->m12;
  fVar5 = pMVar3->m22;
  fVar6 = pMVar3->m32;
  __return_storage_ptr__->m02 = pMVar3->m02;
  __return_storage_ptr__->m12 = fVar2;
  __return_storage_ptr__->m22 = fVar5;
  __return_storage_ptr__->m32 = fVar6;
  fVar2 = pMVar3->m13;
  fVar5 = pMVar3->m23;
  fVar6 = pMVar3->m33;
  __return_storage_ptr__->m03 = pMVar3->m03;
  __return_storage_ptr__->m13 = fVar2;
  __return_storage_ptr__->m23 = fVar5;
  __return_storage_ptr__->m33 = fVar6;
  return __return_storage_ptr__;
}


/* Void Inflate(Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Inflate_1(AABB *this,Vector3 amount,MethodInfo *method)

{
  uVar1 = (this->_size).x;
  uVar2 = (this->_size).y;
  fVar3 = (this->_size).z;
  (this->_size).x = amount.x + (float)uVar1;
  (this->_size).y = amount.y + (float)uVar2;
  (this->_size).z = amount.z + fVar3;
  return;
}


/* Void RecalculateCenterAndSize(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_RecalculateCenterAndSize
               (AABB *this,Vector3 min,Vector3 max,MethodInfo *method)

{
  fVar1 = (min.z + max.z) * _UNK_?;
  fVar2 = (min.y + max.y) * _UNK_?;
  (this->_center).x = (min.x + max.x) * _UNK_?;
  (this->_center).y = fVar2;
  (this->_center).z = fVar1;
  (this->_size).x = max.x - min.x;
  (this->_size).y = max.y - min.y;
  (this->_size).z = max.z - min.z;
  return;
}


/* Bounds ToBounds() */

Bounds * Assembly-CSharp.dll::RTG::AABB::AABB_ToBounds
                   (Bounds *__return_storage_ptr__,AABB *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = (this->_center).y;
  fVar3 = (this->_center).z;
  (__return_storage_ptr__->m_Center).x = (this->_center).x;
  (__return_storage_ptr__->m_Center).y = fVar2;
  uVar4 = (this->_size).x;
  uVar5 = (this->_size).y;
  (__return_storage_ptr__->m_Center).z = fVar3;
  fVar3 = (this->_size).z;
  (__return_storage_ptr__->m_Extents).x = (float)uVar4 * fVar1;
  (__return_storage_ptr__->m_Extents).y = (float)uVar5 * fVar1;
  (__return_storage_ptr__->m_Extents).z = fVar3 * fVar1;
  return __return_storage_ptr__;
}


/* Void Transform(Matrix4x4) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Transform
               (AABB *this,Matrix4x4 transformMatrix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  boxCenter = this->_center;
  boxSize = this->_size;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  BoxMath::BoxMath_TransformBox
            (boxCenter,boxSize,transformMatrix,&this->_center,&this->_size,(MethodInfo *)0x0);
  return;
}


/* AABB(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB__ctor
               (AABB *this,Vector3 center,Vector3 size,MethodInfo *method)

{
  (this->_center).x = center.x;
  (this->_center).y = center.y;
  (this->_center).z = center.z;
  (this->_size).x = size.x;
  (this->_size).y = size.y;
  (this->_size).z = size.z;
  this->_isValid = 1;
  return;
}


/* AABB(Bounds) */

void Assembly-CSharp.dll::RTG::AABB::AABB__ctor_1(AABB *this,Bounds bounds,MethodInfo *method)

{
  fVar1 = _UNK_?;
  (this->_center).x = bounds.m_Center.x;
  (this->_center).y = bounds.m_Center.y;
  (this->_center).z = bounds.m_Center.z;
  (this->_size).x = bounds.m_Extents.x * fVar1;
  (this->_size).y = bounds.m_Extents.y * fVar1;
  (this->_size).z = bounds.m_Extents.z * fVar1;
  this->_isValid = 1;
  return;
}


/* AABB(IEnumerable`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::AABB::AABB__ctor_2
               (AABB *this,IEnumerable_1_UnityEngine_Vector3_ *pointCloud,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff20;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff20;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  fStack_8 = _UNK_?;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  fStack_12 = _UNK_?;
  uStack_13 = CONCAT44(_UNK_?,_UNK_?);
  fStack_14 = _UNK_?;
  fStack_15 = _UNK_?;
  fStack_16 = _UNK_?;
  uStack_17 = CONCAT44(_UNK_?,_UNK_?);
  fStack_18 = _UNK_?;
  fStack_19 = _UNK_?;
  fStack_20 = _UNK_?;
  uStack_21 = 0;
  uStack_22 = 0;
  uStack_23 = 0;
  if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    piStack_24 = (int *)func_?(0,
                                        TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>
                                        ,pointCloud);
    ppiStack_25 = &piStack_24;
    uStack_26 = 0;
    uStack_2 = 1;
    uVar27 = uStack_28;
    while (uStack_28 = uVar27, piStack_24 != (int *)0x0) {
      cVar29 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_24);
      if (cVar29 == '\0') {
        uStack_2 = 0xffffffff;
        if (piStack_24 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piStack_24);
        }
        fVar30 = (fStack_14 + fStack_18) * _UNK_?;
        fVar31 = (fStack_12 + fStack_16) * _UNK_?;
        (this->_center).x = (fStack_20 + fStack_8) * _UNK_?;
        (this->_center).y = fVar31;
        (this->_center).z = fVar30;
        (this->_size).x = fStack_20 - fStack_8;
        (this->_size).y = fStack_16 - fStack_12;
        (this->_size).z = fStack_18 - fStack_14;
        this->_isValid = 1;
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      piStack_32 = piStack_24;
      if (piStack_24 == (int *)0x0) break;
      iStack_33 = *piStack_24;
      uVar34 = 0;
      uStack_35 = 0;
      if (*(ushort *)(iStack_33 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)
               (*(int *)(iStack_33 + 0x58) + (uint)uVar34 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar36 = (undefined4 *)
                     (iStack_33 + 0xc0 +
                     *(int *)(*(int *)(iStack_33 + 0x58) + 4 + (uint)uVar34 * 8) * 8);
            goto code_?;
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 < *(ushort *)(iStack_33 + 0xb6));
      }
      puVar36 = (undefined4 *)
               func_?(piStack_24,
                               TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                               ,0);
code_?:
      puVar37 = (undefined8 *)(*(code *)*puVar36)(auStack_38,piStack_32,puVar36[1]);
      uVar27 = *puVar37;
      fStack_39 = *(float *)(puVar37 + 1);
      uStack_28._0_4_ = (float)uVar27;
      if ((float)uStack_28 < fStack_8) {
        fStack_8 = (float)uStack_28;
      }
      uStack_28._4_4_ = (float)((ulonglong)uVar27 >> 0x20);
      if (uStack_28._4_4_ < fStack_12) {
        fStack_12 = uStack_28._4_4_;
      }
      fStack_40 = fStack_14;
      if (fStack_39 < fStack_14) {
        fStack_40 = fStack_39;
      }
      uStack_13 = CONCAT44(fStack_12,fStack_8);
      if ((float)uStack_28 <= fStack_20) {
        uStack_28._0_4_ = fStack_20;
      }
      if (uStack_28._4_4_ <= fStack_16) {
        uStack_28._4_4_ = fStack_16;
      }
      fStack_41 = fStack_39;
      if (fStack_39 <= fStack_18) {
        fStack_41 = fStack_18;
      }
      uStack_17 = CONCAT44(uStack_28._4_4_,(float)uStack_28);
      uStack_9 = 0;
      uStack_10 = 0;
      uStack_11 = 0;
      uStack_21 = 0;
      uStack_22 = 0;
      uStack_23 = 0;
      fStack_20 = (float)uStack_28;
      fStack_19 = fStack_41;
      fStack_15 = fStack_40;
      fStack_14 = fStack_40;
      fStack_18 = fStack_41;
      fStack_16 = uStack_28._4_4_;
    }
  }
  uVar42 = func_?();
  func_?(uVar42);
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* AABB(IEnumerable`1[UnityEngine.Vector2]) */

void Assembly-CSharp.dll::RTG::AABB::AABB__ctor_3
               (AABB *this,IEnumerable_1_UnityEngine_Vector2_ *pointCloud,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  fStack_4 = _UNK_?;
  fStack_5 = _UNK_?;
  fStack_6 = _UNK_?;
  fStack_7 = _UNK_?;
  if (pointCloud != (IEnumerable_1_UnityEngine_Vector2_ *)0x0) {
    piVar8 = (int *)func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>
                                    ,pointCloud);
    uStack_1 = 1;
    while (piVar8 != (int *)0x0) {
      cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar8);
      if (cVar9 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar8 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar8);
        }
        fVar10 = (fStack_5 + fStack_6) * _UNK_?;
        (this->_center).x = (fStack_4 + fStack_7) * _UNK_?;
        (this->_center).y = fVar10;
        (this->_center).z = 0.0;
        (this->_size).x = fStack_7 - fStack_4;
        (this->_size).y = fStack_6 - fStack_5;
        (this->_size).z = 0.0;
        this->_isValid = 1;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar8 == (int *)0x0) break;
      iVar11 = *piVar8;
      uVar12 = 0;
      if (*(ushort *)(iVar11 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector2___Class **)
               (*(int *)(iVar11 + 0x58) + (uint)uVar12 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>) {
            puVar13 = (undefined4 *)
                     (iVar11 + (*(int *)(*(int *)(iVar11 + 0x58) + 4 + (uint)uVar12 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(iVar11 + 0xb6));
      }
      puVar13 = (undefined4 *)
               func_?(piVar8,
                               TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>
                               ,0);
code_?:
      uVar14 = (*(code *)*puVar13)(piVar8,puVar13[1]);
      fVar15 = (float)((ulonglong)uVar14 >> 0x20);
      fVar10 = (float)uVar14;
      if (fVar10 < fStack_4) {
        fStack_4 = fVar10;
      }
      if (fVar15 < fStack_5) {
        fStack_5 = fVar15;
      }
      if (fStack_7 < fVar10) {
        fStack_7 = fVar10;
      }
      if (fStack_6 < fVar15) {
        fStack_6 = fVar15;
      }
    }
  }
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Vector3 get_Max() */

Vector3 * Assembly-CSharp.dll::RTG::AABB::AABB_get_Max
                    (Vector3 *__return_storage_ptr__,AABB *this,MethodInfo *method)

{
  uVar1 = (this->_center).x;
  uVar2 = (this->_center).y;
  fVar3 = (this->_center).z;
  uVar4 = (this->_size).x;
  uVar5 = (this->_size).y;
  fVar6 = (float)uVar5 * _UNK_?;
  fVar7 = (this->_size).z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar1 + (float)uVar4 * _UNK_?;
  __return_storage_ptr__->y = (float)uVar2 + fVar6;
  __return_storage_ptr__->z = fVar3 + fVar7;
  return __return_storage_ptr__;
}


/* Vector3 get_Min() */

Vector3 * Assembly-CSharp.dll::RTG::AABB::AABB_get_Min
                    (Vector3 *__return_storage_ptr__,AABB *this,MethodInfo *method)

{
  uVar1 = (this->_center).x;
  uVar2 = (this->_center).y;
  fVar3 = (this->_center).z;
  uVar4 = (this->_size).x;
  uVar5 = (this->_size).y;
  fVar6 = (float)uVar5 * _UNK_?;
  fVar7 = (this->_size).z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar1 - (float)uVar4 * _UNK_?;
  __return_storage_ptr__->y = (float)uVar2 - fVar6;
  __return_storage_ptr__->z = fVar3 - fVar7;
  return __return_storage_ptr__;
}


/* Void set_Max(Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_set_Max(AABB *this,Vector3 value,MethodInfo *method)

{
  if (this->_isValid != 0) {
    uVar1 = (this->_center).x;
    uVar2 = (this->_center).y;
    uVar3 = (this->_size).x;
    uVar4 = (this->_size).y;
    fVar5 = (float)uVar1 - (float)uVar3 * _UNK_?;
    fVar6 = (float)uVar2 - (float)uVar4 * _UNK_?;
    fVar7 = (this->_center).z - (this->_size).z * _UNK_?;
    if (value.x <= fVar5) {
      value.x = fVar5;
    }
    if (value.y <= fVar6) {
      value.y = fVar6;
    }
    if (value.z <= fVar7) {
      value.z = fVar7;
    }
    uVar8 = (this->_center).x;
    uVar9 = (this->_center).y;
    uVar10 = (this->_size).x;
    uVar11 = (this->_size).y;
    fVar5 = (float)uVar8 - (float)uVar10 * _UNK_?;
    fVar12 = (float)uVar9 - (float)uVar11 * _UNK_?;
    fVar13 = (this->_center).z - (this->_size).z * _UNK_?;
    fVar7 = (fVar13 + value.z) * _UNK_?;
    fVar6 = (fVar12 + value.y) * _UNK_?;
    (this->_center).x = (fVar5 + value.x) * _UNK_?;
    (this->_center).y = fVar6;
    (this->_center).z = fVar7;
    (this->_size).x = value.x - fVar5;
    (this->_size).y = value.y - fVar12;
    (this->_size).z = value.z - fVar13;
  }
  return;
}


/* Void set_Min(Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_set_Min(AABB *this,Vector3 value,MethodInfo *method)

{
  if (this->_isValid != 0) {
    uVar1 = (this->_center).x;
    uVar2 = (this->_center).y;
    uVar3 = (this->_size).x;
    uVar4 = (this->_size).y;
    fVar5 = (float)uVar1 + (float)uVar3 * _UNK_?;
    fVar6 = (float)uVar2 + (float)uVar4 * _UNK_?;
    fVar7 = (this->_center).z + (this->_size).z * _UNK_?;
    if (fVar7 <= value.z) {
      value.z = fVar7;
    }
    if (fVar5 <= value.x) {
      value.x = fVar5;
    }
    if (fVar6 <= value.y) {
      value.y = fVar6;
    }
    uVar8 = (this->_center).x;
    uVar9 = (this->_center).y;
    uVar10 = (this->_size).x;
    uVar11 = (this->_size).y;
    fVar12 = (float)uVar8 + (float)uVar10 * _UNK_?;
    fVar13 = (float)uVar9 + (float)uVar11 * _UNK_?;
    fVar5 = (this->_center).z + (this->_size).z * _UNK_?;
    fVar7 = (fVar5 + value.z) * _UNK_?;
    fVar6 = (fVar13 + value.y) * _UNK_?;
    (this->_center).x = (fVar12 + value.x) * _UNK_?;
    (this->_center).y = fVar6;
    (this->_center).z = fVar7;
    (this->_size).x = fVar12 - value.x;
    (this->_size).y = fVar13 - value.y;
    (this->_size).z = fVar5 - value.z;
  }
  return;
}

