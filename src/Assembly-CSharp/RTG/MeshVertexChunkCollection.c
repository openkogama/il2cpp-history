
/* Boolean FromMesh(Mesh) */

bool Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::MeshVertexChunkCollection_FromMesh
               (MeshVertexChunkCollection *this,Mesh *mesh,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff44;
  puVar5 = &stack0xffffff44;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Add_RTG__MeshVertexChunkCollection__VertexChunkIndices__System__Collections__Generic__List<UnityEngine::Vector3>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__ContainsKey_RTG__MeshVertexChunkCollection__VertexChunkIndices_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Item_RTG__MeshVertexChunkCollection__VertexChunkIndices_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__RTG__MeshVertexChunk);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  iStack_7 = 0;
  uStack_8 = 0;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)mesh,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    if (mesh != (Mesh *)0x0) {
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_isReadable
                        (mesh,(MethodInfo *)0x0);
      if (bVar9 == 0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds(mesh,(MethodInfo *)0x0);
      pBVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_bounds
                         (&BStack_11,mesh,(MethodInfo *)0x0);
      DStack_12._current.key._cultureKey = (String *)(pBVar10->m_Center).x;
      DStack_12._current.key._pattern = (String *)(pBVar10->m_Center).y;
      DStack_12._current.value = (Object *)(pBVar10->m_Center).z;
      DStack_12._getEnumeratorRetType = (int32_t)(pBVar10->m_Extents).x;
      uVar13 = (pBVar10->m_Extents).y;
      uVar14 = (pBVar10->m_Extents).z;
      BStack_11.m_Extents.y = (float)uVar13;
      BStack_11.m_Extents.z = (float)uVar14;
      pVStack_15 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                             (mesh,(MethodInfo *)0x0);
      DStack_12._current.key._cultureKey =
           (String *)((float)DStack_12._getEnumeratorRetType * _UNK_? * _UNK_?);
      DStack_12._current.key._pattern = (String *)DStack_12._getEnumeratorRetType;
      DStack_12._current.value = (Object *)DStack_12._getEnumeratorRetType;
      pOStack_16 = (Object *)(BStack_11.m_Extents.y * _UNK_? * _UNK_?);
      pMStack_17 = (MeshVertexChunk *)(BStack_11.m_Extents.z * _UNK_? * _UNK_?);
      this_00 = (Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_ *)
                func_?();
      pDStack_18 = this_00;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[RTG::
      MeshVertexChunkCollection+VertexChunkIndices,System::Object]::
      Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Dictionary__
                );
      uVar19 = 0;
      if (pVStack_15 != (Vector3__Array *)0x0) {
        pVStack_20 = pVStack_15->vector;
        while( true ) {
          if ((int)pVStack_15->max_length <= (int)uVar19) break;
          if (pVStack_15->max_length <= uVar19) {
            func_?();
            goto code_?;
          }
          uStack_21._0_4_ = pVStack_20->x;
          uStack_21._4_4_ = pVStack_20->y;
          BStack_11.m_Extents.z = pVStack_20->z;
          uStack_22 = (double)CONCAT44((float)(undefined4)uStack_21 /
                                       (float)DStack_12._current.key._cultureKey,
                                       (undefined4)uStack_22);
          BStack_11.m_Extents.x = (float)(undefined4)uStack_21;
          BStack_11.m_Extents.y = (float)uStack_21._4_4_;
          fStack_23 = BStack_11.m_Extents.z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          uStack_22 = (double)uStack_22._4_4_;
          fVar24 = (float10)func_?();
          dStack_25 = (double)fVar24;
          uStack_22 = (double)CONCAT44(BStack_11.m_Extents.y / (float)pOStack_16,
                                       (undefined4)uStack_22);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          uStack_22 = (double)uStack_22._4_4_;
          fVar24 = (float10)func_?();
          uStack_22._0_4_ = SUB84((double)fVar24,0);
          uStack_22 = (double)CONCAT44(BStack_11.m_Extents.z / (float)pMStack_17,
                                       (undefined4)uStack_22);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          iStack_6 = (int)dStack_25;
          dStack_25 = (double)uStack_22._4_4_;
          iStack_7 = (int)fVar24;
          fVar24 = (float10)func_?();
          uStack_22 = (double)fVar24;
          iVar26 = (int32_t)fVar24;
          if (pDStack_18 ==
              (Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_ *)0x0)
          goto code_?;
          key_00._YIndex = iStack_7;
          key_00._XIndex = iStack_6;
          key_00._ZIndex = iVar26;
          bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[RTG::
                  MeshVertexChunkCollection+VertexChunkIndices,System::Object]::
                  Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object__ContainsKey
                            (pDStack_18,key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__ContainsKey_RTG__MeshVertexChunkCollection__VertexChunkIndices_
                            );
          if (bVar9 == 0) {
            this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)func_?(
                                        TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                        );
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
            MultiColumnCollectionHeader+ViewState+ColumnState]::
            List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                      (this_01,0x32,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                      );
            iVar26 = (int32_t)uStack_22;
            key._YIndex = iStack_7;
            key._XIndex = iStack_6;
            key._ZIndex = iVar26;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[RTG::
            MeshVertexChunkCollection+VertexChunkIndices,System::Object]::
            Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object__Add
                      (pDStack_18,key,(Object *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Add_RTG__MeshVertexChunkCollection__VertexChunkIndices__System__Collections__Generic__List<UnityEngine::Vector3>_
                      );
          }
          this_00 = pDStack_18;
          key_01._YIndex = iStack_7;
          key_01._XIndex = iStack_6;
          key_01._ZIndex = iVar26;
          pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[RTG::
                    MeshVertexChunkCollection+VertexChunkIndices,System::Object]::
                    Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object__get_Item
                              (pDStack_18,key_01,
                               MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Item_RTG__MeshVertexChunkCollection__VertexChunkIndices_
                              );
          if (pOVar27 == (Object *)0x0) goto code_?;
          func_?(pOVar27,uStack_21);
          uVar19 = uVar19 + 1;
          pVStack_20 = pVStack_20 + 1;
        }
        if (this_00 !=
            (Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_ *)0x0) {
          iVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                             ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Count__
                             );
          if (iVar26 == 0) goto code_?;
          (this->fields)._mesh = mesh;
          func_?();
          pLVar28 = (this->fields)._vertexChunks;
          if (pLVar28 != (List_1_RTG_MeshVertexChunk_ *)0x0) {
            length = (pLVar28->fields)._size;
            piVar29 = &(pLVar28->fields)._version;
            *piVar29 = *piVar29 + 1;
            (pLVar28->fields)._size = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar28->fields)._items,0,length,(MethodInfo *)0x0);
            }
            pDVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                (&DStack_12,
                                 (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__GetEnumerator__
                                );
            uStack_31 = 0;
            method_00 = (MeshVertexChunk__Class *)(pDVar30->_current).key._pattern;
            pMVar32 = (MeshVertexChunk__Class *)(pDVar30->_current).value;
            uStack_1 = 1;
            pSVar33 = (String *)(pDVar30->_current).key._options;
            pMVar34 = (MeshVertexChunk__Class *)(pDVar30->_current).key._cultureKey;
            pOStack_16 = (Object *)&stack0xffffff50;
            while( true ) {
              do {
                bVar9 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[RTG::
                        MeshVertexChunkCollection+VertexChunkIndices,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object__MoveNext
                                  ((Dictionary_2_TKey_TValue_Enumerator_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_
                                    *)&stack0xffffff50,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__MoveNext__
                                  );
                if (bVar9 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffff50,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Dispose__
                             ,(MethodInfo *)method_00);
                  *unaff_FS_OFFSET = uStack_3;
                  return 1;
                }
                DStack_12._current.key._cultureKey = pSVar33;
                DStack_12._current.key._pattern = (String *)pMVar34;
                DStack_12._current.value = (Object *)method_00;
                DStack_12._getEnumeratorRetType = (int32_t)pMVar32;
                if (pMVar32 == (MeshVertexChunk__Class *)0x0) goto code_?;
              } while ((pMVar32->_0).namespaze == (char *)0x0);
              pLVar28 = (this->fields)._vertexChunks;
              mesh_00 = (this->fields)._mesh;
              pSVar33 = (String *)&UNK_?;
              pMVar34 = TypeInfo__RTG__MeshVertexChunk;
              pMStack_17 = (MeshVertexChunk *)func_?();
              MeshVertexChunk::MeshVertexChunk__ctor
                        (pMStack_17,(List_1_UnityEngine_Vector3_ *)DStack_12._getEnumeratorRetType,
                         mesh_00,(MethodInfo *)0x0);
              if (pLVar28 == (List_1_RTG_MeshVertexChunk_ *)0x0) break;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pLVar28,(Object *)pMStack_17,
                         MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
                        );
            }
          }
        }
      }
    }
