
/* Mesh CreateTriangularPrism(Vector3, Single, Single, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PrismMesh::PrismMesh_CreateTriangularPrism(Vector3 *baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,float height,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_905D214FE6019886C36969B7BE09762E54A832D5F0E88FB06B774CE42A8DC642_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = ABS(baseWidth);
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  fVar2 = ABS(baseDepth);
  if (fVar2 <= 0.0001) {
    fVar2 = 0.0001;
  }
  fVar3 = ABS(topWidth);
  if (fVar3 <= 0.0001) {
    fVar3 = 0.0001;
  }
  fVar4 = ABS(topDepth);
  if (fVar4 <= 0.0001) {
    fVar4 = 0.0001;
  }
  fVar5 = ABS(height);
  if (fVar5 <= 0.0001) {
    fVar5 = 0.0001;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAStack_6 = *(Array__Class **)baseCenter;
  pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fStack_8 = baseCenter->z;
  aQStack_9[0].x = (pQVar7->identityQuaternion).x;
  aQStack_9[0].y = (pQVar7->identityQuaternion).y;
  aQStack_9[0].z = (pQVar7->identityQuaternion).z;
  aQStack_9[0].w = (pQVar7->identityQuaternion).w;
  pLVar10 = PrismMath::PrismMath_CalcTriangPrismCornerPoints((Vector3 *)&pAStack_6,fVar1,fVar2,fVar3,fVar4,fVar5,aQStack_9,(MethodInfo *)0x0);
  if (pLVar10 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((pLVar10->fields)._size == 0) goto code_?;
    pVVar11 = (pLVar10->fields)._items;
    if (pVVar11 != (Vector3__Array *)0x0) {
      if ((int)pVVar11->max_length != 0) {
        pMVar12 = *(MonitorData **)pVVar11->vector;
        fVar1 = pVVar11->vector[0].z;
        if ((uint)(pLVar10->fields)._size < 2) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          pMVar14 = (Mesh *)(*pcVar13)();
          return pMVar14;
        }
        if (1 < (uint)pVVar11->max_length) {
          pAVar15 = *(Array__Class **)(pVVar11->vector + 1);
          fVar2 = pVVar11->vector[1].z;
          if ((uint)(pLVar10->fields)._size < 3) goto code_?;
          if (2 < (uint)pVVar11->max_length) {
            uVar16._0_4_ = pVVar11->vector[2].x;
            uVar16._4_4_ = pVVar11->vector[2].y;
            fVar3 = pVVar11->vector[2].z;
            if ((uint)(pLVar10->fields)._size < 4) goto code_?;
            if (3 < (uint)pVVar11->max_length) {
              pAVar17 = *(Array__Class **)(pVVar11->vector + 3);
              fVar4 = pVVar11->vector[3].z;
              if ((uint)(pLVar10->fields)._size < 6) goto code_?;
              if (5 < (uint)pVVar11->max_length) {
                pAVar18 = *(Array__Class **)(pVVar11->vector + 5);
                fVar5 = pVVar11->vector[5].z;
                pAVar19 = *(Array__Class **)(pVVar11->vector + 4);
                fVar20 = pVVar11->vector[4].z;
                pAVar21 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x12);
                if (pAVar21 == (Array *)0x0) goto code_?;
                if (*(int *)&pAVar21[1].monitor != 0) {
                  pAVar21[2].klass = pAVar17;
                  *(float *)&pAVar21[2].monitor = fVar4;
                  if (1 < *(uint *)&pAVar21[1].monitor) {
                    *(Array__Class **)((longlong)&pAVar21[2].monitor + 4) = pAVar19;
                    *(float *)((longlong)&pAVar21[3].klass + 4) = fVar20;
                    if (2 < *(uint *)&pAVar21[1].monitor) {
                      pAVar21[3].monitor = (MonitorData *)pAVar18;
                      *(float *)&pAVar21[4].klass = fVar5;
                      if (3 < *(uint *)&pAVar21[1].monitor) {
                        *(MonitorData **)((longlong)&pAVar21[4].klass + 4) = pMVar12;
                        *(float *)((longlong)&pAVar21[4].monitor + 4) = fVar1;
                        if (4 < *(uint *)&pAVar21[1].monitor) {
                          pAVar21[5].klass = pAVar15;
                          *(float *)&pAVar21[5].monitor = fVar2;
                          if (5 < *(uint *)&pAVar21[1].monitor) {
                            *(undefined8 *)((longlong)&pAVar21[5].monitor + 4) = uVar16;
                            *(float *)((longlong)&pAVar21[6].klass + 4) = fVar3;
                            if (6 < *(uint *)&pAVar21[1].monitor) {
                              pAVar21[6].monitor = pMVar12;
                              *(float *)&pAVar21[7].klass = fVar1;
                              if (7 < *(uint *)&pAVar21[1].monitor) {
                                *(Array__Class **)((longlong)&pAVar21[7].klass + 4) = pAVar17;
                                *(float *)((longlong)&pAVar21[7].monitor + 4) = fVar4;
                                if (8 < *(uint *)&pAVar21[1].monitor) {
                                  pAVar21[8].klass = pAVar18;
                                  *(float *)&pAVar21[8].monitor = fVar5;
                                  if (9 < *(uint *)&pAVar21[1].monitor) {
                                    *(Array__Class **)((longlong)&pAVar21[8].monitor + 4) = pAVar15;
                                    *(float *)((longlong)&pAVar21[9].klass + 4) = fVar2;
                                    if (10 < *(uint *)&pAVar21[1].monitor) {
                                      pAVar21[9].monitor = pMVar12;
                                      *(float *)&pAVar21[10].klass = fVar1;
                                      if (0xb < *(uint *)&pAVar21[1].monitor) {
                                        *(undefined8 *)((longlong)&pAVar21[10].klass + 4) = uVar16;
                                        *(float *)((longlong)&pAVar21[10].monitor + 4) = fVar3;
                                        if (0xc < *(uint *)&pAVar21[1].monitor) {
                                          pAVar21[0xb].klass = pAVar19;
                                          *(float *)&pAVar21[0xb].monitor = fVar20;
                                          if (0xd < *(uint *)&pAVar21[1].monitor) {
                                            *(Array__Class **)((longlong)&pAVar21[0xb].monitor + 4) = pAVar17;
                                            *(float *)((longlong)&pAVar21[0xc].klass + 4) = fVar4;
                                            if (0xe < *(uint *)&pAVar21[1].monitor) {
                                              pAVar21[0xc].monitor = (MonitorData *)pAVar15;
                                              *(float *)&pAVar21[0xd].klass = fVar2;
                                              if (0xf < *(uint *)&pAVar21[1].monitor) {
                                                *(Array__Class **)((longlong)&pAVar21[0xd].klass + 4) = pAVar18;
                                                *(float *)((longlong)&pAVar21[0xd].monitor + 4) = fVar5;
                                                if (0x10 < *(uint *)&pAVar21[1].monitor) {
                                                  pAVar21[0xe].klass = pAVar19;
                                                  *(float *)&pAVar21[0xe].monitor = fVar20;
                                                  if (0x11 < *(uint *)&pAVar21[1].monitor) {
                                                    *(undefined8 *)((longlong)&pAVar21[0xe].monitor + 4) = uVar16;
                                                    *(float *)((longlong)&pAVar21[0xf].klass + 4) = fVar3;
                                                    indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x18);
                                                    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__905D214FE6019886C36969B7BE09762E54A832D5F0E88FB06B774CE42A8DC642_Field,(MethodInfo *)0x0);
                                                    if (0xb < *(uint *)&pAVar21[1].monitor) {
                                                      uVar16 = *(undefined8 *)((longlong)&pAVar21[10].klass + 4);
                                                      pAStack_6 = (Array__Class *)pAVar21[9].monitor;
                                                      fVar3 = (float)uVar16 - SUB84(pAStack_6,0);
                                                      fVar4 = *(float *)((longlong)&pAVar21[10].monitor + 4) - *(float *)&pAVar21[10].klass;
                                                      fVar1 = (float)((ulonglong)pAStack_6 >> 0x20);
                                                      fVar2 = (float)((ulonglong)uVar16 >> 0x20) - fVar1;
                                                      if (0xd < *(uint *)&pAVar21[1].monitor) {
                                                        uVar16 = *(undefined8 *)((longlong)&pAVar21[0xb].monitor + 4);
                                                        fVar20 = (float)uVar16 - SUB84(pAStack_6,0);
                                                        fVar1 = (float)((ulonglong)uVar16 >> 0x20) - fVar1;
                                                        fVar5 = *(float *)((longlong)&pAVar21[0xc].klass + 4) - *(float *)&pAVar21[10].klass;
                                                        fVar22 = fVar5 * fVar2 - fVar1 * fVar4;
                                                        fVar4 = fVar20 * fVar4 - fVar5 * fVar3;
                                                        fVar1 = fVar1 * fVar3 - fVar20 * fVar2;
                                                        pAStack_6 = (Array__Class *)CONCAT44(fVar4,fVar22);
                                                        fStack_8 = fVar1;
                                                        fVar2 = (float)FUN_?(&pAStack_6);
                                                        if (1e-05 < fVar2) {
                                                          fVar1 = fVar1 / fVar2;
                                                          pAStack_23 = (Array__Class *)CONCAT44(fVar4 / fVar2,fVar22 / fVar2);
                                                        }
                                                        else {
                                                          if (cRam_? == '\0') {
                                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                            LOCK();
                                                            UNLOCK();
                                                            cRam_? = '\x01';
                                                          }
                                                          pAStack_23 = *(Array__Class **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
                                                          fVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                                                        }
                                                        if (0xf < *(uint *)&pAVar21[1].monitor) {
                                                          uVar16 = *(undefined8 *)((longlong)&pAVar21[0xd].klass + 4);
                                                          pAStack_6 = (Array__Class *)pAVar21[0xc].monitor;
                                                          fVar4 = (float)uVar16 - SUB84(pAStack_6,0);
                                                          fVar5 = *(float *)((longlong)&pAVar21[0xd].monitor + 4) - *(float *)&pAVar21[0xd].klass;
                                                          fVar2 = (float)((ulonglong)pAStack_6 >> 0x20);
                                                          fVar3 = (float)((ulonglong)uVar16 >> 0x20) - fVar2;
                                                          if (0x11 < *(uint *)&pAVar21[1].monitor) {
                                                            uVar16 = *(undefined8 *)((longlong)&pAVar21[0xe].monitor + 4);
                                                            fVar22 = (float)uVar16 - SUB84(pAStack_6,0);
                                                            fVar2 = (float)((ulonglong)uVar16 >> 0x20) - fVar2;
                                                            fVar20 = *(float *)((longlong)&pAVar21[0xf].klass + 4) - *(float *)&pAVar21[0xd].klass;
                                                            fVar24 = fVar20 * fVar3 - fVar2 * fVar5;
                                                            fVar5 = fVar22 * fVar5 - fVar20 * fVar4;
                                                            fVar2 = fVar2 * fVar4 - fVar22 * fVar3;
                                                            pAStack_6 = (Array__Class *)CONCAT44(fVar5,fVar24);
                                                            fStack_8 = fVar2;
                                                            fVar3 = (float)FUN_?(&pAStack_6);
                                                            if (1e-05 < fVar3) {
                                                              fVar2 = fVar2 / fVar3;
                                                              pAStack_6 = (Array__Class *)CONCAT44(fVar5 / fVar3,fVar24 / fVar3);
                                                            }
                                                            else {
                                                              if (cRam_? == '\0') {
                                                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                LOCK();
                                                                UNLOCK();
                                                                cRam_? = '\x01';
                                                              }
                                                              pAStack_6 = *(Array__Class **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
                                                              fVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                                                            }
                                                            this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x12);
                                                            if (cRam_? == '\0') {
                                                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                              LOCK();
                                                              UNLOCK();
                                                              cRam_? = '\x01';
                                                            }
                                                            cVar25 = cRam_?;
                                                            pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                            if (this == (Array *)0x0) goto code_?;
                                                            if (*(int *)&this[1].monitor != 0) {
                                                              this[2].klass = *(Array__Class **)&pVVar26->upVector;
                                                              *(float *)&this[2].monitor = (pVVar26->upVector).z;
                                                              if (cVar25 == '\0') {
                                                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                LOCK();
                                                                UNLOCK();
                                                                cVar25 = '\x01';
                                                                cRam_? = '\x01';
                                                              }
                                                              pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                              if (1 < *(uint *)&this[1].monitor) {
                                                                *(undefined8 *)((longlong)&this[2].monitor + 4) = *(undefined8 *)&pVVar26->upVector;
                                                                *(float *)((longlong)&this[3].klass + 4) = (pVVar26->upVector).z;
                                                                if (cVar25 == '\0') {
                                                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                  LOCK();
                                                                  UNLOCK();
                                                                  cVar25 = '\x01';
                                                                  cRam_? = '\x01';
                                                                }
                                                                pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                if (2 < *(uint *)&this[1].monitor) {
                                                                  this[3].monitor = *(MonitorData **)&pVVar26->upVector;
                                                                  *(float *)&this[4].klass = (pVVar26->upVector).z;
                                                                  if (cVar25 == '\0') {
                                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                    LOCK();
                                                                    UNLOCK();
                                                                    cVar25 = '\x01';
                                                                    cRam_? = '\x01';
                                                                  }
                                                                  pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                  uVar27 = (pVVar26->upVector).x;
                                                                  fVar3 = (pVVar26->upVector).z;
                                                                  if (3 < *(uint *)&this[1].monitor) {
                                                                    *(ulonglong *)((longlong)&this[4].klass + 4) = CONCAT44((pVVar26->upVector).y,uVar27) ^ 0x8000000080000000;
                                                                    *(float *)((longlong)&this[4].monitor + 4) = -fVar3;
                                                                    if (cVar25 == '\0') {
                                                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                      LOCK();
                                                                      UNLOCK();
                                                                      cVar25 = '\x01';
                                                                      cRam_? = '\x01';
                                                                    }
                                                                    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                    uVar28 = (pVVar26->upVector).x;
                                                                    fVar3 = (pVVar26->upVector).z;
                                                                    if (4 < *(uint *)&this[1].monitor) {
                                                                      this[5].klass = (Array__Class *)(CONCAT44((pVVar26->upVector).y,uVar28) ^ 0x8000000080000000);
                                                                      *(float *)&this[5].monitor = -fVar3;
                                                                      if (cVar25 == '\0') {
                                                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                        LOCK();
                                                                        UNLOCK();
                                                                        cRam_? = '\x01';
                                                                      }
                                                                      cVar25 = cRam_?;
                                                                      pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                      uVar29 = (pVVar26->upVector).x;
                                                                      fVar3 = (pVVar26->upVector).z;
                                                                      if (5 < *(uint *)&this[1].monitor) {
                                                                        *(ulonglong *)((longlong)&this[5].monitor + 4) = CONCAT44((pVVar26->upVector).y,uVar29) ^ 0x8000000080000000;
                                                                        *(float *)((longlong)&this[6].klass + 4) = -fVar3;
                                                                        if (cVar25 == '\0') {
                                                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                          LOCK();
                                                                          UNLOCK();
                                                                          cVar25 = '\x01';
                                                                          cRam_? = '\x01';
                                                                        }
                                                                        pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                        uVar30 = (pVVar26->forwardVector).x;
                                                                        fVar3 = (pVVar26->forwardVector).z;
                                                                        if (6 < *(uint *)&this[1].monitor) {
                                                                          this[6].monitor = (MonitorData *)(CONCAT44((pVVar26->forwardVector).y,uVar30) ^ 0x8000000080000000);
                                                                          *(float *)&this[7].klass = -fVar3;
                                                                          if (cVar25 == '\0') {
                                                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                            LOCK();
                                                                            UNLOCK();
                                                                            cVar25 = '\x01';
                                                                            cRam_? = '\x01';
                                                                          }
                                                                          pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                          uVar31 = (pVVar26->forwardVector).x;
                                                                          fVar3 = (pVVar26->forwardVector).z;
                                                                          if (7 < *(uint *)&this[1].monitor) {
                                                                            *(ulonglong *)((longlong)&this[7].klass + 4) = CONCAT44((pVVar26->forwardVector).y,uVar31) ^ 0x8000000080000000;
                                                                            *(float *)((longlong)&this[7].monitor + 4) = -fVar3;
                                                                            if (cVar25 == '\0') {
                                                                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                              LOCK();
                                                                              UNLOCK();
                                                                              cVar25 = '\x01';
                                                                              cRam_? = '\x01';
                                                                            }
                                                                            pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                            uVar32 = (pVVar26->forwardVector).x;
                                                                            fVar3 = (pVVar26->forwardVector).z;
                                                                            if (8 < *(uint *)&this[1].monitor) {
                                                                              this[8].klass = (Array__Class *)(CONCAT44((pVVar26->forwardVector).y,uVar32) ^ 0x8000000080000000);
                                                                              *(float *)&this[8].monitor = -fVar3;
                                                                              if (cVar25 == '\0') {
                                                                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                LOCK();
                                                                                UNLOCK();
                                                                                cRam_? = '\x01';
                                                                              }
                                                                              pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                              uVar33 = (pVVar26->forwardVector).x;
                                                                              fVar3 = (pVVar26->forwardVector).z;
                                                                              if (9 < *(uint *)&this[1].monitor) {
                                                                                *(ulonglong *)((longlong)&this[8].monitor + 4) = CONCAT44((pVVar26->forwardVector).y,uVar33) ^ 0x8000000080000000;
                                                                                *(float *)((longlong)&this[9].klass + 4) = -fVar3;
                                                                                if (10 < *(uint *)&this[1].monitor) {
                                                                                  this[9].monitor = (MonitorData *)pAStack_23;
                                                                                  *(float *)&this[10].klass = fVar1;
                                                                                  if (0xb < *(uint *)&this[1].monitor) {
                                                                                    *(Array__Class **)((longlong)&this[10].klass + 4) = pAStack_23;
                                                                                    *(float *)((longlong)&this[10].monitor + 4) = fVar1;
                                                                                    if (0xc < *(uint *)&this[1].monitor) {
                                                                                      this[0xb].klass = pAStack_23;
                                                                                      *(float *)&this[0xb].monitor = fVar1;
                                                                                      if (0xd < *(uint *)&this[1].monitor) {
                                                                                        *(Array__Class **)((longlong)&this[0xb].monitor + 4) = pAStack_23;
                                                                                        *(float *)((longlong)&this[0xc].klass + 4) = fVar1;
                                                                                        if (0xe < *(uint *)&this[1].monitor) {
                                                                                          this[0xc].monitor = (MonitorData *)pAStack_6;
                                                                                          *(float *)&this[0xd].klass = fVar2;
                                                                                          if (0xf < *(uint *)&this[1].monitor) {
                                                                                            *(Array__Class **)((longlong)&this[0xd].klass + 4) = pAStack_6;
                                                                                            *(float *)((longlong)&this[0xd].monitor + 4) = fVar2;
                                                                                            if (0x10 < *(uint *)&this[1].monitor) {
                                                                                              this[0xe].klass = pAStack_6;
                                                                                              *(float *)&this[0xe].monitor = fVar2;
                                                                                              if (0x11 < *(uint *)&this[1].monitor) {
                                                                                                *(Array__Class **)((longlong)&this[0xe].monitor + 4) = pAStack_6;
                                                                                                *(float *)((longlong)&this[0xf].klass + 4) = fVar2;
                                                                                                pMVar14 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                                                                                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar14,(MethodInfo *)0x0);
                                                                                                if (pMVar14 != (Mesh *)0x0) {
                                                                                                  if (cRam_? == '\0') {
                                                                                                    FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
                                                                                                    LOCK();
                                                                                                    UNLOCK();
                                                                                                    cRam_? = '\x01';
                                                                                                  }
                                                                                                  iVar34 = mscorlib.dll::System::Array::Array_get_Length(pAVar21,(MethodInfo *)0x0);
                                                                                                  valuesArrayLength = 0;
                                                                                                  lVar35 = 0;
                                                                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar14,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,pAVar21,iVar34,0,iVar34,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                                                                                  iVar36 = *(int *)&pAVar21[1].monitor;
                                                                                                  if (cRam_? == '\0') {
                                                                                                    FUN_?(&TypeInfo__UnityEngine__Color);
                                                                                                    LOCK();
                                                                                                    UNLOCK();
                                                                                                    cRam_? = '\x01';
                                                                                                  }
                                                                                                  pAVar21 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
                                                                                                  if (0 < iVar36) {
                                                                                                    pAVar37 = pAVar21 + 2;
                                                                                                    uVar38 = valuesArrayLength;
                                                                                                    if (pAVar21 == (Array *)0x0) goto code_?;
                                                                                                    do {
                                                                                                      if (*(uint *)&pAVar21[1].monitor <= uVar38) goto code_?;
                                                                                                      fVar1 = color->g;
                                                                                                      fVar2 = color->b;
                                                                                                      fVar3 = color->a;
                                                                                                      lVar35 = lVar35 + 1;
                                                                                                      *(float *)&pAVar37->klass = color->r;
                                                                                                      *(float *)((longlong)&pAVar37->klass + 4) = fVar1;
                                                                                                      *(float *)&pAVar37->monitor = fVar2;
                                                                                                      *(float *)((longlong)&pAVar37->monitor + 4) = fVar3;
                                                                                                      pAVar37 = pAVar37 + 1;
                                                                                                      uVar38 = uVar38 + 1;
                                                                                                    } while (lVar35 < iVar36);
                                                                                                  }
                                                                                                  if (cRam_? == '\0') {
                                                                                                    FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_);
                                                                                                    LOCK();
                                                                                                    UNLOCK();
                                                                                                    cRam_? = '\x01';
                                                                                                  }
                                                                                                  if (pAVar21 != (Array *)0x0) {
                                                                                                    valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(pAVar21,(MethodInfo *)0x0);
                                                                                                  }
                                                                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar14,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,pAVar21,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                                                                                  if (cRam_? == '\0') {
                                                                                                    FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
                                                                                                    LOCK();
                                                                                                    UNLOCK();
                                                                                                    cRam_? = '\x01';
                                                                                                  }
                                                                                                  iVar34 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
                                                                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar14,VertexAttribute__Enum_Normal,VertexAttributeFormat__Enum_Float32,3,this,iVar34,0,iVar34,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                                                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar14,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                                                                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar14,0,(MethodInfo *)0x0);
                                                                                                  return pMVar14;
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
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      pMVar14 = (Mesh *)(*pcVar13)();
      return pMVar14;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  pMVar14 = (Mesh *)(*pcVar13)();
  return pMVar14;
}


/* Mesh CreateWireTriangularPrism(Vector3, Single, Single, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PrismMesh::PrismMesh_CreateWireTriangularPrism(Vector3 *baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,float height,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_6F9C6EAE4AB4A7A9E05892CCFB9A9F1510EE5178EF8924458107895A1468FE0B_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = ABS(baseWidth);
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  fVar2 = ABS(baseDepth);
  if (fVar2 <= 0.0001) {
    fVar2 = 0.0001;
  }
  fVar3 = ABS(topWidth);
  if (fVar3 <= 0.0001) {
    fVar3 = 0.0001;
  }
  fVar4 = ABS(topDepth);
  if (fVar4 <= 0.0001) {
    fVar4 = 0.0001;
  }
  fVar5 = ABS(height);
  if (fVar5 <= 0.0001) {
    fVar5 = 0.0001;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar6 = 0;
  VStack_7.x = baseCenter->x;
  VStack_7.y = baseCenter->y;
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  VStack_7.z = baseCenter->z;
  aQStack_9[0].x = (pQVar8->identityQuaternion).x;
  aQStack_9[0].y = (pQVar8->identityQuaternion).y;
  aQStack_9[0].z = (pQVar8->identityQuaternion).z;
  aQStack_9[0].w = (pQVar8->identityQuaternion).w;
  pLVar10 = PrismMath::PrismMath_CalcTriangPrismCornerPoints(&VStack_7,fVar1,fVar2,fVar3,fVar4,fVar5,aQStack_9,(MethodInfo *)0x0);
  if (pLVar10 != (List_1_UnityEngine_Vector3_ *)0x0) {
    valuesArrayLength_00 = 0;
    if ((pLVar10->fields)._size == 0) goto code_?;
    pVVar11 = (pLVar10->fields)._items;
    if (pVVar11 != (Vector3__Array *)0x0) {
      if ((int)pVVar11->max_length != 0) {
        pAVar12 = *(Array__Class **)pVVar11->vector;
        fVar1 = pVVar11->vector[0].z;
        if ((uint)(pLVar10->fields)._size < 2) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          pMVar14 = (Mesh *)(*pcVar13)();
          return pMVar14;
        }
        if (1 < (uint)pVVar11->max_length) {
          pMVar15 = *(MonitorData **)(pVVar11->vector + 1);
          fVar2 = pVVar11->vector[1].z;
          if ((uint)(pLVar10->fields)._size < 3) goto code_?;
          if (2 < (uint)pVVar11->max_length) {
            uVar16 = *(undefined8 *)(pVVar11->vector + 2);
            fVar3 = pVVar11->vector[2].z;
            if ((uint)(pLVar10->fields)._size < 4) goto code_?;
            if (3 < (uint)pVVar11->max_length) {
              uVar17 = *(undefined8 *)(pVVar11->vector + 3);
              fVar4 = pVVar11->vector[3].z;
              if ((uint)(pLVar10->fields)._size < 6) goto code_?;
              if (5 < (uint)pVVar11->max_length) {
                uVar18 = *(undefined8 *)(pVVar11->vector + 5);
                fVar5 = pVVar11->vector[5].z;
                pAVar19 = *(Array__Class **)(pVVar11->vector + 4);
                fVar20 = pVVar11->vector[4].z;
                pAVar21 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,6);
                if (pAVar21 == (Array *)0x0) goto code_?;
                if (*(int *)&pAVar21[1].monitor != 0) {
                  pAVar21[2].klass = pAVar12;
                  *(float *)&pAVar21[2].monitor = fVar1;
                  if (1 < *(uint *)&pAVar21[1].monitor) {
                    *(undefined8 *)((longlong)&pAVar21[2].monitor + 4) = uVar16;
                    *(float *)((longlong)&pAVar21[3].klass + 4) = fVar3;
                    if (2 < *(uint *)&pAVar21[1].monitor) {
                      pAVar21[3].monitor = pMVar15;
                      *(float *)&pAVar21[4].klass = fVar2;
                      if (3 < *(uint *)&pAVar21[1].monitor) {
                        *(undefined8 *)((longlong)&pAVar21[4].klass + 4) = uVar17;
                        *(float *)((longlong)&pAVar21[4].monitor + 4) = fVar4;
                        if (4 < *(uint *)&pAVar21[1].monitor) {
                          pAVar21[5].klass = pAVar19;
                          *(float *)&pAVar21[5].monitor = fVar20;
                          if (5 < *(uint *)&pAVar21[1].monitor) {
                            *(undefined8 *)((longlong)&pAVar21[5].monitor + 4) = uVar18;
                            *(float *)((longlong)&pAVar21[6].klass + 4) = fVar5;
                            indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x12);
                            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__6F9C6EAE4AB4A7A9E05892CCFB9A9F1510EE5178EF8924458107895A1468FE0B_Field,(MethodInfo *)0x0);
                            pMVar14 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar14,(MethodInfo *)0x0);
                            if (pMVar14 != (Mesh *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(pAVar21,(MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar14,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,pAVar21,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                              iVar22 = *(int *)&pAVar21[1].monitor;
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__UnityEngine__Color);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pAVar21 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
                              if (0 < iVar22) {
                                pAVar23 = pAVar21 + 2;
                                uVar24 = uVar6;
                                if (pAVar21 == (Array *)0x0) goto code_?;
                                do {
                                  if (*(uint *)&pAVar21[1].monitor <= (uint)uVar6) goto code_?;
                                  fVar1 = color->g;
                                  fVar2 = color->b;
                                  fVar3 = color->a;
                                  uVar6 = (ulonglong)((uint)uVar6 + 1);
                                  uVar24 = uVar24 + 1;
                                  *(float *)&pAVar23->klass = color->r;
                                  *(float *)((longlong)&pAVar23->klass + 4) = fVar1;
                                  *(float *)&pAVar23->monitor = fVar2;
                                  *(float *)((longlong)&pAVar23->monitor + 4) = fVar3;
                                  pAVar23 = pAVar23 + 1;
                                } while ((longlong)uVar24 < (longlong)iVar22);
                              }
                              if (cRam_? == '\0') {
                                FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              if (pAVar21 != (Array *)0x0) {
                                valuesArrayLength_00 = mscorlib.dll::System::Array::Array_get_Length(pAVar21,(MethodInfo *)0x0);
                              }
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar14,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,pAVar21,valuesArrayLength_00,0,valuesArrayLength_00,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar14,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar14,0,(MethodInfo *)0x0);
                              return pMVar14;
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
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      pMVar14 = (Mesh *)(*pcVar13)();
      return pMVar14;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  pMVar14 = (Mesh *)(*pcVar13)();
  return pMVar14;
}

