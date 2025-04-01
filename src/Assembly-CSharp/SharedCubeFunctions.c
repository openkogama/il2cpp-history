
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
  value.y = p1.y - p0.y;
  value.x = p1.x - p0.x;
  value.z = p1.z - p0.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_3,value,(MethodInfo *)0x0);
  fVar4 = pVVar2->z;
  fVar5 = pVVar2->x;
  fVar6 = 0.0;
  fVar7 = 0.0;
  auVar8._12_4_ = in_stack_9._12_4_;
  auVar8._0_4_ = pVVar2->x;
  auVar8._4_4_ = pVVar2->y;
  auVar8._8_4_ = pVVar2->z;
  fVar10 = fVar4;
  fVar11 = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  fVar12 = auVar8._4_4_ * auVar8._4_4_ + auVar8._0_4_ * auVar8._0_4_ +
           auVar8._8_4_ * auVar8._8_4_;
  fVar13 = fVar5 * fVar5 + fVar6 + fVar10 * fVar10;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  pMVar14 = TypeInfo__System__Math;
  auVar15 = auVar8._0_12_;
  dVar16 = (double)(fVar13 * fVar12);
  if (dVar16 < 0.0) {
    func_?();
    auVar15 = auVar8._0_12_;
  }
  else {
    dVar16 = SQRT(dVar16);
  }
  if (_UNK_? <= (float)dVar16) {
    puStack_17 = (undefined *)
                 ((fVar5 * auVar15._0_4_ + auVar15._4_4_ * fVar6 + fVar10 * auVar15._8_4_) /
                 (float)dVar16);
    fVar10 = _UNK_?;
    if (((float)puStack_17 < _UNK_?) ||
       (fVar10 = _UNK_?, _UNK_? < (float)puStack_17)) {
      puStack_17 = (undefined *)fVar10;
    }
    if ((pMVar14->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pMVar14);
    }
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar19 = (pVVar18->forwardVector).x;
  uVar20 = (pVVar18->forwardVector).y;
  fVar10 = (pVVar18->forwardVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  v1.y = (float)uVar20;
  v1.x = (float)uVar19;
  v1.z = fVar10;
  v2.y = fVar7;
  v2.x = fVar5;
  v2.z = fVar4;
  MathFunctions::MathFunctions_SignedAngle_1
            (v1,v2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  euler.y = p1.z;
  euler.x = fVar11 * _UNK_?;
  euler.z = 0.0;
  pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)&p0.y,euler,(MethodInfo *)0x0);
  p0.z = pQVar21->x;
  fStack22 = 0.0;
  euler_00.y = fVar7 * _UNK_? * _UNK_?;
  euler_00.x = (float)in_stack_23;
  euler_00.z = 0.0;
  pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)&stack0x00000030,euler_00,(MethodInfo *)0x0);
  fVar5 = pQVar21->y;
  fVar4 = pQVar21->z;
  fVar10 = pQVar21->w;
  fStack24 =
       (fVar10 * (float)method + (float)in_stack_23 * pQVar21->x + in_stack_25 * fVar5)
       - fVar4 * fStack22;
  fStack26 =
       (fVar10 * fStack22 + (float)in_stack_23 * fVar5 + fVar4 * (float)method) -
       in_stack_25 * pQVar21->x;
  fStack27 =
       (fVar10 * in_stack_25 + (float)in_stack_23 * fVar4 + fStack22 * pQVar21->x
       ) - fVar5 * (float)method;
  puStack28 =
       (uint *)((((float)in_stack_23 * fVar10 - (float)method * pQVar21->x) -
                fStack22 * fVar5) - in_stack_25 * fVar4);
  pVStack29 = in_stack_23;
  puStack30 = puStack28;
  iVar31 = func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  QVar32.y = fStack26;
  QVar32.x = fStack24;
  QVar32.z = fStack27;
  QVar32.w = (float)puStack30;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0x00000034,QVar32,
                       TypeInfo__UnityEngine__Vector3->static_fields->downVector,(MethodInfo *)0x0);
  fStack33 = pVVar2->x;
  fStack34 = pVVar2->y;
  pVStack29 = (Vector3__Array *)pVVar2->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  rotation_01.y = fStack35;
  rotation_01.x = (float)in_stack_36;
  rotation_01.z = fStack37;
  rotation_01.w = in_stack_38;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0x00000058,rotation_01,
                       TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  uVar39 = pVVar2->x;
  uVar40 = pVVar2->y;
  in_stack_38 = (pVVar2->z + in_stack_41) * fVar1;
  _fStack0000006c =
       CONCAT44(((float)uVar40 + in_stack_42) * fVar1,
                ((float)uVar39 + in_stack_43) * fVar1);
  if (iVar31 == 0) {
code_?:
    func_?();
  }
  else {
    puVar44 = (uint *)(iVar31 + 0xc);
    puStack28 = puVar44;
    if (*(int *)(iVar31 + 0xc) != 0) {
      *(undefined8 *)(iVar31 + 0x10) = _fStack0000006c;
      *(float *)(iVar31 + 0x18) = in_stack_38;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar2 = &TypeInfo__UnityEngine__Vector3->static_fields->downVector;
      uVar45 = pVVar2->x;
      uVar46 = pVVar2->y;
      mesh = in_stack_47;
      fVar48 = (float)in_stack_49;
      p0.x = in_stack_50;
      QVar32.x = in_stack_51;
      QVar32 = (Quaternion)CONCAT124(QVar32._0_12_,QVar32.x);
      p0.y = (float)uVar45;
      p0.z = (float)uVar46;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0x0000007c,QVar32,*pVVar2,(MethodInfo *)0x0);
      in_stack_52._0_4_ = pVVar2->x;
      in_stack_52._4_4_ = pVVar2->y;
      in_stack_53 = pVVar2->z;
      if (cRam_? == '\0') {
        fStack33 = 3.2947687e-29;
        fStack34 = 2.8080386e-28;
        func_?();
        cRam_? = '\x01';
      }
      rotation_02.y = fStack35;
      rotation_02.x = (float)in_stack_36;
      rotation_02.z = fStack37;
      rotation_02.w = in_stack_38;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0x00000058,rotation_02,
                           TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                           (MethodInfo *)0x0);
      uVar54 = pVVar2->x;
      uVar55 = pVVar2->y;
      in_stack_38 = (pVVar2->z + in_stack_41) * fVar1;
      _fStack0000006c =
           CONCAT44(((float)uVar55 + in_stack_42) * fVar1,
                    ((float)uVar54 + in_stack_43) * fVar1);
      if (1 < *puVar44) {
        *(undefined8 *)(iVar31 + 0x1c) = _fStack0000006c;
        *(float *)(iVar31 + 0x24) = in_stack_38;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation.y = fStack26;
        rotation.x = fStack24;
        rotation.z = fStack27;
        rotation.w = (float)puStack30;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0x00000034,rotation,
                             TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                             (MethodInfo *)0x0);
        fStack33 = pVVar2->x;
        fStack34 = pVVar2->y;
        pVStack29 = (Vector3__Array *)pVVar2->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation_03.y = fStack35;
        rotation_03.x = (float)in_stack_36;
        rotation_03.z = fStack37;
        rotation_03.w = in_stack_38;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0x00000058,rotation_03,
                             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                             (MethodInfo *)0x0);
        uVar56 = pVVar2->x;
        uVar57 = pVVar2->y;
        in_stack_38 = (pVVar2->z + in_stack_41) * fVar1;
        _fStack0000006c =
             CONCAT44(((float)uVar57 + in_stack_42) * fVar1,
                      ((float)uVar56 + in_stack_43) * fVar1);
        if (2 < *puVar44) {
          *(undefined8 *)(iVar31 + 0x28) = _fStack0000006c;
          *(float *)(iVar31 + 0x30) = in_stack_38;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          rotation_00.y = fStack26;
          rotation_00.x = fStack24;
          rotation_00.z = fStack27;
          rotation_00.w = (float)puStack30;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0x00000034,rotation_00,
                               TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                               (MethodInfo *)0x0);
          fStack33 = pVVar2->x;
          fStack34 = pVVar2->y;
          pVStack29 = (Vector3__Array *)pVVar2->z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          rotation_04.y = fStack35;
          rotation_04.x = (float)in_stack_36;
          rotation_04.z = fStack37;
          rotation_04.w = in_stack_38;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0x00000058,rotation_04,
                               TypeInfo__UnityEngine__Vector3->static_fields->leftVector,
                               (MethodInfo *)0x0);
          uVar58 = pVVar2->x;
          uVar59 = pVVar2->y;
          in_stack_38 = (pVVar2->z + in_stack_41) * fVar1;
          _fStack0000006c =
               CONCAT44(((float)uVar59 + in_stack_42) * fVar1,
                        ((float)uVar58 + in_stack_43) * fVar1);
          if (3 < *puVar44) {
            puVar60 = (undefined8 *)(iVar31 + 0x34);
            *puVar60 = _fStack0000006c;
            *(float *)(iVar31 + 0x3c) = in_stack_38;
            p0.z = (float)&UNK_?;
            corners = (Vector3__Array *)func_?();
            uVar61 = 0;
            pVVar2 = corners->vector;
            do {
              in_stack_23 = corners;
              if (*puStack28 <= uVar61) goto code_?;
              uVar62 = *(undefined8 *)((iVar31 - (int)corners) + (int)pVVar2);
              in_stack_38 = *(float *)((iVar31 - (int)corners) + 8 + (int)pVVar2);
              fStack35 = (float)uVar62;
              in_stack_43 = fStack35 + fStack24;
              fStack37 = (float)((ulonglong)uVar62 >> 0x20);
              in_stack_42 = fStack37 + fStack26;
              in_stack_41 = in_stack_38 + fStack27;
              _fStack0000006c = uVar62;
              if (corners == (Vector3__Array *)0x0) goto code_?;
              if (corners->max_length <= uVar61) goto code_?;
              uVar61 = uVar61 + 1;
              pVVar2->x = in_stack_43;
              pVVar2->y = in_stack_42;
              pVVar2->z = in_stack_41;
              pVVar2 = pVVar2 + 1;
            } while ((int)uVar61 < 4);
            uVar61 = 3;
            in_stack_25 = 0.0;
            pVVar2 = corners->vector + 4;
            while (uVar61 < *puStack28) {
              uVar62 = *puVar60;
              in_stack_38 = *(float *)(puVar60 + 1);
              fStack35 = (float)uVar62;
              in_stack_43 = fStack35 + (float)puStack30;
              fStack37 = (float)((ulonglong)uVar62 >> 0x20);
              in_stack_42 = fStack37 + in_stack_63;
              in_stack_41 = in_stack_38 + in_stack_64;
              _fStack0000006c = uVar62;
              if (corners->max_length <= (int)in_stack_25 + 4U) break;
              uVar61 = uVar61 - 1;
              puVar60 = (undefined8 *)((int)puVar60 + -0xc);
              in_stack_25 = (float)((int)in_stack_25 + 1);
              pVVar2->x = in_stack_43;
              pVVar2->y = in_stack_42;
              pVVar2->z = in_stack_41;
              pVVar2 = pVVar2 + 1;
              if (0x7fffffff < uVar61) {
                if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                p0.y = (float)in_stack_47;
                p0.x = (float)&UNK_?;
                p0.z = (float)corners;
                SharedCubeFunctions_AddCubeMesh(in_stack_47,corners,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar65 = (code *)swi(3);
  (*pcVar65)();
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
          iVar5 = iVar3 + -2;
          func_?(this,iVar5,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3 + 1,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(this,iVar3 + -1,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
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
  uVar1 = 0;
  pVStack_2 = corners->vector;
  pVVar3 = pVStack_2;
  do {
    if (corners == (Vector3__Array *)0x0) {
      func_?();
      goto code_?;
    }
    if (corners->max_length <= uVar1) goto code_?;
    uVar1 = uVar1 + 1;
    VVar4 = *pVVar3;
    uVar5 = uVar1 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if (corners->max_length <= uVar5) goto code_?;
    uVar6 = corners->vector[uVar5].x;
    uVar7 = corners->vector[uVar5].y;
    VVar8.y = (float)uVar7;
    VVar8.x = (float)uVar6;
    fVar9 = corners->vector[uVar5].z;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    VVar8.z = fVar9;
    SharedCubeFunctions_AddCubeLine(mesh,VVar4,VVar8,diagonalWidth,(MethodInfo *)0x0);
    pVVar3 = pVVar3 + 1;
  } while ((int)uVar1 < 4);
  uVar1 = 4;
  pVVar3 = corners->vector + 4;
  do {
    if (corners->max_length <= uVar1) goto code_?;
    uVar1 = uVar1 + 1;
    VVar4 = *pVVar3;
    uVar5 = uVar1 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if (corners->max_length <= uVar5 + 4) goto code_?;
    uVar10 = corners->vector[uVar5 + 4].x;
    uVar11 = corners->vector[uVar5 + 4].y;
    p1.y = (float)uVar11;
    p1.x = (float)uVar10;
    fVar9 = corners->vector[uVar5 + 4].z;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    p1.z = fVar9;
    SharedCubeFunctions_AddCubeLine(mesh,VVar4,p1,diagonalWidth,(MethodInfo *)0x0);
    pVVar3 = pVVar3 + 1;
  } while ((int)uVar1 < 8);
  pVVar3 = corners->vector + 7;
  uStack_12 = 0;
  uVar1 = 7;
  while (uStack_12 < corners->max_length) {
    VVar4 = *pVStack_2;
    if (corners->max_length <= uVar1) break;
    VVar8 = *pVVar3;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    SharedCubeFunctions_AddCubeLine(mesh,VVar4,VVar8,diagonalWidth,(MethodInfo *)0x0);
    uVar1 = uVar1 - 1;
    uStack_12 = uStack_12 + 1;
    pVStack_2 = pVStack_2 + 1;
    pVVar3 = pVVar3 + -1;
    if ((int)uVar1 < 4) {
      return;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    func_?(0xaba8);
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
        key.z = 0x1c2b;
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
  uVar1 = cubePos._0_4_;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  *(undefined4 *)cubePos._0_4_ = 0;
  *(undefined2 *)(cubePos._0_4_ + 4) = 0;
  iVar2 = (int)method / 2;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)cubePos._0_4_,CONCAT22(in_stack_3,cubePos.z),
             CONCAT22((undefined2)chunkSize,in_stack_3),chunkSize,(MethodInfo *)0x0);
  cubePos._0_4_ = ((float)(int)*(short *)cubePos._0_4_ + (float)iVar2) / (float)(int)method;
  if (cRam_? == '\0') {
    cubePos._0_4_ = &TypeInfo__System__Math;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    cubePos._0_4_ = TypeInfo__System__Math;
    func_?();
  }
  in_stack_3 = (undefined2)((ulonglong)(double)(float)cubePos._0_4_ >> 0x10);
  func_?();
  uVar4 = func_?();
  *(undefined2 *)uVar1 = uVar4;
  cubePos._0_4_ = ((float)(int)*(short *)(uVar1 + 2) + (float)iVar2) / (float)(int)method;
  if (cRam_? == '\0') {
    cubePos._0_4_ = &TypeInfo__System__Math;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    cubePos._0_4_ = TypeInfo__System__Math;
    func_?();
  }
  in_stack_3 = (undefined2)((ulonglong)(double)(float)cubePos._0_4_ >> 0x10);
  func_?();
  uVar4 = func_?();
  *(undefined2 *)(uVar1 + 2) = uVar4;
  sVar5 = *(short *)(uVar1 + 4);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  in_stack_3 =
       (undefined2)
       ((ulonglong)(double)(((float)(int)sVar5 + (float)iVar2) / (float)(int)method) >> 0x10);
  func_?();
  uVar4 = func_?();
  *(undefined2 *)(uVar1 + 4) = uVar4;
  IVar6.z = extraout_DX;
  cubePos.x = (int16_t)uVar1;
  cubePos.y = SUB42(uVar1,2);
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
      if (transform_00 == (Transform *)0x0) {
        transform_00 = (Transform *)0x0;
      }
      else {
        bVar29 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
        if (((transform_00->klass->_1).naturalAligment < bVar29) ||
           ((transform_00->klass->_1).typeHierarchy[bVar29 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
          func_?(transform_00,TypeInfo__UnityEngine__Transform);
          break;
        }
      }
      pNVar30 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                          ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffff60,transform_00,
                           (MethodInfo *)0x0);
      if (__return_storage_ptr__->hasValue == 0) {
        uVar31 = *(undefined3 *)&pNVar30->field_0x1;
        fVar32 = (pNVar30->value).m_Center.x;
        fVar33 = (pNVar30->value).m_Center.y;
        fVar34 = (pNVar30->value).m_Center.z;
        fVar35 = (pNVar30->value).m_Extents.z;
        fVar36 = (pNVar30->value).m_Extents.x;
        fVar37 = (pNVar30->value).m_Extents.y;
        __return_storage_ptr__->hasValue = pNVar30->hasValue;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar31;
        (__return_storage_ptr__->value).m_Center.x = fVar32;
        (__return_storage_ptr__->value).m_Center.y = fVar33;
        (__return_storage_ptr__->value).m_Center.z = fVar34;
        (__return_storage_ptr__->value).m_Extents.x = fVar36;
        (__return_storage_ptr__->value).m_Extents.y = fVar37;
        (__return_storage_ptr__->value).m_Extents.z = fVar35;
      }
      else {
        cStack_38 = (char)*(undefined4 *)pNVar30;
        if (cStack_38 != '\0') {
          BStack_6.m_Center.x = 0.0;
          BStack_6.m_Center.y = 0.0;
          BStack_6.m_Center.z = 0.0;
          BStack_6.m_Extents.x = 0.0;
          BStack_6.m_Extents.y = 0.0;
          BStack_6.m_Extents.z = 0.0;
          pfVar39 = (float *)func_?(&stack0xffffff44,__return_storage_ptr__,
                                             MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__
                                            );
          BStack_10.m_Center.x = *pfVar39;
          BStack_10.m_Center.y = pfVar39[1];
          BStack_10.m_Center.z = pfVar39[2];
          BStack_10.m_Extents.x = pfVar39[3];
          BStack_10.m_Extents.y = pfVar39[4];
          BStack_10.m_Extents.z = pfVar39[5];
          pVVar40 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&puStack_41,&BStack_10,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar40,(MethodInfo *)0x0);
          pfVar39 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar39;
          BStack_10.m_Center.y = pfVar39[1];
          BStack_10.m_Center.z = pfVar39[2];
          BStack_10.m_Extents.x = pfVar39[3];
          BStack_10.m_Extents.y = pfVar39[4];
          BStack_10.m_Extents.z = pfVar39[5];
          pVVar40 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xffffff2c,&BStack_10,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar40,(MethodInfo *)0x0);
          pfVar39 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar39;
          BStack_10.m_Center.y = pfVar39[1];
          BStack_10.m_Center.z = pfVar39[2];
          BStack_10.m_Extents.x = pfVar39[3];
          BStack_10.m_Extents.y = pfVar39[4];
          BStack_10.m_Extents.z = pfVar39[5];
          pVVar40 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff20,&BStack_10,(MethodInfo *)0x0);
          uStack_27._0_4_ = pVVar40->x;
          uStack_27._4_4_ = pVVar40->y;
          fVar35 = pVVar40->z;
          pfVar39 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar39;
          BStack_10.m_Center.y = pfVar39[1];
          BStack_10.m_Center.z = pfVar39[2];
          BStack_10.m_Extents.x = pfVar39[3];
          BStack_10.m_Extents.y = pfVar39[4];
          BStack_10.m_Extents.z = pfVar39[5];
          pVVar40 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff14,&BStack_10,(MethodInfo *)0x0);
          min0.z = fVar35;
          min0.x = (float)(undefined4)uStack_27;
          min0.y = (float)uStack_27._4_4_;
          pVVar40 = MathFunctions::MathFunctions_GetMinVector
                              ((Vector3 *)&puStack_42,min0,*pVVar40,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar40,(MethodInfo *)0x0);
          pfVar39 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar39;
          BStack_10.m_Center.y = pfVar39[1];
          BStack_10.m_Center.z = pfVar39[2];
          BStack_10.m_Extents.x = pfVar39[3];
          BStack_10.m_Extents.y = pfVar39[4];
          BStack_10.m_Extents.z = pfVar39[5];
          pVVar40 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffefc,&BStack_10,(MethodInfo *)0x0);
          uStack_27._0_4_ = pVVar40->x;
          uStack_27._4_4_ = pVVar40->y;
          fVar35 = pVVar40->z;
          pfVar39 = (float *)func_?();
          BStack_10.m_Center.x = *pfVar39;
          BStack_10.m_Center.y = pfVar39[1];
          BStack_10.m_Center.z = pfVar39[2];
          BStack_10.m_Extents.x = pfVar39[3];
          BStack_10.m_Extents.y = pfVar39[4];
          BStack_10.m_Extents.z = pfVar39[5];
          pVVar40 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffef0,&BStack_10,(MethodInfo *)0x0);
          max0.z = fVar35;
          max0.x = (float)(undefined4)uStack_27;
          max0.y = (float)uStack_27._4_4_;
          pVVar40 = MathFunctions::MathFunctions_GetMaxVector
                              ((Vector3 *)&stack0xfffffee4,max0,*pVVar40,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar40,(MethodInfo *)0x0);
          uVar43._0_1_ = 0;
          uVar43._1_3_ = 0;
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
          __return_storage_ptr__->hasValue = (bool)uVar43;
          *(int3 *)&__return_storage_ptr__->field_0x1 = SUB43(uVar43,1);
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
  pcVar44 = (code *)swi(3);
  pNVar30 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar44)();
  return pNVar30;
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
  transforms = (List_1_UnityEngine_Transform_ *)
               func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  pLStack_6 = transforms;
  if (wos != (List_1_MVWorldObjectClient_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)wos,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_9._index = pLVar7->_index;
    LStack_9._version = pLVar7->_version;
    LStack_9._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_9,
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
      if (((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0) ||
         (transforms == (List_1_UnityEngine_Transform_ *)0x0)) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)transforms,*(Object **)((int)LStack_9._current + 0x90),
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
    uStack_1 = 1;
    RVar9 = pLVar7->_current;
    pOStack_10 = (Object *)&stack0xffffff60;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff60,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                        );
      if (bVar11 == 0) break;
      RVar12 = RVar9;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pNVar13 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                         ((Nullable_1_UnityEngine_Bounds_ *)&puStack_14,(Transform *)RVar9,
                          (MethodInfo *)0x0);
      RVar9 = RVar12;
      if (__return_storage_ptr__->hasValue == 0) {
        uVar15 = *(undefined3 *)&pNVar13->field_0x1;
        fVar16 = (pNVar13->value).m_Center.x;
        fVar17 = (pNVar13->value).m_Center.y;
        fVar18 = (pNVar13->value).m_Center.z;
        fVar19 = (pNVar13->value).m_Extents.x;
        fVar20 = (pNVar13->value).m_Extents.y;
        fVar21 = (pNVar13->value).m_Extents.z;
        __return_storage_ptr__->hasValue = pNVar13->hasValue;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar15;
        (__return_storage_ptr__->value).m_Center.x = fVar16;
        (__return_storage_ptr__->value).m_Center.y = fVar17;
        (__return_storage_ptr__->value).m_Center.z = fVar18;
        (__return_storage_ptr__->value).m_Extents.x = fVar19;
        (__return_storage_ptr__->value).m_Extents.y = fVar20;
        (__return_storage_ptr__->value).m_Extents.z = fVar21;
      }
      else {
        cStack_22 = (char)*(undefined4 *)pNVar13;
        if (cStack_22 != '\0') {
          BStack_6.m_Center.x = 0.0;
          BStack_6.m_Center.y = 0.0;
          BStack_6.m_Center.z = 0.0;
          BStack_6.m_Extents.x = 0.0;
          BStack_6.m_Extents.y = 0.0;
          BStack_6.m_Extents.z = 0.0;
          pfVar23 = (float *)func_?();
          BStack_24.m_Center.x = *pfVar23;
          BStack_24.m_Center.y = pfVar23[1];
          BStack_24.m_Center.z = pfVar23[2];
          BStack_24.m_Extents.x = pfVar23[3];
          BStack_24.m_Extents.y = pfVar23[4];
          BStack_24.m_Extents.z = pfVar23[5];
          pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff2c,&BStack_24,(MethodInfo *)0x0);
          in_stack_26 = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar25,(MethodInfo *)0x0);
          pfVar23 = (float *)func_?();
          BStack_24.m_Center.x = *pfVar23;
          BStack_24.m_Center.y = pfVar23[1];
          BStack_24.m_Center.z = pfVar23[2];
          BStack_24.m_Extents.x = pfVar23[3];
          BStack_24.m_Extents.y = pfVar23[4];
          BStack_24.m_Extents.z = pfVar23[5];
          pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xffffff20,&BStack_24,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar25,(MethodInfo *)0x0);
          pfVar23 = (float *)func_?();
          BStack_24.m_Center.x = *pfVar23;
          BStack_24.m_Center.y = pfVar23[1];
          BStack_24.m_Center.z = pfVar23[2];
          BStack_24.m_Extents.x = pfVar23[3];
          BStack_24.m_Extents.y = pfVar23[4];
          BStack_24.m_Extents.z = pfVar23[5];
          pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff14,&BStack_24,(MethodInfo *)0x0);
          uStack_27._0_4_ = pVVar25->x;
          uStack_27._4_4_ = pVVar25->y;
          fVar21 = pVVar25->z;
          pfVar23 = (float *)func_?();
          BStack_24.m_Center.x = *pfVar23;
          BStack_24.m_Center.y = pfVar23[1];
          BStack_24.m_Center.z = pfVar23[2];
          BStack_24.m_Extents.x = pfVar23[3];
          BStack_24.m_Extents.y = pfVar23[4];
          BStack_24.m_Extents.z = pfVar23[5];
          pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&puStack_28,&BStack_24,(MethodInfo *)0x0);
          min0.z = fVar21;
          min0.x = (float)(undefined4)uStack_27;
          min0.y = (float)uStack_27._4_4_;
          pVVar25 = MathFunctions::MathFunctions_GetMinVector
                              ((Vector3 *)&stack0xfffffefc,min0,*pVVar25,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar25,(MethodInfo *)0x0);
          RVar9 = (RegexCharClass_SingleRange)
                   MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__;
          pfVar23 = (float *)func_?();
          BStack_24.m_Center.x = *pfVar23;
          BStack_24.m_Center.y = pfVar23[1];
          BStack_24.m_Center.z = pfVar23[2];
          BStack_24.m_Extents.x = pfVar23[3];
          BStack_24.m_Extents.y = pfVar23[4];
          BStack_24.m_Extents.z = pfVar23[5];
          pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffef0,&BStack_24,(MethodInfo *)0x0);
          uStack_27._0_4_ = pVVar25->x;
          uStack_27._4_4_ = pVVar25->y;
          fVar21 = pVVar25->z;
          pfVar23 = (float *)func_?();
          BStack_24.m_Center.x = *pfVar23;
          BStack_24.m_Center.y = pfVar23[1];
          BStack_24.m_Center.z = pfVar23[2];
          BStack_24.m_Extents.x = pfVar23[3];
          BStack_24.m_Extents.y = pfVar23[4];
          BStack_24.m_Extents.z = pfVar23[5];
          pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffee4,&BStack_24,(MethodInfo *)0x0);
          max0.z = fVar21;
          max0.x = (float)(undefined4)uStack_27;
          max0.y = (float)uStack_27._4_4_;
          pVVar25 = MathFunctions::MathFunctions_GetMaxVector
                              ((Vector3 *)&stack0xffffff3c,max0,*pVVar25,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar25,(MethodInfo *)0x0);
          puStack_14 = (undefined *)0x0;
          fVar21 = 0.0;
          fVar16 = 0.0;
          fVar17 = 0.0;
          value.m_Center.y = BStack_6.m_Center.y;
          value.m_Center.x = BStack_6.m_Center.x;
          value.m_Center.z = BStack_6.m_Center.z;
          value.m_Extents.x = BStack_6.m_Extents.x;
          value.m_Extents.y = BStack_6.m_Extents.y;
          value.m_Extents.z = BStack_6.m_Extents.z;
          mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
          Nullable_1_UnityEngine_Bounds___ctor
                    ((Nullable_1_UnityEngine_Bounds_ *)&puStack_14,value,
                     MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_
                    );
          *(undefined **)__return_storage_ptr__ = puStack_14;
          (__return_storage_ptr__->value).m_Center.x = fVar21;
          (__return_storage_ptr__->value).m_Center.y = fVar16;
          (__return_storage_ptr__->value).m_Center.z = fVar17;
          (__return_storage_ptr__->value).m_Extents.x = 0.0;
          (__return_storage_ptr__->value).m_Extents.y = 0.0;
          (__return_storage_ptr__->value).m_Extents.z = 0.0;
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff60,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__
               ,in_stack_26);
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  uVar29 = func_?();
  func_?(uVar29);
  pcVar30 = (code *)swi(3);
  pNVar13 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar30)();
  return pNVar13;
}


