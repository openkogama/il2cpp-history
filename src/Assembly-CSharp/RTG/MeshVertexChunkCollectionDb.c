
/* Boolean CreateMeshVertChunkCollection(Mesh) */

bool Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::
     MeshVertexChunkCollectionDb_CreateMeshVertChunkCollection
               (MeshVertexChunkCollectionDb *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Add_UnityEngine__Mesh__RTG__MeshVertexChunkCollection_
                   );
    func_?(&TypeInfo__RTG__MeshVertexChunkCollection);
    cRam_? = '\x01';
  }
  this_01 = (MeshVertexChunkCollection *)func_?(TypeInfo__RTG__MeshVertexChunkCollection);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
    cRam_? = '\x01';
  }
  this_02 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_02,0x32,
             MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List_int_);
  method_00 = (MethodInfo *)&(this_01->fields)._vertexChunks;
  (this_01->fields)._vertexChunks = (List_1_RTG_MeshVertexChunk_ *)this_02;
  func_?(method_00,this_02);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this_01,ExceptionArgument__Enum_obj,method_00);
  bVar1 = MeshVertexChunkCollection::MeshVertexChunkCollection_FromMesh
                    (this_01,mesh,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields)._meshToVChunkCollection;
    if (this_00 != (Dictionary_2_UnityEngine_Mesh_RTG_MeshVertexChunkCollection_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)mesh,
                 (Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Add_UnityEngine__Mesh__RTG__MeshVertexChunkCollection_
                );
      return 1;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  return 0;
}


/* Boolean HasChunkCollectionForMesh(Mesh) */

bool Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::
     MeshVertexChunkCollectionDb_HasChunkCollectionForMesh
               (MeshVertexChunkCollectionDb *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._meshToVChunkCollection;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)mesh,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__ContainsKey_UnityEngine__Mesh_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void SetMeshDirty(Mesh) */

void Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::MeshVertexChunkCollectionDb_SetMeshDirty
               (MeshVertexChunkCollectionDb *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__TryGetValue_UnityEngine__Mesh__RTG__MeshVertexChunkCollection__
                   );
    cRam_? = '\x01';
  }
  pMStack_1 = (MeshVertexChunkCollection *)0x0;
  this_00 = (this->fields)._meshToVChunkCollection;
  if (this_00 != (Dictionary_2_UnityEngine_Mesh_RTG_MeshVertexChunkCollection_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)mesh,
                       (Object **)&pMStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__TryGetValue_UnityEngine__Mesh__RTG__MeshVertexChunkCollection__
                      );
    this_01 = pMStack_1;
    if (bVar2 != 0) {
      if (pMStack_1 == (MeshVertexChunkCollection *)0x0) goto code_?;
      MeshVertexChunkCollection::MeshVertexChunkCollection_FromMesh(this_01,mesh,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MeshVertexChunkCollectionDb() */

void Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::MeshVertexChunkCollectionDb__ctor
               (MeshVertexChunkCollectionDb *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>
                   );
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Dictionary__
            );
  (this->fields)._meshToVChunkCollection =
       (Dictionary_2_UnityEngine_Mesh_RTG_MeshVertexChunkCollection_ *)this_00;
  func_?(&this->fields,this_00);
  if ((TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>__Singleton__);
  return;
}


/* MeshVertexChunkCollection get_Item(Mesh) */

MeshVertexChunkCollection *
Assembly-CSharp.dll::RTG::MeshVertexChunkCollectionDb::MeshVertexChunkCollectionDb_get_Item
          (MeshVertexChunkCollectionDb *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__get_Item_UnityEngine__Mesh_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__ContainsKey_UnityEngine__Mesh_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._meshToVChunkCollection;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)mesh,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__ContainsKey_UnityEngine__Mesh_
                      );
    if (bVar2 == 0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Add_UnityEngine__Mesh__RTG__MeshVertexChunkCollection_
                       );
        func_?(&TypeInfo__RTG__MeshVertexChunkCollection);
        cRam_? = '\x01';
      }
      pMVar3 = (MeshVertexChunkCollection *)
               func_?(TypeInfo__RTG__MeshVertexChunkCollection);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List_int_
                       );
        func_?(&TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>);
        cRam_? = '\x01';
      }
      this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>
                                  );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this_01,0x32,
                 MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__List_int_);
      (pMVar3->fields)._vertexChunks = (List_1_RTG_MeshVertexChunk_ *)this_01;
      func_?(&(pMVar3->fields)._vertexChunks,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pMVar3,ExceptionArgument__Enum_obj,in_stack_4);
      bVar2 = MeshVertexChunkCollection::MeshVertexChunkCollection_FromMesh
                        (pMVar3,mesh,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return (MeshVertexChunkCollection *)0x0;
      }
      this_00 = (this->fields)._meshToVChunkCollection;
      if (this_00 == (Dictionary_2_UnityEngine_Mesh_RTG_MeshVertexChunkCollection_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)mesh,
                 (Object *)pMVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__Add_UnityEngine__Mesh__RTG__MeshVertexChunkCollection_
                );
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._meshToVChunkCollection;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)mesh,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::MeshVertexChunkCollection>__get_Item_UnityEngine__Mesh_
                        );
      return (MeshVertexChunkCollection *)TVar5.m_Index;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar3 = (MeshVertexChunkCollection *)(*pcVar6)();
  return pMVar3;
}