code_?:
    func_?();
    func_?();
    pcVar35 = (code *)swi(3);
    bVar9 = (*pcVar35)();
    return bVar9;
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return 0;
}


/* List`1[RTG.MeshVertexChunk] GetWorldChunksHoveredByPoint(Vector3, Matrix4x4, Camera) */

List_1_RTG_MeshVertexChunk_ *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::
MeshVertexChunkCollection_GetWorldChunksHoveredByPoint
          (MeshVertexChunkCollection *this,Vector3 hoverPoint,Matrix4x4 worldMtx,Camera *camera,
          MethodInfo *method)

{
  pMVar1 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
    cRam_? = '\x01';
  }
  LStack_2._list = (List_1_System_Object_ *)0x0;
  LStack_2._index = 0;
  LStack_2._version = 0;
  LStack_2._current = (Object *)0x0;
  uVar3._0_4_ = (MethodInfo *)0x0;
  uVar3._4_4_ = 0.0;
  this_01 = (List_1_RTG_MeshVertexChunk_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
  pLVar4 = this_01;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List__);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._vertexChunks;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&pLStack_6,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                       );
    LStack_2._list = (List_1_System_Object_ *)pLVar5->_list;
    LStack_2._index = pLVar5->_index;
    LStack_2._version = pLVar5->_version;
    LStack_2._current = *(Object **)&pLVar5->_current;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_2,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                        );
      item = LStack_2._current;
      if (bVar7 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_2,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__Dispose__
                   ,(MethodInfo *)uVar3);
        *unaff_FS_OFFSET = pMVar1;
        return this_01;
      }
      if ((RegexCharClass_SingleRange)LStack_2._current == (RegexCharClass_SingleRange)0x0) break;
      uVar3 = *(undefined8 *)((int)LStack_2._current + 0x1c);
      AABB::AABB_Transform
                ((AABB *)&stack0xffffff8c,worldMtx,*(MethodInfo **)((int)LStack_2._current + 0x18))
      ;
      this_01 = pLVar4;
      pRVar8 = AABB::AABB_GetScreenRectangle
                         (&RStack_9,(AABB *)&stack0xffffff8c,camera,(MethodInfo *)0x0);
      pLStack_6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   pRVar8->m_XMin;
      fStack_10 = pRVar8->m_YMin;
      puStack_11 = (undefined *)pRVar8->m_Width;
      fVar12 = pRVar8->m_Height;
      if (((0.0 <= (float)puStack_11) || ((float)pLStack_6 < hoverPoint.x)) ||
         (hoverPoint.x <= (float)puStack_11 + (float)pLStack_6)) {
        if (((float)puStack_11 < 0.0) || (hoverPoint.x < (float)pLStack_6)) {
          bVar13 = false;
        }
        else {
          bVar13 = hoverPoint.x < (float)puStack_11 + (float)pLStack_6;
        }
      }
      else {
        bVar13 = true;
      }
      if (((0.0 <= fVar12) || (fStack_10 < hoverPoint.y)) || (hoverPoint.y <= fVar12 + fStack_10)) {
        if ((fVar12 < 0.0) || (hoverPoint.y < fStack_10)) {
          bVar14 = false;
        }
        else {
          bVar14 = hoverPoint.y < fVar12 + fStack_10;
        }
      }
      else {
        bVar14 = true;
      }
      pLVar4 = this_01;
      if ((bool)(bVar14 & bVar13)) {
        if (this_01 == (List_1_RTG_MeshVertexChunk_ *)0x0) break;
        pMVar1 = 
        MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
        ;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,item,
                   MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
                  );
      }
    }
  }
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  pLVar4 = (List_1_RTG_MeshVertexChunk_ *)(*pcVar15)();
  return pLVar4;
}


