
/* Mesh CreateCylindricalTorus(Vector3, Single, Single, Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::TorusMesh::TorusMesh_CreateCylindricalTorus
                 (Vector3 *center,float coreRadius,float tubeHrzRadius,float tubeVertRadius,
                 int32_t numTubeSlices,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((coreRadius < _UNK_?) || (tubeHrzRadius < _UNK_?)) || (numTubeSlices < 3)) {
    return (Mesh *)0x0;
  }
  iVar1 = numTubeSlices * 8 + 8;
  pAVar2 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar1);
  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar1);
  this_00 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector2,iVar1);
  uVar3 = _UNK_?;
  pAVar4 = this + 2;
  fVar5 = center->z;
  pfVar6 = (float *)((longlong)&this_00[2].monitor + 4);
  iVar7 = 0;
  lVar8 = (longlong)pAVar2 - (longlong)this;
  fVar9 = _UNK_? / (float)(numTubeSlices + -1);
  uVar10 = center->x;
  uVar11 = center->y;
  uVar12 = 2;
  do {
    fVar13 = (float)FUN_?();
    fVar14 = (float)FUN_?();
    uStack_15 = (ulonglong)(uint)fVar13;
    fStack_16 = fVar14;
    fVar17 = (float)FUN_?(&uStack_15);
    if (_UNK_? < fVar17) {
      fVar14 = fVar14 / fVar17;
      uStack_18 = CONCAT44(0.0 / fVar17,fVar13 / fVar17);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_18._0_4_ = (pVVar19->zeroVector).x;
      uStack_18._4_4_ = (pVVar19->zeroVector).y;
      fVar14 = (pVVar19->zeroVector).z;
    }
    cVar20 = cRam_?;
    fVar13 = (float)uStack_18 * coreRadius + (float)uVar10;
    fVar17 = uStack_18._4_4_ * coreRadius + (float)uVar11;
    fVar21 = fVar14 * coreRadius + fVar5;
    if (this_00 == (Array *)0x0) goto code_?;
    if (*(uint *)&this_00[1].monitor <= uVar12 - 2) goto code_?;
    pfVar6[-3] = (float)uStack_18;
    pfVar6[-2] = fVar14;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar22 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (pAVar2 == (Array *)0x0) goto code_?;
    if (*(uint *)&pAVar2[1].monitor <= uVar12 - 2) goto code_?;
    *(ulonglong *)(lVar8 + (longlong)pAVar4) =
         CONCAT44(((pVVar19->upVector).y * tubeVertRadius + fVar17) -
                  uStack_18._4_4_ * tubeHrzRadius,
                  ((float)uVar22 * tubeVertRadius + fVar13) - (float)uStack_18 * tubeHrzRadius);
    *(float *)(lVar8 + 8 + (longlong)pAVar4) =
         (fVar23 * tubeVertRadius + fVar21) - fVar14 * tubeHrzRadius;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (this == (Array *)0x0) goto code_?;
    if (*(uint *)&this[1].monitor <= uVar12 - 2) goto code_?;
    pAVar4->klass = *(Array__Class **)&pVVar19->upVector;
    *(float *)&pAVar4->monitor = (pVVar19->upVector).z;
    if (*(uint *)&this_00[1].monitor <= uVar12 - 1) goto code_?;
    pfVar6[-1] = (float)uStack_18;
    *pfVar6 = fVar14;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar24 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar12 - 1) goto code_?;
    *(ulonglong *)(lVar8 + 0xc + (longlong)pAVar4) =
         CONCAT44((pVVar19->upVector).y * tubeVertRadius + fVar17 + uStack_18._4_4_ * tubeHrzRadius
                  ,(float)uVar24 * tubeVertRadius + fVar13 + (float)uStack_18 * tubeHrzRadius);
    *(float *)(lVar8 + 0x14 + (longlong)pAVar4) =
         fVar23 * tubeVertRadius + fVar21 + fVar14 * tubeHrzRadius;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (*(uint *)&this[1].monitor <= uVar12 - 1) goto code_?;
    *(undefined8 *)((longlong)&pAVar4->monitor + 4) = *(undefined8 *)&pVVar19->upVector;
    *(float *)((longlong)&pAVar4[1].klass + 4) = (pVVar19->upVector).z;
    if (*(uint *)&this_00[1].monitor <= uVar12) goto code_?;
    *(float *)(&this_00[2].klass + (int)uVar12) = (float)uStack_18;
    *(float *)((longlong)&this_00[2].klass + (longlong)(int)uVar12 * 8 + 4) = fVar14;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar25 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar12) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[2].klass + (longlong)(int)uVar12 * 0xc) =
         CONCAT44((pVVar19->upVector).y * tubeVertRadius + fVar17 + uStack_18._4_4_ * tubeHrzRadius
                  ,(float)uVar25 * tubeVertRadius + fVar13 + (float)uStack_18 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[2].monitor + (longlong)(int)uVar12 * 0xc) =
         fVar23 * tubeVertRadius + fVar21 + fVar14 * tubeHrzRadius;
    if (*(uint *)&this[1].monitor <= uVar12) goto code_?;
    *(undefined8 *)((longlong)&this[2].klass + (longlong)(int)uVar12 * 0xc) = uStack_18;
    *(float *)((longlong)&this[2].monitor + (longlong)(int)uVar12 * 0xc) = fVar14;
    if (*(uint *)&this_00[1].monitor <= uVar12 + 1) goto code_?;
    *(float *)(&this_00[2].monitor + (int)uVar12) = (float)uStack_18;
    *(float *)((longlong)&this_00[2].monitor + (longlong)(int)uVar12 * 8 + 4) = fVar14;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar26 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar12 + 1) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[2].monitor + (longlong)(int)uVar12 * 0xc + 4) =
         CONCAT44((fVar17 - (pVVar19->upVector).y * tubeVertRadius) +
                  uStack_18._4_4_ * tubeHrzRadius,
                  (fVar13 - (float)uVar26 * tubeVertRadius) + (float)uStack_18 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[3].klass + (longlong)(int)uVar12 * 0xc + 4) =
         (fVar21 - fVar23 * tubeVertRadius) + fVar14 * tubeHrzRadius;
    if (*(uint *)&this[1].monitor <= uVar12 + 1) goto code_?;
    *(undefined8 *)((longlong)&this[2].monitor + (longlong)(int)uVar12 * 0xc + 4) = uStack_18;
    *(float *)((longlong)&this[3].klass + (longlong)(int)uVar12 * 0xc + 4) = fVar14;
    if (*(uint *)&this_00[1].monitor <= uVar12 + 2) goto code_?;
    *(float *)(&this_00[3].klass + (int)uVar12) = (float)uStack_18;
    *(float *)((longlong)&this_00[3].klass + (longlong)(int)uVar12 * 8 + 4) = fVar14;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar12 + 2) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[3].monitor + (longlong)(int)uVar12 * 0xc) =
         CONCAT44((fVar17 - (pVVar19->upVector).y * tubeVertRadius) +
                  uStack_18._4_4_ * tubeHrzRadius,
                  (fVar13 - (float)uVar27 * tubeVertRadius) + (float)uStack_18 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[4].klass + (longlong)(int)uVar12 * 0xc) =
         (fVar21 - fVar23 * tubeVertRadius) + fVar14 * tubeHrzRadius;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar28 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (*(uint *)&this[1].monitor <= uVar12 + 2) goto code_?;
    *(ulonglong *)((longlong)&this[3].monitor + (longlong)(int)uVar12 * 0xc) =
         CONCAT44((uint)(pVVar19->upVector).y ^ uVar3,uVar28 ^ uVar3);
    *(uint *)((longlong)&this[4].klass + (longlong)(int)uVar12 * 0xc) = (uint)fVar23 ^ uVar3;
    if (*(uint *)&this_00[1].monitor <= uVar12 + 3) goto code_?;
    *(float *)(&this_00[3].monitor + (int)uVar12) = (float)uStack_18;
    *(float *)((longlong)&this_00[3].monitor + (longlong)(int)uVar12 * 8 + 4) = fVar14;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar29 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar12 + 3) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[4].klass + (longlong)(int)uVar12 * 0xc + 4) =
         CONCAT44((fVar17 - (pVVar19->upVector).y * tubeVertRadius) -
                  uStack_18._4_4_ * tubeHrzRadius,
                  (fVar13 - (float)uVar29 * tubeVertRadius) - (float)uStack_18 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[4].monitor + (longlong)(int)uVar12 * 0xc + 4) =
         (fVar21 - fVar23 * tubeVertRadius) - fVar14 * tubeHrzRadius;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar30 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (*(uint *)&this[1].monitor <= uVar12 + 3) goto code_?;
    *(ulonglong *)((longlong)&this[4].klass + (longlong)(int)uVar12 * 0xc + 4) =
         CONCAT44((uint)(pVVar19->upVector).y ^ uVar3,uVar30 ^ uVar3);
    *(uint *)((longlong)&this[4].monitor + (longlong)(int)uVar12 * 0xc + 4) = (uint)fVar23 ^ uVar3;
    if (*(uint *)&this_00[1].monitor <= uVar12 + 4) goto code_?;
    *(float *)(&this_00[4].klass + (int)uVar12) = (float)uStack_18;
    *(float *)((longlong)&this_00[4].klass + (longlong)(int)uVar12 * 8 + 4) = fVar14;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar20 = '\x01';
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar31 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar12 + 4) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[5].klass + (longlong)(int)uVar12 * 0xc) =
         CONCAT44((fVar17 - (pVVar19->upVector).y * tubeVertRadius) -
                  uStack_18._4_4_ * tubeHrzRadius,
                  (fVar13 - (float)uVar31 * tubeVertRadius) - (float)uStack_18 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[5].monitor + (longlong)(int)uVar12 * 0xc) =
         (fVar21 - fVar23 * tubeVertRadius) - fVar14 * tubeHrzRadius;
    if (*(uint *)&this[1].monitor <= uVar12 + 4) goto code_?;
    *(ulonglong *)((longlong)&this[5].klass + (longlong)(int)uVar12 * 0xc) =
         CONCAT44((uint)uStack_18._4_4_ ^ uVar3,(uint)(float)uStack_18 ^ uVar3);
    *(uint *)((longlong)&this[5].monitor + (longlong)(int)uVar12 * 0xc) = (uint)fVar14 ^ uVar3;
    if (*(uint *)&this_00[1].monitor <= uVar12 + 5) goto code_?;
    *(float *)(&this_00[4].monitor + (int)uVar12) = (float)uStack_18;
    *(float *)((longlong)&this_00[4].monitor + (longlong)(int)uVar12 * 8 + 4) = fVar14;
    if (cVar20 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar32 = (pVVar19->upVector).x;
    fVar23 = (pVVar19->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar12 + 5) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[5].monitor + (longlong)(int)uVar12 * 0xc + 4) =
         CONCAT44(((pVVar19->upVector).y * tubeVertRadius + fVar17) -
                  uStack_18._4_4_ * tubeHrzRadius,
                  ((float)uVar32 * tubeVertRadius + fVar13) - (float)uStack_18 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[6].klass + (longlong)(int)uVar12 * 0xc + 4) =
         (fVar23 * tubeVertRadius + fVar21) - fVar14 * tubeHrzRadius;
    lVar33 = (longlong)(int)uVar12;
    if (*(uint *)&this[1].monitor <= uVar12 + 5) goto code_?;
    iVar7 = iVar7 + 1;
    uVar12 = uVar12 + 8;
    *(ulonglong *)((longlong)&this[5].monitor + lVar33 * 0xc + 4) =
         CONCAT44((uint)uStack_18._4_4_ ^ uVar3,(uint)(float)uStack_18 ^ uVar3);
    pfVar6 = pfVar6 + 0x10;
    *(uint *)((longlong)&this[6].klass + lVar33 * 0xc + 4) = (uint)fVar14 ^ uVar3;
    pAVar4 = pAVar4 + 6;
  } while (iVar7 <= numTubeSlices);
  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,fVar9);
  uVar12 = 0;
  uVar34 = 0;
  iVar7 = 0xe;
  uVar35 = uVar34;
  uVar36 = uVar34;
  uVar3 = uVar12;
  if (indices != (Int32__Array *)0x0) {
    do {
      uVar37 = (uint)uVar35;
      if (((((uint)indices->max_length <= uVar37) ||
           (indices->vector[uVar36] = iVar7 + -0xe, (uint)indices->max_length <= uVar37 + 1)) ||
          ((indices->vector[uVar36 + 1] = iVar7 + -0xd, (uint)indices->max_length <= uVar37 + 2 ||
           ((indices->vector[(int)(uVar37 + 2)] = iVar7 + -5,
            (uint)indices->max_length <= uVar37 + 3 ||
            (indices->vector[(longlong)(int)(uVar37 + 2) + 1] = iVar7 + -0xe,
            (uint)indices->max_length <= uVar37 + 4)))))) ||
         ((indices->vector[(int)(uVar37 + 4)] = iVar7 + -5, (uint)indices->max_length <= uVar37 + 5
          || (indices->vector[(longlong)(int)(uVar37 + 4) + 1] = iVar7 + -6,
             (uint)indices->max_length <= uVar37 + 6)))) goto code_?;
      indices->vector[(int)(uVar37 + 6)] = iVar7 + -0xc;
      if (((uint)indices->max_length <= uVar37 + 7) ||
         (indices->vector[(longlong)(int)(uVar37 + 6) + 1] = iVar7 + -0xb,
         (uint)indices->max_length <= uVar37 + 8)) goto code_?;
      indices->vector[(int)(uVar37 + 8)] = iVar7 + -3;
      if (((((uint)indices->max_length <= uVar37 + 9) ||
           ((((indices->vector[(longlong)(int)(uVar37 + 8) + 1] = iVar7 + -0xc,
              (uint)indices->max_length <= uVar37 + 10 ||
              (indices->vector[uVar36 + 10] = iVar7 + -3, (uint)indices->max_length <= uVar37 + 0xb
              )) || (indices->vector[uVar36 + 0xb] = iVar7 + -4,
                    (uint)indices->max_length <= uVar37 + 0xc)) ||
            ((indices->vector[(int)(uVar37 + 0xc)] = iVar7 + -10,
             (uint)indices->max_length <= uVar37 + 0xd ||
             (indices->vector[(longlong)(int)(uVar37 + 0xc) + 1] = iVar7 + -9,
             (uint)indices->max_length <= uVar37 + 0xe)))))) ||
          (indices->vector[(int)(uVar37 + 0xe)] = iVar7 + -1,
          (uint)indices->max_length <= uVar37 + 0xf)) ||
         (indices->vector[(longlong)(int)(uVar37 + 0xe) + 1] = iVar7 + -10,
         (uint)indices->max_length <= uVar37 + 0x10)) goto code_?;
      indices->vector[(int)(uVar37 + 0x10)] = iVar7 + -1;
      if (((uint)indices->max_length <= uVar37 + 0x11) ||
         (indices->vector[(longlong)(int)(uVar37 + 0x10) + 1] = iVar7 + -2,
         (uint)indices->max_length <= uVar37 + 0x12)) goto code_?;
      indices->vector[(int)(uVar37 + 0x12)] = iVar7 + -8;
      if (((uint)indices->max_length <= uVar37 + 0x13) ||
         (((indices->vector[(longlong)(int)(uVar37 + 0x12) + 1] = iVar7 + -7,
           (uint)indices->max_length <= uVar37 + 0x14 ||
           (indices->vector[uVar36 + 0x14] = iVar7 + 1, (uint)indices->max_length <= uVar37 + 0x15)
           ) || (indices->vector[uVar36 + 0x15] = iVar7 + -8,
                (uint)indices->max_length <= uVar37 + 0x16)))) goto code_?;
      indices->vector[(int)(uVar37 + 0x16)] = iVar7 + 1;
      if ((uint)indices->max_length <= uVar37 + 0x17) goto code_?;
      uVar3 = uVar3 + 1;
      indices->vector[(int)(uVar37 + 0x17)] = iVar7;
      iVar7 = iVar7 + 8;
      uVar35 = (ulonglong)(uVar37 + 0x18);
      uVar36 = uVar36 + 0x18;
    } while ((int)uVar3 < numTubeSlices + -1);
    pMVar38 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar39 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar39 = (code *)FUN_?(&UNK_?), pcVar39 == (code *)0x0)) {
      uVar40 = func_?(&UNK_?);
      FUN_?(uVar40,0);
      pcVar39 = (code *)swi(3);
      pMVar38 = (Mesh *)(*pcVar39)();
      return pMVar38;
    }
    pcRam_? = pcVar39;
    (*pcRam_?)(pMVar38);
    if (pMVar38 != (Mesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar41 = mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar38,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                 pAVar2,iVar41,0,iVar41,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar41 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar38,VertexAttribute__Enum_Normal,VertexAttributeFormat__Enum_Float32,3,this,
                 iVar41,0,iVar41,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar41 = mscorlib.dll::System::Array::Array_get_Length(this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar38,VertexAttribute__Enum_TexCoord1,VertexAttributeFormat__Enum_Float32,2,
                 this_00,iVar41,0,iVar41,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar4 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
      if (0 < iVar1) {
        pAVar2 = pAVar4 + 2;
        uVar3 = uVar12;
        if (pAVar4 == (Array *)0x0) goto code_?;
        do {
          if (*(uint *)&pAVar4[1].monitor <= uVar3) {
code_?:
            FUN_?();
            pcVar39 = (code *)swi(3);
            pMVar38 = (Mesh *)(*pcVar39)();
            return pMVar38;
          }
          pMVar42 = *(MonitorData **)&color->b;
          uVar34 = uVar34 + 1;
          pAVar2->klass = *(Array__Class **)color;
          pAVar2->monitor = pMVar42;
          pAVar2 = pAVar2 + 1;
          uVar3 = uVar3 + 1;
        } while ((longlong)uVar34 < (longlong)iVar1);
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pAVar4 != (Array *)0x0) {
        uVar12 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar38,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,pAVar4,
                 uVar12,0,uVar12,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                (pMVar38,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                (pMVar38,0,(MethodInfo *)0x0);
      return pMVar38;
    }
  }
code_?:
  FUN_?();
  pcVar39 = (code *)swi(3);
  pMVar38 = (Mesh *)(*pcVar39)();
  return pMVar38;
}


/* Mesh CreateTorus(Vector3, Single, Single, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::TorusMesh::TorusMesh_CreateTorus
                 (Vector3 *center,float coreRadius,float tubeRadius,int32_t numTubeSlices,
                 int32_t numSlices,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((coreRadius < _UNK_?) || (tubeRadius < _UNK_?)) || (numTubeSlices < 3)) ||
     (numSlices < 3)) {
    pMVar1 = (Mesh *)0x0;
  }
  else {
    arrayLength = (numTubeSlices + 1) * (numSlices + 1);
    value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,arrayLength);
    value_00 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,arrayLength);
    uVar2 = 0;
    iStackX_10 = 0;
    lVar3 = 0;
    do {
      fVar4 = (float)FUN_?();
      fVar5 = (float)FUN_?();
      pVVar6 = value->vector + lVar3;
      iVar7 = 0;
      do {
        fVar8 = (float)FUN_?();
        fVar9 = fVar8 * fVar5 * tubeRadius + fVar5 * coreRadius;
        fVar10 = (float)FUN_?();
        fVar10 = fVar10 * tubeRadius + 0.0;
        VStack_11.x = fVar9 - fVar5 * coreRadius;
        fVar8 = fVar8 * fVar4 * tubeRadius + fVar4 * coreRadius;
        VStack_11.z = fVar8 - fVar4 * coreRadius;
        VStack_11.y = fVar10 - 0.0;
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                           (&VStack_13,&VStack_11,in_R8);
        if (value_00 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)value_00->max_length <= uVar2) goto DAT_?;
        aCStack_14[0].r = center->x;
        aCStack_14[0].g = center->y;
        *(undefined8 *)((longlong)pVVar6 + ((longlong)value_00 - (longlong)value)) =
             *(undefined8 *)pVVar12;
        *(float *)((longlong)pVVar6 + ((longlong)value_00 - (longlong)value) + 8) = pVVar12->z;
        fVar15 = center->z;
        if (value == (Vector3__Array *)0x0) goto code_?;
        if ((uint)value->max_length <= uVar2) goto DAT_?;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 1;
        pVVar6->x = fVar9 + aCStack_14[0].r;
        pVVar6->y = fVar10 + aCStack_14[0].g;
        iVar7 = iVar7 + 1;
        pVVar6->z = fVar8 + fVar15;
        pVVar6 = pVVar6 + 1;
      } while (iVar7 <= numSlices);
      iStackX_10 = iStackX_10 + 1;
    } while (iStackX_10 <= numTubeSlices);
    indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,numTubeSlices * numSlices * 6);
    uVar2 = 0;
    iVar7 = numSlices + 1;
    iStackX_10 = 0;
    lVar3 = 0;
    iVar16 = -1;
    iVar17 = 1;
    do {
      piVar18 = indices->vector + lVar3 + 1;
      uVar19 = uVar2 + 2;
      lVar20 = lVar3;
      iVar21 = iVar17;
      do {
        if (indices == (Int32__Array *)0x0) goto code_?;
        if ((((uint)indices->max_length <= uVar2) ||
            (piVar18[-1] = iVar21 + -1, (uint)indices->max_length <= uVar19 - 1)) ||
           ((*piVar18 = iVar21, (uint)indices->max_length <= uVar19 ||
            ((indices->vector[(int)uVar19] = numSlices + iVar21,
             (uint)indices->max_length <= uVar19 + 1 ||
             (indices->vector[(longlong)(int)uVar19 + 1] = iVar21,
             (uint)indices->max_length <= uVar19 + 2)))))) {
DAT_?:
          FUN_?();
          pcVar22 = (code *)swi(3);
          pMVar1 = (Mesh *)(*pcVar22)();
          return pMVar1;
        }
        uVar2 = uVar2 + 6;
        lVar3 = lVar20 + 6;
        piVar18 = piVar18 + 6;
        indices->vector[(longlong)(int)uVar19 + 2] = iVar21 + iVar7;
        uVar23 = uVar19 + 3;
        uVar19 = uVar19 + 6;
        if ((uint)indices->max_length <= uVar23) goto DAT_?;
        iVar24 = numSlices + iVar21;
        iVar21 = iVar21 + 1;
        indices->vector[lVar20 + 5] = iVar24;
        lVar20 = lVar3;
      } while (iVar16 + iVar21 < numSlices);
      iVar17 = iVar17 + iVar7;
      iStackX_10 = iStackX_10 + 1;
      iVar16 = iVar16 - iVar7;
    } while (iStackX_10 < numTubeSlices);
    pMVar1 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar1,(MethodInfo *)0x0);
    if (pMVar1 == (Mesh *)0x0) {
code_?:
      FUN_?();
      pcVar22 = (code *)swi(3);
      pMVar1 = (Mesh *)(*pcVar22)();
      return pMVar1;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar1,value,(MethodInfo *)0x0)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
              (pMVar1,value_00,(MethodInfo *)0x0);
    aCStack_14[0].r = color->r;
    aCStack_14[0].g = color->g;
    aCStack_14[0].b = color->b;
    aCStack_14[0].a = color->a;
    value_01 = ColorEx::ColorEx_GetFilledColorArray(arrayLength,aCStack_14,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
              (pMVar1,value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
              (pMVar1,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar1,0,(MethodInfo *)0x0);
  }
  return pMVar1;
}

