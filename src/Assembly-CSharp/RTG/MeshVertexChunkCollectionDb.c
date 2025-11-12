
/* Boolean CreateMeshVertChunkCollection(Mesh) */

bool Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::
     MeshVertexChunkCollectionDb_CreateMeshVertChunkCollection
               (MeshVertexChunkCollectionDb *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Add_UnityEngine__Mesh__RTG__MeshVertexChunkCollection_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MeshVertexChunkCollection);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (MeshVertexChunkCollection *)FUN_?(TypeInfo__RTG__MeshVertexChunkCollection);
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
  uVar4 = 0xADDR;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  iVar10 = iRam_?;
  (this_01->fields)._vertexChunks = pLVar1;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(this_01->fields)._vertexChunks >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  bVar11 = MeshVertexChunkCollection::MeshVertexChunkCollection_FromMesh
                    (this_01,mesh,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    bVar11 = 0;
  }
  else {
    this_00 = (this->fields)._meshToVChunkCollection;
    if (this_00 == (Dictionary_2_UnityEngine_Mesh_RTG_MeshVertexChunkCollection_ *)0x0) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      bVar11 = (*pcVar12)();
      return bVar11;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)mesh,(Object *)this_01
               ,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Add_UnityEngine__Mesh__RTG__MeshVertexChunkCollection_
               ->klass->rgctx_data[0x22].method);
    bVar11 = 1;
  }
  return bVar11;
}


/* Boolean HasChunkCollectionForMesh(Mesh) */

bool Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::
     MeshVertexChunkCollectionDb_HasChunkCollectionForMesh
               (MeshVertexChunkCollectionDb *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__ContainsKey_UnityEngine__Mesh_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._meshToVChunkCollection;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)mesh,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__ContainsKey_UnityEngine__Mesh_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void SetMeshDirty(Mesh) */

void Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::MeshVertexChunkCollectionDb_SetMeshDirty
               (MeshVertexChunkCollectionDb *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__TryGetValue_UnityEngine__Mesh__RTG__MeshVertexChunkCollection__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._meshToVChunkCollection;
  pMStackX_8 = (MeshVertexChunkCollection *)0x0;
  if (this_00 != (Dictionary_2_UnityEngine_Mesh_RTG_MeshVertexChunkCollection_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)mesh,
                       (Object **)&pMStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__TryGetValue_UnityEngine__Mesh__RTG__MeshVertexChunkCollection__
                      );
    if (bVar1 != 0) {
      if (pMStackX_8 == (MeshVertexChunkCollection *)0x0) goto code_?;
      MeshVertexChunkCollection::MeshVertexChunkCollection_FromMesh
                (pMStackX_8,mesh,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MeshVertexChunkCollectionDb() */

void Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::MeshVertexChunkCollectionDb__ctor
               (MeshVertexChunkCollectionDb *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>__Singleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._meshToVChunkCollection =
       (Dictionary_2_UnityEngine_Mesh_RTG_MeshVertexChunkCollection_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* MeshVertexChunkCollection get_Item(Mesh) */

MeshVertexChunkCollection *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::MeshVertexChunkCollectionDb_get_Item
          (MeshVertexChunkCollectionDb *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__get_Item_UnityEngine__Mesh_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__ContainsKey_UnityEngine__Mesh_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._meshToVChunkCollection;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)mesh,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__ContainsKey_UnityEngine__Mesh_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      bVar3 = MeshVertexChunkCollectionDb_CreateMeshVertChunkCollection(this,mesh,(MethodInfo *)0x0)
      ;
      if (bVar3 == 0) {
        return (MeshVertexChunkCollection *)0x0;
      }
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields)._meshToVChunkCollection;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)mesh,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__get_Item_UnityEngine__Mesh_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  ((Object *)mesh,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pMVar6 = (MeshVertexChunkCollection *)(*pcVar5)();
        return pMVar6;
      }
      pDVar7 = (pDVar1->fields)._entries;
      if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                     *)0x0) {
        if (uVar4 < (uint)pDVar7->max_length) {
          return (MeshVertexChunkCollection *)pDVar7->vector[(int)uVar4].value;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        pMVar6 = (MeshVertexChunkCollection *)(*pcVar5)();
        return pMVar6;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      pMVar6 = (MeshVertexChunkCollection *)(*pcVar5)();
      return pMVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pMVar6 = (MeshVertexChunkCollection *)(*pcVar5)();
  return pMVar6;
}

