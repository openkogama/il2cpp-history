
/* Boolean FromMesh(Mesh) */

bool Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::MeshVertexChunkCollection_FromMesh
               (MeshVertexChunkCollection *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Add_RTG__MeshVertexChunkCollection__VertexChunkIndices__System__Collections__Generic__List<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__ContainsKey_RTG__MeshVertexChunkCollection__VertexChunkIndices_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Item_RTG__MeshVertexChunkCollection__VertexChunkIndices_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MeshVertexChunk);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aDStack_1[0]._dictionary =
       (Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_ *)0x0;
  aDStack_1[0]._version = 0;
  aDStack_1[0]._index = 0;
  aDStack_1[0]._current.key._XIndex = 0;
  aDStack_1[0]._current.key._YIndex = 0;
  aDStack_1[0]._current.key._ZIndex = 0;
  aDStack_1[0]._current._12_4_ = 0;
  aDStack_1[0]._current.value = (Object *)0x0;
  aDStack_1[0]._getEnumeratorRetType = 0;
  aDStack_1[0]._44_4_ = 0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (mesh != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (((mesh->fields)._.m_CachedPtr != (void *)0x0) &&
       (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_isReadable
                          (mesh,(MethodInfo *)0x0), bVar2 != 0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds_1
                (mesh,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_3 = 0;
      uStack_4 = (Dictionary_2_TKey_TValue_Enumerator_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_
                    *)0x0;
      uStack_5 = 0;
      pvVar6 = (mesh->fields)._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)mesh,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        bVar2 = (*pcVar7)();
        return bVar2;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        bVar2 = (*pcVar7)();
        return bVar2;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6);
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                          (mesh,(MethodInfo *)0x0);
      fVar10 = (uStack_4._4_4_ + uStack_4._4_4_) * _UNK_?;
      fVar11 = ((float)uStack_5 + (float)uStack_5) * _UNK_?;
      fVar12 = (uStack_5._4_4_ + uStack_5._4_4_) * _UNK_?;
      pVStack_13 = pVVar9;
      this_00 = (Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>
                             );
      pEVar14 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[RTG::
                MeshVertexChunkCollection+VertexChunkIndices]::
                EqualityComparer_1_RTG_MeshVertexChunkCollection_VertexChunkIndices__get_Default
                          (MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Dictionary__
                           ->klass->rgctx_data->method->klass->rgctx_data[3].method);
      uVar15 = 0;
      if ((pEVar14 != (EqualityComparer_1_RTG_MeshVertexChunkCollection_VertexChunkIndices_ *)0x0)
         && ((this_00->fields)._comparer =
                  (IEqualityComparer_1_RTG_MeshVertexChunkCollection_VertexChunkIndices_ *)0x0,
            iRam_? != 0)) {
        uVar16 = (uint)((ulonglong)&(this_00->fields)._comparer >> 0xc);
        uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
        do {
          uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
          puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
          LOCK();
          bVar20 = uVar18 == *puVar19;
          if (bVar20) {
            *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
          }
          UNLOCK();
        } while (!bVar20);
      }
      if (pVVar9 != (Vector3__Array *)0x0) {
        pVVar21 = pVVar9->vector;
        for (; (int)uVar15 < (int)pVVar9->max_length; uVar15 = uVar15 + 1) {
          if ((uint)pVVar9->max_length <= uVar15) {
            FUN_?();
            goto code_?;
          }
          uVar8._0_4_ = pVVar21->x;
          uVar8._4_4_ = pVVar21->y;
          fVar22 = pVVar21->z;
          uStack_3 = uVar8;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          cVar23 = cRam_?;
          dVar24 = (double)func_?(SUB84((double)((float)(undefined4)uVar8 / fVar10),0))
          ;
          iVar25 = (int)dVar24;
          fVar26 = uStack_3._4_4_ / fVar11;
          if (cVar23 == '\0') {
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cVar23 = '\x01';
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
            cVar23 = cRam_?;
          }
          dVar24 = (double)func_?(SUB84((double)fVar26,0));
          iVar27 = (int)dVar24;
          if (cVar23 == '\0') {
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          dVar24 = (double)func_?(SUB84((double)(fVar22 / fVar12),0));
          iVar28 = (int)dVar24;
          if (this_00 ==
              (Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_ *)0x0)
          goto code_?;
          MStack_29._YIndex = iVar27;
          MStack_29._XIndex = iVar25;
          iStack_30 = iVar25;
          iStack_31 = iVar27;
          MStack_29._ZIndex = iVar28;
          iVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[RTG::
                   MeshVertexChunkCollection+VertexChunkIndices,System::Object]::
                   Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object__FindEntry
                             (this_00,&MStack_29,
                              MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__ContainsKey_RTG__MeshVertexChunkCollection__VertexChunkIndices_
                              ->klass->rgctx_data[0x21].method);
          if (iVar32 < 0) {
            iStack_33 = iVar25;
            iStack_34 = iVar27;
            value = (Object *)
                    FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                 );
            FUN_?(value,0x32,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                         );
            MStack_35._YIndex = iStack_34;
            MStack_35._XIndex = iStack_33;
            in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
            MStack_35._ZIndex = iVar28;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[RTG::
            MeshVertexChunkCollection+VertexChunkIndices,System::Object]::
            Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object__TryInsert
                      (this_00,&MStack_35,value,(InsertionBehavior__Enum)in_R9,
                       MethodInfo__System__Collections__Generic__Dictionary<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__Add_RTG__MeshVertexChunkCollection__VertexChunkIndices__System__Collections__Generic__List<UnityEngine::Vector3>_
                       ->klass->rgctx_data[0x22].method);
            uStack_36 = CONCAT44(iVar27,iVar25);
            iStack_37 = iVar25;
            iStack_38 = iVar27;
            iStack_39 = iVar28;
            lVar40 = FUN_?(this_00,&uStack_36);
            if (lVar40 == 0) goto code_?;
            puVar41 = &uStack_42;
            uStack_42 = uVar8;
            fStack_43 = fVar22;
          }
          else {
            uStack_44 = CONCAT44(iVar27,iVar25);
            iStack_45 = iVar25;
            iStack_46 = iVar27;
            iStack_47 = iVar28;
            lVar40 = FUN_?(this_00,&uStack_44);
            if (lVar40 == 0) goto code_?;
            puVar41 = &uStack_48;
            uStack_48 = uVar8;
            fStack_49 = fVar22;
          }
          FUN_?(lVar40,puVar41,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
          pVVar21 = pVVar21 + 1;
          pVVar9 = pVStack_13;
        }
        if (this_00 !=
            (Dictionary_2_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_ *)0x0) {
          if ((this_00->fields)._count == (this_00->fields)._freeCount) {
            return 0;
          }
          (this->fields)._mesh = mesh;
          if (iRam_? != 0) {
            uVar15 = (uint)((ulonglong)&this->fields >> 0xc);
            uVar17 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
            do {
              uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
              puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
              LOCK();
              bVar20 = uVar18 == *puVar19;
              if (bVar20) {
                *puVar19 = uVar18 | 1L << (uVar15 & 0x3f);
              }
              UNLOCK();
            } while (!bVar20);
          }
          pLVar50 = (this->fields)._vertexChunks;
          if (pLVar50 != (List_1_RTG_MeshVertexChunk_ *)0x0) {
            piVar51 = &(pLVar50->fields)._version;
            *piVar51 = *piVar51 + 1;
            iVar32 = (pLVar50->fields)._size;
            (pLVar50->fields)._size = 0;
            if (0 < iVar32) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar50->fields)._items,0,iVar32,(MethodInfo *)0x0);
            }
            uStack_5 = 0;
            uStack_52 = 0;
            if (iRam_? != 0) {
              uVar15 = (uint)((ulonglong)&uStack_3 >> 0xc);
              uVar17 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar20 = uVar18 == *puVar19;
                if (bVar20) {
                  *puVar19 = uVar18 | 1L << (uVar15 & 0x3f);
                }
                UNLOCK();
              } while (!bVar20);
            }
            uStack_4 = (Dictionary_2_TKey_TValue_Enumerator_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object_
                          *)(ulonglong)(uint)(this_00->fields)._version;
            uStack_53 = 2;
            uStack_54 = 0;
            aDStack_1[0]._version = (undefined4)uStack_4;
            aDStack_1[0]._index = (int32_t)uStack_4._4_4_;
            aDStack_1[0]._current.key._XIndex = 0;
            aDStack_1[0]._current.key._YIndex = 0;
            aDStack_1[0]._current.key._ZIndex = 0;
            aDStack_1[0]._current._12_4_ = 0;
            aDStack_1[0]._current.value = (Object *)0x0;
            aDStack_1[0]._getEnumeratorRetType = 2;
            aDStack_1[0]._44_4_ = 0;
            uStack_3 = 0;
            uStack_4 = aDStack_1;
            aDStack_1[0]._dictionary = this_00;
            while( true ) {
              do {
                bVar2 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[RTG::
                        MeshVertexChunkCollection+VertexChunkIndices,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_RTG_MeshVertexChunkCollection_VertexChunkIndices_System_Object__MoveNext
                                  (aDStack_1,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::MeshVertexChunkCollection::VertexChunkIndices,_System::Collections::Generic::List<UnityEngine::Vector3>_>__MoveNext__
                                  );
                if (bVar2 == 0) {
                  return 1;
                }
                pLStack_55 = (List_1_UnityEngine_Vector3_ *)aDStack_1[0]._current.value;
                if ((List_1_UnityEngine_Vector3_ *)aDStack_1[0]._current.value ==
                    (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
              } while (((List_1_UnityEngine_Vector3___Fields *)
                       ((longlong)aDStack_1[0]._current.value + 0x10))->_size == 0);
              pLVar50 = (this->fields)._vertexChunks;
              mesh_00 = (this->fields)._mesh;
              this_01 = (MeshVertexChunk *)FUN_?(TypeInfo__RTG__MeshVertexChunk);
              MeshVertexChunk::MeshVertexChunk__ctor(this_01,pLStack_55,mesh_00,(MethodInfo *)0x0);
              if (pLVar50 == (List_1_RTG_MeshVertexChunk_ *)0x0) break;
              FUN_?(pLVar50,this_01);
            }
code_?:
            FUN_?();
code_?:
            FUN_?();
            FUN_?();
            pcVar7 = (code *)swi(3);
            bVar2 = (*pcVar7)();
            return bVar2;
          }
        }
      }
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      bVar2 = (*pcVar7)();
      return bVar2;
    }
  }
  return 0;
}


