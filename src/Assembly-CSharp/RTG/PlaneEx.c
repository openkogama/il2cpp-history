
/* Single GetAbsDistanceToPoint(Plane, Vector3) */

float Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetAbsDistanceToPoint
                (Plane plane,Vector3 point,MethodInfo *method)

{
  return (float)((uint)(plane.m_Normal.x * point.x + plane.m_Normal.y * point.y +
                        point.z * plane.m_Normal.z + plane.m_Distance) & _UNK_?);
}


/* Plane GetCameraFacingAxisSlicePlane(Vector3, Vector3, Camera) */

Plane * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetCameraFacingAxisSlicePlane
                  (Plane *__return_storage_ptr__,Vector3 axisOrigin,Vector3 axis,Camera *camera,
                  MethodInfo *method)

{
  this = camera;
  if (camera != (Camera *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_3,pTVar1,(MethodInfo *)0x0);
      VStack_3.z = pVVar2->z;
      VStack_3.x = pVVar2->x;
      VStack_3.y = pVVar2->y;
      other.y = axis.y;
      other.x = axis.x;
      other.z = axis.z;
      bVar4 = Vector3Ex::Vector3Ex_IsAligned(*pVVar2,other,0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 == (Transform *)0x0) goto code_?;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&axis,pTVar1,(MethodInfo *)0x0);
        uVar5 = pVVar2->x;
        uVar6 = pVVar2->y;
        axis.z = pVVar2->z;
        axis.x = (float)uVar5;
        axis.y = (float)uVar6;
      }
      pPVar7 = (Plane *)(axis.x * axis.z - axis.x * axis.z);
      fVar8 = axis.x * axis.y - axis.x * axis.y;
      value.y = (float)pPVar7;
      value.x = axis.y * axis.z - axis.z * axis.y;
      value.z = fVar8;
      axis.z = fVar8;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&camera,value,(MethodInfo *)0x0);
      fVar9 = pVVar2->x;
      fVar10 = pVVar2->y;
      fVar11 = pVVar2->z;
      if (cRam_? == '\0') {
        camera = (Camera *)&TypeInfo__System__Math;
        axis.z = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        camera = (Camera *)TypeInfo__System__Math;
        axis.z = (float)&UNK_?;
        func_?();
      }
      dVar12 = (double)(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11);
      if (dVar12 < 0.0) {
        camera = (Camera *)&UNK_?;
        func_?();
      }
      else {
        dVar12 = SQRT(dVar12);
      }
      if (_UNK_? <= (float)dVar12) {
        fVar13 = axis.z * fVar9;
        fVar14 = axis.z * fVar10 - axis.y * fVar11;
        axis.z = axis.y * fVar9 - axis.x * fVar10;
        axis.y = axis.x * fVar11 - fVar13;
        camera = (Camera *)0x0;
        value_00.y = axis.y;
        value_00.x = fVar14;
        value_00.z = axis.z;
        axis.x = fVar14;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0x00000034,value_00,(MethodInfo *)0x0);
        method = (MethodInfo *)&stack0x00000048;
        camera = (Camera *)&UNK_?;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)method,*pVVar2,(MethodInfo *)0x0);
        uVar15 = pVVar2->x;
        uVar16 = pVVar2->y;
        fVar9 = pVVar2->z;
        fVar10 = (float)((uint)((float)uVar16 * 4.3354552e-29 + fVar8 * (float)uVar15 +
                              (float)&stack0x00000034 * fVar9) ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        (pPVar7->m_Normal).x = (float)uVar15;
        (pPVar7->m_Normal).y = (float)uVar16;
        (pPVar7->m_Normal).z = fVar9;
        pPVar7->m_Distance = fVar10;
        return pPVar7;
      }
      (pPVar7->m_Normal).x = 0.0;
      (pPVar7->m_Normal).y = 0.0;
      (pPVar7->m_Normal).z = 0.0;
      pPVar7->m_Distance = 0.0;
      return pPVar7;
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  pPVar7 = (Plane *)(*pcVar17)();
  return pPVar7;
}


