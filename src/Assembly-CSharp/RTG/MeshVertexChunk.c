
/* Vector3 GetWorldVertClosestToScreenPt(Vector2, Matrix4x4, Camera) */

Vector3 * Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk_GetWorldVertClosestToScreenPt
                    (Vector3 *__return_storage_ptr__,MeshVertexChunk *this,Vector2 screenPoint,
                    Matrix4x4 worldMtx,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
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
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  bVar6 = cRam_? == '\0';
  LStack_7._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current.Quadrant = 0;
  LStack_7._current.FirstAxisSign = 0;
  LStack_7._current.SecondAxisSign = 0;
  __return_storage_ptr__->x = 0.0;
  fStack_8 = _UNK_?;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar6) {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar9->zeroVector).y;
  fVar11 = (pVVar9->zeroVector).z;
  __return_storage_ptr__->x = (pVVar9->zeroVector).x;
  __return_storage_ptr__->y = fVar10;
  __return_storage_ptr__->z = fVar11;
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            (this->fields)._modelSpaceVerts;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                        auStack_13,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                       );
    uStack_14 = 0;
    LStack_7._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar12->_list;
    LStack_7._index = pLVar12->_index;
    LStack_7._version = pLVar12->_version;
    LStack_7._current.Quadrant = (int32_t)(pLVar12->_current).alias;
    uVar15 = (pLVar12->_current).path;
    uVar16 = (pLVar12->_current).asset;
    uStack_1 = 1;
    LStack_7._current.FirstAxisSign = uVar15;
    LStack_7._current.SecondAxisSign = uVar16;
    pLStack_17 = &LStack_7;
    while( true ) {
      bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
              PlaneIdHelper+PlaneQuadrantInfo]::
              List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                        (&LStack_7,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                        );
      if (bVar18 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   ,in_stack_19);
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      point.y = (float)LStack_7._current.FirstAxisSign;
      point.x = (float)LStack_7._current.Quadrant;
      point.z = (float)LStack_7._current.SecondAxisSign;
      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                         (&VStack_21,&worldMtx,point,(MethodInfo *)0x0);
      uStack_22._0_4_ = pVVar20->x;
      uStack_22._4_4_ = pVVar20->y;
      fVar11 = pVVar20->z;
      if (camera == (Camera *)0x0) break;
      in_stack_19 = (MethodInfo *)(auStack_13 + 0xc);
      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                         ((Vector3 *)in_stack_19,camera,*pVVar20,(MethodInfo *)0x0);
      uStack_23._0_4_ = pVVar20->x;
      uStack_23._4_4_ = pVVar20->y;
      fVar10 = ((float)(undefined4)uStack_23 - screenPoint.x) *
               ((float)(undefined4)uStack_23 - screenPoint.x) +
               ((float)uStack_23._4_4_ - screenPoint.y) * ((float)uStack_23._4_4_ - screenPoint.y);
      if (fVar10 < fStack_8) {
        __return_storage_ptr__->x = (float)(undefined4)uStack_22;
        __return_storage_ptr__->y = (float)uStack_22._4_4_;
        __return_storage_ptr__->z = fVar11;
        fStack_8 = fVar10;
      }
    }
  }
  uVar24 = func_?();
  func_?(uVar24);
  pcVar25 = (code *)swi(3);
  pVVar20 = (Vector3 *)(*pcVar25)();
  return pVVar20;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::RTG::MeshVertexChunk::
MeshVertexChunk_System_Collections_IEnumerable_GetEnumerator
          (MeshVertexChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            (this->fields)._modelSpaceVerts;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                       (&LStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    pSStack_6 = (pLVar1->_current).alias;
    uStack_7._0_4_ = (pLVar1->_current).path;
    uStack_7._4_4_ = (pLVar1->_current).asset;
    pIVar8 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>
                             ,&pLStack_3);
    return pIVar8;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pIVar8 = (IEnumerator *)(*pcVar9)();
  return pIVar8;
}


/* MeshVertexChunk(List`1[UnityEngine.Vector3], Mesh) */

void Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk__ctor
               (MeshVertexChunk *this,List_1_UnityEngine_Vector3_ *modelSpaceVerts,Mesh *mesh,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,100,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields)._modelSpaceVerts = (List_1_UnityEngine_Vector3_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  this_01 = (List_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
  List_1_UnityEngine_Vector3___ctor_1
            (this_01,(IEnumerable_1_UnityEngine_Vector3_ *)modelSpaceVerts,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
            );
  (this->fields)._modelSpaceVerts = this_01;
  func_?(&this->fields,this_01);
  (this->fields)._mesh = mesh;
  func_?(&(this->fields)._mesh,mesh);
  this_02 = (AABB *)&fStack_1;
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  uVar3._0_4_ = 0.0;
  uVar3._4_4_ = 0.0;
  AABB::AABB__ctor_2(this_02,(IEnumerable_1_UnityEngine_Vector3_ *)0x0,(MethodInfo *)0x0);
  (this->fields)._modelSpaceAABB._size.x = fStack_1;
  (this->fields)._modelSpaceAABB._size.y = fStack_2;
  (this->fields)._modelSpaceAABB._size.z = (float)puStack_4;
  (this->fields)._modelSpaceAABB._center.x = (float)this_02;
  (this->fields)._modelSpaceAABB._center.y = (float)uVar3;
  (this->fields)._modelSpaceAABB._center.z = SUB84(uVar3,4);
  *(undefined4 *)&(this->fields)._modelSpaceAABB._isValid = 0;
  return;
}


/* Vector3 get_Item(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk_get_Item
                    (Vector3 *__return_storage_ptr__,MeshVertexChunk *this,int32_t vertexIndex,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            (this->fields)._modelSpaceVerts;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       (&VStack_2,this_00,vertexIndex,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    pSVar3 = pVVar1->path;
    pVVar4 = pVVar1->asset;
    __return_storage_ptr__->x = (float)pVVar1->alias;
    __return_storage_ptr__->y = (float)pSVar3;
    __return_storage_ptr__->z = (float)pVVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Int32 get_VertexCount() */

int32_t Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk_get_VertexCount
                  (MeshVertexChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._modelSpaceVerts;
  if (pLVar2 != (List_1_UnityEngine_Vector3_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