/* List`1[RTG.MeshVertexChunk] GetWorldChunksHoveredByPoint(Vector3, Matrix4x4, Camera) */

List_1_RTG_MeshVertexChunk_ *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::
MeshVertexChunkCollection_GetWorldChunksHoveredByPoint
          (MeshVertexChunkCollection *this,Vector3 *hoverPoint,Matrix4x4 *worldMtx,Camera *camera,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_MeshVertexChunk_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List__);
  pLVar1 = (this->fields)._vertexChunks;
  if (pLVar1 == (List_1_RTG_MeshVertexChunk_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pLStack_3 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    lStack_8 = (ulonglong)(uint)(pLVar1->fields)._version << 0x20;
    uStack_9 = 0;
    LStack_10._index = (undefined4)lStack_8;
    LStack_10._version = lStack_8._4_4_;
    LStack_10._current = (Object *)0x0;
    uStack_11 = 0;
    pLStack_12 = &LStack_10;
    pLStack_3 = pLVar1;
    LStack_10._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                        );
      pOVar14 = LStack_10._current;
      if (bVar13 == 0) {
        return this_00;
      }
      if (LStack_10._current == (Object *)0x0) break;
      AStack_15._size.x = *(float *)&LStack_10._current[1].monitor;
      AStack_15._size.y = *(float *)((longlong)&LStack_10._current[1].monitor + 4);
      AStack_15._size.z = *(float *)&LStack_10._current[2].klass;
      AStack_15._center.x = *(float *)((longlong)&LStack_10._current[2].klass + 4);
      AStack_15._center.y = SUB84(LStack_10._current[2].monitor,0);
      AStack_15._center.z = (float)((ulonglong)LStack_10._current[2].monitor >> 0x20);
      AStack_15._24_4_ = *(undefined4 *)&LStack_10._current[3].klass;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__BoxMath);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      MStack_16.m00 = worldMtx->m00;
      MStack_16.m10 = worldMtx->m10;
      MStack_16.m20 = worldMtx->m20;
      MStack_16.m30 = worldMtx->m30;
      MStack_16.m01 = worldMtx->m01;
      MStack_16.m11 = worldMtx->m11;
      MStack_16.m21 = worldMtx->m21;
      MStack_16.m31 = worldMtx->m31;
      MStack_16.m02 = worldMtx->m02;
      MStack_16.m12 = worldMtx->m12;
      MStack_16.m22 = worldMtx->m22;
      MStack_16.m32 = worldMtx->m32;
      MStack_16.m03 = worldMtx->m03;
      MStack_16.m13 = worldMtx->m13;
      MStack_16.m23 = worldMtx->m23;
      MStack_16.m33 = worldMtx->m33;
      VStack_17.y = AStack_15._size.y;
      VStack_17.x = AStack_15._size.x;
      VStack_17.z = AStack_15._size.z;
      VStack_18.y = AStack_15._center.y;
      VStack_18.x = AStack_15._center.x;
      VStack_18.z = AStack_15._center.z;
      BoxMath::BoxMath_TransformBox
                (&VStack_18,&VStack_17,&MStack_16,&AStack_15._center,&AStack_15._size,
                 (MethodInfo *)0x0);
      pRVar19 = AABB::AABB_GetScreenRectangle
                         ((Rect *)&pLStack_3,&AStack_15,camera,(MethodInfo *)0x0);
      fStack_20 = pRVar19->m_XMin;
      fStack_21 = pRVar19->m_YMin;
      fStack_22 = pRVar19->m_Width;
      fStack_23 = pRVar19->m_Height;
      uVar24 = hoverPoint->x;
      uVar25 = hoverPoint->y;
      if (((0.0 <= fStack_22) || (fStack_20 < (float)uVar24)) ||
         ((float)uVar24 <= fStack_22 + fStack_20)) {
        bVar7 = false;
        if ((0.0 <= fStack_22) && (fStack_20 <= (float)uVar24)) {
          bVar7 = (float)uVar24 < fStack_22 + fStack_20;
        }
      }
      else {
        bVar7 = true;
      }
      if (((0.0 <= fStack_23) || (fStack_21 < (float)uVar25)) ||
         ((float)uVar25 <= fStack_23 + fStack_21)) {
        if ((fStack_23 < 0.0) || ((float)uVar25 < fStack_21)) {
          bVar26 = false;
        }
        else {
          bVar26 = (float)uVar25 < fStack_23 + fStack_21;
        }
      }
      else {
        bVar26 = true;
      }
      if ((bool)(bVar26 & bVar7)) {
        if (this_00 == (List_1_RTG_MeshVertexChunk_ *)0x0) goto code_?;
        FUN_?(this_00,pOVar14);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar27 = (code *)swi(3);
  pLVar1 = (List_1_RTG_MeshVertexChunk_ *)(*pcVar27)();
  return pLVar1;
}