/* Int32 GetClosestPtInFront(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetClosestPtInFront
                  (Plane plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  iVar1 = -1;
  index = 0;
  fStack_2 = _UNK_?;
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    iVar1 = (*pcVar3)();
    return iVar1;
  }
  for (; index < (points->fields)._size; index = index + 1) {
    pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       (&VStack_5,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    uStack_6._0_4_ = pVVar4->alias;
    uStack_6._4_4_ = pVVar4->path;
    pVStack_7 = pVVar4->asset;
    fVar8 = plane.m_Normal.y * (float)uStack_6._4_4_ +
            plane.m_Normal.x * (float)(undefined4)uStack_6 + plane.m_Normal.z * (float)pVStack_7 +
            plane.m_Distance;
    if ((0.0 < fVar8) && (fVar8 < fStack_2)) {
      iVar1 = index;
      fStack_2 = fVar8;
    }
  }
  return iVar1;
}


/* Int32 GetClosestPtInFrontOrOnPlane(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetClosestPtInFrontOrOnPlane
                  (Plane plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  iStack_1 = -1;
  fStack_2 = _UNK_?;
  iVar3 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    while (index = iVar3, index < (points->fields)._size) {
      pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         (&VStack_5,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      uStack_6._0_4_ = pVVar4->alias;
      uStack_6._4_4_ = pVVar4->path;
      pVStack_7 = pVVar4->asset;
      fVar8 = plane.m_Normal.y * (float)uStack_6._4_4_ +
              plane.m_Normal.x * (float)(undefined4)uStack_6 + plane.m_Normal.z * (float)pVStack_7
              + plane.m_Distance;
      if (((0.0 <= fVar8) && (fVar8 < fStack_2)) ||
         ((float)((uint)fVar8 & _UNK_?) < _UNK_?)) {
        iVar3 = index + 1;
        iStack_1 = index;
        fStack_2 = fVar8;
      }
      else {
        iVar3 = index + 1;
      }
    }
    return iStack_1;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  iVar10 = (*pcVar9)();
  return iVar10;
}


/* Int32 GetFurthestPtBehind(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetFurthestPtBehind
                  (Plane plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  iVar1 = -1;
  index = 0;
  fStack_2 = _UNK_?;
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    iVar1 = (*pcVar3)();
    return iVar1;
  }
  for (; index < (points->fields)._size; index = index + 1) {
    pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       (&VStack_5,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    uStack_6._0_4_ = pVVar4->alias;
    uStack_6._4_4_ = pVVar4->path;
    pVStack_7 = pVVar4->asset;
    fVar8 = plane.m_Normal.y * (float)uStack_6._4_4_ +
            plane.m_Normal.x * (float)(undefined4)uStack_6 + plane.m_Normal.z * (float)pVStack_7 +
            plane.m_Distance;
    if ((fVar8 < 0.0) && (fVar8 < fStack_2)) {
      iVar1 = index;
      fStack_2 = fVar8;
    }
  }
  return iVar1;
}


/* Int32 GetFurthestPtInFront(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetFurthestPtInFront
                  (Plane plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  iVar1 = -1;
  index = 0;
  fStack_2 = _UNK_?;
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    iVar1 = (*pcVar3)();
    return iVar1;
  }
  for (; index < (points->fields)._size; index = index + 1) {
    pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       (&VStack_5,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    uStack_6._0_4_ = pVVar4->alias;
    uStack_6._4_4_ = pVVar4->path;
    pVStack_7 = pVVar4->asset;
    fVar8 = plane.m_Normal.y * (float)uStack_6._4_4_ +
            plane.m_Normal.x * (float)(undefined4)uStack_6 + plane.m_Normal.z * (float)pVStack_7 +
            plane.m_Distance;
    if ((0.0 < fVar8) && (fStack_2 < fVar8)) {
      iVar1 = index;
      fStack_2 = fVar8;
    }
  }
  return iVar1;
}


/* Plane InvertNormal(Plane) */

Plane * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_InvertNormal
                  (Plane *__return_storage_ptr__,Plane plane,MethodInfo *method)