/* MeshVertexChunk GetWorldVertChunkClosestToScreenPt(Vector2, Matrix4x4, Camera) */

MeshVertexChunk *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::
MeshVertexChunkCollection_GetWorldVertChunkClosestToScreenPt
          (MeshVertexChunkCollection *this,Vector2 screenPoint,Matrix4x4 worldMtx,Camera *camera,
          MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._vertexChunks;
  LStack_7._current.y = 0.0;
  RStack_8.First = 0;
  RStack_8.Last = 0;
  LStack_7._list = (List_1_UnityEngine_Vector2_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current.x = 0.0;
  fStack_9 = _UNK_?;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_11,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                       );
    uStack_12 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar10->_list;
    LStack_6._index = pLVar10->_index;
    LStack_6._version = pLVar10->_version;
    LStack_6._current = *(Object **)&pLVar10->_current;
    pLStack_13 = &LStack_6;
    uStack_1 = 0;
    while( true ) {
      uStack_1._0_1_ = 1;
      bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                        );
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pLStack_13,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__Dispose__
                   ,in_stack_15);
        *unaff_FS_OFFSET = uStack_3;
        return (MeshVertexChunk *)RStack_8;
      }
      RVar16 = (RegexCharClass_SingleRange)LStack_6._current;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      method_00 = *(MethodInfo **)((int)LStack_6._current + 0x14);
      AABB::AABB_Transform((AABB *)&stack0xffffff70,worldMtx,(MethodInfo *)0x0);
      this_01 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                AABB::AABB_GetScreenCenterAndCornerPoints
                          ((AABB *)&stack0xffffff70,camera,(MethodInfo *)0x0);
      if (this_01 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
               XmlSchemaObjectTable+XmlSchemaObjectEntry]::
               List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__GetEnumerator
                         (&LStack_18,this_01,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__GetEnumerator__
                         );
      LStack_11._version = 0;
      LStack_7._list = (List_1_UnityEngine_Vector2_ *)pLVar17->_list;
      LStack_7._index = pLVar17->_index;
      LStack_7._version = pLVar17->_version;
      LStack_7._current.x = (float)(pLVar17->_current).qname;
      LStack_7._current.y = (float)(pLVar17->_current).xso;
      uStack_1._0_1_ = 3;
      LStack_11._current = (RegexCharClass_SingleRange)&LStack_7;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::
                Vector2]::List_1_T_Enumerator_UnityEngine_Vector2__MoveNext
                          (&LStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__MoveNext__
                          );
        if (bVar14 == 0) break;
        fVar19 = (LStack_7._current.y - screenPoint.y) * (LStack_7._current.y - screenPoint.y) +
                (LStack_7._current.x - screenPoint.x) * (LStack_7._current.x - screenPoint.x);
        if (fVar19 < fStack_9) {
          RStack_8 = RVar16;
          fStack_9 = fVar19;
        }
      }
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__Dispose__
                 ,method_00);
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  pMVar21 = (MeshVertexChunk *)(*pcVar20)();
  return pMVar21;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::
MeshVertexChunkCollection_System_Collections_IEnumerable_GetEnumerator
          (MeshVertexChunkCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._vertexChunks;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    RStack_6 = pLVar1->_current;
    pIVar7 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>
                             ,&pLStack_3);
    return pIVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IEnumerator *)(*pcVar8)();
  return pIVar7;
}


/* MeshVertexChunkCollection() */

void Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::MeshVertexChunkCollection__ctor
               (MeshVertexChunkCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,0x32,
             MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List_int_);
  method_00 = (MethodInfo *)&(this->fields)._vertexChunks;
  (this->fields)._vertexChunks = (List_1_RTG_MeshVertexChunk_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::MeshVertexChunkCollection_get_Count
                  (MeshVertexChunkCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._vertexChunks;
  if (pLVar2 != (List_1_RTG_MeshVertexChunk_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* MeshVertexChunk get_Item(Int32) */

MeshVertexChunk *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::MeshVertexChunkCollection_get_Item
          (MeshVertexChunkCollection *this,int32_t chunkIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._vertexChunks;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,chunkIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__get_Item_int_
                      );
    return (MeshVertexChunk *)RVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pMVar4 = (MeshVertexChunk *)(*pcVar3)();
  return pMVar4;
}