/* MeshVertexChunk GetWorldVertChunkClosestToScreenPt(Vector2, Matrix4x4, Camera) */

MeshVertexChunk *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::
MeshVertexChunkCollection_GetWorldVertChunkClosestToScreenPt
          (MeshVertexChunkCollection *this,Vector2 screenPoint,Matrix4x4 *worldMtx,Camera *camera,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  pLStack_2 = (List_1_UnityEngine_Vector2_ *)0x0;
  lStack_3 = 0;
  uStack_4 = 0;
  pMStack_5 = (MeshVertexChunk *)0x0;
  pLVar6 = (this->fields)._vertexChunks;
  if (pLVar6 == (List_1_RTG_MeshVertexChunk_ *)0x0) {
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
      uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                  ((ulonglong)(uint)(pLVar6->fields)._version << 0x20);
    uStack_14 = 0;
    LStack_15._8_8_ = pLStack_13;
    LStack_15._current = (Object *)0x0;
    uStack_8 = 0;
    pLStack_13 = &LStack_15;
    fStack_16 = screenPoint.x;
    fStack_17 = screenPoint.y;
    LStack_15._list = (List_1_System_Object_ *)pLVar6;
    while( true ) {
      bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_15,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                        );
      if (bVar18 == 0) {
        return pMStack_5;
      }
      pMVar19 = (MeshVertexChunk *)LStack_15._current;
      if ((MeshVertexChunk *)LStack_15._current == (MeshVertexChunk *)0x0) break;
      AStack_20._size.x = *(float *)&LStack_15._current[1].monitor;
      AStack_20._size.y = *(float *)((longlong)&LStack_15._current[1].monitor + 4);
      AStack_20._8_8_ =
           *(undefined8 *)
            &(((MeshVertexChunk__Fields *)((longlong)LStack_15._current + 0x10))->_modelSpaceAABB).
             _size.z;
      AStack_20._center.y = *(float *)&LStack_15._current[2].monitor;
      AStack_20._center.z = *(float *)((longlong)&LStack_15._current[2].monitor + 4);
      AStack_20._isValid = *(bool *)&LStack_15._current[3].klass;
      AStack_20._25_3_ = *(undefined3 *)((longlong)&LStack_15._current[3].klass + 1);
      MStack_21.m00 = worldMtx->m00;
      MStack_21.m10 = worldMtx->m10;
      MStack_21.m20 = worldMtx->m20;
      MStack_21.m30 = worldMtx->m30;
      MStack_21.m01 = worldMtx->m01;
      MStack_21.m11 = worldMtx->m11;
      MStack_21.m21 = worldMtx->m21;
      MStack_21.m31 = worldMtx->m31;
      MStack_21.m02 = worldMtx->m02;
      MStack_21.m12 = worldMtx->m12;
      MStack_21.m22 = worldMtx->m22;
      MStack_21.m32 = worldMtx->m32;
      MStack_21.m03 = worldMtx->m03;
      MStack_21.m13 = worldMtx->m13;
      MStack_21.m23 = worldMtx->m23;
      MStack_21.m33 = worldMtx->m33;
      AABB::AABB_Transform(&AStack_20,&MStack_21,(MethodInfo *)0x0);
      pLVar22 = AABB::AABB_GetScreenCenterAndCornerPoints(&AStack_20,camera,(MethodInfo *)0x0);
      if (pLVar22 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pLStack_23 >> 0xc);
        uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (ulonglong)(uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      uVar7 = (pLVar22->fields)._version;
      lStack_24 = (ulonglong)uVar7 << 0x20;
      uStack_25 = 0;
      lStack_3 = (ulonglong)uVar7 << 0x20;
      uStack_4 = 0;
      uStack_26 = 0;
      ppLStack_27 = &pLStack_2;
      pLStack_23 = pLVar22;
      pLStack_2 = pLVar22;
      while (cVar28 = FUN_?(&pLStack_2,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__MoveNext__
                                  ), cVar28 != '\0') {
        fVar29 = (uStack_4._4_4_ - fStack_17) * (uStack_4._4_4_ - fStack_17) +
                 ((float)uStack_4 - fStack_16) * ((float)uStack_4 - fStack_16);
        if (fVar29 < fVar1) {
          fVar1 = fVar29;
          pMStack_5 = pMVar19;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar30 = (code *)swi(3);
  pMVar19 = (MeshVertexChunk *)(*pcVar30)();
  return pMVar19;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::
MeshVertexChunkCollection_System_Collections_IEnumerable_GetEnumerator
          (MeshVertexChunkCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._vertexChunks;
  if (pLVar1 == (List_1_RTG_MeshVertexChunk_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (pLVar1->fields)._version;
  uStack_10 = 0;
  lStack_11 = (ulonglong)uStack_9 << 0x20;
  uStack_5._0_4_ = SUB84(pLVar1,0);
  uStack_5._4_4_ = (undefined4)((ulonglong)pLVar1 >> 0x20);
  uStack_12 = 0;
  uStack_13 = (undefined4)uStack_5;
  uStack_14 = uStack_5._4_4_;
  uStack_15 = 0;
  uStack_5 = pLVar1;
  pIVar3 = (IEnumerator *)
           FUN_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>
                         ,&uStack_13);
  return pIVar3;
}


/* MeshVertexChunkCollection() */

void Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::MeshVertexChunkCollection__ctor
               (MeshVertexChunkCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_MeshVertexChunk_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pMVar3 = (MeshVertexChunk__Array *)FUN_?(pvVar2,0x32);
  (pLVar1->fields)._items = pMVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields)._vertexChunks = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._vertexChunks >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::MeshVertexChunkCollection_get_Count
                  (MeshVertexChunkCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._vertexChunks;
  if (pLVar1 != (List_1_RTG_MeshVertexChunk_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* MeshVertexChunk get_Item(Int32) */

MeshVertexChunk *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollection::MeshVertexChunkCollection_get_Item
          (MeshVertexChunkCollection *this,int32_t chunkIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._vertexChunks;
  if (pLVar1 != (List_1_RTG_MeshVertexChunk_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)chunkIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pMVar3 = (MeshVertexChunk *)(*pcVar2)();
      return pMVar3;
    }
    pMVar4 = (pLVar1->fields)._items;
    if (pMVar4 != (MeshVertexChunk__Array *)0x0) {
      if ((uint)chunkIndex < (uint)pMVar4->max_length) {
        return pMVar4->vector[chunkIndex];
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pMVar3 = (MeshVertexChunk *)(*pcVar2)();
      return pMVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MeshVertexChunk *)(*pcVar2)();
  return pMVar3;
}

