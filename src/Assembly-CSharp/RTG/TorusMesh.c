
/* Mesh CreateCylindricalTorus(Vector3, Single, Single, Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::TorusMesh::TorusMesh_CreateCylindricalTorus(Vector3 *center,float coreRadius,float tubeHrzRadius,float tubeVertRadius,int32_t numTubeSlices,Color *color,MethodInfo *method)

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
  if (((coreRadius < 0.0001) || (tubeHrzRadius < 0.0001)) || (numTubeSlices < 3)) {
    return (Mesh *)0x0;
  }
  iVar1 = numTubeSlices * 8 + 8;
  pAVar2 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar1);
  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar1);
  this_00 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector2,iVar1);
  pAVar3 = this + 2;
  fVar4 = center->z;
  pfVar5 = (float *)((longlong)&this_00[2].monitor + 4);
  iVar6 = 0;
  lVar7 = (longlong)pAVar2 - (longlong)this;
  uVar8 = center->x;
  uVar9 = center->y;
  uVar10 = 2;
  do {
    fVar11 = (float)FUN_?();
    fVar12 = (float)FUN_?();
    uStack_13 = (ulonglong)(uint)fVar11;
    fStack_14 = fVar12;
    fVar15 = (float)FUN_?(&uStack_13);
    if (1e-05 < fVar15) {
      fVar12 = fVar12 / fVar15;
      uStack_16 = CONCAT44(0.0 / fVar15,fVar11 / fVar15);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_16._0_4_ = (pVVar17->zeroVector).x;
      uStack_16._4_4_ = (pVVar17->zeroVector).y;
      fVar12 = (pVVar17->zeroVector).z;
    }
    cVar18 = cRam_?;
    fVar11 = (float)uStack_16 * coreRadius + (float)uVar8;
    fVar15 = uStack_16._4_4_ * coreRadius + (float)uVar9;
    fVar19 = fVar12 * coreRadius + fVar4;
    if (this_00 == (Array *)0x0) goto code_?;
    if (*(uint *)&this_00[1].monitor <= uVar10 - 2) goto code_?;
    pfVar5[-3] = (float)uStack_16;
    pfVar5[-2] = fVar12;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar20 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (pAVar2 == (Array *)0x0) goto code_?;
    if (*(uint *)&pAVar2[1].monitor <= uVar10 - 2) goto code_?;
    *(ulonglong *)(lVar7 + (longlong)pAVar3) = CONCAT44(((pVVar17->upVector).y * tubeVertRadius + fVar15) - uStack_16._4_4_ * tubeHrzRadius,((float)uVar20 * tubeVertRadius + fVar11) - (float)uStack_16 * tubeHrzRadius);
    *(float *)(lVar7 + 8 + (longlong)pAVar3) = (fVar21 * tubeVertRadius + fVar19) - fVar12 * tubeHrzRadius;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (this == (Array *)0x0) goto code_?;
    if (*(uint *)&this[1].monitor <= uVar10 - 2) goto code_?;
    pAVar3->klass = *(Array__Class **)&pVVar17->upVector;
    *(float *)&pAVar3->monitor = (pVVar17->upVector).z;
    if (*(uint *)&this_00[1].monitor <= uVar10 - 1) goto code_?;
    pfVar5[-1] = (float)uStack_16;
    *pfVar5 = fVar12;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar22 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar10 - 1) goto code_?;
    *(ulonglong *)(lVar7 + 0xc + (longlong)pAVar3) = CONCAT44((pVVar17->upVector).y * tubeVertRadius + fVar15 + uStack_16._4_4_ * tubeHrzRadius,(float)uVar22 * tubeVertRadius + fVar11 + (float)uStack_16 * tubeHrzRadius);
    *(float *)(lVar7 + 0x14 + (longlong)pAVar3) = fVar21 * tubeVertRadius + fVar19 + fVar12 * tubeHrzRadius;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (*(uint *)&this[1].monitor <= uVar10 - 1) goto code_?;
    *(undefined8 *)((longlong)&pAVar3->monitor + 4) = *(undefined8 *)&pVVar17->upVector;
    *(float *)((longlong)&pAVar3[1].klass + 4) = (pVVar17->upVector).z;
    if (*(uint *)&this_00[1].monitor <= uVar10) goto code_?;
    *(float *)(&this_00[2].klass + (int)uVar10) = (float)uStack_16;
    *(float *)((longlong)&this_00[2].klass + (longlong)(int)uVar10 * 8 + 4) = fVar12;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar23 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar10) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[2].klass + (longlong)(int)uVar10 * 0xc) = CONCAT44((pVVar17->upVector).y * tubeVertRadius + fVar15 + uStack_16._4_4_ * tubeHrzRadius,(float)uVar23 * tubeVertRadius + fVar11 + (float)uStack_16 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[2].monitor + (longlong)(int)uVar10 * 0xc) = fVar21 * tubeVertRadius + fVar19 + fVar12 * tubeHrzRadius;
    if (*(uint *)&this[1].monitor <= uVar10) goto code_?;
    *(ulonglong *)((longlong)&this[2].klass + (longlong)(int)uVar10 * 0xc) = uStack_16;
    *(float *)((longlong)&this[2].monitor + (longlong)(int)uVar10 * 0xc) = fVar12;
    if (*(uint *)&this_00[1].monitor <= uVar10 + 1) goto code_?;
    *(float *)(&this_00[2].monitor + (int)uVar10) = (float)uStack_16;
    *(float *)((longlong)&this_00[2].monitor + (longlong)(int)uVar10 * 8 + 4) = fVar12;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar24 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar10 + 1) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[2].monitor + (longlong)(int)uVar10 * 0xc + 4) = CONCAT44((fVar15 - (pVVar17->upVector).y * tubeVertRadius) + uStack_16._4_4_ * tubeHrzRadius,(fVar11 - (float)uVar24 * tubeVertRadius) + (float)uStack_16 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[3].klass + (longlong)(int)uVar10 * 0xc + 4) = (fVar19 - fVar21 * tubeVertRadius) + fVar12 * tubeHrzRadius;
    if (*(uint *)&this[1].monitor <= uVar10 + 1) goto code_?;
    *(ulonglong *)((longlong)&this[2].monitor + (longlong)(int)uVar10 * 0xc + 4) = uStack_16;
    *(float *)((longlong)&this[3].klass + (longlong)(int)uVar10 * 0xc + 4) = fVar12;
    if (*(uint *)&this_00[1].monitor <= uVar10 + 2) goto code_?;
    *(float *)(&this_00[3].klass + (int)uVar10) = (float)uStack_16;
    *(float *)((longlong)&this_00[3].klass + (longlong)(int)uVar10 * 8 + 4) = fVar12;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar25 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar10 + 2) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[3].monitor + (longlong)(int)uVar10 * 0xc) = CONCAT44((fVar15 - (pVVar17->upVector).y * tubeVertRadius) + uStack_16._4_4_ * tubeHrzRadius,(fVar11 - (float)uVar25 * tubeVertRadius) + (float)uStack_16 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[4].klass + (longlong)(int)uVar10 * 0xc) = (fVar19 - fVar21 * tubeVertRadius) + fVar12 * tubeHrzRadius;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar26 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (*(uint *)&this[1].monitor <= uVar10 + 2) goto code_?;
    *(ulonglong *)((longlong)&this[3].monitor + (longlong)(int)uVar10 * 0xc) = CONCAT44((pVVar17->upVector).y,uVar26) ^ 0x8000000080000000;
    *(float *)((longlong)&this[4].klass + (longlong)(int)uVar10 * 0xc) = -fVar21;
    if (*(uint *)&this_00[1].monitor <= uVar10 + 3) goto code_?;
    *(float *)(&this_00[3].monitor + (int)uVar10) = (float)uStack_16;
    *(float *)((longlong)&this_00[3].monitor + (longlong)(int)uVar10 * 8 + 4) = fVar12;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar10 + 3) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[4].klass + (longlong)(int)uVar10 * 0xc + 4) = CONCAT44((fVar15 - (pVVar17->upVector).y * tubeVertRadius) - uStack_16._4_4_ * tubeHrzRadius,(fVar11 - (float)uVar27 * tubeVertRadius) - (float)uStack_16 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[4].monitor + (longlong)(int)uVar10 * 0xc + 4) = (fVar19 - fVar21 * tubeVertRadius) - fVar12 * tubeHrzRadius;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar28 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (*(uint *)&this[1].monitor <= uVar10 + 3) goto code_?;
    *(ulonglong *)((longlong)&this[4].klass + (longlong)(int)uVar10 * 0xc + 4) = CONCAT44((pVVar17->upVector).y,uVar28) ^ 0x8000000080000000;
    *(float *)((longlong)&this[4].monitor + (longlong)(int)uVar10 * 0xc + 4) = -fVar21;
    if (*(uint *)&this_00[1].monitor <= uVar10 + 4) goto code_?;
    *(float *)(&this_00[4].klass + (int)uVar10) = (float)uStack_16;
    *(float *)((longlong)&this_00[4].klass + (longlong)(int)uVar10 * 8 + 4) = fVar12;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar18 = '\x01';
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar29 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar10 + 4) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[5].klass + (longlong)(int)uVar10 * 0xc) = CONCAT44((fVar15 - (pVVar17->upVector).y * tubeVertRadius) - uStack_16._4_4_ * tubeHrzRadius,(fVar11 - (float)uVar29 * tubeVertRadius) - (float)uStack_16 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[5].monitor + (longlong)(int)uVar10 * 0xc) = (fVar19 - fVar21 * tubeVertRadius) - fVar12 * tubeHrzRadius;
    if (*(uint *)&this[1].monitor <= uVar10 + 4) goto code_?;
    *(ulonglong *)((longlong)&this[5].klass + (longlong)(int)uVar10 * 0xc) = uStack_16 ^ 0x8000000080000000;
    *(float *)((longlong)&this[5].monitor + (longlong)(int)uVar10 * 0xc) = -fVar12;
    if (*(uint *)&this_00[1].monitor <= uVar10 + 5) goto code_?;
    *(float *)(&this_00[4].monitor + (int)uVar10) = (float)uStack_16;
    *(float *)((longlong)&this_00[4].monitor + (longlong)(int)uVar10 * 8 + 4) = fVar12;
    if (cVar18 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar30 = (pVVar17->upVector).x;
    fVar21 = (pVVar17->upVector).z;
    if (*(uint *)&pAVar2[1].monitor <= uVar10 + 5) goto code_?;
    *(ulonglong *)((longlong)&pAVar2[5].monitor + (longlong)(int)uVar10 * 0xc + 4) = CONCAT44(((pVVar17->upVector).y * tubeVertRadius + fVar15) - uStack_16._4_4_ * tubeHrzRadius,((float)uVar30 * tubeVertRadius + fVar11) - (float)uStack_16 * tubeHrzRadius);
    *(float *)((longlong)&pAVar2[6].klass + (longlong)(int)uVar10 * 0xc + 4) = (fVar21 * tubeVertRadius + fVar19) - fVar12 * tubeHrzRadius;
    lVar31 = (longlong)(int)uVar10;
    if (*(uint *)&this[1].monitor <= uVar10 + 5) goto code_?;
    iVar6 = iVar6 + 1;
    uVar10 = uVar10 + 8;
    *(ulonglong *)((longlong)&this[5].monitor + lVar31 * 0xc + 4) = uStack_16 ^ 0x8000000080000000;
    pfVar5 = pfVar5 + 0x10;
    *(float *)((longlong)&this[6].klass + lVar31 * 0xc + 4) = -fVar12;
    pAVar3 = pAVar3 + 6;
  } while (iVar6 <= numTubeSlices);
  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,360.0 / (float)(numTubeSlices + -1));
  valuesArrayLength = 0;
  uVar32 = 0;
  iVar6 = 0xe;
  uVar33 = uVar32;
  uVar34 = uVar32;
  uVar10 = valuesArrayLength;
  if (indices != (Int32__Array *)0x0) {
    do {
      uVar35 = (uint)uVar33;
      if (((((uint)indices->max_length <= uVar35) || (indices->vector[uVar34] = iVar6 + -0xe, (uint)indices->max_length <= uVar35 + 1)) || ((indices->vector[uVar34 + 1] = iVar6 + -0xd, (uint)indices->max_length <= uVar35 + 2 || ((indices->vector[(int)(uVar35 + 2)] = iVar6 + -5, (uint)indices->max_length <= uVar35 + 3 || (indices->vector[(longlong)(int)(uVar35 + 2) + 1] = iVar6 + -0xe, (uint)indices->max_length <= uVar35 + 4)))))) || ((indices->vector[(int)(uVar35 + 4)] = iVar6 + -5, (uint)indices->max_length <= uVar35 + 5 || (indices->vector[(longlong)(int)(uVar35 + 4) + 1] = iVar6 + -6, (uint)indices->max_length <= uVar35 + 6)))) goto code_?;
      indices->vector[(int)(uVar35 + 6)] = iVar6 + -0xc;
      if (((uint)indices->max_length <= uVar35 + 7) || (indices->vector[(longlong)(int)(uVar35 + 6) + 1] = iVar6 + -0xb, (uint)indices->max_length <= uVar35 + 8)) goto code_?;
      indices->vector[(int)(uVar35 + 8)] = iVar6 + -3;
      if (((((uint)indices->max_length <= uVar35 + 9) || ((((indices->vector[(longlong)(int)(uVar35 + 8) + 1] = iVar6 + -0xc, (uint)indices->max_length <= uVar35 + 10 || (indices->vector[uVar34 + 10] = iVar6 + -3, (uint)indices->max_length <= uVar35 + 0xb)) || (indices->vector[uVar34 + 0xb] = iVar6 + -4, (uint)indices->max_length <= uVar35 + 0xc)) || ((indices->vector[(int)(uVar35 + 0xc)] = iVar6 + -10, (uint)indices->max_length <= uVar35 + 0xd || (indices->vector[(longlong)(int)(uVar35 + 0xc) + 1] = iVar6 + -9, (uint)indices->max_length <= uVar35 + 0xe)))))) || (indices->vector[(int)(uVar35 + 0xe)] = iVar6 + -1, (uint)indices->max_length <= uVar35 + 0xf)) || (indices->vector[(longlong)(int)(uVar35 + 0xe) + 1] = iVar6 + -10, (uint)indices->max_length <= uVar35 + 0x10)) goto code_?;
      indices->vector[(int)(uVar35 + 0x10)] = iVar6 + -1;
      if (((uint)indices->max_length <= uVar35 + 0x11) || (indices->vector[(longlong)(int)(uVar35 + 0x10) + 1] = iVar6 + -2, (uint)indices->max_length <= uVar35 + 0x12)) goto code_?;
      indices->vector[(int)(uVar35 + 0x12)] = iVar6 + -8;
      if (((uint)indices->max_length <= uVar35 + 0x13) || (((indices->vector[(longlong)(int)(uVar35 + 0x12) + 1] = iVar6 + -7, (uint)indices->max_length <= uVar35 + 0x14 || (indices->vector[uVar34 + 0x14] = iVar6 + 1, (uint)indices->max_length <= uVar35 + 0x15)) || (indices->vector[uVar34 + 0x15] = iVar6 + -8, (uint)indices->max_length <= uVar35 + 0x16)))) goto code_?;
      indices->vector[(int)(uVar35 + 0x16)] = iVar6 + 1;
      if ((uint)indices->max_length <= uVar35 + 0x17) goto code_?;
      uVar10 = uVar10 + 1;
      indices->vector[(int)(uVar35 + 0x17)] = iVar6;
      iVar6 = iVar6 + 8;
      uVar33 = (ulonglong)(uVar35 + 0x18);
      uVar34 = uVar34 + 0x18;
    } while ((int)uVar10 < numTubeSlices + -1);
    pMVar36 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar37 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar37 = (code *)FUN_?(&UNK_?), pcVar37 == (code *)0x0)) {
      uVar38 = func_?(&UNK_?);
      FUN_?(uVar38,0);
      pcVar37 = (code *)swi(3);
      pMVar36 = (Mesh *)(*pcVar37)();
      return pMVar36;
    }
    pcRam_? = pcVar37;
    (*pcRam_?)(pMVar36);
    if (pMVar36 != (Mesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar39 = mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar36,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,pAVar2,iVar39,0,iVar39,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar39 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar36,VertexAttribute__Enum_Normal,VertexAttributeFormat__Enum_Float32,3,this,iVar39,0,iVar39,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar39 = mscorlib.dll::System::Array::Array_get_Length(this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar36,VertexAttribute__Enum_TexCoord1,VertexAttributeFormat__Enum_Float32,2,this_00,iVar39,0,iVar39,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar3 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
      if (0 < iVar1) {
        pAVar2 = pAVar3 + 2;
        uVar10 = valuesArrayLength;
        if (pAVar3 == (Array *)0x0) goto code_?;
        do {
          if (*(uint *)&pAVar3[1].monitor <= uVar10) {
code_?:
            FUN_?();
            pcVar37 = (code *)swi(3);
            pMVar36 = (Mesh *)(*pcVar37)();
            return pMVar36;
          }
          pMVar40 = *(MonitorData **)&color->b;
          uVar32 = uVar32 + 1;
          pAVar2->klass = *(Array__Class **)color;
          pAVar2->monitor = pMVar40;
          pAVar2 = pAVar2 + 1;
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar32 < (longlong)iVar1);
      }
      if (cRam_? == '\0') {
        FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pAVar3 != (Array *)0x0) {
        valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar36,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,pAVar3,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar36,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar36,0,(MethodInfo *)0x0);
      return pMVar36;
    }
  }
code_?:
  FUN_?();
  pcVar37 = (code *)swi(3);
  pMVar36 = (Mesh *)(*pcVar37)();
  return pMVar36;
}


/* Mesh CreateTorus(Vector3, Single, Single, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::TorusMesh::TorusMesh_CreateTorus(Vector3 *center,float coreRadius,float tubeRadius,int32_t numTubeSlices,int32_t numSlices,Color *color,MethodInfo *method)

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
  if ((((coreRadius < 0.0001) || (tubeRadius < 0.0001)) || (numTubeSlices < 3)) || (numSlices < 3)) {
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
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(&VStack_13,&VStack_11,in_R8);
        if (value_00 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)value_00->max_length <= uVar2) goto DAT_?;
        aCStack_14[0].r = center->x;
        aCStack_14[0].g = center->y;
        *(undefined8 *)((longlong)pVVar6 + ((longlong)value_00 - (longlong)value)) = *(undefined8 *)pVVar12;
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
        if ((((uint)indices->max_length <= uVar2) || (piVar18[-1] = iVar21 + -1, (uint)indices->max_length <= uVar19 - 1)) || ((*piVar18 = iVar21, (uint)indices->max_length <= uVar19 || ((indices->vector[(int)uVar19] = numSlices + iVar21, (uint)indices->max_length <= uVar19 + 1 || (indices->vector[(longlong)(int)uVar19 + 1] = iVar21, (uint)indices->max_length <= uVar19 + 2)))))) {
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
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar1,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar1,value_00,(MethodInfo *)0x0);
    aCStack_14[0].r = color->r;
    aCStack_14[0].g = color->g;
    aCStack_14[0].b = color->b;
    aCStack_14[0].a = color->a;
    value_01 = ColorEx::ColorEx_GetFilledColorArray(arrayLength,aCStack_14,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar1,value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar1,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar1,0,(MethodInfo *)0x0);
  }
  return pMVar1;
}

