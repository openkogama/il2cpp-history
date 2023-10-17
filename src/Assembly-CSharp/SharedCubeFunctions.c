
/* Void AddCubeLine(Mesh, Vector3, Vector3, Single) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
               (Mesh *mesh,Vector3 p0,Vector3 p1,float diagonalWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  diagonalWidth = diagonalWidth * _UNK_?;
  puVar1 = (undefined8 *)func_?(&stack0xffffffd0,&stack0xffffffc0,0);
  fVar2 = *(float *)(puVar1 + 1);
  fVar3 = (float)*puVar1;
  fVar4 = (float)*puVar1;
  fVar5 = 0.0;
  uVar6 = 0;
  fVar7 = (float)*puVar1;
  fVar8 = (float)((ulonglong)*puVar1 >> 0x20);
  fVar9 = fVar2;
  fVar10 = fVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  fVar10 = fVar4 * fVar4 + fVar5 + fVar10 * fVar10;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  pMVar11 = TypeInfo__System__Math;
  dVar12 = (double)(fVar10 * (fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9));
  if (dVar12 < 0.0) {
    func_?();
  }
  else {
    dVar12 = SQRT(dVar12);
  }
  if (_UNK_? <= (float)dVar12) {
    if ((pMVar11->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pMVar11);
    }
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar14 = (pVVar13->forwardVector).x;
  uVar15 = (pVVar13->forwardVector).y;
  fVar9 = (pVVar13->forwardVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  v2.y = (float)uVar6;
  v2.x = fVar4;
  v1.y = (float)uVar15;
  v1.x = (float)uVar14;
  v1.z = fVar9;
  v2.z = fVar2;
  fVar7 = MathFunctions::MathFunctions_SignedAngle_1
                     (v1,v2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                      (MethodInfo *)0x0);
  euler.y = p0.x;
  euler.x = in_stack_16 * _UNK_?;
  euler.z = 0.0;
  pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)&stack0xfffffff8,euler,(MethodInfo *)0x0);
  p1.x = pQVar17->z;
  p1.y = pQVar17->w;
  euler_00.y = fVar3 * _UNK_? * _UNK_?;
  euler_00.x = p1.z;
  euler_00.z = 0.0;
  pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)&p1.z,euler_00,(MethodInfo *)0x0);
  fVar2 = pQVar17->y;
  fVar9 = pQVar17->z;
  fVar10 = pQVar17->w;
  fStack18 =
       (fVar10 * diagonalWidth + fStack19 * pQVar17->x + fStack20 * fVar2) -
       fVar9 * (float)method;
  _fStack00000034 =
       CONCAT44((fVar10 * fStack20 + fStack19 * fVar9 + (float)method * pQVar17->x) -
                fVar2 * diagonalWidth,
                (fVar10 * (float)method + fStack19 * fVar2 + fVar9 * diagonalWidth) -
                fStack20 * pQVar17->x);
  fStack21 =
       ((fStack19 * fVar10 - diagonalWidth * pQVar17->x) - (float)method * fVar2) -
       fStack20 * fVar9;
  p1.x = fStack19;
  p1.y = fStack19;
  p1.z = fStack19;
  iVar22 = func_?(TypeInfo__UnityEngine__Vector3,4,fVar7);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = fStack23;
  rotation.x = fStack18;
  rotation.z = (float)iStack24;
  rotation.w = fStack21;
  pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&diagonalWidth,rotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->downVector,(MethodInfo *)0x0);
  fStack23 = pVVar25->x;
  iStack24 = (int)pVVar25->y;
  fStack21 = pVVar25->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  rotation_02.y = fStack26;
  rotation_02.x = in_stack_27;
  rotation_02.z = fStack28;
  rotation_02.w = in_stack_29;
  pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0x00000044,rotation_02,
                       TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  fStack30 = pVVar25->x;
  fStack31 = pVVar25->y;
  in_stack_27 = pVVar25->z;
  in_stack_29 = (in_stack_27 + in_stack_29) * diagonalWidth;
  _fStack00000058 =
       CONCAT44((fStack31 + fStack28) * diagonalWidth,
                (fStack30 + fStack26) * diagonalWidth);
  if (iVar22 == 0) {
code_?:
    func_?();
  }
  else if (*(int *)(iVar22 + 0xc) != 0) {
    *(undefined8 *)(iVar22 + 0x10) = _fStack00000058;
    *(float *)(iVar22 + 0x18) = in_stack_29;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation_06.y = (float)in_stack_32;
    rotation_06.x = in_stack_33;
    rotation_06.z = (float)in_stack_34;
    rotation_06.w = in_stack_35;
    pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0x00000068,rotation_06,
                         TypeInfo__UnityEngine__Vector3->static_fields->downVector,(MethodInfo *)0x0
                        );
    in_stack_36._0_4_ = pVVar25->x;
    in_stack_36._4_4_ = pVVar25->y;
    in_stack_33 = pVVar25->z;
    if (cRam_? == '\0') {
      _fStack00000028 = CONCAT44(fStack19,&TypeInfo__UnityEngine__Vector3);
      method = (MethodInfo *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    rotation_03.y = fStack26;
    rotation_03.x = in_stack_27;
    rotation_03.z = fStack28;
    rotation_03.w = in_stack_29;
    pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0x00000044,rotation_03,
                         TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                         (MethodInfo *)0x0);
    uVar37 = pVVar25->x;
    uVar38 = pVVar25->y;
    in_stack_29 = (pVVar25->z + in_stack_27) * diagonalWidth;
    _fStack00000058 =
         CONCAT44(((float)uVar38 + fStack31) * diagonalWidth,
                  ((float)uVar37 + fStack30) * diagonalWidth);
    if (1 < *(uint *)(iVar22 + 0xc)) {
      *(undefined8 *)(iVar22 + 0x1c) = _fStack00000058;
      *(float *)(iVar22 + 0x24) = in_stack_29;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation_00.y = fStack23;
      rotation_00.x = fStack18;
      rotation_00.z = (float)iStack24;
      rotation_00.w = fStack21;
      pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&diagonalWidth,rotation_00,
                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0
                          );
      fStack20 = pVVar25->x;
      fStack19 = pVVar25->y;
      fStack18 = pVVar25->z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation_04.y = fStack26;
      rotation_04.x = in_stack_27;
      rotation_04.z = fStack28;
      rotation_04.w = in_stack_29;
      pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0x00000044,rotation_04,
                           TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                           (MethodInfo *)0x0);
      uVar39 = pVVar25->x;
      uVar40 = pVVar25->y;
      in_stack_29 = (pVVar25->z + in_stack_27) * diagonalWidth;
      _fStack00000058 =
           CONCAT44(((float)uVar40 + fStack31) * diagonalWidth,
                    ((float)uVar39 + fStack30) * diagonalWidth);
      if (2 < *(uint *)(iVar22 + 0xc)) {
        *(undefined8 *)(iVar22 + 0x28) = _fStack00000058;
        *(float *)(iVar22 + 0x30) = in_stack_29;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation_01.y = fStack23;
        rotation_01.x = fStack18;
        rotation_01.z = (float)iStack24;
        rotation_01.w = fStack21;
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&diagonalWidth,rotation_01,
                             TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                             (MethodInfo *)0x0);
        fStack20 = pVVar25->x;
        fStack19 = pVVar25->y;
        fStack18 = pVVar25->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation_05.y = fStack26;
        rotation_05.x = in_stack_27;
        rotation_05.z = fStack28;
        rotation_05.w = in_stack_29;
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0x00000044,rotation_05,
                             TypeInfo__UnityEngine__Vector3->static_fields->leftVector,
                             (MethodInfo *)0x0);
        uVar41 = pVVar25->x;
        uVar42 = pVVar25->y;
        in_stack_29 = (pVVar25->z + in_stack_27) * diagonalWidth;
        _fStack00000058 =
             CONCAT44(((float)uVar42 + fStack31) * diagonalWidth,
                      ((float)uVar41 + fStack30) * diagonalWidth);
        if (3 < *(uint *)(iVar22 + 0xc)) {
          *(undefined8 *)(iVar22 + 0x34) = _fStack00000058;
          *(float *)(iVar22 + 0x3c) = in_stack_29;
          p1.z = (float)func_?();
          uVar43 = 0;
          p1.y = (float)(iVar22 - (int)p1.z);
          puVar1 = (undefined8 *)((int)p1.z + 0x10);
          do {
            if (*(uint *)(iVar22 + 0xc) <= uVar43) goto code_?;
            uVar44 = *(undefined8 *)((int)p1.y + (int)puVar1);
            in_stack_29 = *(float *)((int)p1.y + 8 + (int)puVar1);
            fStack26 = (float)uVar44;
            fStack28 = (float)((ulonglong)uVar44 >> 0x20);
            _fStack0000004c =
                 CONCAT44(fStack28 + (float)method,fStack26 + diagonalWidth);
            in_stack_27 = in_stack_29 + fStack20;
            _fStack00000058 = uVar44;
            if (p1.z == 0.0) goto code_?;
            if (*(uint *)((int)p1.z + 0xc) <= uVar43) goto code_?;
            uVar43 = uVar43 + 1;
            *puVar1 = _fStack0000004c;
            *(float *)(puVar1 + 1) = in_stack_27;
            puVar1 = (undefined8 *)((int)puVar1 + 0xc);
          } while ((int)uVar43 < 4);
          puVar1 = (undefined8 *)((int)p1.z + 0x40);
          puVar45 = (undefined8 *)(iVar22 + 0x34);
          uVar43 = 3;
          p1.y = 0.0;
          while (uVar43 < *(uint *)(iVar22 + 0xc)) {
            uVar44 = *puVar45;
            in_stack_29 = *(float *)(puVar45 + 1);
            fStack26 = (float)uVar44;
            fStack28 = (float)((ulonglong)uVar44 >> 0x20);
            _fStack0000004c =
                 CONCAT44(fStack28 + fStack18,fStack26 + fStack19);
            in_stack_27 = in_stack_29 + fStack23;
            _fStack00000058 = uVar44;
            if (*(uint *)((int)p1.z + 0xc) <= (int)p1.y + 4U) break;
            uVar43 = uVar43 - 1;
            puVar45 = (undefined8 *)((int)puVar45 + -0xc);
            p1.y = (float)((int)p1.y + 1);
            *puVar1 = _fStack0000004c;
            *(float *)(puVar1 + 1) = in_stack_27;
            puVar1 = (undefined8 *)((int)puVar1 + 0xc);
            iVar22 = iStack24;
            if (0x7fffffff < uVar43) {
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              SharedCubeFunctions_AddCubeMesh
                        ((Mesh *)0x0,(Vector3__Array *)p1.z,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar46 = (code *)swi(3);
  (*pcVar46)();
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
      this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
      if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
    }
    else {
      collection = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                             (mesh,(MethodInfo *)0x0);
      this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
      if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                      collection,
                 MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                );
    }
    collection_00 =
         UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv(mesh,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         collection_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                );
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                         (mesh,(MethodInfo *)0x0);
      this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  (this_01,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           pVVar2,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        iVar3 = (this_01->fields)._size;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        pVVar2 = SharedCubeFunctions_GetVertices_1(corners,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
                  (this_01,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           pVVar2,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        iStack_4 = 0;
        iVar3 = iVar3 + 2;
        do {
          if (insideOut == 0) {
            if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) break;
            func_?(this,iVar3 + -2,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            func_?(this,iVar3 + 1,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            func_?(this,iVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_
                           );
            func_?(this,iVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_
                           );
            func_?(this,iVar3 + -1,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            iVar5 = iVar3 + -2;
          }
          else {
            if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) break;
            func_?(this,iVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_
                           );
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
            pUVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                     UnitySynchronizationContext+WorkRequest]::
                     List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                               (this_01,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                               );
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                      (mesh,(Vector3__Array *)pUVar6,(MethodInfo *)0x0);
            pUVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                     UnitySynchronizationContext+WorkRequest]::
                     List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                               (this_00,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                               );
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                      (mesh,(Vector2__Array *)pUVar6,(MethodInfo *)0x0);
            pUVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                     UnitySynchronizationContext+WorkRequest]::
                     List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                               (this,MethodInfo__System__Collections__Generic__List<int>__ToArray__)
            ;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                      (mesh,(Int32__Array *)pUVar6,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                      (mesh,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                      (mesh,(MethodInfo *)0x0);
            return;
          }
        } while( true );
      }
    }
  }
code_?:
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
    while ((uStack_11 < corners->max_length && (VVar3 = *pVVar1, uStack_12 < corners->max_length))) {
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
    func_?(0x9148);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>
                          );
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__Dictionary__
              );
    if (bp != (BytePacker *)0x0) {
      iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (bp,(MethodInfo *)0x0);
      iStack_3 = 0;
      if (0 < iVar2) {
        do {
          uVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                            (bp,(MethodInfo *)0x0);
          uVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                            (bp,(MethodInfo *)0x0);
          uVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                            (bp,(MethodInfo *)0x0);
          uVar7 = 0;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    ((IntVector *)&stack0xffffffe0,(uint)uVar4,(uint)uVar5,(uint)uVar6,
                     (MethodInfo *)0x0);
          byteFlags = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                                (bp,(MethodInfo *)0x0);
          this = (Cube *)func_?();
          if (this == (Cube *)0x0) goto code_?;
          Cube::Cube__ctor_1(this,bp,byteFlags,(MethodInfo *)0x0);
          key.z = 0;
          key.x = (short)uVar7;
          key.y = (short)(uVar7 >> 0x10);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System
          ::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__set_Item
                    ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,key,
                     (Object *)this,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__set_Item_MV__WorldObject__IntVector__Cube_
                    );
          iStack_3 = iStack_3 + 1;
        } while (iStack_3 < iVar2);
      }
      return pDVar1;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pDVar1 = (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)(*pcVar8)();
  return pDVar1;
}


/* IntVector CubePosToChunk(IntVector, Int32) */

