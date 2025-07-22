
/* Mesh CreatePyramid(Vector3, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PyramidMesh::PyramidMesh_CreatePyramid(Vector3 baseCenter,float baseWidth,float baseDepth,float height,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&E9736DAA7037513F7F61DFE841C03AB9CA0D4A52E37776FD5DC4ED9E2E9C5858_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
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
  height = ABS(height);
  if (height <= 0.0001) {
    height = 0.0001;
  }
  fVar1 = fVar1 * 0.5;
  fVar2 = fVar2 * 0.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->upVector).x;
  uVar5 = (pVVar3->upVector).y;
  fVar6 = baseCenter.x + height * (float)uVar4;
  fVar7 = baseCenter.y + height * (float)uVar5;
  fVar8 = baseCenter.z + height * (pVVar3->upVector).z;
  value_00 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x10);
  if (value_00 != (Vector3__Array *)0x0) {
    if (value_00->max_length == 0) goto code_?;
    value_00->vector[0].x = fVar6;
    value_00->vector[0].y = fVar7;
    value_00->vector[0].z = fVar8;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar9 = (pVVar3->rightVector).x;
    uVar10 = (pVVar3->rightVector).y;
    fVar11 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar12 = (pVVar3->forwardVector).x;
    uVar13 = (pVVar3->forwardVector).y;
    fVar14 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 2) goto code_?;
    value_00->vector[1].x = (baseCenter.x + (float)uVar9 * fVar1) - (float)uVar12 * fVar2;
    value_00->vector[1].y = (baseCenter.y + (float)uVar10 * fVar1) - (float)uVar13 * fVar2;
    value_00->vector[1].z = (baseCenter.z + fVar11 * fVar1) - fVar14 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar3->rightVector).x;
    uVar16 = (pVVar3->rightVector).y;
    fVar11 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar17 = (pVVar3->forwardVector).x;
    uVar18 = (pVVar3->forwardVector).y;
    fVar14 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 3) goto code_?;
    value_00->vector[2].x = (baseCenter.x - (float)uVar15 * fVar1) - (float)uVar17 * fVar2;
    value_00->vector[2].y = (baseCenter.y - (float)uVar16 * fVar1) - (float)uVar18 * fVar2;
    value_00->vector[2].z = (baseCenter.z - fVar11 * fVar1) - fVar14 * fVar2;
    if (value_00->max_length < 4) goto code_?;
    value_00->vector[3].x = fVar6;
    value_00->vector[3].y = fVar7;
    value_00->vector[3].z = fVar8;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar19 = (pVVar3->rightVector).x;
    uVar20 = (pVVar3->rightVector).y;
    fVar11 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar21 = (pVVar3->forwardVector).x;
    uVar22 = (pVVar3->forwardVector).y;
    fVar14 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 5) goto code_?;
    value_00->vector[4].x = baseCenter.x + (float)uVar19 * fVar1 + (float)uVar21 * fVar2;
    value_00->vector[4].y = baseCenter.y + (float)uVar20 * fVar1 + (float)uVar22 * fVar2;
    value_00->vector[4].z = baseCenter.z + fVar11 * fVar1 + fVar14 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar23 = (pVVar3->rightVector).x;
    uVar24 = (pVVar3->rightVector).y;
    fVar11 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar25 = (pVVar3->forwardVector).x;
    uVar26 = (pVVar3->forwardVector).y;
    fVar14 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 6) goto code_?;
    value_00->vector[5].x = (baseCenter.x + (float)uVar23 * fVar1) - (float)uVar25 * fVar2;
    value_00->vector[5].y = (baseCenter.y + (float)uVar24 * fVar1) - (float)uVar26 * fVar2;
    value_00->vector[5].z = (baseCenter.z + fVar11 * fVar1) - fVar14 * fVar2;
    if (value_00->max_length < 7) goto code_?;
    value_00->vector[6].x = fVar6;
    value_00->vector[6].y = fVar7;
    value_00->vector[6].z = fVar8;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27 = (pVVar3->rightVector).x;
    uVar28 = (pVVar3->rightVector).y;
    fVar11 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar29 = (pVVar3->forwardVector).x;
    uVar30 = (pVVar3->forwardVector).y;
    fVar14 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 8) goto code_?;
    value_00->vector[7].x = (baseCenter.x - (float)uVar27 * fVar1) + (float)uVar29 * fVar2;
    value_00->vector[7].y = (baseCenter.y - (float)uVar28 * fVar1) + (float)uVar30 * fVar2;
    value_00->vector[7].z = (baseCenter.z - fVar11 * fVar1) + fVar14 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar31 = (pVVar3->rightVector).x;
    uVar32 = (pVVar3->rightVector).y;
    fVar11 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar33 = (pVVar3->forwardVector).x;
    uVar34 = (pVVar3->forwardVector).y;
    fVar14 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 9) goto code_?;
    value_00->vector[8].x = (float)uVar31 * fVar1 + baseCenter.x + (float)uVar33 * fVar2;
    value_00->vector[8].y = (float)uVar32 * fVar1 + baseCenter.y + (float)uVar34 * fVar2;
    value_00->vector[8].z = fVar11 * fVar1 + baseCenter.z + fVar14 * fVar2;
    if (value_00->max_length < 10) goto code_?;
    value_00->vector[9].x = fVar6;
    value_00->vector[9].y = fVar7;
    value_00->vector[9].z = fVar8;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar35 = (pVVar3->rightVector).x;
    uVar36 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar37 = (pVVar3->forwardVector).x;
    uVar38 = (pVVar3->forwardVector).y;
    fVar8 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xb) goto code_?;
    value_00->vector[10].x = (baseCenter.x - (float)uVar35 * fVar1) - (float)uVar37 * fVar2;
    value_00->vector[10].y = (baseCenter.y - (float)uVar36 * fVar1) - (float)uVar38 * fVar2;
    value_00->vector[10].z = (baseCenter.z - fVar7 * fVar1) - fVar8 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar39 = (pVVar3->rightVector).x;
    uVar40 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar41 = (pVVar3->forwardVector).x;
    uVar42 = (pVVar3->forwardVector).y;
    fVar8 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xc) goto code_?;
    value_00->vector[0xb].x = (baseCenter.x - (float)uVar39 * fVar1) + (float)uVar41 * fVar2;
    value_00->vector[0xb].y = (baseCenter.y - (float)uVar40 * fVar1) + (float)uVar42 * fVar2;
    value_00->vector[0xb].z = (baseCenter.z - fVar7 * fVar1) + fVar8 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar43 = (pVVar3->rightVector).x;
    uVar44 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar45 = (pVVar3->forwardVector).x;
    uVar46 = (pVVar3->forwardVector).y;
    fVar8 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xd) goto code_?;
    value_00->vector[0xc].x = (baseCenter.x - (float)uVar43 * fVar1) - (float)uVar45 * fVar2;
    value_00->vector[0xc].y = (baseCenter.y - (float)uVar44 * fVar1) - (float)uVar46 * fVar2;
    value_00->vector[0xc].z = (baseCenter.z - fVar7 * fVar1) - fVar8 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar47 = (pVVar3->rightVector).x;
    uVar48 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar49 = (pVVar3->forwardVector).x;
    uVar50 = (pVVar3->forwardVector).y;
    fVar8 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xe) goto code_?;
    value_00->vector[0xd].x = ((float)uVar47 * fVar1 + baseCenter.x) - (float)uVar49 * fVar2;
    value_00->vector[0xd].y = ((float)uVar48 * fVar1 + baseCenter.y) - (float)uVar50 * fVar2;
    value_00->vector[0xd].z = (fVar7 * fVar1 + baseCenter.z) - fVar8 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar51 = (pVVar3->rightVector).x;
    uVar52 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar53 = (pVVar3->forwardVector).x;
    uVar54 = (pVVar3->forwardVector).y;
    fVar8 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xf) goto code_?;
    value_00->vector[0xe].x = (float)uVar51 * fVar1 + baseCenter.x + (float)uVar53 * fVar2;
    value_00->vector[0xe].y = (float)uVar52 * fVar1 + baseCenter.y + (float)uVar54 * fVar2;
    value_00->vector[0xe].z = fVar7 * fVar1 + baseCenter.z + fVar8 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar55 = (pVVar3->rightVector).x;
    uVar56 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar57 = (pVVar3->forwardVector).x;
    uVar58 = (pVVar3->forwardVector).y;
    fVar8 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0x10) goto code_?;
    value_00->vector[0xf].x = (baseCenter.x - (float)uVar55 * fVar1) + (float)uVar57 * fVar2;
    value_00->vector[0xf].y = (baseCenter.y - (float)uVar56 * fVar1) + (float)uVar58 * fVar2;
    value_00->vector[0xf].z = (baseCenter.z - fVar7 * fVar1) + fVar8 * fVar2;
    indices = (Int32__Array *)func_?(TypeInfo__System__Int32,0x12);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,_E9736DAA7037513F7F61DFE841C03AB9CA0D4A52E37776FD5DC4ED9E2E9C5858_Field,(MethodInfo *)0x0);
    value_01 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,value_00->max_length);
    baseWidth = (float)(indices->vector + 1);
    height = 2.8026e-45;
    if (indices != (Int32__Array *)0x0) {
      do {
        if (((indices->max_length <= (int)height - 2U) || (indices->max_length <= (int)height - 1U)) || (indices->max_length <= (uint)height)) goto code_?;
        uVar59 = *(uint *)((int)baseWidth + 4);
        uVar60 = *(uint *)baseWidth;
        if (value_00->max_length <= uVar60) goto code_?;
        uVar61 = *(uint *)((int)baseWidth + -4);
        if (value_00->max_length <= uVar61) goto code_?;
        uVar62 = value_00->vector[uVar61].x;
        uVar63 = value_00->vector[uVar61].y;
        uVar64 = value_00->vector[uVar60].x;
        uVar65 = value_00->vector[uVar60].y;
        fVar1 = value_00->vector[uVar60].z - value_00->vector[uVar61].z;
        if ((value_00->max_length <= uVar59) || (value_00->max_length <= uVar61)) goto code_?;
        uVar66 = value_00->vector[uVar61].x;
        uVar67 = value_00->vector[uVar61].y;
        uVar68 = value_00->vector[uVar59].x;
        uVar69 = value_00->vector[uVar59].y;
        fVar2 = value_00->vector[uVar59].z - value_00->vector[uVar61].z;
        value.y = fVar1 * ((float)uVar68 - (float)uVar66) - ((float)uVar64 - (float)uVar62) * fVar2;
        value.x = ((float)uVar65 - (float)uVar63) * fVar2 - fVar1 * ((float)uVar69 - (float)uVar67);
        value.z = ((float)uVar64 - (float)uVar62) * ((float)uVar69 - (float)uVar67) - ((float)uVar65 - (float)uVar63) * ((float)uVar68 - (float)uVar66);
        pVVar70 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffa0,value,(MethodInfo *)0x0);
        uVar71 = pVVar70->x;
        uVar72 = pVVar70->y;
        fVar1 = pVVar70->z;
        if (value_01 == (Vector3__Array *)0x0) goto code_?;
        if (value_01->max_length <= uVar61) goto code_?;
        value_01->vector[uVar61].x = (float)uVar71;
        value_01->vector[uVar61].y = (float)uVar72;
        value_01->vector[uVar61].z = fVar1;
        if (value_01->max_length <= uVar60) goto code_?;
        value_01->vector[uVar60].x = (float)uVar71;
        value_01->vector[uVar60].y = (float)uVar72;
        value_01->vector[uVar60].z = fVar1;
        if (value_01->max_length <= uVar59) goto code_?;
        baseWidth = (float)((int)baseWidth + 0xc);
        value_01->vector[uVar59].x = (float)uVar71;
        value_01->vector[uVar59].y = (float)uVar72;
        value_01->vector[uVar59].z = fVar1;
        height = (float)((int)height + 3);
      } while ((int)height < 0xe);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar73._0_4_ = (pVVar3->upVector).x;
      uVar73._4_4_ = (pVVar3->upVector).y;
      fVar1 = (pVVar3->upVector).z;
      iVar74 = value_01->max_length;
      if (value_01->max_length <= iVar74 - 4) goto code_?;
      value_01->vector[iVar74 - 4].x = (float)(int)(uVar73 ^ 0x8000000080000000);
      value_01->vector[iVar74 - 4].y = (float)(int)((uVar73 ^ 0x8000000080000000) >> 0x20);
      value_01->vector[iVar74 - 4].z = -fVar1;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar75._0_4_ = (pVVar3->upVector).x;
      uVar75._4_4_ = (pVVar3->upVector).y;
      fVar1 = (pVVar3->upVector).z;
      iVar74 = value_01->max_length;
      if (value_01->max_length <= iVar74 - 3) goto code_?;
      value_01->vector[iVar74 - 3].x = (float)(int)(uVar75 ^ 0x8000000080000000);
      value_01->vector[iVar74 - 3].y = (float)(int)((uVar75 ^ 0x8000000080000000) >> 0x20);
      value_01->vector[iVar74 - 3].z = -fVar1;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar76._0_4_ = (pVVar3->upVector).x;
      uVar76._4_4_ = (pVVar3->upVector).y;
      fVar1 = (pVVar3->upVector).z;
      iVar74 = value_01->max_length;
      if (value_01->max_length <= iVar74 - 2) goto code_?;
      value_01->vector[iVar74 - 2].x = (float)(int)(uVar76 ^ 0x8000000080000000);
      value_01->vector[iVar74 - 2].y = (float)(int)((uVar76 ^ 0x8000000080000000) >> 0x20);
      value_01->vector[iVar74 - 2].z = -fVar1;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar77._0_4_ = (pVVar3->upVector).x;
      uVar77._4_4_ = (pVVar3->upVector).y;
      fVar1 = (pVVar3->upVector).z;
      iVar74 = value_01->max_length;
      if (value_01->max_length <= iVar74 - 1) goto code_?;
      value_01->vector[iVar74 - 1].x = (float)(int)(uVar77 ^ 0x8000000080000000);
      value_01->vector[iVar74 - 1].y = (float)(int)((uVar77 ^ 0x8000000080000000) >> 0x20);
      value_01->vector[iVar74 - 1].z = -fVar1;
      pMVar78 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar78,(MethodInfo *)0x0);
      if (pMVar78 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar78,value_00,(MethodInfo *)0x0);
        value_02 = ColorEx::ColorEx_GetFilledColorArray(value_00->max_length,color,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar78,value_02,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar78,value_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar78,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar78,0,(MethodInfo *)0x0);
        return pMVar78;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar79 = (code *)swi(3);
  pMVar78 = (Mesh *)(*pcVar79)();
  return pMVar78;
}


/* Mesh CreateWirePyramid(Vector3, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PyramidMesh::PyramidMesh_CreateWirePyramid(Vector3 baseCenter,float baseWidth,float baseDepth,float height,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&::_17E1E703EDA761039900D6BB1C5192E9763DE7DC9EB806A138CBA99BD3244931_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = ABS(baseWidth);
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  fVar2 = ABS(height);
  if (fVar2 <= 0.0001) {
    fVar2 = 0.0001;
  }
  fVar1 = fVar1 * 0.5;
  fVar3 = ABS(baseDepth);
  if (fVar3 <= 0.0001) {
    fVar3 = 0.0001;
  }
  fVar3 = fVar3 * 0.5;
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,5);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->rightVector).x;
  uVar6 = (pVVar4->rightVector).y;
  fVar7 = (pVVar4->rightVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8 = (pVVar4->forwardVector).x;
  uVar9 = (pVVar4->forwardVector).y;
  fVar10 = (pVVar4->forwardVector).z;
  if (value != (Vector3__Array *)0x0) {
    if (value->max_length == 0) goto code_?;
    value->vector[0].x = (baseCenter.x - (float)uVar5 * fVar1) - (float)uVar8 * fVar3;
    value->vector[0].y = (baseCenter.y - (float)uVar6 * fVar1) - (float)uVar9 * fVar3;
    value->vector[0].z = (baseCenter.z - fVar7 * fVar1) - fVar10 * fVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar11 = (pVVar4->rightVector).x;
    uVar12 = (pVVar4->rightVector).y;
    fVar7 = (pVVar4->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar4->forwardVector).x;
    uVar14 = (pVVar4->forwardVector).y;
    fVar10 = (pVVar4->forwardVector).z;
    if (value->max_length < 2) goto code_?;
    value->vector[1].x = (baseCenter.x + (float)uVar11 * fVar1) - (float)uVar13 * fVar3;
    value->vector[1].y = (baseCenter.y + (float)uVar12 * fVar1) - (float)uVar14 * fVar3;
    value->vector[1].z = (baseCenter.z + fVar7 * fVar1) - fVar10 * fVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar4->rightVector).x;
    uVar16 = (pVVar4->rightVector).y;
    fVar7 = (pVVar4->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar17 = (pVVar4->forwardVector).x;
    uVar18 = (pVVar4->forwardVector).y;
    fVar10 = (pVVar4->forwardVector).z;
    if (value->max_length < 3) goto code_?;
    value->vector[2].x = baseCenter.x + (float)uVar15 * fVar1 + (float)uVar17 * fVar3;
    value->vector[2].y = baseCenter.y + (float)uVar16 * fVar1 + (float)uVar18 * fVar3;
    value->vector[2].z = baseCenter.z + fVar7 * fVar1 + fVar10 * fVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar19 = (pVVar4->rightVector).x;
    uVar20 = (pVVar4->rightVector).y;
    fVar7 = (pVVar4->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar21 = (pVVar4->forwardVector).x;
    uVar22 = (pVVar4->forwardVector).y;
    fVar10 = (pVVar4->forwardVector).z;
    if (value->max_length < 4) goto code_?;
    value->vector[3].x = (baseCenter.x - (float)uVar19 * fVar1) + (float)uVar21 * fVar3;
    value->vector[3].y = (baseCenter.y - (float)uVar20 * fVar1) + (float)uVar22 * fVar3;
    value->vector[3].z = (baseCenter.z - fVar7 * fVar1) + fVar10 * fVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar23 = (pVVar4->upVector).x;
    uVar24 = (pVVar4->upVector).y;
    fVar1 = (pVVar4->upVector).z;
    if (value->max_length < 5) goto code_?;
    value->vector[4].x = baseCenter.x + (float)uVar23 * fVar2;
    value->vector[4].y = baseCenter.y + (float)uVar24 * fVar2;
    value->vector[4].z = baseCenter.z + fVar1 * fVar2;
    indices = (Int32__Array *)func_?(TypeInfo__System__Int32,0x10);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__17E1E703EDA761039900D6BB1C5192E9763DE7DC9EB806A138CBA99BD3244931_Field,(MethodInfo *)0x0);
    pMVar25 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar25,(MethodInfo *)0x0);
    if (pMVar25 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar25,value,(MethodInfo *)0x0);
      value_00 = ColorEx::ColorEx_GetFilledColorArray(value->max_length,color,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar25,value_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar25,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar25,0,(MethodInfo *)0x0);
      return pMVar25;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  pMVar25 = (Mesh *)(*pcVar26)();
  return pMVar25;
}

