
/* Void Remove() */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_Remove(FaceCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Vector2[] SetUVs(Edge, Boolean) */

Vector2__Array *
Assembly-CSharp.dll::FaceCursor::FaceCursor_SetUVs
          (FaceCursor *this,Edge__Enum edge,bool mirror,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  switch(edge) {
  case Edge__Enum_None:
    fStack_1 = 0.0;
    uStack_2 = 0;
    if (this_00 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      uStack_2 = 0;
      puStack_3 = (undefined *)0x0;
      fStack_1 = 1.0;
      uStack_4 = CONCAT44(0x3f800000,this_00);
      func_?();
      uStack_2 = 0x3f800000;
      fStack_1 = 1.0;
      func_?(this_00,0x3f800000,0x3f800000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      fStack_1 = 0.0;
code_?:
      uStack_2 = 0x3f800000;
code_?:
      func_?(this_00,fStack_1,uStack_2,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
code_?:
      pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
                ::MultiColumnCollectionHeader+ViewState+ColumnState]::
                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                          (this_00,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                          );
      return (Vector2__Array *)pMVar5;
    }
    break;
  case Edge__Enum_Front:
    uStack_2 = 0;
    fStack_1 = (float)mirror;
    if (this_00 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      uStack_2 = 0;
      puStack_3 = (undefined *)0x0;
      fStack_1 = (float)(mirror ^ 1);
      uStack_4 = CONCAT44(fStack_1,this_00);
      func_?();
      uStack_2 = 0x3f800000;
      fStack_1 = (float)(mirror ^ 1);
      func_?(this_00,fStack_1,0x3f800000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      uStack_2 = 0x3f800000;
      fStack_1 = (float)mirror;
      func_?(this_00,fStack_1,0x3f800000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      goto code_?;
    }
    break;
  case Edge__Enum_Back:
    uStack_2 = 0x3f800000;
    fStack_1 = (float)(mirror ^ 1);
    if (this_00 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      uStack_2 = 0x3f800000;
      puStack_3 = (undefined *)0x3f800000;
      fStack_1 = (float)mirror;
      uStack_4 = CONCAT44(fStack_1,this_00);
      func_?();
      uStack_2 = 0;
      fStack_1 = (float)mirror;
      func_?(this_00,fStack_1,0,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      mirror = mirror ^ 1;
code_?:
      uStack_2 = 0;
      fStack_1 = (float)mirror;
      goto code_?;
    }
    break;
  case Edge__Enum_Left:
    uStack_2 = 0;
    fStack_1 = (float)(mirror ^ 1);
    if (this_00 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      uStack_2 = 0x3f800000;
      puStack_3 = (undefined *)0x3f800000;
      fStack_1 = (float)(mirror ^ 1);
      uStack_4 = CONCAT44(fStack_1,this_00);
      func_?();
      uStack_2 = 0x3f800000;
      fStack_1 = (float)mirror;
      func_?(this_00,fStack_1,0x3f800000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      goto code_?;
    }
    break;
  case Edge__Enum_Right:
    uStack_2 = 0x3f800000;
    fStack_1 = (float)mirror;
    if (this_00 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      uStack_2 = 0;
      puStack_3 = (undefined *)0x0;
      fStack_1 = (float)mirror;
      uStack_4 = CONCAT44(fStack_1,this_00);
      func_?();
      uStack_2 = 0;
      fStack_1 = (float)(mirror ^ 1);
      func_?(this_00,fStack_1,0,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      fStack_1 = (float)(mirror ^ 1);
      goto code_?;
    }
    break;
  default:
    if (this_00 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
  }
  uVar6 = func_?();
  puVar7 = (undefined1 *)((ulonglong)uVar6 >> 0x20);
  iVar8 = (int)uVar6;
  piVar9 = &(this_00->fields)._version;
  *(byte *)piVar9 = (byte)*piVar9 ^ (byte)uVar6;
  if (extraout_ECX == 1) {
    *puVar7 = *puVar7;
    pcVar10 = (code *)swi(3);
    pVVar11 = (Vector2__Array *)(*pcVar10)();
    return pVVar11;
  }
  *(MethodInfo ***)((int)&uStack_2 + iVar8) =
       &
       UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
  ;
  puVar12 = (undefined1 *)((int)&fStack_1 + iVar8);
  *(undefined **)((int)&fStack_1 + iVar8) = &UNK_?;
  func_?();
  *(MethodInfo ***)(puVar12 + -4) =
       &
       UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
  ;
  puVar13 = puVar12 + -8;
  *(undefined **)(puVar12 + -8) = &UNK_?;
  func_?();
  *(MethodInfo ***)(puVar13 + -4) = &MethodInfo__System__Collections__Generic__List<int>__Add_int_;
  puVar14 = puVar13 + -8;
  *(undefined **)(puVar13 + -8) = &UNK_?;
  func_?();
  *(MethodInfo ***)(puVar14 + -4) = &MethodInfo__System__Collections__Generic__List<int>__ToArray__;
  puVar15 = puVar14 + -8;
  *(undefined **)(puVar14 + -8) = &UNK_?;
  func_?();
  *(MethodInfo ***)(puVar15 + -4) = &MethodInfo__System__Collections__Generic__List<int>__List__;
  puVar16 = puVar15 + -8;
  *(undefined **)(puVar15 + -8) = &UNK_?;
  func_?();
  *(List_1_System_Int32___Class ***)(puVar16 + -4) =
       &TypeInfo__System__Collections__Generic__List<int>;
  puVar17 = puVar16 + -8;
  *(undefined **)(puVar16 + -8) = &UNK_?;
  func_?();
  puVar18 = puVar17 + 0x1c;
  uRam_? = 1;
  puVar7 = puVar17 + 0x1c;
  if (edge != Edge__Enum_None) {
    uVar19 = *(undefined4 *)(edge + 8);
    uVar20 = *(undefined4 *)(edge + 0xc);
    uStack_2 = *(undefined4 *)(edge + 0x30);
    uVar21 = *(undefined2 *)(edge + 0x34);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      *(Cube__Class **)(puVar17 + 0x18) = TypeInfo__Cube;
      puVar22 = puVar17 + 0x14;
      *(undefined **)(puVar17 + 0x14) = &UNK_?;
      func_?();
      puVar18 = puVar22 + 4;
    }
    uVar23 = uStack_2;
    *(undefined4 *)(puVar18 + -4) = 0;
    *(undefined4 *)(puVar18 + -0x10) = uVar20;
    *(undefined4 *)(puVar18 + -0xc) = uVar23;
    *(undefined4 *)(puVar18 + -0x14) = uVar19;
    *(undefined4 *)(puVar18 + -0x18) = _mirror;
    *(undefined2 *)(puVar18 + -8) = uVar21;
    *(undefined **)(puVar18 + -0x1c) = &UNK_?;
    pVVar24 = Cube::Cube_GetFaceVerticesWorld
                        (*(GameObject **)(puVar18 + -0x18),*(Cube **)(puVar18 + -0x14),
                         *(Face__Enum *)(puVar18 + -0x10),*(IntVector *)(puVar18 + -0xc),
                         *(MethodInfo **)(puVar18 + -4));
    *(List_1_System_Int32___Class **)(puVar18 + -4) =
         TypeInfo__System__Collections__Generic__List<int>;
    puVar25 = puVar18 + -8;
    *(undefined **)(puVar18 + -8) = &UNK_?;
    iVar8 = func_?();
    *(MethodInfo **)(puVar25 + -4) = MethodInfo__System__Collections__Generic__List<int>__List__;
    *(int *)(puVar25 + -8) = iVar8;
    *(undefined **)(puVar25 + -0xc) = &UNK_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (*(LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
                (puVar25 + -8),*(MethodInfo **)(puVar25 + -4));
    pGVar26 = (this->fields).gameObject;
    puVar7 = puVar25 + 0x24;
    if (pGVar26 != (GameObject *)0x0) {
      *(MethodInfo **)(puVar25 + 0x20) =
           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
      ;
      *(GameObject **)(puVar25 + 0x1c) = pGVar26;
      *(undefined **)(puVar25 + 0x18) = &UNK_?;
      pOVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (*(GameObject **)(puVar25 + 0x1c),*(MethodInfo **)(puVar25 + 0x20));
      puVar7 = puVar25 + 0x2c;
      if (pOVar27 != (Object *)0x0) {
        *(undefined4 *)(puVar25 + 0x28) = 0;
        *(Object **)(puVar25 + 0x24) = pOVar27;
        *(undefined **)(puVar25 + 0x20) = &UNK_?;
        pMVar28 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                            (*(MeshFilter **)(puVar25 + 0x24),*(MethodInfo **)(puVar25 + 0x28));
        puVar7 = puVar25 + 0x34;
        if (pMVar28 != (Mesh *)0x0) {
          *(undefined4 *)(puVar25 + 0x30) = 0;
          *(Mesh **)(puVar25 + 0x2c) = pMVar28;
          *(undefined **)(puVar25 + 0x28) = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                    (*(Mesh **)(puVar25 + 0x2c),*(MethodInfo **)(puVar25 + 0x30));
          pMVar29 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
          puVar30 = puVar25 + 0x3c;
          puVar7 = puVar25 + 0x3c;
          if (iVar8 != 0) {
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
            iVar31 = *(int *)(iVar8 + 8);
            puVar7 = puVar25 + 0x3c;
            if (iVar31 != 0) {
              uVar32 = *(uint *)(iVar8 + 0xc);
              if (uVar32 < *(uint *)(iVar31 + 0xc)) {
                *(uint *)(iVar8 + 0xc) = uVar32 + 1;
                if (*(uint *)(iVar31 + 0xc) <= uVar32) goto code_?;
                *(undefined4 *)(iVar31 + 0x10 + uVar32 * 4) = 0;
                puVar30 = puVar25 + 0x3c;
              }
              else {
                *(Il2CppRGCTXData *)(puVar25 + 0x38) = pMVar29->klass->rgctx_data[0xe];
                *(undefined4 *)(puVar25 + 0x34) = 0;
                *(int *)(puVar25 + 0x30) = iVar8;
                *(undefined **)(puVar25 + 0x2c) = &UNK_?;
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          (*(List_1_System_Int32_ **)(puVar25 + 0x30),*(int32_t *)(puVar25 + 0x34),
                           *(MethodInfo **)(puVar25 + 0x38));
                puVar30 = puVar25 + 0x48;
              }
              pMVar29 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
              iVar31 = *(int *)(iVar8 + 8);
              puVar7 = puVar30;
              if (iVar31 != 0) {
                uVar32 = *(uint *)(iVar8 + 0xc);
                if (uVar32 < *(uint *)(iVar31 + 0xc)) {
                  *(uint *)(iVar8 + 0xc) = uVar32 + 1;
                  if (*(uint *)(iVar31 + 0xc) <= uVar32) goto code_?;
                  *(undefined4 *)(iVar31 + 0x10 + uVar32 * 4) = 3;
                }
                else {
                  *(Il2CppRGCTXData *)(puVar30 + -4) = pMVar29->klass->rgctx_data[0xe];
                  *(undefined4 *)(puVar30 + -8) = 3;
                  *(int *)(puVar30 + -0xc) = iVar8;
                  *(undefined **)(puVar30 + -0x10) = &UNK_?;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            (*(List_1_System_Int32_ **)(puVar30 + -0xc),*(int32_t *)(puVar30 + -8),
                             *(MethodInfo **)(puVar30 + -4));
                  puVar30 = puVar30 + 0xc;
                }
                pMVar29 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
                iVar31 = *(int *)(iVar8 + 8);
                puVar7 = puVar30;
                if (iVar31 != 0) {
                  uVar32 = *(uint *)(iVar8 + 0xc);
                  if (uVar32 < *(uint *)(iVar31 + 0xc)) {
                    *(uint *)(iVar8 + 0xc) = uVar32 + 1;
                    if (*(uint *)(iVar31 + 0xc) <= uVar32) goto code_?;
                    *(undefined4 *)(iVar31 + 0x10 + uVar32 * 4) = 2;
                  }
                  else {
                    *(Il2CppRGCTXData *)(puVar30 + -4) = pMVar29->klass->rgctx_data[0xe];
                    *(undefined4 *)(puVar30 + -8) = 2;
                    *(int *)(puVar30 + -0xc) = iVar8;
                    *(undefined **)(puVar30 + -0x10) = &UNK_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__AddWithResize
                              (*(List_1_System_Int32_ **)(puVar30 + -0xc),*(int32_t *)(puVar30 + -8)
                               ,*(MethodInfo **)(puVar30 + -4));
                    puVar30 = puVar30 + 0xc;
                  }
                  pMVar29 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
                  iVar31 = *(int *)(iVar8 + 8);
                  puVar7 = puVar30;
                  if (iVar31 != 0) {
                    uVar32 = *(uint *)(iVar8 + 0xc);
                    if (uVar32 < *(uint *)(iVar31 + 0xc)) {
                      *(uint *)(iVar8 + 0xc) = uVar32 + 1;
                      if (*(uint *)(iVar31 + 0xc) <= uVar32) goto code_?;
                      *(undefined4 *)(iVar31 + 0x10 + uVar32 * 4) = 2;
                    }
                    else {
                      *(Il2CppRGCTXData *)(puVar30 + -4) = pMVar29->klass->rgctx_data[0xe];
                      *(undefined4 *)(puVar30 + -8) = 2;
                      *(int *)(puVar30 + -0xc) = iVar8;
                      *(undefined **)(puVar30 + -0x10) = &UNK_?;
                      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__AddWithResize
                                (*(List_1_System_Int32_ **)(puVar30 + -0xc),
                                 *(int32_t *)(puVar30 + -8),*(MethodInfo **)(puVar30 + -4));
                      puVar30 = puVar30 + 0xc;
                    }
                    pMVar29 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
                    iVar31 = *(int *)(iVar8 + 8);
                    puVar7 = puVar30;
                    if (iVar31 != 0) {
                      uVar32 = *(uint *)(iVar8 + 0xc);
                      if (uVar32 < *(uint *)(iVar31 + 0xc)) {
                        *(uint *)(iVar8 + 0xc) = uVar32 + 1;
                        if (*(uint *)(iVar31 + 0xc) <= uVar32) goto code_?;
                        *(undefined4 *)(iVar31 + 0x10 + uVar32 * 4) = 1;
                      }
                      else {
                        *(Il2CppRGCTXData *)(puVar30 + -4) = pMVar29->klass->rgctx_data[0xe];
                        *(undefined4 *)(puVar30 + -8) = 1;
                        *(int *)(puVar30 + -0xc) = iVar8;
                        *(undefined **)(puVar30 + -0x10) = &UNK_?;
                        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                        List_1_System_Int32__AddWithResize
                                  (*(List_1_System_Int32_ **)(puVar30 + -0xc),
                                   *(int32_t *)(puVar30 + -8),*(MethodInfo **)(puVar30 + -4));
                        puVar30 = puVar30 + 0xc;
                      }
                      pMVar29 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
                      iVar31 = *(int *)(iVar8 + 8);
                      puVar7 = puVar30;
                      if (iVar31 != 0) {
                        uVar32 = *(uint *)(iVar8 + 0xc);
                        if (uVar32 < *(uint *)(iVar31 + 0xc)) {
                          *(uint *)(iVar8 + 0xc) = uVar32 + 1;
                          if (*(uint *)(iVar31 + 0xc) <= uVar32) goto code_?;
                          *(undefined4 *)(iVar31 + 0x10 + uVar32 * 4) = 0;
                          puVar33 = puVar30;
                        }
                        else {
                          *(Il2CppRGCTXData *)(puVar30 + -4) = pMVar29->klass->rgctx_data[0xe];
                          *(undefined4 *)(puVar30 + -8) = 0;
                          *(int *)(puVar30 + -0xc) = iVar8;
                          *(undefined **)(puVar30 + -0x10) = &UNK_?;
                          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                          List_1_System_Int32__AddWithResize
                                    (*(List_1_System_Int32_ **)(puVar30 + -0xc),
                                     *(int32_t *)(puVar30 + -8),*(MethodInfo **)(puVar30 + -4));
                          puVar33 = puVar30 + 0xc;
                        }
                        *(undefined4 *)(puVar33 + -4) = 0;
                        *(Vector3__Array **)(puVar33 + -8) = pVVar24;
                        *(Mesh **)(puVar33 + -0xc) = pMVar28;
                        *(undefined **)(puVar33 + -0x10) = &UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                                  (*(Mesh **)(puVar33 + -0xc),*(Vector3__Array **)(puVar33 + -8),
                                   *(MethodInfo **)(puVar33 + -4));
                        uVar34 = *(undefined1 *)(edge + 0x15);
                        *(undefined4 *)(puVar33 + -4) = 0;
                        uStack_2 = CONCAT31(uStack_2._1_3_,uVar34);
                        *(undefined4 *)(puVar33 + -8) = uStack_2;
                        *(undefined4 *)(puVar33 + -0xc) = *(undefined4 *)(edge + 0x10);
                        *(FaceCursor **)(puVar33 + -0x10) = this;
                        *(undefined **)(puVar33 + -0x14) = &UNK_?;
                        pVVar11 = FaceCursor_SetUVs(*(FaceCursor **)(puVar33 + -0x10),
                                                    *(Edge__Enum *)(puVar33 + -0xc),puVar33[-8],
                                                    *(MethodInfo **)(puVar33 + -4));
                        *(undefined4 *)(puVar33 + -4) = 0;
                        *(Vector2__Array **)(puVar33 + -8) = pVVar11;
                        *(Mesh **)(puVar33 + -0xc) = pMVar28;
                        *(undefined **)(puVar33 + -0x10) = &UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                  (*(Mesh **)(puVar33 + -0xc),*(Vector2__Array **)(puVar33 + -8),
                                   *(MethodInfo **)(puVar33 + -4));
                        *(MethodInfo **)(puVar33 + -4) =
                             MethodInfo__System__Collections__Generic__List<int>__ToArray__;
                        *(int *)(puVar33 + -8) = iVar8;
                        *(undefined **)(puVar33 + -0xc) = &UNK_?;
                        pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                  UIElements::Internal::
                                  MultiColumnCollectionHeader+ViewState+ColumnState]::
                                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                            (*(List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                               **)(puVar33 + -8),*(MethodInfo **)(puVar33 + -4));
                        *(undefined4 *)(puVar33 + -4) = 0;
                        *(MultiColumnCollectionHeader_ViewState_ColumnState__Array **)(puVar33 + -8)
                             = pMVar5;
                        *(Mesh **)(puVar33 + -0xc) = pMVar28;
                        *(undefined **)(puVar33 + -0x10) = &UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                                  (*(Mesh **)(puVar33 + -0xc),*(Int32__Array **)(puVar33 + -8),
                                   *(MethodInfo **)(puVar33 + -4));
                        *(undefined4 *)(puVar33 + -4) = 0;
                        *(Mesh **)(puVar33 + -8) = pMVar28;
                        *(undefined **)(puVar33 + -0xc) = &UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                                  (*(Mesh **)(puVar33 + -8),*(MethodInfo **)(puVar33 + -4));
                        *(undefined4 *)(puVar33 + 0x40) = 0;
                        *(Mesh **)(puVar33 + 0x3c) = pMVar28;
                        *(undefined **)(puVar33 + 0x38) = &UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                                  (*(Mesh **)(puVar33 + 0x3c),*(MethodInfo **)(puVar33 + 0x40));
                        puVar7 = puVar33 + 0x4c;
                        if (*(int *)(edge + 0x10) == 0) {
                          pGVar26 = (this->fields).gameObject;
                          if (pGVar26 != (GameObject *)0x0) {
                            *(MethodInfo **)(puVar33 + 0x48) =
                                 UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                            ;
                            *(GameObject **)(puVar33 + 0x44) = pGVar26;
                            *(undefined **)(puVar33 + 0x40) = &UNK_?;
                            pOVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponent_1
                                                (*(GameObject **)(puVar33 + 0x44),
                                                 *(MethodInfo **)(puVar33 + 0x48));
                            puVar7 = puVar33 + 0x54;
                            if (pOVar27 != (Object *)0x0) {
                              pMVar35 = (this->fields).materialNone;
                              goto code_?;
                            }
                          }
                        }
                        else if ((*(char *)(edge + 0x14) == '\0') &&
                                (*(char *)(edge + 0x15) == '\0')) {
                          pGVar26 = (this->fields).gameObject;
                          puVar7 = puVar33 + 0x4c;
                          if (pGVar26 != (GameObject *)0x0) {
                            *(MethodInfo **)(puVar33 + 0x48) =
                                 UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                            ;
                            *(GameObject **)(puVar33 + 0x44) = pGVar26;
                            *(undefined **)(puVar33 + 0x40) = &UNK_?;
                            pOVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponent_1
                                                (*(GameObject **)(puVar33 + 0x44),
                                                 *(MethodInfo **)(puVar33 + 0x48));
                            puVar7 = puVar33 + 0x54;
                            if (pOVar27 != (Object *)0x0) {
                              pMVar35 = (this->fields).materialEdge;
code_?:
                              *(undefined4 *)(puVar33 + 0x50) = 0;
                              *(Material **)(puVar33 + 0x4c) = pMVar35;
                              *(Object **)(puVar33 + 0x48) = pOVar27;
                              *(undefined **)(puVar33 + 0x44) = &UNK_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_set_sharedMaterial
                                        (*(Renderer **)(puVar33 + 0x48),
                                         *(Material **)(puVar33 + 0x4c),
                                         *(MethodInfo **)(puVar33 + 0x50));
                              pGVar26 = (this->fields).gameObject;
                              puVar7 = puVar33 + 0x60;
                              if (pGVar26 != (GameObject *)0x0) {
                                *(undefined4 *)(puVar33 + 0x5c) = 0;
                                *(GameObject **)(puVar33 + 0x58) = pGVar26;
                                *(undefined **)(puVar33 + 0x54) = &UNK_?;
                                pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform
                                                    (*(GameObject **)(puVar33 + 0x58),
                                                     *(MethodInfo **)(puVar33 + 0x5c));
                                *(undefined4 *)(puVar33 + 0x5c) = 0;
                                *(Mesh **)(puVar33 + 0x58) = pMVar28;
                                *(undefined **)(puVar33 + 0x54) = &UNK_?;
                                pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                          Mesh_get_vertices(*(Mesh **)(puVar33 + 0x58),
                                                            *(MethodInfo **)(puVar33 + 0x5c));
                                puVar30 = puVar33 + 0x70;
                                puVar7 = puVar33 + 0x70;
                                if (pVVar37 != (Vector3__Array *)0x0) {
                                  if (pVVar37->max_length == 0) goto code_?;
                                  puVar7 = puVar33 + 0x70;
                                  if (pTVar36 != (Transform *)0x0) {
                                    uVar6 = *(undefined8 *)pVVar37->vector;
                                    fVar38 = pVVar37->vector[0].z;
                                    *(undefined4 *)(puVar33 + 0x6c) = 0;
                                    *(Transform **)(puVar33 + 0x5c) = pTVar36;
                                    *(undefined8 *)(puVar33 + 0x60) = uVar6;
                                    *(float *)(puVar33 + 0x68) = fVar38;
                                    *(undefined8 **)(puVar33 + 0x58) = &uStack_4;
                                    *(undefined **)(puVar33 + 0x54) = &UNK_?;
                                    pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_TransformPoint
                                                        (*(Vector3 **)(puVar33 + 0x58),
                                                         *(Transform **)(puVar33 + 0x5c),
                                                         *(Vector3 *)(puVar33 + 0x60),
                                                         *(MethodInfo **)(puVar33 + 0x6c));
                                    uVar6._0_4_ = pVVar39->x;
                                    uVar6._4_4_ = pVVar39->y;
                                    fVar38 = pVVar39->z;
                                    pGVar26 = (this->fields).gameObject;
                                    puVar7 = puVar33 + 0x88;
                                    if (pGVar26 != (GameObject *)0x0) {
                                      *(undefined4 *)(puVar33 + 0x84) = 0;
                                      *(GameObject **)(puVar33 + 0x80) = pGVar26;
                                      *(undefined **)(puVar33 + 0x7c) = &UNK_?;
                                      pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (*(GameObject **)(puVar33 + 0x80),
                                                           *(MethodInfo **)(puVar33 + 0x84));
                                      puVar7 = puVar33 + 0x90;
                                      if (pTVar36 != (Transform *)0x0) {
                                        *(undefined4 *)(puVar33 + 0x8c) = 0;
                                        *(Transform **)(puVar33 + 0x88) = pTVar36;
                                        *(undefined1 **)(puVar33 + 0x84) = &stack0xffffffec;
                                        *(undefined **)(puVar33 + 0x80) = &UNK_?;
                                        pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_position
                                                            (*(Vector3 **)(puVar33 + 0x84),
                                                             *(Transform **)(puVar33 + 0x88),
                                                             *(MethodInfo **)(puVar33 + 0x8c));
                                        puVar30 = puVar33 + 0x9c;
                                        uStack_4._0_4_ = pVVar39->x;
                                        uStack_4._4_4_ = pVVar39->y;
                                        puStack_3 = (undefined *)pVVar39->z;
                                        puVar7 = puVar33 + 0x9c;
                                        if (pVVar24 != (Vector3__Array *)0x0) {
                                          if (pVVar24->max_length != 0) {
                                            uVar40 = pVVar24->vector[0].x;
                                            uVar41 = pVVar24->vector[0].y;
                                            fStack_1 = pVVar24->vector[0].z;
                                            uVar42 = *(undefined8 *)(edge + 0x18);
                                            puStack_3 = (undefined *)
                                                         ((float)puStack_3 +
                                                         (fStack_1 - fVar38) +
                                                         *(float *)(edge + 0x20) * _UNK_?);
                                            *(undefined4 *)(puVar33 + 0x98) = 0;
                                            *(Transform **)(puVar33 + 0x88) = pTVar36;
                                            *(ulonglong *)(puVar33 + 0x8c) =
                                                 CONCAT44((float)uStack_4._4_4_ +
                                                          ((float)uVar41 -
                                                          (float)((ulonglong)uVar6 >> 0x20)) +
                                                          (float)((ulonglong)uVar42 >> 0x20) *
                                                          _UNK_?,
                                                          (float)(undefined4)uStack_4 +
                                                          ((float)uVar40 - (float)uVar6) +
                                                          (float)uVar42 * _UNK_?);
                                            *(undefined **)(puVar33 + 0x94) = puStack_3;
                                            *(undefined **)(puVar33 + 0x84) = &UNK_?;
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_position
                                                      (*(Transform **)(puVar33 + 0x88),
                                                       *(Vector3 *)(puVar33 + 0x8c),
                                                       *(MethodInfo **)(puVar33 + 0x98));
                                            return extraout_EAX;
                                          }
                                          goto code_?;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pGVar26 = (this->fields).gameObject;
                          puVar7 = puVar33 + 0x4c;
                          if (pGVar26 != (GameObject *)0x0) {
                            *(MethodInfo **)(puVar33 + 0x48) =
                                 UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                            ;
                            *(GameObject **)(puVar33 + 0x44) = pGVar26;
                            *(undefined **)(puVar33 + 0x40) = &UNK_?;
                            pOVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponent_1
                                                (*(GameObject **)(puVar33 + 0x44),
                                                 *(MethodInfo **)(puVar33 + 0x48));
                            puVar7 = puVar33 + 0x54;
                            if (pOVar27 != (Object *)0x0) {
                              pMVar35 = (this->fields).materialCorner;
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar30 = puVar7 + -4;
  *(undefined **)(puVar7 + -4) = &UNK_?;
  func_?();
code_?:
  *(undefined **)(puVar30 + -4) = &UNK_?;
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar11 = (Vector2__Array *)(*pcVar10)();
  return pVVar11;
}


/* Void UpdateCursor(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_UpdateCursor
               (FaceCursor *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(0x4330);
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    uVar1._0_2_ = (info->fields).iLocalPos.x;
    uVar1._2_2_ = (info->fields).iLocalPos.y;
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    iVar2 = (info->fields).iLocalPos.z;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    iVector.z = iVar2;
    iVector.x = (short)uVar1;
    iVector.y = (short)((uint)uVar1 >> 0x10);
    value_00 = Cube::Cube_GetFaceVerticesWorld(cubeGameObject,cube,face,iVector,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar3 = (this->fields).gameObject;
    if (pGVar3 != (GameObject *)0x0) {
      this_01 = (MeshFilter *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar3,
                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                          );
      if (this_01 != (MeshFilter *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                            (this_01,(MethodInfo *)0x0);
        if (this_02 != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_02,(MethodInfo *)0x0);
          pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
          if (this_00 !=
              (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
            piVar5 = &(this_00->fields)._version;
            *piVar5 = *piVar5 + 1;
            pMVar6 = (this_00->fields)._items;
            if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
              uVar7 = (this_00->fields)._size;
              if (uVar7 < pMVar6->max_length) {
                (this_00->fields)._size = uVar7 + 1;
                if (pMVar6->max_length <= uVar7) goto code_?;
                (&pMVar6->vector[0].index)[uVar7] = 0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)this_00,0,pMVar4->klass->rgctx_data[0xe].method)
                ;
              }
              pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar5 = &(this_00->fields)._version;
              *piVar5 = *piVar5 + 1;
              pMVar6 = (this_00->fields)._items;
              if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                uVar7 = (this_00->fields)._size;
                if (uVar7 < pMVar6->max_length) {
                  (this_00->fields)._size = uVar7 + 1;
                  if (pMVar6->max_length <= uVar7) goto code_?;
                  (&pMVar6->vector[0].index)[uVar7] = 3;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)this_00,3,
                             pMVar4->klass->rgctx_data[0xe].method);
                }
                pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar5 = &(this_00->fields)._version;
                *piVar5 = *piVar5 + 1;
                pMVar6 = (this_00->fields)._items;
                if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                  uVar7 = (this_00->fields)._size;
                  if (uVar7 < pMVar6->max_length) {
                    (this_00->fields)._size = uVar7 + 1;
                    if (pMVar6->max_length <= uVar7) goto code_?;
                    (&pMVar6->vector[0].index)[uVar7] = 2;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__AddWithResize
                              ((List_1_System_Int32_ *)this_00,2,
                               pMVar4->klass->rgctx_data[0xe].method);
                  }
                  pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  piVar5 = &(this_00->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pMVar6 = (this_00->fields)._items;
                  if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                    uVar7 = (this_00->fields)._size;
                    if (uVar7 < pMVar6->max_length) {
                      (this_00->fields)._size = uVar7 + 1;
                      if (pMVar6->max_length <= uVar7) goto code_?;
                      (&pMVar6->vector[0].index)[uVar7] = 2;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__AddWithResize
                                ((List_1_System_Int32_ *)this_00,2,
                                 pMVar4->klass->rgctx_data[0xe].method);
                    }
                    pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                    piVar5 = &(this_00->fields)._version;
                    *piVar5 = *piVar5 + 1;
                    pMVar6 = (this_00->fields)._items;
                    if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                    {
                      uVar7 = (this_00->fields)._size;
                      if (uVar7 < pMVar6->max_length) {
                        (this_00->fields)._size = uVar7 + 1;
                        if (pMVar6->max_length <= uVar7) goto code_?;
                        (&pMVar6->vector[0].index)[uVar7] = 1;
                      }
                      else {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                        List_1_System_Int32__AddWithResize
                                  ((List_1_System_Int32_ *)this_00,1,
                                   pMVar4->klass->rgctx_data[0xe].method);
                      }
                      pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                      piVar5 = &(this_00->fields)._version;
                      *piVar5 = *piVar5 + 1;
                      pMVar6 = (this_00->fields)._items;
                      if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0
                         ) {
                        uVar7 = (this_00->fields)._size;
                        if (uVar7 < pMVar6->max_length) {
                          (this_00->fields)._size = uVar7 + 1;
                          if (pMVar6->max_length <= uVar7) goto code_?;
                          (&pMVar6->vector[0].index)[uVar7] = 0;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                          List_1_System_Int32__AddWithResize
                                    ((List_1_System_Int32_ *)this_00,0,
                                     pMVar4->klass->rgctx_data[0xe].method);
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                                  (this_02,value_00,(MethodInfo *)0x0);
                        value_01 = FaceCursor_SetUVs(this,(info->fields).pickedEdge,
                                                     (info->fields).pickedEdgeIndex1,
                                                     (MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                  (this_02,value_01,(MethodInfo *)0x0);
                        pMVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                  UIElements::Internal::
                                  MultiColumnCollectionHeader+ViewState+ColumnState]::
                                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                            (this_00,
                                             MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                            );
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                                  (this_02,(Int32__Array *)pMVar6,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                                  (this_02,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                                  (this_02,(MethodInfo *)0x0);
                        if ((info->fields).pickedEdge == 0) {
                          pGVar3 = (this->fields).gameObject;
                          if (pGVar3 != (GameObject *)0x0) {
                            this_03 = (Renderer *)
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponent_1
                                                (pGVar3,
                                                 UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                                );
                            if (this_03 != (Renderer *)0x0) {
                              value_02 = (this->fields).materialNone;
                              goto code_?;
                            }
                          }
                        }
                        else if (((info->fields).pickedEdgeIndex0 == 0) &&
                                ((info->fields).pickedEdgeIndex1 == 0)) {
                          pGVar3 = (this->fields).gameObject;
                          if (pGVar3 != (GameObject *)0x0) {
                            this_03 = (Renderer *)
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponent_1
                                                (pGVar3,
                                                 UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                                );
                            if (this_03 != (Renderer *)0x0) {
                              value_02 = (this->fields).materialEdge;
code_?:
                              UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_set_sharedMaterial(this_03,value_02,(MethodInfo *)0x0);
                              pGVar3 = (this->fields).gameObject;
                              if (pGVar3 != (GameObject *)0x0) {
                                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                          Mesh_get_vertices(this_02,(MethodInfo *)0x0);
                                if (pVVar9 != (Vector3__Array *)0x0) {
                                  if (pVVar9->max_length == 0) goto code_?;
                                  if (pTVar8 != (Transform *)0x0) {
                                    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_TransformPoint
                                                        ((Vector3 *)&stack0xffffffd4,pTVar8,
                                                         pVVar9->vector[0],(MethodInfo *)0x0);
                                    uVar11 = pVVar10->x;
                                    uVar12 = pVVar10->y;
                                    fVar13 = pVVar10->z;
                                    pGVar3 = (this->fields).gameObject;
                                    if (pGVar3 != (GameObject *)0x0) {
                                      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform(pGVar3,(MethodInfo *)0x0)
                                      ;
                                      if (pTVar8 != (Transform *)0x0) {
                                        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_position
                                                            ((Vector3 *)&fStack_14,pTVar8,
                                                             (MethodInfo *)0x0);
                                        uVar15 = pVVar10->x;
                                        uVar16 = pVVar10->y;
                                        if (value_00 != (Vector3__Array *)0x0) {
                                          if (value_00->max_length != 0) {
                                            fStack_14 = value_00->vector[0].x;
                                            puStack_17 = (undefined *)value_00->vector[0].y;
                                            uVar18 = (info->fields).normal.x;
                                            uVar19 = (info->fields).normal.y;
                                            fVar13 = pVVar10->z +
                                                     (value_00->vector[0].z - fVar13) +
                                                     (info->fields).normal.z * _UNK_?;
                                            info._0_2_ = SUB42(fVar13,0);
                                            info._2_2_ = (undefined2)((uint)fVar13 >> 0x10);
                                            value.y = (float)uVar16 +
                                                      ((float)puStack_17 - (float)uVar12) +
                                                      (float)uVar19 * _UNK_?;
                                            value.x = (float)uVar15 +
                                                      (fStack_14 - (float)uVar11) +
                                                      (float)uVar18 * _UNK_?;
                                            value.z._0_2_ = info._0_2_;
                                            value.z._2_2_ = info._2_2_;
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_position(pTVar8,value,(MethodInfo *)0x0);
                                            return;
                                          }
                                          goto code_?;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pGVar3 = (this->fields).gameObject;
                          if (pGVar3 != (GameObject *)0x0) {
                            this_03 = (Renderer *)
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponent_1
                                                (pGVar3,
                                                 UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                                );
                            if (this_03 != (Renderer *)0x0) {
                              value_02 = (this->fields).materialCorner;
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* FaceCursor(Material, Material, Material) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor__ctor
               (FaceCursor *this,Material *materialEdgePath,Material *materialCornerPath,
               Material *materialNonePath,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral_Cursor);
    func_?(&StringLiteral_UIItems);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,StringLiteral_Cursor,(MethodInfo *)0x0);
  (this->fields).gameObject = pGVar1;
  func_?(&(this->fields).gameObject,pGVar1);
  pGVar1 = (this->fields).gameObject;
  value = (Material *)
          UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,(int32_t)value,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      this_00 = (Renderer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      pGVar1 = (this->fields).gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                  (pGVar1,
                   UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                  );
        (this->fields).materialEdge = value;
        func_?();
        (this->fields).materialCorner = (Material *)0x0;
        func_?();
        (this->fields).materialNone = (Material *)&UNK_?;
        func_?();
        if (this_00 != (Renderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    (this_00,(this->fields).materialEdge,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