/* Vector3 GetClosestGridPoint(Vector3, Quaternion, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,Vector3 worldPosition,Quaternion rotation,
                    float gridSize,Vector3 scale,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,rotation,scale,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  scale.z = pVVar1->z;
  VStack_2.x = (float)uVar3 * _UNK_?;
  VStack_2.y = (float)uVar4 * _UNK_?;
  VStack_2.z = scale.z * _UNK_?;
  if (cRam_? == '\0') {
    scale.x = (float)uVar3;
    scale.y = (float)uVar4;
    func_?();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar5->oneVector).x;
  uVar7 = (pVVar5->oneVector).y;
  scale.z = (pVVar5->oneVector).z * gridSize;
  pos.y = VStack_2.y;
  pos.x = VStack_2.x;
  pos.z = VStack_2.z;
  s.y = (float)uVar7 * gridSize;
  s.x = (float)uVar6 * gridSize;
  s.z = scale.z;
  scale.x = (float)uVar6;
  scale.y = (float)uVar7;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
            ((Matrix4x4 *)&stack0xffffff30,pos,rotation,s,(MethodInfo *)0x0);
  pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffff30,(Matrix4x4 *)&stack0xffffffb0,(MethodInfo *)0x0)
  ;
  fStack_9 = pMVar8->m00;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&scale,(Matrix4x4 *)&fStack_9,worldPosition,(MethodInfo *)pMVar8->m31);
  pVVar1 = MathFunctions::MathFunctions_RoundVector(&scale,*pVVar1,0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&scale,(Matrix4x4 *)&stack0xffffffb0,*pVVar1,(MethodInfo *)0x0);
  fVar10 = pVVar1->y;
  fVar11 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
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
  fVar4 = bounds.m_Extents.z + bounds.m_Center.z;
  fVar5 = bounds.m_Extents.x + bounds.m_Center.x;
  fVar6 = bounds.m_Extents.y + bounds.m_Center.y;
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
    pVVar7->vector[0].y = fVar6;
    pVVar7->vector[0].z = fVar2;
    if (1 < pVVar7->max_length) {
      pVVar7->vector[1].x = fVar5;
      pVVar7->vector[1].y = fVar6;
      pVVar7->vector[1].z = fVar2;
      if (2 < pVVar7->max_length) {
        pVVar7->vector[2].x = fVar5;
        pVVar7->vector[2].y = fVar6;
        pVVar7->vector[2].z = fVar4;
        if (3 < pVVar7->max_length) {
          pVVar7->vector[3].x = fVar1;
          pVVar7->vector[3].y = fVar6;
          pVVar7->vector[3].z = fVar4;
          if (4 < pVVar7->max_length) {
            pVVar7->vector[4].x = fVar1;
            pVVar7->vector[4].y = fVar3;
            pVVar7->vector[4].z = fVar4;
            if (5 < pVVar7->max_length) {
              pVVar7->vector[5].x = fVar5;
              pVVar7->vector[5].y = fVar3;
              pVVar7->vector[5].z = fVar4;
              if (6 < pVVar7->max_length) {
                pVVar7->vector[6].x = fVar5;
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
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                           (pMVar2,(MethodInfo *)0x0);
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this,(MethodInfo *)0x0);
        if (pMVar2 != (Mesh *)0x0) {
          pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                             (pMVar2,(MethodInfo *)0x0);
          if (pIVar4 != (Int32__Array *)0x0) {
            if (pIVar4->max_length <= (uint)((int)pMVar2 * 3)) goto code_?;
            if (pVVar3 != (Vector3__Array *)0x0) {
              uVar5 = pIVar4->vector[(int)pMVar2 * 3];
              if (pVVar3->max_length <= uVar5) goto code_?;
              if (pVVar1 != (Vector3__Array *)0x0) {
                fVar6 = pVVar3->vector[uVar5].y;
                fVar7 = pVVar3->vector[uVar5].z;
                if (pVVar1->max_length == 0) goto code_?;
                pVVar1->vector[0].x = pVVar3->vector[uVar5].x;
                pVVar1->vector[0].y = fVar6;
                pVVar1->vector[0].z = fVar7;
                pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                         MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                if (pMVar2 != (Mesh *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                     (pMVar2,(MethodInfo *)0x0);
                  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                           MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                  if (pMVar2 != (Mesh *)0x0) {
                    pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                                       (pMVar2,(MethodInfo *)0x0);
                    if (pIVar4 != (Int32__Array *)0x0) {
                      if ((undefined *)pIVar4->max_length < &UNK_?) goto code_?;
                      if (pVVar3 != (Vector3__Array *)0x0) {
                        uVar5 = pIVar4[0x72dde3].vector[0x12];
                        if (pVVar3->max_length <= uVar5) goto code_?;
                        fVar6 = pVVar3->vector[uVar5].y;
                        fVar7 = pVVar3->vector[uVar5].z;
                        if (pVVar1->max_length < 2) goto code_?;
                        pVVar1->vector[1].x = pVVar3->vector[uVar5].x;
                        pVVar1->vector[1].y = fVar6;
                        pVVar1->vector[1].z = fVar7;
                        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                 MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                        if (pMVar2 != (Mesh *)0x0) {
                          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                             (pMVar2,(MethodInfo *)0x0);
                          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                   MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                          if (pMVar2 != (Mesh *)0x0) {
                            pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                     Mesh_get_triangles(pMVar2,(MethodInfo *)0x0);
                            if (pIVar4 != (Int32__Array *)0x0) {
                              if ((undefined *)pIVar4->max_length < &UNK_?)
                              goto code_?;
                              if (pVVar3 != (Vector3__Array *)0x0) {
                                uVar5 = pIVar4[0x72dde3].vector[0x13];
                                if (uVar5 < pVVar3->max_length) {
                                  fVar6 = pVVar3->vector[uVar5].y;
                                  fVar7 = pVVar3->vector[uVar5].z;
                                  if (2 < pVVar1->max_length) {
                                    pVVar1->vector[2].x = pVVar3->vector[uVar5].x;
                                    pVVar1->vector[2].y = fVar6;
                                    pVVar1->vector[2].z = fVar7;
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
  pcVar8 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar8)();
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
    func_?(0x5c98);
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    edge = (info->fields).pickedEdge;
    if (edge == Edge__Enum_None) {
      return;
    }
    face = (info->fields).pickedFace;
    cube = (info->fields).cube;
    puVar1 = *(undefined8 **)&(info->fields).iLocalPos;
    iVar2 = (info->fields).iLocalPos.z;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    iVector.z = iVar2;
    iVector._0_4_ = puVar1;
    VStack_3.y = (float)Cube::Cube_GetEdgeVerticesWorld
                                   (gameObject,cube,face,edge,iVector,(MethodInfo *)0x0);
    pVVar4 = Cube::Cube_GetEdge((info->fields).cube,(info->fields).pickedFace,
                                (info->fields).pickedEdge,(MethodInfo *)0x0);
    if (pVVar4 != (Vector3__Array *)0x0) {
      if ((pVVar4->max_length != 0) && (1 < pVVar4->max_length)) {
        uVar5 = pVVar4->vector[1].x;
        uVar6 = pVVar4->vector[1].y;
        uVar7 = pVVar4->vector[0].x;
        uVar8 = pVVar4->vector[0].y;
        in_stack_9 = pVVar4->vector[0].z - pVVar4->vector[1].z;
        puVar10 = &stack0x00000018;
        VStack_3.x = 0.0;
        in_stack_11 = CONCAT44((float)uVar8 - (float)uVar6,(float)uVar7 - (float)uVar5);
        func_?();
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        iVar12 = 0;
        fVar13 = 0.0;
        do {
          if ((gameObject == (GameObject *)0x0) ||
             (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (gameObject,(MethodInfo *)0x0), this == (Transform *)0x0))
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                    (&VStack_3,this,(MethodInfo *)0x0);
          if ((iVar12 != 0) && (iVar12 != 1)) {
            if (iVar12 != 2) {
              uVar14 = func_?(&TypeInfo__System__IndexOutOfRangeException);
              this_00 = (IndexOutOfRangeException *)func_?(uVar14);
              method_00 = (MethodInfo *)0x0;
              message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
              mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                        (this_00,message,method_00);
              uVar14 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
              func_?(this_00,uVar14);
              goto code_?;
            }
            break;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 3);
        uVar15 = 0;
        if (puVar10 == (undefined8 *)0x0) goto code_?;
        while( true ) {
          if ((int)*(uint *)((int)puVar10 + 0xc) <= (int)uVar15) {
            return;
          }
          if (*(uint *)((int)puVar10 + 0xc) <= uVar15) break;
          VStack_3.x = (info->fields).point.z;
          uVar16 = (info->fields).point.x;
          uVar17 = (info->fields).point.y;
          uVar18 = *(undefined8 *)((int)puVar10 + uVar15 * 0xc + 0x10);
          fStack_19 = *(float *)((int)puVar10 + uVar15 * 0xc + 0x18);
          uStack_20._0_4_ = (float)uVar18;
          fVar21 = (float)uStack_20 - (float)uVar16;
          uStack_20._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
          fVar22 = uStack_20._4_4_ - (float)uVar17;
          fVar23 = fStack_19 - VStack_3.x;
          puVar10 = puVar1;
          uStack_20 = uVar18;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Math);
            cRam_? = '\x01';
            puVar10 = puVar1;
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Math);
          }
          dVar24 = (double)(fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23);
          if (dVar24 < 0.0) {
            func_?();
          }
          else {
            dVar24 = SQRT(dVar24);
          }
          puVar1 = puVar10;
          if ((float)dVar24 < fVar13) {
            if (uVar15 != 0) {
              if (uVar15 == 1) {
                (info->fields).pickedEdgeIndex1 = 1;
              }
              goto code_?;
            }
            uVar15 = 1;
            (info->fields).pickedEdgeIndex0 = 1;
          }
          else {
code_?:
            uVar15 = uVar15 + 1;
          }
        }
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
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
  char *pcVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 uVar5;
  Vector3__StaticFields *pVVar6;
  bool bVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  Cube *pCVar20;
  bool bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  Transform *pTVar27;
  undefined8 *puVar28;
  Matrix4x4 *pMVar29;
  Vector3 *pVVar30;
  Vector4 *pVVar31;
  Camera *pCVar32;
  undefined1 (*pauVar33) [12];
  float *pfVar34;
  undefined4 *puVar35;
  undefined3 uVar36;
  CubeOutOfBoundState__Enum CVar37;
  CubeOutOfBoundState__Enum extraout_EAX;
  IndexOutOfRangeException *this;
  String *message;
  int extraout_ECX;
  int *piVar38;
  int extraout_ECX_00;
  byte bVar39;
  undefined4 unaff_EBX;
  int iVar40;
  byte in_AF;
  char cVar41;
  float10 fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined6 uVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  Vector4 VStack_51;
  float fStack_52;
  undefined8 uStack_53;
  float fStack_54;
  CubeOutOfBoundState__Enum CStack_55;
  float fStack_56;
  undefined8 uStack_57;
  Cube *pCStack_58;
  undefined1 auStack_59 [12];
  float fStack_60;
  undefined8 uStack_61;
  Vector3 VStack_62;
  GameObject *pGStack_63;
  
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  cVar41 = true;
  if ((info == (CubePickingInfo *)0x0) || (cVar41 = true, cmb == (MVCubeModelBase *)0x0))
  goto code_?;
  pCStack_58 = MVCubeModelBase::MVCubeModelBase_GetCube
                         (cmb,(info->fields).iLocalPos,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar21 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                     ((CubeBase *)pCStack_58,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar21 != 0) {
    return CubeOutOfBoundState__Enum_WithinBounds;
  }
  uStack_61 = CONCAT44(uStack_61._4_4_,(cmb->fields)._.gameObject);
  pCStack_58 = (Cube *)(info->fields).pickedFace;
  CStack_55 = CubeOutOfBoundState__Enum_NoChange;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  switch(pCStack_58) {
  case (Cube *)0x0:
  case (Cube *)0x1:
    cVar41 = true;
    if ((GameObject *)uStack_61 == (GameObject *)0x0) goto code_?;
    pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)uStack_61,(MethodInfo *)0x0);
    cVar41 = true;
    if (pTVar27 == (Transform *)0x0) goto code_?;
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)auStack_59,pTVar27,(MethodInfo *)0x0);
    fVar44 = pVVar30->y;
    break;
  case (Cube *)0x2:
  case (Cube *)0x3:
    cVar41 = true;
    if ((GameObject *)uStack_61 == (GameObject *)0x0) goto code_?;
    pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)uStack_61,(MethodInfo *)0x0);
    cVar41 = true;
    if (pTVar27 == (Transform *)0x0) goto code_?;
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)auStack_59,pTVar27,(MethodInfo *)0x0);
    fVar44 = pVVar30->z;
    break;
  case (Cube *)0x4:
  case (Cube *)0x5:
    cVar41 = true;
    if ((GameObject *)uStack_61 == (GameObject *)0x0) goto code_?;
    pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)uStack_61,(MethodInfo *)0x0);
    cVar41 = true;
    if (pTVar27 == (Transform *)0x0) goto code_?;
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)auStack_59,pTVar27,(MethodInfo *)0x0);
    fVar44 = pVVar30->x;
    break;
  default:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
    fVar44 = 0.0;
  }
  uStack_61._0_4_ = (GameObject *)fVar44;
  puVar28 = (undefined8 *)(*(code *)(cmb->klass->vtable).get_Scale.method)();
  uStack_53 = *puVar28;
  fStack_54 = *(float *)(puVar28 + 1);
  puVar28 = (undefined8 *)(*(code *)(cmb->klass->vtable).get_Scale.method)();
  auStack_59._4_8_ = *puVar28;
  fStack_60 = *(float *)(puVar28 + 1);
  puVar28 = (undefined8 *)(*(code *)(cmb->klass->vtable).get_Scale.method)();
  VStack_62._0_8_ = *puVar28;
  VStack_62.z = *(float *)(puVar28 + 1);
  pTVar27 = (cmb->fields)._.transform;
  uStack_61 = CONCAT44(uStack_61._4_4_,
                       ((float)(GameObject *)uStack_61 * _UNK_?) /
                       (((float)auStack_59._8_4_ + (float)uStack_53 + VStack_62.z) / _UNK_?))
  ;
  cVar41 = pTVar27 == (Transform *)0x0;
  if (!(bool)cVar41) {
    pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                        ((Matrix4x4 *)&stack0xffffff10,pTVar27,(MethodInfo *)0x0);
    uVar16 = pMVar29->m00;
    uVar17 = pMVar29->m10;
    uVar18 = pMVar29->m20;
    uVar19 = pMVar29->m30;
    lhs.m30 = (float)uVar19;
    lhs.m20 = (float)uVar18;
    lhs.m10 = (float)uVar17;
    lhs.m00 = (float)uVar16;
    fStack_52 = pMVar29->m01;
    uStack_53._0_4_ = pMVar29->m11;
    uStack_53._4_4_ = pMVar29->m21;
    fStack_54 = pMVar29->m31;
    VStack_62.x = pMVar29->m12;
    VStack_62.y = pMVar29->m22;
    VStack_62.z = pMVar29->m32;
    uStack_61 = CONCAT44(pMVar29->m02,(GameObject *)uStack_61);
    fVar44 = pMVar29->m03;
    fVar43 = pMVar29->m13;
    fVar45 = pMVar29->m23;
    fVar49 = pMVar29->m33;
    pCStack_58 = (Cube *)(info->fields).pickedFace;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar30 = Cube::Cube_GetFaceAxis((Vector3 *)auStack_59,(Face__Enum)pCStack_58,(MethodInfo *)0x0)
    ;
    dVar4 = *(double *)pVVar30;
    pCStack_58 = (Cube *)pVVar30->z;
    uStack_57._0_4_ = SUB84(dVar4,0);
    auStack_59._0_4_ = (float)uStack_57;
    uStack_57._4_4_ = (float)((ulonglong)dVar4 >> 0x20);
    auStack_59._8_4_ = pCStack_58;
    auStack_59._4_4_ = uStack_57._4_4_;
    fStack_60 = 0.0;
    lhs.m01 = fStack_52;
    lhs.m11 = (float)uStack_53;
    lhs.m21 = uStack_53._4_4_;
    lhs.m31 = fStack_54;
    lhs.m02 = (float)uStack_61._4_4_;
    lhs.m12 = VStack_62.x;
    lhs.m22 = VStack_62.y;
    lhs.m32 = VStack_62.z;
    lhs.m03 = fVar44;
    lhs.m13 = fVar43;
    lhs.m23 = fVar45;
    lhs.m33 = fVar49;
    vector.w = 0.0;
    vector.x = pVVar30->x;
    vector.y = pVVar30->y;
    vector.z = pVVar30->z;
    uStack_57 = dVar4;
    pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                        (&VStack_51,lhs,vector,(MethodInfo *)0x0);
    uStack_53._0_4_ = pVVar31->x;
    uStack_53._4_4_ = pVVar31->y;
    VStack_51.y = pVVar31->z;
    uVar3 = (info->fields).point.x;
    uVar5 = (info->fields).point.y;
    fVar44 = *deltaAccum;
    fVar43 = (float)uVar3 + pVVar31->x * fVar44;
    pCStack_58 = (Cube *)((float)uVar5 + pVVar31->y * fVar44);
    fStack_56 = (info->fields).point.z + VStack_51.y * fVar44;
    fVar44 = pVVar31->x + fVar43;
    fVar45 = pVVar31->y + (float)pCStack_58;
    VStack_51.x = VStack_51.y + fStack_56;
    VStack_62.y = fVar45;
    VStack_62.x = fVar44;
    VStack_51.z = VStack_51.y;
    VStack_51.w = VStack_51.y;
    fStack_54 = VStack_51.y;
    fStack_60 = fStack_56;
    VStack_62.z = VStack_51.x;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar20 = pCStack_58;
    start.y = (float)pCStack_58;
    start.x = fVar43;
    start.z = fStack_60;
    end.z = VStack_62.z;
    end.x = VStack_62.x;
    end.y = VStack_62.y;
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
              (start,end,color,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_62.x = (pVVar6->upVector).x;
    VStack_62.y = (pVVar6->upVector).y;
    VStack_62.z = (pVVar6->upVector).z + fStack_56;
    start_00.y = (float)pCVar20;
    start_00.x = fVar43;
    end_00.y = VStack_62.y + (float)pCStack_58;
    end_00.x = VStack_62.x + fVar43;
    start_00.z = fStack_60;
    end_00.z = VStack_62.z;
    color_00.g = (float)_UNK_?;
    color_00.r = (float)_UNK_?;
    color_00.b = (float)_UNK_?;
    color_00.a = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
              (start_00,end_00,color_00,(MethodInfo *)0x0);
    pCVar32 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    VStack_62.y = fVar45;
    VStack_62.x = fVar44;
    VStack_62.z = VStack_51.x;
    cVar41 = pCVar32 == (Camera *)0x0;
    if (!(bool)cVar41) {
      position.y = fVar45;
      position.x = fVar44;
      position.z = VStack_51.x;
      pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                          ((Vector3 *)&uStack_57,pCVar32,position,(MethodInfo *)0x0);
      VStack_62.x = pVVar30->x;
      VStack_62.y = pVVar30->y;
      VStack_62.z = pVVar30->z;
      pCVar32 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      cVar41 = pCVar32 == (Camera *)0x0;
      if (!(bool)cVar41) {
        position_00.y = (float)pCVar20;
        position_00.x = fVar43;
        position_00.z._0_2_ = SUB42(fStack_60,0);
        position_00.z._2_2_ = (short)((uint)fStack_60 >> 0x10);
        pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            ((Vector3 *)auStack_59,pCVar32,position_00,(MethodInfo *)0x0);
        uStack_57._0_4_ = pVVar30->x;
        uStack_57._4_4_ = pVVar30->y;
        pCStack_58 = (Cube *)pVVar30->z;
        VStack_51.x = VStack_62.x - (float)uStack_57;
        VStack_51.y = VStack_62.y - uStack_57._4_4_;
        fStack_60 = VStack_62.z - (float)pCStack_58;
        VStack_51.z = 0.0;
        VStack_51.w = 0.0;
        auStack_59._8_4_ = VStack_51.y;
        auStack_59._4_4_ = VStack_51.x;
        VStack_62.z = fStack_60;
        fVar42 = (float10)func_?();
        fStack_56 = (float)fVar42;
        if (0.0 < fStack_56) {
          value.y = VStack_51.y;
          value.x = VStack_51.x;
          value.z = VStack_62.z;
          pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&uStack_57,value,(MethodInfo *)0x0);
          VStack_62.x = pVVar30->x;
          VStack_62.y = pVVar30->y;
          VStack_62.z = pVVar30->z;
          fVar42 = (float10)func_?();
          *delta = ((mousePositionDelta.y * VStack_62.y + mousePositionDelta.x * VStack_62.x +
                    mousePositionDelta.z * VStack_62.z) / (float)fVar42) * _UNK_? + *delta;
        }
        fStack_56 = *delta;
        in_AF = 0;
        if ((float)((uint)fStack_56 & _UNK_?) < (float)(GameObject *)uStack_61) {
          *edgeMoved = 0;
          return CStack_55;
        }
        uStack_57 = (double)(float)(GameObject *)uStack_61;
        fVar42 = (float10)func_?();
        uStack_57 = (double)fVar42;
        *delta = fStack_56 - (float)fVar42;
        *deltaAccum = (fStack_56 - (float)fVar42) + *deltaAccum;
        pTVar27 = (cmb->fields)._.transform;
        uStack_61 = CONCAT44(uStack_61._4_4_,*delta);
        if ((info->fields).pickedEdge == 0) {
          cVar41 = pTVar27 == (Transform *)0x0;
          if (!(bool)cVar41) {
            pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_worldToLocalMatrix
                                ((Matrix4x4 *)&stack0xffffff10,pTVar27,(MethodInfo *)0x0);
            VStack_51.x = pMVar29->m00;
            VStack_51.y = pMVar29->m10;
            VStack_51.z = pMVar29->m20;
            VStack_51.w = pMVar29->m30;
            fVar44 = pMVar29->m01;
            fVar43 = pMVar29->m11;
            fVar45 = pMVar29->m21;
            fVar49 = pMVar29->m31;
            fVar50 = pMVar29->m02;
            fVar9 = pMVar29->m12;
            fVar10 = pMVar29->m22;
            fVar11 = pMVar29->m32;
            fVar12 = pMVar29->m03;
            fVar13 = pMVar29->m13;
            fVar14 = pMVar29->m23;
            fVar15 = pMVar29->m33;
            pauVar33 = (undefined1 (*) [12])func_?();
            VStack_62.x = *(float *)((int)pauVar33 + 0);
            VStack_62.y = *(float *)((int)pauVar33 + 4);
            VStack_62.z = *(float *)(*pauVar33 + 8);
            auStack_59._0_4_ = VStack_62.x;
            auStack_59._8_4_ = VStack_62.z;
            auStack_59._4_4_ = VStack_62.y;
            fStack_60 = 0.0;
            lhs_00.m10 = VStack_51.y;
            lhs_00.m00 = VStack_51.x;
            lhs_00.m20 = VStack_51.z;
            lhs_00.m30 = VStack_51.w;
            lhs_00.m01 = fVar44;
            lhs_00.m11 = fVar43;
            lhs_00.m21 = fVar45;
            lhs_00.m31 = fVar49;
            lhs_00.m02 = fVar50;
            lhs_00.m12 = fVar9;
            lhs_00.m22 = fVar10;
            lhs_00.m32 = fVar11;
            lhs_00.m03 = fVar12;
            lhs_00.m13 = fVar13;
            lhs_00.m23 = fVar14;
            lhs_00.m33 = fVar15;
            vector_00.w = 0.0;
            vector_00._0_12_ = *pauVar33;
            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                                (&VStack_51,lhs_00,vector_00,(MethodInfo *)0x0);
            auStack_59._0_4_ = pVVar31->x;
            auStack_59._4_4_ = pVVar31->y;
            auStack_59._8_4_ = pVVar31->z;
            fStack_60 = pVVar31->w;
            pfVar34 = (float *)func_?();
            VStack_62.x = *pfVar34;
            VStack_62.y = pfVar34[1];
            VStack_62.z = pfVar34[2];
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            axis_00.y = VStack_62.y;
            axis_00.x = VStack_62.x;
            axis_00.z = VStack_62.z;
            Cube::Cube_MoveFace(info,(float)(GameObject *)uStack_61,axis_00,&CStack_55,
                                (MethodInfo *)0x0);
            *editCubeChange = EditCubeChange__Enum_FaceMoved;
            goto code_?;
          }
        }
        else if (edgeIndex0 == 0 && edgeIndex1 == 0) {
          cVar41 = true;
          if (pTVar27 != (Transform *)0x0) {
            pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_worldToLocalMatrix
                                ((Matrix4x4 *)&stack0xffffff10,pTVar27,(MethodInfo *)0x0);
            VStack_51.x = pMVar29->m00;
            VStack_51.y = pMVar29->m10;
            VStack_51.z = pMVar29->m20;
            VStack_51.w = pMVar29->m30;
            fVar44 = pMVar29->m01;
            fVar43 = pMVar29->m11;
            fVar45 = pMVar29->m21;
            fVar49 = pMVar29->m31;
            fVar50 = pMVar29->m02;
            fVar9 = pMVar29->m12;
            fVar10 = pMVar29->m22;
            fVar11 = pMVar29->m32;
            fVar12 = pMVar29->m03;
            fVar13 = pMVar29->m13;
            fVar14 = pMVar29->m23;
            fVar15 = pMVar29->m33;
            pauVar33 = (undefined1 (*) [12])func_?();
            VStack_62.x = *(float *)((int)pauVar33 + 0);
            VStack_62.y = *(float *)((int)pauVar33 + 4);
            VStack_62.z = *(float *)(*pauVar33 + 8);
            auStack_59._0_4_ = VStack_62.x;
            auStack_59._8_4_ = VStack_62.z;
            auStack_59._4_4_ = VStack_62.y;
            fStack_60 = 0.0;
            lhs_01.m10 = VStack_51.y;
            lhs_01.m00 = VStack_51.x;
            lhs_01.m20 = VStack_51.z;
            lhs_01.m30 = VStack_51.w;
            lhs_01.m01 = fVar44;
            lhs_01.m11 = fVar43;
            lhs_01.m21 = fVar45;
            lhs_01.m31 = fVar49;
            lhs_01.m02 = fVar50;
            lhs_01.m12 = fVar9;
            lhs_01.m22 = fVar10;
            lhs_01.m32 = fVar11;
            lhs_01.m03 = fVar12;
            lhs_01.m13 = fVar13;
            lhs_01.m23 = fVar14;
            lhs_01.m33 = fVar15;
            vector_01.w = 0.0;
            vector_01._0_12_ = *pauVar33;
            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                                (&VStack_51,lhs_01,vector_01,(MethodInfo *)0x0);
            auStack_59._0_4_ = pVVar31->x;
            auStack_59._4_4_ = pVVar31->y;
            auStack_59._8_4_ = pVVar31->z;
            fStack_60 = pVVar31->w;
            pfVar34 = (float *)func_?();
            VStack_62.x = *pfVar34;
            VStack_62.y = pfVar34[1];
            VStack_62.z = pfVar34[2];
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            axis_01.y = VStack_62.y;
            axis_01.x = VStack_62.x;
            axis_01.z = VStack_62.z;
            Cube::Cube_MoveEdge(info,(float)(GameObject *)uStack_61,axis_01,&CStack_55,
                                (MethodInfo *)0x0);
            *editCubeChange = EditCubeChange__Enum_EdgeMoved;
code_?:
            *delta = 0.0;
            *edgeMoved = 1;
            return CStack_55;
          }
        }
        else {
          cVar41 = true;
          if (pTVar27 != (Transform *)0x0) {
            pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_worldToLocalMatrix
                                ((Matrix4x4 *)&stack0xffffff10,pTVar27,(MethodInfo *)0x0);
            VStack_51.x = pMVar29->m00;
            VStack_51.y = pMVar29->m10;
            VStack_51.z = pMVar29->m20;
            VStack_51.w = pMVar29->m30;
            fVar44 = pMVar29->m01;
            fVar43 = pMVar29->m11;
            fVar45 = pMVar29->m21;
            fVar49 = pMVar29->m31;
            fVar50 = pMVar29->m02;
            fVar9 = pMVar29->m12;
            fVar10 = pMVar29->m22;
            fVar11 = pMVar29->m32;
            fVar12 = pMVar29->m03;
            fVar13 = pMVar29->m13;
            fVar14 = pMVar29->m23;
            fVar15 = pMVar29->m33;
            pauVar33 = (undefined1 (*) [12])func_?();
            uVar46 = *(undefined8 *)*pauVar33;
            fStack_54 = *(float *)(*pauVar33 + 8);
            uStack_53._0_4_ = (float)uVar46;
            auStack_59._0_4_ = (float)uStack_53;
            uStack_53._4_4_ = (float)((ulonglong)uVar46 >> 0x20);
            auStack_59._8_4_ = fStack_54;
            auStack_59._4_4_ = uStack_53._4_4_;
            fStack_60 = 0.0;
            lhs_02.m10 = VStack_51.y;
            lhs_02.m00 = VStack_51.x;
            lhs_02.m20 = VStack_51.z;
            lhs_02.m30 = VStack_51.w;
            lhs_02.m01 = fVar44;
            lhs_02.m11 = fVar43;
            lhs_02.m21 = fVar45;
            lhs_02.m31 = fVar49;
            lhs_02.m02 = fVar50;
            lhs_02.m12 = fVar9;
            lhs_02.m22 = fVar10;
            lhs_02.m32 = fVar11;
            lhs_02.m03 = fVar12;
            lhs_02.m13 = fVar13;
            lhs_02.m23 = fVar14;
            lhs_02.m33 = fVar15;
            vector_02.w = 0.0;
            vector_02._0_12_ = *pauVar33;
            uStack_53 = uVar46;
            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                                (&VStack_51,lhs_02,vector_02,(MethodInfo *)0x0);
            auStack_59._0_4_ = pVVar31->x;
            auStack_59._4_4_ = pVVar31->y;
            auStack_59._8_4_ = pVVar31->z;
            fStack_60 = pVVar31->w;
            puVar35 = (undefined4 *)func_?();
            uStack_53._0_4_ = (float)*puVar35;
            uStack_53._4_4_ = (float)puVar35[1];
            fStack_54 = (float)puVar35[2];
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            axis.y = uStack_53._4_4_;
            axis.x = (float)uStack_53;
            axis.z = fStack_54;
            Cube::Cube_MoveVertex
                      (info,(float)(GameObject *)uStack_61,axis,edgeIndex0,edgeIndex1,&CStack_55,
                       (MethodInfo *)0x0);
            *editCubeChange = EditCubeChange__Enum_VertexMoved;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  bVar24 = 0;
  uVar46 = func_?();
  iVar40 = (int)((ulonglong)uVar46 >> 0x20);
  piVar38 = (int *)(extraout_ECX + -1);
  uVar36 = (undefined3)((ulonglong)uVar46 >> 8);
  bVar39 = (byte)((ulonglong)uVar46 >> 0x20);
  if (piVar38 == (int *)0x0 || cVar41 != '\0') {
    bVar25 = (byte)uVar46;
    in_AF = 9 < (bVar25 & 0xf) | in_AF;
    bVar24 = 0x99 < bVar25 | bVar24;
    bVar22 = bVar25 + in_AF * '\x06' + bVar24 * '`';
    bVar26 = (byte)((ulonglong)uVar46 >> 8);
    bVar25 = bVar22 + bVar26;
    bVar23 = bVar25 + bVar24;
    in_AF = 9 < (bVar23 & 0xf) | in_AF;
    bVar7 = 0x99 < bVar23 || (CARRY1(bVar22,bVar26) || CARRY1(bVar25,bVar24));
    bVar22 = bVar23 + in_AF * '\x06' + bVar7 * '`';
    pbVar1 = (byte *)(iVar40 + CONCAT31(uVar36,bVar22) * 2);
    bVar25 = *pbVar1;
    bVar24 = *pbVar1;
    *pbVar1 = bVar24 + bVar39 + bVar7;
    bVar7 = 0x99 < bVar22 || (CARRY1(bVar25,bVar39) || CARRY1(bVar24 + bVar39,bVar7));
    pcVar2 = (char *)(iVar40 + CONCAT31(uVar36,bVar22 + (9 < (bVar22 & 0xf) | in_AF) * '\x06' +
                                               bVar7 * '`') * 2);
    *pcVar2 = *pcVar2 + bVar39 + bVar7;
    pcVar8 = (code *)swi(3);
    CVar37 = (*pcVar8)();
    return CVar37;
  }
  pbVar1 = (byte *)(iVar40 + -0x45);
  bVar22 = (byte)piVar38 & 0x1f;
  bVar25 = *pbVar1;
  *pbVar1 = *pbVar1 >> bVar22;
  bVar7 = ((uint)piVar38 & 0x1f) == 0;
  *piVar38 = *piVar38 +
             CONCAT22((short)((ulonglong)uVar46 >> 0x10),
                      CONCAT11((char)((ushort)uVar46 % (ushort)bVar39),
                               (char)((ushort)uVar46 / (ushort)bVar39))) +
             (uint)(byte)(bVar7 * bVar24 | !bVar7 * ((bVar25 >> bVar22 - 1 & 1) != 0));
  switch(unaff_EBX) {
  case 0:
  case 1:
    if ((pGStack_63 != (GameObject *)0x0) &&
       (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGStack_63,(MethodInfo *)0x0), pTVar27 != (Transform *)0x0)) {
      pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_62,pTVar27,(MethodInfo *)0x0);
      return (CubeOutOfBoundState__Enum)pVVar30;
    }
    break;
  case 2:
  case 3:
    if ((pGStack_63 != (GameObject *)0x0) &&
       (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGStack_63,(MethodInfo *)0x0), pTVar27 != (Transform *)0x0)) {
      pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_62,pTVar27,(MethodInfo *)0x0);
      return (CubeOutOfBoundState__Enum)pVVar30;
    }
    break;
  case 4:
  case 5:
    if ((pGStack_63 != (GameObject *)0x0) &&
       (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGStack_63,(MethodInfo *)0x0), pTVar27 != (Transform *)0x0)) {
      pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_62,pTVar27,(MethodInfo *)0x0);
      return (CubeOutOfBoundState__Enum)pVVar30;
    }
    break;
  default:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
    return extraout_EAX;
  }
  bVar25 = 0;
  uVar47 = func_?();
  bVar24 = (byte)uVar47;
  in_AF = 9 < (bVar24 & 0xf) | in_AF;
  bVar25 = 0x99 < bVar24 | bVar25;
  bVar22 = bVar24 + in_AF * '\x06' + bVar25 * '`';
  pbVar1 = (byte *)(CONCAT31((int3)((uint6)uVar47 >> 8),bVar22) + 0x4c);
  bVar24 = *pbVar1;
  bVar23 = (byte)((uint6)uVar47 >> 0x20);
  bVar39 = *pbVar1 + bVar23;
  *pbVar1 = bVar39 + bVar25;
  bVar7 = 0x99 < bVar22 || (CARRY1(bVar24,bVar23) || CARRY1(bVar39,bVar25));
  bVar25 = bVar22 + (9 < (bVar22 & 0xf) | in_AF) * '\x06' + bVar7 * '`';
  pbVar1 = &stack0x4c840f22 + extraout_ECX_00 * 2;
  bVar39 = *pbVar1;
  bVar24 = *pbVar1;
  *pbVar1 = bVar24 + bVar25 + bVar7;
  (&stack0x4cb40f22)[extraout_ECX_00 * 2] =
       (&stack0x4cb40f22)[extraout_ECX_00 * 2] + (char)((uint6)uVar47 >> 0x28) +
       (0x99 < bVar25 || (CARRY1(bVar39,bVar25) || CARRY1(bVar24 + bVar25,bVar7)));
  in((short)((uint6)uVar47 >> 0x20));
  iVar40 = 0;
  VStack_62.z = 0.0;
  while ((pGStack_63 != (GameObject *)0x0 &&
         (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_63,(MethodInfo *)0x0), pTVar27 != (Transform *)0x0))) {
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&((Vector3 *)auStack_59)->z,pTVar27,(MethodInfo *)0x0);
    uStack_61._0_4_ = (GameObject *)pVVar30->x;
    uStack_61._4_4_ = pVVar30->y;
    VStack_62.x = pVVar30->z;
    if (iVar40 == 0) {
      fVar44 = (float)(GameObject *)uStack_61;
    }
    else {
      if (iVar40 != 1) {
        if (iVar40 == 2) {
          return CubeOutOfBoundState__Enum_WithinBounds;
        }
        goto code_?;
      }
      fVar44 = (float)uStack_61._4_4_;
    }
    VStack_62.z = fVar44 + VStack_62.z;
    iVar40 = iVar40 + 1;
    VStack_62.y = VStack_62.z;
    if (2 < iVar40) {
      return CubeOutOfBoundState__Enum_WithinBounds;
    }
  }
  func_?();
code_?:
  func_?();
  this = (IndexOutOfRangeException *)func_?();
  uVar36 = 0;
  uVar48 = 0;
  message = (String *)func_?();
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this,message,(MethodInfo *)CONCAT31(uVar36,uVar48));
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  CVar37 = (*pcVar8)();
  return CVar37;
}


/* Single ScaleFactor(GameObject) */

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor
                (GameObject *gameObject,MethodInfo *method)