{
  VStack_1.z = (float)((uint)plane.m_Normal.z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  uVar2 = (uint)plane.m_Normal.x ^
          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  uVar3 = (uint)plane.m_Normal.y ^
          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  (__return_storage_ptr__->m_Normal).z = 0.0;
  __return_storage_ptr__->m_Distance = 0.0;
  value.y = (float)uVar3;
  value.x = (float)uVar2;
  value.z = VStack_1.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_1,value,(MethodInfo *)0x0);
  fVar5 = pVVar4->y;
  fVar6 = pVVar4->z;
  (__return_storage_ptr__->m_Normal).x = pVVar4->x;
  (__return_storage_ptr__->m_Normal).y = fVar5;
  fVar5 = (float)((uint)plane.m_Distance ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  (__return_storage_ptr__->m_Normal).z = fVar6;
  __return_storage_ptr__->m_Distance = fVar5;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] ProjectAllPoints(Plane, List`1[UnityEngine.Vector3]) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_ProjectAllPoints
          (Plane plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    capacity = (points->fields)._size;
    if (capacity == 0) {
      pLVar6 = (List_1_UnityEngine_Vector3_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      *unaff_FS_OFFSET = uStack_3;
      return pLVar6;
    }
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    pLStack_7 = this;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                       (&LStack_9,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                       );
    uStack_10 = 0;
    LStack_11._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar8->_list;
    LStack_11._index = pLVar8->_index;
    LStack_11._version = pLVar8->_version;
    LStack_11._current.Quadrant = (int32_t)(pLVar8->_current).alias;
    LStack_11._current.FirstAxisSign = (int32_t)(pLVar8->_current).path;
    LStack_11._current.SecondAxisSign = (int32_t)(pLVar8->_current).asset;
    uStack_1 = 1;
    pLStack_12 = &LStack_11;
    while( true ) {
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          (&LStack_11,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        pMVar14 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        if (bVar13 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_11,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Vector3_ *)this;
        }
        fVar15 = plane.m_Distance +
                 (float)LStack_11._current.FirstAxisSign * plane.m_Normal.y +
                 (float)LStack_11._current.Quadrant * plane.m_Normal.x +
                 (float)LStack_11._current.SecondAxisSign * plane.m_Normal.z;
        LStack_9._current.asset =
             (VisualTreeAsset *)
             ((float)LStack_11._current.SecondAxisSign - plane.m_Normal.z * fVar15);
        LStack_9._current.path =
             (String *)((float)LStack_11._current.FirstAxisSign - plane.m_Normal.y * fVar15);
        LStack_9._current.alias =
             (String *)((float)LStack_11._current.Quadrant - plane.m_Normal.x * fVar15);
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar16 = &(this->fields)._version;
        *piVar16 = *piVar16 + 1;
        pMVar17 = (this->fields)._items;
        uVar18 = (this->fields)._size;
        if (pMVar17 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        if (uVar18 < pMVar17->max_length) break;
        item.FirstAxisSign = (int32_t)LStack_9._current.path;
        item.Quadrant = (int32_t)LStack_9._current.alias;
        item.SecondAxisSign = (int32_t)LStack_9._current.asset;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,item,
                   pMVar14->klass->rgctx_data[0xe].method);
      }
      (this->fields)._size = uVar18 + 1;
      if (pMVar17->max_length <= uVar18) break;
      *(ulonglong *)(&pMVar17->vector[0].index + uVar18 * 3) =
           CONCAT44(LStack_9._current.path,LStack_9._current.alias);
      (&pMVar17->vector[0].actualWidth)[uVar18 * 3] = (float)LStack_9._current.asset;
    }
    func_?();
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  pLVar6 = (List_1_UnityEngine_Vector3_ *)(*pcVar20)();
  return pLVar6;
}


/* Vector3 ProjectPoint(Plane, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_ProjectPoint
                    (Vector3 *__return_storage_ptr__,Plane plane,Vector3 pt,MethodInfo *method)

{
  fVar1 = plane.m_Normal.x * pt.x + plane.m_Normal.y * pt.y + plane.m_Normal.z * pt.z +
          plane.m_Distance;
  __return_storage_ptr__->x = pt.x - plane.m_Normal.x * fVar1;
  __return_storage_ptr__->y = pt.y - plane.m_Normal.y * fVar1;
  __return_storage_ptr__->z = pt.z - plane.m_Normal.z * fVar1;
  return __return_storage_ptr__;
}