IntVector Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IntVector cubePos,int32_t chunkSize,MethodInfo *method)

{
  *(undefined4 *)cubePos._0_4_ = 0;
  *(undefined2 *)(cubePos._0_4_ + 4) = 0;
  iVar1 = (int)method / 2;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)cubePos._0_4_,CONCAT22(in_stack_2,cubePos.z),
             (uint)in_stack_2,chunkSize,(MethodInfo *)0x0);
  sVar3 = *(short *)cubePos._0_4_;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar4 = (double)(((float)(int)sVar3 + (float)iVar1) / (float)(int)method);
  in_stack_2 = (ushort)((ulonglong)dVar4 >> 0x10);
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
  in_stack_2 = (ushort)((ulonglong)dVar4 >> 0x10);
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
  in_stack_2 = (ushort)((ulonglong)dVar4 >> 0x10);
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
  puStack_4 = &stack0xfffffecc;
  puVar5 = &stack0xfffffecc;
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
  uStack_6 = 0;
  fStack_7 = 0.0;
  BStack_8.m_Extents.y = 0.0;
  BStack_8.m_Extents.z = 0.0;
  BStack_9.m_Extents.y = 0.0;
  BStack_9.m_Extents.z = 0.0;
  iStack_10 = 0;
  *(undefined4 *)__return_storage_ptr__ = 0;
  (__return_storage_ptr__->value).m_Center.x = 0.0;
  (__return_storage_ptr__->value).m_Center.y = 0.0;
  (__return_storage_ptr__->value).m_Center.z = 0.0;
  (__return_storage_ptr__->value).m_Extents.x = 0.0;
  (__return_storage_ptr__->value).m_Extents.y = 0.0;
  (__return_storage_ptr__->value).m_Extents.z = 0.0;
  uStack_11 = 0;
  fStack_12 = 0.0;
  fStack_13 = 0.0;
  fStack_14 = 0.0;
  BStack_8.m_Center.x = 0.0;
  BStack_8.m_Center.y = 0.0;
  BStack_8.m_Center.z = 0.0;
  BStack_8.m_Extents.x = 0.0;
  BStack_9.m_Center.x = 0.0;
  BStack_9.m_Center.y = 0.0;
  BStack_9.m_Center.z = 0.0;
  BStack_9.m_Extents.x = 0.0;
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
    bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar15 != 0) {
      if (this == (Renderer *)0x0) goto code_?;
      bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                         (this,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        pBVar16 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                            ((Bounds *)&stack0xfffffed8,this,(MethodInfo *)0x0);
        uVar17 = (pBVar16->m_Extents).z;
        uVar18 = (pBVar16->m_Center).x;
        uVar19 = (pBVar16->m_Center).y;
        uVar20 = (pBVar16->m_Center).z;
        value.m_Center.z = (float)uVar20;
        value.m_Center.y = (float)uVar19;
        value.m_Center.x = (float)uVar18;
        uVar21 = (pBVar16->m_Extents).x;
        uVar22 = (pBVar16->m_Extents).y;
        value.m_Extents.y = (float)uVar22;
        value.m_Extents.x = (float)uVar21;
        value.m_Extents.z = (float)uVar17;
        mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::Nullable_1_UnityEngine_Bounds___ctor
                  (__return_storage_ptr__,value,
                   MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_)
        ;
      }
    }
    pIStack_23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                           (transform,(MethodInfo *)0x0);
    piStack_24 = &iStack_10;
    ppIStack_25 = &pIStack_23;
    uStack_26 = 0;
    uStack_1 = 1;
    while (pIStack_23 != (IEnumerator *)0x0) {
      cVar27 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_23);
      if (cVar27 == '\0') {
        uStack_1 = 0xffffffff;
        iStack_10 = func_?(pIStack_23,TypeInfo__System__IDisposable);
        if (iStack_10 == 0) {
          *unaff_FS_OFFSET = uStack_3;
          return __return_storage_ptr__;
        }
        func_?(0,TypeInfo__System__IDisposable,iStack_10);
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      pIStack_28 = pIStack_23;
      if (pIStack_23 == (IEnumerator *)0x0) break;
      pIVar29 = pIStack_23->klass;
      uVar30 = 0;
      uStack_31 = 0;
      uVar32 = (pIVar29->_1).interface_offsets_count;
      uStack_33 = (ulonglong)CONCAT24(uVar32,(undefined4)uStack_33);
      if (uVar32 != 0) {
        do {
          if (pIVar29->interfaceOffsets[uVar30].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar34 = &(pIVar29->vtable).get_Current + pIVar29->interfaceOffsets[uVar30].offset;
            goto code_?;
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar32);
      }
      pVVar34 = (VirtualInvokeData *)
                func_?(pIStack_23,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      transform_00 = (Transform *)(*pVVar34->methodPtr)(pIStack_28,pVVar34->method);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      if (transform_00 == (Transform *)0x0) {
        transform_00 = (Transform *)0x0;
      }
      else if (((transform_00->klass->_1).typeHierarchyDepth <
                (TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth) ||
              ((transform_00->klass->_1).typeHierarchy
               [(TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth - 1] !=
               (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
        func_?(transform_00,TypeInfo__UnityEngine__Transform);
        break;
      }
      pNVar35 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                          ((Nullable_1_UnityEngine_Bounds_ *)&pMStack_36,transform_00,
                           (MethodInfo *)0x0);
      uStack_11 = *(undefined4 *)pNVar35;
      fStack_12 = (pNVar35->value).m_Center.x;
      fStack_13 = (pNVar35->value).m_Center.y;
      fStack_14 = (pNVar35->value).m_Center.z;
      uStack_6._0_4_ = (pNVar35->value).m_Extents.x;
      uStack_6._4_4_ = (pNVar35->value).m_Extents.y;
      fStack_7 = (pNVar35->value).m_Extents.z;
      if (__return_storage_ptr__->hasValue == 0) {
        uVar37 = *(undefined3 *)&pNVar35->field_0x1;
        fVar38 = (pNVar35->value).m_Center.x;
        fVar39 = (pNVar35->value).m_Center.y;
        fVar40 = (pNVar35->value).m_Center.z;
        fVar41 = (pNVar35->value).m_Extents.z;
        fVar42 = (pNVar35->value).m_Extents.x;
        fVar43 = (pNVar35->value).m_Extents.y;
        __return_storage_ptr__->hasValue = pNVar35->hasValue;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar37;
        (__return_storage_ptr__->value).m_Center.x = fVar38;
        (__return_storage_ptr__->value).m_Center.y = fVar39;
        (__return_storage_ptr__->value).m_Center.z = fVar40;
        (__return_storage_ptr__->value).m_Extents.x = fVar42;
        (__return_storage_ptr__->value).m_Extents.y = fVar43;
        (__return_storage_ptr__->value).m_Extents.z = fVar41;
      }
      else if ((char)uStack_11 != '\0') {
        BStack_8.m_Center.x = 0.0;
        BStack_8.m_Center.y = 0.0;
        BStack_8.m_Center.z = 0.0;
        BStack_8.m_Extents.x = 0.0;
        BStack_8.m_Extents.y = 0.0;
        BStack_8.m_Extents.z = 0.0;
        pfVar44 = (float *)func_?(auStack_45,__return_storage_ptr__,
                                           MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__
                                          );
        BStack_9.m_Center.x = *pfVar44;
        BStack_9.m_Center.y = pfVar44[1];
        BStack_9.m_Center.z = pfVar44[2];
        BStack_9.m_Extents.x = pfVar44[3];
        BStack_9.m_Extents.y = pfVar44[4];
        BStack_9.m_Extents.z = pfVar44[5];
        pVVar46 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                            ((Vector3 *)&stack0xffffff38,&BStack_9,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                  (&BStack_8,*pVVar46,(MethodInfo *)0x0);
        pfVar44 = (float *)func_?();
        BStack_9.m_Center.x = *pfVar44;
        BStack_9.m_Center.y = pfVar44[1];
        BStack_9.m_Center.z = pfVar44[2];
        BStack_9.m_Extents.x = pfVar44[3];
        BStack_9.m_Extents.y = pfVar44[4];
        BStack_9.m_Extents.z = pfVar44[5];
        pVVar46 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                            ((Vector3 *)&puStack_47,&BStack_9,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                  (&BStack_8,*pVVar46,(MethodInfo *)0x0);
        pfVar44 = (float *)func_?();
        BStack_9.m_Center.x = *pfVar44;
        BStack_9.m_Center.y = pfVar44[1];
        BStack_9.m_Center.z = pfVar44[2];
        BStack_9.m_Extents.x = pfVar44[3];
        BStack_9.m_Extents.y = pfVar44[4];
        BStack_9.m_Extents.z = pfVar44[5];
        pVVar46 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                            ((Vector3 *)&stack0xffffff20,&BStack_9,(MethodInfo *)0x0);
        uStack_33._0_4_ = pVVar46->x;
        uStack_33._4_4_ = pVVar46->y;
        fVar41 = pVVar46->z;
        pfVar44 = (float *)func_?();
        BStack_9.m_Center.x = *pfVar44;
        BStack_9.m_Center.y = pfVar44[1];
        BStack_9.m_Center.z = pfVar44[2];
        BStack_9.m_Extents.x = pfVar44[3];
        BStack_9.m_Extents.y = pfVar44[4];
        BStack_9.m_Extents.z = pfVar44[5];
        pVVar46 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                            ((Vector3 *)&stack0xffffff14,&BStack_9,(MethodInfo *)0x0);
        min0.z = fVar41;
        min0.x = (float)(undefined4)uStack_33;
        min0.y = (float)uStack_33._4_4_;
        pVVar46 = MathFunctions::MathFunctions_GetMinVector
                            ((Vector3 *)&stack0xffffff08,min0,*pVVar46,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                  (&BStack_8,*pVVar46,(MethodInfo *)0x0);
        pfVar44 = (float *)func_?();
        BStack_9.m_Center.x = *pfVar44;
        BStack_9.m_Center.y = pfVar44[1];
        BStack_9.m_Center.z = pfVar44[2];
        BStack_9.m_Extents.x = pfVar44[3];
        BStack_9.m_Extents.y = pfVar44[4];
        BStack_9.m_Extents.z = pfVar44[5];
        pVVar46 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                            ((Vector3 *)&puStack_48,&BStack_9,(MethodInfo *)0x0);
        uStack_33._0_4_ = pVVar46->x;
        uStack_33._4_4_ = pVVar46->y;
        fVar41 = pVVar46->z;
        pMStack_36 = MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__;
        pfVar44 = (float *)func_?();
        BStack_9.m_Center.x = *pfVar44;
        BStack_9.m_Center.y = pfVar44[1];
        BStack_9.m_Center.z = pfVar44[2];
        BStack_9.m_Extents.x = pfVar44[3];
        BStack_9.m_Extents.y = pfVar44[4];
        BStack_9.m_Extents.z = pfVar44[5];
        pVVar46 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                            ((Vector3 *)&stack0xfffffef0,&BStack_9,(MethodInfo *)0x0);
        max0.z = fVar41;
        max0.x = (float)(undefined4)uStack_33;
        max0.y = (float)uStack_33._4_4_;
        pVVar46 = MathFunctions::MathFunctions_GetMaxVector
                            ((Vector3 *)&stack0xfffffee4,max0,*pVVar46,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                  (&BStack_8,*pVVar46,(MethodInfo *)0x0);
        VStack_49.z = 0.0;
        pMStack_36 = (MethodInfo *)0x0;
        fStack_50 = 0.0;
        fStack_51 = 0.0;
        fStack_52 = 0.0;
        VStack_49.x = 0.0;
        VStack_49.y = 0.0;
        value_00.m_Center.y = BStack_8.m_Center.y;
        value_00.m_Center.x = BStack_8.m_Center.x;
        value_00.m_Center.z = BStack_8.m_Center.z;
        value_00.m_Extents.x = BStack_8.m_Extents.x;
        value_00.m_Extents.y = BStack_8.m_Extents.y;
        value_00.m_Extents.z = BStack_8.m_Extents.z;
        mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::Nullable_1_UnityEngine_Bounds___ctor
                  ((Nullable_1_UnityEngine_Bounds_ *)&pMStack_36,value_00,
                   MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_)
        ;
        *(MethodInfo **)__return_storage_ptr__ = pMStack_36;
        (__return_storage_ptr__->value).m_Center.x = fStack_50;
        (__return_storage_ptr__->value).m_Center.y = fStack_51;
        (__return_storage_ptr__->value).m_Center.z = fStack_52;
        (__return_storage_ptr__->value).m_Extents.x = VStack_49.x;
        (__return_storage_ptr__->value).m_Extents.y = VStack_49.y;
        (__return_storage_ptr__->value).m_Extents.z = VStack_49.z;
      }
    }
  }
code_?:
  func_?();
  pcVar53 = (code *)swi(3);
  pNVar35 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar53)();
  return pNVar35;
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
  if (transforms != (List_1_UnityEngine_Transform_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)transforms,
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)transforms,*(Object **)((int)LStack_6._current + 0x90),
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                  );
      }
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
  BStack_7.m_Extents.y = 0.0;
  BStack_7.m_Extents.z = 0.0;
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
  BStack_7.m_Center.x = 0.0;
  BStack_7.m_Center.y = 0.0;
  BStack_7.m_Center.z = 0.0;
  BStack_7.m_Extents.x = 0.0;
  if (transforms != (List_1_UnityEngine_Transform_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffff38,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        transforms,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__GetEnumerator__
                       );
    uStack_9 = 0;
    RStack_10 = pLVar8->_current;
    uStack_1 = 1;
    pOStack_11 = (Object *)&stack0xffffff80;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff80,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                        );
      if (bVar12 == 0) break;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pNVar13 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                         ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffff64,(Transform *)RStack_10,
                          (MethodInfo *)0x0);
      if (__return_storage_ptr__->hasValue == 0) {
        uVar14 = *(undefined3 *)&pNVar13->field_0x1;
        fVar15 = (pNVar13->value).m_Center.x;
        fVar16 = (pNVar13->value).m_Center.y;
        fVar17 = (pNVar13->value).m_Center.z;
        fVar18 = (pNVar13->value).m_Extents.x;
        fVar19 = (pNVar13->value).m_Extents.y;
        fVar20 = (pNVar13->value).m_Extents.z;
        __return_storage_ptr__->hasValue = pNVar13->hasValue;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar14;
        (__return_storage_ptr__->value).m_Center.x = fVar15;
        (__return_storage_ptr__->value).m_Center.y = fVar16;
        (__return_storage_ptr__->value).m_Center.z = fVar17;
        (__return_storage_ptr__->value).m_Extents.x = fVar18;
        (__return_storage_ptr__->value).m_Extents.y = fVar19;
        (__return_storage_ptr__->value).m_Extents.z = fVar20;
      }
      else {
        cStack_21 = (char)*(undefined4 *)pNVar13;
        if (cStack_21 != '\0') {
          BStack_6.m_Center.x = 0.0;
          BStack_6.m_Center.y = 0.0;
          BStack_6.m_Center.z = 0.0;
          BStack_6.m_Extents.x = 0.0;
          BStack_6.m_Extents.y = 0.0;
          BStack_6.m_Extents.z = 0.0;
          pfVar22 = (float *)func_?();
          BStack_7.m_Center.x = *pfVar22;
          BStack_7.m_Center.y = pfVar22[1];
          BStack_7.m_Center.z = pfVar22[2];
          BStack_7.m_Extents.x = pfVar22[3];
          BStack_7.m_Extents.y = pfVar22[4];
          BStack_7.m_Extents.z = pfVar22[5];
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff2c,&BStack_7,(MethodInfo *)0x0);
          in_stack_24 = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar23,(MethodInfo *)0x0);
          pfVar22 = (float *)func_?();
          BStack_7.m_Center.x = *pfVar22;
          BStack_7.m_Center.y = pfVar22[1];
          BStack_7.m_Center.z = pfVar22[2];
          BStack_7.m_Extents.x = pfVar22[3];
          BStack_7.m_Extents.y = pfVar22[4];
          BStack_7.m_Extents.z = pfVar22[5];
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xffffff20,&BStack_7,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar23,(MethodInfo *)0x0);
          pfVar22 = (float *)func_?();
          BStack_7.m_Center.x = *pfVar22;
          BStack_7.m_Center.y = pfVar22[1];
          BStack_7.m_Center.z = pfVar22[2];
          BStack_7.m_Extents.x = pfVar22[3];
          BStack_7.m_Extents.y = pfVar22[4];
          BStack_7.m_Extents.z = pfVar22[5];
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&stack0xffffff14,&BStack_7,(MethodInfo *)0x0);
          uStack_25._0_4_ = pVVar23->x;
          uStack_25._4_4_ = pVVar23->y;
          fVar20 = pVVar23->z;
          pfVar22 = (float *)func_?();
          BStack_7.m_Center.x = *pfVar22;
          BStack_7.m_Center.y = pfVar22[1];
          BStack_7.m_Center.z = pfVar22[2];
          BStack_7.m_Extents.x = pfVar22[3];
          BStack_7.m_Extents.y = pfVar22[4];
          BStack_7.m_Extents.z = pfVar22[5];
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                              ((Vector3 *)&puStack_26,&BStack_7,(MethodInfo *)0x0);
          min0.z = fVar20;
          min0.x = (float)(undefined4)uStack_25;
          min0.y = (float)uStack_25._4_4_;
          pVVar23 = MathFunctions::MathFunctions_GetMinVector
                              ((Vector3 *)&stack0xfffffefc,min0,*pVVar23,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_min
                    (&BStack_6,*pVVar23,(MethodInfo *)0x0);
          pfVar22 = (float *)func_?();
          BStack_7.m_Center.x = *pfVar22;
          BStack_7.m_Center.y = pfVar22[1];
          BStack_7.m_Center.z = pfVar22[2];
          BStack_7.m_Extents.x = pfVar22[3];
          BStack_7.m_Extents.y = pfVar22[4];
          BStack_7.m_Extents.z = pfVar22[5];
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffef0,&BStack_7,(MethodInfo *)0x0);
          uStack_25._0_4_ = pVVar23->x;
          uStack_25._4_4_ = pVVar23->y;
          fVar20 = pVVar23->z;
          RStack_10 = (RegexCharClass_SingleRange)
                      MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__;
          pfVar22 = (float *)func_?();
          BStack_7.m_Center.x = *pfVar22;
          BStack_7.m_Center.y = pfVar22[1];
          BStack_7.m_Center.z = pfVar22[2];
          BStack_7.m_Extents.x = pfVar22[3];
          BStack_7.m_Extents.y = pfVar22[4];
          BStack_7.m_Extents.z = pfVar22[5];
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xfffffee4,&BStack_7,(MethodInfo *)0x0);
          max0.z = fVar20;
          max0.x = (float)(undefined4)uStack_25;
          max0.y = (float)uStack_25._4_4_;
          pVVar23 = MathFunctions::MathFunctions_GetMaxVector
                              ((Vector3 *)&stack0xffffff3c,max0,*pVVar23,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_set_max
                    (&BStack_6,*pVVar23,(MethodInfo *)0x0);
          fVar16 = 0.0;
          uVar27._0_1_ = 0;
          uVar27._1_3_ = 0;
          fVar20 = 0.0;
          fVar15 = 0.0;
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
          __return_storage_ptr__->hasValue = (bool)uVar27;
          *(int3 *)&__return_storage_ptr__->field_0x1 = SUB43(uVar27,1);
          (__return_storage_ptr__->value).m_Center.x = fVar20;
          (__return_storage_ptr__->value).m_Center.y = fVar15;
          (__return_storage_ptr__->value).m_Center.z = 0.0;
          (__return_storage_ptr__->value).m_Extents.x = 0.0;
          (__return_storage_ptr__->value).m_Extents.y = 0.0;
          (__return_storage_ptr__->value).m_Extents.z = fVar16;
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffff80,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__
               ,in_stack_24);
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  uVar27 = func_?();
  func_?(uVar27);
  pcVar28 = (code *)swi(3);
  pNVar13 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar28)();
  return pNVar13;
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
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                     (&VStack_2,&bounds,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  uStack_5 = uVar3;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                     (&VStack_6,&bounds,(MethodInfo *)0x0);
  fStack_7 = pVVar1->x;
  fStack_8 = pVVar1->y;
  pVVar9 = (Vector3__Array__Class *)pVVar1->z;
  VStack_2._0_8_ = _fStack_c;
  VStack_2.z = (float)pVVar9;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    VStack_2.y = fStack_8;
    VStack_2.x = (float)TypeInfo__SharedCubeFunctions;
    func_?();
  }
  if (cRam_? == '\0') {
    VStack_2.x = (float)&TypeInfo__UnityEngine__Vector3;
    func_?();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3;
  VStack_2.x = 1.12104e-44;
  pVVar11 = (Vector3__Array *)func_?();
  VStack_6.y = VStack_2.y;
  VStack_6.x = (float)(undefined4)uVar3;
  VStack_6.z = (float)pVVar10;
  if (pVVar11 == (Vector3__Array *)0x0) {
    VStack_2.x = (float)&UNK_?;
    func_?();
  }
  else if (pVVar11->max_length != 0) {
    fVar12 = VStack_2.x;
    pVVar11->vector[0].x = (float)(undefined4)uVar3;
    pVVar11->vector[0].y = VStack_2.y;
    pVVar11->vector[0].z = (float)pVVar10;
    VStack_6.x = VStack_2.x;
    if (1 < pVVar11->max_length) {
      pVVar11->vector[1].x = VStack_2.x;
      pVVar11->vector[1].y = VStack_2.y;
      pVVar11->vector[1].z = (float)pVVar10;
      if (2 < pVVar11->max_length) {
        pVVar11->vector[2].x = fStack_7;
        pVVar11->vector[2].y = fStack_8;
        pVVar11->vector[2].z = (float)pVVar9;
        VStack_6.x = (float)(undefined4)uVar3;
        VStack_6.z = VStack_2.z;
        if (3 < pVVar11->max_length) {
          pVVar11->vector[3].x = (float)(undefined4)uVar3;
          pVVar11->vector[3].y = VStack_6.y;
          pVVar11->vector[3].z = VStack_2.z;
          VStack_2.y = (float)&UNK_?;
          VStack_2.x = (float)(undefined4)uVar3;
          if (4 < pVVar11->max_length) {
            pVVar11->vector[4].x = (float)(undefined4)uVar3;
            pVVar11->vector[4].y = (float)&UNK_?;
            pVVar11->vector[4].z = VStack_2.z;
            if (5 < pVVar11->max_length) {
              pVVar11->vector[5].x = fVar12;
              pVVar11->vector[5].y = (float)&UNK_?;
              pVVar11->vector[5].z = VStack_2.z;
              if (6 < pVVar11->max_length) {
                pVVar11->vector[6].x = fVar12;
                pVVar11->vector[6].y = (float)&UNK_?;
                pVVar11->vector[6].z = (float)pVVar10;
                if (7 < pVVar11->max_length) {
                  pVVar11->vector[7].x = (float)(undefined4)uStack_5;
                  pVVar11->vector[7].y = (float)uStack_5._4_4_;
                  pVVar11->vector[7].z = fVar4;
                  return pVVar11;
                }
              }
            }
          }
        }
      }
    }
  }
  VStack_2.x = (float)&UNK_?;
  func_?();
  pcVar13 = (code *)swi(3);
  pVVar11 = (Vector3__Array *)(*pcVar13)();
  return pVVar11;
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
            if (pIVar3->max_length < 0x305913e5) goto code_?;
            if (pMVar2 != (Mesh *)0x0) {
              pMVar4 = (Mesh__Class *)pIVar3[-0x6f4dac].vector[0x14];
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
                      if (pIVar3->max_length < 0x305913e6) goto code_?;
                      if (pVVar7 != (Vector3__Array *)0x0) {
                        uVar8 = pIVar3[-0x6f4dac].vector[0x15];
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
                              if (pIVar3->max_length < 0x305913e7) goto code_?;
                              if (pVVar7 != (Vector3__Array *)0x0) {
                                uVar8 = pIVar3[-0x6f4dac].vector[0x16];
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
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  if (this != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
              (this,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)corners,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
              );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pMStack1 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pMStack2 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    pMStack1 = (MethodInfo *)this;
    func_?();
    pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                       ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    uStack4._0_4_ = pUVar3->m_DelagateCallback;
    uStack4._4_4_ = pUVar3->m_DelagateState;
    pMStack5 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    pMStack6 = pUVar3->m_WaitHandle;
    pMStack2 = (MethodInfo *)this;
    func_?();
    pUVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                       (this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                       );
    return (Vector3__Array *)pUVar7;
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
    func_?(0xb1a4);
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
                  func_?(this_01);
                  method_00 = (MethodInfo *)0x0;
                  message = (String *)func_?(0xd2ec);
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
  VStack_1.y = (float)(undefined4)uStack_15 - (float)(undefined4)uStack_9;
  VStack_1.z = (float)uStack_15._4_4_ - (float)uStack_9._4_4_;
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
  KStack_1.key._options = 0;
  KStack_1.key._cultureKey = (String *)0x0;
  KStack_1.key._pattern = (String *)0x0;
  KStack_1.value = (Object *)0x0;
  uStack_2 = 0;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pNVar3 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2
                     (&NStack_4,transforms,(MethodInfo *)0x0);
  if (pNVar3->hasValue == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar5->zeroVector).y;
    fVar7 = (pVVar5->zeroVector).z;
    __return_storage_ptr__->x = (pVVar5->zeroVector).x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar7;
    return __return_storage_ptr__;
  }
  pBVar8 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
           Nullable_1_UnityEngine_Bounds__get_Value
                     (&NStack_4.value,(Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffac,
                      MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
  KStack_1.key._options = (int32_t)(pBVar8->m_Center).x;
  KStack_1.key._cultureKey = (String *)(pBVar8->m_Center).y;
  KStack_1.key._pattern = (String *)(pBVar8->m_Center).z;
  KStack_1.value = (Object *)(pBVar8->m_Extents).x;
  uStack_2._0_4_ = (pBVar8->m_Extents).y;
  uStack_2._4_4_ = (pBVar8->m_Extents).z;
  pRVar9 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     ((Regex_CachedCodeEntryKey *)&NStack_4.value.m_Extents,&KStack_1,
                      (MethodInfo *)0x0);
  pSVar10 = pRVar9->_cultureKey;
  pSVar11 = pRVar9->_pattern;
  __return_storage_ptr__->x = (float)pRVar9->_options;
  __return_storage_ptr__->y = (float)pSVar10;
  __return_storage_ptr__->z = (float)pSVar11;
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
  KStack_1.key._options = 0;
  KStack_1.key._cultureKey = (String *)0x0;
  KStack_1.key._pattern = (String *)0x0;
  KStack_1.value = (Object *)0x0;
  uStack_2 = 0;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pNVar3 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                     (&NStack_4,transform,(MethodInfo *)0x0);
  if (pNVar3->hasValue == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar5->zeroVector).y;
    fVar7 = (pVVar5->zeroVector).z;
    __return_storage_ptr__->x = (pVVar5->zeroVector).x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar7;
    return __return_storage_ptr__;
  }
  pBVar8 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
           Nullable_1_UnityEngine_Bounds__get_Value
                     (&NStack_4.value,(Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffac,
                      MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
  KStack_1.key._options = (int32_t)(pBVar8->m_Center).x;
  KStack_1.key._cultureKey = (String *)(pBVar8->m_Center).y;
  KStack_1.key._pattern = (String *)(pBVar8->m_Center).z;
  KStack_1.value = (Object *)(pBVar8->m_Extents).x;
  uStack_2._0_4_ = (pBVar8->m_Extents).y;
  uStack_2._4_4_ = (pBVar8->m_Extents).z;
  pRVar9 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     ((Regex_CachedCodeEntryKey *)&NStack_4.value.m_Extents,&KStack_1,
                      (MethodInfo *)0x0);
  pSVar10 = pRVar9->_cultureKey;
  pSVar11 = pRVar9->_pattern;
  __return_storage_ptr__->x = (float)pRVar9->_options;
  __return_storage_ptr__->y = (float)pSVar10;
  __return_storage_ptr__->z = (float)pSVar11;
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
  double dVar1;
  Vector3__StaticFields *pVVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  Vector3 axis;
  Vector3 axis_00;
  Vector3 axis_01;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  Transform *pTVar16;
  undefined8 *puVar17;
  Matrix4x4 *pMVar18;
  Vector3 *pVVar19;
  Vector4 *pVVar20;
  Camera *pCVar21;
  undefined1 (*pauVar22) [12];
  float *pfVar23;
  undefined1 uVar24;
  float10 fVar25;
  undefined8 *puStack_26;
  undefined *puStack_27;
  undefined *puStack_28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  Vector4 VStack_34;
  float fStack_35;
  CubeOutOfBoundState__Enum CStack_36;
  float fStack_37;
  float fStack_38;
  undefined8 uStack_39;
  float fStack_40;
  Vector3 VStack_41;
  float fStack_42;
  GameObject *pGStack_43;
  Vector3 VStack_44;
  float fStack_45;
  Vector3 VStack_46;
  
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(0xbf08);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((info != (CubePickingInfo *)0x0) && (cmb != (MVCubeModelBase *)0x0)) {
    VStack_46.z = (float)MVCubeModelBase::MVCubeModelBase_GetCube
                                   (cmb,(info->fields).iLocalPos,(MethodInfo *)0x0);
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar15 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                       ((CubeBase *)VStack_46.z,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar15 != 0) {
      return CubeOutOfBoundState__Enum_WithinBounds;
    }
    pGStack_43 = (cmb->fields)._.gameObject;
    VStack_46.z = (float)(info->fields).pickedFace;
    CStack_36 = CubeOutOfBoundState__Enum_NoChange;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(0x6080);
      cRam_? = '\x01';
    }
    switch(VStack_46.z) {
    case 0.0:
    case 1.4013e-45:
      if ((pGStack_43 == (GameObject *)0x0) ||
         (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_43,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
      goto code_?;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_41,pTVar16,(MethodInfo *)0x0);
      pGStack_43 = (GameObject *)pVVar19->y;
      break;
    case 2.8026e-45:
    case 4.2039e-45:
      if ((pGStack_43 == (GameObject *)0x0) ||
         (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_43,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
      goto code_?;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_41,pTVar16,(MethodInfo *)0x0);
      pGStack_43 = (GameObject *)pVVar19->z;
      break;
    case 5.60519e-45:
    case 7.00649e-45:
      if ((pGStack_43 == (GameObject *)0x0) ||
         (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_43,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
      goto code_?;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_41,pTVar16,(MethodInfo *)0x0);
      pGStack_43 = (GameObject *)pVVar19->x;
      break;
    default:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Break((MethodInfo *)0x0);
      pGStack_43 = (GameObject *)0x0;
    }
    puVar17 = (undefined8 *)(*(cmb->klass->vtable).get_Scale.methodPtr)();
    VStack_44._4_8_ = *puVar17;
    fStack_45 = *(float *)(puVar17 + 1);
    puVar17 = (undefined8 *)
              (*(cmb->klass->vtable).get_Scale.methodPtr)
                        (&fStack_38,(short)cmb,(cmb->klass->vtable).get_Scale.method);
    VStack_41._4_8_ = *puVar17;
    fStack_42 = *(float *)(puVar17 + 1);
    puVar17 = (undefined8 *)
              (*(cmb->klass->vtable).get_Scale.methodPtr)
                        (&VStack_46,cmb,(cmb->klass->vtable).get_Scale.method);
    uStack_39 = *puVar17;
    fStack_40 = *(float *)(puVar17 + 1);
    pTVar16 = (cmb->fields)._.transform;
    pGStack_43 = (GameObject *)
                 (((float)pGStack_43 * _UNK_?) /
                 ((VStack_41.z + VStack_44.y + fStack_40) / _UNK_?));
    if (pTVar16 != (Transform *)0x0) {
      pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                          ((Matrix4x4 *)&puStack_26,pTVar16,(MethodInfo *)0x0);
      uVar11 = pMVar18->m00;
      uVar12 = pMVar18->m10;
      uVar13 = pMVar18->m20;
      uVar14 = pMVar18->m30;
      lhs.m30 = (float)uVar14;
      lhs.m20 = (float)uVar13;
      lhs.m10 = (float)uVar12;
      lhs.m00 = (float)uVar11;
      VStack_44.x = pMVar18->m01;
      VStack_44.y = pMVar18->m11;
      VStack_44.z = pMVar18->m21;
      fStack_45 = pMVar18->m31;
      fStack_38 = pMVar18->m02;
      uStack_39._0_4_ = pMVar18->m12;
      uStack_39._4_4_ = pMVar18->m22;
      fStack_40 = pMVar18->m32;
      fVar30 = pMVar18->m03;
      fVar31 = pMVar18->m13;
      fVar29 = pMVar18->m23;
      fVar32 = pMVar18->m33;
      VStack_46.z = (float)(info->fields).pickedFace;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pVVar19 = Cube::Cube_GetFaceAxis(&VStack_41,(Face__Enum)VStack_46.z,(MethodInfo *)0x0);
      VStack_46.x = pVVar19->x;
      VStack_46.y = pVVar19->y;
      VStack_46.z = pVVar19->z;
      VStack_41.x = VStack_46.x;
      VStack_41.z = VStack_46.z;
      VStack_41.y = VStack_46.y;
      fStack_42 = 0.0;
      lhs.m01 = VStack_44.x;
      lhs.m11 = VStack_44.y;
      lhs.m21 = VStack_44.z;
      lhs.m31 = fStack_45;
      lhs.m02 = fStack_38;
      lhs.m12 = (float)uStack_39;
      lhs.m22 = uStack_39._4_4_;
      lhs.m32 = fStack_40;
      lhs.m03 = fVar30;
      lhs.m13 = fVar31;
      lhs.m23 = fVar29;
      lhs.m33 = fVar32;
      vector.w = 0.0;
      vector.x = pVVar19->x;
      vector.y = pVVar19->y;
      vector.z = pVVar19->z;
      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                          (&VStack_34,lhs,vector,(MethodInfo *)0x0);
      fVar31 = pVVar20->x;
      fVar29 = pVVar20->y;
      VStack_41.y = pVVar20->x;
      VStack_41.z = pVVar20->y;
      VStack_34.x = pVVar20->z;
      dVar1 = *(double *)&(info->fields).point;
      fVar30 = *deltaAccum;
      VStack_46.x = SUB84(dVar1,0);
      fStack_35 = VStack_46.x + fVar31 * fVar30;
      VStack_46.y = (float)((ulonglong)dVar1 >> 0x20);
      fStack_37 = VStack_46.y + fVar29 * fVar30;
      fStack_45 = (info->fields).point.z + VStack_34.x * fVar30;
      uStack_39 = CONCAT44(fStack_37 + fVar29,fStack_35 + fVar31);
      fStack_40 = fStack_45 + VStack_34.x;
      VStack_34.y = VStack_34.x;
      VStack_34.z = VStack_34.x;
      VStack_34.w = VStack_34.x;
      fStack_42 = VStack_34.x;
      VStack_46._0_8_ = dVar1;
      VStack_46.z = fStack_45;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      fVar32 = fStack_37;
      fVar30 = fStack_35;
      start.y = fStack_37;
      start.x = fStack_35;
      start.z = fStack_45;
      end.z = fStack_40;
      end.x = (float)uStack_39;
      end.y = uStack_39._4_4_;
      color.g = (float)_UNK_?;
      color.r = (float)_UNK_?;
      color.b = (float)_UNK_?;
      color.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                (start,end,color,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_39._0_4_ = (pVVar2->upVector).x;
      uStack_39._4_4_ = (pVVar2->upVector).y;
      fStack_40 = (pVVar2->upVector).z + VStack_46.z;
      start_00.y = fVar32;
      start_00.x = fVar30;
      end_00.y = uStack_39._4_4_ + fStack_37;
      end_00.x = (float)uStack_39 + fStack_35;
      start_00.z = fStack_45;
      end_00.z = fStack_40;
      color_00.g = (float)_UNK_?;
      color_00.r = (float)_UNK_?;
      color_00.b = (float)_UNK_?;
      color_00.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                (start_00,end_00,color_00,(MethodInfo *)0x0);
      pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      uStack_39 = CONCAT44(fStack_37 + fVar29,fStack_35 + fVar31);
      fStack_40 = VStack_46.z + VStack_34.x;
      if (pCVar21 != (Camera *)0x0) {
        position.y = fStack_37 + fVar29;
        position.x = fStack_35 + fVar31;
        position.z = fStack_40;
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            (&VStack_46,pCVar21,position,(MethodInfo *)0x0);
        uStack_39._0_4_ = pVVar19->x;
        uStack_39._4_4_ = pVVar19->y;
        fStack_40 = pVVar19->z;
        pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar21 != (Camera *)0x0) {
          position_00.y = fVar32;
          position_00.x = fVar30;
          position_00.z._0_2_ = SUB42(fStack_45,0);
          position_00.z._2_2_ = (short)((uint)fStack_45 >> 0x10);
          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              (&VStack_44,pCVar21,position_00,(MethodInfo *)0x0);
          VStack_46.x = pVVar19->x;
          VStack_46.y = pVVar19->y;
          VStack_46.z = pVVar19->z;
          fStack_40 = fStack_40 - VStack_46.z;
          uStack_39 = CONCAT44(uStack_39._4_4_ - VStack_46.y,(float)uStack_39 - VStack_46.x);
          fStack_45 = fStack_40;
          fVar25 = (float10)func_?((short)&uStack_39,0);
          VStack_46.z = (float)fVar25;
          if (0.0 < VStack_46.z) {
            puStack_27 = (undefined *)0x0;
            puStack_26 = &uStack_39;
            puVar17 = (undefined8 *)func_?();
            VStack_44._4_8_ = *puVar17;
            fStack_45 = *(float *)(puVar17 + 1);
            fVar25 = (float10)func_?();
            VStack_46.z = (float)fVar25;
            *delta = ((mousePositionDelta.y * VStack_44.z + mousePositionDelta.x * VStack_44.y +
                      mousePositionDelta.z * fStack_45) / VStack_46.z) * _UNK_? + *delta;
          }
          if ((float)((uint)*delta & _UNK_?) < (float)pGStack_43) {
            *edgeMoved = 0;
            return CStack_36;
          }
          VStack_46._0_8_ = (BADTYPE)(float)pGStack_43;
          fVar25 = (float10)func_?();
          VStack_46._0_8_ = (BADTYPE)fVar25;
          fVar30 = *delta;
          *delta = fVar30 - (float)fVar25;
          *deltaAccum = (fVar30 - (float)fVar25) + *deltaAccum;
          fStack_37 = *delta;
          if ((info->fields).pickedEdge == 0) {
            pTVar16 = (cmb->fields)._.transform;
            if (pTVar16 != (Transform *)0x0) {
              pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_worldToLocalMatrix
                                  ((Matrix4x4 *)&puStack_26,pTVar16,(MethodInfo *)0x0);
              VStack_34.x = pMVar18->m00;
              VStack_34.y = pMVar18->m10;
              VStack_34.z = pMVar18->m20;
              VStack_34.w = pMVar18->m30;
              fVar30 = pMVar18->m01;
              fVar31 = pMVar18->m11;
              fVar29 = pMVar18->m21;
              fVar32 = pMVar18->m31;
              fVar33 = pMVar18->m02;
              fVar4 = pMVar18->m12;
              fVar5 = pMVar18->m22;
              fVar6 = pMVar18->m32;
              fVar7 = pMVar18->m03;
              fVar8 = pMVar18->m13;
              fVar9 = pMVar18->m23;
              fVar10 = pMVar18->m33;
              pauVar22 = (undefined1 (*) [12])func_?(&fStack_38,(short)&VStack_41.y,0);
              fStack_42 = 0.0;
              VStack_44.y = *(float *)((int)pauVar22 + 0);
              VStack_44.z = *(float *)((int)pauVar22 + 4);
              fStack_45 = *(float *)(*pauVar22 + 8);
              VStack_41.x = VStack_44.y;
              VStack_41.z = fStack_45;
              VStack_41.y = VStack_44.z;
              lhs_00.m10 = VStack_34.y;
              lhs_00.m00 = VStack_34.x;
              lhs_00.m20 = VStack_34.z;
              lhs_00.m30 = VStack_34.w;
              lhs_00.m01 = fVar30;
              lhs_00.m11 = fVar31;
              lhs_00.m21 = fVar29;
              lhs_00.m31 = fVar32;
              lhs_00.m02 = fVar33;
              lhs_00.m12 = fVar4;
              lhs_00.m22 = fVar5;
              lhs_00.m32 = fVar6;
              lhs_00.m03 = fVar7;
              lhs_00.m13 = fVar8;
              lhs_00.m23 = fVar9;
              lhs_00.m33 = fVar10;
              vector_00.w = 0.0;
              vector_00._0_12_ = *pauVar22;
              pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                                  (&VStack_34,lhs_00,vector_00,(MethodInfo *)0x0);
              VStack_41.x = pVVar20->x;
              VStack_41.y = pVVar20->y;
              VStack_41.z = pVVar20->z;
              fStack_42 = pVVar20->w;
              pfVar23 = (float *)func_?();
              VStack_44.y = *pfVar23;
              VStack_44.z = pfVar23[1];
              fStack_45 = pfVar23[2];
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              axis_00.y = VStack_44.z;
              axis_00.x = VStack_44.y;
              axis_00.z = fStack_45;
              Cube::Cube_MoveFace(info,fStack_37,axis_00,&CStack_36,(MethodInfo *)0x0);
              *editCubeChange = EditCubeChange__Enum_FaceMoved;
              goto code_?;
            }
          }
          else {
            pTVar16 = (cmb->fields)._.transform;
            if (edgeIndex0 == 0 && edgeIndex1 == 0) {
              if (pTVar16 != (Transform *)0x0) {
                pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_worldToLocalMatrix
                                    ((Matrix4x4 *)&puStack_26,pTVar16,(MethodInfo *)0x0);
                VStack_34.x = pMVar18->m00;
                VStack_34.y = pMVar18->m10;
                VStack_34.z = pMVar18->m20;
                VStack_34.w = pMVar18->m30;
                fVar30 = pMVar18->m01;
                fVar31 = pMVar18->m11;
                fVar29 = pMVar18->m21;
                fVar32 = pMVar18->m31;
                fVar33 = pMVar18->m02;
                fVar4 = pMVar18->m12;
                fVar5 = pMVar18->m22;
                fVar6 = pMVar18->m32;
                fVar7 = pMVar18->m03;
                fVar8 = pMVar18->m13;
                fVar9 = pMVar18->m23;
                fVar10 = pMVar18->m33;
                pauVar22 = (undefined1 (*) [12])func_?(&fStack_38,(short)&VStack_41.y,0);
                fStack_42 = 0.0;
                VStack_44.y = *(float *)((int)pauVar22 + 0);
                VStack_44.z = *(float *)((int)pauVar22 + 4);
                fStack_45 = *(float *)(*pauVar22 + 8);
                VStack_41.x = VStack_44.y;
                VStack_41.z = fStack_45;
                VStack_41.y = VStack_44.z;
                lhs_01.m10 = VStack_34.y;
                lhs_01.m00 = VStack_34.x;
                lhs_01.m20 = VStack_34.z;
                lhs_01.m30 = VStack_34.w;
                lhs_01.m01 = fVar30;
                lhs_01.m11 = fVar31;
                lhs_01.m21 = fVar29;
                lhs_01.m31 = fVar32;
                lhs_01.m02 = fVar33;
                lhs_01.m12 = fVar4;
                lhs_01.m22 = fVar5;
                lhs_01.m32 = fVar6;
                lhs_01.m03 = fVar7;
                lhs_01.m13 = fVar8;
                lhs_01.m23 = fVar9;
                lhs_01.m33 = fVar10;
                vector_01.w = 0.0;
                vector_01._0_12_ = *pauVar22;
                pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                          Matrix4x4_op_Multiply_1(&VStack_34,lhs_01,vector_01,(MethodInfo *)0x0);
                VStack_41.x = pVVar20->x;
                VStack_41.y = pVVar20->y;
                VStack_41.z = pVVar20->z;
                fStack_42 = pVVar20->w;
                pfVar23 = (float *)func_?();
                VStack_44.y = *pfVar23;
                VStack_44.z = pfVar23[1];
                fStack_45 = pfVar23[2];
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                axis_01.y = VStack_44.z;
                axis_01.x = VStack_44.y;
                axis_01.z = fStack_45;
                Cube::Cube_MoveEdge(info,fStack_37,axis_01,&CStack_36,(MethodInfo *)0x0);
                *editCubeChange = EditCubeChange__Enum_EdgeMoved;
code_?:
                *delta = 0.0;
                *edgeMoved = 1;
                return CStack_36;
              }
            }
            else if (pTVar16 != (Transform *)0x0) {
              pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_worldToLocalMatrix
                                  ((Matrix4x4 *)&puStack_26,pTVar16,(MethodInfo *)0x0);
              VStack_34.x = pMVar18->m00;
              VStack_34.y = pMVar18->m10;
              VStack_34.z = pMVar18->m20;
              VStack_34.w = pMVar18->m30;
              fVar30 = pMVar18->m01;
              fVar31 = pMVar18->m11;
              fVar29 = pMVar18->m21;
              fVar32 = pMVar18->m31;
              fVar33 = pMVar18->m02;
              fVar4 = pMVar18->m12;
              fVar5 = pMVar18->m22;
              fVar6 = pMVar18->m32;
              fVar7 = pMVar18->m03;
              fVar8 = pMVar18->m13;
              fVar9 = pMVar18->m23;
              fVar10 = pMVar18->m33;
              pauVar22 = (undefined1 (*) [12])func_?(&VStack_44,(short)&VStack_41.y,0);
              VStack_41.y = *(float *)((int)pauVar22 + 0);
              VStack_41.z = *(float *)((int)pauVar22 + 4);
              fStack_42 = *(float *)(*pauVar22 + 8);
              VStack_44.x = VStack_41.y;
              VStack_44.z = fStack_42;
              VStack_44.y = VStack_41.z;
              fStack_45 = 0.0;
              lhs_02.m10 = VStack_34.y;
              lhs_02.m00 = VStack_34.x;
              lhs_02.m20 = VStack_34.z;
              lhs_02.m30 = VStack_34.w;
              lhs_02.m01 = fVar30;
              lhs_02.m11 = fVar31;
              lhs_02.m21 = fVar29;
              lhs_02.m31 = fVar32;
              lhs_02.m02 = fVar33;
              lhs_02.m12 = fVar4;
              lhs_02.m22 = fVar5;
              lhs_02.m32 = fVar6;
              lhs_02.m03 = fVar7;
              lhs_02.m13 = fVar8;
              lhs_02.m23 = fVar9;
              lhs_02.m33 = fVar10;
              vector_02.w = 0.0;
              vector_02._0_12_ = *pauVar22;
              pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                                  (&VStack_34,lhs_02,vector_02,(MethodInfo *)0x0);
              VStack_41.x = pVVar20->x;
              VStack_41.y = pVVar20->y;
              VStack_41.z = pVVar20->z;
              fStack_42 = pVVar20->w;
              pfVar23 = (float *)func_?();
              VStack_41.y = *pfVar23;
              VStack_41.z = pfVar23[1];
              fStack_42 = pfVar23[2];
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              axis.y = VStack_41.z;
              axis.x = VStack_41.y;
              axis.z = fStack_42;
              Cube::Cube_MoveVertex
                        (info,fStack_37,axis,edgeIndex0,edgeIndex1,&CStack_36,(MethodInfo *)0x0);
              *editCubeChange = EditCubeChange__Enum_VertexMoved;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  uVar24 = 0;
  func_?();
  uVar3 = CONCAT11(uVar24,uRam_?) >> 7 | CONCAT11(uVar24,uRam_?) << 2;
  uRam_? = (undefined1)uVar3;
  bRam_? = (byte)(CONCAT11((uVar3 & 0x100) != 0,bRam_?) >> 7) | bRam_? << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
  func_?(this_00);
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
    _puStack_1c = 0x10ef6080101dcab3;
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    _puStack_1c = CONCAT44(&UNK_?,puStack_1);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Break((MethodInfo *)0x0);
    return 0.0;
  }
  uVar4 = func_?();
  bVar5 = (byte)((uint6)uVar4 >> 0x20);
  cVar6 = (char)((uint6)uVar4 >> 0x28);
  uVar7 = (uint)uVar4 + 0xe2352ff0;
  bVar8 = (uint)uVar4 < 0x1dcad010 || uVar7 < (bVar5 & 1);
  uVar7 = uVar7 - (bVar5 & 1);
  pbVar9 = (byte *)(unaff_EBX + extraout_ECX * 8);
  bVar10 = *pbVar9;
  bVar11 = *pbVar9 + (byte)uVar7;
  *pbVar9 = bVar11 + bVar8;
  pcVar12 = (char *)(unaff_EBX + extraout_ECX * 8);
  *pcVar12 = *pcVar12 + cVar6 +
            (uVar7 < 0x1dcb0410 ||
            uVar7 + 0xe234fbf0 < (uint)(CARRY1(bVar10,(byte)uVar7) || CARRY1(bVar11,bVar8)));
  in(CONCAT11(cVar6,bVar5 >> 1 | bVar5 << 7));
  iVar13 = 0;
  fStack_14 = 0.0;
  if (gameObject != (GameObject *)0x0) {
    while (fVar15 = fStack_14, fVar16 = fStack_14,
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (gameObject,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         (&VStack_17,pTVar2,(MethodInfo *)0x0);
      puStack_1 = (undefined *)pVVar3->x;
      unique0x0000a404 = pVVar3->y;
      if (iVar13 == 0) {
        fStack_14 = fVar16 + (float)puStack_1;
      }
      else {
        if (iVar13 != 1) {
          if (iVar13 == 2) {
            return (fVar15 + pVVar3->z) / _UNK_?;
          }
          goto code_?;
        }
        fStack_14 = fStack_14 + (float)unique0x0000a404;
      }
      iVar13 = iVar13 + 1;
    }
  }
  func_?();
code_?:
  uVar18 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this = (IndexOutOfRangeException *)func_?(uVar18);
  func_?(this);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this,message,method_00);
  uVar18 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  func_?(this,uVar18);
  pcVar19 = (code *)swi(3);
  fVar20 = (float10)(*pcVar19)();
  return (float)fVar20;
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
    uVar10 = 0;
    uVar11 = (pIVar7->klass->_1).interface_offsets_count;
    if (uVar11 != 0) {
      do {
        if (pIVar7->klass->interfaceOffsets[uVar10].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
          pVVar12 = &(pIVar7->klass->vtable).get_Current +
                   pIVar7->klass->interfaceOffsets[uVar10].offset;
          goto code_?;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
    }
    pVVar12 = (VirtualInvokeData *)
             func_?(pIVar7,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    t_00 = (Transform *)(*pVVar12->methodPtr)(pIVar7,pVVar12->method);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    if (t_00 == (Transform *)0x0) {
      SharedCubeFunctions_SetLayerRecursively((Transform *)0x0,select,(MethodInfo *)0x0);
    }
    else {
      if (((t_00->klass->_1).typeHierarchyDepth <
           (TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth) ||
         ((t_00->klass->_1).typeHierarchy
          [(TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
        func_?(t_00,TypeInfo__UnityEngine__Transform);
        break;
      }
      SharedCubeFunctions_SetLayerRecursively(t_00,select,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
  dVar1 = mscorlib.dll::System::Math::Math_Round_4
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
  func_?();
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
  if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
  if (pIVar4->max_length == 0) {
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
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
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
    if (pIVar3 == (IntVector__Array__Array *)0x0) goto code_?;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length == 0) goto code_?;
    pIVar3->vector[0] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_10.x = 0;
    IStack_10.y = 0;
    IStack_10.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_10,0,1,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_10.x;
    pIVar4->vector[0].y = IStack_10.y;
    pIVar4->vector[0].z = IStack_10.z;
    IStack_11.x = 0;
    IStack_11.y = 0;
    IStack_11.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_11,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_11.x;
    pIVar4->vector[1].y = IStack_11.y;
    pIVar4->vector[1].z = IStack_11.z;
    IStack_12.x = 0;
    IStack_12.y = 0;
    IStack_12.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_12,1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_12.x;
    pIVar4->vector[2].y = IStack_12.y;
    pIVar4->vector[2].z = IStack_12.z;
    IStack_13.x = 0;
    IStack_13.y = 0;
    IStack_13.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_13,1,1,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_13.x;
    pIVar4->vector[3].y = IStack_13.y;
    pIVar4->vector[3].z = IStack_13.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 2) goto code_?;
    pIVar3->vector[1] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_17.x = 0;
    IStack_17.y = 0;
    IStack_17.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_17,0,1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 3) goto code_?;
    pIVar3->vector[2] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_21.x = 0;
    IStack_21.y = 0;
    IStack_21.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_21,-1,1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 4) goto code_?;
    pIVar3->vector[3] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_25.x = 0;
    IStack_25.y = 0;
    IStack_25.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_25,-1,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 5) goto code_?;
    pIVar3->vector[4] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_29.x = 0;
    IStack_29.y = 0;
    IStack_29.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_29,0,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 6) goto code_?;
    pIVar3->vector[5] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_33.x = 0;
    IStack_33.y = 0;
    IStack_33.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_33,0,-1,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 7) goto code_?;
    pIVar3->vector[6] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_37.x = 0;
    IStack_37.y = 0;
    IStack_37.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_37,-1,-1,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 8) goto code_?;
    pIVar3->vector[7] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_41.x = 0;
    IStack_41.y = 0;
    IStack_41.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_41,-1,-1,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 9) goto code_?;
    pIVar3->vector[8] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_45.x = 0;
    IStack_45.y = 0;
    IStack_45.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_45,0,-1,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 10) goto code_?;
    pIVar3->vector[9] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_49.x = 0;
    IStack_49.y = 0;
    IStack_49.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_49,0,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xb) goto code_?;
    pIVar3->vector[10] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_53.x = 0;
    IStack_53.y = 0;
    IStack_53.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_53,-1,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xc) goto code_?;
    pIVar3->vector[0xb] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_57.x = 0;
    IStack_57.y = 0;
    IStack_57.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_57,0,-1,1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xd) goto code_?;
    pIVar3->vector[0xc] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_61.x = 0;
    IStack_61.y = 0;
    IStack_61.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_61,-1,-1,1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xe) goto code_?;
    pIVar3->vector[0xd] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_65.x = 0;
    IStack_65.y = 0;
    IStack_65.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_65,-1,0,1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xf) goto code_?;
    pIVar3->vector[0xe] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_69.x = 0;
    IStack_69.y = 0;
    IStack_69.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_69,0,0,1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
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
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x10) goto code_?;
    pIVar3->vector[0xf] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_73.x = 0;
    IStack_73.y = 0;
    IStack_73.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_73,-1,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_73.x;
    pIVar4->vector[0].y = IStack_73.y;
    pIVar4->vector[0].z = IStack_73.z;
    IStack_74.x = 0;
    IStack_74.y = 0;
    IStack_74.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_74,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_74.x;
    pIVar4->vector[1].y = IStack_74.y;
    pIVar4->vector[1].z = IStack_74.z;
    IStack_75.x = 0;
    IStack_75.y = 0;
    IStack_75.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_75,-1,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_75.x;
    pIVar4->vector[2].y = IStack_75.y;
    pIVar4->vector[2].z = IStack_75.z;
    IStack_76.x = 0;
    IStack_76.y = 0;
    IStack_76.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_76,-1,-1,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_76.x;
    pIVar4->vector[3].y = IStack_76.y;
    pIVar4->vector[3].z = IStack_76.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x11) goto code_?;
    pIVar3->vector[0x10] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_77.x = 0;
    IStack_77.y = 0;
    IStack_77.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_77,-1,-1,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_77.x;
    pIVar4->vector[0].y = IStack_77.y;
    pIVar4->vector[0].z = IStack_77.z;
    IStack_78.x = 0;
    IStack_78.y = 0;
    IStack_78.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_78,-1,0,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_78.x;
    pIVar4->vector[1].y = IStack_78.y;
    pIVar4->vector[1].z = IStack_78.z;
    IStack_79.x = 0;
    IStack_79.y = 0;
    IStack_79.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_79,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_79.x;
    pIVar4->vector[2].y = IStack_79.y;
    pIVar4->vector[2].z = IStack_79.z;
    IStack_80.x = 0;
    IStack_80.y = 0;
    IStack_80.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_80,-1,-1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_80.x;
    pIVar4->vector[3].y = IStack_80.y;
    pIVar4->vector[3].z = IStack_80.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x12) goto code_?;
    pIVar3->vector[0x11] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_81.x = 0;
    IStack_81.y = 0;
    IStack_81.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_81,-1,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_81.x;
    pIVar4->vector[0].y = IStack_81.y;
    pIVar4->vector[0].z = IStack_81.z;
    IStack_82.x = 0;
    IStack_82.y = 0;
    IStack_82.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_82,-1,1,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_82.x;
    pIVar4->vector[1].y = IStack_82.y;
    pIVar4->vector[1].z = IStack_82.z;
    IStack_83.x = 0;
    IStack_83.y = 0;
    IStack_83.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_83,-1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_83.x;
    pIVar4->vector[2].y = IStack_83.y;
    pIVar4->vector[2].z = IStack_83.z;
    IStack_84.x = 0;
    IStack_84.y = 0;
    IStack_84.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_84,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_84.x;
    pIVar4->vector[3].y = IStack_84.y;
    pIVar4->vector[3].z = IStack_84.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x13) goto code_?;
    pIVar3->vector[0x12] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_85.x = 0;
    IStack_85.y = 0;
    IStack_85.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_85,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_85.x;
    pIVar4->vector[0].y = IStack_85.y;
    pIVar4->vector[0].z = IStack_85.z;
    IStack_86.x = 0;
    IStack_86.y = 0;
    IStack_86.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_86,-1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_86.x;
    pIVar4->vector[1].y = IStack_86.y;
    pIVar4->vector[1].z = IStack_86.z;
    IStack_87.x = 0;
    IStack_87.y = 0;
    IStack_87.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_87,-1,1,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_87.x;
    pIVar4->vector[2].y = IStack_87.y;
    pIVar4->vector[2].z = IStack_87.z;
    IStack_88.x = 0;
    IStack_88.y = 0;
    IStack_88.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_88,-1,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_88.x;
    pIVar4->vector[3].y = IStack_88.y;
    pIVar4->vector[3].z = IStack_88.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x14) goto code_?;
    pIVar3->vector[0x13] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_89.x = 0;
    IStack_89.y = 0;
    IStack_89.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_89,1,-1,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_89.x;
    pIVar4->vector[0].y = IStack_89.y;
    pIVar4->vector[0].z = IStack_89.z;
    IStack_90.x = 0;
    IStack_90.y = 0;
    IStack_90.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_90,1,0,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_90.x;
    pIVar4->vector[1].y = IStack_90.y;
    pIVar4->vector[1].z = IStack_90.z;
    IStack_91.x = 0;
    IStack_91.y = 0;
    IStack_91.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_91,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_91.x;
    pIVar4->vector[2].y = IStack_91.y;
    pIVar4->vector[2].z = IStack_91.z;
    IStack_92.x = 0;
    IStack_92.y = 0;
    IStack_92.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_92,1,-1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_92.x;
    pIVar4->vector[3].y = IStack_92.y;
    pIVar4->vector[3].z = IStack_92.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x15) goto code_?;
    pIVar3->vector[0x14] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_93.x = 0;
    IStack_93.y = 0;
    IStack_93.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_93,1,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_93.x;
    pIVar4->vector[0].y = IStack_93.y;
    pIVar4->vector[0].z = IStack_93.z;
    IStack_94.x = 0;
    IStack_94.y = 0;
    IStack_94.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_94,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_94.x;
    pIVar4->vector[1].y = IStack_94.y;
    pIVar4->vector[1].z = IStack_94.z;
    IStack_95.x = 0;
    IStack_95.y = 0;
    IStack_95.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_95,1,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_95.x;
    pIVar4->vector[2].y = IStack_95.y;
    pIVar4->vector[2].z = IStack_95.z;
    IStack_96.x = 0;
    IStack_96.y = 0;
    IStack_96.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_96,1,-1,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_96.x;
    pIVar4->vector[3].y = IStack_96.y;
    pIVar4->vector[3].z = IStack_96.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x16) goto code_?;
    pIVar3->vector[0x15] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_97.x = 0;
    IStack_97.y = 0;
    IStack_97.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_97,1,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_97.x;
    pIVar4->vector[0].y = IStack_97.y;
    pIVar4->vector[0].z = IStack_97.z;
    IStack_98.x = 0;
    IStack_98.y = 0;
    IStack_98.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_98,1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_98.x;
    pIVar4->vector[1].y = IStack_98.y;
    pIVar4->vector[1].z = IStack_98.z;
    IStack_99.x = 0;
    IStack_99.y = 0;
    IStack_99.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_99,1,1,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_99.x;
    pIVar4->vector[2].y = IStack_99.y;
    pIVar4->vector[2].z = IStack_99.z;
    IStack_100.x = 0;
    IStack_100.y = 0;
    IStack_100.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_100,1,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_100.x;
    pIVar4->vector[3].y = IStack_100.y;
    pIVar4->vector[3].z = IStack_100.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x17) goto code_?;
    pIVar3->vector[0x16] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_101.x = 0;
    IStack_101.y = 0;
    IStack_101.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_101,1,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_101.x;
    pIVar4->vector[0].y = IStack_101.y;
    pIVar4->vector[0].z = IStack_101.z;
    IStack_102.x = 0;
    IStack_102.y = 0;
    IStack_102.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_102,1,1,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_102.x;
    pIVar4->vector[1].y = IStack_102.y;
    pIVar4->vector[1].z = IStack_102.z;
    IStack_103.x = 0;
    IStack_103.y = 0;
    IStack_103.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_103,1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_103.x;
    pIVar4->vector[2].y = IStack_103.y;
    pIVar4->vector[2].z = IStack_103.z;
    IStack_104.x = 0;
    IStack_104.y = 0;
    IStack_104.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_104,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_104.x;
    pIVar4->vector[3].y = IStack_104.y;
    pIVar4->vector[3].z = IStack_104.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x18) goto code_?;
    pIVar3->vector[0x17] = pIVar4;
    func_?();
    TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsets = pIVar3;
    func_?();
    pIVar3 = (IntVector__Array__Array *)func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_105.x = 0;
    IStack_105.y = 0;
    IStack_105.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_105,-1,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_105.x;
    pIVar4->vector[0].y = IStack_105.y;
    pIVar4->vector[0].z = IStack_105.z;
    IStack_106.x = 0;
    IStack_106.y = 0;
    IStack_106.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_106,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_106.x;
    pIVar4->vector[1].y = IStack_106.y;
    pIVar4->vector[1].z = IStack_106.z;
    IStack_107.x = 0;
    IStack_107.y = 0;
    IStack_107.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_107,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_107.x;
    pIVar4->vector[2].y = IStack_107.y;
    pIVar4->vector[2].z = IStack_107.z;
    IStack_108.x = 0;
    IStack_108.y = 0;
    IStack_108.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_108,0,0,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_108.x;
    pIVar4->vector[3].y = IStack_108.y;
    pIVar4->vector[3].z = IStack_108.z;
    if (pIVar3 == (IntVector__Array__Array *)0x0) goto code_?;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length == 0) goto code_?;
    pIVar3->vector[0] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_109.x = 0;
    IStack_109.y = 0;
    IStack_109.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_109,0,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_109.x;
    pIVar4->vector[0].y = IStack_109.y;
    pIVar4->vector[0].z = IStack_109.z;
    IStack_110.x = 0;
    IStack_110.y = 0;
    IStack_110.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_110,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_110.x;
    pIVar4->vector[1].y = IStack_110.y;
    pIVar4->vector[1].z = IStack_110.z;
    IStack_111.x = 0;
    IStack_111.y = 0;
    IStack_111.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_111,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_111.x;
    pIVar4->vector[2].y = IStack_111.y;
    pIVar4->vector[2].z = IStack_111.z;
    IStack_112.x = 0;
    IStack_112.y = 0;
    IStack_112.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_112,1,0,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_112.x;
    pIVar4->vector[3].y = IStack_112.y;
    pIVar4->vector[3].z = IStack_112.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 2) goto code_?;
    pIVar3->vector[1] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_113.x = 0;
    IStack_113.y = 0;
    IStack_113.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_113,0,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_113.x;
    pIVar4->vector[0].y = IStack_113.y;
    pIVar4->vector[0].z = IStack_113.z;
    IStack_114.x = 0;
    IStack_114.y = 0;
    IStack_114.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_114,0,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_114.x;
    pIVar4->vector[1].y = IStack_114.y;
    pIVar4->vector[1].z = IStack_114.z;
    IStack_115.x = 0;
    IStack_115.y = 0;
    IStack_115.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_115,1,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_115.x;
    pIVar4->vector[2].y = IStack_115.y;
    pIVar4->vector[2].z = IStack_115.z;
    IStack_116.x = 0;
    IStack_116.y = 0;
    IStack_116.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_116,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_116.x;
    pIVar4->vector[3].y = IStack_116.y;
    pIVar4->vector[3].z = IStack_116.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 3) goto code_?;
    pIVar3->vector[2] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_117.x = 0;
    IStack_117.y = 0;
    IStack_117.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_117,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_117.x;
    pIVar4->vector[0].y = IStack_117.y;
    pIVar4->vector[0].z = IStack_117.z;
    IStack_118.x = 0;
    IStack_118.y = 0;
    IStack_118.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_118,-1,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_118.x;
    pIVar4->vector[1].y = IStack_118.y;
    pIVar4->vector[1].z = IStack_118.z;
    IStack_119.x = 0;
    IStack_119.y = 0;
    IStack_119.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_119,0,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_119.x;
    pIVar4->vector[2].y = IStack_119.y;
    pIVar4->vector[2].z = IStack_119.z;
    IStack_120.x = 0;
    IStack_120.y = 0;
    IStack_120.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_120,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_120.x;
    pIVar4->vector[3].y = IStack_120.y;
    pIVar4->vector[3].z = IStack_120.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 4) goto code_?;
    pIVar3->vector[3] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_121.x = 0;
    IStack_121.y = 0;
    IStack_121.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_121,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_121.x;
    pIVar4->vector[0].y = IStack_121.y;
    pIVar4->vector[0].z = IStack_121.z;
    IStack_122.x = 0;
    IStack_122.y = 0;
    IStack_122.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_122,-1,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_122.x;
    pIVar4->vector[1].y = IStack_122.y;
    pIVar4->vector[1].z = IStack_122.z;
    IStack_123.x = 0;
    IStack_123.y = 0;
    IStack_123.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_123,0,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_123.x;
    pIVar4->vector[2].y = IStack_123.y;
    pIVar4->vector[2].z = IStack_123.z;
    IStack_124.x = 0;
    IStack_124.y = 0;
    IStack_124.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_124,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_124.x;
    pIVar4->vector[3].y = IStack_124.y;
    pIVar4->vector[3].z = IStack_124.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 5) goto code_?;
    pIVar3->vector[4] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_125.x = 0;
    IStack_125.y = 0;
    IStack_125.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_125,0,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_125.x;
    pIVar4->vector[0].y = IStack_125.y;
    pIVar4->vector[0].z = IStack_125.z;
    IStack_126.x = 0;
    IStack_126.y = 0;
    IStack_126.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_126,0,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_126.x;
    pIVar4->vector[1].y = IStack_126.y;
    pIVar4->vector[1].z = IStack_126.z;
    IStack_127.x = 0;
    IStack_127.y = 0;
    IStack_127.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_127,1,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_127.x;
    pIVar4->vector[2].y = IStack_127.y;
    pIVar4->vector[2].z = IStack_127.z;
    IStack_128.x = 0;
    IStack_128.y = 0;
    IStack_128.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_128,1,0,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_128.x;
    pIVar4->vector[3].y = IStack_128.y;
    pIVar4->vector[3].z = IStack_128.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 6) goto code_?;
    pIVar3->vector[5] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_129.x = 0;
    IStack_129.y = 0;
    IStack_129.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_129,0,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_129.x;
    pIVar4->vector[0].y = IStack_129.y;
    pIVar4->vector[0].z = IStack_129.z;
    IStack_130.x = 0;
    IStack_130.y = 0;
    IStack_130.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_130,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_130.x;
    pIVar4->vector[1].y = IStack_130.y;
    pIVar4->vector[1].z = IStack_130.z;
    IStack_131.x = 0;
    IStack_131.y = 0;
    IStack_131.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_131,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_131.x;
    pIVar4->vector[2].y = IStack_131.y;
    pIVar4->vector[2].z = IStack_131.z;
    IStack_132.x = 0;
    IStack_132.y = 0;
    IStack_132.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_132,1,0,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_132.x;
    pIVar4->vector[3].y = IStack_132.y;
    pIVar4->vector[3].z = IStack_132.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 7) goto code_?;
    pIVar3->vector[6] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_133.x = 0;
    IStack_133.y = 0;
    IStack_133.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_133,-1,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_133.x;
    pIVar4->vector[0].y = IStack_133.y;
    pIVar4->vector[0].z = IStack_133.z;
    IStack_134.x = 0;
    IStack_134.y = 0;
    IStack_134.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_134,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_134.x;
    pIVar4->vector[1].y = IStack_134.y;
    pIVar4->vector[1].z = IStack_134.z;
    IStack_135.x = 0;
    IStack_135.y = 0;
    IStack_135.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_135,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_135.x;
    pIVar4->vector[2].y = IStack_135.y;
    pIVar4->vector[2].z = IStack_135.z;
    IStack_136.x = 0;
    IStack_136.y = 0;
    IStack_136.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_136,0,0,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_136.x;
    pIVar4->vector[3].y = IStack_136.y;
    pIVar4->vector[3].z = IStack_136.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 8) goto code_?;
    pIVar3->vector[7] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_137.x = 0;
    IStack_137.y = 0;
    IStack_137.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_137,-1,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_137.x;
    pIVar4->vector[0].y = IStack_137.y;
    pIVar4->vector[0].z = IStack_137.z;
    IStack_138.x = 0;
    IStack_138.y = 0;
    IStack_138.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_138,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_138.x;
    pIVar4->vector[1].y = IStack_138.y;
    pIVar4->vector[1].z = IStack_138.z;
    IStack_139.x = 0;
    IStack_139.y = 0;
    IStack_139.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_139,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_139.x;
    pIVar4->vector[2].y = IStack_139.y;
    pIVar4->vector[2].z = IStack_139.z;
    IStack_140.x = 0;
    IStack_140.y = 0;
    IStack_140.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_140,0,-1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_140.x;
    pIVar4->vector[3].y = IStack_140.y;
    pIVar4->vector[3].z = IStack_140.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 9) goto code_?;
    pIVar3->vector[8] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_141.x = 0;
    IStack_141.y = 0;
    IStack_141.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_141,0,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_141.x;
    pIVar4->vector[0].y = IStack_141.y;
    pIVar4->vector[0].z = IStack_141.z;
    IStack_142.x = 0;
    IStack_142.y = 0;
    IStack_142.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_142,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_142.x;
    pIVar4->vector[1].y = IStack_142.y;
    pIVar4->vector[1].z = IStack_142.z;
    IStack_143.x = 0;
    IStack_143.y = 0;
    IStack_143.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_143,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_143.x;
    pIVar4->vector[2].y = IStack_143.y;
    pIVar4->vector[2].z = IStack_143.z;
    IStack_144.x = 0;
    IStack_144.y = 0;
    IStack_144.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_144,1,-1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_144.x;
    pIVar4->vector[3].y = IStack_144.y;
    pIVar4->vector[3].z = IStack_144.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 10) goto code_?;
    pIVar3->vector[9] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_145.x = 0;
    IStack_145.y = 0;
    IStack_145.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_145,0,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_145.x;
    pIVar4->vector[0].y = IStack_145.y;
    pIVar4->vector[0].z = IStack_145.z;
    IStack_146.x = 0;
    IStack_146.y = 0;
    IStack_146.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_146,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_146.x;
    pIVar4->vector[1].y = IStack_146.y;
    pIVar4->vector[1].z = IStack_146.z;
    IStack_147.x = 0;
    IStack_147.y = 0;
    IStack_147.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_147,1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_147.x;
    pIVar4->vector[2].y = IStack_147.y;
    pIVar4->vector[2].z = IStack_147.z;
    IStack_148.x = 0;
    IStack_148.y = 0;
    IStack_148.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_148,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_148.x;
    pIVar4->vector[3].y = IStack_148.y;
    pIVar4->vector[3].z = IStack_148.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xb) goto code_?;
    pIVar3->vector[10] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_149.x = 0;
    IStack_149.y = 0;
    IStack_149.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_149,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_149.x;
    pIVar4->vector[0].y = IStack_149.y;
    pIVar4->vector[0].z = IStack_149.z;
    IStack_150.x = 0;
    IStack_150.y = 0;
    IStack_150.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_150,-1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_150.x;
    pIVar4->vector[1].y = IStack_150.y;
    pIVar4->vector[1].z = IStack_150.z;
    IStack_151.x = 0;
    IStack_151.y = 0;
    IStack_151.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_151,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_151.x;
    pIVar4->vector[2].y = IStack_151.y;
    pIVar4->vector[2].z = IStack_151.z;
    IStack_152.x = 0;
    IStack_152.y = 0;
    IStack_152.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_152,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_152.x;
    pIVar4->vector[3].y = IStack_152.y;
    pIVar4->vector[3].z = IStack_152.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xc) goto code_?;
    pIVar3->vector[0xb] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_153.x = 0;
    IStack_153.y = 0;
    IStack_153.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_153,0,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_153.x;
    pIVar4->vector[0].y = IStack_153.y;
    pIVar4->vector[0].z = IStack_153.z;
    IStack_154.x = 0;
    IStack_154.y = 0;
    IStack_154.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_154,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_154.x;
    pIVar4->vector[1].y = IStack_154.y;
    pIVar4->vector[1].z = IStack_154.z;
    IStack_155.x = 0;
    IStack_155.y = 0;
    IStack_155.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_155,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_155.x;
    pIVar4->vector[2].y = IStack_155.y;
    pIVar4->vector[2].z = IStack_155.z;
    IStack_156.x = 0;
    IStack_156.y = 0;
    IStack_156.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_156,1,-1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_156.x;
    pIVar4->vector[3].y = IStack_156.y;
    pIVar4->vector[3].z = IStack_156.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xd) goto code_?;
    pIVar3->vector[0xc] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_157.x = 0;
    IStack_157.y = 0;
    IStack_157.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_157,-1,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_157.x;
    pIVar4->vector[0].y = IStack_157.y;
    pIVar4->vector[0].z = IStack_157.z;
    IStack_158.x = 0;
    IStack_158.y = 0;
    IStack_158.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_158,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_158.x;
    pIVar4->vector[1].y = IStack_158.y;
    pIVar4->vector[1].z = IStack_158.z;
    IStack_159.x = 0;
    IStack_159.y = 0;
    IStack_159.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_159,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_159.x;
    pIVar4->vector[2].y = IStack_159.y;
    pIVar4->vector[2].z = IStack_159.z;
    IStack_160.x = 0;
    IStack_160.y = 0;
    IStack_160.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_160,0,-1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_160.x;
    pIVar4->vector[3].y = IStack_160.y;
    pIVar4->vector[3].z = IStack_160.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xe) goto code_?;
    pIVar3->vector[0xd] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_161.x = 0;
    IStack_161.y = 0;
    IStack_161.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_161,-1,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_161.x;
    pIVar4->vector[0].y = IStack_161.y;
    pIVar4->vector[0].z = IStack_161.z;
    IStack_162.x = 0;
    IStack_162.y = 0;
    IStack_162.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_162,-1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_162.x;
    pIVar4->vector[1].y = IStack_162.y;
    pIVar4->vector[1].z = IStack_162.z;
    IStack_163.x = 0;
    IStack_163.y = 0;
    IStack_163.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_163,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_163.x;
    pIVar4->vector[2].y = IStack_163.y;
    pIVar4->vector[2].z = IStack_163.z;
    IStack_164.x = 0;
    IStack_164.y = 0;
    IStack_164.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_164,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_164.x;
    pIVar4->vector[3].y = IStack_164.y;
    pIVar4->vector[3].z = IStack_164.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0xf) goto code_?;
    pIVar3->vector[0xe] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_165.x = 0;
    IStack_165.y = 0;
    IStack_165.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_165,0,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_165.x;
    pIVar4->vector[0].y = IStack_165.y;
    pIVar4->vector[0].z = IStack_165.z;
    IStack_166.x = 0;
    IStack_166.y = 0;
    IStack_166.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_166,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_166.x;
    pIVar4->vector[1].y = IStack_166.y;
    pIVar4->vector[1].z = IStack_166.z;
    IStack_167.x = 0;
    IStack_167.y = 0;
    IStack_167.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_167,1,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_167.x;
    pIVar4->vector[2].y = IStack_167.y;
    pIVar4->vector[2].z = IStack_167.z;
    IStack_168.x = 0;
    IStack_168.y = 0;
    IStack_168.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_168,1,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_168.x;
    pIVar4->vector[3].y = IStack_168.y;
    pIVar4->vector[3].z = IStack_168.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x10) goto code_?;
    pIVar3->vector[0xf] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_169.x = 0;
    IStack_169.y = 0;
    IStack_169.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_169,0,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_169.x;
    pIVar4->vector[0].y = IStack_169.y;
    pIVar4->vector[0].z = IStack_169.z;
    IStack_170.x = 0;
    IStack_170.y = 0;
    IStack_170.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_170,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_170.x;
    pIVar4->vector[1].y = IStack_170.y;
    pIVar4->vector[1].z = IStack_170.z;
    IStack_171.x = 0;
    IStack_171.y = 0;
    IStack_171.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_171,0,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_171.x;
    pIVar4->vector[2].y = IStack_171.y;
    pIVar4->vector[2].z = IStack_171.z;
    IStack_172.x = 0;
    IStack_172.y = 0;
    IStack_172.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_172,0,-1,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_172.x;
    pIVar4->vector[3].y = IStack_172.y;
    pIVar4->vector[3].z = IStack_172.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x11) goto code_?;
    pIVar3->vector[0x10] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_173.x = 0;
    IStack_173.y = 0;
    IStack_173.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_173,0,-1,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_173.x;
    pIVar4->vector[0].y = IStack_173.y;
    pIVar4->vector[0].z = IStack_173.z;
    IStack_174.x = 0;
    IStack_174.y = 0;
    IStack_174.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_174,0,0,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_174.x;
    pIVar4->vector[1].y = IStack_174.y;
    pIVar4->vector[1].z = IStack_174.z;
    IStack_175.x = 0;
    IStack_175.y = 0;
    IStack_175.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_175,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_175.x;
    pIVar4->vector[2].y = IStack_175.y;
    pIVar4->vector[2].z = IStack_175.z;
    IStack_176.x = 0;
    IStack_176.y = 0;
    IStack_176.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_176,0,-1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_176.x;
    pIVar4->vector[3].y = IStack_176.y;
    pIVar4->vector[3].z = IStack_176.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x12) goto code_?;
    pIVar3->vector[0x11] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_177.x = 0;
    IStack_177.y = 0;
    IStack_177.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_177,0,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_177.x;
    pIVar4->vector[0].y = IStack_177.y;
    pIVar4->vector[0].z = IStack_177.z;
    IStack_178.x = 0;
    IStack_178.y = 0;
    IStack_178.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_178,0,1,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = IStack_178.x;
    pIVar4->vector[1].y = IStack_178.y;
    pIVar4->vector[1].z = IStack_178.z;
    IStack_179.x = 0;
    IStack_179.y = 0;
    IStack_179.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_179,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = IStack_179.x;
    pIVar4->vector[2].y = IStack_179.y;
    pIVar4->vector[2].z = IStack_179.z;
    IStack_180.x = 0;
    IStack_180.y = 0;
    IStack_180.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_180,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_180.x;
    pIVar4->vector[3].y = IStack_180.y;
    pIVar4->vector[3].z = IStack_180.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x13) goto code_?;
    pIVar3->vector[0x12] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    IStack_181.x = 0;
    IStack_181.y = 0;
    IStack_181.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_181,0,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = IStack_181.x;
    pIVar4->vector[0].y = IStack_181.y;
    pIVar4->vector[0].z = IStack_181.z;
    pIStack_16 = (IntVector__Array *)0x0;
    pIStack_14 = (Il2CppClass *)((uint)pIStack_14 & 0xffff0000);
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&pIStack_16,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    *(IntVector__Array **)(pIVar4->vector + 1) = pIStack_16;
    pIVar4->vector[1].z = (int16_t)pIStack_14;
    uStack_15._0_2_ = 0;
    uStack_15._2_2_ = 0;
    uStack_15._4_4_ = (undefined *)((uint)uStack_15._4_4_ & 0xffff0000);
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&uStack_15,0,1,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = (int16_t)uStack_15;
    pIVar4->vector[2].y = uStack_15._2_2_;
    pIVar4->vector[2].z = uStack_15._4_2_;
    uVar182._0_2_ = 0;
    uVar182._2_2_ = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa74,0,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = (int16_t)uVar182;
    pIVar4->vector[3].y = SUB42(uVar182,2);
    pIVar4->vector[3].z = 0;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x14) goto code_?;
    pIVar3->vector[0x13] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    uVar183._0_2_ = 0;
    uVar183._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa6c,0,-1,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = (int16_t)uVar183;
    pIVar4->vector[0].y = SUB42(uVar183,2);
    pIVar4->vector[0].z = iVar184;
    uVar185._0_2_ = 0;
    uVar185._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa64,0,0,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = (int16_t)uVar185;
    pIVar4->vector[1].y = SUB42(uVar185,2);
    pIVar4->vector[1].z = iVar184;
    uVar186._0_2_ = 0;
    uVar186._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa5c,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = (int16_t)uVar186;
    pIVar4->vector[2].y = SUB42(uVar186,2);
    pIVar4->vector[2].z = iVar184;
    uVar187._0_2_ = 0;
    uVar187._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa54,0,-1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = (int16_t)uVar187;
    pIVar4->vector[3].y = SUB42(uVar187,2);
    pIVar4->vector[3].z = iVar184;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x15) goto code_?;
    pIVar3->vector[0x14] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    uVar188._0_2_ = 0;
    uVar188._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa4c,0,-1,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = (int16_t)uVar188;
    pIVar4->vector[0].y = SUB42(uVar188,2);
    pIVar4->vector[0].z = iVar184;
    uVar189._0_2_ = 0;
    uVar189._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa44,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = (int16_t)uVar189;
    pIVar4->vector[1].y = SUB42(uVar189,2);
    pIVar4->vector[1].z = iVar184;
    uVar190._0_2_ = 0;
    uVar190._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa3c,0,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = (int16_t)uVar190;
    pIVar4->vector[2].y = SUB42(uVar190,2);
    pIVar4->vector[2].z = iVar184;
    uVar191._0_2_ = 0;
    uVar191._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa34,0,-1,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = (int16_t)uVar191;
    pIVar4->vector[3].y = SUB42(uVar191,2);
    pIVar4->vector[3].z = iVar184;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x16) goto code_?;
    pIVar3->vector[0x15] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    uVar192._0_2_ = 0;
    uVar192._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa2c,0,0,0,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = (int16_t)uVar192;
    pIVar4->vector[0].y = SUB42(uVar192,2);
    pIVar4->vector[0].z = iVar184;
    uVar193._0_2_ = 0;
    uVar193._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa24,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = (int16_t)uVar193;
    pIVar4->vector[1].y = SUB42(uVar193,2);
    pIVar4->vector[1].z = iVar184;
    uVar194._0_2_ = 0;
    uVar194._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa1c,0,1,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2].x = (int16_t)uVar194;
    pIVar4->vector[2].y = SUB42(uVar194,2);
    pIVar4->vector[2].z = iVar184;
    uVar195._0_2_ = 0;
    uVar195._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa14,0,0,1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = (int16_t)uVar195;
    pIVar4->vector[3].y = SUB42(uVar195,2);
    pIVar4->vector[3].z = iVar184;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar3->max_length < 0x17) goto code_?;
    pIVar3->vector[0x16] = pIVar4;
    func_?();
    pIVar4 = (IntVector__Array *)func_?();
    uVar196._0_2_ = 0;
    uVar196._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa0c,0,0,-1,(MethodInfo *)0x0);
    if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0].x = (int16_t)uVar196;
    pIVar4->vector[0].y = SUB42(uVar196,2);
    pIVar4->vector[0].z = iVar184;
    uVar197._0_2_ = 0;
    uVar197._2_2_ = 0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffa04,0,1,-1,(MethodInfo *)0x0);
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1].x = (int16_t)uVar197;
    pIVar4->vector[1].y = SUB42(uVar197,2);
    pIVar4->vector[1].z = iVar184;
    puStack_198 = (undefined *)0x0;
    iVar184 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&puStack_198,0,1,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 3) goto code_?;
    *(undefined **)(pIVar4->vector + 2) = puStack_198;
    pIVar4->vector[2].z = iVar184;
    IStack_199.x = 0;
    IStack_199.y = 0;
    IStack_199.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_199,0,0,0,(MethodInfo *)0x0);
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3].x = IStack_199.x;
    pIVar4->vector[3].y = IStack_199.y;
    pIVar4->vector[3].z = IStack_199.z;
    pIStack_14 = (pIVar3->klass->_0).element_class;
    uStack_15._4_4_ = &UNK_?;
    pIStack_16 = pIVar4;
    iVar9 = func_?();
    if (iVar9 != 0) {
      if (0x17 < pIVar3->max_length) {
        pIVar3->vector[0x17] = pIVar4;
        func_?();
        TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsetsInside = pIVar3;
        func_?();
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar200 = (code *)swi(3);
  (*pcVar200)();
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

