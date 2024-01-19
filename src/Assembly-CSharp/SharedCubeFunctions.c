
/* Void AddCubeLine(Mesh, Vector3, Vector3, Single) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
               (Mesh *mesh,Vector3 p0,Vector3 p1,float diagonalWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = diagonalWidth * _UNK_?;
  VVar2.y = p1.y - p0.y;
  VVar2.x = p1.x - p0.x;
  VVar2.z = p1.z - p0.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffff90,VVar2,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  uVar6 = pVVar3->x;
  uVar7 = 0;
  fVar8 = 0.0;
  uVar9 = pVVar3->x;
  uVar10 = pVVar3->y;
  fVar11 = (float10)func_?(uVar9,uVar10,fVar5,uVar6,0,fVar5);
  fStack_12 = (float)((uint)(float)fVar11 ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  if (fVar4 < fVar8) {
    fStack_12 = (float)fVar11;
  }
  puStack_13 = (undefined *)0x0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar15._0_4_ = (pVVar14->forwardVector).x;
  uVar15._4_4_ = (pVVar14->forwardVector).y;
  fVar4 = (pVVar14->forwardVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar8 = 0.0;
  v1.z = fVar4;
  v1.x = (float)(int)uVar15;
  v1.y = (float)(int)((ulonglong)uVar15 >> 0x20);
  v2.y = (float)uVar7;
  v2.x = (float)uVar6;
  v2.z = fVar5;
  fVar4 = MathFunctions::MathFunctions_SignedAngle_1
                     (v1,v2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                      (MethodInfo *)0x0);
  euler.y = fVar8;
  euler.x = fStack_12 * _UNK_?;
  euler.z = 0.0;
  pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)&fStack_12,euler,(MethodInfo *)0x0);
  fStack_12 = pQVar16->x;
  puStack_13 = (undefined *)pQVar16->y;
  fVar17 = pQVar16->z;
  fVar18 = pQVar16->w;
  euler_00.y = fVar4 * _UNK_? * _UNK_?;
  euler_00.x = fVar8;
  euler_00.z = 0.0;
  pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)&stack0xffffff70,euler_00,(MethodInfo *)0x0);
  fVar4 = pQVar16->y;
  fVar5 = pQVar16->z;
  fVar8 = pQVar16->w;
  fVar19 = fVar5 * fStack_12;
  fVar20 = (fVar5 * fVar18 + fVar8 * fVar17 + pQVar16->x * (float)puStack_13) - fVar4 * fStack_12;
  fVar21 = ((fVar8 * fVar18 - pQVar16->x * fStack_12) - fVar4 * (float)puStack_13) - fVar5 * fVar17
  ;
  fStack_12 = (pQVar16->x * fVar18 + fVar8 * fStack_12 + fVar4 * fVar17) -
              fVar5 * (float)puStack_13;
  puStack_13 = (undefined *)
               ((fVar8 * (float)puStack_13 + fVar4 * fVar18 + fVar19) - pQVar16->x * fVar17);
  fVar4 = (float)func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  rotation.y = (float)puStack_13;
  rotation.x = fStack_12;
  rotation.z = fVar20;
  rotation.w = fVar21;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffff90,rotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->downVector,(MethodInfo *)0x0);
  fVar5 = pVVar3->x;
  fVar8 = pVVar3->y;
  fVar17 = pVVar3->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  rotation_02.y = (float)puStack_13;
  rotation_02.x = fStack_12;
  rotation_02.z = fVar20;
  rotation_02.w = fVar21;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffff90,rotation_02,
                       TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  uVar22 = pVVar3->x;
  uVar23 = pVVar3->y;
  fVar18 = pVVar3->z;
  if (fVar4 == 0.0) {
code_?:
    func_?();
  }
  else if (*(int *)((int)fVar4 + 0xc) != 0) {
    *(ulonglong *)((int)fVar4 + 0x10) =
         CONCAT44(((float)uVar23 + fVar8) * fVar1,((float)uVar22 + fVar5) * fVar1);
    *(float *)((int)fVar4 + 0x18) = (fVar18 + fVar17) * fVar1;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar24 = (pVVar14->downVector).x;
    uVar25 = (pVVar14->downVector).y;
    mesh = (Mesh *)(pVVar14->downVector).z;
    fVar26 = (float)uVar25;
    rotation_06.y = (float)puStack_13;
    rotation_06.x = fStack_12;
    rotation_06.z = fVar20;
    rotation_06.w = fVar21;
    VVar2.x = (float)uVar24;
    VVar2 = (Vector3)CONCAT84(uVar27,VVar2.x);
    fVar8 = fStack_12;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffff90,rotation_06,VVar2,(MethodInfo *)0x0);
    fVar17 = pVVar3->x;
    fVar18 = pVVar3->y;
    fVar5 = pVVar3->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation_03.y = (float)puStack_13;
    rotation_03.x = fStack_12;
    rotation_03.z = fVar20;
    rotation_03.w = fVar21;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffff90,rotation_03,
                         TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                         (MethodInfo *)0x0);
    uVar28 = pVVar3->x;
    uVar29 = pVVar3->y;
    fVar19 = pVVar3->z;
    if (1 < *(uint *)((int)fVar4 + 0xc)) {
      *(ulonglong *)((int)fVar4 + 0x1c) =
           CONCAT44(((float)uVar29 + fVar18) * fVar1,((float)uVar28 + fVar17) * fVar1);
      *(float *)((int)fVar4 + 0x24) = (fVar19 + fVar5) * fVar1;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation_00.y = (float)puStack_13;
      rotation_00.x = fStack_12;
      rotation_00.z = fVar20;
      rotation_00.w = fVar21;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffff90,rotation_00,
                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0
                          );
      fVar19 = pVVar3->x;
      fVar30 = pVVar3->y;
      fVar5 = pVVar3->z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation_04.y = (float)puStack_13;
      rotation_04.x = fStack_12;
      rotation_04.z = fVar20;
      rotation_04.w = fVar21;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffff90,rotation_04,
                           TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                           (MethodInfo *)0x0);
      uVar31 = pVVar3->x;
      uVar32 = pVVar3->y;
      fVar17 = pVVar3->z;
      if (2 < *(uint *)((int)fVar4 + 0xc)) {
        *(ulonglong *)((int)fVar4 + 0x28) =
             CONCAT44(((float)uVar32 + fVar30) * fVar1,((float)uVar31 + fVar19) * fVar1);
        *(float *)((int)fVar4 + 0x30) = (fVar17 + fVar5) * fVar1;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation_01.y = (float)puStack_13;
        rotation_01.x = fStack_12;
        rotation_01.z = fVar20;
        rotation_01.w = fVar21;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0xffffff90,rotation_01,
                             TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                             (MethodInfo *)0x0);
        fVar33 = pVVar3->x;
        fVar34 = pVVar3->y;
        fVar5 = pVVar3->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar30 = 0.0;
        pVVar3 = &TypeInfo__UnityEngine__Vector3->static_fields->leftVector;
        fVar35 = pVVar3->x;
        fVar17 = (TypeInfo__UnityEngine__Vector3->static_fields->leftVector).z;
        rotation_05.y = (float)puStack_13;
        rotation_05.x = fStack_12;
        rotation_05.z = fVar20;
        rotation_05.w = fVar21;
        fVar19 = fStack_12;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0xffffff90,rotation_05,*pVVar3,(MethodInfo *)0x0);
        uVar36 = pVVar3->x;
        uVar37 = pVVar3->y;
        fVar18 = pVVar3->z;
        if (3 < *(uint *)((int)fVar4 + 0xc)) {
          *(ulonglong *)((int)fVar4 + 0x34) =
               CONCAT44(((float)uVar37 + fVar34) * fVar1,((float)uVar36 + fVar33) * fVar1);
          *(float *)((int)fVar4 + 0x3c) = (fVar18 + fVar5) * fVar1;
          corners = (Vector3__Array *)func_?();
          uVar38 = 0;
          pVVar3 = corners->vector;
          do {
            if (*(uint *)((int)fVar4 + 0xc) <= uVar38) goto code_?;
            uVar15 = *(undefined8 *)(((int)fVar4 - (int)corners) + (int)pVVar3);
            fVar5 = *(float *)(((int)fVar4 - (int)corners) + 8 + (int)pVVar3);
            if (corners == (Vector3__Array *)0x0) goto code_?;
            if (corners->max_length <= uVar38) goto code_?;
            uVar38 = uVar38 + 1;
            pVVar3->x = fVar8 + (float)uVar15;
            pVVar3->y = fVar30 + (float)((ulonglong)uVar15 >> 0x20);
            pVVar3->z = fVar17 + fVar5;
            pVVar3 = pVVar3 + 1;
          } while ((int)uVar38 < 4);
          pVVar3 = corners->vector + 4;
          puVar39 = (undefined8 *)((int)fVar4 + 0x34);
          uVar38 = 3;
          iVar40 = 0;
          while (uVar38 < *(uint *)((int)fVar4 + 0xc)) {
            uVar15 = *puVar39;
            fVar4 = *(float *)(puVar39 + 1);
            if (corners->max_length <= iVar40 + 4U) break;
            uVar38 = uVar38 - 1;
            puVar39 = (undefined8 *)((int)puVar39 + -0xc);
            iVar40 = iVar40 + 1;
            pVVar3->x = fVar35 + (float)uVar15;
            pVVar3->y = fVar21 + (float)((ulonglong)uVar15 >> 0x20);
            pVVar3->z = fVar20 + fVar4;
            pVVar3 = pVVar3 + 1;
            fVar4 = fVar19;
            if (0x7fffffff < uVar38) {
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              SharedCubeFunctions_AddCubeMesh((Mesh *)0x0,corners,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Void AddCubeMesh(Mesh, Vector3[], Boolean) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
               (Mesh *mesh,Vector3__Array *corners,bool insideOut,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (mesh != (Mesh *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertexCount
                      (mesh,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?(TypeInfo__System__Collections__Generic__List<int>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
    }
    else {
      collection = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                             (mesh,(MethodInfo *)0x0);
      this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?(TypeInfo__System__Collections__Generic__List<int>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32___ctor_1
                ((List_1_System_Int32_ *)this,(IEnumerable_1_System_Int32_ *)collection,
                 MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                );
    }
    collection_00 =
         UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv(mesh,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>)
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2___ctor_1
              ((List_1_UnityEngine_Vector2_ *)this_00,
               (IEnumerable_1_UnityEngine_Vector2_ *)collection_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
              );
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                       (mesh,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>)
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3___ctor_1
              ((List_1_UnityEngine_Vector3_ *)this_01,(IEnumerable_1_UnityEngine_Vector3_ *)pVVar2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
              );
    if (this_01 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      iVar3 = (this_01->fields)._size;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pVVar2 = SharedCubeFunctions_GetVertices_1(corners,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__AddRange
                ((List_1_UnityEngine_Vector3_ *)this_01,(IEnumerable_1_UnityEngine_Vector3_ *)pVVar2
                 ,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                );
      iStack_4 = 0;
      iVar3 = iVar3 + 2;
      do {
        if (insideOut == 0) {
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) break;
          func_?(this,iVar3 + -2,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3 + 1,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3 + -1,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          iVar5 = iVar3 + -2;
        }
        else {
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) break;
          func_?(this,iVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3 + 1,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3 + -2,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3 + -2,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3 + -1,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          iVar5 = iVar3;
        }
        func_?(this,iVar5,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        if (this_00 ==
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) break;
        func_?(this_00,0,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        func_?(this_00,0x3f800000,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        func_?(this_00,0x3f800000,0x3f800000,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        func_?(this_00,0,0x3f800000,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        iStack_4 = iStack_4 + 1;
        iVar3 = iVar3 + 4;
        if (5 < iStack_4) {
          pMVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                   List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                             (this_01,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                             );
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                    (mesh,(Vector3__Array *)pMVar6,(MethodInfo *)0x0);
          pMVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                   List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                             );
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                    (mesh,(Vector2__Array *)pMVar6,(MethodInfo *)0x0);
          pMVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                   List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                             (this,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                    (mesh,(Int32__Array *)pMVar6,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                    (mesh,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                    (mesh,(MethodInfo *)0x0);
          return;
        }
      } while( true );
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddCubeMeshCubeLines(Mesh, Vector3[], Single) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
               (Mesh *mesh,Vector3__Array *corners,float diagonalWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pVVar1 = corners->vector;
  uVar2 = 0;
  if (corners == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    do {
      if (corners->max_length <= uVar2) goto code_?;
      VVar3 = *pVVar1;
      uVar4 = uVar2 + 1 & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      if (corners->max_length <= uVar4) goto code_?;
      uVar5 = corners->vector[uVar4].x;
      uVar6 = corners->vector[uVar4].y;
      VVar7.y = (float)uVar6;
      VVar7.x = (float)uVar5;
      fVar8 = corners->vector[uVar4].z;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      VVar7.z = fVar8;
      SharedCubeFunctions_AddCubeLine(mesh,VVar3,VVar7,diagonalWidth,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      pVVar1 = pVVar1 + 1;
    } while ((int)uVar2 < 4);
    uVar2 = 4;
    pVVar1 = corners->vector + 4;
    do {
      if (corners->max_length <= uVar2) goto code_?;
      VVar3 = *pVVar1;
      uVar4 = uVar2 + 1 & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      if (corners->max_length <= uVar4 + 4) goto code_?;
      uVar9 = corners->vector[uVar4 + 4].x;
      uVar10 = corners->vector[uVar4 + 4].y;
      p1.y = (float)uVar10;
      p1.x = (float)uVar9;
      fVar8 = corners->vector[uVar4 + 4].z;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      p1.z = fVar8;
      SharedCubeFunctions_AddCubeLine(mesh,VVar3,p1,diagonalWidth,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      pVVar1 = pVVar1 + 1;
    } while ((int)uVar2 < 8);
    pVVar1 = corners->vector;
    uStack_11 = 0;
    uStack_12 = 7;
    pVVar13 = corners->vector + 7;
    while (uStack_11 < corners->max_length) {
      VVar3 = *pVVar1;
      if (corners->max_length <= uStack_12) break;
      VVar7 = *pVVar13;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      SharedCubeFunctions_AddCubeLine(mesh,VVar3,VVar7,diagonalWidth,(MethodInfo *)0x0);
      uStack_12 = uStack_12 - 1;
      uStack_11 = uStack_11 + 1;
      pVVar1 = pVVar1 + 1;
      pVVar13 = pVVar13 + -1;
      if ((int)uStack_12 < 4) {
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Dictionary`2[MV.WorldObject.IntVector,Cube] CreateFromBytePackage(BytePacker) */

Dictionary_2_MV_WorldObject_IntVector_Cube_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_CreateFromBytePackage
          (BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__set_Item_MV__WorldObject__IntVector__Cube_
                   );
    func_?(0xd010);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__Dictionary__
            );
  if (bp != (BytePacker *)0x0) {
    iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (bp,(MethodInfo *)0x0);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
        uVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        x = (uint)uVar3;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_01 = (IntVector *)&stack0xffffffe4;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (this_01,x,x,x,(MethodInfo *)0x0);
        byteFlags = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                              (bp,(MethodInfo *)0x0);
        puVar4 = &UNK_?;
        this_00 = (Cube *)func_?();
        Cube::Cube__ctor_1(this_00,bp,byteFlags,(MethodInfo *)0x0);
        if (this == (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                    0x0) goto code_?;
        key.z = -0x6885;
        key._0_4_ = puVar4;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__set_Item
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this,key,
                   (Object *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__set_Item_MV__WorldObject__IntVector__Cube_
                  );
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)this_01);
    }
    return (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)this;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pDVar6 = (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)(*pcVar5)();
  return pDVar6;
}


/* IntVector CubePosToChunk(IntVector, Int32) */

IntVector Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IntVector cubePos,int32_t chunkSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  *(undefined4 *)cubePos._0_4_ = 0;
  *(undefined2 *)(cubePos._0_4_ + 4) = 0;
  iVar1 = (int)method / 2;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)cubePos._0_4_,CONCAT22(in_stack_2,cubePos.z),
             CONCAT22((undefined2)chunkSize,in_stack_2),chunkSize,(MethodInfo *)0x0);
  sVar3 = *(short *)cubePos._0_4_;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar4 = (double)(((float)(int)sVar3 + (float)iVar1) / (float)(int)method);
  in_stack_2 = (undefined2)((ulonglong)dVar4 >> 0x10);
  func_?(SUB84(dVar4,0));
  uVar5 = func_?();
  *(undefined2 *)cubePos._0_4_ = uVar5;
  sVar3 = *(short *)(cubePos._0_4_ + 2);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar4 = (double)(((float)(int)sVar3 + (float)iVar1) / (float)(int)method);
  in_stack_2 = (undefined2)((ulonglong)dVar4 >> 0x10);
  func_?(SUB84(dVar4,0));
  uVar5 = func_?();
  *(undefined2 *)(cubePos._0_4_ + 2) = uVar5;
  sVar3 = *(short *)(cubePos._0_4_ + 4);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar4 = (double)(((float)(int)sVar3 + (float)iVar1) / (float)(int)method);
  in_stack_2 = (undefined2)((ulonglong)dVar4 >> 0x10);
  func_?(SUB84(dVar4,0));
  uVar5 = func_?();
  *(undefined2 *)(cubePos._0_4_ + 4) = uVar5;
  IVar6.z = extraout_DX;
  IVar6.x = cubePos.x;
  IVar6.y = cubePos.y;
  return IVar6;
}


/* Nullable`1[UnityEngine.Bounds] GetAxisAlignedBoundsRecursively(Transform) */

