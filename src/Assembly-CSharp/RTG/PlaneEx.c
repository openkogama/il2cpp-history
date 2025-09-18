
/* Single GetAbsDistanceToPoint(Plane, Vector3) */

float Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetAbsDistanceToPoint
                (Plane plane,Vector3 point,MethodInfo *method)

{
  return (float)((uint)(plane.m_Normal.x * point.x + plane.m_Normal.y * point.y +
                        plane.m_Normal.z * point.z + plane.m_Distance) & _UNK_?);
}


/* Plane GetCameraFacingAxisSlicePlane(Vector3, Vector3, Camera) */

Plane * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetCameraFacingAxisSlicePlane
                  (Plane *__return_storage_ptr__,Vector3 axisOrigin,Vector3 axis,Camera *camera,
                  MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffffd4,pTVar1,(MethodInfo *)0x0);
      fVar3 = pVVar2->x;
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      if ((float)((uint)((float)((uint)(axis.y * fVar4 + axis.x * fVar3 + axis.z * fVar5) &
                                _UNK_?) - _UNK_?) & _UNK_?) < _UNK_?) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)camera,(MethodInfo *)0x0);
        if (pTVar1 == (Transform *)0x0) goto code_?;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            ((Vector3 *)&stack0xffffffd4,pTVar1,(MethodInfo *)0x0);
        uVar6 = pVVar2->x;
        uVar7 = pVVar2->y;
        fVar5 = pVVar2->z;
        fVar3 = (float)uVar6;
        fVar4 = (float)uVar7;
      }
      VVar8.y = fVar5 * axis.x - fVar3 * axis.z;
      VVar8.x = fVar4 * axis.z - fVar5 * axis.y;
      VVar8.z = fVar3 * axis.y - fVar4 * axis.x;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffd4,VVar8,(MethodInfo *)0x0);
      fVar5 = pVVar2->x;
      fVar9 = pVVar2->y;
      fVar3 = pVVar2->z;
      fVar10 = (float10)func_?();
      if (_UNK_? <= (float)fVar10) {
        __return_storage_ptr__ = (Plane *)(fVar5 * axis.y - fVar9 * axis.x);
        fVar11 = fVar3 * axis.x - fVar5 * axis.z;
        VVar8.x = fVar9 * axis.z - fVar3 * axis.y;
        VVar8 = (Vector3)CONCAT84(uVar12,VVar8.x);
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffd4,VVar8,(MethodInfo *)0x0);
        uVar13 = pVVar2->x;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffd4,*pVVar2,(MethodInfo *)0x0);
        uVar14 = pVVar2->x;
        uVar15 = pVVar2->y;
        fVar3 = pVVar2->z;
        fVar4 = (float)((uint)((float)&stack0xffffffd4 * (float)uVar15 + (float)uVar14 * 4.3844048e-29
                              + (float)uVar13 * fVar3) ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        (__return_storage_ptr__->m_Normal).x = (float)uVar14;
        (__return_storage_ptr__->m_Normal).y = (float)uVar15;
        (__return_storage_ptr__->m_Normal).z = fVar3;
        __return_storage_ptr__->m_Distance = fVar4;
        return __return_storage_ptr__;
      }
      (__return_storage_ptr__->m_Normal).x = 0.0;
      (__return_storage_ptr__->m_Normal).y = 0.0;
      (__return_storage_ptr__->m_Normal).z = 0.0;
      __return_storage_ptr__->m_Distance = 0.0;
      return __return_storage_ptr__;
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pPVar17 = (Plane *)(*pcVar16)();
  return pPVar17;
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
  uVar1 = (uint)plane.m_Normal.x ^
          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  uVar2 = (uint)plane.m_Normal.y ^
          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  VStack_3.z = (float)((uint)plane.m_Normal.z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  (__return_storage_ptr__->m_Normal).z = 0.0;
  __return_storage_ptr__->m_Distance = 0.0;
  value.y = (float)uVar2;
  value.x = (float)uVar1;
  value.z = VStack_3.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_3,value,(MethodInfo *)0x0);
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
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
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
  LStack_6._current.FirstAxisSign = 0;
  LStack_6._current.SecondAxisSign = 0;
  LStack_6._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.Quadrant = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((points->fields)._size == 0) {
      pLVar7 = (List_1_UnityEngine_Vector3_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      *unaff_FS_OFFSET = uStack_3;
      return pLVar7;
    }
    capacity = (points->fields)._size;
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    pLStack_8 = this;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                       (&LStack_10,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                       );
    uStack_11 = 0;
    LStack_6._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar9->_list;
    LStack_6._index = pLVar9->_index;
    LStack_6._version = pLVar9->_version;
    LStack_6._current.Quadrant = (int32_t)(pLVar9->_current).alias;
    LStack_6._current.FirstAxisSign = (int32_t)(pLVar9->_current).path;
    LStack_6._current.SecondAxisSign = (int32_t)(pLVar9->_current).asset;
    uStack_1 = 1;
    pLStack_12 = &LStack_6;
    while( true ) {
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        pMVar14 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        if (bVar13 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Vector3_ *)this;
        }
        fVar15 = plane.m_Distance +
                 plane.m_Normal.y * (float)LStack_6._current.FirstAxisSign +
                 plane.m_Normal.x * (float)LStack_6._current.Quadrant +
                 plane.m_Normal.z * (float)LStack_6._current.SecondAxisSign;
        pVStack_16 = (VisualTreeAsset *)
                     ((float)LStack_6._current.SecondAxisSign - plane.m_Normal.z * fVar15);
        pSStack_17 = (String *)((float)LStack_6._current.FirstAxisSign - plane.m_Normal.y * fVar15)
        ;
        pSStack_18 = (String *)((float)LStack_6._current.Quadrant - plane.m_Normal.x * fVar15);
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar19 = &(this->fields)._version;
        *piVar19 = *piVar19 + 1;
        pMVar20 = (this->fields)._items;
        uVar21 = (this->fields)._size;
        if (pMVar20 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        if (uVar21 < pMVar20->max_length) break;
        item.FirstAxisSign = (int32_t)pSStack_17;
        item.Quadrant = (int32_t)pSStack_18;
        item.SecondAxisSign = (int32_t)pVStack_16;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,item,
                   pMVar14->klass->rgctx_data[0xe].method);
      }
      (this->fields)._size = uVar21 + 1;
      LStack_10._current.alias = pSStack_18;
      LStack_10._current.path = pSStack_17;
      LStack_10._current.asset = pVStack_16;
      if (pMVar20->max_length <= uVar21) break;
      *(ulonglong *)(&pMVar20->vector[0].index + uVar21 * 3) = CONCAT44(pSStack_17,pSStack_18);
      (&pMVar20->vector[0].actualWidth)[uVar21 * 3] = (float)pVStack_16;
    }
    func_?();
  }
code_?:
  uVar22 = func_?();
  func_?(uVar22);
  pcVar23 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_Vector3_ *)(*pcVar23)();
  return pLVar7;
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

