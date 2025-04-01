
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
                      ((Vector3 *)&stack0xffffffd0,value,(MethodInfo *)0x0);
  fVar3 = pVVar2->x;
  fVar4 = pVVar2->z;
  fVar5 = pVVar2->x;
  fVar6 = 0.0;
  fVar7 = pVVar2->x;
  fVar8 = pVVar2->y;
  uVar9 = 0;
  fVar10 = fVar4;
  fVar11 = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  fVar11 = fVar5 * fVar5 + fVar6 + fVar11 * fVar11;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  pMVar12 = TypeInfo__System__Math;
  dVar13 = (double)(fVar11 * (fVar8 * fVar8 + fVar7 * fVar7 + fVar10 * fVar10));
  if (dVar13 < 0.0) {
    func_?();
  }
  else {
    dVar13 = SQRT(dVar13);
  }
  if (_UNK_? <= (float)dVar13) {
    if ((pMVar12->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pMVar12);
    }
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar15 = (pVVar14->forwardVector).x;
  uVar16 = (pVVar14->forwardVector).y;
  fVar7 = (pVVar14->forwardVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  v1.y = (float)uVar16;
  v1.x = (float)uVar15;
  v1.z = fVar7;
  v2.y = (float)uVar9;
  v2.x = fVar5;
  v2.z = fVar4;
  fVar8 = MathFunctions::MathFunctions_SignedAngle_1
                     (v1,v2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                      (MethodInfo *)0x0);
  euler.y = p1.z;
  euler.x = p0.y * _UNK_?;
  euler.z = 0.0;
  pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)&p0.y,euler,(MethodInfo *)0x0);
  p0.x = pQVar17->z;
  p0.y = pQVar17->w;
  euler_00.y = fVar3 * _UNK_? * _UNK_?;
  euler_00.x = (float)in_stack_18;
  euler_00.z = 0.0;
  pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)&stack0x00000030,euler_00,(MethodInfo *)0x0);
  fVar3 = pQVar17->y;
  fVar5 = pQVar17->z;
  fVar7 = pQVar17->w;
  fStack19 = (fVar1 * pQVar17->x + p1.x * fVar7 + p1.z * fVar3) - fVar5 * 0.0;
  fStack20 = ((fVar1 * fVar7 - p1.x * pQVar17->x) - fVar3 * 0.0) - p1.z * fVar5;
  fStack21 = fVar1;
  fStack22 = fVar1;
  _fStack00000048 =
       CONCAT44((fVar1 * fVar5 + p1.z * fVar7 + pQVar17->x * 0.0) - p1.x * fVar3,
                (fVar1 * fVar3 + fVar7 * 0.0 + p1.x * fVar5) - p1.z * pQVar17->x);
  fStack23 = fVar1;
  fStack24 = fStack20;
  iVar25 = func_?(TypeInfo__UnityEngine__Vector3,4,fVar8);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  QVar26.y = fStack27;
  QVar26.x = fStack19;
  QVar26.z = (float)iStack28;
  QVar26.w = fStack24;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0x00000034,QVar26,
                       TypeInfo__UnityEngine__Vector3->static_fields->downVector,(MethodInfo *)0x0);
  fStack27 = pVVar2->x;
  iStack28 = (int)pVVar2->y;
  fStack24 = pVVar2->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  rotation_01.y = fStack29;
  rotation_01.x = (float)in_stack_30;
  rotation_01.z = fStack31;
  rotation_01.w = in_stack_32;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0x00000058,rotation_01,
                       TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  fStack33 = pVVar2->x;
  fStack34 = pVVar2->y;
  fStack35 = pVVar2->z;
  in_stack_32 = (fStack35 + in_stack_32) * fVar1;
  _fStack0000006c =
       CONCAT44((fStack34 + fStack31) * fVar1,
                (fStack33 + fStack29) * fVar1);
  if (iVar25 == 0) {
code_?:
    func_?();
  }
  else if (*(int *)(iVar25 + 0xc) != 0) {
    *(undefined8 *)(iVar25 + 0x10) = _fStack0000006c;
    *(float *)(iVar25 + 0x18) = in_stack_32;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = &TypeInfo__UnityEngine__Vector3->static_fields->downVector;
    uVar36 = pVVar2->x;
    uVar37 = pVVar2->y;
    mesh = in_stack_38;
    fVar39 = (float)in_stack_40;
    p0.x = in_stack_41;
    QVar26.x = in_stack_42;
    QVar26 = (Quaternion)CONCAT124(QVar26._0_12_,QVar26.x);
    p0.y = (float)uVar36;
    p0.z = (float)uVar37;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0x0000007c,QVar26,*pVVar2,(MethodInfo *)0x0);
    in_stack_43._0_4_ = pVVar2->x;
    in_stack_43._4_4_ = pVVar2->y;
    in_stack_44 = pVVar2->z;
    if (cRam_? == '\0') {
      fStack22 = 3.3031158e-29;
      fStack21 = 2.8535002e-28;
      func_?();
      cRam_? = '\x01';
    }
    rotation_02.y = fStack29;
    rotation_02.x = (float)in_stack_30;
    rotation_02.z = fStack31;
    rotation_02.w = in_stack_32;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0x00000058,rotation_02,
                         TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                         (MethodInfo *)0x0);
    uVar45 = pVVar2->x;
    uVar46 = pVVar2->y;
    in_stack_32 = (pVVar2->z + fStack35) * fVar1;
    _fStack0000006c =
         CONCAT44(((float)uVar46 + fStack34) * fVar1,((float)uVar45 + fStack33) * fVar1
                 );
    if (1 < *(uint *)(iVar25 + 0xc)) {
      *(undefined8 *)(iVar25 + 0x1c) = _fStack0000006c;
      *(float *)(iVar25 + 0x24) = in_stack_32;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation.y = fStack27;
      rotation.x = fStack19;
      rotation.z = (float)iStack28;
      rotation.w = fStack24;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0x00000034,rotation,
                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0
                          );
      fStack22 = pVVar2->x;
      fStack21 = pVVar2->y;
      fStack23 = pVVar2->z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation_03.y = fStack29;
      rotation_03.x = (float)in_stack_30;
      rotation_03.z = fStack31;
      rotation_03.w = in_stack_32;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0x00000058,rotation_03,
                           TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                           (MethodInfo *)0x0);
      uVar47 = pVVar2->x;
      uVar48 = pVVar2->y;
      in_stack_32 = (pVVar2->z + fStack35) * fVar1;
      _fStack0000006c =
           CONCAT44(((float)uVar48 + fStack34) * fVar1,
                    ((float)uVar47 + fStack33) * fVar1);
      if (2 < *(uint *)(iVar25 + 0xc)) {
        *(undefined8 *)(iVar25 + 0x28) = _fStack0000006c;
        *(float *)(iVar25 + 0x30) = in_stack_32;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation_00.y = fStack27;
        rotation_00.x = fStack19;
        rotation_00.z = (float)iStack28;
        rotation_00.w = fStack24;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0x00000034,rotation_00,
                             TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                             (MethodInfo *)0x0);
        fStack22 = pVVar2->x;
        fStack21 = pVVar2->y;
        fStack23 = pVVar2->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation_04.y = fStack29;
        rotation_04.x = (float)in_stack_30;
        rotation_04.z = fStack31;
        rotation_04.w = in_stack_32;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0x00000058,rotation_04,
                             TypeInfo__UnityEngine__Vector3->static_fields->leftVector,
                             (MethodInfo *)0x0);
        uVar49 = pVVar2->x;
        uVar50 = pVVar2->y;
        in_stack_32 = (pVVar2->z + fStack35) * fVar1;
        _fStack0000006c =
             CONCAT44(((float)uVar50 + fStack34) * fVar1,
                      ((float)uVar49 + fStack33) * fVar1);
        if (3 < *(uint *)(iVar25 + 0xc)) {
          *(undefined8 *)(iVar25 + 0x34) = _fStack0000006c;
          *(float *)(iVar25 + 0x3c) = in_stack_32;
          p0.z = (float)&UNK_?;
          in_stack_18 = (Vector3__Array *)func_?();
          uVar51 = 0;
          pVVar2 = in_stack_18->vector;
          do {
            if (*(uint *)(iVar25 + 0xc) <= uVar51) goto code_?;
            uVar52 = *(undefined8 *)((iVar25 - (int)in_stack_18) + (int)pVVar2);
            in_stack_32 = *(float *)((iVar25 - (int)in_stack_18) + 8 + (int)pVVar2);
            fStack29 = (float)uVar52;
            fStack33 = fStack20 + fStack29;
            fStack31 = (float)((ulonglong)uVar52 >> 0x20);
            fStack34 = fStack22 + fStack31;
            fStack35 = fStack21 + in_stack_32;
            _fStack0000006c = uVar52;
            if (in_stack_18 == (Vector3__Array *)0x0) goto code_?;
            if (in_stack_18->max_length <= uVar51) goto code_?;
            uVar51 = uVar51 + 1;
            pVVar2->x = fStack33;
            pVVar2->y = fStack34;
            pVVar2->z = fStack35;
            pVVar2 = pVVar2 + 1;
          } while ((int)uVar51 < 4);
          pVVar2 = in_stack_18->vector + 4;
          puVar53 = (undefined8 *)(iVar25 + 0x34);
          uVar51 = 3;
          iStack54 = 0;
          while (uVar51 < *(uint *)(iVar25 + 0xc)) {
            uVar52 = *puVar53;
            in_stack_32 = *(float *)(puVar53 + 1);
            fStack29 = (float)uVar52;
            fStack33 = fStack23 + fStack29;
            fStack31 = (float)((ulonglong)uVar52 >> 0x20);
            fStack34 = fStack19 + fStack31;
            fStack35 = fStack27 + in_stack_32;
            _fStack0000006c = uVar52;
            if (in_stack_18->max_length <= iStack54 + 4U) break;
            uVar51 = uVar51 - 1;
            puVar53 = (undefined8 *)((int)puVar53 + -0xc);
            iStack54 = iStack54 + 1;
            pVVar2->x = fStack33;
            pVVar2->y = fStack34;
            pVVar2->z = fStack35;
            pVVar2 = pVVar2 + 1;
            iVar25 = iStack28;
            if (0x7fffffff < uVar51) {
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              p0.z = (float)in_stack_18;
              p0.y = (float)in_stack_38;
              p0.x = (float)&UNK_?;
              SharedCubeFunctions_AddCubeMesh
                        (in_stack_38,in_stack_18,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar55 = (code *)swi(3);
  (*pcVar55)();
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
    func_?(0x8d4c);
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
        key.z = -0x7775;
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
            if (pIVar3->max_length < 0x3076e0b5) goto code_?;
            if (pMVar2 != (Mesh *)0x0) {
              pMVar4 = (Mesh__Class *)pIVar3[-0x6e79c2].klass;
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
                      if (pIVar3->max_length < 0x3076e0b6) goto code_?;
                      if (pVVar7 != (Vector3__Array *)0x0) {
                        pMVar8 = pIVar3[-0x6e79c2].monitor;
                        if ((MonitorData *)pVVar7->max_length <= pMVar8) goto code_?;
                        fVar9 = pVVar7->vector[(int)pMVar8].y;
                        fVar10 = pVVar7->vector[(int)pMVar8].z;
                        if (pVVar1->max_length < 2) goto code_?;
                        pVVar1->vector[1].x = pVVar7->vector[(int)pMVar8].x;
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
                              if (pIVar3->max_length < 0x3076e0b7) goto code_?;
                              if (pVVar7 != (Vector3__Array *)0x0) {
                                pIVar11 = pIVar3[-0x6e79c2].bounds;
                                if (pIVar11 < (Il2CppArrayBounds *)pVVar7->max_length) {
                                  fVar9 = pVVar7->vector[(int)pIVar11].y;
                                  fVar10 = pVVar7->vector[(int)pIVar11].z;
                                  if (2 < pVVar1->max_length) {
                                    pVVar1->vector[2].x = pVVar7->vector[(int)pIVar11].x;
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
  pcVar12 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar12)();
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
    func_?(0x3e3c);
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
                  message = (String *)func_?(0x9800);
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
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  Face__Enum FVar13;
  Vector3__StaticFields *pVVar14;
  code *pcVar15;
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
  bool bVar16;
  byte bVar17;
  byte bVar18;
  Cube *pCVar19;
  Transform *pTVar20;
  undefined8 *puVar21;
  Matrix4x4 *pMVar22;
  Vector3 *pVVar23;
  Vector4 *pVVar24;
  Camera *pCVar25;
  undefined1 (*pauVar26) [12];
  float *pfVar27;
  CubeOutOfBoundState__Enum CVar28;
  byte extraout_CH;
  byte extraout_DH;
  byte bVar29;
  bool bVar30;
  bool bVar31;
  byte in_AF;
  float10 fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  Vector4 VStack_41;
  undefined4 uStack_42;
  undefined1 auStack_43 [12];
  Cube *pCStack_44;
  float fStack_45;
  float fStack_46;
  undefined8 uStack_47;
  float fStack_48;
  Vector3 VStack_49;
  float fStack_50;
  GameObject *pGStack_51;
  float fStack_52;
  float fStack_53;
  float fStack_54;
  float fStack_55;
  
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(0x6964);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((info != (CubePickingInfo *)0x0) && (cmb != (MVCubeModelBase *)0x0)) {
    pCVar19 = MVCubeModelBase::MVCubeModelBase_GetCube
                        (cmb,(info->fields).iLocalPos,(MethodInfo *)0x0);
    pCStack_44 = pCVar19;
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    bVar16 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                       ((CubeBase *)pCStack_44,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar16 != 0) {
      return CubeOutOfBoundState__Enum_WithinBounds;
    }
    pGStack_51 = (cmb->fields)._.gameObject;
    stack0xffffffa8 = (double)CONCAT44((info->fields).pickedFace,auStack_43._8_4_);
    uStack_42 = CubeOutOfBoundState__Enum_NoChange;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(0xda94);
      cRam_? = '\x01';
    }
    switch(pCStack_44) {
    case (Cube *)0x0:
    case (Cube *)0x1:
      if ((pGStack_51 == (GameObject *)0x0) ||
         (pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_51,(MethodInfo *)0x0), pTVar20 == (Transform *)0x0))
      goto code_?;
      pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_49,pTVar20,(MethodInfo *)0x0);
      pGStack_51 = (GameObject *)pVVar23->y;
      break;
    case (Cube *)0x2:
    case (Cube *)0x3:
      if ((pGStack_51 == (GameObject *)0x0) ||
         (pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_51,(MethodInfo *)0x0), pTVar20 == (Transform *)0x0))
      goto code_?;
      pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_49,pTVar20,(MethodInfo *)0x0);
      pGStack_51 = (GameObject *)pVVar23->z;
      break;
    case (Cube *)0x4:
    case (Cube *)0x5:
      if ((pGStack_51 == (GameObject *)0x0) ||
         (pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_51,(MethodInfo *)0x0), pTVar20 == (Transform *)0x0))
      goto code_?;
      pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_49,pTVar20,(MethodInfo *)0x0);
      pGStack_51 = (GameObject *)pVVar23->x;
      break;
    default:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
      pGStack_51 = (GameObject *)0x0;
    }
    puVar21 = (undefined8 *)
              (*(code *)(cmb->klass->vtable).get_Scale.method)
                        (&VStack_49,cmb,(cmb->klass->vtable).set_Scale.methodPtr);
    fStack_55 = *(float *)(puVar21 + 1);
    fStack_53 = (float)*puVar21;
    fStack_54 = (float)((ulonglong)*puVar21 >> 0x20);
    puVar21 = (undefined8 *)
              (*(code *)(cmb->klass->vtable).get_Scale.method)
                        (&fStack_46,(short)cmb,(cmb->klass->vtable).set_Scale.methodPtr);
    fStack_50 = *(float *)(puVar21 + 1);
    VStack_49.y = (float)*puVar21;
    VStack_49.z = (float)((ulonglong)*puVar21 >> 0x20);
    puVar21 = (undefined8 *)
              (*(code *)(cmb->klass->vtable).get_Scale.method)
                        (auStack_43,cmb,(cmb->klass->vtable).set_Scale.methodPtr);
    uStack_47 = *puVar21;
    fStack_48 = *(float *)(puVar21 + 1);
    pTVar20 = (cmb->fields)._.transform;
    pGStack_51 = (GameObject *)
                 (((float)pGStack_51 * _UNK_?) /
                 ((VStack_49.z + fStack_53 + fStack_48) / _UNK_?));
    if (pTVar20 != (Transform *)0x0) {
      pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                          ((Matrix4x4 *)&stack0xffffff10,pTVar20,(MethodInfo *)0x0);
      fStack_52 = pMVar22->m00;
      fStack_53 = pMVar22->m10;
      fStack_54 = pMVar22->m20;
      fStack_55 = pMVar22->m30;
      fVar36 = pMVar22->m01;
      fVar35 = pMVar22->m11;
      fVar39 = pMVar22->m21;
      fVar33 = pMVar22->m31;
      fVar34 = pMVar22->m02;
      fVar37 = pMVar22->m12;
      fVar38 = pMVar22->m22;
      fVar40 = pMVar22->m32;
      VStack_41.x = pMVar22->m03;
      VStack_41.y = pMVar22->m13;
      VStack_41.z = pMVar22->m23;
      VStack_41.w = pMVar22->m33;
      FVar13 = (info->fields).pickedFace;
      pCStack_44 = (Cube *)FVar13;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pVVar23 = Cube::Cube_GetFaceAxis(&VStack_49,(Face__Enum)pCStack_44,(MethodInfo *)0x0);
      uStack_47._0_4_ = pVVar23->x;
      uStack_47._4_4_ = pVVar23->y;
      fStack_48 = pVVar23->z;
      VStack_49.x = (float)uStack_47;
      VStack_49.y = uStack_47._4_4_;
      fStack_50 = 0.0;
      lhs.m10 = fStack_53;
      lhs.m00 = fStack_52;
      lhs.m20 = fStack_54;
      lhs.m30 = fStack_55;
      lhs.m01 = fVar36;
      lhs.m11 = fVar35;
      lhs.m21 = fVar39;
      lhs.m31 = fVar33;
      lhs.m02 = fVar34;
      lhs.m12 = fVar37;
      lhs.m22 = fVar38;
      lhs.m32 = fVar40;
      lhs.m03 = VStack_41.x;
      lhs.m13 = VStack_41.y;
      lhs.m23 = VStack_41.z;
      lhs.m33 = VStack_41.w;
      vector.w = 0.0;
      vector.x = pVVar23->x;
      vector.y = pVVar23->y;
      vector.z = pVVar23->z;
      VStack_49.z = fStack_48;
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                          (&VStack_41,lhs,vector,(MethodInfo *)0x0);
      VStack_41.x = pVVar24->x;
      fVar35 = pVVar24->y;
      fVar39 = pVVar24->z;
      VStack_41.w = pVVar24->w;
      uVar3 = (info->fields).point.x;
      uVar8 = (info->fields).point.y;
      fVar36 = *deltaAccum;
      fVar33 = (float)uVar3 + VStack_41.x * fVar36;
      fStack_53 = (float)uVar8 + fVar35 * fVar36;
      fStack_45 = (info->fields).point.z + fVar39 * fVar36;
      stack0xffffffa8 = (double)CONCAT44(fStack_53,auStack_43._8_4_);
      fStack_52 = VStack_41.x + fVar33;
      uStack_47 = CONCAT44(fStack_53,fVar33);
      fStack_53 = fVar35 + fStack_53;
      fStack_54 = fVar39 + fStack_45;
      VStack_41.y = fVar35;
      VStack_41.z = fVar39;
      fStack_48 = fStack_45;
      VStack_49.y = VStack_41.x;
      VStack_49.z = fVar35;
      fStack_50 = fVar39;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      end.y = fStack_53;
      end.x = fStack_52;
      start.z = fStack_48;
      start.x = (float)uStack_47;
      start.y = uStack_47._4_4_;
      end.z = fStack_54;
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
      pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar4 = (pVVar14->upVector).x;
      uVar9 = (pVVar14->upVector).y;
      fStack_55 = (pVVar14->upVector).z;
      fStack_54 = fStack_55 + fStack_45;
      end_00.y = (float)uVar9 + (float)pCStack_44;
      end_00.x = (float)uVar4 + fVar33;
      start_00.z = fStack_48;
      start_00.x = (float)uStack_47;
      start_00.y = uStack_47._4_4_;
      end_00.z = fStack_54;
      color_00.g = (float)_UNK_?;
      color_00.r = (float)_UNK_?;
      color_00.b = (float)_UNK_?;
      color_00.a = _UNK_?;
      fStack_53 = (float)uVar4;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                (start_00,end_00,color_00,(MethodInfo *)0x0);
      pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      fStack_52 = VStack_41.x + fVar33;
      fStack_53 = fVar35 + (float)pCStack_44;
      fStack_54 = fVar39 + fStack_45;
      if (pCVar25 != (Camera *)0x0) {
        position.y = fStack_53;
        position.x = fStack_52;
        position.z = fStack_54;
        pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            ((Vector3 *)auStack_43,pCVar25,position,(MethodInfo *)0x0);
        uVar5 = pVVar23->x;
        uVar10 = pVVar23->y;
        fStack_55 = pVVar23->z;
        fStack_53 = (float)uVar5;
        fStack_54 = (float)uVar10;
        pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar25 != (Camera *)0x0) {
          position_00.z._0_2_ = SUB42(fStack_48,0);
          position_00.x = (float)uStack_47;
          position_00.y = uStack_47._4_4_;
          position_00.z._2_2_ = (short)((uint)fStack_48 >> 0x10);
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              ((Vector3 *)auStack_43,pCVar25,position_00,(MethodInfo *)0x0);
          uVar6 = pVVar23->x;
          uVar11 = pVVar23->y;
          VStack_41.x = fStack_53 - (float)uVar6;
          VStack_41.y = fStack_54 - (float)uVar11;
          fStack_48 = fStack_55 - pVVar23->z;
          VStack_41.z = 0.0;
          VStack_41.w = 0.0;
          uStack_47 = CONCAT44(VStack_41.y,VStack_41.x);
          fStack_54 = fStack_48;
          fVar32 = (float10)func_?((short)&uStack_47,0);
          stack0xffffffa8 = (double)CONCAT44((float)fVar32,auStack_43._8_4_);
          if (0.0 < (float)fVar32) {
            value.y = VStack_41.y;
            value.x = VStack_41.x;
            value.z = fStack_54;
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)auStack_43,value,(MethodInfo *)0x0);
            uVar7 = pVVar23->x;
            uVar12 = pVVar23->y;
            fStack_55 = pVVar23->z;
            fStack_53 = (float)uVar7;
            fStack_54 = (float)uVar12;
            fVar32 = (float10)func_?();
            *delta = ((mousePositionDelta.y * fStack_54 + mousePositionDelta.x * fStack_53 +
                      mousePositionDelta.z * fStack_55) / (float)fVar32) * _UNK_? + *delta;
          }
          in_AF = 0;
          if ((float)((uint)*delta & _UNK_?) < (float)pGStack_51) {
            *edgeMoved = 0;
            return uStack_42;
          }
          register0x00001200 = (double)(float)pGStack_51;
          fVar32 = (float10)func_?();
          unique0x0000aa00 = (double)fVar32;
          fVar36 = *delta;
          *delta = fVar36 - (float)fVar32;
          *deltaAccum = (fVar36 - (float)fVar32) + *deltaAccum;
          fStack_45 = *delta;
          if ((info->fields).pickedEdge == 0) {
            pTVar20 = (cmb->fields)._.transform;
            if (pTVar20 != (Transform *)0x0) {
              pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_worldToLocalMatrix
                                  ((Matrix4x4 *)&stack0xffffff10,pTVar20,(MethodInfo *)0x0);
              VStack_41.x = pMVar22->m00;
              VStack_41.y = pMVar22->m10;
              VStack_41.z = pMVar22->m20;
              VStack_41.w = pMVar22->m30;
              fVar36 = pMVar22->m01;
              fVar35 = pMVar22->m11;
              fVar39 = pMVar22->m21;
              fVar33 = pMVar22->m31;
              fVar34 = pMVar22->m02;
              fVar37 = pMVar22->m12;
              fVar38 = pMVar22->m22;
              fVar40 = pMVar22->m32;
              auStack_43._0_4_ = pMVar22->m03;
              auStack_43._4_4_ = pMVar22->m13;
              auStack_43._8_4_ = pMVar22->m23;
              pCStack_44 = (Cube *)pMVar22->m33;
              pauVar26 = (undefined1 (*) [12])func_?(&fStack_46,(short)&VStack_49.y,0);
              fStack_50 = 0.0;
              VStack_49.z = *(float *)(*pauVar26 + 8);
              fStack_53 = (float)*(undefined8 *)*pauVar26;
              fStack_54 = (float)((ulonglong)*(undefined8 *)*pauVar26 >> 0x20);
              VStack_49.x = fStack_53;
              VStack_49.y = fStack_54;
              lhs_00.m10 = VStack_41.y;
              lhs_00.m00 = VStack_41.x;
              lhs_00.m20 = VStack_41.z;
              lhs_00.m30 = VStack_41.w;
              lhs_00.m01 = fVar36;
              lhs_00.m11 = fVar35;
              lhs_00.m21 = fVar39;
              lhs_00.m31 = fVar33;
              lhs_00.m02 = fVar34;
              lhs_00.m12 = fVar37;
              lhs_00.m22 = fVar38;
              lhs_00.m32 = fVar40;
              lhs_00.m03 = (float)auStack_43._0_4_;
              lhs_00.m13 = (float)auStack_43._4_4_;
              lhs_00.m23 = (float)auStack_43._8_4_;
              lhs_00.m33 = (float)pCStack_44;
              vector_00.w = 0.0;
              vector_00._0_12_ = *pauVar26;
              fStack_55 = VStack_49.z;
              pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                                  (&VStack_41,lhs_00,vector_00,(MethodInfo *)0x0);
              VStack_49.x = pVVar24->x;
              VStack_49.y = pVVar24->y;
              VStack_49.z = pVVar24->z;
              fStack_50 = pVVar24->w;
              pfVar27 = (float *)func_?(&VStack_41,&VStack_49,0);
              fStack_52 = *pfVar27;
              fStack_53 = pfVar27[1];
              fStack_54 = pfVar27[2];
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              axis_00.y = fStack_53;
              axis_00.x = fStack_52;
              axis_00.z = fStack_54;
              Cube::Cube_MoveFace(info,fStack_45,axis_00,&uStack_42,(MethodInfo *)0x0);
              *editCubeChange = EditCubeChange__Enum_FaceMoved;
              goto code_?;
            }
          }
          else {
            pTVar20 = (cmb->fields)._.transform;
            if (edgeIndex0 == 0 && edgeIndex1 == 0) {
              if (pTVar20 != (Transform *)0x0) {
                pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_worldToLocalMatrix
                                    ((Matrix4x4 *)&stack0xffffff10,pTVar20,(MethodInfo *)0x0);
                VStack_41.x = pMVar22->m00;
                VStack_41.y = pMVar22->m10;
                VStack_41.z = pMVar22->m20;
                VStack_41.w = pMVar22->m30;
                fVar36 = pMVar22->m01;
                fVar35 = pMVar22->m11;
                fVar39 = pMVar22->m21;
                fVar33 = pMVar22->m31;
                fVar34 = pMVar22->m02;
                fVar37 = pMVar22->m12;
                fVar38 = pMVar22->m22;
                fVar40 = pMVar22->m32;
                auStack_43._0_4_ = pMVar22->m03;
                auStack_43._4_4_ = pMVar22->m13;
                auStack_43._8_4_ = pMVar22->m23;
                pCStack_44 = (Cube *)pMVar22->m33;
                pauVar26 = (undefined1 (*) [12])func_?(&fStack_46,(short)&VStack_49.y,0);
                fStack_50 = 0.0;
                VStack_49.z = *(float *)(*pauVar26 + 8);
                fStack_53 = (float)*(undefined8 *)*pauVar26;
                fStack_54 = (float)((ulonglong)*(undefined8 *)*pauVar26 >> 0x20);
                VStack_49.x = fStack_53;
                VStack_49.y = fStack_54;
                lhs_01.m10 = VStack_41.y;
                lhs_01.m00 = VStack_41.x;
                lhs_01.m20 = VStack_41.z;
                lhs_01.m30 = VStack_41.w;
                lhs_01.m01 = fVar36;
                lhs_01.m11 = fVar35;
                lhs_01.m21 = fVar39;
                lhs_01.m31 = fVar33;
                lhs_01.m02 = fVar34;
                lhs_01.m12 = fVar37;
                lhs_01.m22 = fVar38;
                lhs_01.m32 = fVar40;
                lhs_01.m03 = (float)auStack_43._0_4_;
                lhs_01.m13 = (float)auStack_43._4_4_;
                lhs_01.m23 = (float)auStack_43._8_4_;
                lhs_01.m33 = (float)pCStack_44;
                vector_01.w = 0.0;
                vector_01._0_12_ = *pauVar26;
                fStack_55 = VStack_49.z;
                pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                          Matrix4x4_op_Multiply_1(&VStack_41,lhs_01,vector_01,(MethodInfo *)0x0);
                VStack_49.x = pVVar24->x;
                VStack_49.y = pVVar24->y;
                VStack_49.z = pVVar24->z;
                fStack_50 = pVVar24->w;
                pfVar27 = (float *)func_?(&VStack_41,&VStack_49,0);
                fStack_52 = *pfVar27;
                fStack_53 = pfVar27[1];
                fStack_54 = pfVar27[2];
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                axis_01.y = fStack_53;
                axis_01.x = fStack_52;
                axis_01.z = fStack_54;
                Cube::Cube_MoveEdge(info,fStack_45,axis_01,&uStack_42,(MethodInfo *)0x0);
                *editCubeChange = EditCubeChange__Enum_EdgeMoved;
code_?:
                *delta = 0.0;
                *edgeMoved = 1;
                return uStack_42;
              }
            }
            else if (pTVar20 != (Transform *)0x0) {
              pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_worldToLocalMatrix
                                  ((Matrix4x4 *)&stack0xffffff10,pTVar20,(MethodInfo *)0x0);
              VStack_41.x = pMVar22->m00;
              VStack_41.y = pMVar22->m10;
              VStack_41.z = pMVar22->m20;
              VStack_41.w = pMVar22->m30;
              fVar36 = pMVar22->m01;
              fVar35 = pMVar22->m11;
              fVar39 = pMVar22->m21;
              fVar33 = pMVar22->m31;
              fVar34 = pMVar22->m02;
              fVar37 = pMVar22->m12;
              fVar38 = pMVar22->m22;
              fVar40 = pMVar22->m32;
              fStack_46 = pMVar22->m03;
              uStack_47._0_4_ = pMVar22->m13;
              uStack_47._4_4_ = pMVar22->m23;
              fStack_48 = pMVar22->m33;
              pauVar26 = (undefined1 (*) [12])func_?(&fStack_52,(short)&VStack_49.y,0);
              fStack_50 = *(float *)(*pauVar26 + 8);
              VStack_49.y = (float)*(undefined8 *)*pauVar26;
              VStack_49.z = (float)((ulonglong)*(undefined8 *)*pauVar26 >> 0x20);
              fStack_52 = VStack_49.y;
              fStack_53 = VStack_49.z;
              fStack_55 = 0.0;
              lhs_02.m10 = VStack_41.y;
              lhs_02.m00 = VStack_41.x;
              lhs_02.m20 = VStack_41.z;
              lhs_02.m30 = VStack_41.w;
              lhs_02.m01 = fVar36;
              lhs_02.m11 = fVar35;
              lhs_02.m21 = fVar39;
              lhs_02.m31 = fVar33;
              lhs_02.m02 = fVar34;
              lhs_02.m12 = fVar37;
              lhs_02.m22 = fVar38;
              lhs_02.m32 = fVar40;
              lhs_02.m03 = fStack_46;
              lhs_02.m13 = (float)uStack_47;
              lhs_02.m23 = uStack_47._4_4_;
              lhs_02.m33 = fStack_48;
              vector_02.w = 0.0;
              vector_02._0_12_ = *pauVar26;
              fStack_54 = fStack_50;
              pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                                  (&VStack_41,lhs_02,vector_02,(MethodInfo *)0x0);
              VStack_49.x = pVVar24->x;
              VStack_49.y = pVVar24->y;
              VStack_49.z = pVVar24->z;
              fStack_50 = pVVar24->w;
              pfVar27 = (float *)func_?(&VStack_41,&VStack_49,0);
              VStack_49.x = *pfVar27;
              VStack_49.y = pfVar27[1];
              VStack_49.z = pfVar27[2];
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              axis.y = VStack_49.y;
              axis.x = VStack_49.x;
              axis.z = VStack_49.z;
              Cube::Cube_MoveVertex
                        (info,fStack_45,axis,edgeIndex0,edgeIndex1,&uStack_42,(MethodInfo *)0x0);
              *editCubeChange = EditCubeChange__Enum_VertexMoved;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  bVar29 = 0;
  bVar17 = func_?();
  pbVar1 = (byte *)((int)&info[-0x171ffb7].fields.point.z + 3);
  bVar18 = *pbVar1;
  bVar2 = *pbVar1;
  *pbVar1 = bVar2 + extraout_CH + bVar29;
  bVar31 = 0x99 < bVar17 || (CARRY1(bVar18,extraout_CH) || CARRY1(bVar2 + extraout_CH,bVar29));
  bVar18 = bVar17 + (9 < (bVar17 & 0xf) | in_AF) * '\x06' + bVar31 * '`';
  pbVar1 = (byte *)((int)&(info->fields).point.x + (int)&stack0xfffffff0 * 4 + 3);
  bVar30 = CARRY1(*pbVar1,bVar18) || CARRY1(*pbVar1 + bVar18,bVar31);
  *pbVar1 = *pbVar1 + bVar18 + bVar31;
  pbVar1 = (byte *)((int)&(info->fields).point.x + (int)&stack0xfffffff0 * 4 + 3);
  bVar31 = CARRY1(*pbVar1,bVar18) || CARRY1(*pbVar1 + bVar18,bVar30);
  *pbVar1 = *pbVar1 + bVar18 + bVar30;
  uStack_42 = CONCAT13(uStack_42._3_1_ + extraout_DH + bVar31 + extraout_DH +
                       (0x99 < bVar18 ||
                       (CARRY1(uStack_42._3_1_,extraout_DH) ||
                       CARRY1(uStack_42._3_1_ + extraout_DH,bVar31))),(undefined3)uStack_42);
  pcVar15 = (code *)swi(3);
  CVar28 = (*pcVar15)();
  return CVar28;
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
  if (cRam_? == '\0') {
    _puStack_1c = CONCAT44(&UNK_?,puStack_1);
    func_?();
    _puStack_1c = 0x11b4da941027b983;
    func_?();
    cRam_? = '\x01';
  }
  switch(face) {
  case Face__Enum_Top:
  case Face__Enum_Bottom:
    if (gameObject != (GameObject *)0x0) {
      _puStack_1c = CONCAT44(gameObject,&UNK_?);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        _puStack_1c = CONCAT44(&UNK_?,puStack_1);
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
        return pVVar3->y;
      }
    }
    break;
  case Face__Enum_Front:
  case Face__Enum_Back:
    if (gameObject != (GameObject *)0x0) {
      _puStack_1c = CONCAT44(gameObject,&UNK_?);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        _puStack_1c = CONCAT44(&UNK_?,puStack_1);
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
        return pVVar3->z;
      }
    }
    break;
  case Face__Enum_Left:
  case Face__Enum_Right:
    if (gameObject != (GameObject *)0x0) {
      _puStack_1c = CONCAT44(gameObject,&UNK_?);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        _puStack_1c = CONCAT44(&UNK_?,puStack_1);
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
        return pVVar3->x;
      }
    }
    break;
  default:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      _puStack_1c = CONCAT44(&UNK_?,puStack_1);
      func_?();
    }
    _puStack_1c = CONCAT44(StringLiteral_No_face,&UNK_?);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    _puStack_1c = CONCAT44(&UNK_?,puStack_1);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
    return 0.0;
  }
  bVar4 = 0;
  func_?();
  in_AF = 9 < (bRam_? & 0xf) | in_AF;
  bVar4 = 0x99 < bRam_? | bVar4;
  bVar5 = bRam_? + in_AF * '\x06' + bVar4 * '`';
  pcVar6 = (char *)(extraout_EDX + unaff_EDI * 4);
  *pcVar6 = *pcVar6 + bVar5 + (9 < (bVar5 & 0xf) | in_AF) * '\x06' +
                      (0x99 < bVar5 ||
                      (CARRY1(extraout_AH,(byte)extraout_EDX) ||
                      CARRY1(extraout_AH + (byte)extraout_EDX,bVar4))) * 'a';
  in((short)extraout_EDX);
  iVar7 = 0;
  fStack_8 = 0.0;
  if (gameObject != (GameObject *)0x0) {
    while (fVar9 = fStack_8, fVar10 = fStack_8,
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (gameObject,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         (&VStack_11,pTVar2,(MethodInfo *)0x0);
      puStack_1 = (undefined *)pVVar3->x;
      unique0x0000a404 = pVVar3->y;
      if (iVar7 == 0) {
        fStack_8 = fVar10 + (float)puStack_1;
      }
      else {
        if (iVar7 != 1) {
          if (iVar7 == 2) {
            return (fVar9 + pVVar3->z) / _UNK_?;
          }
          goto code_?;
        }
        fStack_8 = fStack_8 + (float)unique0x0000a404;
      }
      iVar7 = iVar7 + 1;
    }
  }
  func_?();
code_?:
  uVar12 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this = (IndexOutOfRangeException *)func_?(uVar12);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this,message,method_00);
  uVar12 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  func_?(this,uVar12);
  pcVar13 = (code *)swi(3);
  fVar14 = (float10)(*pcVar13)();
  return (float)fVar14;
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
    func_?(&::_3086B2DEF3530EA0C41DA25BE54853897C14DAD1F4F971862B51BE6A23E31DB5_Field);
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
  pSVar1 = TypeInfo__SharedCubeFunctions;
  sVar2 = (TypeInfo__SharedCubeFunctions->static_fields->constraint).y;
  __return_storage_ptr__->x =
       (float)(int)(TypeInfo__SharedCubeFunctions->static_fields->constraint).x;
  sVar3 = (pSVar1->static_fields->constraint).z;
  __return_storage_ptr__->y = (float)(int)sVar2;
  __return_storage_ptr__->z = (float)(int)sVar3;
  return __return_storage_ptr__;
}