Nullable_1_UnityEngine_Bounds_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
          (Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,Transform *transform,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffed8;
  puVar5 = &stack0xfffffed8;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_
                   );
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__UnityEngine__Transform);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  BStack_6.m_Extents.y = 0.0;
  BStack_6.m_Extents.z = 0.0;
  iStack_7 = 0;
  *(undefined4 *)__return_storage_ptr__ = 0;
  (__return_storage_ptr__->value).m_Center.x = 0.0;
  (__return_storage_ptr__->value).m_Center.y = 0.0;
  (__return_storage_ptr__->value).m_Center.z = 0.0;
  (__return_storage_ptr__->value).m_Extents.x = 0.0;
  (__return_storage_ptr__->value).m_Extents.y = 0.0;
  (__return_storage_ptr__->value).m_Extents.z = 0.0;
  BStack_6.m_Center.x = 0.0;
  BStack_6.m_Center.y = 0.0;
  BStack_6.m_Center.z = 0.0;
  BStack_6.m_Extents.x = 0.0;
  if (transform != (Transform *)0x0) {
    this = (Renderer *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)transform,
                      UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                     );
    *(undefined4 *)__return_storage_ptr__ = 0;
    (__return_storage_ptr__->value).m_Center.x = 0.0;
    (__return_storage_ptr__->value).m_Center.y = 0.0;
    (__return_storage_ptr__->value).m_Center.z = 0.0;
    (__return_storage_ptr__->value).m_Extents.x = 0.0;
    (__return_storage_ptr__->value).m_Extents.y = 0.0;
    (__return_storage_ptr__->value).m_Extents.z = 0.0;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar8 != 0) {
      if (this == (Renderer *)0x0) goto code_?;
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                         (this,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        pBVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                            (&BStack_10,this,(MethodInfo *)0x0);
        uVar11 = (pBVar9->m_Extents).z;
        uVar12 = (pBVar9->m_Center).x;
        uVar13 = (pBVar9->m_Center).y;
        uVar14 = (pBVar9->m_Center).z;
        value.m_Center.z = (float)uVar14;
        value.m_Center.y = (float)uVar13;
        value.m_Center.x = (float)uVar12;
        uVar15 = (pBVar9->m_Extents).x;
        uVar16 = (pBVar9->m_Extents).y;
        value.m_Extents.y = (float)uVar16;
        value.m_Extents.x = (float)uVar15;
        value.m_Extents.z = (float)uVar11;
        mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::Nullable_1_UnityEngine_Bounds___ctor
                  (__return_storage_ptr__,value,
                   MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_)
        ;
      }
    }
    pIStack_17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                           (transform,(MethodInfo *)0x0);
    piStack_18 = &iStack_7;
    ppIStack_19 = &pIStack_17;
    uStack_20 = 0;
    uStack_1 = 1;
    while (pIStack_17 != (IEnumerator *)0x0) {
      cVar21 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_17);
      if (cVar21 == '\0') {
        uStack_1 = 0xffffffff;
        iStack_7 = func_?(pIStack_17,TypeInfo__System__IDisposable);
        if (iStack_7 == 0) {
          *unaff_FS_OFFSET = uStack_3;
          return __return_storage_ptr__;
        }
        func_?(0,TypeInfo__System__IDisposable,iStack_7);
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      pIStack_22 = pIStack_17;
      if (pIStack_17 == (IEnumerator *)0x0) break;
      pIVar23 = pIStack_17->klass;
      uVar24 = 0;
      uStack_25 = 0;
      uVar26._0_1_ = (pIVar23->_1).rank;
      uVar26._1_1_ = (pIVar23->_1).minimumAlignment;
      uStack_27 = (ulonglong)CONCAT24(uVar26,(undefined4)uStack_27);
      if (uVar26 != 0) {
        do {
          if (pIVar23->interfaceOffsets[uVar24].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar28 = &(&(pIVar23->vtable).get_Current)[pIVar23->interfaceOffsets[uVar24].offset].
                        method;
            goto code_?;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar26);
      }
      ppMVar28 = (MethodInfo **)
                 func_?(pIStack_17,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      transform_00 = (Transform *)(*(code *)*ppMVar28)(pIStack_22,ppMVar28[1]);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      if ((transform_00 != (Transform *)0x0) &&
         (((transform_00->klass->_1).naturalAligment <
           (TypeInfo__UnityEngine__Transform->_1).naturalAligment ||
          ((transform_00->klass->_1).typeHierarchy
           [(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__UnityEngine__Transform)))) {
        func_?(transform_00,TypeInfo__UnityEngine__Transform);
        break;
      }
      pNVar29 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                          ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffff60,transform_00,
                           (MethodInfo *)0x0);
      if (__return_storage_ptr__->hasValue == 0) {
        uVar30 = *(undefined3 *)&pNVar29->field_0x1;
        fVar31 = (pNVar29->value).m_Center.x;
        fVar32 = (pNVar29->value).m_Center.y;
        fVar33 = (pNVar29->value).m_Center.z;
        fVar34 = (pNVar29->value).m_Extents.z;
        fVar35 = (pNVar29->value).m_Extents.x;
        fVar36 = (pNVar29->value).m_Extents.y;
        __return_storage_ptr__->hasValue = pNVar29->hasValue;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar30;
        (__return_storage_ptr__->value).m_Center.x = fVar31;
        (__return_storage_ptr__->value).m_Center.y = fVar32;
        (__return_storage_ptr__->value).m_Center.z = fVar33;
        (__return_storage_ptr__->value).m_Extents.x = fVar35;
        (__return_storage_ptr__->value).m_Extents.y = fVar36;
        (__return_storage_ptr__->value).m_Extents.z = fVar34;
      }
      else {
        cStack_37 = (char)*(undefined4 *)pNVar29;
        if (cStack_37 != '\0') {
          BStack_6.m_Center.x = 0.0;
          BStack_6.m_Center.y = 0.0;
          BStack_6.m_Center.z = 0.0;
          BStack_6.m_Extents.x = 0.0;
          BStack_6.m_Extents.y = 0.0;
          BStack_6.m_Extents.z = 0.0;
          pfVar38 = (float *)func_?(&stack0xffffff44,__return_storage_ptr__,
                                             MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__
                                            );
          BStack_10.m_Center.x = *pfVar38;
          BStack_10.m_Center.y = pfVar38[1];
          BStack_10.m_Center.z = pfVar38[2];
          BStack_10.m_Extents.x = pfVar38[3];
          BStack_10.m_Extents.y = pfVar38[4];
          BStack_10.m_Extents.z = pfVar38[5];
          pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&puStack_40,&BStack_10,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar39,(MethodInfo *)0x0);
          pfVar38 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar38;
          BStack_10.m_Center.y = pfVar38[1];
          BStack_10.m_Center.z = pfVar38[2];
          BStack_10.m_Extents.x = pfVar38[3];
          BStack_10.m_Extents.y = pfVar38[4];
          BStack_10.m_Extents.z = pfVar38[5];
          pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xffffff2c,&BStack_10,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar39,(MethodInfo *)0x0);
          pfVar38 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar38;
          BStack_10.m_Center.y = pfVar38[1];
          BStack_10.m_Center.z = pfVar38[2];
          BStack_10.m_Extents.x = pfVar38[3];
          BStack_10.m_Extents.y = pfVar38[4];
          BStack_10.m_Extents.z = pfVar38[5];
          pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff20,&BStack_10,(MethodInfo *)0x0);
          uStack_27._0_4_ = pVVar39->x;
          uStack_27._4_4_ = pVVar39->y;
          fVar34 = pVVar39->z;
          pfVar38 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar38;
          BStack_10.m_Center.y = pfVar38[1];
          BStack_10.m_Center.z = pfVar38[2];
          BStack_10.m_Extents.x = pfVar38[3];
          BStack_10.m_Extents.y = pfVar38[4];
          BStack_10.m_Extents.z = pfVar38[5];
          pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff14,&BStack_10,(MethodInfo *)0x0);
          min0.z = fVar34;
          min0.x = (float)(undefined4)uStack_27;
          min0.y = (float)uStack_27._4_4_;
          pVVar39 = MathFunctions::MathFunctions_GetMinVector
                              ((Vector3 *)&puStack_41,min0,*pVVar39,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar39,(MethodInfo *)0x0);
          pfVar38 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar38;
          BStack_10.m_Center.y = pfVar38[1];
          BStack_10.m_Center.z = pfVar38[2];
          BStack_10.m_Extents.x = pfVar38[3];
          BStack_10.m_Extents.y = pfVar38[4];
          BStack_10.m_Extents.z = pfVar38[5];
          pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffefc,&BStack_10,(MethodInfo *)0x0);
          uStack_27._0_4_ = pVVar39->x;
          uStack_27._4_4_ = pVVar39->y;
          fVar34 = pVVar39->z;
          pfVar38 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar38;
          BStack_10.m_Center.y = pfVar38[1];
          BStack_10.m_Center.z = pfVar38[2];
          BStack_10.m_Extents.x = pfVar38[3];
          BStack_10.m_Extents.y = pfVar38[4];
          BStack_10.m_Extents.z = pfVar38[5];
          pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffef0,&BStack_10,(MethodInfo *)0x0);
          max0.z = fVar34;
          max0.x = (float)(undefined4)uStack_27;
          max0.y = (float)uStack_27._4_4_;
          pVVar39 = MathFunctions::MathFunctions_GetMaxVector
                              ((Vector3 *)&stack0xfffffee4,max0,*pVVar39,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar39,(MethodInfo *)0x0);
          uVar42._0_1_ = 0;
          uVar42._1_3_ = 0;
          value_00.m_Center.y = BStack_6.m_Center.y;
          value_00.m_Center.x = BStack_6.m_Center.x;
          value_00.m_Center.z = BStack_6.m_Center.z;
          value_00.m_Extents.x = BStack_6.m_Extents.x;
          value_00.m_Extents.y = BStack_6.m_Extents.y;
          value_00.m_Extents.z = BStack_6.m_Extents.z;
          mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
          Nullable_1_UnityEngine_Bounds___ctor
                    ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffff60,value_00,
                     MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_
                    );
          __return_storage_ptr__->hasValue = (bool)uVar42;
          *(int3 *)&__return_storage_ptr__->field_0x1 = SUB43(uVar42,1);
          (__return_storage_ptr__->value).m_Center.x = 0.0;
          (__return_storage_ptr__->value).m_Center.y = 0.0;
          (__return_storage_ptr__->value).m_Center.z = 0.0;
          (__return_storage_ptr__->value).m_Extents.x = 0.0;
          (__return_storage_ptr__->value).m_Extents.y = 0.0;
          (__return_storage_ptr__->value).m_Extents.z = 0.0;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  pNVar29 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar43)();
  return pNVar29;
}


/* Nullable`1[UnityEngine.Bounds] GetAxisAlignedBoundsRecursively(List`1[MVWorldObjectClient]) */

Nullable_1_UnityEngine_Bounds_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively_1
          (Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,List_1_MVWorldObjectClient_ *wos,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  transforms = (List_1_UnityEngine_Transform_ *)
               func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  pLStack_7 = transforms;
  if (wos != (List_1_MVWorldObjectClient_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)wos,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_6._index = pLVar8->_index;
    LStack_6._version = pLVar8->_version;
    LStack_6._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_11);
        uStack_1 = 0xffffffff;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pNVar12 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2
                            ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffa8,transforms,
                             (MethodInfo *)0x0);
        uVar13 = *(undefined3 *)&pNVar12->field_0x1;
        fVar14 = (pNVar12->value).m_Center.x;
        fVar15 = (pNVar12->value).m_Center.y;
        fVar16 = (pNVar12->value).m_Center.z;
        fVar17 = (pNVar12->value).m_Extents.z;
        __return_storage_ptr__->hasValue = pNVar12->hasValue;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar13;
        (__return_storage_ptr__->value).m_Center.x = fVar14;
        (__return_storage_ptr__->value).m_Center.y = fVar15;
        (__return_storage_ptr__->value).m_Center.z = fVar16;
        fVar14 = (pNVar12->value).m_Extents.y;
        (__return_storage_ptr__->value).m_Extents.x = (pNVar12->value).m_Extents.x;
        (__return_storage_ptr__->value).m_Extents.y = fVar14;
        (__return_storage_ptr__->value).m_Extents.z = fVar17;
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      if (((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) ||
         (transforms == (List_1_UnityEngine_Transform_ *)0x0)) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)transforms,*(Object **)((int)LStack_6._current + 0x90),
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                );
    }
  }
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pNVar12 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar18)();
  return pNVar12;
}


/* Nullable`1[UnityEngine.Bounds] GetAxisAlignedBoundsRecursively(List`1[UnityEngine.Transform]) */

Nullable_1_UnityEngine_Bounds_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2
          (Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,
          List_1_UnityEngine_Transform_ *transforms,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffed8;
  puVar5 = &stack0xfffffed8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_
                   );
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  BStack_6.m_Extents.y = 0.0;
  BStack_6.m_Extents.z = 0.0;
  *(undefined4 *)__return_storage_ptr__ = 0;
  (__return_storage_ptr__->value).m_Center.x = 0.0;
  (__return_storage_ptr__->value).m_Center.y = 0.0;
  (__return_storage_ptr__->value).m_Center.z = 0.0;
  (__return_storage_ptr__->value).m_Extents.x = 0.0;
  (__return_storage_ptr__->value).m_Extents.y = 0.0;
  (__return_storage_ptr__->value).m_Extents.z = 0.0;
  BStack_6.m_Center.x = 0.0;
  BStack_6.m_Center.y = 0.0;
  BStack_6.m_Center.z = 0.0;
  BStack_6.m_Extents.x = 0.0;
  if (transforms != (List_1_UnityEngine_Transform_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffff38,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        transforms,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__GetEnumerator__
                       );
    uStack_8 = 0;
    transform = pLVar7->_current;
    uStack_1 = 1;
    pOStack_9 = (Object *)&stack0xffffff80;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff80,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pNVar11 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                         ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffff64,(Transform *)transform,
                          (MethodInfo *)0x0);
      if (__return_storage_ptr__->hasValue == 0) {
        uVar12 = *(undefined3 *)&pNVar11->field_0x1;
        fVar13 = (pNVar11->value).m_Center.x;
        fVar14 = (pNVar11->value).m_Center.y;
        fVar15 = (pNVar11->value).m_Center.z;
        fVar16 = (pNVar11->value).m_Extents.x;
        fVar17 = (pNVar11->value).m_Extents.y;
        fVar18 = (pNVar11->value).m_Extents.z;
        __return_storage_ptr__->hasValue = pNVar11->hasValue;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar12;
        (__return_storage_ptr__->value).m_Center.x = fVar13;
        (__return_storage_ptr__->value).m_Center.y = fVar14;
        (__return_storage_ptr__->value).m_Center.z = fVar15;
        (__return_storage_ptr__->value).m_Extents.x = fVar16;
        (__return_storage_ptr__->value).m_Extents.y = fVar17;
        (__return_storage_ptr__->value).m_Extents.z = fVar18;
      }
      else {
        cStack_19 = (char)*(undefined4 *)pNVar11;
        if (cStack_19 != '\0') {
          BStack_6.m_Center.x = 0.0;
          BStack_6.m_Center.y = 0.0;
          BStack_6.m_Center.z = 0.0;
          BStack_6.m_Extents.x = 0.0;
          BStack_6.m_Extents.y = 0.0;
          BStack_6.m_Extents.z = 0.0;
          pfVar20 = (float *)func_?();
          BStack_21.m_Center.x = *pfVar20;
          BStack_21.m_Center.y = pfVar20[1];
          BStack_21.m_Center.z = pfVar20[2];
          BStack_21.m_Extents.x = pfVar20[3];
          BStack_21.m_Extents.y = pfVar20[4];
          BStack_21.m_Extents.z = pfVar20[5];
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff2c,&BStack_21,(MethodInfo *)0x0);
          in_stack_23 = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar22,(MethodInfo *)0x0);
          pfVar20 = (float *)func_?();
          BStack_21.m_Center.x = *pfVar20;
          BStack_21.m_Center.y = pfVar20[1];
          BStack_21.m_Center.z = pfVar20[2];
          BStack_21.m_Extents.x = pfVar20[3];
          BStack_21.m_Extents.y = pfVar20[4];
          BStack_21.m_Extents.z = pfVar20[5];
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xffffff20,&BStack_21,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar22,(MethodInfo *)0x0);
          pfVar20 = (float *)func_?();
          BStack_21.m_Center.x = *pfVar20;
          BStack_21.m_Center.y = pfVar20[1];
          BStack_21.m_Center.z = pfVar20[2];
          BStack_21.m_Extents.x = pfVar20[3];
          BStack_21.m_Extents.y = pfVar20[4];
          BStack_21.m_Extents.z = pfVar20[5];
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff14,&BStack_21,(MethodInfo *)0x0);
          uStack_24._0_4_ = pVVar22->x;
          uStack_24._4_4_ = pVVar22->y;
          fVar18 = pVVar22->z;
          pfVar20 = (float *)func_?();
          BStack_21.m_Center.x = *pfVar20;
          BStack_21.m_Center.y = pfVar20[1];
          BStack_21.m_Center.z = pfVar20[2];
          BStack_21.m_Extents.x = pfVar20[3];
          BStack_21.m_Extents.y = pfVar20[4];
          BStack_21.m_Extents.z = pfVar20[5];
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&puStack_25,&BStack_21,(MethodInfo *)0x0);
          min0.z = fVar18;
          min0.x = (float)(undefined4)uStack_24;
          min0.y = (float)uStack_24._4_4_;
          pVVar22 = MathFunctions::MathFunctions_GetMinVector
                              ((Vector3 *)&stack0xfffffefc,min0,*pVVar22,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar22,(MethodInfo *)0x0);
          pfVar20 = (float *)func_?();
          BStack_21.m_Center.x = *pfVar20;
          BStack_21.m_Center.y = pfVar20[1];
          BStack_21.m_Center.z = pfVar20[2];
          BStack_21.m_Extents.x = pfVar20[3];
          BStack_21.m_Extents.y = pfVar20[4];
          BStack_21.m_Extents.z = pfVar20[5];
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffef0,&BStack_21,(MethodInfo *)0x0);
          uStack_24._0_4_ = pVVar22->x;
          uStack_24._4_4_ = pVVar22->y;
          fVar18 = pVVar22->z;
          pfVar20 = (float *)func_?();
          BStack_21.m_Center.x = *pfVar20;
          BStack_21.m_Center.y = pfVar20[1];
          BStack_21.m_Center.z = pfVar20[2];
          BStack_21.m_Extents.x = pfVar20[3];
          BStack_21.m_Extents.y = pfVar20[4];
          BStack_21.m_Extents.z = pfVar20[5];
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffee4,&BStack_21,(MethodInfo *)0x0);
          max0.z = fVar18;
          max0.x = (float)(undefined4)uStack_24;
          max0.y = (float)uStack_24._4_4_;
          pVVar22 = MathFunctions::MathFunctions_GetMaxVector
                              ((Vector3 *)&stack0xffffff3c,max0,*pVVar22,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar22,(MethodInfo *)0x0);
          fVar14 = 0.0;
          uVar26._0_1_ = 0;
          uVar26._1_3_ = 0;
          fVar18 = 0.0;
          fVar13 = 0.0;
          value.m_Center.y = BStack_6.m_Center.y;
          value.m_Center.x = BStack_6.m_Center.x;
          value.m_Center.z = BStack_6.m_Center.z;
          value.m_Extents.x = BStack_6.m_Extents.x;
          value.m_Extents.y = BStack_6.m_Extents.y;
          value.m_Extents.z = BStack_6.m_Extents.z;
          mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
          Nullable_1_UnityEngine_Bounds___ctor
                    ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffff64,value,
                     MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_
                    );
          __return_storage_ptr__->hasValue = (bool)uVar26;
          *(int3 *)&__return_storage_ptr__->field_0x1 = SUB43(uVar26,1);
          (__return_storage_ptr__->value).m_Center.x = fVar18;
          (__return_storage_ptr__->value).m_Center.y = fVar13;
          (__return_storage_ptr__->value).m_Center.z = 0.0;
          (__return_storage_ptr__->value).m_Extents.x = 0.0;
          (__return_storage_ptr__->value).m_Extents.y = 0.0;
          (__return_storage_ptr__->value).m_Extents.z = fVar14;
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffff80,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__
               ,in_stack_23);
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  uVar26 = func_?();
  func_?(uVar26);
  pcVar27 = (code *)swi(3);
  pNVar11 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar27)();
  return pNVar11;
}


