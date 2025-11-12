
/* Mesh CreateCircleXY(Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CircleMesh::CircleMesh_CreateCircleXY
                 (float circleRadius,int32_t numBorderPoints,Color *color,MethodInfo *method)

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
  if ((circleRadius < _UNK_?) || (numBorderPoints < 4)) {
    return (Mesh *)0x0;
  }
  pAVar1 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,numBorderPoints + 1);
  if (pAVar1 != (Array *)0x0) {
    this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,*(undefined4 *)&pAVar1[1].monitor);
    indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,(numBorderPoints + -1) * 3);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = cRam_?;
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (*(int *)&pAVar1[1].monitor == 0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      pMVar5 = (Mesh *)(*pcVar4)();
      return pMVar5;
    }
    puVar6 = (undefined8 *)((longlong)&this[2].monitor + 4);
    iVar7 = 0;
    pAVar1[2].klass = *(Array__Class **)&pVVar3->zeroVector;
    *(float *)&pAVar1[2].monitor = (pVVar3->zeroVector).z;
    do {
      fVar8 = (float)FUN_?();
      fVar9 = (float)FUN_?();
      if (*(uint *)&pAVar1[1].monitor <= iVar7 + 1U) goto code_?;
      *(ulonglong *)(((longlong)pAVar1 - (longlong)this) + (longlong)puVar6) =
           CONCAT44(fVar9 * circleRadius,fVar8 * circleRadius);
      *(undefined4 *)(((longlong)pAVar1 - (longlong)this) + 8 + (longlong)puVar6) = 0;
      if (cVar2 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar2 = '\x01';
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (this == (Array *)0x0) goto code_?;
      if (*(uint *)&this[1].monitor <= iVar7 + 1U) goto code_?;
      iVar7 = iVar7 + 1;
      *puVar6 = *(undefined8 *)&pVVar3->forwardVector;
      *(float *)(puVar6 + 1) = (pVVar3->forwardVector).z;
      puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
    } while (iVar7 < numBorderPoints);
    uVar10 = 0;
    piVar11 = indices->vector + 1;
    iVar12 = 0;
    iVar7 = 1;
    uVar13 = uVar10;
    uVar14 = 2;
    do {
      if (indices == (Int32__Array *)0x0) goto code_?;
      if (((uint)indices->max_length <= uVar14 - 2) ||
         (piVar11[-1] = 0, (uint)indices->max_length <= uVar14 - 1)) goto code_?;
      *piVar11 = iVar7;
      piVar11 = piVar11 + 3;
      if ((uint)indices->max_length <= uVar14) goto code_?;
      iVar15 = iVar7 + 1;
      iVar7 = iVar7 + 1;
      indices->vector[uVar13 + 2] = iVar15;
      uVar13 = uVar13 + 3;
      uVar14 = uVar14 + 3;
    } while (iVar7 < numBorderPoints);
    pMVar5 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar4 = (code *)swi(3);
      pMVar5 = (Mesh *)(*pcVar4)();
      return pMVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pMVar5);
    if (pMVar5 != (Mesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(pAVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar5,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,pAVar1,
                 valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
                 (MethodInfo *)0x0);
      iVar7 = *(int *)&pAVar1[1].monitor;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar1 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
      if (0 < iVar7) {
        pAVar17 = pAVar1 + 2;
        uVar13 = uVar10;
        if (pAVar1 == (Array *)0x0) goto code_?;
        do {
          if (*(uint *)&pAVar1[1].monitor <= (uint)uVar10) goto code_?;
          pMVar18 = *(MonitorData **)&color->b;
          uVar10 = (ulonglong)((uint)uVar10 + 1);
          uVar13 = uVar13 + 1;
          pAVar17->klass = *(Array__Class **)color;
          pAVar17->monitor = pMVar18;
          pAVar17 = pAVar17 + 1;
        } while ((longlong)uVar13 < (longlong)iVar7);
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pAVar1 != (Array *)0x0) {
        iVar12 = mscorlib.dll::System::Array::Array_get_Length(pAVar1,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar5,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,pAVar1,
                 iVar12,0,iVar12,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar12 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar5,VertexAttribute__Enum_Normal,VertexAttributeFormat__Enum_Float32,3,this,
                 iVar12,0,iVar12,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                (pMVar5,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar5,0,(MethodInfo *)0x0)
      ;
      return pMVar5;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (Mesh *)(*pcVar4)();
  return pMVar5;
}


/* Mesh CreateWireCircleXY(Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CircleMesh::CircleMesh_CreateWireCircleXY
                 (float circleRadius,int32_t numBorderPoints,Color *color,MethodInfo *method)

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
  if ((circleRadius < _UNK_?) || (numBorderPoints < 4)) {
    return (Mesh *)0x0;
  }
  pAVar1 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,numBorderPoints);
  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32);
  pAVar2 = pAVar1 + 2;
  uVar3 = 0;
  piVar4 = indices->vector;
  valuesArrayLength_00 = 0;
  do {
    fVar5 = (float)FUN_?();
    fVar6 = (float)FUN_?();
    if (pAVar1 == (Array *)0x0) goto code_?;
    if (*(uint *)&pAVar1[1].monitor <= uVar3) goto code_?;
    pAVar2->klass = (Array__Class *)CONCAT44(fVar6 * circleRadius,fVar5 * circleRadius);
    *(undefined4 *)&pAVar2->monitor = 0;
    if (indices == (Int32__Array *)0x0) goto code_?;
    if ((uint)indices->max_length <= uVar3) goto code_?;
    *piVar4 = uVar3;
    pAVar2 = (Array *)((longlong)&pAVar2->monitor + 4);
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)uVar3 < numBorderPoints);
  pMVar7 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    pMVar7 = (Mesh *)(*pcVar8)();
    return pMVar7;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(pMVar7);
  if (pMVar7 != (Mesh *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(pAVar1,(MethodInfo *)0x0);
    lVar10 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
              (pMVar7,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,pAVar1,
               valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0
              );
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar1 = (Array *)FUN_?(TypeInfo__UnityEngine__Color,numBorderPoints);
    pAVar2 = pAVar1 + 2;
    uVar3 = valuesArrayLength_00;
    if (pAVar1 != (Array *)0x0) {
      while (uVar3 < *(uint *)&pAVar1[1].monitor) {
        pMVar11 = *(MonitorData **)&color->b;
        uVar3 = uVar3 + 1;
        lVar10 = lVar10 + 1;
        pAVar2->klass = *(Array__Class **)color;
        pAVar2->monitor = pMVar11;
        pAVar2 = pAVar2 + 1;
        if (numBorderPoints <= lVar10) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pAVar1 != (Array *)0x0) {
            valuesArrayLength_00 =
                 mscorlib.dll::System::Array::Array_get_Length(pAVar1,(MethodInfo *)0x0);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                    (pMVar7,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,pAVar1
                     ,valuesArrayLength_00,0,valuesArrayLength_00,MeshUpdateFlags__Enum_Default,
                     (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                    (pMVar7,indices,MeshTopology__Enum_LineStrip,0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                    (pMVar7,0,(MethodInfo *)0x0);
          return pMVar7;
        }
      }
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      pMVar7 = (Mesh *)(*pcVar8)();
      return pMVar7;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  pMVar7 = (Mesh *)(*pcVar8)();
  return pMVar7;
}