{
  iVar1 = 0;
  fStack_2 = 0.0;
  while (gameObject != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
    if (this == (Transform *)0x0) break;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_4,this,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fStack_6 = pVVar3->z;
    if (iVar1 == 0) {
      fStack_7 = (float)(undefined4)uStack_5;
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          return (fStack_2 + fStack_6) / _UNK_?;
        }
        goto code_?;
      }
      fStack_7 = (float)uStack_5._4_4_;
    }
    fStack_7 = fStack_7 + fStack_2;
    iVar1 = iVar1 + 1;
    fStack_2 = fStack_7;
    if (2 < iVar1) {
      return fStack_7 / _UNK_?;
    }
  }
  func_?();
code_?:
  uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar8);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,method_00);
  VStack_4.x = (float)func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  func_?(this_00);
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
}


/* Single ScaleFactor(GameObject, Face) */

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor_1
                (GameObject *gameObject,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    VStack_1.z = (float)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  switch(face) {
  case Face__Enum_Top:
  case Face__Enum_Bottom:
    if (gameObject != (GameObject *)0x0) {
      VStack_1.z = (float)&UNK_?;
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
      VStack_1.z = (float)&UNK_?;
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
      VStack_1.z = (float)&UNK_?;
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
    VStack_1.z = (float)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
    return 0.0;
  }
  bVar4 = 0;
  uVar5 = func_?();
  bVar6 = (byte)uVar5;
  in_AF = 9 < (bVar6 & 0xf) | in_AF;
  bVar4 = 0x99 < bVar6 | bVar4;
  bVar7 = bVar6 + in_AF * '\x06' + bVar4 * '`';
  pbVar8 = (byte *)(CONCAT31((int3)((uint6)uVar5 >> 8),bVar7) + 0x4c);
  bVar6 = *pbVar8;
  bVar9 = (byte)((uint6)uVar5 >> 0x20);
  bVar10 = *pbVar8 + bVar9;
  *pbVar8 = bVar10 + bVar4;
  bVar11 = 0x99 < bVar7 || (CARRY1(bVar6,bVar9) || CARRY1(bVar10,bVar4));
  bVar4 = bVar7 + (9 < (bVar7 & 0xf) | in_AF) * '\x06' + bVar11 * '`';
  pbVar8 = &stack0x4c841012 + extraout_ECX * 2;
  bVar6 = *pbVar8;
  bVar10 = *pbVar8;
  *pbVar8 = bVar10 + bVar4 + bVar11;
  (&stack0x4cb41012)[extraout_ECX * 2] =
       (&stack0x4cb41012)[extraout_ECX * 2] + (char)((uint6)uVar5 >> 0x28) +
       (0x99 < bVar4 || (CARRY1(bVar6,bVar4) || CARRY1(bVar10 + bVar4,bVar11)));
  in((short)((uint6)uVar5 >> 0x20));
  iVar12 = 0;
  fStack_13 = 0.0;
  while ((gameObject != (GameObject *)0x0 &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (gameObject,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0))) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        (&VStack_1,pTVar2,(MethodInfo *)0x0);
    uVar14 = pVVar3->x;
    fVar15 = pVVar3->y;
    if (iVar12 == 0) {
      fVar15 = (float)uVar14;
    }
    else {
      if (iVar12 != 1) {
        if (iVar12 == 2) {
          return (fStack_13 + pVVar3->z) / _UNK_?;
        }
        goto code_?;
      }
    }
    fStack_13 = fVar15 + fStack_13;
    iVar12 = iVar12 + 1;
    if (2 < iVar12) {
      return fStack_13 / _UNK_?;
    }
  }
  func_?();
code_?:
  func_?();
  this = (IndexOutOfRangeException *)func_?();
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?();
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this,message,method_00);
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  fVar17 = (float10)(*pcVar16)();
  return (float)fVar17;
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
                      [pIVar10->interfaceOffsets[uVar11].offset].method;
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
      bVar14 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
      if (((t_00->klass->_1).naturalAligment < bVar14) ||
         ((t_00->klass->_1).typeHierarchy[bVar14 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
        func_?(t_00,TypeInfo__UnityEngine__Transform);
        break;
      }
      SharedCubeFunctions_SetLayerRecursively(t_00,select,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Vector3 WorldPosToValidGridPos(GameObject, Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_WorldPosToValidGridPos
                    (Vector3 *__return_storage_ptr__,GameObject *gameObject,Vector3 worldPos,
                    int32_t cubeSegments,MethodInfo *method)

{
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
                       ((Vector3 *)&stack0xffffffd0,pTVar3,worldPos,(MethodInfo *)0x0);
    pVVar4 = MathFunctions::MathFunctions_FloorVector
                       ((Vector3 *)&stack0xffffffe8,*pVVar4,(MethodInfo *)0x0);
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
    fVar7 = fVar7 - (pVVar8->oneVector).z * _UNK_?;
    iVar11 = 0;
    uStack_12 = CONCAT44(fVar6 - (float)uVar10 * _UNK_?,fVar5 - (float)uVar9 * _UNK_?)
    ;
    fVar5 = fVar7;
    do {
      if (((iVar11 != 0) && (iVar11 != 1)) && (iVar11 != 2)) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar13 = (float10)func_?();
      iVar14 = (int)fVar13;
      if (iVar11 == 0) {
        uStack_12 = CONCAT44(fStack_15,(float)iVar14 * fVar2 + fVar6);
      }
      else {
        if (iVar11 != 1) {
          if (iVar11 != 2) goto code_?;
          fVar7 = (float)iVar14 * fVar2 + fVar5;
          break;
        }
        uStack_12 = CONCAT44((float)iVar14 * fVar2 + fStack_15,fVar6);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      __return_storage_ptr__ = (Vector3 *)uStack_12;
      position.z = fVar7;
      position.x = fVar6;
      position.y = fStack_15;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         ((Vector3 *)&stack0xffffffd0,pTVar3,position,(MethodInfo *)0x0);
      fVar5 = pVVar4->y;
      fVar2 = pVVar4->z;
      __return_storage_ptr__->x = pVVar4->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar2;
      return __return_storage_ptr__;
    }
  }
  func_?();
code_?:
  func_?();
  this = (IndexOutOfRangeException *)func_?();
  message = (String *)func_?();
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this,message,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar16)();
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
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    func_?(&TypeInfo__MV__WorldObject__Face);
    func_?(&TypeInfo__MV__WorldObject__Face);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&::_0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    func_?(&::_0D9366A7866315145DF405E103A928871A65FDCA218CFE82B66F5719CDE799D2_Field);
    func_?(&::_12C98A439AD9BDD8E757CC8DE108146D6D2552CA5A534FEEA589561F558525A3_Field);
    func_?(&_3086B2DEF3530EA0C41DA25BE54853897C14DAD1F4F971862B51BE6A23E31DB5_Field);
    func_?(&_3212133D503E3733C58BC9245B27816D0AB019E8F256167D94EE2EF1AA253C17_Field);
    func_?(&_3E684BA6BE12099B15008C988C9A2A2F39C4998ED5AAB1F628B7903354331F2F_Field);
    func_?(&_3EA0E73E350002B637E873B7CB7348DD7E1BCE73102F97D2B1FA8693ECC0DAEE_Field);
    func_?(&_44213D5337CB506057EAFD42FA33A4776A44B0A5B0DA2405701680673CE173A2_Field);
    func_?(&_59E3B3AC5476357BCD66274BB6A67316738712645A4299A570105FFE4826372C_Field);
    func_?(&_5C7EED3CACF93747DA516A9AC649BE9445AC47109AEE57E8B6A6EB6741768A25_Field);
    func_?(&_69D5B9635C30CE068AB88DFE7AEC46AA236E6BFBE8C95FF0E8D63741A1A12912_Field);
    func_?(&_7671F4AC667CD05AE5E6F74DCB7160FE6B34A775A4B2BC985EA5F05EDB5F0E8C_Field);
    func_?(&::_78C1F43AB6F856DFB12C9E73F27EE7883763E8A6A3D27F49A8E89A74DE3DD84A_Field);
    func_?(&_7BCBDCCC340EA4ECBDD35B946E4F1C88E504A39C0708D3155A5C65E1B4183290_Field);
    func_?(&_7DE6C05FE260533E58F5F5D7195356F52AA241A405B3EC59D9A7E618A31EB70B_Field);
    func_?(&_8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700_Field);
    func_?(&_974B7612E2388B86C1BC0353AC9B2F65B6957BF64200ACC73E0A7BD063BA7469_Field);
    func_?(&A53B3522877C6E2C38B170CB40FA7BCAE5DD40492EE274555BA018EEE935E33B_Field);
    func_?(&A69DBB9813CAFBDB74661959B1EB85075542F30F2CE490C308D06C3AACEAAF42_Field);
    func_?(&A8D5E66148A8596B4CA037E02125BDA105EEBB89FDA286BAB2B89D08F69FC8EA_Field);
    func_?(&AB04D5434C9E64B5F7652A8D9A9172F0A1CB0E8D294133D8A2A144C25AEFBC53_Field);
    func_?(&AC748DFBD4E9609670D8D4ACCE70E4F010449ED0E59EE6A9F38BB2425D5DB9B4_Field);
    func_?(&B575398F444AEB797A8E12CEEAD67595A3CCB4B903BE0CB6978BE00431F4FD94_Field);
    func_?(&BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_Field);
    func_?(&BD1586D96349669994A64F043D5272C820092DC8F3A204F4A8BBA71A213370F7_Field);
    func_?(&D338C7CFBD24E8741DD131258566A2A6062F965C156F701C380EE71B840DE304_Field);
    func_?(&EA0939139B805DAC80B699838CDDE55214E0993F0E60ED1EF04BA14ED2DB380F_Field);
    func_?(&EB3EA27B21B258CCA651A8DE5834B657D518ABA9AF99B6BEB2C0CCBB27C0C8F5_Field);
    func_?(&F565169B16BA9172A376C4BBC695B7586ADD01DC1142CDBBDF803D30DC68A148_Field);
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
  pIVar3 = (Int32__Array__Array *)func_?(TypeInfo__System__Int32,6);
  pIVar4 = (Int32__Array *)func_?(TypeInfo__System__Int32,4);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pIVar4,_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_Field
             ,(MethodInfo *)0x0);
  if (pIVar3 == (Int32__Array__Array *)0x0) goto code_?;
  if (pIVar3->max_length == 0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pIVar3->vector[0] = pIVar4;
    func_?();
    pIVar4 = (Int32__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pIVar4,
               _D338C7CFBD24E8741DD131258566A2A6062F965C156F701C380EE71B840DE304_Field,
               (MethodInfo *)0x0);
    if (pIVar3->max_length < 2) goto code_?;
    pIVar3->vector[1] = pIVar4;
    func_?();
    pIVar4 = (Int32__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pIVar4,
               __3E684BA6BE12099B15008C988C9A2A2F39C4998ED5AAB1F628B7903354331F2F_Field,
               (MethodInfo *)0x0);
    if (pIVar3->max_length < 3) goto code_?;
    pIVar3->vector[2] = pIVar4;
    func_?();
    pIVar4 = (Int32__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pIVar4,
               _EA0939139B805DAC80B699838CDDE55214E0993F0E60ED1EF04BA14ED2DB380F_Field,
               (MethodInfo *)0x0);
    if (pIVar3->max_length < 4) goto code_?;
    pIVar3->vector[3] = pIVar4;
    func_?();
    pIVar4 = (Int32__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pIVar4,
               _AC748DFBD4E9609670D8D4ACCE70E4F010449ED0E59EE6A9F38BB2425D5DB9B4_Field,
               (MethodInfo *)0x0);
    if (pIVar3->max_length < 5) goto code_?;
    pIVar3->vector[4] = pIVar4;
    func_?();
    pIVar4 = (Int32__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pIVar4,
               _AB04D5434C9E64B5F7652A8D9A9172F0A1CB0E8D294133D8A2A144C25AEFBC53_Field,
               (MethodInfo *)0x0);
    if (pIVar3->max_length < 6) goto code_?;
    pIVar3->vector[5] = pIVar4;
    func_?();
    TypeInfo__SharedCubeFunctions->static_fields->FaceIndexToVertexIndexes = pIVar3;
    func_?();
    pDVar5 = (Dictionary_2_System_Int32_System_Int32___Array *)func_?();
    pDVar6 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar6,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    if (pDVar6 == (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                   *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,0,0,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,1,1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,2,2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,3,3,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    if (pDVar5 == (Dictionary_2_System_Int32_System_Int32___Array *)0x0) goto code_?;
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    if (pDVar5->max_length == 0) goto code_?;
    pDVar5->vector[0] = (Dictionary_2_System_Int32_System_Int32_ *)pDVar6;
    func_?();
    pDVar6 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar6,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    if (pDVar6 == (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                   *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,4,0,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,5,1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,6,2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,7,3,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    if (pDVar5->max_length < 2) goto code_?;
    pDVar5->vector[1] = (Dictionary_2_System_Int32_System_Int32_ *)pDVar6;
    func_?();
    pDVar6 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar6,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    if (pDVar6 == (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                   *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,7,0,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,6,1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,1,2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,0,3,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    if (pDVar5->max_length < 3) goto code_?;
    pDVar5->vector[2] = (Dictionary_2_System_Int32_System_Int32_ *)pDVar6;
    func_?();
    pDVar6 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar6,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    if (pDVar6 == (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                   *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,5,0,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,4,1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,3,2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,2,3,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    if (pDVar5->max_length < 4) goto code_?;
    pDVar5->vector[3] = (Dictionary_2_System_Int32_System_Int32_ *)pDVar6;
    func_?();
    pDVar6 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar6,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    if (pDVar6 == (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                   *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,4,0,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,7,1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,0,2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,3,3,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    if (pDVar5->max_length < 5) goto code_?;
    pDVar5->vector[4] = (Dictionary_2_System_Int32_System_Int32_ *)pDVar6;
    func_?();
    pDVar6 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar6,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    if (pDVar6 == (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                   *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,6,0,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,5,1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,2,2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)pDVar6,1,3,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    iVar7 = func_?();
    if (iVar7 != 0) {
      if (5 < pDVar5->max_length) {
        pDVar5->vector[5] = (Dictionary_2_System_Int32_System_Int32_ *)pDVar6;
        func_?();
        TypeInfo__SharedCubeFunctions->static_fields->VertexIndexToFaceIndexes = pDVar5;
        func_?();
        pIVar8 = (IntVector__Array__Array *)func_?();
        pIVar9 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
        IStack_10.x = 0;
        IStack_10.y = 0;
        IStack_10.z = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (&IStack_10,-1,1,-1,(MethodInfo *)0x0);
        if (pIVar9 == (IntVector__Array *)0x0) goto code_?;
        if (pIVar9->max_length != 0) {
          pIVar9->vector[0].x = IStack_10.x;
          pIVar9->vector[0].y = IStack_10.y;
          pIVar9->vector[0].z = IStack_10.z;
          IStack_11.x = 0;
          IStack_11.y = 0;
          IStack_11.z = 0;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    (&IStack_11,-1,1,0,(MethodInfo *)0x0);
          if (1 < pIVar9->max_length) {
            pIVar9->vector[1].x = IStack_11.x;
            pIVar9->vector[1].y = IStack_11.y;
            pIVar9->vector[1].z = IStack_11.z;
            IStack_12.x = 0;
            IStack_12.y = 0;
            IStack_12.z = 0;
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      (&IStack_12,0,1,0,(MethodInfo *)0x0);
            if (2 < pIVar9->max_length) {
              pIVar9->vector[2].x = IStack_12.x;
              pIVar9->vector[2].y = IStack_12.y;
              pIVar9->vector[2].z = IStack_12.z;
              IStack_13.x = 0;
              IStack_13.y = 0;
              IStack_13.z = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        (&IStack_13,0,1,-1,(MethodInfo *)0x0);
              if (3 < pIVar9->max_length) {
                pIVar9->vector[3].x = IStack_13.x;
                pIVar9->vector[3].y = IStack_13.y;
                pIVar9->vector[3].z = IStack_13.z;
                if (pIVar8 == (IntVector__Array__Array *)0x0) goto code_?;
                if (pIVar8->max_length != 0) {
                  pIVar8->vector[0] = pIVar9;
                  func_?();
                  pIVar9 = (IntVector__Array *)func_?();
                  IStack_14.x = 0;
                  IStack_14.y = 0;
                  IStack_14.z = 0;
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            (&IStack_14,0,1,-1,(MethodInfo *)0x0);
                  if (pIVar9 == (IntVector__Array *)0x0) goto code_?;
                  if (pIVar9->max_length != 0) {
                    pIVar9->vector[0].x = IStack_14.x;
                    pIVar9->vector[0].y = IStack_14.y;
                    pIVar9->vector[0].z = IStack_14.z;
                    IStack_15.x = 0;
                    IStack_15.y = 0;
                    IStack_15.z = 0;
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                              (&IStack_15,0,1,0,(MethodInfo *)0x0);
                    if (1 < pIVar9->max_length) {
                      pIVar9->vector[1].x = IStack_15.x;
                      pIVar9->vector[1].y = IStack_15.y;
                      pIVar9->vector[1].z = IStack_15.z;
                      IStack_16.x = 0;
                      IStack_16.y = 0;
                      IStack_16.z = 0;
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                (&IStack_16,1,1,0,(MethodInfo *)0x0);
                      if (2 < pIVar9->max_length) {
                        pIVar9->vector[2].x = IStack_16.x;
                        pIVar9->vector[2].y = IStack_16.y;
                        pIVar9->vector[2].z = IStack_16.z;
                        IStack_17.x = 0;
                        IStack_17.y = 0;
                        IStack_17.z = 0;
                        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                  (&IStack_17,1,1,-1,(MethodInfo *)0x0);
                        if (3 < pIVar9->max_length) {
                          pIVar9->vector[3].x = IStack_17.x;
                          pIVar9->vector[3].y = IStack_17.y;
                          pIVar9->vector[3].z = IStack_17.z;
                          if (1 < pIVar8->max_length) {
                            pIVar8->vector[1] = pIVar9;
                            func_?();
                            pIVar9 = (IntVector__Array *)func_?();
                            IStack_18.x = 0;
                            IStack_18.y = 0;
                            IStack_18.z = 0;
                            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                      (&IStack_18,0,1,0,(MethodInfo *)0x0);
                            if (pIVar9 == (IntVector__Array *)0x0) goto code_?;
                            if (pIVar9->max_length != 0) {
                              pIVar9->vector[0].x = IStack_18.x;
                              pIVar9->vector[0].y = IStack_18.y;
                              pIVar9->vector[0].z = IStack_18.z;
                              IStack_19.x = 0;
                              IStack_19.y = 0;
                              IStack_19.z = 0;
                              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                        (&IStack_19,0,1,1,(MethodInfo *)0x0);
                              if (1 < pIVar9->max_length) {
                                pIVar9->vector[1].x = IStack_19.x;
                                pIVar9->vector[1].y = IStack_19.y;
                                pIVar9->vector[1].z = IStack_19.z;
                                IStack_20.x = 0;
                                IStack_20.y = 0;
                                IStack_20.z = 0;
                                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                          (&IStack_20,1,1,1,(MethodInfo *)0x0);
                                if (2 < pIVar9->max_length) {
                                  pIVar9->vector[2].x = IStack_20.x;
                                  pIVar9->vector[2].y = IStack_20.y;
                                  pIVar9->vector[2].z = IStack_20.z;
                                  IStack_21.x = 0;
                                  IStack_21.y = 0;
                                  IStack_21.z = 0;
                                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                            (&IStack_21,1,1,0,(MethodInfo *)0x0);
                                  if (3 < pIVar9->max_length) {
                                    pIVar9->vector[3].x = IStack_21.x;
                                    pIVar9->vector[3].y = IStack_21.y;
                                    pIVar9->vector[3].z = IStack_21.z;
                                    if (2 < pIVar8->max_length) {
                                      pIVar8->vector[2] = pIVar9;
                                      func_?();
                                      pIVar9 = (IntVector__Array *)func_?();
                                      IStack_22.x = 0;
                                      IStack_22.y = 0;
                                      IStack_22.z = 0;
                                      MVWorldObject.dll::MV::WorldObject::IntVector::
                                      IntVector__ctor_1(&IStack_22,-1,1,0,(MethodInfo *)0x0);
                                      if (pIVar9 == (IntVector__Array *)0x0) goto code_?;
                                      if (pIVar9->max_length != 0) {
                                        pIVar9->vector[0].x = IStack_22.x;
                                        pIVar9->vector[0].y = IStack_22.y;
                                        pIVar9->vector[0].z = IStack_22.z;
                                        IStack_23.x = 0;
                                        IStack_23.y = 0;
                                        IStack_23.z = 0;
                                        MVWorldObject.dll::MV::WorldObject::IntVector::
                                        IntVector__ctor_1(&IStack_23,-1,1,1,(MethodInfo *)0x0);
                                        if (1 < pIVar9->max_length) {
                                          pIVar9->vector[1].x = IStack_23.x;
                                          pIVar9->vector[1].y = IStack_23.y;
                                          pIVar9->vector[1].z = IStack_23.z;
                                          IStack_24.x = 0;
                                          IStack_24.y = 0;
                                          IStack_24.z = 0;
                                          MVWorldObject.dll::MV::WorldObject::IntVector::
                                          IntVector__ctor_1(&IStack_24,0,1,1,(MethodInfo *)0x0);
                                          if (2 < pIVar9->max_length) {
                                            pIVar9->vector[2].x = IStack_24.x;
                                            pIVar9->vector[2].y = IStack_24.y;
                                            pIVar9->vector[2].z = IStack_24.z;
                                            IStack_25.x = 0;
                                            IStack_25.y = 0;
                                            IStack_25.z = 0;
                                            MVWorldObject.dll::MV::WorldObject::IntVector::
                                            IntVector__ctor_1(&IStack_25,0,1,0,(MethodInfo *)0x0);
                                            if (3 < pIVar9->max_length) {
                                              pIVar9->vector[3].x = IStack_25.x;
                                              pIVar9->vector[3].y = IStack_25.y;
                                              pIVar9->vector[3].z = IStack_25.z;
                                              if (3 < pIVar8->max_length) {
                                                pIVar8->vector[3] = pIVar9;
                                                func_?();
                                                pIVar9 = (IntVector__Array *)func_?();
                                                IStack_26.x = 0;
                                                IStack_26.y = 0;
                                                IStack_26.z = 0;
                                                MVWorldObject.dll::MV::WorldObject::IntVector::
                                                IntVector__ctor_1(&IStack_26,-1,-1,0,
                                                                  (MethodInfo *)0x0);
                                                if (pIVar9 == (IntVector__Array *)0x0)
                                                goto code_?;
                                                if (pIVar9->max_length != 0) {
                                                  pIVar9->vector[0].x = IStack_26.x;
                                                  pIVar9->vector[0].y = IStack_26.y;
                                                  pIVar9->vector[0].z = IStack_26.z;
                                                  IStack_27.x = 0;
                                                  IStack_27.y = 0;
                                                  IStack_27.z = 0;
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1(&IStack_27,-1,-1,1,
                                                                    (MethodInfo *)0x0);
                                                  if (1 < pIVar9->max_length) {
                                                    pIVar9->vector[1].x = IStack_27.x;
                                                    pIVar9->vector[1].y = IStack_27.y;
                                                    pIVar9->vector[1].z = IStack_27.z;
                                                    IStack_28.x = 0;
                                                    IStack_28.y = 0;
                                                    IStack_28.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_28,0,-1,1,
                                                                      (MethodInfo *)0x0);
                                                    if (2 < pIVar9->max_length) {
                                                      pIVar9->vector[2].x = IStack_28.x;
                                                      pIVar9->vector[2].y = IStack_28.y;
                                                      pIVar9->vector[2].z = IStack_28.z;
                                                      IStack_29.x = 0;
                                                      IStack_29.y = 0;
                                                      IStack_29.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_29,0,-1,0,
                                                                          (MethodInfo *)0x0);
                                                      if (3 < pIVar9->max_length) {
                                                        pIVar9->vector[3].x = IStack_29.x;
                                                        pIVar9->vector[3].y = IStack_29.y;
                                                        pIVar9->vector[3].z = IStack_29.z;
                                                        if (4 < pIVar8->max_length) {
                                                          pIVar8->vector[4] = pIVar9;
                                                          func_?();
                                                          pIVar9 = (IntVector__Array *)
                                                                   func_?();
                                                          IStack_30.x = 0;
                                                          IStack_30.y = 0;
                                                          IStack_30.z = 0;
                                                          MVWorldObject.dll::MV::WorldObject::
                                                          IntVector::IntVector__ctor_1
                                                                    (&IStack_30,0,-1,0,
                                                                     (MethodInfo *)0x0);
                                                          if (pIVar9 == (IntVector__Array *)0x0)
                                                          goto code_?;
                                                          if (pIVar9->max_length != 0) {
                                                            pIVar9->vector[0].x = IStack_30.x;
                                                            pIVar9->vector[0].y = IStack_30.y;
                                                            pIVar9->vector[0].z = IStack_30.z;
                                                            IStack_31.x = 0;
                                                            IStack_31.y = 0;
                                                            IStack_31.z = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      (&IStack_31,0,-1,1,
                                                                       (MethodInfo *)0x0);
                                                            if (1 < pIVar9->max_length) {
                                                              pIVar9->vector[1].x = IStack_31.x;
                                                              pIVar9->vector[1].y = IStack_31.y;
                                                              pIVar9->vector[1].z = IStack_31.z;
                                                              IStack_32.x = 0;
                                                              IStack_32.y = 0;
                                                              IStack_32.z = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        (&IStack_32,1,-1,1,
                                                                         (MethodInfo *)0x0);
                                                              if (2 < pIVar9->max_length) {
                                                                pIVar9->vector[2].x = IStack_32.x;
                                                                pIVar9->vector[2].y = IStack_32.y;
                                                                pIVar9->vector[2].z = IStack_32.z;
                                                                IStack_33.x = 0;
                                                                IStack_33.y = 0;
                                                                IStack_33.z = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          (&IStack_33,1,-1,0,
                                                                           (MethodInfo *)0x0);
                                                                if (3 < pIVar9->max_length) {
                                                                  pIVar9->vector[3].x = IStack_33.x;
                                                                  pIVar9->vector[3].y = IStack_33.y;
                                                                  pIVar9->vector[3].z = IStack_33.z;
                                                                  if (5 < pIVar8->max_length) {
                                                                    pIVar8->vector[5] = pIVar9;
                                                                    func_?();
                                                                    pIVar9 = (IntVector__Array *)
                                                                             func_?();
                                                                    IStack_34.x = 0;
                                                                    IStack_34.y = 0;
                                                                    IStack_34.z = 0;
                                                                    MVWorldObject.dll::MV::
                                                                    WorldObject::IntVector::
                                                                    IntVector__ctor_1(&IStack_34,0,
                                                                                      -1,-1,(
                                                  MethodInfo *)0x0);
                                                  if (pIVar9 == (IntVector__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar9->max_length != 0) {
                                                    pIVar9->vector[0].x = IStack_34.x;
                                                    pIVar9->vector[0].y = IStack_34.y;
                                                    pIVar9->vector[0].z = IStack_34.z;
                                                    IStack_35.x = 0;
                                                    IStack_35.y = 0;
                                                    IStack_35.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_35,0,-1,0,
                                                                      (MethodInfo *)0x0);
                                                    if (1 < pIVar9->max_length) {
                                                      pIVar9->vector[1].x = IStack_35.x;
                                                      pIVar9->vector[1].y = IStack_35.y;
                                                      pIVar9->vector[1].z = IStack_35.z;
                                                      IStack_36.x = 0;
                                                      IStack_36.y = 0;
                                                      IStack_36.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_36,1,-1,0,
                                                                          (MethodInfo *)0x0);
                                                      if (2 < pIVar9->max_length) {
                                                        pIVar9->vector[2].x = IStack_36.x;
                                                        pIVar9->vector[2].y = IStack_36.y;
                                                        pIVar9->vector[2].z = IStack_36.z;
                                                        IStack_37.x = 0;
                                                        IStack_37.y = 0;
                                                        IStack_37.z = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  (&IStack_37,1,-1,-1,
                                                                   (MethodInfo *)0x0);
                                                        if (3 < pIVar9->max_length) {
                                                          pIVar9->vector[3].x = IStack_37.x;
                                                          pIVar9->vector[3].y = IStack_37.y;
                                                          pIVar9->vector[3].z = IStack_37.z;
                                                          if (6 < pIVar8->max_length) {
                                                            pIVar8->vector[6] = pIVar9;
                                                            func_?();
                                                            pIVar9 = (IntVector__Array *)
                                                                     func_?();
                                                            IStack_38.x = 0;
                                                            IStack_38.y = 0;
                                                            IStack_38.z = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      (&IStack_38,-1,-1,-1,
                                                                       (MethodInfo *)0x0);
                                                            if (pIVar9 == (IntVector__Array *)0x0)
                                                            goto code_?;
                                                            if (pIVar9->max_length != 0) {
                                                              pIVar9->vector[0].x = IStack_38.x;
                                                              pIVar9->vector[0].y = IStack_38.y;
                                                              pIVar9->vector[0].z = IStack_38.z;
                                                              IStack_39.x = 0;
                                                              IStack_39.y = 0;
                                                              IStack_39.z = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        (&IStack_39,-1,-1,0,
                                                                         (MethodInfo *)0x0);
                                                              if (1 < pIVar9->max_length) {
                                                                pIVar9->vector[1].x = IStack_39.x;
                                                                pIVar9->vector[1].y = IStack_39.y;
                                                                pIVar9->vector[1].z = IStack_39.z;
                                                                IStack_40.x = 0;
                                                                IStack_40.y = 0;
                                                                IStack_40.z = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          (&IStack_40,0,-1,0,
                                                                           (MethodInfo *)0x0);
                                                                if (2 < pIVar9->max_length) {
                                                                  pIVar9->vector[2].x = IStack_40.x
                                                                  ;
                                                                  pIVar9->vector[2].y = IStack_40.y
                                                                  ;
                                                                  pIVar9->vector[2].z = IStack_40.z
                                                                  ;
                                                                  IStack_41.x = 0;
                                                                  IStack_41.y = 0;
                                                                  IStack_41.z = 0;
                                                                  MVWorldObject.dll::MV::WorldObject
                                                                  ::IntVector::IntVector__ctor_1
                                                                            (&IStack_41,0,-1,-1,
                                                                             (MethodInfo *)0x0);
                                                                  if (3 < pIVar9->max_length) {
                                                                    pIVar9->vector[3].x =
                                                                         IStack_41.x;
                                                                    pIVar9->vector[3].y =
                                                                         IStack_41.y;
                                                                    pIVar9->vector[3].z =
                                                                         IStack_41.z;
                                                                    if (7 < pIVar8->max_length) {
                                                                      pIVar8->vector[7] = pIVar9;
                                                                      func_?();
                                                                      pIVar9 = (IntVector__Array *)
                                                                               func_?();
                                                                      IStack_42.x = 0;
                                                                      IStack_42.y = 0;
                                                                      IStack_42.z = 0;
                                                                      MVWorldObject.dll::MV::
                                                                      WorldObject::IntVector::
                                                                      IntVector__ctor_1(&IStack_42,
                                                                                        -1,-1,-1,(
                                                  MethodInfo *)0x0);
                                                  if (pIVar9 == (IntVector__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar9->max_length != 0) {
                                                    pIVar9->vector[0].x = IStack_42.x;
                                                    pIVar9->vector[0].y = IStack_42.y;
                                                    pIVar9->vector[0].z = IStack_42.z;
                                                    IStack_43.x = 0;
                                                    IStack_43.y = 0;
                                                    IStack_43.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_43,-1,0,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (1 < pIVar9->max_length) {
                                                      pIVar9->vector[1].x = IStack_43.x;
                                                      pIVar9->vector[1].y = IStack_43.y;
                                                      pIVar9->vector[1].z = IStack_43.z;
                                                      IStack_44.x = 0;
                                                      IStack_44.y = 0;
                                                      IStack_44.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_44,0,0,-1,
                                                                          (MethodInfo *)0x0);
                                                      if (2 < pIVar9->max_length) {
                                                        pIVar9->vector[2].x = IStack_44.x;
                                                        pIVar9->vector[2].y = IStack_44.y;
                                                        pIVar9->vector[2].z = IStack_44.z;
                                                        IStack_45.x = 0;
                                                        IStack_45.y = 0;
                                                        IStack_45.z = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  (&IStack_45,0,-1,-1,
                                                                   (MethodInfo *)0x0);
                                                        if (3 < pIVar9->max_length) {
                                                          pIVar9->vector[3].x = IStack_45.x;
                                                          pIVar9->vector[3].y = IStack_45.y;
                                                          pIVar9->vector[3].z = IStack_45.z;
                                                          if (8 < pIVar8->max_length) {
                                                            pIVar8->vector[8] = pIVar9;
                                                            func_?();
                                                            pIVar9 = (IntVector__Array *)
                                                                     func_?();
                                                            IStack_46.x = 0;
                                                            IStack_46.y = 0;
                                                            IStack_46.z = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      (&IStack_46,0,-1,-1,
                                                                       (MethodInfo *)0x0);
                                                            if (pIVar9 == (IntVector__Array *)0x0)
                                                            goto code_?;
                                                            if (pIVar9->max_length != 0) {
                                                              pIVar9->vector[0].x = IStack_46.x;
                                                              pIVar9->vector[0].y = IStack_46.y;
                                                              pIVar9->vector[0].z = IStack_46.z;
                                                              IStack_47.x = 0;
                                                              IStack_47.y = 0;
                                                              IStack_47.z = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        (&IStack_47,0,0,-1,
                                                                         (MethodInfo *)0x0);
                                                              if (1 < pIVar9->max_length) {
                                                                pIVar9->vector[1].x = IStack_47.x;
                                                                pIVar9->vector[1].y = IStack_47.y;
                                                                pIVar9->vector[1].z = IStack_47.z;
                                                                IStack_48.x = 0;
                                                                IStack_48.y = 0;
                                                                IStack_48.z = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          (&IStack_48,1,0,-1,
                                                                           (MethodInfo *)0x0);
                                                                if (2 < pIVar9->max_length) {
                                                                  pIVar9->vector[2].x = IStack_48.x
                                                                  ;
                                                                  pIVar9->vector[2].y = IStack_48.y
                                                                  ;
                                                                  pIVar9->vector[2].z = IStack_48.z
                                                                  ;
                                                                  IStack_49.x = 0;
                                                                  IStack_49.y = 0;
                                                                  IStack_49.z = 0;
                                                                  MVWorldObject.dll::MV::WorldObject
                                                                  ::IntVector::IntVector__ctor_1
                                                                            (&IStack_49,1,-1,-1,
                                                                             (MethodInfo *)0x0);
                                                                  if (3 < pIVar9->max_length) {
                                                                    pIVar9->vector[3].x =
                                                                         IStack_49.x;
                                                                    pIVar9->vector[3].y =
                                                                         IStack_49.y;
                                                                    pIVar9->vector[3].z =
                                                                         IStack_49.z;
                                                                    if (9 < pIVar8->max_length) {
                                                                      pIVar8->vector[9] = pIVar9;
                                                                      func_?();
                                                                      pIVar9 = (IntVector__Array *)
                                                                               func_?();
                                                                      IStack_50.x = 0;
                                                                      IStack_50.y = 0;
                                                                      IStack_50.z = 0;
                                                                      MVWorldObject.dll::MV::
                                                                      WorldObject::IntVector::
                                                                      IntVector__ctor_1(&IStack_50,
                                                                                        0,0,-1,(
                                                  MethodInfo *)0x0);
                                                  if (pIVar9 == (IntVector__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar9->max_length != 0) {
                                                    pIVar9->vector[0].x = IStack_50.x;
                                                    pIVar9->vector[0].y = IStack_50.y;
                                                    pIVar9->vector[0].z = IStack_50.z;
                                                    IStack_51.x = 0;
                                                    IStack_51.y = 0;
                                                    IStack_51.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_51,0,1,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (1 < pIVar9->max_length) {
                                                      pIVar9->vector[1].x = IStack_51.x;
                                                      pIVar9->vector[1].y = IStack_51.y;
                                                      pIVar9->vector[1].z = IStack_51.z;
                                                      IStack_52.x = 0;
                                                      IStack_52.y = 0;
                                                      IStack_52.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_52,1,1,-1,
                                                                          (MethodInfo *)0x0);
                                                      if (2 < pIVar9->max_length) {
                                                        pIVar9->vector[2].x = IStack_52.x;
                                                        pIVar9->vector[2].y = IStack_52.y;
                                                        pIVar9->vector[2].z = IStack_52.z;
                                                        IStack_53.x = 0;
                                                        IStack_53.y = 0;
                                                        IStack_53.z = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  (&IStack_53,1,0,-1,
                                                                   (MethodInfo *)0x0);
                                                        if (3 < pIVar9->max_length) {
                                                          pIVar9->vector[3].x = IStack_53.x;
                                                          pIVar9->vector[3].y = IStack_53.y;
                                                          pIVar9->vector[3].z = IStack_53.z;
                                                          if (10 < pIVar8->max_length) {
                                                            pIVar8->vector[10] = pIVar9;
                                                            func_?();
                                                            pIVar9 = (IntVector__Array *)
                                                                     func_?();
                                                            IStack_54.x = 0;
                                                            IStack_54.y = 0;
                                                            IStack_54.z = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      (&IStack_54,-1,0,-1,
                                                                       (MethodInfo *)0x0);
                                                            if (pIVar9 == (IntVector__Array *)0x0)
                                                            goto code_?;
                                                            if (pIVar9->max_length != 0) {
                                                              pIVar9->vector[0].x = IStack_54.x;
                                                              pIVar9->vector[0].y = IStack_54.y;
                                                              pIVar9->vector[0].z = IStack_54.z;
                                                              IStack_55.x = 0;
                                                              IStack_55.y = 0;
                                                              IStack_55.z = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        (&IStack_55,-1,1,-1,
                                                                         (MethodInfo *)0x0);
                                                              if (1 < pIVar9->max_length) {
                                                                pIVar9->vector[1].x = IStack_55.x;
                                                                pIVar9->vector[1].y = IStack_55.y;
                                                                pIVar9->vector[1].z = IStack_55.z;
                                                                IStack_56.x = 0;
                                                                IStack_56.y = 0;
                                                                IStack_56.z = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          (&IStack_56,0,1,-1,
                                                                           (MethodInfo *)0x0);
                                                                if (2 < pIVar9->max_length) {
                                                                  pIVar9->vector[2].x = IStack_56.x
                                                                  ;
                                                                  pIVar9->vector[2].y = IStack_56.y
                                                                  ;
                                                                  pIVar9->vector[2].z = IStack_56.z
                                                                  ;
                                                                  IStack_57.x = 0;
                                                                  IStack_57.y = 0;
                                                                  IStack_57.z = 0;
                                                                  MVWorldObject.dll::MV::WorldObject
                                                                  ::IntVector::IntVector__ctor_1
                                                                            (&IStack_57,0,0,-1,
                                                                             (MethodInfo *)0x0);
                                                                  if (3 < pIVar9->max_length) {
                                                                    pIVar9->vector[3].x =
                                                                         IStack_57.x;
                                                                    pIVar9->vector[3].y =
                                                                         IStack_57.y;
                                                                    pIVar9->vector[3].z =
                                                                         IStack_57.z;
                                                                    if (0xb < pIVar8->max_length) {
                                                                      pIVar8->vector[0xb] = pIVar9;
                                                                      func_?();
                                                                      pIVar9 = (IntVector__Array *)
                                                                               func_?();
                                                                      IStack_58.x = 0;
                                                                      IStack_58.y = 0;
                                                                      IStack_58.z = 0;
                                                                      MVWorldObject.dll::MV::
                                                                      WorldObject::IntVector::
                                                                      IntVector__ctor_1(&IStack_58,
                                                                                        0,-1,1,(
                                                  MethodInfo *)0x0);
                                                  if (pIVar9 == (IntVector__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar9->max_length != 0) {
                                                    pIVar9->vector[0].x = IStack_58.x;
                                                    pIVar9->vector[0].y = IStack_58.y;
                                                    pIVar9->vector[0].z = IStack_58.z;
                                                    IStack_59.x = 0;
                                                    IStack_59.y = 0;
                                                    IStack_59.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_59,0,0,1,
                                                                      (MethodInfo *)0x0);
                                                    if (1 < pIVar9->max_length) {
                                                      pIVar9->vector[1].x = IStack_59.x;
                                                      pIVar9->vector[1].y = IStack_59.y;
                                                      pIVar9->vector[1].z = IStack_59.z;
                                                      IStack_60.x = 0;
                                                      IStack_60.y = 0;
                                                      IStack_60.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_60,1,0,1,
                                                                          (MethodInfo *)0x0);
                                                      if (2 < pIVar9->max_length) {
                                                        pIVar9->vector[2].x = IStack_60.x;
                                                        pIVar9->vector[2].y = IStack_60.y;
                                                        pIVar9->vector[2].z = IStack_60.z;
                                                        IStack_61.x = 0;
                                                        IStack_61.y = 0;
                                                        IStack_61.z = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  (&IStack_61,1,-1,1,
                                                                   (MethodInfo *)0x0);
                                                        if (3 < pIVar9->max_length) {
                                                          pIVar9->vector[3].x = IStack_61.x;
                                                          pIVar9->vector[3].y = IStack_61.y;
                                                          pIVar9->vector[3].z = IStack_61.z;
                                                          if (0xc < pIVar8->max_length) {
                                                            pIVar8->vector[0xc] = pIVar9;
                                                            func_?();
                                                            pIVar9 = (IntVector__Array *)
                                                                     func_?();
                                                            IStack_62.x = 0;
                                                            IStack_62.y = 0;
                                                            IStack_62.z = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      (&IStack_62,-1,-1,1,
                                                                       (MethodInfo *)0x0);
                                                            if (pIVar9 == (IntVector__Array *)0x0)
                                                            goto code_?;
                                                            if (pIVar9->max_length != 0) {
                                                              pIVar9->vector[0].x = IStack_62.x;
                                                              pIVar9->vector[0].y = IStack_62.y;
                                                              pIVar9->vector[0].z = IStack_62.z;
                                                              IStack_63.x = 0;
                                                              IStack_63.y = 0;
                                                              IStack_63.z = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        (&IStack_63,-1,0,1,
                                                                         (MethodInfo *)0x0);
                                                              if (1 < pIVar9->max_length) {
                                                                pIVar9->vector[1].x = IStack_63.x;
                                                                pIVar9->vector[1].y = IStack_63.y;
                                                                pIVar9->vector[1].z = IStack_63.z;
                                                                IStack_64.x = 0;
                                                                IStack_64.y = 0;
                                                                IStack_64.z = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          (&IStack_64,0,0,1,
                                                                           (MethodInfo *)0x0);
                                                                if (2 < pIVar9->max_length) {
                                                                  pIVar9->vector[2].x = IStack_64.x
                                                                  ;
                                                                  pIVar9->vector[2].y = IStack_64.y
                                                                  ;
                                                                  pIVar9->vector[2].z = IStack_64.z
                                                                  ;
                                                                  IStack_65.x = 0;
                                                                  IStack_65.y = 0;
                                                                  IStack_65.z = 0;
                                                                  MVWorldObject.dll::MV::WorldObject
                                                                  ::IntVector::IntVector__ctor_1
                                                                            (&IStack_65,0,-1,1,
                                                                             (MethodInfo *)0x0);
                                                                  if (3 < pIVar9->max_length) {
                                                                    pIVar9->vector[3].x =
                                                                         IStack_65.x;
                                                                    pIVar9->vector[3].y =
                                                                         IStack_65.y;
                                                                    pIVar9->vector[3].z =
                                                                         IStack_65.z;
                                                                    if (0xd < pIVar8->max_length) {
                                                                      pIVar8->vector[0xd] = pIVar9;
                                                                      func_?();
                                                                      pIVar9 = (IntVector__Array *)
                                                                               func_?();
                                                                      IStack_66.x = 0;
                                                                      IStack_66.y = 0;
                                                                      IStack_66.z = 0;
                                                                      MVWorldObject.dll::MV::
                                                                      WorldObject::IntVector::
                                                                      IntVector__ctor_1(&IStack_66,
                                                                                        -1,0,1,(
                                                  MethodInfo *)0x0);
                                                  if (pIVar9 == (IntVector__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar9->max_length != 0) {
                                                    pIVar9->vector[0].x = IStack_66.x;
                                                    pIVar9->vector[0].y = IStack_66.y;
                                                    pIVar9->vector[0].z = IStack_66.z;
                                                    IStack_67.x = 0;
                                                    IStack_67.y = 0;
                                                    IStack_67.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_67,-1,1,1,
                                                                      (MethodInfo *)0x0);
                                                    if (1 < pIVar9->max_length) {
                                                      pIVar9->vector[1].x = IStack_67.x;
                                                      pIVar9->vector[1].y = IStack_67.y;
                                                      pIVar9->vector[1].z = IStack_67.z;
                                                      IStack_68.x = 0;
                                                      IStack_68.y = 0;
                                                      IStack_68.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_68,0,1,1,
                                                                          (MethodInfo *)0x0);
                                                      if (2 < pIVar9->max_length) {
                                                        pIVar9->vector[2].x = IStack_68.x;
                                                        pIVar9->vector[2].y = IStack_68.y;
                                                        pIVar9->vector[2].z = IStack_68.z;
                                                        IStack_69.x = 0;
                                                        IStack_69.y = 0;
                                                        IStack_69.z = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  (&IStack_69,0,0,1,
                                                                   (MethodInfo *)0x0);
                                                        if (3 < pIVar9->max_length) {
                                                          pIVar9->vector[3].x = IStack_69.x;
                                                          pIVar9->vector[3].y = IStack_69.y;
                                                          pIVar9->vector[3].z = IStack_69.z;
                                                          if (0xe < pIVar8->max_length) {
                                                            pIVar8->vector[0xe] = pIVar9;
                                                            func_?();
                                                            pIVar9 = (IntVector__Array *)
                                                                     func_?();
                                                            IStack_70.x = 0;
                                                            IStack_70.y = 0;
                                                            IStack_70.z = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      (&IStack_70,0,0,1,
                                                                       (MethodInfo *)0x0);
                                                            if (pIVar9 == (IntVector__Array *)0x0)
                                                            goto code_?;
                                                            if (pIVar9->max_length != 0) {
                                                              pIVar9->vector[0].x = IStack_70.x;
                                                              pIVar9->vector[0].y = IStack_70.y;
                                                              pIVar9->vector[0].z = IStack_70.z;
                                                              IStack_71.x = 0;
                                                              IStack_71.y = 0;
                                                              IStack_71.z = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        (&IStack_71,0,1,1,
                                                                         (MethodInfo *)0x0);
                                                              if (1 < pIVar9->max_length) {
                                                                pIVar9->vector[1].x = IStack_71.x;
                                                                pIVar9->vector[1].y = IStack_71.y;
                                                                pIVar9->vector[1].z = IStack_71.z;
                                                                IStack_72.x = 0;
                                                                IStack_72.y = 0;
                                                                IStack_72.z = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          (&IStack_72,1,1,1,
                                                                           (MethodInfo *)0x0);
                                                                if (2 < pIVar9->max_length) {
                                                                  pIVar9->vector[2].x = IStack_72.x
                                                                  ;
                                                                  pIVar9->vector[2].y = IStack_72.y
                                                                  ;
                                                                  pIVar9->vector[2].z = IStack_72.z
                                                                  ;
                                                                  IStack_73.x = 0;
                                                                  IStack_73.y = 0;
                                                                  IStack_73.z = 0;
                                                                  MVWorldObject.dll::MV::WorldObject
                                                                  ::IntVector::IntVector__ctor_1
                                                                            (&IStack_73,1,0,1,
                                                                             (MethodInfo *)0x0);
                                                                  if (3 < pIVar9->max_length) {
                                                                    pIVar9->vector[3].x =
                                                                         IStack_73.x;
                                                                    pIVar9->vector[3].y =
                                                                         IStack_73.y;
                                                                    pIVar9->vector[3].z =
                                                                         IStack_73.z;
                                                                    if (0xf < pIVar8->max_length) {
                                                                      pIVar8->vector[0xf] = pIVar9;
                                                                      func_?();
                                                                      pIVar9 = (IntVector__Array *)
                                                                               func_?();
                                                                      IStack_74.x = 0;
                                                                      IStack_74.y = 0;
                                                                      IStack_74.z = 0;
                                                                      MVWorldObject.dll::MV::
                                                                      WorldObject::IntVector::
                                                                      IntVector__ctor_1(&IStack_74,
                                                                                        -1,-1,0,(
                                                  MethodInfo *)0x0);
                                                  if (pIVar9 == (IntVector__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar9->max_length != 0) {
                                                    pIVar9->vector[0].x = IStack_74.x;
                                                    pIVar9->vector[0].y = IStack_74.y;
                                                    pIVar9->vector[0].z = IStack_74.z;
                                                    IStack_75.x = 0;
                                                    IStack_75.y = 0;
                                                    IStack_75.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_75,-1,0,0,
                                                                      (MethodInfo *)0x0);
                                                    if (1 < pIVar9->max_length) {
                                                      pIVar9->vector[1].x = IStack_75.x;
                                                      pIVar9->vector[1].y = IStack_75.y;
                                                      pIVar9->vector[1].z = IStack_75.z;
                                                      IStack_76.x = 0;
                                                      IStack_76.y = 0;
                                                      IStack_76.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_76,-1,0,1,
                                                                          (MethodInfo *)0x0);
                                                      if (2 < pIVar9->max_length) {
                                                        pIVar9->vector[2].x = IStack_76.x;
                                                        pIVar9->vector[2].y = IStack_76.y;
                                                        pIVar9->vector[2].z = IStack_76.z;
                                                        IStack_77.x = 0;
                                                        IStack_77.y = 0;
                                                        IStack_77.z = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  (&IStack_77,-1,-1,1,
                                                                   (MethodInfo *)0x0);
                                                        if (3 < pIVar9->max_length) {
                                                          pIVar9->vector[3].x = IStack_77.x;
                                                          pIVar9->vector[3].y = IStack_77.y;
                                                          pIVar9->vector[3].z = IStack_77.z;
                                                          if (0x10 < pIVar8->max_length) {
                                                            pIVar8->vector[0x10] = pIVar9;
                                                            func_?();
                                                            pIVar9 = (IntVector__Array *)
                                                                     func_?();
                                                            IStack_78.x = 0;
                                                            IStack_78.y = 0;
                                                            IStack_78.z = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      (&IStack_78,-1,-1,-1,
                                                                       (MethodInfo *)0x0);
                                                            if (pIVar9 == (IntVector__Array *)0x0)
                                                            goto code_?;
                                                            if (pIVar9->max_length != 0) {
                                                              pIVar9->vector[0].x = IStack_78.x;
                                                              pIVar9->vector[0].y = IStack_78.y;
                                                              pIVar9->vector[0].z = IStack_78.z;
                                                              IStack_79.x = 0;
                                                              IStack_79.y = 0;
                                                              IStack_79.z = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        (&IStack_79,-1,0,-1,
                                                                         (MethodInfo *)0x0);
                                                              if (1 < pIVar9->max_length) {
                                                                pIVar9->vector[1].x = IStack_79.x;
                                                                pIVar9->vector[1].y = IStack_79.y;
                                                                pIVar9->vector[1].z = IStack_79.z;
                                                                IStack_80.x = 0;
                                                                IStack_80.y = 0;
                                                                IStack_80.z = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          (&IStack_80,-1,0,0,
                                                                           (MethodInfo *)0x0);
                                                                if (2 < pIVar9->max_length) {
                                                                  pIVar9->vector[2].x = IStack_80.x
                                                                  ;
                                                                  pIVar9->vector[2].y = IStack_80.y
                                                                  ;
                                                                  pIVar9->vector[2].z = IStack_80.z
                                                                  ;
                                                                  IStack_81.x = 0;
                                                                  IStack_81.y = 0;
                                                                  IStack_81.z = 0;
                                                                  MVWorldObject.dll::MV::WorldObject
                                                                  ::IntVector::IntVector__ctor_1
                                                                            (&IStack_81,-1,-1,0,
                                                                             (MethodInfo *)0x0);
                                                                  if (3 < pIVar9->max_length) {
                                                                    pIVar9->vector[3].x =
                                                                         IStack_81.x;
                                                                    pIVar9->vector[3].y =
                                                                         IStack_81.y;
                                                                    pIVar9->vector[3].z =
                                                                         IStack_81.z;
                                                                    if (0x11 < pIVar8->max_length) {
                                                                      pIVar8->vector[0x11] = pIVar9;
                                                                      func_?();
                                                                      pIVar9 = (IntVector__Array *)
                                                                               func_?();
                                                                      IStack_82.x = 0;
                                                                      IStack_82.y = 0;
                                                                      IStack_82.z = 0;
                                                                      MVWorldObject.dll::MV::
                                                                      WorldObject::IntVector::
                                                                      IntVector__ctor_1(&IStack_82,
                                                                                        -1,0,-1,(
                                                  MethodInfo *)0x0);
                                                  if (pIVar9 == (IntVector__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar9->max_length != 0) {
                                                    pIVar9->vector[0].x = IStack_82.x;
                                                    pIVar9->vector[0].y = IStack_82.y;
                                                    pIVar9->vector[0].z = IStack_82.z;
                                                    IStack_83.x = 0;
                                                    IStack_83.y = 0;
                                                    IStack_83.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_83,-1,1,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (1 < pIVar9->max_length) {
                                                      pIVar9->vector[1].x = IStack_83.x;
                                                      pIVar9->vector[1].y = IStack_83.y;
                                                      pIVar9->vector[1].z = IStack_83.z;
                                                      IStack_84.x = 0;
                                                      IStack_84.y = 0;
                                                      IStack_84.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_84,-1,1,0,
                                                                          (MethodInfo *)0x0);
                                                      if (2 < pIVar9->max_length) {
                                                        pIVar9->vector[2].x = IStack_84.x;
                                                        pIVar9->vector[2].y = IStack_84.y;
                                                        pIVar9->vector[2].z = IStack_84.z;
                                                        IStack_85.x = 0;
                                                        IStack_85.y = 0;
                                                        IStack_85.z = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  (&IStack_85,-1,0,0,
                                                                   (MethodInfo *)0x0);
                                                        if (3 < pIVar9->max_length) {
                                                          pIVar9->vector[3].x = IStack_85.x;
                                                          pIVar9->vector[3].y = IStack_85.y;
                                                          pIVar9->vector[3].z = IStack_85.z;
                                                          if (0x12 < pIVar8->max_length) {
                                                            pIVar8->vector[0x12] = pIVar9;
                                                            func_?();
                                                            pIVar9 = (IntVector__Array *)
                                                                     func_?();
                                                            IStack_86.x = 0;
                                                            IStack_86.y = 0;
                                                            IStack_86.z = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      (&IStack_86,-1,0,0,
                                                                       (MethodInfo *)0x0);
                                                            if (pIVar9 == (IntVector__Array *)0x0)
                                                            goto code_?;
                                                            if (pIVar9->max_length != 0) {
                                                              pIVar9->vector[0].x = IStack_86.x;
                                                              pIVar9->vector[0].y = IStack_86.y;
                                                              pIVar9->vector[0].z = IStack_86.z;
                                                              IStack_87.x = 0;
                                                              IStack_87.y = 0;
                                                              IStack_87.z = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        (&IStack_87,-1,1,0,
                                                                         (MethodInfo *)0x0);
                                                              if (1 < pIVar9->max_length) {
                                                                pIVar9->vector[1].x = IStack_87.x;
                                                                pIVar9->vector[1].y = IStack_87.y;
                                                                pIVar9->vector[1].z = IStack_87.z;
                                                                IStack_88.x = 0;
                                                                IStack_88.y = 0;
                                                                IStack_88.z = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          (&IStack_88,-1,1,1,
                                                                           (MethodInfo *)0x0);
                                                                if (2 < pIVar9->max_length) {
                                                                  pIVar9->vector[2].x = IStack_88.x
                                                                  ;
                                                                  pIVar9->vector[2].y = IStack_88.y
                                                                  ;
                                                                  pIVar9->vector[2].z = IStack_88.z
                                                                  ;
                                                                  IStack_89.x = 0;
                                                                  IStack_89.y = 0;
                                                                  IStack_89.z = 0;
                                                                  MVWorldObject.dll::MV::WorldObject
                                                                  ::IntVector::IntVector__ctor_1
                                                                            (&IStack_89,-1,0,1,
                                                                             (MethodInfo *)0x0);
                                                                  if (3 < pIVar9->max_length) {
                                                                    pIVar9->vector[3].x =
                                                                         IStack_89.x;
                                                                    pIVar9->vector[3].y =
                                                                         IStack_89.y;
                                                                    pIVar9->vector[3].z =
                                                                         IStack_89.z;
                                                                    if (0x13 < pIVar8->max_length) {
                                                                      pIVar8->vector[0x13] = pIVar9;
                                                                      func_?();
                                                                      pIVar9 = (IntVector__Array *)
                                                                               func_?();
                                                                      IStack_90.x = 0;
                                                                      IStack_90.y = 0;
                                                                      IStack_90.z = 0;
                                                                      MVWorldObject.dll::MV::
                                                                      WorldObject::IntVector::
                                                                      IntVector__ctor_1(&IStack_90,
                                                                                        1,-1,-1,(
                                                  MethodInfo *)0x0);
                                                  if (pIVar9 == (IntVector__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar9->max_length != 0) {
                                                    pIVar9->vector[0].x = IStack_90.x;
                                                    pIVar9->vector[0].y = IStack_90.y;
                                                    pIVar9->vector[0].z = IStack_90.z;
                                                    IStack_91.x = 0;
                                                    IStack_91.y = 0;
                                                    IStack_91.z = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1(&IStack_91,1,0,-1,
                                                                      (MethodInfo *)0x0);
                                                    if (1 < pIVar9->max_length) {
                                                      pIVar9->vector[1].x = IStack_91.x;
                                                      pIVar9->vector[1].y = IStack_91.y;
                                                      pIVar9->vector[1].z = IStack_91.z;
                                                      IStack_92.x = 0;
                                                      IStack_92.y = 0;
                                                      IStack_92.z = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1(&IStack_92,1,0,0,
                                                                          (MethodInfo *)0x0);
                                                      if (2 < pIVar9->max_length) {
                                                        pIVar9->vector[2].x = IStack_92.x;
                                                        pIVar9->vector[2].y = IStack_92.y;
                                                        pIVar9->vector[2].z = IStack_92.z;
                                                        IStack_93.x = 0;
                                                        IStack_93.y = 0;
                                                        IStack_93.z = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  (&IStack_93,1,-1,0,
                                                                   (MethodInfo *)0x0);
                                                        if (3 < pIVar9->max_length) {
                                                          pIVar9->vector[3].x = IStack_93.x;
                                                          pIVar9->vector[3].y = IStack_93.y;
                                                          pIVar9->vector[3].z = IStack_93.z;
                                                          if (0x14 < pIVar8->max_length) {
                                                            pIVar8->vector[0x14] = pIVar9;
                                                            func_?();
                                                            pIVar9 = (IntVector__Array *)
                                                                     func_?();
                                                            IStack_94.x = 0;
                                                            IStack_94.y = 0;
                                                            IStack_94.z = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      (&IStack_94,1,-1,0,
                                                                       (MethodInfo *)0x0);
                                                            if (pIVar9 == (IntVector__Array *)0x0)
                                                            goto code_?;
                                                            if (pIVar9->max_length != 0) {
                                                              pIVar9->vector[0].x = IStack_94.x;
                                                              pIVar9->vector[0].y = IStack_94.y;
                                                              pIVar9->vector[0].z = IStack_94.z;
                                                              IStack_95.x = 0;
                                                              IStack_95.y = 0;
                                                              IStack_95.z = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        (&IStack_95,1,0,0,
                                                                         (MethodInfo *)0x0);
                                                              if (1 < pIVar9->max_length) {
                                                                pIVar9->vector[1].x = IStack_95.x;
                                                                pIVar9->vector[1].y = IStack_95.y;
                                                                pIVar9->vector[1].z = IStack_95.z;
                                                                pIStack_96 = (IntVector__Array *)
                                                                              0x0;
                                                                iStack_97 = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          ((IntVector *)&pIStack_96
                                                                           ,1,0,1,(MethodInfo *)0x0)
                                                                ;
                                                                if (2 < pIVar9->max_length) {
                                                                  *(IntVector__Array **)
                                                                   (pIVar9->vector + 2) =
                                                                       pIStack_96;
                                                                  pIVar9->vector[2].z = iStack_97;
                                                                  puStack_98 = (undefined *)0x0;
                                                                  ppIStack_99 = (IntVector__Array
                                                                                  **)((uint)
                                                  ppIStack_99 & 0xffff0000);
                                                  MVWorldObject.dll::MV::WorldObject::IntVector::
                                                  IntVector__ctor_1((IntVector *)&puStack_98,1,-1,1
                                                                    ,(MethodInfo *)0x0);
                                                  if (3 < pIVar9->max_length) {
                                                    *(undefined **)(pIVar9->vector + 3) =
                                                         puStack_98;
                                                    pIVar9->vector[3].z = (int16_t)ppIStack_99;
                                                    if (0x15 < pIVar8->max_length) {
                                                      pIVar8->vector[0x15] = pIVar9;
                                                      func_?();
                                                      pIVar9 = (IntVector__Array *)func_?()
                                                      ;
                                                      uVar100._0_2_ = 0;
                                                      uVar100._2_2_ = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1((IntVector *)
                                                                          &stack0xfffffd2c,1,0,0,
                                                                          (MethodInfo *)0x0);
                                                      if (pIVar9 == (IntVector__Array *)0x0)
                                                      goto code_?;
                                                      if (pIVar9->max_length != 0) {
                                                        pIVar9->vector[0].x = (int16_t)uVar100;
                                                        pIVar9->vector[0].y = SUB42(uVar100,2);
                                                        pIVar9->vector[0].z = 0;
                                                        uVar101._0_2_ = 0;
                                                        uVar101._2_2_ = 0;
                                                        iVar102 = 0;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  ((IntVector *)&stack0xfffffd24,1,1
                                                                   ,0,(MethodInfo *)0x0);
                                                        if (1 < pIVar9->max_length) {
                                                          pIVar9->vector[1].x = (int16_t)uVar101;
                                                          pIVar9->vector[1].y = SUB42(uVar101,2);
                                                          pIVar9->vector[1].z = iVar102;
                                                          uVar103._0_2_ = 0;
                                                          uVar103._2_2_ = 0;
                                                          iVar102 = 0;
                                                          MVWorldObject.dll::MV::WorldObject::
                                                          IntVector::IntVector__ctor_1
                                                                    ((IntVector *)&stack0xfffffd1c,1
                                                                     ,1,1,(MethodInfo *)0x0);
                                                          if (2 < pIVar9->max_length) {
                                                            pIVar9->vector[2].x = (int16_t)uVar103;
                                                            pIVar9->vector[2].y = SUB42(uVar103,2);
                                                            pIVar9->vector[2].z = iVar102;
                                                            uVar104._0_2_ = 0;
                                                            uVar104._2_2_ = 0;
                                                            iVar102 = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      ((IntVector *)&stack0xfffffd14
                                                                       ,1,0,1,(MethodInfo *)0x0);
                                                            if (3 < pIVar9->max_length) {
                                                              pIVar9->vector[3].x = (int16_t)uVar104;
                                                              pIVar9->vector[3].y = SUB42(uVar104,2);
                                                              pIVar9->vector[3].z = iVar102;
                                                              if (0x16 < pIVar8->max_length) {
                                                                pIVar8->vector[0x16] = pIVar9;
                                                                func_?();
                                                                pIVar9 = (IntVector__Array *)
                                                                         func_?();
                                                                uVar105._0_2_ = 0;
                                                                uVar105._2_2_ = 0;
                                                                iVar102 = 0;
                                                                MVWorldObject.dll::MV::WorldObject::
                                                                IntVector::IntVector__ctor_1
                                                                          ((IntVector *)
                                                                           &stack0xfffffd0c,1,0,-1,
                                                                           (MethodInfo *)0x0);
                                                                if (pIVar9 == (IntVector__Array *)
                                                                              0x0)
                                                                goto code_?;
                                                                if (pIVar9->max_length != 0) {
                                                                  pIVar9->vector[0].x =
                                                                       (int16_t)uVar105;
                                                                  pIVar9->vector[0].y =
                                                                       SUB42(uVar105,2);
                                                                  pIVar9->vector[0].z = iVar102;
                                                                  uVar106._0_2_ = 0;
                                                                  uVar106._2_2_ = 0;
                                                                  iVar102 = 0;
                                                                  MVWorldObject.dll::MV::WorldObject
                                                                  ::IntVector::IntVector__ctor_1
                                                                            ((IntVector *)
                                                                             &stack0xfffffd04,1,1,-1
                                                                             ,(MethodInfo *)0x0);
                                                                  if (1 < pIVar9->max_length) {
                                                                    pIVar9->vector[1].x =
                                                                         (int16_t)uVar106;
                                                                    pIVar9->vector[1].y =
                                                                         SUB42(uVar106,2);
                                                                    pIVar9->vector[1].z = iVar102;
                                                                    uVar107._0_2_ = 0;
                                                                    uVar107._2_2_ = 0;
                                                                    iVar102 = 0;
                                                                    MVWorldObject.dll::MV::
                                                                    WorldObject::IntVector::
                                                                    IntVector__ctor_1((IntVector *)
                                                                                      &
                                                  stack0xfffffcfc,1,1,0,(MethodInfo *)0x0);
                                                  if (2 < pIVar9->max_length) {
                                                    pIVar9->vector[2].x = (int16_t)uVar107;
                                                    pIVar9->vector[2].y = SUB42(uVar107,2);
                                                    pIVar9->vector[2].z = iVar102;
                                                    iVar102 = 0;
                                                    uVar108._0_2_ = 1;
                                                    uVar108._2_2_ = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1((IntVector *)&stack0xfffffcf4,
                                                                      1,0,0,(MethodInfo *)0x0);
                                                    if (3 < pIVar9->max_length) {
                                                      pIVar9->vector[3].x = (int16_t)uVar108;
                                                      pIVar9->vector[3].y = SUB42(uVar108,2);
                                                      pIVar9->vector[3].z = iVar102;
                                                      if (0x17 < pIVar8->max_length) {
                                                        pIVar8->vector[0x17] = pIVar9;
                                                        func_?();
                                                        TypeInfo__SharedCubeFunctions->static_fields
                                                        ->LightTestOffsets = pIVar8;
                                                        func_?();
                                                        pFVar109 = (Face__Enum__Array__Array *)
                                                                  func_?();
                                                        pFVar110 = (Face__Enum__Array *)
                                                                  func_?();
                                                        mscorlib.dll::System::Runtime::
                                                        CompilerServices::RuntimeHelpers::
                                                        RuntimeHelpers_InitializeArray_1
                                                                  ((Array *)pFVar110,
                                                                                                                                      
                                                  __59E3B3AC5476357BCD66274BB6A67316738712645A4299A570105FFE4826372C_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar109 == (Face__Enum__Array__Array *)0x0)
                                                  goto code_?;
                                                  if (pFVar109->max_length != 0) {
                                                    pFVar109->vector[0] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  _A53B3522877C6E2C38B170CB40FA7BCAE5DD40492EE274555BA018EEE935E33B_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (1 < pFVar109->max_length) {
                                                    pFVar109->vector[1] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  __5C7EED3CACF93747DA516A9AC649BE9445AC47109AEE57E8B6A6EB6741768A25_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (2 < pFVar109->max_length) {
                                                    pFVar109->vector[2] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  __44213D5337CB506057EAFD42FA33A4776A44B0A5B0DA2405701680673CE173A2_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (3 < pFVar109->max_length) {
                                                    pFVar109->vector[3] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  __3212133D503E3733C58BC9245B27816D0AB019E8F256167D94EE2EF1AA253C17_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (4 < pFVar109->max_length) {
                                                    pFVar109->vector[4] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  __78C1F43AB6F856DFB12C9E73F27EE7883763E8A6A3D27F49A8E89A74DE3DD84A_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (5 < pFVar109->max_length) {
                                                    pFVar109->vector[5] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  _B575398F444AEB797A8E12CEEAD67595A3CCB4B903BE0CB6978BE00431F4FD94_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (6 < pFVar109->max_length) {
                                                    pFVar109->vector[6] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  __69D5B9635C30CE068AB88DFE7AEC46AA236E6BFBE8C95FF0E8D63741A1A12912_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (7 < pFVar109->max_length) {
                                                    pFVar109->vector[7] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    if (pFVar110 == (Face__Enum__Array *)0x0)
                                                    goto code_?;
                                                    if (((1 < pFVar110->max_length) &&
                                                        (pFVar110->vector[1] = Face__Enum_Right,
                                                        2 < pFVar110->max_length)) &&
                                                       (pFVar110->vector[2] = Face__Enum_Back,
                                                       8 < pFVar109->max_length)) {
                                                      pFVar109->vector[8] = pFVar110;
                                                      func_?();
                                                      pFVar110 = (Face__Enum__Array *)
                                                                func_?();
                                                      if (pFVar110 == (Face__Enum__Array *)0x0)
                                                      goto code_?;
                                                      if (((1 < pFVar110->max_length) &&
                                                          (pFVar110->vector[1] = Face__Enum_Back,
                                                          2 < pFVar110->max_length)) &&
                                                         (pFVar110->vector[2] = Face__Enum_Left,
                                                         9 < pFVar109->max_length)) {
                                                        pFVar109->vector[9] = pFVar110;
                                                        func_?();
                                                        pFVar110 = (Face__Enum__Array *)
                                                                  func_?();
                                                        mscorlib.dll::System::Runtime::
                                                        CompilerServices::RuntimeHelpers::
                                                        RuntimeHelpers_InitializeArray_1
                                                                  ((Array *)pFVar110,
                                                                                                                                      
                                                  __12C98A439AD9BDD8E757CC8DE108146D6D2552CA5A534FEEA589561F558525A3_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (10 < pFVar109->max_length) {
                                                    pFVar109->vector[10] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  _A8D5E66148A8596B4CA037E02125BDA105EEBB89FDA286BAB2B89D08F69FC8EA_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (0xb < pFVar109->max_length) {
                                                    pFVar109->vector[0xb] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    if (pFVar110 == (Face__Enum__Array *)0x0)
                                                    goto code_?;
                                                    if (((1 < pFVar110->max_length) &&
                                                        (pFVar110->vector[1] = Face__Enum_Front,
                                                        2 < pFVar110->max_length)) &&
                                                       (pFVar110->vector[2] = Face__Enum_Left,
                                                       0xc < pFVar109->max_length)) {
                                                      pFVar109->vector[0xc] = pFVar110;
                                                      func_?();
                                                      pFVar110 = (Face__Enum__Array *)
                                                                func_?();
                                                      if (pFVar110 == (Face__Enum__Array *)0x0)
                                                      goto code_?;
                                                      if (((1 < pFVar110->max_length) &&
                                                          (pFVar110->vector[1] = Face__Enum_Right,
                                                          2 < pFVar110->max_length)) &&
                                                         (pFVar110->vector[2] = Face__Enum_Front,
                                                         0xd < pFVar109->max_length)) {
                                                        pFVar109->vector[0xd] = pFVar110;
                                                        func_?();
                                                        pFVar110 = (Face__Enum__Array *)
                                                                  func_?();
                                                        mscorlib.dll::System::Runtime::
                                                        CompilerServices::RuntimeHelpers::
                                                        RuntimeHelpers_InitializeArray_1
                                                                  ((Array *)pFVar110,
                                                                                                                                      
                                                  _EB3EA27B21B258CCA651A8DE5834B657D518ABA9AF99B6BEB2C0CCBB27C0C8F5_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (0xe < pFVar109->max_length) {
                                                    pFVar109->vector[0xe] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  __7671F4AC667CD05AE5E6F74DCB7160FE6B34A775A4B2BC985EA5F05EDB5F0E8C_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (0xf < pFVar109->max_length) {
                                                    pFVar109->vector[0xf] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    if (pFVar110 == (Face__Enum__Array *)0x0)
                                                    goto code_?;
                                                    if (((1 < pFVar110->max_length) &&
                                                        (pFVar110->vector[1] = Face__Enum_Right,
                                                        2 < pFVar110->max_length)) &&
                                                       (pFVar110->vector[2] = Face__Enum_Front,
                                                       0x10 < pFVar109->max_length)) {
                                                      pFVar109->vector[0x10] = pFVar110;
                                                      func_?();
                                                      pFVar110 = (Face__Enum__Array *)
                                                                func_?();
                                                      if (pFVar110 == (Face__Enum__Array *)0x0)
                                                      goto code_?;
                                                      if (((1 < pFVar110->max_length) &&
                                                          (pFVar110->vector[1] = Face__Enum_Back,
                                                          2 < pFVar110->max_length)) &&
                                                         (pFVar110->vector[2] = Face__Enum_Right,
                                                         0x11 < pFVar109->max_length)) {
                                                        pFVar109->vector[0x11] = pFVar110;
                                                        func_?();
                                                        pFVar110 = (Face__Enum__Array *)
                                                                  func_?();
                                                        mscorlib.dll::System::Runtime::
                                                        CompilerServices::RuntimeHelpers::
                                                        RuntimeHelpers_InitializeArray_1
                                                                  ((Array *)pFVar110,
                                                                                                                                      
                                                  __974B7612E2388B86C1BC0353AC9B2F65B6957BF64200ACC73E0A7BD063BA7469_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (0x12 < pFVar109->max_length) {
                                                    pFVar109->vector[0x12] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  _EB3EA27B21B258CCA651A8DE5834B657D518ABA9AF99B6BEB2C0CCBB27C0C8F5_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (0x13 < pFVar109->max_length) {
                                                    pFVar109->vector[0x13] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    if (pFVar110 == (Face__Enum__Array *)0x0)
                                                    goto code_?;
                                                    if (((1 < pFVar110->max_length) &&
                                                        (pFVar110->vector[1] = Face__Enum_Back,
                                                        2 < pFVar110->max_length)) &&
                                                       (pFVar110->vector[2] = Face__Enum_Left,
                                                       0x14 < pFVar109->max_length)) {
                                                      pFVar109->vector[0x14] = pFVar110;
                                                      func_?();
                                                      pFVar110 = (Face__Enum__Array *)
                                                                func_?();
                                                      if (pFVar110 == (Face__Enum__Array *)0x0)
                                                      goto code_?;
                                                      if (((1 < pFVar110->max_length) &&
                                                          (pFVar110->vector[1] = Face__Enum_Left,
                                                          2 < pFVar110->max_length)) &&
                                                         (pFVar110->vector[2] = Face__Enum_Front,
                                                         0x15 < pFVar109->max_length)) {
                                                        pFVar109->vector[0x15] = pFVar110;
                                                        func_?();
                                                        pFVar110 = (Face__Enum__Array *)
                                                                  func_?();
                                                        mscorlib.dll::System::Runtime::
                                                        CompilerServices::RuntimeHelpers::
                                                        RuntimeHelpers_InitializeArray_1
                                                                  ((Array *)pFVar110,
                                                                                                                                      
                                                  _BD1586D96349669994A64F043D5272C820092DC8F3A204F4A8BBA71A213370F7_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (0x16 < pFVar109->max_length) {
                                                    pFVar109->vector[0x16] = pFVar110;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  __12C98A439AD9BDD8E757CC8DE108146D6D2552CA5A534FEEA589561F558525A3_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (0x17 < pFVar109->max_length) {
                                                    pFVar109->vector[0x17] = pFVar110;
                                                    func_?();
                                                    TypeInfo__SharedCubeFunctions->static_fields->
                                                    LightTestNormalTargetFaces = pFVar109;
                                                    func_?();
                                                    pFVar110 = (Face__Enum__Array *)func_?()
                                                    ;
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pFVar110,
                                                                                                                              
                                                  __3EA0E73E350002B637E873B7CB7348DD7E1BCE73102F97D2B1FA8693ECC0DAEE_Field
                                                  ,(MethodInfo *)0x0);
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  LightTestNormalSecondaryTargetFaces = pFVar110;
                                                  func_?(&TypeInfo__SharedCubeFunctions->
                                                                   static_fields->
                                                                                                                                      
                                                  LightTestNormalSecondaryTargetFaces,pFVar110);
                                                  pIVar3 = (Int32__Array__Array *)
                                                           func_?(TypeInfo__System__Int32,6
                                                                          );
                                                  pIVar4 = (Int32__Array *)
                                                           func_?(TypeInfo__System__Int32,4
                                                                          );
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            ((Array *)pIVar4,
                                                                                                                          
                                                  __7DE6C05FE260533E58F5F5D7195356F52AA241A405B3EC59D9A7E618A31EB70B_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (pIVar3 == (Int32__Array__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar3->max_length != 0) {
                                                    pIVar3->vector[0] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  _F565169B16BA9172A376C4BBC695B7586ADD01DC1142CDBBDF803D30DC68A148_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (1 < pIVar3->max_length) {
                                                    pIVar3->vector[1] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (2 < pIVar3->max_length) {
                                                    pIVar3->vector[2] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  _A69DBB9813CAFBDB74661959B1EB85075542F30F2CE490C308D06C3AACEAAF42_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (3 < pIVar3->max_length) {
                                                    pIVar3->vector[3] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  __8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (4 < pIVar3->max_length) {
                                                    pIVar3->vector[4] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  __7BCBDCCC340EA4ECBDD35B946E4F1C88E504A39C0708D3155A5C65E1B4183290_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (5 < pIVar3->max_length) {
                                                    pIVar3->vector[5] = pIVar4;
                                                    func_?();
                                                    TypeInfo__SharedCubeFunctions->static_fields->
                                                    LightTestOppositeFaceCorners = pIVar3;
                                                    func_?();
                                                    pIVar3 = (Int32__Array__Array *)
                                                             func_?();
                                                    pIVar4 = (Int32__Array *)
                                                             func_?(TypeInfo__System__Int32
                                                                             ,4);
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  _F565169B16BA9172A376C4BBC695B7586ADD01DC1142CDBBDF803D30DC68A148_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (pIVar3 == (Int32__Array__Array *)0x0)
                                                  goto code_?;
                                                  if (pIVar3->max_length != 0) {
                                                    pIVar3->vector[0] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  __7DE6C05FE260533E58F5F5D7195356F52AA241A405B3EC59D9A7E618A31EB70B_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (1 < pIVar3->max_length) {
                                                    pIVar3->vector[1] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  _A69DBB9813CAFBDB74661959B1EB85075542F30F2CE490C308D06C3AACEAAF42_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (2 < pIVar3->max_length) {
                                                    pIVar3->vector[2] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (3 < pIVar3->max_length) {
                                                    pIVar3->vector[3] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  __7BCBDCCC340EA4ECBDD35B946E4F1C88E504A39C0708D3155A5C65E1B4183290_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (4 < pIVar3->max_length) {
                                                    pIVar3->vector[4] = pIVar4;
                                                    func_?();
                                                    pIVar4 = (Int32__Array *)func_?();
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)pIVar4,
                                                                                                                              
                                                  __8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (5 < pIVar3->max_length) {
                                                    pIVar3->vector[5] = pIVar4;
                                                    func_?();
                                                    TypeInfo__SharedCubeFunctions->static_fields->
                                                    LightTestSameFaceCorners = pIVar3;
                                                    func_?();
                                                    pIVar9 = (IntVector__Array *)func_?();
                                                    uVar111._0_2_ = 0;
                                                    uVar111._2_2_ = 0;
                                                    iVar102 = 0;
                                                    MVWorldObject.dll::MV::WorldObject::IntVector::
                                                    IntVector__ctor_1((IntVector *)&stack0xfffffcec,
                                                                      0,-1,0,(MethodInfo *)0x0);
                                                    if (pIVar9 == (IntVector__Array *)0x0)
                                                    goto code_?;
                                                    if (pIVar9->max_length != 0) {
                                                      pIVar9->vector[0].x = (int16_t)uVar111;
                                                      pIVar9->vector[0].y = SUB42(uVar111,2);
                                                      pIVar9->vector[0].z = iVar102;
                                                      uVar112._0_2_ = 0;
                                                      uVar112._2_2_ = 0;
                                                      iVar102 = 0;
                                                      MVWorldObject.dll::MV::WorldObject::IntVector
                                                      ::IntVector__ctor_1((IntVector *)
                                                                          &stack0xfffffce4,0,1,0,
                                                                          (MethodInfo *)0x0);
                                                      if (1 < pIVar9->max_length) {
                                                        pIVar9->vector[1].x = (int16_t)uVar112;
                                                        pIVar9->vector[1].y = SUB42(uVar112,2);
                                                        pIVar9->vector[1].z = iVar102;
                                                        iVar102 = 0;
                                                        this = (IntVector *)&stack0xfffffcdc;
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        IntVector::IntVector__ctor_1
                                                                  (this,0,0,1,(MethodInfo *)0x0);
                                                        if (2 < pIVar9->max_length) {
                                                          *(IntVector **)(pIVar9->vector + 2) = this
                                                          ;
                                                          pIVar9->vector[2].z = iVar102;
                                                          uVar113._0_2_ = 0;
                                                          uVar113._2_2_ = 0;
                                                          iVar102 = 0;
                                                          MVWorldObject.dll::MV::WorldObject::
                                                          IntVector::IntVector__ctor_1
                                                                    ((IntVector *)&stack0xfffffcd4,0
                                                                     ,0,-1,(MethodInfo *)0x0);
                                                          if (3 < pIVar9->max_length) {
                                                            pIVar9->vector[3].x = (int16_t)uVar113;
                                                            pIVar9->vector[3].y = SUB42(uVar113,2);
                                                            pIVar9->vector[3].z = iVar102;
                                                            uVar114._0_2_ = 0;
                                                            uVar114._2_2_ = 0;
                                                            iVar102 = 0;
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            IntVector::IntVector__ctor_1
                                                                      ((IntVector *)&stack0xfffffccc
                                                                       ,1,0,0,(MethodInfo *)0x0);
                                                            if (4 < pIVar9->max_length) {
                                                              pIVar9->vector[4].x = (int16_t)uVar114;
                                                              pIVar9->vector[4].y = SUB42(uVar114,2);
                                                              pIVar9->vector[4].z = iVar102;
                                                              uVar115._0_2_ = 0;
                                                              uVar115._2_2_ = 0;
                                                              iVar102 = 0;
                                                              MVWorldObject.dll::MV::WorldObject::
                                                              IntVector::IntVector__ctor_1
                                                                        ((IntVector *)
                                                                         &stack0xfffffcc4,-1,0,0,
                                                                         (MethodInfo *)0x0);
                                                              if (5 < pIVar9->max_length) {
                                                                pIVar9->vector[5].x =
                                                                     (int16_t)uVar115;
                                                                pIVar9->vector[5].y =
                                                                     SUB42(uVar115,2);
                                                                pIVar9->vector[5].z = iVar102;
                                                                TypeInfo__SharedCubeFunctions->
                                                                static_fields->
                                                                LightTestInwardsOffset = pIVar9;
                                                                ppIStack_99 = &
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  LightTestInwardsOffset;
                                                  pIStack_96 = pIVar9;
                                                  func_?();
                                                  puStack_98 = (undefined *)0x6;
                                                  pIVar4 = (Int32__Array *)func_?();
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            ((Array *)pIVar4,
                                                                                                                          
                                                  __3086B2DEF3530EA0C41DA25BE54853897C14DAD1F4F971862B51BE6A23E31DB5_Field
                                                  ,(MethodInfo *)0x0);
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  FaceHeightAxis = pIVar4;
                                                  func_?();
                                                  pIVar4 = (Int32__Array *)func_?();
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            ((Array *)pIVar4,
                                                                                                                          
                                                  __0D9366A7866315145DF405E103A928871A65FDCA218CFE82B66F5719CDE799D2_Field
                                                  ,(MethodInfo *)0x0);
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  FaceDirectionScalar = pIVar4;
                                                  func_?();
                                                  return;
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
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar116 = (code *)swi(3);
  (*pcVar116)();
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
  pSVar1 = TypeInfo__SharedCubeFunctions->static_fields;
  sVar2 = (pSVar1->constraint).y;
  __return_storage_ptr__->x = (float)(int)(pSVar1->constraint).x;
  sVar3 = (pSVar1->constraint).z;
  __return_storage_ptr__->y = (float)(int)sVar2;
  __return_storage_ptr__->z = (float)(int)sVar3;
  return __return_storage_ptr__;
}