/* Vector3 GetClosestGridPoint(Vector3, Quaternion, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,Vector3 worldPosition,Quaternion rotation,
                    float gridSize,Vector3 scale,MethodInfo *method)

{
  func_?(&stack0xffffffb0,0,0x40);
  func_?(&fStack_1,0,0x40);
  point.y = scale.y;
  point.x = scale.x;
  point.z = scale.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_3,rotation,point,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  scale.z = pVVar2->z;
  VStack_3.x = (float)uVar4 * _UNK_?;
  VStack_3.y = (float)uVar5 * _UNK_?;
  VStack_3.z = scale.z * _UNK_?;
  if (cRam_? == '\0') {
    scale.x = (float)uVar4;
    scale.y = (float)uVar5;
    func_?();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar6->oneVector).x;
  uVar8 = (pVVar6->oneVector).y;
  scale.z = (pVVar6->oneVector).z * gridSize;
  pos.y = VStack_3.y;
  pos.x = VStack_3.x;
  pos.z = VStack_3.z;
  s.y = (float)uVar8 * gridSize;
  s.x = (float)uVar7 * gridSize;
  s.z = scale.z;
  scale.x = (float)uVar7;
  scale.y = (float)uVar8;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
            ((Matrix4x4 *)&stack0xffffff30,pos,rotation,s,(MethodInfo *)0x0);
  pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffff30,(Matrix4x4 *)&stack0xffffffb0,(MethodInfo *)0x0)
  ;
  fStack_1 = pMVar9->m00;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&scale,(Matrix4x4 *)&fStack_1,worldPosition,(MethodInfo *)pMVar9->m31);
  pVVar2 = MathFunctions::MathFunctions_RoundVector(&scale,*pVVar2,0,(MethodInfo *)0x0);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&scale,(Matrix4x4 *)&stack0xffffffb0,*pVVar2,(MethodInfo *)0x0);
  fVar10 = pVVar2->y;
  fVar11 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar10;
  __return_storage_ptr__->z = fVar11;
  return __return_storage_ptr__;
}


/* Vector3[] GetCorners() */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?();
  }
  else if (pVVar1->max_length != 0) {
    pVVar1->vector[0].x = -0.5;
    pVVar1->vector[0].y = 0.5;
    pVVar1->vector[0].z = -0.5;
    if (1 < pVVar1->max_length) {
      pVVar1->vector[1].x = 0.5;
      pVVar1->vector[1].y = 0.5;
      pVVar1->vector[1].z = -0.5;
      if (2 < pVVar1->max_length) {
        pVVar1->vector[2].x = 0.5;
        pVVar1->vector[2].y = 0.5;
        pVVar1->vector[2].z = 0.5;
        if (3 < pVVar1->max_length) {
          pVVar1->vector[3].x = -0.5;
          pVVar1->vector[3].y = 0.5;
          pVVar1->vector[3].z = 0.5;
          if (4 < pVVar1->max_length) {
            pVVar1->vector[4].x = -0.5;
            pVVar1->vector[4].y = -0.5;
            pVVar1->vector[4].z = 0.5;
            if (5 < pVVar1->max_length) {
              pVVar1->vector[5].x = 0.5;
              pVVar1->vector[5].y = -0.5;
              pVVar1->vector[5].z = 0.5;
              if (6 < pVVar1->max_length) {
                pVVar1->vector[6].x = 0.5;
                pVVar1->vector[6].y = -0.5;
                pVVar1->vector[6].z = -0.5;
                if (7 < pVVar1->max_length) {
                  pVVar1->vector[7].x = -0.5;
                  pVVar1->vector[7].y = -0.5;
                  pVVar1->vector[7].z = -0.5;
                  return pVVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar2)();
  return pVVar1;
}


/* Vector3[] GetCorners(Bounds) */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners_1
          (Bounds bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  fVar1 = bounds.m_Center.x - bounds.m_Extents.x;
  fVar2 = bounds.m_Center.z - bounds.m_Extents.z;
  fVar3 = bounds.m_Center.y - bounds.m_Extents.y;
  fVar4 = bounds.m_Extents.x + bounds.m_Center.x;
  fVar5 = bounds.m_Extents.y + bounds.m_Center.y;
  fVar6 = bounds.m_Extents.z + bounds.m_Center.z;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar7 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  if (pVVar7 == (Vector3__Array *)0x0) {
    func_?();
  }
  else if (pVVar7->max_length != 0) {
    pVVar7->vector[0].x = fVar1;
    pVVar7->vector[0].y = fVar5;
    pVVar7->vector[0].z = fVar2;
    if (1 < pVVar7->max_length) {
      pVVar7->vector[1].x = fVar4;
      pVVar7->vector[1].y = fVar5;
      pVVar7->vector[1].z = fVar2;
      if (2 < pVVar7->max_length) {
        pVVar7->vector[2].x = fVar4;
        pVVar7->vector[2].y = fVar5;
        pVVar7->vector[2].z = fVar6;
        if (3 < pVVar7->max_length) {
          pVVar7->vector[3].x = fVar1;
          pVVar7->vector[3].y = fVar5;
          pVVar7->vector[3].z = fVar6;
          if (4 < pVVar7->max_length) {
            pVVar7->vector[4].x = fVar1;
            pVVar7->vector[4].y = fVar3;
            pVVar7->vector[4].z = fVar6;
            if (5 < pVVar7->max_length) {
              pVVar7->vector[5].x = fVar4;
              pVVar7->vector[5].y = fVar3;
              pVVar7->vector[5].z = fVar6;
              if (6 < pVVar7->max_length) {
                pVVar7->vector[6].x = fVar4;
                pVVar7->vector[6].y = fVar3;
                pVVar7->vector[6].z = fVar2;
                if (7 < pVVar7->max_length) {
                  pVVar7->vector[7].x = fVar1;
                  pVVar7->vector[7].y = fVar3;
                  pVVar7->vector[7].z = fVar2;
                  return pVVar7;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar7 = (Vector3__Array *)(*pcVar8)();
  return pVVar7;
}


/* Vector3[] GetCorners(Vector3, Vector3) */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners_2
          (Vector3 min,Vector3 max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?();
  }
  else if (pVVar1->max_length != 0) {
    pVVar1->vector[0].x = min.x;
    pVVar1->vector[0].y = max.y;
    pVVar1->vector[0].z = min.z;
    if (1 < pVVar1->max_length) {
      uVar2 = max._0_8_;
      pVVar1->vector[1].x = (float)(int)uVar2;
      pVVar1->vector[1].y = (float)(int)((ulonglong)uVar2 >> 0x20);
      pVVar1->vector[1].z = min.z;
      if (2 < pVVar1->max_length) {
        pVVar1->vector[2].x = (float)(int)uVar2;
        pVVar1->vector[2].y = (float)(int)((ulonglong)uVar2 >> 0x20);
        pVVar1->vector[2].z = max.z;
        if (3 < pVVar1->max_length) {
          pVVar1->vector[3].x = min.x;
          pVVar1->vector[3].y = max.y;
          pVVar1->vector[3].z = max.z;
          if (4 < pVVar1->max_length) {
            uVar2 = min._0_8_;
            pVVar1->vector[4].x = (float)(int)uVar2;
            pVVar1->vector[4].y = (float)(int)((ulonglong)uVar2 >> 0x20);
            pVVar1->vector[4].z = max.z;
            if (5 < pVVar1->max_length) {
              pVVar1->vector[5].x = max.x;
              pVVar1->vector[5].y = min.y;
              pVVar1->vector[5].z = max.z;
              if (6 < pVVar1->max_length) {
                pVVar1->vector[6].x = max.x;
                pVVar1->vector[6].y = min.y;
                pVVar1->vector[6].z = min.z;
                if (7 < pVVar1->max_length) {
                  pVVar1->vector[7].x = (float)(int)uVar2;
                  pVVar1->vector[7].y = (float)(int)((ulonglong)uVar2 >> 0x20);
                  pVVar1->vector[7].z = min.z;
                  return pVVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar3)();
  return pVVar1;
}


/* Vector3[] GetTriangleVertices(Int32, GameObject) */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetTriangleVertices
          (int32_t triangleIndex,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  if (gameObject != (GameObject *)0x0) {
    this = (MeshFilter *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                     );
    if (this != (MeshFilter *)0x0) {
      pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                         (this,(MethodInfo *)0x0);
      if (pMVar2 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices(pMVar2,(MethodInfo *)0x0);
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this,(MethodInfo *)0x0);
        if (pMVar2 != (Mesh *)0x0) {
          pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                              (pMVar2,(MethodInfo *)0x0);
          if (pIVar3 != (Int32__Array *)0x0) {
            if (pIVar3->max_length < 0x30740d85) goto code_?;
            if (pMVar2 != (Mesh *)0x0) {
              pMVar4 = (Mesh__Class *)pIVar3[-0x6e8dd9].vector[8];
              if (pMVar2[1].klass <= pMVar4) goto code_?;
              if (pVVar1 != (Vector3__Array *)0x0) {
                MVar5._.m_CachedPtr = pMVar2[(int)((int)&(pMVar4->_0).image + 1)].fields._;
                pMVar6 = pMVar2[(int)((int)&(pMVar4->_0).image + 2)].klass;
                if (pVVar1->max_length == 0) goto code_?;
                pVVar1->vector[0].x = (float)pMVar2[(int)((int)&(pMVar4->_0).image + 1)].monitor;
                pVVar1->vector[0].y = (float)MVar5._.m_CachedPtr;
                pVVar1->vector[0].z = (float)pMVar6;
                pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                         MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                if (pMVar2 != (Mesh *)0x0) {
                  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                      (pMVar2,(MethodInfo *)0x0);
                  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                           MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                  if (pMVar2 != (Mesh *)0x0) {
                    pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                                        (pMVar2,(MethodInfo *)0x0);
                    if (pIVar3 != (Int32__Array *)0x0) {
                      if (pIVar3->max_length < 0x30740d86) goto code_?;
                      if (pVVar7 != (Vector3__Array *)0x0) {
                        uVar8 = pIVar3[-0x6e8dd9].vector[9];
                        if (pVVar7->max_length <= uVar8) goto code_?;
                        fVar9 = pVVar7->vector[uVar8].y;
                        fVar10 = pVVar7->vector[uVar8].z;
                        if (pVVar1->max_length < 2) goto code_?;
                        pVVar1->vector[1].x = pVVar7->vector[uVar8].x;
                        pVVar1->vector[1].y = fVar9;
                        pVVar1->vector[1].z = fVar10;
                        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                 MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                        if (pMVar2 != (Mesh *)0x0) {
                          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                              (pMVar2,(MethodInfo *)0x0);
                          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                   MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                          if (pMVar2 != (Mesh *)0x0) {
                            pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_get_triangles(pMVar2,(MethodInfo *)0x0);
                            if (pIVar3 != (Int32__Array *)0x0) {
                              if (pIVar3->max_length < 0x30740d87) goto code_?;
                              if (pVVar7 != (Vector3__Array *)0x0) {
                                uVar8 = pIVar3[-0x6e8dd9].vector[10];
                                if (uVar8 < pVVar7->max_length) {
                                  fVar9 = pVVar7->vector[uVar8].y;
                                  fVar10 = pVVar7->vector[uVar8].z;
                                  if (2 < pVVar1->max_length) {
                                    pVVar1->vector[2].x = pVVar7->vector[uVar8].x;
                                    pVVar1->vector[2].y = fVar9;
                                    pVVar1->vector[2].z = fVar10;
                                    return pVVar1;
                                  }
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
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar11)();
  return pVVar1;
}


/* Vector3[] GetVertices() */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?();
  }
  else if (pVVar1->max_length != 0) {
    pVVar1->vector[0].x = -0.5;
    pVVar1->vector[0].y = 0.5;
    pVVar1->vector[0].z = -0.5;
    if (1 < pVVar1->max_length) {
      pVVar1->vector[1].x = 0.5;
      pVVar1->vector[1].y = 0.5;
      pVVar1->vector[1].z = -0.5;
      if (2 < pVVar1->max_length) {
        pVVar1->vector[2].x = 0.5;
        pVVar1->vector[2].y = 0.5;
        pVVar1->vector[2].z = 0.5;
        if (3 < pVVar1->max_length) {
          pVVar1->vector[3].x = -0.5;
          pVVar1->vector[3].y = 0.5;
          pVVar1->vector[3].z = 0.5;
          if (4 < pVVar1->max_length) {
            pVVar1->vector[4].x = -0.5;
            pVVar1->vector[4].y = -0.5;
            pVVar1->vector[4].z = 0.5;
            if (5 < pVVar1->max_length) {
              pVVar1->vector[5].x = 0.5;
              pVVar1->vector[5].y = -0.5;
              pVVar1->vector[5].z = 0.5;
              if (6 < pVVar1->max_length) {
                pVVar1->vector[6].x = 0.5;
                pVVar1->vector[6].y = -0.5;
                pVVar1->vector[6].z = -0.5;
                if (7 < pVVar1->max_length) {
                  pVVar1->vector[7].x = -0.5;
                  pVVar1->vector[7].y = -0.5;
                  pVVar1->vector[7].z = -0.5;
                  pVVar1 = SharedCubeFunctions_GetVertices_1(pVVar1,(MethodInfo *)0x0);
                  return pVVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar2)();
  return pVVar1;
}


/* Vector3[] GetVertices(Vector3[]) */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices_1
          (Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
  List_1_UnityEngine_Vector3___ctor_1
            ((List_1_UnityEngine_Vector3_ *)this,(IEnumerable_1_UnityEngine_Vector3_ *)corners,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
            );
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pMStack1 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pMStack2 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    pMStack1 = (MethodInfo *)this;
    func_?();
    pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    uStack4._0_4_ = pVVar3->alias;
    uStack4._4_4_ = pVVar3->path;
    pMStack5 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    pVStack6 = pVVar3->asset;
    pMStack2 = (MethodInfo *)this;
    func_?();
    pMVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                       );
    return (Vector3__Array *)pMVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3__Array *)(*pcVar8)();
  return pVVar9;
}


/* Void GetVertices(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices_2
               (CubePickingInfo *info,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(0x1e38);
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    if ((info->fields).pickedEdge == 0) {
      return;
    }
    VStack_1.x = (float)(info->fields).pickedEdge;
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    VStack_1.y = *(float *)&(info->fields).iLocalPos;
    iVar2 = (info->fields).iLocalPos.z;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    iVector.z = iVar2;
    iVector._0_4_ = VStack_1.y;
    pVVar3 = Cube::Cube_GetEdgeVerticesWorld
                       (gameObject,cube,face,(Edge__Enum)VStack_1.x,iVector,(MethodInfo *)0x0);
    pVVar4 = Cube::Cube_GetEdge((info->fields).cube,(info->fields).pickedFace,
                                (info->fields).pickedEdge,(MethodInfo *)0x0);
    if (pVVar4 != (Vector3__Array *)0x0) {
      if ((pVVar4->max_length == 0) || (pVVar4->max_length < 2)) {
code_?:
        func_?();
      }
      else {
        uVar5 = pVVar4->vector[1].x;
        uVar6 = pVVar4->vector[1].y;
        uVar7 = pVVar4->vector[0].x;
        this = pVVar4->vector[0].y;
        in_stack_8 = pVVar4->vector[0].z - pVVar4->vector[1].z;
        VStack_1.z = (float)&stack0x00000018;
        uStack_9 = uStack_9 & 0xffffffff00000000;
        in_stack_10 = CONCAT44((float)this - (float)uVar6,(float)uVar7 - (float)uVar5);
        VStack_1.y = (float)&UNK_?;
        fVar11 = (float10)func_?();
        VStack_1.z = (float)fVar11;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        VStack_1.y = 0.0;
        VStack_1.x = 0.0;
        if ((GameObject *)this != (GameObject *)0x0) {
          while (fVar12 = VStack_1.y, fVar13 = VStack_1.x,
                this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform((GameObject *)this,(MethodInfo *)0x0),
                this_00 != (Transform *)0x0) {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                (&VStack_1,this_00,(MethodInfo *)0x0);
            uStack_15._0_4_ = pVVar14->x;
            uStack_15._4_4_ = pVVar14->y;
            fStack_16 = pVVar14->z;
            if (fVar13 == 0.0) {
              VStack_1.y = VStack_1.y + (float)(undefined4)uStack_15;
              VStack_1.x = (float)((int)VStack_1.x + Edge__Enum_Front);
            }
            else {
              if (fVar13 != 1.4013e-45) {
                if (fVar13 != 2.8026e-45) {
                  uVar17 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                  this_01 = (IndexOutOfRangeException *)func_?(uVar17);
                  method_00 = (MethodInfo *)0x0;
                  message = (String *)func_?(0xd008);
                  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                            (this_01,message,method_00);
                  uVar18 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
                  func_?(this_01,uVar18);
                  goto code_?;
                }
                fVar13 = ((fVar12 + fStack_16) / _UNK_?) * _UNK_? * VStack_1.z;
                uVar19 = 0;
                if (pVVar3 != (Vector3__Array *)0x0) goto code_?;
                break;
              }
              VStack_1.y = fVar12 + (float)uStack_15._4_4_;
              VStack_1.x = 2.8026e-45;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
code_?:
  if ((int)pVVar3->max_length <= (int)uVar19) {
    return;
  }
  if (pVVar3->max_length <= uVar19) goto code_?;
  fStack_21 = (info->fields).point.z;
  uStack_9._0_4_ = (info->fields).point.x;
  uStack_9._4_4_ = (info->fields).point.y;
  uStack_15._0_4_ = pVVar3->vector[uVar19].x;
  uStack_15._4_4_ = pVVar3->vector[uVar19].y;
  fStack_16 = pVVar3->vector[uVar19].z;
  VStack_1.z = (float)(undefined4)uStack_15 - (float)(undefined4)uStack_9;
  VStack_1.y = (float)uStack_15._4_4_ - (float)uStack_9._4_4_;
  VStack_1.x = fStack_16 - fStack_21;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar22 = (double)(VStack_1.z * VStack_1.z + VStack_1.y * VStack_1.y +
                   VStack_1.x * VStack_1.x);
  if (dVar22 < 0.0) {
    func_?();
  }
  else {
    dVar22 = SQRT(dVar22);
  }
  if ((float)dVar22 < fVar13) {
    if (uVar19 != 0) {
      if (uVar19 == 1) {
        (info->fields).pickedEdgeIndex1 = 1;
      }
      goto code_?;
    }
    uVar19 = 1;
    (info->fields).pickedEdgeIndex0 = 1;
  }
  else {
code_?:
    uVar19 = uVar19 + 1;
  }
  goto code_?;
}


/* Vector3 GetWorldCenter(List`1[UnityEngine.Transform]) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                    (Vector3 *__return_storage_ptr__,List_1_UnityEngine_Transform_ *transforms,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pNVar1 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2
                     (&NStack_2,transforms,(MethodInfo *)0x0);
  if (pNVar1->hasValue == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    __return_storage_ptr__->x = (pVVar3->zeroVector).x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  pBVar6 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
           Nullable_1_UnityEngine_Bounds__get_Value
                     (&NStack_2.value,(Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffc4,
                      MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
  fVar5 = (pBVar6->m_Center).y;
  fVar4 = (pBVar6->m_Center).z;
  __return_storage_ptr__->x = (pBVar6->m_Center).x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 GetWorldCenter(Transform) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1
                    (Vector3 *__return_storage_ptr__,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pNVar1 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                     (&NStack_2,transform,(MethodInfo *)0x0);
  if (pNVar1->hasValue == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    __return_storage_ptr__->x = (pVVar3->zeroVector).x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  pBVar6 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
           Nullable_1_UnityEngine_Bounds__get_Value
                     (&NStack_2.value,(Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffc4,
                      MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
  fVar5 = (pBVar6->m_Center).y;
  fVar4 = (pBVar6->m_Center).z;
  __return_storage_ptr__->x = (pBVar6->m_Center).x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 LocalToWorld(GameObject, IntVector) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                    (Vector3 *__return_storage_ptr__,GameObject *gameObject,IntVector iVector,
                    MethodInfo *method)

{
  if (gameObject != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      position.y = (float)(int)iVector.y;
      position.x = (float)(int)iVector.x;
      position.z = (float)(int)iVector.z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         ((Vector3 *)&stack0xfffffff0,this,position,(MethodInfo *)0x0);
      fVar2 = pVVar1->y;
      fVar3 = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* CubeOutOfBoundState MoveEdge(MVCubeModelBase, CubePickingInfo, Vector3, Single ByRef, Single
   ByRef, Single, Boolean ByRef, Boolean, Boolean, EditCubeChange ByRef) */

CubeOutOfBoundState__Enum
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_MoveEdge
          (MVCubeModelBase *cmb,CubePickingInfo *info,Vector3 mousePositionDelta,float *delta,
          float *deltaAccum,float mouseSensitivity,bool *edgeMoved,bool edgeIndex0,bool edgeIndex1,
          EditCubeChange__Enum *editCubeChange,MethodInfo *method)

{
  byte *pbVar1;
  MVCubeModelBase__Class **ppMVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  Face__Enum FVar14;
  Vector3__StaticFields *pVVar15;
  code *pcVar16;
  Matrix4x4 lhs;
  Vector4 vector;
  Vector3 start;
  Vector3 end;
  Color color;
  Vector3 start_00;
  Vector3 end_00;
  Color color_00;
  Matrix4x4 lhs_00;
  Matrix4x4 lhs_01;
  Matrix4x4 lhs_02;
  Vector3 position;
  Vector3 position_00;
  Vector4 vector_00;
  Vector4 vector_01;
  Vector4 vector_02;
  Vector3 value;
  Vector3 axis;
  Vector3 axis_00;
  Vector3 axis_01;
  bool bVar17;
  byte extraout_AH;
  Cube *pCVar18;
  Transform *pTVar19;
  undefined8 *puVar20;
  Matrix4x4 *pMVar21;
  Vector3 *pVVar22;
  Vector4 *pVVar23;
  Camera *pCVar24;
  undefined1 (*pauVar25) [12];
  float *pfVar26;
  CubeOutOfBoundState__Enum CVar27;
  byte extraout_DH;
  byte bVar28;
  bool bVar29;
  bool bVar30;
  float10 fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  Vector4 VStack_40;
  CubeOutOfBoundState__Enum CStack_41;
  undefined1 auStack_42 [12];
  undefined4 uStack_43;
  float fStack_44;
  float fStack_45;
  undefined8 uStack_46;
  float fStack_47;
  Vector3 VStack_48;
  float fStack_49;
  GameObject *pGStack_50;
  float fStack_51;
  float fStack_52;
  float fStack_53;
  float fStack_54;
  
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(0x82a0);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((info != (CubePickingInfo *)0x0) && (cmb != (MVCubeModelBase *)0x0)) {
    pCVar18 = MVCubeModelBase::MVCubeModelBase_GetCube
                        (cmb,(info->fields).iLocalPos,(MethodInfo *)0x0);
    uStack_43 = pCVar18;
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    bVar17 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                       ((CubeBase *)uStack_43,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar17 != 0) {
      return CubeOutOfBoundState__Enum_WithinBounds;
    }
    pGStack_50 = (cmb->fields)._.gameObject;
    stack0xffffffa8 = (double)CONCAT44((info->fields).pickedFace,auStack_42._8_4_);
    CStack_41 = CubeOutOfBoundState__Enum_NoChange;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(0xe710);
      cRam_? = '\x01';
    }
    switch(uStack_43) {
    case (Cube *)0x0:
    case (Cube *)0x1:
      if ((pGStack_50 == (GameObject *)0x0) ||
         (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_50,(MethodInfo *)0x0), pTVar19 == (Transform *)0x0))
      goto code_?;
      pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_48,pTVar19,(MethodInfo *)0x0);
      pGStack_50 = (GameObject *)pVVar22->y;
      break;
    case (Cube *)0x2:
    case (Cube *)0x3:
      if ((pGStack_50 == (GameObject *)0x0) ||
         (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_50,(MethodInfo *)0x0), pTVar19 == (Transform *)0x0))
      goto code_?;
      pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_48,pTVar19,(MethodInfo *)0x0);
      pGStack_50 = (GameObject *)pVVar22->z;
      break;
    case (Cube *)0x4:
    case (Cube *)0x5:
      if ((pGStack_50 == (GameObject *)0x0) ||
         (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_50,(MethodInfo *)0x0), pTVar19 == (Transform *)0x0))
      goto code_?;
      pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_48,pTVar19,(MethodInfo *)0x0);
      pGStack_50 = (GameObject *)pVVar22->x;
      break;
    default:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
      pGStack_50 = (GameObject *)0x0;
    }
    puVar20 = (undefined8 *)
              (*(code *)(cmb->klass->vtable).get_Scale.method)
                        (&VStack_48,cmb,(cmb->klass->vtable).set_Scale.methodPtr);
    fStack_54 = *(float *)(puVar20 + 1);
    fStack_52 = (float)*puVar20;
    fStack_53 = (float)((ulonglong)*puVar20 >> 0x20);
    puVar20 = (undefined8 *)
              (*(code *)(cmb->klass->vtable).get_Scale.method)
                        (&fStack_45,(short)cmb,(cmb->klass->vtable).set_Scale.methodPtr);
    fStack_49 = *(float *)(puVar20 + 1);
    VStack_48.y = (float)*puVar20;
    VStack_48.z = (float)((ulonglong)*puVar20 >> 0x20);
    puVar20 = (undefined8 *)
              (*(code *)(cmb->klass->vtable).get_Scale.method)
                        (auStack_42,cmb,(cmb->klass->vtable).set_Scale.methodPtr);
    uStack_46 = *puVar20;
    fStack_47 = *(float *)(puVar20 + 1);
    pTVar19 = (cmb->fields)._.transform;
    pGStack_50 = (GameObject *)
                 (((float)pGStack_50 * _UNK_?) /
                 ((VStack_48.z + fStack_52 + fStack_47) / _UNK_?));
    if (pTVar19 != (Transform *)0x0) {
      pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                          ((Matrix4x4 *)&stack0xffffff10,pTVar19,(MethodInfo *)0x0);
      fStack_51 = pMVar21->m00;
      fStack_52 = pMVar21->m10;
      fStack_53 = pMVar21->m20;
      fStack_54 = pMVar21->m30;
      fVar35 = pMVar21->m01;
      fVar34 = pMVar21->m11;
      fVar38 = pMVar21->m21;
      fVar32 = pMVar21->m31;
      fVar33 = pMVar21->m02;
      fVar36 = pMVar21->m12;
      fVar37 = pMVar21->m22;
      fVar39 = pMVar21->m32;
      VStack_40.x = pMVar21->m03;
      VStack_40.y = pMVar21->m13;
      VStack_40.z = pMVar21->m23;
      VStack_40.w = pMVar21->m33;
      FVar14 = (info->fields).pickedFace;
      uStack_43 = (Cube *)FVar14;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pVVar22 = Cube::Cube_GetFaceAxis(&VStack_48,(Face__Enum)uStack_43,(MethodInfo *)0x0);
      uStack_46._0_4_ = pVVar22->x;
      uStack_46._4_4_ = pVVar22->y;
      fStack_47 = pVVar22->z;
      VStack_48.x = (float)uStack_46;
      VStack_48.y = uStack_46._4_4_;
      fStack_49 = 0.0;
      lhs.m10 = fStack_52;
      lhs.m00 = fStack_51;
      lhs.m20 = fStack_53;
      lhs.m30 = fStack_54;
      lhs.m01 = fVar35;
      lhs.m11 = fVar34;
      lhs.m21 = fVar38;
      lhs.m31 = fVar32;
      lhs.m02 = fVar33;
      lhs.m12 = fVar36;
      lhs.m22 = fVar37;
      lhs.m32 = fVar39;
      lhs.m03 = VStack_40.x;
      lhs.m13 = VStack_40.y;
      lhs.m23 = VStack_40.z;
      lhs.m33 = VStack_40.w;
      vector.w = 0.0;
      vector.x = pVVar22->x;
      vector.y = pVVar22->y;
      vector.z = pVVar22->z;
      VStack_48.z = fStack_47;
      pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                          (&VStack_40,lhs,vector,(MethodInfo *)0x0);
      VStack_40.x = pVVar23->x;
      fVar34 = pVVar23->y;
      fVar38 = pVVar23->z;
      VStack_40.w = pVVar23->w;
      uVar4 = (info->fields).point.x;
      uVar9 = (info->fields).point.y;
      fVar35 = *deltaAccum;
      fVar32 = (float)uVar4 + VStack_40.x * fVar35;
      fStack_52 = (float)uVar9 + fVar34 * fVar35;
      fStack_44 = (info->fields).point.z + fVar38 * fVar35;
      stack0xffffffa8 = (double)CONCAT44(fStack_52,auStack_42._8_4_);
      fStack_51 = VStack_40.x + fVar32;
      uStack_46 = CONCAT44(fStack_52,fVar32);
      fStack_52 = fVar34 + fStack_52;
      fStack_53 = fVar38 + fStack_44;
      VStack_40.y = fVar34;
      VStack_40.z = fVar38;
      fStack_47 = fStack_44;
      VStack_48.y = VStack_40.x;
      VStack_48.z = fVar34;
      fStack_49 = fVar38;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      end.y = fStack_52;
      end.x = fStack_51;
      start.z = fStack_47;
      start.x = (float)uStack_46;
      start.y = uStack_46._4_4_;
      end.z = fStack_53;
      color.g = (float)_UNK_?;
      color.r = (float)_UNK_?;
      color.b = (float)_UNK_?;
      color.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                (start,end,color,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5 = (pVVar15->upVector).x;
      uVar10 = (pVVar15->upVector).y;
      fStack_54 = (pVVar15->upVector).z;
      fStack_53 = fStack_54 + fStack_44;
      end_00.y = (float)uVar10 + (float)uStack_43;
      end_00.x = (float)uVar5 + fVar32;
      start_00.z = fStack_47;
      start_00.x = (float)uStack_46;
      start_00.y = uStack_46._4_4_;
      end_00.z = fStack_53;
      color_00.g = (float)_UNK_?;
      color_00.r = (float)_UNK_?;
      color_00.b = (float)_UNK_?;
      color_00.a = _UNK_?;
      fStack_52 = (float)uVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                (start_00,end_00,color_00,(MethodInfo *)0x0);
      pCVar24 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      fStack_51 = VStack_40.x + fVar32;
      fStack_52 = fVar34 + (float)uStack_43;
      fStack_53 = fVar38 + fStack_44;
      if (pCVar24 != (Camera *)0x0) {
        position.y = fStack_52;
        position.x = fStack_51;
        position.z = fStack_53;
        pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            ((Vector3 *)auStack_42,pCVar24,position,(MethodInfo *)0x0);
        uVar6 = pVVar22->x;
        uVar11 = pVVar22->y;
        fStack_54 = pVVar22->z;
        fStack_52 = (float)uVar6;
        fStack_53 = (float)uVar11;
        pCVar24 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar24 != (Camera *)0x0) {
          position_00.z._0_2_ = SUB42(fStack_47,0);
          position_00.x = (float)uStack_46;
          position_00.y = uStack_46._4_4_;
          position_00.z._2_2_ = (short)((uint)fStack_47 >> 0x10);
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              ((Vector3 *)auStack_42,pCVar24,position_00,(MethodInfo *)0x0);
          uVar7 = pVVar22->x;
          uVar12 = pVVar22->y;
          VStack_40.x = fStack_52 - (float)uVar7;
          VStack_40.y = fStack_53 - (float)uVar12;
          fStack_47 = fStack_54 - pVVar22->z;
          VStack_40.z = 0.0;
          VStack_40.w = 0.0;
          uStack_46 = CONCAT44(VStack_40.y,VStack_40.x);
          fStack_53 = fStack_47;
          fVar31 = (float10)func_?((short)&uStack_46,0);
          stack0xffffffa8 = (double)CONCAT44((float)fVar31,auStack_42._8_4_);
          if (0.0 < (float)fVar31) {
            value.y = VStack_40.y;
            value.x = VStack_40.x;
            value.z = fStack_53;
            pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)auStack_42,value,(MethodInfo *)0x0);
            uVar8 = pVVar22->x;
            uVar13 = pVVar22->y;
            fStack_54 = pVVar22->z;
            fStack_52 = (float)uVar8;
            fStack_53 = (float)uVar13;
            fVar31 = (float10)func_?();
            *delta = ((mousePositionDelta.y * fStack_53 + mousePositionDelta.x * fStack_52 +
                      mousePositionDelta.z * fStack_54) / (float)fVar31) * _UNK_? + *delta;
          }
          if ((float)((uint)*delta & _UNK_?) < (float)pGStack_50) {
            *edgeMoved = 0;
            return CStack_41;
          }
          register0x00001200 = (double)(float)pGStack_50;
          fVar31 = (float10)func_?();
          unique0x0000aa00 = (double)fVar31;
          fVar35 = *delta;
          *delta = fVar35 - (float)fVar31;
          *deltaAccum = (fVar35 - (float)fVar31) + *deltaAccum;
          fStack_44 = *delta;
          if ((info->fields).pickedEdge == 0) {
            pTVar19 = (cmb->fields)._.transform;
            if (pTVar19 != (Transform *)0x0) {
              pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_worldToLocalMatrix
                                  ((Matrix4x4 *)&stack0xffffff10,pTVar19,(MethodInfo *)0x0);
              VStack_40.x = pMVar21->m00;
              VStack_40.y = pMVar21->m10;
              VStack_40.z = pMVar21->m20;
              VStack_40.w = pMVar21->m30;
              fVar35 = pMVar21->m01;
              fVar34 = pMVar21->m11;
              fVar38 = pMVar21->m21;
              fVar32 = pMVar21->m31;
              fVar33 = pMVar21->m02;
              fVar36 = pMVar21->m12;
              fVar37 = pMVar21->m22;
              fVar39 = pMVar21->m32;
              auStack_42._0_4_ = pMVar21->m03;
              auStack_42._4_4_ = pMVar21->m13;
              auStack_42._8_4_ = pMVar21->m23;
              uStack_43 = (Cube *)pMVar21->m33;
              pauVar25 = (undefined1 (*) [12])func_?(&fStack_45,(short)&VStack_48.y,0);
              fStack_49 = 0.0;
              VStack_48.z = *(float *)(*pauVar25 + 8);
              fStack_52 = (float)*(undefined8 *)*pauVar25;
              fStack_53 = (float)((ulonglong)*(undefined8 *)*pauVar25 >> 0x20);
              VStack_48.x = fStack_52;
              VStack_48.y = fStack_53;
              lhs_00.m10 = VStack_40.y;
              lhs_00.m00 = VStack_40.x;
              lhs_00.m20 = VStack_40.z;
              lhs_00.m30 = VStack_40.w;
              lhs_00.m01 = fVar35;
              lhs_00.m11 = fVar34;
              lhs_00.m21 = fVar38;
              lhs_00.m31 = fVar32;
              lhs_00.m02 = fVar33;
              lhs_00.m12 = fVar36;
              lhs_00.m22 = fVar37;
              lhs_00.m32 = fVar39;
              lhs_00.m03 = (float)auStack_42._0_4_;
              lhs_00.m13 = (float)auStack_42._4_4_;
              lhs_00.m23 = (float)auStack_42._8_4_;
              lhs_00.m33 = (float)uStack_43;
              vector_00.w = 0.0;
              vector_00._0_12_ = *pauVar25;
              fStack_54 = VStack_48.z;
              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                                  (&VStack_40,lhs_00,vector_00,(MethodInfo *)0x0);
              VStack_48.x = pVVar23->x;
              VStack_48.y = pVVar23->y;
              VStack_48.z = pVVar23->z;
              fStack_49 = pVVar23->w;
              pfVar26 = (float *)func_?(&VStack_40,&VStack_48,0);
              fStack_51 = *pfVar26;
              fStack_52 = pfVar26[1];
              fStack_53 = pfVar26[2];
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              axis_00.y = fStack_52;
              axis_00.x = fStack_51;
              axis_00.z = fStack_53;
              Cube::Cube_MoveFace(info,fStack_44,axis_00,&CStack_41,(MethodInfo *)0x0);
              *editCubeChange = EditCubeChange__Enum_FaceMoved;
              goto code_?;
            }
          }
          else {
            pTVar19 = (cmb->fields)._.transform;
            if (edgeIndex0 == 0 && edgeIndex1 == 0) {
              if (pTVar19 != (Transform *)0x0) {
                pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_worldToLocalMatrix
                                    ((Matrix4x4 *)&stack0xffffff10,pTVar19,(MethodInfo *)0x0);
                VStack_40.x = pMVar21->m00;
                VStack_40.y = pMVar21->m10;
                VStack_40.z = pMVar21->m20;
                VStack_40.w = pMVar21->m30;
                fVar35 = pMVar21->m01;
                fVar34 = pMVar21->m11;
                fVar38 = pMVar21->m21;
                fVar32 = pMVar21->m31;
                fVar33 = pMVar21->m02;
                fVar36 = pMVar21->m12;
                fVar37 = pMVar21->m22;
                fVar39 = pMVar21->m32;
                auStack_42._0_4_ = pMVar21->m03;
                auStack_42._4_4_ = pMVar21->m13;
                auStack_42._8_4_ = pMVar21->m23;
                uStack_43 = (Cube *)pMVar21->m33;
                pauVar25 = (undefined1 (*) [12])func_?(&fStack_45,(short)&VStack_48.y,0);
                fStack_49 = 0.0;
                VStack_48.z = *(float *)(*pauVar25 + 8);
                fStack_52 = (float)*(undefined8 *)*pauVar25;
                fStack_53 = (float)((ulonglong)*(undefined8 *)*pauVar25 >> 0x20);
                VStack_48.x = fStack_52;
                VStack_48.y = fStack_53;
                lhs_01.m10 = VStack_40.y;
                lhs_01.m00 = VStack_40.x;
                lhs_01.m20 = VStack_40.z;
                lhs_01.m30 = VStack_40.w;
                lhs_01.m01 = fVar35;
                lhs_01.m11 = fVar34;
                lhs_01.m21 = fVar38;
                lhs_01.m31 = fVar32;
                lhs_01.m02 = fVar33;
                lhs_01.m12 = fVar36;
                lhs_01.m22 = fVar37;
                lhs_01.m32 = fVar39;
                lhs_01.m03 = (float)auStack_42._0_4_;
                lhs_01.m13 = (float)auStack_42._4_4_;
                lhs_01.m23 = (float)auStack_42._8_4_;
                lhs_01.m33 = (float)uStack_43;
                vector_01.w = 0.0;
                vector_01._0_12_ = *pauVar25;
                fStack_54 = VStack_48.z;
                pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                          Matrix4x4_op_Multiply_1(&VStack_40,lhs_01,vector_01,(MethodInfo *)0x0);
                VStack_48.x = pVVar23->x;
                VStack_48.y = pVVar23->y;
                VStack_48.z = pVVar23->z;
                fStack_49 = pVVar23->w;
                pfVar26 = (float *)func_?(&VStack_40,&VStack_48,0);
                fStack_51 = *pfVar26;
                fStack_52 = pfVar26[1];
                fStack_53 = pfVar26[2];
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                axis_01.y = fStack_52;
                axis_01.x = fStack_51;
                axis_01.z = fStack_53;
                Cube::Cube_MoveEdge(info,fStack_44,axis_01,&CStack_41,(MethodInfo *)0x0);
                *editCubeChange = EditCubeChange__Enum_EdgeMoved;
code_?:
                *delta = 0.0;
                *edgeMoved = 1;
                return CStack_41;
              }
            }
            else if (pTVar19 != (Transform *)0x0) {
              pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_worldToLocalMatrix
                                  ((Matrix4x4 *)&stack0xffffff10,pTVar19,(MethodInfo *)0x0);
              VStack_40.x = pMVar21->m00;
              VStack_40.y = pMVar21->m10;
              VStack_40.z = pMVar21->m20;
              VStack_40.w = pMVar21->m30;
              fVar35 = pMVar21->m01;
              fVar34 = pMVar21->m11;
              fVar38 = pMVar21->m21;
              fVar32 = pMVar21->m31;
              fVar33 = pMVar21->m02;
              fVar36 = pMVar21->m12;
              fVar37 = pMVar21->m22;
              fVar39 = pMVar21->m32;
              fStack_45 = pMVar21->m03;
              uStack_46._0_4_ = pMVar21->m13;
              uStack_46._4_4_ = pMVar21->m23;
              fStack_47 = pMVar21->m33;
              pauVar25 = (undefined1 (*) [12])func_?(&fStack_51,(short)&VStack_48.y,0);
              fStack_49 = *(float *)(*pauVar25 + 8);
              VStack_48.y = (float)*(undefined8 *)*pauVar25;
              VStack_48.z = (float)((ulonglong)*(undefined8 *)*pauVar25 >> 0x20);
              fStack_51 = VStack_48.y;
              fStack_52 = VStack_48.z;
              fStack_54 = 0.0;
              lhs_02.m10 = VStack_40.y;
              lhs_02.m00 = VStack_40.x;
              lhs_02.m20 = VStack_40.z;
              lhs_02.m30 = VStack_40.w;
              lhs_02.m01 = fVar35;
              lhs_02.m11 = fVar34;
              lhs_02.m21 = fVar38;
              lhs_02.m31 = fVar32;
              lhs_02.m02 = fVar33;
              lhs_02.m12 = fVar36;
              lhs_02.m22 = fVar37;
              lhs_02.m32 = fVar39;
              lhs_02.m03 = fStack_45;
              lhs_02.m13 = (float)uStack_46;
              lhs_02.m23 = uStack_46._4_4_;
              lhs_02.m33 = fStack_47;
              vector_02.w = 0.0;
              vector_02._0_12_ = *pauVar25;
              fStack_53 = fStack_49;
              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                                  (&VStack_40,lhs_02,vector_02,(MethodInfo *)0x0);
              VStack_48.x = pVVar23->x;
              VStack_48.y = pVVar23->y;
              VStack_48.z = pVVar23->z;
              fStack_49 = pVVar23->w;
              pfVar26 = (float *)func_?(&VStack_40,&VStack_48,0);
              VStack_48.x = *pfVar26;
              VStack_48.y = pfVar26[1];
              VStack_48.z = pfVar26[2];
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              axis.y = VStack_48.y;
              axis.x = VStack_48.x;
              axis.z = VStack_48.z;
              Cube::Cube_MoveVertex
                        (info,fStack_44,axis,edgeIndex0,edgeIndex1,&CStack_41,(MethodInfo *)0x0);
              *editCubeChange = EditCubeChange__Enum_VertexMoved;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pbVar1 = (byte *)((int)&cmb[-0x4420f8].fields._._.OnInputLinkChanged + 2);
  bVar3 = *pbVar1;
  bVar28 = (byte)((uint)&stack0xfffffffc >> 8);
  *pbVar1 = *pbVar1 + bVar28;
  ppMVar2 = &cmb->klass + (int)info;
  bVar29 = CARRY1(*(byte *)ppMVar2,extraout_DH) ||
           CARRY1(*(byte *)ppMVar2 + extraout_DH,CARRY1(bVar3,bVar28));
  *(byte *)ppMVar2 = *(byte *)ppMVar2 + extraout_DH + CARRY1(bVar3,bVar28);
  ppMVar2 = &cmb->klass + (int)info;
  bVar30 = CARRY1(*(byte *)ppMVar2,extraout_DH) || CARRY1(*(byte *)ppMVar2 + extraout_DH,bVar29);
  *(byte *)ppMVar2 = *(byte *)ppMVar2 + extraout_DH + bVar29;
  bVar29 = CARRY1(uStack_43._2_1_,extraout_AH);
  bVar3 = uStack_43._2_1_ + extraout_AH;
  stack0xffffffa8 =
       CONCAT16(bVar3 + bVar30 + extraout_AH + (bVar29 || CARRY1(bVar3,bVar30)),stack0xffffffa8);
  pcVar16 = (code *)swi(3);
  CVar27 = (*pcVar16)();
  return CVar27;
}


/* Single ScaleFactor(GameObject) */

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor
                (GameObject *gameObject,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  iVar3 = 0;
  fStack_4 = 0.0;
  if (gameObject != (GameObject *)0x0) {
    while( true ) {
      fStack_2 = fStack_4;
      fStack_1 = fStack_4;
      this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
      if (this == (Transform *)0x0) break;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         (&VStack_6,this,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar5->x;
      uStack_7._4_4_ = pVVar5->y;
      fStack_8 = pVVar5->z;
      if (iVar3 == 0) {
        fStack_4 = fStack_1 + (float)(undefined4)uStack_7;
      }
      else {
        if (iVar3 != 1) {
          if (iVar3 == 2) {
            return (fStack_2 + fStack_8) / _UNK_?;
          }
          goto code_?;
        }
        fStack_4 = fStack_4 + (float)uStack_7._4_4_;
      }
      iVar3 = iVar3 + 1;
    }
  }
  func_?();
code_?:
  uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar9);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,method_00);
  uVar9 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  func_?(this_00,uVar9);
  pcVar10 = (code *)swi(3);
  fVar11 = (float10)(*pcVar10)();
  return (float)fVar11;
}


/* Single ScaleFactor(GameObject, Face) */

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor_1
                (GameObject *gameObject,Face__Enum face,MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  switch(face) {
  case Face__Enum_Top:
  case Face__Enum_Bottom:
    if (gameObject != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                            ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
        return pVVar3->y;
      }
    }
    break;
  case Face__Enum_Front:
  case Face__Enum_Back:
    if (gameObject != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                            ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
        return pVVar3->z;
      }
    }
    break;
  case Face__Enum_Left:
  case Face__Enum_Right:
    if (gameObject != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                            ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
        return pVVar3->x;
      }
    }
    break;
  default:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
    return 0.0;
  }
  func_?();
  puStack_4 = &stack0xffffffec;
  puVar5 = (undefined4 *)&stack0xffffffec;
  apuStack_6[1] = &stack0xffffffec;
  puVar7 = (undefined4 *)&stack0xffffffec;
  cVar8 = '\x0f';
  do {
    puVar1 = puVar1 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar1;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  puStack_9 = apuStack_6 + 1;
  puVar1 = apuStack_6 + 1;
  apuStack_10[1] = apuStack_6 + 1;
  puVar5 = apuStack_6 + 1;
  cVar8 = '\x03';
  do {
    puVar7 = puVar7 + -1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar7;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  puStack_11 = apuStack_10 + 1;
  puVar1 = apuStack_10 + 1;
  apuStack_12[1] = apuStack_10 + 1;
  puVar7 = apuStack_10 + 1;
  cVar8 = '\x03';
  do {
    puVar5 = puVar5 + -1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar5;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  puStack_13 = apuStack_12 + 1;
  puVar1 = apuStack_12 + 1;
  apuStack_14[1] = apuStack_12 + 1;
  puVar5 = apuStack_12 + 1;
  cVar8 = '\x13';
  do {
    puVar7 = puVar7 + -1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar7;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  puStack_15 = apuStack_14 + 1;
  puVar1 = apuStack_14 + 1;
  apuStack_16[1] = apuStack_14 + 1;
  puVar7 = apuStack_14 + 1;
  cVar8 = '\x13';
  do {
    puVar5 = puVar5 + -1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar5;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  puStack_17 = apuStack_16 + 1;
  puVar1 = apuStack_16 + 1;
  cVar8 = '\x14';
  do {
    puVar7 = puVar7 + -1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar7;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  fStack_18 = 0.0;
  fStack_19 = 0.0;
  iVar20 = 0;
  fStack_21 = 0.0;
  puVar1 = apuStack_16 + 1;
  puVar5 = apuStack_14 + 1;
  puVar7 = apuStack_14 + 1;
  puVar22 = apuStack_12 + 1;
  puVar23 = apuStack_12 + 1;
  puVar24 = apuStack_10 + 1;
  puVar25 = apuStack_10 + 1;
  puVar26 = apuStack_6 + 1;
  puVar27 = apuStack_6 + 1;
  puVar28 = &stack0xffffffec;
  puVar29 = &stack0xffffffec;
  if (pGStack_30 != (GameObject *)0x0) {
    while (fStack_19 = fStack_21, fStack_18 = fStack_21,
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_30,(MethodInfo *)0x0), puVar1 = puStack_17,
          puVar5 = apuStack_16[1], puVar7 = puStack_15, puVar22 = apuStack_14[1],
          puVar23 = puStack_13, puVar24 = apuStack_12[1], puVar25 = puStack_11,
          puVar26 = apuStack_10[1], puVar27 = puStack_9, puVar28 = apuStack_6[1],
          puVar29 = puStack_4, pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_31,pTVar2,(MethodInfo *)0x0);
      uStack_32._0_4_ = pVVar3->x;
      uStack_32._4_4_ = pVVar3->y;
      fStack_33 = pVVar3->z;
      if (iVar20 == 0) {
        fStack_21 = fStack_18 + (float)(undefined4)uStack_32;
      }
      else {
        if (iVar20 != 1) {
          if (iVar20 == 2) {
            return (fStack_19 + fStack_33) / _UNK_?;
          }
          goto code_?;
        }
        fStack_21 = fStack_21 + (float)uStack_32._4_4_;
      }
      iVar20 = iVar20 + 1;
    }
  }
  puStack_4 = puVar29;
  apuStack_6[1] = puVar28;
  puStack_9 = puVar27;
  apuStack_10[1] = puVar26;
  puStack_11 = puVar25;
  apuStack_12[1] = puVar24;
  puStack_13 = puVar23;
  apuStack_14[1] = puVar22;
  puStack_15 = puVar7;
  apuStack_16[1] = puVar5;
  puStack_17 = puVar1;
  func_?();
code_?:
  uVar34 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this = (IndexOutOfRangeException *)func_?(uVar34);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this,message,method_00);
  uVar34 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  func_?(this,uVar34);
  pcVar35 = (code *)swi(3);
  fVar36 = (float10)(*pcVar35)();
  return (float)fVar36;
}


/* Void SetLayerRecursively(Transform, Boolean) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
               (Transform *t,bool select,MethodInfo *method)

{
  pSVar1 = (String *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__UnityEngine__Transform);
    func_?(&StringLiteral_LogicSelected);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Player);
    func_?(&StringLiteral_PlayerSelected);
    func_?(&StringLiteral_Logic);
    in_stack_2 = &StringLiteral_CamRotateTarget;
    in_stack_3 = (String *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if (t == (Transform *)0x0) goto code_?;
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)t,(MethodInfo *)0x0);
  if (select == 0) {
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (pGVar4,(MethodInfo *)0x0);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (iVar5 == iVar6) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)t,(MethodInfo *)0x0);
      goto code_?;
    }
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)t,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (pGVar4,(MethodInfo *)0x0);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_LogicSelected,(MethodInfo *)0x0);
    if (iVar5 == iVar6) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)t,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_Logic;
      goto code_?;
    }
    pSVar1 = (String *)t;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)t,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (pGVar4,(MethodInfo *)0x0);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_PlayerSelected,(MethodInfo *)0x0);
    if (iVar5 == iVar6) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)t,(MethodInfo *)0x0);
      select = (bool)StringLiteral_Player;
      goto code_?;
    }
  }
  else {
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (pGVar4,(MethodInfo *)0x0);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Default,(MethodInfo *)0x0);
    if (iVar5 == iVar6) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)t,(MethodInfo *)0x0);
    }
    else {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)t,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (pGVar4,(MethodInfo *)0x0);
      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      if (iVar5 == iVar6) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0);
        pSVar1 = StringLiteral_LogicSelected;
      }
      else {
        pSVar1 = (String *)t;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                          (pGVar4,(MethodInfo *)0x0);
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Player,(MethodInfo *)0x0);
        if (iVar5 != iVar6) goto code_?;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0);
        select = (bool)StringLiteral_PlayerSelected;
      }
    }
code_?:
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (in_stack_3,(MethodInfo *)in_stack_2);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar4,iVar5,(MethodInfo *)0x0);
  }
code_?:
  pIVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                     (t,(MethodInfo *)0x0);
  while (pIVar7 != (IEnumerator *)0x0) {
    cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar7);
    if (cVar8 == '\0') {
      iVar9 = func_?(pIVar7,TypeInfo__System__IDisposable);
      if (iVar9 != 0) {
        func_?(0,TypeInfo__System__IDisposable,iVar9);
        *unaff_FS_OFFSET = pSVar1;
        return;
      }
      *unaff_FS_OFFSET = pSVar1;
      return;
    }
    if (pIVar7 == (IEnumerator *)0x0) break;
    pIVar10 = pIVar7->klass;
    uVar11 = 0;
    uVar12._0_1_ = (pIVar10->_1).rank;
    uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
    if (uVar12 != 0) {
      do {
        if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
          ppMVar13 = &(&(pIVar7->klass->vtable).get_Current)
                     [pIVar7->klass->interfaceOffsets[uVar11].offset].method;
          goto code_?;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
    ppMVar13 = (MethodInfo **)func_?(pIVar7,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    t_00 = (Transform *)(*(code *)*ppMVar13)(pIVar7,ppMVar13[1]);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    if (t_00 == (Transform *)0x0) {
      SharedCubeFunctions_SetLayerRecursively((Transform *)0x0,select,(MethodInfo *)0x0);
    }
    else {
      if (((t_00->klass->_1).naturalAligment <
           (TypeInfo__UnityEngine__Transform->_1).naturalAligment) ||
         ((t_00->klass->_1).typeHierarchy
          [(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
        func_?(t_00,TypeInfo__UnityEngine__Transform);
        break;
      }
      SharedCubeFunctions_SetLayerRecursively(t_00,select,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Vector3 WorldPosToValidGridPos(GameObject, Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_WorldPosToValidGridPos
                    (Vector3 *__return_storage_ptr__,GameObject *gameObject,Vector3 worldPos,
                    int32_t cubeSegments,MethodInfo *method)

{
  this = gameObject;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Math);
    func_?(&StringLiteral_CubeSegments_is_at_least_1);
    cRam_? = '\x01';
  }
  if (cubeSegments < 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_CubeSegments_is_at_least_1,(MethodInfo *)0x0);
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = (double)(_UNK_? / (float)cubeSegments);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = mscorlib.dll::System::Math::Math_Round_5
                     (dVar1,2,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  fVar2 = (float)dVar1;
  if ((gameObject != (GameObject *)0x0) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                       ((Vector3 *)&stack0xffffffc8,pTVar3,worldPos,(MethodInfo *)0x0);
    method_00 = pVVar4->y;
    pVVar4 = MathFunctions::MathFunctions_FloorVector
                       ((Vector3 *)&stack0xffffffe0,*pVVar4,(MethodInfo *)method_00);
    fVar5 = pVVar4->x;
    fVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar9 = (pVVar8->oneVector).x;
    uVar10 = (pVVar8->oneVector).y;
    fVar11 = (pVVar8->oneVector).z * _UNK_?;
    gameObject = (GameObject *)(fVar5 - (float)uVar9 * _UNK_?);
    pVVar12 = (Vector3 *)(fVar6 - (float)uVar10 * _UNK_?);
    iVar13 = 0;
    pGVar14 = gameObject;
    pVVar4 = pVVar12;
    while( true ) {
      while( true ) {
        if (((iVar13 != 0) && (iVar13 != 1)) && (iVar13 != 2)) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar15 = (float10)func_?();
        iVar16 = (int)fVar15;
        if (iVar13 != 0) break;
        gameObject = (GameObject *)((float)iVar16 * fVar2 + (float)gameObject);
        iVar13 = 1;
        pGVar14 = gameObject;
      }
      if (iVar13 != 1) break;
      pVVar12 = (Vector3 *)((float)iVar16 * fVar2 + (float)pVVar4);
      iVar13 = 2;
      pVVar4 = pVVar12;
    }
    if (iVar13 != 2) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      position.y = (float)pVVar12;
      position.x = (float)pGVar14;
      position.z = (float)iVar16 * fVar2 + (fVar7 - fVar11);
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         ((Vector3 *)&stack0xffffffc8,pTVar3,position,(MethodInfo *)0x0);
      fVar5 = pVVar4->y;
      fVar2 = pVVar4->z;
      pVVar12->x = pVVar4->x;
      pVVar12->y = fVar5;
      pVVar12->z = fVar2;
      return pVVar12;
    }
  }
  func_?();
code_?:
  func_?();
  this_00 = (IndexOutOfRangeException *)func_?();
  message = (String *)func_?();
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar17)();
  return pVVar4;
}


/* IntVector WorldToLocal(GameObject, Vector3, Boolean) */

IntVector Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_WorldToLocal
                    (GameObject *gameObject,Vector3 point,bool floor,MethodInfo *method)

{
  if (point.x != 0.0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)point.x,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      position.z = _floor;
      position.x = (float)(int)point._4_8_;
      position.y = (float)(int)((ulonglong)point._4_8_ >> 0x20);
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         ((Vector3 *)&stack0xfffffff0,this,position,(MethodInfo *)0x0);
      if ((char)method == '\0') {
        pVVar1 = MathFunctions::MathFunctions_RoundVector
                           ((Vector3 *)&stack0xffffffe4,*pVVar1,0,(MethodInfo *)0x0);
      }
      else {
        pVVar1 = MathFunctions::MathFunctions_FloorVector
                           ((Vector3 *)&stack0xffffffe4,*pVVar1,(MethodInfo *)0x0);
      }
      uVar2 = pVVar1->x;
      uVar3 = pVVar1->y;
      fVar4 = pVVar1->z;
      gameObject->klass = (GameObject__Class *)0x0;
      *(undefined2 *)&gameObject->monitor = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)gameObject,(int)(float)uVar2 & 0xffff,(int)(float)uVar3 & 0xffff,
                 (int)fVar4 & 0xffff,(MethodInfo *)0x0);
      IVar5.z = extraout_DX;
      IVar5._0_4_ = gameObject;
      return IVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  IVar5 = (IntVector)(*pcVar6)();
  return IVar5;
}


/* SharedCubeFunctions() */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            (&IStack_1,0x18,0x18,0x18,(MethodInfo *)0x0);
  pSVar2 = TypeInfo__SharedCubeFunctions->static_fields;
  (pSVar2->constraint).x = IStack_1.x;
  (pSVar2->constraint).y = IStack_1.y;
  (pSVar2->constraint).z = IStack_1.z;
  pIVar3 = (IntVector__Array__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,0x18);
  pIVar4 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
  IStack_5.x = 0;
  IStack_5.y = 0;
  IStack_5.z = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            (&IStack_5,-1,1,-1,(MethodInfo *)0x0);
  if (pIVar4 != (IntVector__Array *)0x0) {
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_5.x;
    pIVar4->vector[0].y = IStack_5.y;
    pIVar4->vector[0].z = IStack_5.z;
    IStack_6.x = 0;
    IStack_6.y = 0;
    IStack_6.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_6,-1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_6.x;
    pIVar4->vector[1].y = IStack_6.y;
    pIVar4->vector[1].z = IStack_6.z;
    IStack_7.x = 0;
    IStack_7.y = 0;
    IStack_7.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_7,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_7.x;
    pIVar4->vector[2].y = IStack_7.y;
    pIVar4->vector[2].z = IStack_7.z;
    IStack_8.x = 0;
    IStack_8.y = 0;
    IStack_8.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_8,0,1,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_8.x;
    pIVar4->vector[3].y = IStack_8.y;
    pIVar4->vector[3].z = IStack_8.z;
    if (pIVar3 != (IntVector__Array__Array *)0x0) {
      if (pIVar3->max_length == 0) goto code_?;
      ppIStack_9 = pIVar3->vector;
      pIVar3->vector[0] = pIVar4;
      pIStack_10 = pIVar4;
      func_?();
      pIStack_11 = (IntVector__Array__Array *)0x4;
      pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
      pIVar4 = (IntVector__Array *)func_?();
      IStack_13.x = 0;
      IStack_13.y = 0;
      IStack_13.z = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                (&IStack_13,0,1,-1,(MethodInfo *)0x0);
      if (pIVar4 != (IntVector__Array *)0x0) {
        if (pIVar4->max_length == 0) goto code_?;
        pIVar4->vector[0].x = IStack_13.x;
        pIVar4->vector[0].y = IStack_13.y;
        pIVar4->vector[0].z = IStack_13.z;
        IStack_14.x = 0;
        IStack_14.y = 0;
        IStack_14.z = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (&IStack_14,0,1,0,(MethodInfo *)0x0);
        if (pIVar4->max_length < 2) goto code_?;
        pIVar4->vector[1].x = IStack_14.x;
        pIVar4->vector[1].y = IStack_14.y;
        pIVar4->vector[1].z = IStack_14.z;
        IStack_15.x = 0;
        IStack_15.y = 0;
        IStack_15.z = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (&IStack_15,1,1,0,(MethodInfo *)0x0);
        if (pIVar4->max_length < 3) goto code_?;
        pIVar4->vector[2].x = IStack_15.x;
        pIVar4->vector[2].y = IStack_15.y;
        pIVar4->vector[2].z = IStack_15.z;
        IStack_16.x = 0;
        IStack_16.y = 0;
        IStack_16.z = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (&IStack_16,1,1,-1,(MethodInfo *)0x0);
        if (pIVar4->max_length < 4) goto code_?;
        pIVar4->vector[3].x = IStack_16.x;
        pIVar4->vector[3].y = IStack_16.y;
        pIVar4->vector[3].z = IStack_16.z;
        if (pIVar3->max_length < 2) goto code_?;
        ppIStack_9 = pIVar3->vector + 1;
        pIVar3->vector[1] = pIVar4;
        pIStack_10 = pIVar4;
        func_?();
        pIStack_11 = (IntVector__Array__Array *)0x4;
        pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
        pIVar4 = (IntVector__Array *)func_?();
        IStack_17.x = 0;
        IStack_17.y = 0;
        IStack_17.z = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (&IStack_17,0,1,0,(MethodInfo *)0x0);
        if (pIVar4 != (IntVector__Array *)0x0) {
          if (pIVar4->max_length == 0) goto code_?;
          pIVar4->vector[0].x = IStack_17.x;
          pIVar4->vector[0].y = IStack_17.y;
          pIVar4->vector[0].z = IStack_17.z;
          IStack_18.x = 0;
          IStack_18.y = 0;
          IStack_18.z = 0;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    (&IStack_18,0,1,1,(MethodInfo *)0x0);
          if (pIVar4->max_length < 2) goto code_?;
          pIVar4->vector[1].x = IStack_18.x;
          pIVar4->vector[1].y = IStack_18.y;
          pIVar4->vector[1].z = IStack_18.z;
          IStack_19.x = 0;
          IStack_19.y = 0;
          IStack_19.z = 0;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    (&IStack_19,1,1,1,(MethodInfo *)0x0);
          if (pIVar4->max_length < 3) goto code_?;
          pIVar4->vector[2].x = IStack_19.x;
          pIVar4->vector[2].y = IStack_19.y;
          pIVar4->vector[2].z = IStack_19.z;
          IStack_20.x = 0;
          IStack_20.y = 0;
          IStack_20.z = 0;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    (&IStack_20,1,1,0,(MethodInfo *)0x0);
          if (pIVar4->max_length < 4) goto code_?;
          pIVar4->vector[3].x = IStack_20.x;
          pIVar4->vector[3].y = IStack_20.y;
          pIVar4->vector[3].z = IStack_20.z;
          if (pIVar3->max_length < 3) goto code_?;
          ppIStack_9 = pIVar3->vector + 2;
          pIVar3->vector[2] = pIVar4;
          pIStack_10 = pIVar4;
          func_?();
          pIStack_11 = (IntVector__Array__Array *)0x4;
          pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
          pIVar4 = (IntVector__Array *)func_?();
          IStack_21.x = 0;
          IStack_21.y = 0;
          IStack_21.z = 0;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    (&IStack_21,-1,1,0,(MethodInfo *)0x0);
          if (pIVar4 != (IntVector__Array *)0x0) {
            if (pIVar4->max_length == 0) goto code_?;
            pIVar4->vector[0].x = IStack_21.x;
            pIVar4->vector[0].y = IStack_21.y;
            pIVar4->vector[0].z = IStack_21.z;
            IStack_22.x = 0;
            IStack_22.y = 0;
            IStack_22.z = 0;
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      (&IStack_22,-1,1,1,(MethodInfo *)0x0);
            if (pIVar4->max_length < 2) goto code_?;
            pIVar4->vector[1].x = IStack_22.x;
            pIVar4->vector[1].y = IStack_22.y;
            pIVar4->vector[1].z = IStack_22.z;
            IStack_23.x = 0;
            IStack_23.y = 0;
            IStack_23.z = 0;
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      (&IStack_23,0,1,1,(MethodInfo *)0x0);
            if (pIVar4->max_length < 3) goto code_?;
            pIVar4->vector[2].x = IStack_23.x;
            pIVar4->vector[2].y = IStack_23.y;
            pIVar4->vector[2].z = IStack_23.z;
            IStack_24.x = 0;
            IStack_24.y = 0;
            IStack_24.z = 0;
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      (&IStack_24,0,1,0,(MethodInfo *)0x0);
            if (pIVar4->max_length < 4) goto code_?;
            pIVar4->vector[3].x = IStack_24.x;
            pIVar4->vector[3].y = IStack_24.y;
            pIVar4->vector[3].z = IStack_24.z;
            if (pIVar3->max_length < 4) goto code_?;
            ppIStack_9 = pIVar3->vector + 3;
            pIVar3->vector[3] = pIVar4;
            pIStack_10 = pIVar4;
            func_?();
            pIStack_11 = (IntVector__Array__Array *)0x4;
            pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
            pIVar4 = (IntVector__Array *)func_?();
            IStack_25.x = 0;
            IStack_25.y = 0;
            IStack_25.z = 0;
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      (&IStack_25,-1,-1,0,(MethodInfo *)0x0);
            if (pIVar4 != (IntVector__Array *)0x0) {
              if (pIVar4->max_length == 0) goto code_?;
              pIVar4->vector[0].x = IStack_25.x;
              pIVar4->vector[0].y = IStack_25.y;
              pIVar4->vector[0].z = IStack_25.z;
              IStack_26.x = 0;
              IStack_26.y = 0;
              IStack_26.z = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        (&IStack_26,-1,-1,1,(MethodInfo *)0x0);
              if (pIVar4->max_length < 2) goto code_?;
              pIVar4->vector[1].x = IStack_26.x;
              pIVar4->vector[1].y = IStack_26.y;
              pIVar4->vector[1].z = IStack_26.z;
              IStack_27.x = 0;
              IStack_27.y = 0;
              IStack_27.z = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        (&IStack_27,0,-1,1,(MethodInfo *)0x0);
              if (pIVar4->max_length < 3) goto code_?;
              pIVar4->vector[2].x = IStack_27.x;
              pIVar4->vector[2].y = IStack_27.y;
              pIVar4->vector[2].z = IStack_27.z;
              IStack_28.x = 0;
              IStack_28.y = 0;
              IStack_28.z = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        (&IStack_28,0,-1,0,(MethodInfo *)0x0);
              if (pIVar4->max_length < 4) goto code_?;
              pIVar4->vector[3].x = IStack_28.x;
              pIVar4->vector[3].y = IStack_28.y;
              pIVar4->vector[3].z = IStack_28.z;
              if (pIVar3->max_length < 5) goto code_?;
              ppIStack_9 = pIVar3->vector + 4;
              pIVar3->vector[4] = pIVar4;
              pIStack_10 = pIVar4;
              func_?();
              pIStack_11 = (IntVector__Array__Array *)0x4;
              pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
              pIVar4 = (IntVector__Array *)func_?();
              IStack_29.x = 0;
              IStack_29.y = 0;
              IStack_29.z = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        (&IStack_29,0,-1,0,(MethodInfo *)0x0);
              if (pIVar4 != (IntVector__Array *)0x0) {
                if (pIVar4->max_length == 0) goto code_?;
                pIVar4->vector[0].x = IStack_29.x;
                pIVar4->vector[0].y = IStack_29.y;
                pIVar4->vector[0].z = IStack_29.z;
                IStack_30.x = 0;
                IStack_30.y = 0;
                IStack_30.z = 0;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          (&IStack_30,0,-1,1,(MethodInfo *)0x0);
                if (pIVar4->max_length < 2) goto code_?;
                pIVar4->vector[1].x = IStack_30.x;
                pIVar4->vector[1].y = IStack_30.y;
                pIVar4->vector[1].z = IStack_30.z;
                IStack_31.x = 0;
                IStack_31.y = 0;
                IStack_31.z = 0;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          (&IStack_31,1,-1,1,(MethodInfo *)0x0);
                if (pIVar4->max_length < 3) goto code_?;
                pIVar4->vector[2].x = IStack_31.x;
                pIVar4->vector[2].y = IStack_31.y;
                pIVar4->vector[2].z = IStack_31.z;
                IStack_32.x = 0;
                IStack_32.y = 0;
                IStack_32.z = 0;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          (&IStack_32,1,-1,0,(MethodInfo *)0x0);
                if (pIVar4->max_length < 4) goto code_?;
                pIVar4->vector[3].x = IStack_32.x;
                pIVar4->vector[3].y = IStack_32.y;
                pIVar4->vector[3].z = IStack_32.z;
                if (pIVar3->max_length < 6) goto code_?;
                ppIStack_9 = pIVar3->vector + 5;
                pIVar3->vector[5] = pIVar4;
                pIStack_10 = pIVar4;
                func_?();
                pIStack_11 = (IntVector__Array__Array *)0x4;
                pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                pIVar4 = (IntVector__Array *)func_?();
                IStack_33.x = 0;
                IStack_33.y = 0;
                IStack_33.z = 0;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          (&IStack_33,0,-1,-1,(MethodInfo *)0x0);
                if (pIVar4 != (IntVector__Array *)0x0) {
                  if (pIVar4->max_length == 0) goto code_?;
                  pIVar4->vector[0].x = IStack_33.x;
                  pIVar4->vector[0].y = IStack_33.y;
                  pIVar4->vector[0].z = IStack_33.z;
                  IStack_34.x = 0;
                  IStack_34.y = 0;
                  IStack_34.z = 0;
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            (&IStack_34,0,-1,0,(MethodInfo *)0x0);
                  if (pIVar4->max_length < 2) goto code_?;
                  pIVar4->vector[1].x = IStack_34.x;
                  pIVar4->vector[1].y = IStack_34.y;
                  pIVar4->vector[1].z = IStack_34.z;
                  IStack_35.x = 0;
                  IStack_35.y = 0;
                  IStack_35.z = 0;
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            (&IStack_35,1,-1,0,(MethodInfo *)0x0);
                  if (pIVar4->max_length < 3) goto code_?;
                  pIVar4->vector[2].x = IStack_35.x;
                  pIVar4->vector[2].y = IStack_35.y;
                  pIVar4->vector[2].z = IStack_35.z;
                  IStack_36.x = 0;
                  IStack_36.y = 0;
                  IStack_36.z = 0;
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            (&IStack_36,1,-1,-1,(MethodInfo *)0x0);
                  if (pIVar4->max_length < 4) goto code_?;
                  pIVar4->vector[3].x = IStack_36.x;
                  pIVar4->vector[3].y = IStack_36.y;
                  pIVar4->vector[3].z = IStack_36.z;
                  if (pIVar3->max_length < 7) goto code_?;
                  ppIStack_9 = pIVar3->vector + 6;
                  pIVar3->vector[6] = pIVar4;
                  pIStack_10 = pIVar4;
                  func_?();
                  pIStack_11 = (IntVector__Array__Array *)0x4;
                  pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                  pIVar4 = (IntVector__Array *)func_?();
                  IStack_37.x = 0;
                  IStack_37.y = 0;
                  IStack_37.z = 0;
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            (&IStack_37,-1,-1,-1,(MethodInfo *)0x0);
                  if (pIVar4 != (IntVector__Array *)0x0) {
                    if (pIVar4->max_length == 0) goto code_?;
                    pIVar4->vector[0].x = IStack_37.x;
                    pIVar4->vector[0].y = IStack_37.y;
                    pIVar4->vector[0].z = IStack_37.z;
                    IStack_38.x = 0;
                    IStack_38.y = 0;
                    IStack_38.z = 0;
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                              (&IStack_38,-1,-1,0,(MethodInfo *)0x0);
                    if (pIVar4->max_length < 2) goto code_?;
                    pIVar4->vector[1].x = IStack_38.x;
                    pIVar4->vector[1].y = IStack_38.y;
                    pIVar4->vector[1].z = IStack_38.z;
                    IStack_39.x = 0;
                    IStack_39.y = 0;
                    IStack_39.z = 0;
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                              (&IStack_39,0,-1,0,(MethodInfo *)0x0);
                    if (pIVar4->max_length < 3) goto code_?;
                    pIVar4->vector[2].x = IStack_39.x;
                    pIVar4->vector[2].y = IStack_39.y;
                    pIVar4->vector[2].z = IStack_39.z;
                    IStack_40.x = 0;
                    IStack_40.y = 0;
                    IStack_40.z = 0;
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                              (&IStack_40,0,-1,-1,(MethodInfo *)0x0);
                    if (pIVar4->max_length < 4) goto code_?;
                    pIVar4->vector[3].x = IStack_40.x;
                    pIVar4->vector[3].y = IStack_40.y;
                    pIVar4->vector[3].z = IStack_40.z;
                    if (pIVar3->max_length < 8) goto code_?;
                    ppIStack_9 = pIVar3->vector + 7;
                    pIVar3->vector[7] = pIVar4;
                    pIStack_10 = pIVar4;
                    func_?();
                    pIStack_11 = (IntVector__Array__Array *)0x4;
                    pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                    pIVar4 = (IntVector__Array *)func_?();
                    IStack_41.x = 0;
                    IStack_41.y = 0;
                    IStack_41.z = 0;
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                              (&IStack_41,-1,-1,-1,(MethodInfo *)0x0);
                    if (pIVar4 != (IntVector__Array *)0x0) {
                      if (pIVar4->max_length == 0) goto code_?;
                      pIVar4->vector[0].x = IStack_41.x;
                      pIVar4->vector[0].y = IStack_41.y;
                      pIVar4->vector[0].z = IStack_41.z;
                      IStack_42.x = 0;
                      IStack_42.y = 0;
                      IStack_42.z = 0;
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                (&IStack_42,-1,0,-1,(MethodInfo *)0x0);
                      if (pIVar4->max_length < 2) goto code_?;
                      pIVar4->vector[1].x = IStack_42.x;
                      pIVar4->vector[1].y = IStack_42.y;
                      pIVar4->vector[1].z = IStack_42.z;
                      IStack_43.x = 0;
                      IStack_43.y = 0;
                      IStack_43.z = 0;
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                (&IStack_43,0,0,-1,(MethodInfo *)0x0);
                      if (pIVar4->max_length < 3) goto code_?;
                      pIVar4->vector[2].x = IStack_43.x;
                      pIVar4->vector[2].y = IStack_43.y;
                      pIVar4->vector[2].z = IStack_43.z;
                      IStack_44.x = 0;
                      IStack_44.y = 0;
                      IStack_44.z = 0;
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                (&IStack_44,0,-1,-1,(MethodInfo *)0x0);
                      if (pIVar4->max_length < 4) goto code_?;
                      pIVar4->vector[3].x = IStack_44.x;
                      pIVar4->vector[3].y = IStack_44.y;
                      pIVar4->vector[3].z = IStack_44.z;
                      if (pIVar3->max_length < 9) goto code_?;
                      ppIStack_9 = pIVar3->vector + 8;
                      pIVar3->vector[8] = pIVar4;
                      pIStack_10 = pIVar4;
                      func_?();
                      pIStack_11 = (IntVector__Array__Array *)0x4;
                      pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                      pIVar4 = (IntVector__Array *)func_?();
                      IStack_45.x = 0;
                      IStack_45.y = 0;
                      IStack_45.z = 0;
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                (&IStack_45,0,-1,-1,(MethodInfo *)0x0);
                      if (pIVar4 != (IntVector__Array *)0x0) {
                        if (pIVar4->max_length == 0) goto code_?;
                        pIVar4->vector[0].x = IStack_45.x;
                        pIVar4->vector[0].y = IStack_45.y;
                        pIVar4->vector[0].z = IStack_45.z;
                        IStack_46.x = 0;
                        IStack_46.y = 0;
                        IStack_46.z = 0;
                        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                  (&IStack_46,0,0,-1,(MethodInfo *)0x0);
                        if (pIVar4->max_length < 2) goto code_?;
                        pIVar4->vector[1].x = IStack_46.x;
                        pIVar4->vector[1].y = IStack_46.y;
                        pIVar4->vector[1].z = IStack_46.z;
                        IStack_47.x = 0;
                        IStack_47.y = 0;
                        IStack_47.z = 0;
                        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                  (&IStack_47,1,0,-1,(MethodInfo *)0x0);
                        if (pIVar4->max_length < 3) goto code_?;
                        pIVar4->vector[2].x = IStack_47.x;
                        pIVar4->vector[2].y = IStack_47.y;
                        pIVar4->vector[2].z = IStack_47.z;
                        IStack_48.x = 0;
                        IStack_48.y = 0;
                        IStack_48.z = 0;
                        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                  (&IStack_48,1,-1,-1,(MethodInfo *)0x0);
                        if (pIVar4->max_length < 4) goto code_?;
                        pIVar4->vector[3].x = IStack_48.x;
                        pIVar4->vector[3].y = IStack_48.y;
                        pIVar4->vector[3].z = IStack_48.z;
                        if (pIVar3->max_length < 10) goto code_?;
                        ppIStack_9 = pIVar3->vector + 9;
                        pIVar3->vector[9] = pIVar4;
                        pIStack_10 = pIVar4;
                        func_?();
                        pIStack_11 = (IntVector__Array__Array *)0x4;
                        pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                        pIVar4 = (IntVector__Array *)func_?();
                        IStack_49.x = 0;
                        IStack_49.y = 0;
                        IStack_49.z = 0;
                        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                  (&IStack_49,0,0,-1,(MethodInfo *)0x0);
                        if (pIVar4 != (IntVector__Array *)0x0) {
                          if (pIVar4->max_length == 0) goto code_?;
                          pIVar4->vector[0].x = IStack_49.x;
                          pIVar4->vector[0].y = IStack_49.y;
                          pIVar4->vector[0].z = IStack_49.z;
                          IStack_50.x = 0;
                          IStack_50.y = 0;
                          IStack_50.z = 0;
                          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                    (&IStack_50,0,1,-1,(MethodInfo *)0x0);
                          if (pIVar4->max_length < 2) goto code_?;
                          pIVar4->vector[1].x = IStack_50.x;
                          pIVar4->vector[1].y = IStack_50.y;
                          pIVar4->vector[1].z = IStack_50.z;
                          IStack_51.x = 0;
                          IStack_51.y = 0;
                          IStack_51.z = 0;
                          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                    (&IStack_51,1,1,-1,(MethodInfo *)0x0);
                          if (pIVar4->max_length < 3) goto code_?;
                          pIVar4->vector[2].x = IStack_51.x;
                          pIVar4->vector[2].y = IStack_51.y;
                          pIVar4->vector[2].z = IStack_51.z;
                          IStack_52.x = 0;
                          IStack_52.y = 0;
                          IStack_52.z = 0;
                          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                    (&IStack_52,1,0,-1,(MethodInfo *)0x0);
                          if (pIVar4->max_length < 4) goto code_?;
                          pIVar4->vector[3].x = IStack_52.x;
                          pIVar4->vector[3].y = IStack_52.y;
                          pIVar4->vector[3].z = IStack_52.z;
                          if (pIVar3->max_length < 0xb) goto code_?;
                          ppIStack_9 = pIVar3->vector + 10;
                          pIVar3->vector[10] = pIVar4;
                          pIStack_10 = pIVar4;
                          func_?();
                          pIStack_11 = (IntVector__Array__Array *)0x4;
                          pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                          pIVar4 = (IntVector__Array *)func_?();
                          IStack_53.x = 0;
                          IStack_53.y = 0;
                          IStack_53.z = 0;
                          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                    (&IStack_53,-1,0,-1,(MethodInfo *)0x0);
                          if (pIVar4 != (IntVector__Array *)0x0) {
                            if (pIVar4->max_length == 0) goto code_?;
                            pIVar4->vector[0].x = IStack_53.x;
                            pIVar4->vector[0].y = IStack_53.y;
                            pIVar4->vector[0].z = IStack_53.z;
                            IStack_54.x = 0;
                            IStack_54.y = 0;
                            IStack_54.z = 0;
                            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                      (&IStack_54,-1,1,-1,(MethodInfo *)0x0);
                            if (pIVar4->max_length < 2) goto code_?;
                            pIVar4->vector[1].x = IStack_54.x;
                            pIVar4->vector[1].y = IStack_54.y;
                            pIVar4->vector[1].z = IStack_54.z;
                            IStack_55.x = 0;
                            IStack_55.y = 0;
                            IStack_55.z = 0;
                            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                      (&IStack_55,0,1,-1,(MethodInfo *)0x0);
                            if (pIVar4->max_length < 3) goto code_?;
                            pIVar4->vector[2].x = IStack_55.x;
                            pIVar4->vector[2].y = IStack_55.y;
                            pIVar4->vector[2].z = IStack_55.z;
                            IStack_56.x = 0;
                            IStack_56.y = 0;
                            IStack_56.z = 0;
                            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                      (&IStack_56,0,0,-1,(MethodInfo *)0x0);
                            if (pIVar4->max_length < 4) goto code_?;
                            pIVar4->vector[3].x = IStack_56.x;
                            pIVar4->vector[3].y = IStack_56.y;
                            pIVar4->vector[3].z = IStack_56.z;
                            if (pIVar3->max_length < 0xc) goto code_?;
                            ppIStack_9 = pIVar3->vector + 0xb;
                            pIVar3->vector[0xb] = pIVar4;
                            pIStack_10 = pIVar4;
                            func_?();
                            pIStack_11 = (IntVector__Array__Array *)0x4;
                            pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                            pIVar4 = (IntVector__Array *)func_?();
                            IStack_57.x = 0;
                            IStack_57.y = 0;
                            IStack_57.z = 0;
                            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                      (&IStack_57,0,-1,1,(MethodInfo *)0x0);
                            if (pIVar4 != (IntVector__Array *)0x0) {
                              if (pIVar4->max_length == 0) goto code_?;
                              pIVar4->vector[0].x = IStack_57.x;
                              pIVar4->vector[0].y = IStack_57.y;
                              pIVar4->vector[0].z = IStack_57.z;
                              IStack_58.x = 0;
                              IStack_58.y = 0;
                              IStack_58.z = 0;
                              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                        (&IStack_58,0,0,1,(MethodInfo *)0x0);
                              if (pIVar4->max_length < 2) goto code_?;
                              pIVar4->vector[1].x = IStack_58.x;
                              pIVar4->vector[1].y = IStack_58.y;
                              pIVar4->vector[1].z = IStack_58.z;
                              IStack_59.x = 0;
                              IStack_59.y = 0;
                              IStack_59.z = 0;
                              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                        (&IStack_59,1,0,1,(MethodInfo *)0x0);
                              if (pIVar4->max_length < 3) goto code_?;
                              pIVar4->vector[2].x = IStack_59.x;
                              pIVar4->vector[2].y = IStack_59.y;
                              pIVar4->vector[2].z = IStack_59.z;
                              IStack_60.x = 0;
                              IStack_60.y = 0;
                              IStack_60.z = 0;
                              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                        (&IStack_60,1,-1,1,(MethodInfo *)0x0);
                              if (pIVar4->max_length < 4) goto code_?;
                              pIVar4->vector[3].x = IStack_60.x;
                              pIVar4->vector[3].y = IStack_60.y;
                              pIVar4->vector[3].z = IStack_60.z;
                              if (pIVar3->max_length < 0xd) goto code_?;
                              ppIStack_9 = pIVar3->vector + 0xc;
                              pIVar3->vector[0xc] = pIVar4;
                              pIStack_10 = pIVar4;
                              func_?();
                              pIStack_11 = (IntVector__Array__Array *)0x4;
                              pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                              pIVar4 = (IntVector__Array *)func_?();
                              IStack_61.x = 0;
                              IStack_61.y = 0;
                              IStack_61.z = 0;
                              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                        (&IStack_61,-1,-1,1,(MethodInfo *)0x0);
                              if (pIVar4 != (IntVector__Array *)0x0) {
                                if (pIVar4->max_length == 0) goto code_?;
                                pIVar4->vector[0].x = IStack_61.x;
                                pIVar4->vector[0].y = IStack_61.y;
                                pIVar4->vector[0].z = IStack_61.z;
                                IStack_62.x = 0;
                                IStack_62.y = 0;
                                IStack_62.z = 0;
                                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                          (&IStack_62,-1,0,1,(MethodInfo *)0x0);
                                if (pIVar4->max_length < 2) goto code_?;
                                pIVar4->vector[1].x = IStack_62.x;
                                pIVar4->vector[1].y = IStack_62.y;
                                pIVar4->vector[1].z = IStack_62.z;
                                IStack_63.x = 0;
                                IStack_63.y = 0;
                                IStack_63.z = 0;
                                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                          (&IStack_63,0,0,1,(MethodInfo *)0x0);
                                if (pIVar4->max_length < 3) goto code_?;
                                pIVar4->vector[2].x = IStack_63.x;
                                pIVar4->vector[2].y = IStack_63.y;
                                pIVar4->vector[2].z = IStack_63.z;
                                IStack_64.x = 0;
                                IStack_64.y = 0;
                                IStack_64.z = 0;
                                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                          (&IStack_64,0,-1,1,(MethodInfo *)0x0);
                                if (pIVar4->max_length < 4) goto code_?;
                                pIVar4->vector[3].x = IStack_64.x;
                                pIVar4->vector[3].y = IStack_64.y;
                                pIVar4->vector[3].z = IStack_64.z;
                                if (pIVar3->max_length < 0xe) goto code_?;
                                ppIStack_9 = pIVar3->vector + 0xd;
                                pIVar3->vector[0xd] = pIVar4;
                                pIStack_10 = pIVar4;
                                func_?();
                                pIStack_11 = (IntVector__Array__Array *)0x4;
                                pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                                pIVar4 = (IntVector__Array *)func_?();
                                IStack_65.x = 0;
                                IStack_65.y = 0;
                                IStack_65.z = 0;
                                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                          (&IStack_65,-1,0,1,(MethodInfo *)0x0);
                                if (pIVar4 != (IntVector__Array *)0x0) {
                                  if (pIVar4->max_length == 0) goto code_?;
                                  pIVar4->vector[0].x = IStack_65.x;
                                  pIVar4->vector[0].y = IStack_65.y;
                                  pIVar4->vector[0].z = IStack_65.z;
                                  IStack_66.x = 0;
                                  IStack_66.y = 0;
                                  IStack_66.z = 0;
                                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                            (&IStack_66,-1,1,1,(MethodInfo *)0x0);
                                  if (pIVar4->max_length < 2) goto code_?;
                                  pIVar4->vector[1].x = IStack_66.x;
                                  pIVar4->vector[1].y = IStack_66.y;
                                  pIVar4->vector[1].z = IStack_66.z;
                                  IStack_67.x = 0;
                                  IStack_67.y = 0;
                                  IStack_67.z = 0;
                                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                            (&IStack_67,0,1,1,(MethodInfo *)0x0);
                                  if (pIVar4->max_length < 3) goto code_?;
                                  pIVar4->vector[2].x = IStack_67.x;
                                  pIVar4->vector[2].y = IStack_67.y;
                                  pIVar4->vector[2].z = IStack_67.z;
                                  IStack_68.x = 0;
                                  IStack_68.y = 0;
                                  IStack_68.z = 0;
                                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                            (&IStack_68,0,0,1,(MethodInfo *)0x0);
                                  if (pIVar4->max_length < 4) goto code_?;
                                  pIVar4->vector[3].x = IStack_68.x;
                                  pIVar4->vector[3].y = IStack_68.y;
                                  pIVar4->vector[3].z = IStack_68.z;
                                  if (pIVar3->max_length < 0xf) goto code_?;
                                  ppIStack_9 = pIVar3->vector + 0xe;
                                  pIVar3->vector[0xe] = pIVar4;
                                  pIStack_10 = pIVar4;
                                  func_?();
                                  pIStack_11 = (IntVector__Array__Array *)0x4;
                                  pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                                  pIVar4 = (IntVector__Array *)func_?();
                                  IStack_69.x = 0;
                                  IStack_69.y = 0;
                                  IStack_69.z = 0;
                                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                            (&IStack_69,0,0,1,(MethodInfo *)0x0);
                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                    if (pIVar4->max_length == 0) goto code_?;
                                    pIVar4->vector[0].x = IStack_69.x;
                                    pIVar4->vector[0].y = IStack_69.y;
                                    pIVar4->vector[0].z = IStack_69.z;
                                    IStack_70.x = 0;
                                    IStack_70.y = 0;
                                    IStack_70.z = 0;
                                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                              (&IStack_70,0,1,1,(MethodInfo *)0x0);
                                    if (pIVar4->max_length < 2) goto code_?;
                                    pIVar4->vector[1].x = IStack_70.x;
                                    pIVar4->vector[1].y = IStack_70.y;
                                    pIVar4->vector[1].z = IStack_70.z;
                                    IStack_71.x = 0;
                                    IStack_71.y = 0;
                                    IStack_71.z = 0;
                                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                              (&IStack_71,1,1,1,(MethodInfo *)0x0);
                                    if (pIVar4->max_length < 3) goto code_?;
                                    pIVar4->vector[2].x = IStack_71.x;
                                    pIVar4->vector[2].y = IStack_71.y;
                                    pIVar4->vector[2].z = IStack_71.z;
                                    IStack_72.x = 0;
                                    IStack_72.y = 0;
                                    IStack_72.z = 0;
                                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                              (&IStack_72,1,0,1,(MethodInfo *)0x0);
                                    if (pIVar4->max_length < 4) goto code_?;
                                    pIVar4->vector[3].x = IStack_72.x;
                                    pIVar4->vector[3].y = IStack_72.y;
                                    pIVar4->vector[3].z = IStack_72.z;
                                    if (pIVar3->max_length < 0x10) goto code_?;
                                    ppIStack_9 = pIVar3->vector + 0xf;
                                    pIVar3->vector[0xf] = pIVar4;
                                    pIStack_10 = pIVar4;
                                    func_?();
                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                    pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                                    pIVar4 = (IntVector__Array *)func_?();
                                    IStack_73.x = 0;
                                    IStack_73.y = 0;
                                    IStack_73.z = 0;
                                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                              (&IStack_73,-1,-1,0,(MethodInfo *)0x0);
                                    if (pIVar4 != (IntVector__Array *)0x0) {
                                      if (pIVar4->max_length == 0) goto code_?;
                                      pIVar4->vector[0].x = IStack_73.x;
                                      pIVar4->vector[0].y = IStack_73.y;
                                      pIVar4->vector[0].z = IStack_73.z;
                                      IStack_74.x = 0;
                                      IStack_74.y = 0;
                                      IStack_74.z = 0;
                                      MVWorldObject.dll::MV::WorldObject::IntVector::
                                      IntVector__ctor_1(&IStack_74,-1,0,0,(MethodInfo *)0x0);
                                      if (pIVar4->max_length < 2) goto code_?;
                                      pIVar4->vector[1].x = IStack_74.x;
                                      pIVar4->vector[1].y = IStack_74.y;
                                      pIVar4->vector[1].z = IStack_74.z;
                                      IStack_75.x = 0;
                                      IStack_75.y = 0;
                                      IStack_75.z = 0;
                                      MVWorldObject.dll::MV::WorldObject::IntVector::
                                      IntVector__ctor_1(&IStack_75,-1,0,1,(MethodInfo *)0x0);
                                      if (pIVar4->max_length < 3) goto code_?;
                                      pIVar4->vector[2].x = IStack_75.x;
                                      pIVar4->vector[2].y = IStack_75.y;
                                      pIVar4->vector[2].z = IStack_75.z;
                                      IStack_76.x = 0;
                                      IStack_76.y = 0;
                                      IStack_76.z = 0;
                                      MVWorldObject.dll::MV::WorldObject::IntVector::
                                      IntVector__ctor_1(&IStack_76,-1,-1,1,(MethodInfo *)0x0);
                                      if (pIVar4->max_length < 4) goto code_?;
                                      pIVar4->vector[3].x = IStack_76.x;
                                      pIVar4->vector[3].y = IStack_76.y;
                                      pIVar4->vector[3].z = IStack_76.z;
                                      if (pIVar3->max_length < 0x11) goto code_?;
                                      ppIStack_9 = pIVar3->vector + 0x10;
                                      pIVar3->vector[0x10] = pIVar4;
                                      pIStack_10 = pIVar4;
                                      func_?();
                                      pIStack_11 = (IntVector__Array__Array *)0x4;
                                      pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                                      pIVar4 = (IntVector__Array *)func_?();
                                      IStack_77.x = 0;
                                      IStack_77.y = 0;
                                      IStack_77.z = 0;
                                      MVWorldObject.dll::MV::WorldObject::IntVector::
                                      IntVector__ctor_1(&IStack_77,-1,-1,-1,(MethodInfo *)0x0);
                                      if (pIVar4 != (IntVector__Array *)0x0) {
                                        if (pIVar4->max_length == 0) goto code_?;
                                        pIVar4->vector[0].x = IStack_77.x;
                                        pIVar4->vector[0].y = IStack_77.y;
                                        pIVar4->vector[0].z = IStack_77.z;
                                        IStack_78.x = 0;
                                        IStack_78.y = 0;
                                        IStack_78.z = 0;
                                        MVWorldObject.dll::MV::WorldObject::IntVector::
                                        IntVector__ctor_1(&IStack_78,-1,0,-1,(MethodInfo *)0x0);
                                        if (pIVar4->max_length < 2) goto code_?;
                                        pIVar4->vector[1].x = IStack_78.x;
                                        pIVar4->vector[1].y = IStack_78.y;
                                        pIVar4->vector[1].z = IStack_78.z;
                                        IStack_79.x = 0;
                                        IStack_79.y = 0;
                                        IStack_79.z = 0;
                                        MVWorldObject.dll::MV::WorldObject::IntVector::
                                        IntVector__ctor_1(&IStack_79,-1,0,0,(MethodInfo *)0x0);
                                        if (pIVar4->max_length < 3) goto code_?;
                                        pIVar4->vector[2].x = IStack_79.x;
                                        pIVar4->vector[2].y = IStack_79.y;
                                        pIVar4->vector[2].z = IStack_79.z;
                                        IStack_80.x = 0;
                                        IStack_80.y = 0;
                                        IStack_80.z = 0;
                                        MVWorldObject.dll::MV::WorldObject::IntVector::
                                        IntVector__ctor_1(&IStack_80,-1,-1,0,(MethodInfo *)0x0);
                                        if (pIVar4->max_length < 4) goto code_?;
                                        pIVar4->vector[3].x = IStack_80.x;
                                        pIVar4->vector[3].y = IStack_80.y;
                                        pIVar4->vector[3].z = IStack_80.z;
                                        if (pIVar3->max_length < 0x12) goto code_?;
                                        ppIStack_9 = pIVar3->vector + 0x11;
                                        pIVar3->vector[0x11] = pIVar4;
                                        pIStack_10 = pIVar4;
                                        func_?();
                                        pIStack_11 = (IntVector__Array__Array *)0x4;
                                        pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                                        pIVar4 = (IntVector__Array *)func_?();
                                        IStack_81.x = 0;
                                        IStack_81.y = 0;
                                        IStack_81.z = 0;
                                        MVWorldObject.dll::MV::WorldObject::IntVector::
                                        IntVector__ctor_1(&IStack_81,-1,0,-1,(MethodInfo *)0x0);
                                        if (pIVar4 != (IntVector__Array *)0x0) {
                                          if (pIVar4->max_length == 0) goto code_?;
                                          pIVar4->vector[0].x = IStack_81.x;
                                          pIVar4->vector[0].y = IStack_81.y;
                                          pIVar4->vector[0].z = IStack_81.z;
                                          IStack_82.x = 0;
                                          IStack_82.y = 0;
                                          IStack_82.z = 0;
                                          MVWorldObject.dll::MV::WorldObject::IntVector::
                                          IntVector__ctor_1(&IStack_82,-1,1,-1,(MethodInfo *)0x0);
                                          if (pIVar4->max_length < 2) goto code_?;
                                          pIVar4->vector[1].x = IStack_82.x;
                                          pIVar4->vector[1].y = IStack_82.y;
                                          pIVar4->vector[1].z = IStack_82.z;
                                          IStack_83.x = 0;
                                          IStack_83.y = 0;
                                          IStack_83.z = 0;
                                          MVWorldObject.dll::MV::WorldObject::IntVector::
                                          IntVector__ctor_1(&IStack_83,-1,1,0,(MethodInfo *)0x0);
                                          if (pIVar4->max_length < 3) goto code_?;
                                          pIVar4->vector[2].x = IStack_83.x;
                                          pIVar4->vector[2].y = IStack_83.y;
                                          pIVar4->vector[2].z = IStack_83.z;
                                          IStack_84.x = 0;
                                          IStack_84.y = 0;
                                          IStack_84.z = 0;
                                          MVWorldObject.dll::MV::WorldObject::IntVector::
                                          IntVector__ctor_1(&IStack_84,-1,0,0,(MethodInfo *)0x0);
                                          if (pIVar4->max_length < 4) goto code_?;
                                          pIVar4->vector[3].x = IStack_84.x;
                                          pIVar4->vector[3].y = IStack_84.y;
                                          pIVar4->vector[3].z = IStack_84.z;
                                          if (pIVar3->max_length < 0x13) goto code_?;
                                          ppIStack_9 = pIVar3->vector + 0x12;
                                          pIVar3->vector[0x12] = pIVar4;
                                          pIStack_10 = pIVar4;
                                          func_?();
                                          pIStack_11 = (IntVector__Array__Array *)0x4;
                                          pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                                          pIVar4 = (IntVector__Array *)func_?();
                                          IStack_85.x = 0;
                                          IStack_85.y = 0;
                                          IStack_85.z = 0;
                                          MVWorldObject.dll::MV::WorldObject::IntVector::
                                          IntVector__ctor_1(&IStack_85,-1,0,0,(MethodInfo *)0x0);
                                          if (pIVar4 != (IntVector__Array *)0x0) {
                                            if (pIVar4->max_length == 0) goto code_?;
                                            pIVar4->vector[0].x = IStack_85.x;
                                            pIVar4->vector[0].y = IStack_85.y;
                                            pIVar4->vector[0].z = IStack_85.z;
                                            IStack_86.x = 0;
                                            IStack_86.y = 0;
                                            IStack_86.z = 0;
                                            MVWorldObject.dll::MV::WorldObject::IntVector::
                                            IntVector__ctor_1(&IStack_86,-1,1,0,(MethodInfo *)0x0);
                                            if (pIVar4->max_length < 2) goto code_?;
                                            pIVar4->vector[1].x = IStack_86.x;
                                            pIVar4->vector[1].y = IStack_86.y;
                                            pIVar4->vector[1].z = IStack_86.z;
                                            IStack_87.x = 0;
                                            IStack_87.y = 0;
                                            IStack_87.z = 0;
                                            MVWorldObject.dll::MV::WorldObject::IntVector::
                                            IntVector__ctor_1(&IStack_87,-1,1,1,(MethodInfo *)0x0);
                                            if (pIVar4->max_length < 3) goto code_?;
                                            pIVar4->vector[2].x = IStack_87.x;
                                            pIVar4->vector[2].y = IStack_87.y;
                                            pIVar4->vector[2].z = IStack_87.z;
                                            IStack_88.x = 0;
                                            IStack_88.y = 0;
                                            IStack_88.z = 0;
                                            MVWorldObject.dll::MV::WorldObject::IntVector::
                                            IntVector__ctor_1(&IStack_88,-1,0,1,(MethodInfo *)0x0);
                                            if (pIVar4->max_length < 4) goto code_?;
                                            pIVar4->vector[3].x = IStack_88.x;
                                            pIVar4->vector[3].y = IStack_88.y;
                                            pIVar4->vector[3].z = IStack_88.z;
                                            if (pIVar3->max_length < 0x14) goto code_?;
                                            ppIStack_9 = pIVar3->vector + 0x13;
                                            pIVar3->vector[0x13] = pIVar4;
                                            pIStack_10 = pIVar4;
                                            func_?();
                                            pIStack_11 = (IntVector__Array__Array *)0x4;
                                            pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                                            pIVar4 = (IntVector__Array *)func_?();
                                            IStack_89.x = 0;
                                            IStack_89.y = 0;
                                            IStack_89.z = 0;
                                            MVWorldObject.dll::MV::WorldObject::IntVector::
                                            IntVector__ctor_1(&IStack_89,1,-1,-1,(MethodInfo *)0x0)
                                            ;
                                            if (pIVar4 != (IntVector__Array *)0x0) {
                                              if (pIVar4->max_length == 0) goto code_?;
                                              pIVar4->vector[0].x = IStack_89.x;
                                              pIVar4->vector[0].y = IStack_89.y;
                                              pIVar4->vector[0].z = IStack_89.z;
                                              IStack_90.x = 0;
                                              IStack_90.y = 0;
                                              IStack_90.z = 0;
                                              MVWorldObject.dll::MV::WorldObject::IntVector::
                                              IntVector__ctor_1(&IStack_90,1,0,-1,(MethodInfo *)0x0
                                                               );
                                              if (pIVar4->max_length < 2) goto code_?;
                                              pIVar4->vector[1].x = IStack_90.x;
                                              pIVar4->vector[1].y = IStack_90.y;
                                              pIVar4->vector[1].z = IStack_90.z;
                                              IStack_91.x = 0;
                                              IStack_91.y = 0;
                                              IStack_91.z = 0;
                                              MVWorldObject.dll::MV::WorldObject::IntVector::
                                              IntVector__ctor_1(&IStack_91,1,0,0,(MethodInfo *)0x0)
                                              ;
                                              if (pIVar4->max_length < 3) goto code_?;
                                              pIVar4->vector[2].x = IStack_91.x;
                                              pIVar4->vector[2].y = IStack_91.y;
                                              pIVar4->vector[2].z = IStack_91.z;
                                              IStack_92.x = 0;
                                              IStack_92.y = 0;
                                              IStack_92.z = 0;
                                              MVWorldObject.dll::MV::WorldObject::IntVector::
                                              IntVector__ctor_1(&IStack_92,1,-1,0,(MethodInfo *)0x0
                                                               );
                                              if (pIVar4->max_length < 4) goto code_?;
                                              pIVar4->vector[3].x = IStack_92.x;
                                              pIVar4->vector[3].y = IStack_92.y;
                                              pIVar4->vector[3].z = IStack_92.z;
                                              if (pIVar3->max_length < 0x15) goto code_?;
                                              ppIStack_9 = pIVar3->vector + 0x14;
                                              pIVar3->vector[0x14] = pIVar4;
                                              pIStack_11 = (IntVector__Array__Array *)&UNK_?
                                              ;
                                              pIStack_10 = pIVar4;
                                              func_?();
                                              pIStack_11 = (IntVector__Array__Array *)0x4;
                                              pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                                              pIVar4 = (IntVector__Array *)func_?();
                                              IStack_93.x = 0;
                                              IStack_93.y = 0;
                                              IStack_93.z = 0;
                                              MVWorldObject.dll::MV::WorldObject::IntVector::
                                              IntVector__ctor_1(&IStack_93,1,-1,0,(MethodInfo *)0x0
                                                               );
                                              if (pIVar4 != (IntVector__Array *)0x0) {
                                                if (pIVar4->max_length == 0) goto code_?;
                                                pIVar4->vector[0].x = IStack_93.x;
                                                pIVar4->vector[0].y = IStack_93.y;
                                                pIVar4->vector[0].z = IStack_93.z;
                                                IStack_94.x = 0;
                                                IStack_94.y = 0;
                                                IStack_94.z = 0;
                                                MVWorldObject.dll::MV::WorldObject::IntVector::
                                                IntVector__ctor_1(&IStack_94,1,0,0,
                                                                  (MethodInfo *)0x0);
                                                if (pIVar4->max_length < 2) goto code_?;
                                                pIVar4->vector[1].x = IStack_94.x;
                                                pIVar4->vector[1].y = IStack_94.y;
                                                pIVar4->vector[1].z = IStack_94.z;
                                                IStack_95.x = 0;
                                                IStack_95.y = 0;
                                                IStack_95.z = 0;
                                                MVWorldObject.dll::MV::WorldObject::IntVector::
                                                IntVector__ctor_1(&IStack_95,1,0,1,
                                                                  (MethodInfo *)0x0);
                                                if (pIVar4->max_length < 3) goto code_?;
                                                pIVar4->vector[2].x = IStack_95.x;
                                                pIVar4->vector[2].y = IStack_95.y;
                                                pIVar4->vector[2].z = IStack_95.z;
                                                IStack_96.x = 0;
                                                IStack_96.y = 0;
                                                IStack_96.z = 0;
                                                MVWorldObject.dll::MV::WorldObject::IntVector::
                                                IntVector__ctor_1(&IStack_96,1,-1,1,
                                                                  (MethodInfo *)0x0);
                                                if (pIVar4->max_length < 4) goto code_?;
                                                pIVar4->vector[3].x = IStack_96.x;
                                                pIVar4->vector[3].y = IStack_96.y;
                                                pIVar4->vector[3].z = IStack_96.z;
                                                if (pIVar3->max_length < 0x16)
                                                goto code_?;
                                                ppIStack_9 = pIVar3->vector + 0x15;
                                                pIVar3->vector[0x15] = pIVar4;
                                                pIStack_11 = (IntVector__Array__Array *)
                                                              &UNK_?;
                                                pIStack_10 = pIVar4;
                                                func_?();
                                                pIStack_11 = (IntVector__Array__Array *)0x4;
                                                pIStack_12 = TypeInfo__MV__WorldObject__IntVector;
                                                pIVar4 = (IntVector__Array *)func_?();
                                                IStack_97.x = 0;
                                                IStack_97.y = 0;
                                                IStack_97.z = 0;
                                                MVWorldObject.dll::MV::WorldObject::IntVector::
                                                IntVector__ctor_1(&IStack_97,1,0,0,
                                                                  (MethodInfo *)0x0);
                                                if (pIVar4 != (IntVector__Array *)0x0) {
                                                  if (pIVar4->max_length == 0)
                                                  goto code_?;
                                                  pIVar4->vector[0].x = IStack_97.x;
                                                  pIVar4->vector[0].y = IStack_97.y;
                                                  pIVar4->vector[0].z = IStack_97.z;
                                                  IStack_98.x = 0;
                                                  IStack_98.y = 0;
                                                  IStack_98.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_98,1,1,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4->max_length < 2) goto code_?;
                                                  pIVar4->vector[1].x = IStack_98.x;
                                                  pIVar4->vector[1].y = IStack_98.y;
                                                  pIVar4->vector[1].z = IStack_98.z;
                                                  IStack_99.x = 0;
                                                  IStack_99.y = 0;
                                                  IStack_99.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_99,1,1,1,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4->max_length < 3) goto code_?;
                                                  pIVar4->vector[2].x = IStack_99.x;
                                                  pIVar4->vector[2].y = IStack_99.y;
                                                  pIVar4->vector[2].z = IStack_99.z;
                                                  IStack_100.x = 0;
                                                  IStack_100.y = 0;
                                                  IStack_100.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_100,1,0,1,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4->max_length < 4) goto code_?;
                                                  pIVar4->vector[3].x = IStack_100.x;
                                                  pIVar4->vector[3].y = IStack_100.y;
                                                  pIVar4->vector[3].z = IStack_100.z;
                                                  if (pIVar3->max_length < 0x17)
                                                  goto code_?;
                                                  ppIStack_9 = pIVar3->vector + 0x16;
                                                  pIVar3->vector[0x16] = pIVar4;
                                                  pIStack_11 = (IntVector__Array__Array *)
                                                                &UNK_?;
                                                  pIStack_10 = pIVar4;
                                                  func_?();
                                                  pIStack_11 = (IntVector__Array__Array *)0x4;
                                                  pIStack_12 = TypeInfo__MV__WorldObject__IntVector
                                                  ;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_101.x = 0;
                                                  IStack_101.y = 0;
                                                  IStack_101.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_101,1,0,-1,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_101.x;
                                                    pIVar4->vector[0].y = IStack_101.y;
                                                    pIVar4->vector[0].z = IStack_101.z;
                                                    IStack_102.x = 0;
                                                    IStack_102.y = 0;
                                                    IStack_102.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_102,1,1,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_102.x;
                                                    pIVar4->vector[1].y = IStack_102.y;
                                                    pIVar4->vector[1].z = IStack_102.z;
                                                    IStack_103.x = 0;
                                                    IStack_103.y = 0;
                                                    IStack_103.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_103,1,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_103.x;
                                                    pIVar4->vector[2].y = IStack_103.y;
                                                    pIVar4->vector[2].z = IStack_103.z;
                                                    IStack_104.x = 0;
                                                    IStack_104.y = 0;
                                                    IStack_104.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_104,1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_104.x;
                                                    pIVar4->vector[3].y = IStack_104.y;
                                                    pIVar4->vector[3].z = IStack_104.z;
                                                    if (pIVar3->max_length < 0x18)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0x17;
                                                    pIVar3->vector[0x17] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    TypeInfo__SharedCubeFunctions->static_fields->
                                                    LightTestOffsets = pIVar3;
                                                    pIStack_12 = (IntVector__Array__Class *)
                                                                  &TypeInfo__SharedCubeFunctions->
                                                                   static_fields->LightTestOffsets;
                                                    pIStack_11 = pIVar3;
                                                    func_?();
                                                    puStack_105 = (undefined *)0x18;
                                                    pIVar3 = (IntVector__Array__Array *)
                                                             func_?();
                                                    pIVar4 = (IntVector__Array *)func_?();
                                                    IStack_106.x = 0;
                                                    IStack_106.y = 0;
                                                    IStack_106.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_106,-1,0,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4 != (IntVector__Array *)0x0) {
                                                      if (pIVar4->max_length == 0)
                                                      goto code_?;
                                                      pIVar4->vector[0].x = IStack_106.x;
                                                      pIVar4->vector[0].y = IStack_106.y;
                                                      pIVar4->vector[0].z = IStack_106.z;
                                                      IStack_107.x = 0;
                                                      IStack_107.y = 0;
                                                      IStack_107.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_107,-1,0,0,
                                                                          (MethodInfo *)0x0);
                                                      if (pIVar4->max_length < 2)
                                                      goto code_?;
                                                      pIVar4->vector[1].x = IStack_107.x;
                                                      pIVar4->vector[1].y = IStack_107.y;
                                                      pIVar4->vector[1].z = IStack_107.z;
                                                      IStack_108.x = 0;
                                                      IStack_108.y = 0;
                                                      IStack_108.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_108,0,0,0,
                                                                          (MethodInfo *)0x0);
                                                      if (pIVar4->max_length < 3)
                                                      goto code_?;
                                                      pIVar4->vector[2].x = IStack_108.x;
                                                      pIVar4->vector[2].y = IStack_108.y;
                                                      pIVar4->vector[2].z = IStack_108.z;
                                                      IStack_109.x = 0;
                                                      IStack_109.y = 0;
                                                      IStack_109.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_109,0,0,-1,
                                                                          (MethodInfo *)0x0);
                                                      if (pIVar4->max_length < 4)
                                                      goto code_?;
                                                      pIVar4->vector[3].x = IStack_109.x;
                                                      pIVar4->vector[3].y = IStack_109.y;
                                                      pIVar4->vector[3].z = IStack_109.z;
                                                      if (pIVar3 != (IntVector__Array__Array *)0x0)
                                                      {
                                                        if (pIVar3->max_length == 0)
                                                        goto code_?;
                                                        ppIStack_9 = pIVar3->vector;
                                                        pIVar3->vector[0] = pIVar4;
                                                        pIStack_11 = (IntVector__Array__Array *)
                                                                      &UNK_?;
                                                        pIStack_10 = pIVar4;
                                                        func_?();
                                                        pIStack_11 = (IntVector__Array__Array *)0x4
                                                        ;
                                                        pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_110.x = 0;
                                                  IStack_110.y = 0;
                                                  IStack_110.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_110,0,0,-1,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_110.x;
                                                    pIVar4->vector[0].y = IStack_110.y;
                                                    pIVar4->vector[0].z = IStack_110.z;
                                                    IStack_111.x = 0;
                                                    IStack_111.y = 0;
                                                    IStack_111.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_111,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_111.x;
                                                    pIVar4->vector[1].y = IStack_111.y;
                                                    pIVar4->vector[1].z = IStack_111.z;
                                                    IStack_112.x = 0;
                                                    IStack_112.y = 0;
                                                    IStack_112.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_112,1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_112.x;
                                                    pIVar4->vector[2].y = IStack_112.y;
                                                    pIVar4->vector[2].z = IStack_112.z;
                                                    IStack_113.x = 0;
                                                    IStack_113.y = 0;
                                                    IStack_113.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_113,1,0,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_113.x;
                                                    pIVar4->vector[3].y = IStack_113.y;
                                                    pIVar4->vector[3].z = IStack_113.z;
                                                    if (pIVar3->max_length < 2)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 1;
                                                    pIVar3->vector[1] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_114.x = 0;
                                                  IStack_114.y = 0;
                                                  IStack_114.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_114,0,0,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_114.x;
                                                    pIVar4->vector[0].y = IStack_114.y;
                                                    pIVar4->vector[0].z = IStack_114.z;
                                                    IStack_115.x = 0;
                                                    IStack_115.y = 0;
                                                    IStack_115.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_115,0,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_115.x;
                                                    pIVar4->vector[1].y = IStack_115.y;
                                                    pIVar4->vector[1].z = IStack_115.z;
                                                    IStack_116.x = 0;
                                                    IStack_116.y = 0;
                                                    IStack_116.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_116,1,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_116.x;
                                                    pIVar4->vector[2].y = IStack_116.y;
                                                    pIVar4->vector[2].z = IStack_116.z;
                                                    IStack_117.x = 0;
                                                    IStack_117.y = 0;
                                                    IStack_117.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_117,1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_117.x;
                                                    pIVar4->vector[3].y = IStack_117.y;
                                                    pIVar4->vector[3].z = IStack_117.z;
                                                    if (pIVar3->max_length < 3)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 2;
                                                    pIVar3->vector[2] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_118.x = 0;
                                                  IStack_118.y = 0;
                                                  IStack_118.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_118,-1,0,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_118.x;
                                                    pIVar4->vector[0].y = IStack_118.y;
                                                    pIVar4->vector[0].z = IStack_118.z;
                                                    IStack_119.x = 0;
                                                    IStack_119.y = 0;
                                                    IStack_119.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_119,-1,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_119.x;
                                                    pIVar4->vector[1].y = IStack_119.y;
                                                    pIVar4->vector[1].z = IStack_119.z;
                                                    IStack_120.x = 0;
                                                    IStack_120.y = 0;
                                                    IStack_120.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_120,0,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_120.x;
                                                    pIVar4->vector[2].y = IStack_120.y;
                                                    pIVar4->vector[2].z = IStack_120.z;
                                                    IStack_121.x = 0;
                                                    IStack_121.y = 0;
                                                    IStack_121.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_121,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_121.x;
                                                    pIVar4->vector[3].y = IStack_121.y;
                                                    pIVar4->vector[3].z = IStack_121.z;
                                                    if (pIVar3->max_length < 4)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 3;
                                                    pIVar3->vector[3] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_122.x = 0;
                                                  IStack_122.y = 0;
                                                  IStack_122.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_122,-1,0,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_122.x;
                                                    pIVar4->vector[0].y = IStack_122.y;
                                                    pIVar4->vector[0].z = IStack_122.z;
                                                    IStack_123.x = 0;
                                                    IStack_123.y = 0;
                                                    IStack_123.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_123,-1,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_123.x;
                                                    pIVar4->vector[1].y = IStack_123.y;
                                                    pIVar4->vector[1].z = IStack_123.z;
                                                    IStack_124.x = 0;
                                                    IStack_124.y = 0;
                                                    IStack_124.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_124,0,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_124.x;
                                                    pIVar4->vector[2].y = IStack_124.y;
                                                    pIVar4->vector[2].z = IStack_124.z;
                                                    IStack_125.x = 0;
                                                    IStack_125.y = 0;
                                                    IStack_125.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_125,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_125.x;
                                                    pIVar4->vector[3].y = IStack_125.y;
                                                    pIVar4->vector[3].z = IStack_125.z;
                                                    if (pIVar3->max_length < 5)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 4;
                                                    pIVar3->vector[4] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_126.x = 0;
                                                  IStack_126.y = 0;
                                                  IStack_126.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_126,0,0,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_126.x;
                                                    pIVar4->vector[0].y = IStack_126.y;
                                                    pIVar4->vector[0].z = IStack_126.z;
                                                    IStack_127.x = 0;
                                                    IStack_127.y = 0;
                                                    IStack_127.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_127,0,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_127.x;
                                                    pIVar4->vector[1].y = IStack_127.y;
                                                    pIVar4->vector[1].z = IStack_127.z;
                                                    IStack_128.x = 0;
                                                    IStack_128.y = 0;
                                                    IStack_128.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_128,1,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_128.x;
                                                    pIVar4->vector[2].y = IStack_128.y;
                                                    pIVar4->vector[2].z = IStack_128.z;
                                                    IStack_129.x = 0;
                                                    IStack_129.y = 0;
                                                    IStack_129.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_129,1,0,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_129.x;
                                                    pIVar4->vector[3].y = IStack_129.y;
                                                    pIVar4->vector[3].z = IStack_129.z;
                                                    if (pIVar3->max_length < 6)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 5;
                                                    pIVar3->vector[5] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_130.x = 0;
                                                  IStack_130.y = 0;
                                                  IStack_130.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_130,0,0,-1,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_130.x;
                                                    pIVar4->vector[0].y = IStack_130.y;
                                                    pIVar4->vector[0].z = IStack_130.z;
                                                    IStack_131.x = 0;
                                                    IStack_131.y = 0;
                                                    IStack_131.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_131,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_131.x;
                                                    pIVar4->vector[1].y = IStack_131.y;
                                                    pIVar4->vector[1].z = IStack_131.z;
                                                    IStack_132.x = 0;
                                                    IStack_132.y = 0;
                                                    IStack_132.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_132,1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_132.x;
                                                    pIVar4->vector[2].y = IStack_132.y;
                                                    pIVar4->vector[2].z = IStack_132.z;
                                                    IStack_133.x = 0;
                                                    IStack_133.y = 0;
                                                    IStack_133.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_133,1,0,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_133.x;
                                                    pIVar4->vector[3].y = IStack_133.y;
                                                    pIVar4->vector[3].z = IStack_133.z;
                                                    if (pIVar3->max_length < 7)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 6;
                                                    pIVar3->vector[6] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_134.x = 0;
                                                  IStack_134.y = 0;
                                                  IStack_134.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_134,-1,0,-1,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_134.x;
                                                    pIVar4->vector[0].y = IStack_134.y;
                                                    pIVar4->vector[0].z = IStack_134.z;
                                                    IStack_135.x = 0;
                                                    IStack_135.y = 0;
                                                    IStack_135.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_135,-1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_135.x;
                                                    pIVar4->vector[1].y = IStack_135.y;
                                                    pIVar4->vector[1].z = IStack_135.z;
                                                    IStack_136.x = 0;
                                                    IStack_136.y = 0;
                                                    IStack_136.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_136,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_136.x;
                                                    pIVar4->vector[2].y = IStack_136.y;
                                                    pIVar4->vector[2].z = IStack_136.z;
                                                    IStack_137.x = 0;
                                                    IStack_137.y = 0;
                                                    IStack_137.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_137,0,0,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_137.x;
                                                    pIVar4->vector[3].y = IStack_137.y;
                                                    pIVar4->vector[3].z = IStack_137.z;
                                                    if (pIVar3->max_length < 8)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 7;
                                                    pIVar3->vector[7] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_138.x = 0;
                                                  IStack_138.y = 0;
                                                  IStack_138.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_138,-1,-1,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_138.x;
                                                    pIVar4->vector[0].y = IStack_138.y;
                                                    pIVar4->vector[0].z = IStack_138.z;
                                                    IStack_139.x = 0;
                                                    IStack_139.y = 0;
                                                    IStack_139.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_139,-1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_139.x;
                                                    pIVar4->vector[1].y = IStack_139.y;
                                                    pIVar4->vector[1].z = IStack_139.z;
                                                    IStack_140.x = 0;
                                                    IStack_140.y = 0;
                                                    IStack_140.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_140,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_140.x;
                                                    pIVar4->vector[2].y = IStack_140.y;
                                                    pIVar4->vector[2].z = IStack_140.z;
                                                    IStack_141.x = 0;
                                                    IStack_141.y = 0;
                                                    IStack_141.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_141,0,-1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_141.x;
                                                    pIVar4->vector[3].y = IStack_141.y;
                                                    pIVar4->vector[3].z = IStack_141.z;
                                                    if (pIVar3->max_length < 9)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 8;
                                                    pIVar3->vector[8] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_142.x = 0;
                                                  IStack_142.y = 0;
                                                  IStack_142.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_142,0,-1,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_142.x;
                                                    pIVar4->vector[0].y = IStack_142.y;
                                                    pIVar4->vector[0].z = IStack_142.z;
                                                    IStack_143.x = 0;
                                                    IStack_143.y = 0;
                                                    IStack_143.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_143,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_143.x;
                                                    pIVar4->vector[1].y = IStack_143.y;
                                                    pIVar4->vector[1].z = IStack_143.z;
                                                    IStack_144.x = 0;
                                                    IStack_144.y = 0;
                                                    IStack_144.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_144,1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_144.x;
                                                    pIVar4->vector[2].y = IStack_144.y;
                                                    pIVar4->vector[2].z = IStack_144.z;
                                                    IStack_145.x = 0;
                                                    IStack_145.y = 0;
                                                    IStack_145.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_145,1,-1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_145.x;
                                                    pIVar4->vector[3].y = IStack_145.y;
                                                    pIVar4->vector[3].z = IStack_145.z;
                                                    if (pIVar3->max_length < 10)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 9;
                                                    pIVar3->vector[9] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_146.x = 0;
                                                  IStack_146.y = 0;
                                                  IStack_146.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_146,0,0,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_146.x;
                                                    pIVar4->vector[0].y = IStack_146.y;
                                                    pIVar4->vector[0].z = IStack_146.z;
                                                    IStack_147.x = 0;
                                                    IStack_147.y = 0;
                                                    IStack_147.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_147,0,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_147.x;
                                                    pIVar4->vector[1].y = IStack_147.y;
                                                    pIVar4->vector[1].z = IStack_147.z;
                                                    IStack_148.x = 0;
                                                    IStack_148.y = 0;
                                                    IStack_148.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_148,1,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_148.x;
                                                    pIVar4->vector[2].y = IStack_148.y;
                                                    pIVar4->vector[2].z = IStack_148.z;
                                                    IStack_149.x = 0;
                                                    IStack_149.y = 0;
                                                    IStack_149.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_149,1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_149.x;
                                                    pIVar4->vector[3].y = IStack_149.y;
                                                    pIVar4->vector[3].z = IStack_149.z;
                                                    if (pIVar3->max_length < 0xb)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 10;
                                                    pIVar3->vector[10] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_150.x = 0;
                                                  IStack_150.y = 0;
                                                  IStack_150.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_150,-1,0,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_150.x;
                                                    pIVar4->vector[0].y = IStack_150.y;
                                                    pIVar4->vector[0].z = IStack_150.z;
                                                    IStack_151.x = 0;
                                                    IStack_151.y = 0;
                                                    IStack_151.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_151,-1,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_151.x;
                                                    pIVar4->vector[1].y = IStack_151.y;
                                                    pIVar4->vector[1].z = IStack_151.z;
                                                    IStack_152.x = 0;
                                                    IStack_152.y = 0;
                                                    IStack_152.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_152,0,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_152.x;
                                                    pIVar4->vector[2].y = IStack_152.y;
                                                    pIVar4->vector[2].z = IStack_152.z;
                                                    IStack_153.x = 0;
                                                    IStack_153.y = 0;
                                                    IStack_153.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_153,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_153.x;
                                                    pIVar4->vector[3].y = IStack_153.y;
                                                    pIVar4->vector[3].z = IStack_153.z;
                                                    if (pIVar3->max_length < 0xc)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0xb;
                                                    pIVar3->vector[0xb] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_154.x = 0;
                                                  IStack_154.y = 0;
                                                  IStack_154.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_154,0,-1,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_154.x;
                                                    pIVar4->vector[0].y = IStack_154.y;
                                                    pIVar4->vector[0].z = IStack_154.z;
                                                    IStack_155.x = 0;
                                                    IStack_155.y = 0;
                                                    IStack_155.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_155,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_155.x;
                                                    pIVar4->vector[1].y = IStack_155.y;
                                                    pIVar4->vector[1].z = IStack_155.z;
                                                    IStack_156.x = 0;
                                                    IStack_156.y = 0;
                                                    IStack_156.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_156,1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_156.x;
                                                    pIVar4->vector[2].y = IStack_156.y;
                                                    pIVar4->vector[2].z = IStack_156.z;
                                                    IStack_157.x = 0;
                                                    IStack_157.y = 0;
                                                    IStack_157.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_157,1,-1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_157.x;
                                                    pIVar4->vector[3].y = IStack_157.y;
                                                    pIVar4->vector[3].z = IStack_157.z;
                                                    if (pIVar3->max_length < 0xd)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0xc;
                                                    pIVar3->vector[0xc] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_158.x = 0;
                                                  IStack_158.y = 0;
                                                  IStack_158.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_158,-1,-1,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_158.x;
                                                    pIVar4->vector[0].y = IStack_158.y;
                                                    pIVar4->vector[0].z = IStack_158.z;
                                                    IStack_159.x = 0;
                                                    IStack_159.y = 0;
                                                    IStack_159.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_159,-1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_159.x;
                                                    pIVar4->vector[1].y = IStack_159.y;
                                                    pIVar4->vector[1].z = IStack_159.z;
                                                    IStack_160.x = 0;
                                                    IStack_160.y = 0;
                                                    IStack_160.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_160,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_160.x;
                                                    pIVar4->vector[2].y = IStack_160.y;
                                                    pIVar4->vector[2].z = IStack_160.z;
                                                    IStack_161.x = 0;
                                                    IStack_161.y = 0;
                                                    IStack_161.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_161,0,-1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_161.x;
                                                    pIVar4->vector[3].y = IStack_161.y;
                                                    pIVar4->vector[3].z = IStack_161.z;
                                                    if (pIVar3->max_length < 0xe)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0xd;
                                                    pIVar3->vector[0xd] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_162.x = 0;
                                                  IStack_162.y = 0;
                                                  IStack_162.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_162,-1,0,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_162.x;
                                                    pIVar4->vector[0].y = IStack_162.y;
                                                    pIVar4->vector[0].z = IStack_162.z;
                                                    IStack_163.x = 0;
                                                    IStack_163.y = 0;
                                                    IStack_163.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_163,-1,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_163.x;
                                                    pIVar4->vector[1].y = IStack_163.y;
                                                    pIVar4->vector[1].z = IStack_163.z;
                                                    IStack_164.x = 0;
                                                    IStack_164.y = 0;
                                                    IStack_164.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_164,0,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_164.x;
                                                    pIVar4->vector[2].y = IStack_164.y;
                                                    pIVar4->vector[2].z = IStack_164.z;
                                                    IStack_165.x = 0;
                                                    IStack_165.y = 0;
                                                    IStack_165.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_165,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_165.x;
                                                    pIVar4->vector[3].y = IStack_165.y;
                                                    pIVar4->vector[3].z = IStack_165.z;
                                                    if (pIVar3->max_length < 0xf)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0xe;
                                                    pIVar3->vector[0xe] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_166.x = 0;
                                                  IStack_166.y = 0;
                                                  IStack_166.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_166,0,0,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_166.x;
                                                    pIVar4->vector[0].y = IStack_166.y;
                                                    pIVar4->vector[0].z = IStack_166.z;
                                                    IStack_167.x = 0;
                                                    IStack_167.y = 0;
                                                    IStack_167.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_167,0,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_167.x;
                                                    pIVar4->vector[1].y = IStack_167.y;
                                                    pIVar4->vector[1].z = IStack_167.z;
                                                    IStack_168.x = 0;
                                                    IStack_168.y = 0;
                                                    IStack_168.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_168,1,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_168.x;
                                                    pIVar4->vector[2].y = IStack_168.y;
                                                    pIVar4->vector[2].z = IStack_168.z;
                                                    IStack_169.x = 0;
                                                    IStack_169.y = 0;
                                                    IStack_169.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_169,1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_169.x;
                                                    pIVar4->vector[3].y = IStack_169.y;
                                                    pIVar4->vector[3].z = IStack_169.z;
                                                    if (pIVar3->max_length < 0x10)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0xf;
                                                    pIVar3->vector[0xf] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_170.x = 0;
                                                  IStack_170.y = 0;
                                                  IStack_170.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_170,0,-1,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_170.x;
                                                    pIVar4->vector[0].y = IStack_170.y;
                                                    pIVar4->vector[0].z = IStack_170.z;
                                                    IStack_171.x = 0;
                                                    IStack_171.y = 0;
                                                    IStack_171.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_171,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_171.x;
                                                    pIVar4->vector[1].y = IStack_171.y;
                                                    pIVar4->vector[1].z = IStack_171.z;
                                                    IStack_172.x = 0;
                                                    IStack_172.y = 0;
                                                    IStack_172.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_172,0,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_172.x;
                                                    pIVar4->vector[2].y = IStack_172.y;
                                                    pIVar4->vector[2].z = IStack_172.z;
                                                    IStack_173.x = 0;
                                                    IStack_173.y = 0;
                                                    IStack_173.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_173,0,-1,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_173.x;
                                                    pIVar4->vector[3].y = IStack_173.y;
                                                    pIVar4->vector[3].z = IStack_173.z;
                                                    if (pIVar3->max_length < 0x11)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0x10;
                                                    pIVar3->vector[0x10] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_174.x = 0;
                                                  IStack_174.y = 0;
                                                  IStack_174.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_174,0,-1,-1,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_174.x;
                                                    pIVar4->vector[0].y = IStack_174.y;
                                                    pIVar4->vector[0].z = IStack_174.z;
                                                    IStack_175.x = 0;
                                                    IStack_175.y = 0;
                                                    IStack_175.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_175,0,0,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_175.x;
                                                    pIVar4->vector[1].y = IStack_175.y;
                                                    pIVar4->vector[1].z = IStack_175.z;
                                                    IStack_176.x = 0;
                                                    IStack_176.y = 0;
                                                    IStack_176.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_176,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_176.x;
                                                    pIVar4->vector[2].y = IStack_176.y;
                                                    pIVar4->vector[2].z = IStack_176.z;
                                                    IStack_177.x = 0;
                                                    IStack_177.y = 0;
                                                    IStack_177.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_177,0,-1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_177.x;
                                                    pIVar4->vector[3].y = IStack_177.y;
                                                    pIVar4->vector[3].z = IStack_177.z;
                                                    if (pIVar3->max_length < 0x12)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0x11;
                                                    pIVar3->vector[0x11] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_178.x = 0;
                                                  IStack_178.y = 0;
                                                  IStack_178.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_178,0,0,-1,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_178.x;
                                                    pIVar4->vector[0].y = IStack_178.y;
                                                    pIVar4->vector[0].z = IStack_178.z;
                                                    IStack_179.x = 0;
                                                    IStack_179.y = 0;
                                                    IStack_179.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_179,0,1,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_179.x;
                                                    pIVar4->vector[1].y = IStack_179.y;
                                                    pIVar4->vector[1].z = IStack_179.z;
                                                    IStack_180.x = 0;
                                                    IStack_180.y = 0;
                                                    IStack_180.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_180,0,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_180.x;
                                                    pIVar4->vector[2].y = IStack_180.y;
                                                    pIVar4->vector[2].z = IStack_180.z;
                                                    IStack_181.x = 0;
                                                    IStack_181.y = 0;
                                                    IStack_181.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_181,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_181.x;
                                                    pIVar4->vector[3].y = IStack_181.y;
                                                    pIVar4->vector[3].z = IStack_181.z;
                                                    if (pIVar3->max_length < 0x13)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0x12;
                                                    pIVar3->vector[0x12] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_182.x = 0;
                                                  IStack_182.y = 0;
                                                  IStack_182.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_182,0,0,0,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_182.x;
                                                    pIVar4->vector[0].y = IStack_182.y;
                                                    pIVar4->vector[0].z = IStack_182.z;
                                                    IStack_183.x = 0;
                                                    IStack_183.y = 0;
                                                    IStack_183.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_183,0,1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_183.x;
                                                    pIVar4->vector[1].y = IStack_183.y;
                                                    pIVar4->vector[1].z = IStack_183.z;
                                                    IStack_184.x = 0;
                                                    IStack_184.y = 0;
                                                    IStack_184.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_184,0,1,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_184.x;
                                                    pIVar4->vector[2].y = IStack_184.y;
                                                    pIVar4->vector[2].z = IStack_184.z;
                                                    IStack_185.x = 0;
                                                    IStack_185.y = 0;
                                                    IStack_185.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_185,0,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_185.x;
                                                    pIVar4->vector[3].y = IStack_185.y;
                                                    pIVar4->vector[3].z = IStack_185.z;
                                                    if (pIVar3->max_length < 0x14)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0x13;
                                                    pIVar3->vector[0x13] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  IStack_186.x = 0;
                                                  IStack_186.y = 0;
                                                  IStack_186.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_186,0,-1,-1,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = IStack_186.x;
                                                    pIVar4->vector[0].y = IStack_186.y;
                                                    pIVar4->vector[0].z = IStack_186.z;
                                                    IStack_187.x = 0;
                                                    IStack_187.y = 0;
                                                    IStack_187.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_187,0,0,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = IStack_187.x;
                                                    pIVar4->vector[1].y = IStack_187.y;
                                                    pIVar4->vector[1].z = IStack_187.z;
                                                    IStack_188.x = 0;
                                                    IStack_188.y = 0;
                                                    IStack_188.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_188,0,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = IStack_188.x;
                                                    pIVar4->vector[2].y = IStack_188.y;
                                                    pIVar4->vector[2].z = IStack_188.z;
                                                    IStack_189.x = 0;
                                                    IStack_189.y = 0;
                                                    IStack_189.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_189,0,-1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = IStack_189.x;
                                                    pIVar4->vector[3].y = IStack_189.y;
                                                    pIVar4->vector[3].z = IStack_189.z;
                                                    if (pIVar3->max_length < 0x15)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0x14;
                                                    pIVar3->vector[0x14] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  pIStack_10 = (IntVector__Array *)0x0;
                                                  iStack_190 = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1((IntVector *)&pIStack_10,0,-1,0
                                                                    ,(MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    *(IntVector__Array **)pIVar4->vector =
                                                         pIStack_10;
                                                    pIVar4->vector[0].z = iStack_190;
                                                    pIStack_11 = (IntVector__Array__Array *)0x0;
                                                    ppIStack_9 = (IntVector__Array **)
                                                                   ((uint)ppIStack_9 & 0xffff0000)
                                                    ;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1((IntVector *)&pIStack_11,0,0,
                                                                      0,(MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    *(IntVector__Array__Array **)
                                                     (pIVar4->vector + 1) = pIStack_11;
                                                    pIVar4->vector[1].z = (int16_t)ppIStack_9;
                                                    puStack_105 = (undefined *)0x0;
                                                    pIStack_12 = (IntVector__Array__Class *)
                                                                  ((uint)pIStack_12 & 0xffff0000);
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1((IntVector *)&puStack_105,0,0,
                                                                      1,(MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    *(undefined **)(pIVar4->vector + 2) =
                                                         puStack_105;
                                                    pIVar4->vector[2].z = (int16_t)pIStack_12;
                                                    uVar191._0_2_ = 0;
                                                    uVar191._2_2_ = 0;
                                                    iVar192 = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1((IntVector *)&stack0xfffffa34,
                                                                      0,-1,0,(MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = (int16_t)uVar191;
                                                    pIVar4->vector[3].y = SUB42(uVar191,2);
                                                    pIVar4->vector[3].z = iVar192;
                                                    if (pIVar3->max_length < 0x16)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0x15;
                                                    pIVar3->vector[0x15] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  uVar193._0_2_ = 0;
                                                  uVar193._2_2_ = 0;
                                                  iVar192 = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1((IntVector *)&stack0xfffffa2c,0,
                                                                    0,0,(MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length == 0)
                                                    goto code_?;
                                                    pIVar4->vector[0].x = (int16_t)uVar193;
                                                    pIVar4->vector[0].y = SUB42(uVar193,2);
                                                    pIVar4->vector[0].z = iVar192;
                                                    uVar194._0_2_ = 0;
                                                    uVar194._2_2_ = 0;
                                                    iVar192 = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1((IntVector *)&stack0xfffffa24,
                                                                      0,1,0,(MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 2)
                                                    goto code_?;
                                                    pIVar4->vector[1].x = (int16_t)uVar194;
                                                    pIVar4->vector[1].y = SUB42(uVar194,2);
                                                    pIVar4->vector[1].z = iVar192;
                                                    uVar195._0_2_ = 0;
                                                    uVar195._2_2_ = 0;
                                                    iVar192 = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1((IntVector *)&stack0xfffffa1c,
                                                                      0,0,0,(MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 3)
                                                    goto code_?;
                                                    pIVar4->vector[2].x = (int16_t)uVar195;
                                                    pIVar4->vector[2].y = SUB42(uVar195,2);
                                                    pIVar4->vector[2].z = iVar192;
                                                    uVar196._0_2_ = 0;
                                                    uVar196._2_2_ = 0;
                                                    iVar192 = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1((IntVector *)&stack0xfffffa14,
                                                                      0,0,1,(MethodInfo *)0x0);
                                                    if (pIVar4->max_length < 4)
                                                    goto code_?;
                                                    pIVar4->vector[3].x = (int16_t)uVar196;
                                                    pIVar4->vector[3].y = SUB42(uVar196,2);
                                                    pIVar4->vector[3].z = iVar192;
                                                    if (pIVar3->max_length < 0x17)
                                                    goto code_?;
                                                    ppIStack_9 = pIVar3->vector + 0x16;
                                                    pIVar3->vector[0x16] = pIVar4;
                                                    pIStack_11 = (IntVector__Array__Array *)
                                                                  &UNK_?;
                                                    pIStack_10 = pIVar4;
                                                    func_?();
                                                    pIStack_11 = (IntVector__Array__Array *)0x4;
                                                    pIStack_12 = 
                                                  TypeInfo__MV__WorldObject__IntVector;
                                                  pIVar4 = (IntVector__Array *)func_?();
                                                  uVar197._0_2_ = 0;
                                                  uVar197._2_2_ = 0;
                                                  iVar192 = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1((IntVector *)&stack0xfffffa0c,0,
                                                                    0,-1,(MethodInfo *)0x0);
                                                  if (pIVar4 != (IntVector__Array *)0x0) {
                                                    if (pIVar4->max_length != 0) {
                                                      pIVar4->vector[0].x = (int16_t)uVar197;
                                                      pIVar4->vector[0].y = SUB42(uVar197,2);
                                                      pIVar4->vector[0].z = iVar192;
                                                      uVar198._0_2_ = 0;
                                                      uVar198._2_2_ = 0;
                                                      iVar192 = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1((IntVector *)
                                                                          &stack0xfffffa04,0,0,-1,
                                                                          (MethodInfo *)0x0);
                                                      if (1 < pIVar4->max_length) {
                                                        pIVar4->vector[1].x = (int16_t)uVar198;
                                                        pIVar4->vector[1].y = SUB42(uVar198,2);
                                                        pIVar4->vector[1].z = iVar192;
                                                        puStack_199 = (undefined *)0x0;
                                                        iVar192 = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  ((IntVector *)&puStack_199,0,1,0,
                                                                   (MethodInfo *)0x0);
                                                        if (2 < pIVar4->max_length) {
                                                          *(undefined **)(pIVar4->vector + 2) =
                                                               puStack_199;
                                                          pIVar4->vector[2].z = iVar192;
                                                          IStack_200.x = 0;
                                                          IStack_200.y = 0;
                                                          IStack_200.z = 0;
                                                          MVWorldObject.dll::MV::WorldObject::
                                                          IntVector::IntVector__ctor_1
                                                                    (&IStack_200,0,0,0,
                                                                     (MethodInfo *)0x0);
                                                          if (3 < pIVar4->max_length) {
                                                            pIVar4->vector[3].x = IStack_200.x;
                                                            pIVar4->vector[3].y = IStack_200.y;
                                                            pIVar4->vector[3].z = IStack_200.z;
                                                            if (0x17 < pIVar3->max_length) {
                                                              ppIStack_9 = pIVar3->vector + 0x17;
                                                              pIVar3->vector[0x17] = pIVar4;
                                                              pIStack_11 = (IntVector__Array__Array
                                                                             *)&UNK_?;
                                                              pIStack_10 = pIVar4;
                                                              func_?();
                                                              TypeInfo__SharedCubeFunctions->
                                                              static_fields->LightTestOffsetsInside
                                                                   = pIVar3;
                                                              pIStack_12 = (IntVector__Array__Class
                                                                             *)&
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  LightTestOffsetsInside;
                                                  pIStack_11 = pIVar3;
                                                  func_?();
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
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
  pcVar201 = (code *)swi(3);
  (*pcVar201)();
  return;
}


/* IntVector get_CubeConstraint() */

IntVector Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraint
                    (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pSVar1 = TypeInfo__SharedCubeFunctions->static_fields;
  method->methodPointer = *(Il2CppMethodPointer *)&pSVar1->constraint;
  *(int16_t *)&method->virtualMethodPointer = (pSVar1->constraint).z;
  IVar2.z = (int16_t)pSVar1;
  IVar2._0_4_ = method;
  return IVar2;
}


/* Vector3 get_CubeConstraintVector3() */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pSVar1 = TypeInfo__SharedCubeFunctions;
  sVar2 = (TypeInfo__SharedCubeFunctions->static_fields->constraint).y;
  __return_storage_ptr__->x =
       (float)(int)(TypeInfo__SharedCubeFunctions->static_fields->constraint).x;
  sVar3 = (pSVar1->static_fields->constraint).z;
  __return_storage_ptr__->y = (float)(int)sVar2;
  __return_storage_ptr__->z = (float)(int)sVar3;
  return __return_storage_ptr__;
}

