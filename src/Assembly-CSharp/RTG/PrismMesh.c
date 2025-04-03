
/* Mesh CreateTriangularPrism(Vector3, Single, Single, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PrismMesh::PrismMesh_CreateTriangularPrism(Vector3 baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,float height,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_905D214FE6019886C36969B7BE09762E54A832D5F0E88FB06B774CE42A8DC642_Field);
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
  fVar3 = ABS(topWidth);
  fVar4 = ABS(topDepth);
  if (fVar3 <= 0.0001) {
    fVar3 = 0.0001;
  }
  if (fVar4 <= 0.0001) {
    fVar4 = 0.0001;
  }
  height_00 = ABS(height);
  if (ABS(height) <= 0.0001) {
    height_00 = 0.0001;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  baseCenter_00.y = baseCenter.y;
  baseCenter_00.x = baseCenter.x;
  baseCenter_00.z = baseCenter.z;
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)PrismMath::PrismMath_CalcTriangPrismCornerPoints(baseCenter_00,fVar1,fVar2,fVar3,fVar4,height_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,(MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item((VisualTreeAsset_UsingEntry *)&baseCenter,this_00,0,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    method_00 = pVVar5->alias;
    uVar6 = pVVar5->path;
    pVVar7 = pVVar5->asset;
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item((VisualTreeAsset_UsingEntry *)&baseCenter,this_00,1,(MethodInfo *)method_00);
    __return_storage_ptr__ = pVVar5->alias;
    this = pVVar5->path;
    pVVar8 = pVVar5->asset;
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item((VisualTreeAsset_UsingEntry *)__return_storage_ptr__,(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,2,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    uVar9 = pVVar5->alias;
    uVar10 = pVVar5->path;
    pVVar5 = (VisualTreeAsset_UsingEntry *)&stack0xffffffe4;
    pLVar11 = this_00;
    pMVar12 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item(pVVar5,this_00,3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    uVar14 = pVVar13->alias;
    baseCenter.z = (float)&UNK_?;
    baseCenter.y = (float)uVar14;
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item(&VStack_15,this_00,5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    uVar16._0_4_ = pVVar13->alias;
    pVStack_17 = (VisualTreeAsset *)pVVar13->path;
    baseCenter.z = (float)&UNK_?;
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item((VisualTreeAsset_UsingEntry *)&stack0xffffffb4,this_00,4,(MethodInfo *)pVVar13->asset);
    VStack_15.path = pVVar13->alias;
    VStack_15.asset = (VisualTreeAsset *)pVVar13->path;
    pVVar18 = pVVar13->asset;
    value_01 = (Vector3__Array *)func_?();
    if (value_01 != (Vector3__Array *)0x0) {
      if (value_01->max_length == 0) goto code_?;
      value_01->vector[0].x = baseCenter.y;
      value_01->vector[0].y = baseCenter.z;
      value_01->vector[0].z = (float)&UNK_?;
      if (value_01->max_length < 2) goto code_?;
      value_01->vector[1].x = (float)VStack_15.path;
      value_01->vector[1].y = (float)VStack_15.asset;
      value_01->vector[1].z = (float)pVVar18;
      if (value_01->max_length < 3) goto code_?;
      value_01->vector[2].x = (float)(String *)uVar16;
      value_01->vector[2].y = (float)pVStack_17;
      value_01->vector[2].z = 2.52234e-44;
      if (value_01->max_length < 4) goto code_?;
      value_01->vector[3].x = (float)pMVar12;
      value_01->vector[3].y = (float)uVar6;
      value_01->vector[3].z = (float)pVVar7;
      if (value_01->max_length < 5) goto code_?;
      value_01->vector[4].x = (float)pVVar5;
      value_01->vector[4].y = (float)pLVar11;
      value_01->vector[4].z = (float)pVVar8;
      if (value_01->max_length < 6) goto code_?;
      value_01->vector[5].x = (float)uVar9;
      value_01->vector[5].y = (float)uVar10;
      value_01->vector[5].z = (float)&stack0xffffffb4;
      if (value_01->max_length < 7) goto code_?;
      value_01->vector[6].x = (float)pMVar12;
      value_01->vector[6].y = (float)uVar6;
      value_01->vector[6].z = (float)pVVar7;
      if (value_01->max_length < 8) goto code_?;
      value_01->vector[7].x = baseCenter.y;
      value_01->vector[7].y = baseCenter.z;
      value_01->vector[7].z = (float)&UNK_?;
      if (value_01->max_length < 9) goto code_?;
      value_01->vector[8].x = (float)(String *)uVar16;
      value_01->vector[8].y = (float)pVStack_17;
      value_01->vector[8].z = 2.52234e-44;
      if (value_01->max_length < 10) goto code_?;
      value_01->vector[9].x = (float)pVVar5;
      value_01->vector[9].y = (float)pLVar11;
      value_01->vector[9].z = (float)pVVar8;
      if (value_01->max_length < 0xb) goto code_?;
      value_01->vector[10].x = (float)pMVar12;
      value_01->vector[10].y = (float)uVar6;
      value_01->vector[10].z = (float)pVVar7;
      if (value_01->max_length < 0xc) goto code_?;
      value_01->vector[0xb].x = (float)uVar9;
      value_01->vector[0xb].y = (float)uVar10;
      value_01->vector[0xb].z = (float)&stack0xffffffb4;
      if (value_01->max_length < 0xd) goto code_?;
      value_01->vector[0xc].x = (float)VStack_15.path;
      value_01->vector[0xc].y = (float)VStack_15.asset;
      value_01->vector[0xc].z = (float)pVVar18;
      if (value_01->max_length < 0xe) goto code_?;
      value_01->vector[0xd].x = baseCenter.y;
      value_01->vector[0xd].y = baseCenter.z;
      value_01->vector[0xd].z = (float)&UNK_?;
      if (value_01->max_length < 0xf) goto code_?;
      value_01->vector[0xe].x = (float)pVVar5;
      value_01->vector[0xe].y = (float)pLVar11;
      value_01->vector[0xe].z = (float)pVVar8;
      if (value_01->max_length < 0x10) goto code_?;
      value_01->vector[0xf].x = (float)(String *)uVar16;
      value_01->vector[0xf].y = (float)pVStack_17;
      value_01->vector[0xf].z = 2.52234e-44;
      if (value_01->max_length < 0x11) goto code_?;
      value_01->vector[0x10].x = (float)VStack_15.path;
      value_01->vector[0x10].y = (float)VStack_15.asset;
      value_01->vector[0x10].z = (float)pVVar18;
      if (value_01->max_length < 0x12) goto code_?;
      value_01->vector[0x11].x = (float)uVar9;
      value_01->vector[0x11].y = (float)uVar10;
      value_01->vector[0x11].z = (float)&stack0xffffffb4;
      indices = (Int32__Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__905D214FE6019886C36969B7BE09762E54A832D5F0E88FB06B774CE42A8DC642_Field,(MethodInfo *)0x0);
      if (value_01->max_length < 0xc) goto code_?;
      uVar19 = value_01->vector[10].x;
      uVar20 = value_01->vector[10].y;
      uVar21 = value_01->vector[0xb].x;
      uVar22 = value_01->vector[0xb].y;
      baseCenter.z = value_01->vector[0xb].z;
      fVar1 = baseCenter.z - value_01->vector[10].z;
      baseCenter.x = (float)uVar21;
      baseCenter.y = (float)uVar22;
      if (value_01->max_length < 0xe) goto code_?;
      uVar23 = value_01->vector[10].x;
      uVar24 = value_01->vector[10].y;
      uVar25 = value_01->vector[0xd].x;
      uVar26 = value_01->vector[0xd].y;
      fVar2 = value_01->vector[0xd].z - value_01->vector[10].z;
      baseCenter.z = ((float)uVar26 - (float)uVar24) * ((float)uVar21 - (float)uVar19) - ((float)uVar25 - (float)uVar23) * ((float)uVar22 - (float)uVar20);
      value.y = ((float)uVar25 - (float)uVar23) * fVar1 - fVar2 * ((float)uVar21 - (float)uVar19);
      value.x = fVar2 * ((float)uVar22 - (float)uVar20) - ((float)uVar26 - (float)uVar24) * fVar1;
      value.z = baseCenter.z;
      baseCenter.x = (float)uVar25;
      baseCenter.y = (float)uVar26;
      pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffb4,value,(MethodInfo *)0x0);
      uVar28 = pVVar27->x;
      uVar29 = pVVar27->y;
      fVar1 = pVVar27->z;
      baseCenter.y = (float)uVar28;
      baseCenter.z = (float)uVar29;
      if (value_01->max_length < 0x10) goto code_?;
      uVar30 = value_01->vector[0xe].x;
      uVar31 = value_01->vector[0xe].y;
      uVar32 = value_01->vector[0xf].x;
      uVar33 = value_01->vector[0xf].y;
      fVar2 = value_01->vector[0xf].z - value_01->vector[0xe].z;
      if (value_01->max_length < 0x12) goto code_?;
      uVar34 = value_01->vector[0xe].x;
      uVar35 = value_01->vector[0xe].y;
      uVar36 = value_01->vector[0x11].x;
      uVar37 = value_01->vector[0x11].y;
      fVar3 = value_01->vector[0x11].z - value_01->vector[0xe].z;
      value_00.y = ((float)uVar36 - (float)uVar34) * fVar2 - fVar3 * ((float)uVar32 - (float)uVar30);
      value_00.x = fVar3 * ((float)uVar33 - (float)uVar31) - ((float)uVar37 - (float)uVar35) * fVar2;
      value_00.z = ((float)uVar37 - (float)uVar35) * ((float)uVar32 - (float)uVar30) - ((float)uVar36 - (float)uVar34) * ((float)uVar33 - (float)uVar31);
      pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffb4,value_00,(MethodInfo *)0x0);
      uVar38 = pVVar27->x;
      uVar39 = pVVar27->y;
      fVar2 = pVVar27->z;
      value_02 = (Vector3__Array *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (value_02 != (Vector3__Array *)0x0) {
        fVar4 = (pVVar40->upVector).y;
        fVar3 = (pVVar40->upVector).z;
        if (value_02->max_length == 0) goto code_?;
        value_02->vector[0].x = (pVVar40->upVector).x;
        value_02->vector[0].y = fVar4;
        value_02->vector[0].z = fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar4 = (pVVar40->upVector).y;
        fVar3 = (pVVar40->upVector).z;
        if (value_02->max_length < 2) goto code_?;
        value_02->vector[1].x = (pVVar40->upVector).x;
        value_02->vector[1].y = fVar4;
        value_02->vector[1].z = fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar4 = (pVVar40->upVector).y;
        fVar3 = (pVVar40->upVector).z;
        if (value_02->max_length < 3) goto code_?;
        value_02->vector[2].x = (pVVar40->upVector).x;
        value_02->vector[2].y = fVar4;
        value_02->vector[2].z = fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar41._0_4_ = (pVVar40->upVector).x;
        uVar41._4_4_ = (pVVar40->upVector).y;
        fVar3 = (pVVar40->upVector).z;
        if (value_02->max_length < 4) goto code_?;
        value_02->vector[3].x = (float)(int)(uVar41 ^ 0x8000000080000000);
        value_02->vector[3].y = (float)(int)((uVar41 ^ 0x8000000080000000) >> 0x20);
        value_02->vector[3].z = -fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar42._0_4_ = (pVVar40->upVector).x;
        uVar42._4_4_ = (pVVar40->upVector).y;
        fVar3 = (pVVar40->upVector).z;
        if (value_02->max_length < 5) goto code_?;
        value_02->vector[4].x = (float)(int)(uVar42 ^ 0x8000000080000000);
        value_02->vector[4].y = (float)(int)((uVar42 ^ 0x8000000080000000) >> 0x20);
        value_02->vector[4].z = -fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar43._0_4_ = (pVVar40->upVector).x;
        uVar43._4_4_ = (pVVar40->upVector).y;
        fVar3 = (pVVar40->upVector).z;
        if (value_02->max_length < 6) goto code_?;
        value_02->vector[5].x = (float)(int)(uVar43 ^ 0x8000000080000000);
        value_02->vector[5].y = (float)(int)((uVar43 ^ 0x8000000080000000) >> 0x20);
        value_02->vector[5].z = -fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar44._0_4_ = (pVVar40->forwardVector).x;
        uVar44._4_4_ = (pVVar40->forwardVector).y;
        fVar3 = (pVVar40->forwardVector).z;
        if (value_02->max_length < 7) goto code_?;
        value_02->vector[6].x = (float)(int)(uVar44 ^ 0x8000000080000000);
        value_02->vector[6].y = (float)(int)((uVar44 ^ 0x8000000080000000) >> 0x20);
        value_02->vector[6].z = -fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar45._0_4_ = (pVVar40->forwardVector).x;
        uVar45._4_4_ = (pVVar40->forwardVector).y;
        fVar3 = (pVVar40->forwardVector).z;
        if (value_02->max_length < 8) goto code_?;
        value_02->vector[7].x = (float)(int)(uVar45 ^ 0x8000000080000000);
        value_02->vector[7].y = (float)(int)((uVar45 ^ 0x8000000080000000) >> 0x20);
        value_02->vector[7].z = -fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar46._0_4_ = (pVVar40->forwardVector).x;
        uVar46._4_4_ = (pVVar40->forwardVector).y;
        fVar3 = (pVVar40->forwardVector).z;
        if (value_02->max_length < 9) goto code_?;
        value_02->vector[8].x = (float)(int)(uVar46 ^ 0x8000000080000000);
        value_02->vector[8].y = (float)(int)((uVar46 ^ 0x8000000080000000) >> 0x20);
        value_02->vector[8].z = -fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar40 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar47._0_4_ = (pVVar40->forwardVector).x;
        uVar47._4_4_ = (pVVar40->forwardVector).y;
        fVar3 = (pVVar40->forwardVector).z;
        if (value_02->max_length < 10) goto code_?;
        value_02->vector[9].x = (float)(int)(uVar47 ^ 0x8000000080000000);
        value_02->vector[9].y = (float)(int)((uVar47 ^ 0x8000000080000000) >> 0x20);
        value_02->vector[9].z = -fVar3;
        if (value_02->max_length < 0xb) goto code_?;
        value_02->vector[10].x = baseCenter.y;
        value_02->vector[10].y = baseCenter.z;
        value_02->vector[10].z = fVar1;
        if (value_02->max_length < 0xc) goto code_?;
        value_02->vector[0xb].x = baseCenter.y;
        value_02->vector[0xb].y = baseCenter.z;
        value_02->vector[0xb].z = fVar1;
        if (value_02->max_length < 0xd) goto code_?;
        value_02->vector[0xc].x = baseCenter.y;
        value_02->vector[0xc].y = baseCenter.z;
        value_02->vector[0xc].z = fVar1;
        if (value_02->max_length < 0xe) goto code_?;
        value_02->vector[0xd].x = baseCenter.y;
        value_02->vector[0xd].y = baseCenter.z;
        value_02->vector[0xd].z = fVar1;
        if (value_02->max_length < 0xf) goto code_?;
        value_02->vector[0xe].x = (float)uVar38;
        value_02->vector[0xe].y = (float)uVar39;
        value_02->vector[0xe].z = fVar2;
        if (value_02->max_length < 0x10) goto code_?;
        value_02->vector[0xf].x = (float)uVar38;
        value_02->vector[0xf].y = (float)uVar39;
        value_02->vector[0xf].z = fVar2;
        if (value_02->max_length < 0x11) goto code_?;
        value_02->vector[0x10].x = (float)uVar38;
        value_02->vector[0x10].y = (float)uVar39;
        value_02->vector[0x10].z = fVar2;
        if (value_02->max_length < 0x12) goto code_?;
        value_02->vector[0x11].x = (float)uVar38;
        value_02->vector[0x11].y = (float)uVar39;
        value_02->vector[0x11].z = fVar2;
        pMVar48 = (Mesh *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar48,(MethodInfo *)0x0);
        if (pMVar48 != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar48,value_01,(MethodInfo *)0x0);
          value_03 = ColorEx::ColorEx_GetFilledColorArray(value_01->max_length,color,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar48,value_03,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar48,value_02,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar48,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar48,0,(MethodInfo *)0x0);
          return pMVar48;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar49 = (code *)swi(3);
  pMVar48 = (Mesh *)(*pcVar49)();
  return pMVar48;
}


/* Mesh CreateWireTriangularPrism(Vector3, Single, Single, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PrismMesh::PrismMesh_CreateWireTriangularPrism(Vector3 baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,float height,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_6F9C6EAE4AB4A7A9E05892CCFB9A9F1510EE5178EF8924458107895A1468FE0B_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = 0.0001;
  baseWidth_00 = ABS(baseWidth);
  if (ABS(baseWidth) <= 0.0001) {
    baseWidth_00 = fVar1;
  }
  baseDepth_00 = ABS(baseDepth);
  if (ABS(baseDepth) <= 0.0001) {
    baseDepth_00 = fVar1;
  }
  topWidth_00 = ABS(topWidth);
  if (ABS(topWidth) <= 0.0001) {
    topWidth_00 = fVar1;
  }
  fVar1 = ABS(topDepth);
  if (ABS(topDepth) <= 0.0001) {
    fVar1 = 0.0001;
  }
  height_00 = ABS(height);
  if (ABS(height) <= 0.0001) {
    height_00 = 0.0001;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)PrismMath::PrismMath_CalcTriangPrismCornerPoints(baseCenter,baseWidth_00,baseDepth_00,topWidth_00,fVar1,height_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,(MethodInfo *)0x0);
  if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item(&VStack_3,this,0,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pSVar4 = pVVar2->alias;
    pSVar5 = pVVar2->path;
    pVVar6 = pVVar2->asset;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item(&VStack_3,this,1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    uVar7 = pVVar2->alias;
    uVar8 = pVVar2->path;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item(&VStack_3,this,2,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    uVar9._0_4_ = pVVar2->alias;
    uStack_10 = pVVar2->path;
    pVVar11 = pVVar2->asset;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item(&VStack_3,this,3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    uVar12 = pVVar2->alias;
    uVar13 = pVVar2->path;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item((VisualTreeAsset_UsingEntry *)&stack0xffffffd8,this,5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    VStack_3.path = pVVar2->alias;
    VStack_3.asset = (VisualTreeAsset *)pVVar2->path;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item((VisualTreeAsset_UsingEntry *)&pSStack_14,this,4,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pVVar15 = TypeInfo__UnityEngine__Vector3;
    uVar16._0_4_ = pVVar2->alias;
    uVar16._4_4_ = (VisualTreeAsset *)pVVar2->path;
    pVVar17 = pVVar2->asset;
    value = (Vector3__Array *)func_?();
    if (value != (Vector3__Array *)0x0) {
      if (value->max_length == 0) goto code_?;
      value->vector[0].x = (float)pSVar4;
      value->vector[0].y = (float)pSVar5;
      value->vector[0].z = (float)pVVar6;
      if (value->max_length < 2) goto code_?;
      uStack_10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      value->vector[1].x = (float)(undefined4)uVar9;
      value->vector[1].y = (float)uStack_10;
      value->vector[1].z = (float)pVVar11;
      if (value->max_length < 3) goto code_?;
      value->vector[2].x = (float)uVar7;
      value->vector[2].y = (float)uVar8;
      value->vector[2].z = (float)&UNK_?;
      if (value->max_length < 4) goto code_?;
      value->vector[3].x = (float)uVar12;
      value->vector[3].y = (float)uVar13;
      value->vector[3].z = (float)&pSStack_14;
      if (value->max_length < 5) goto code_?;
      value->vector[4].x = (float)(String *)uVar16;
      value->vector[4].y = (float)SUB84(uVar16,4);
      value->vector[4].z = (float)pVVar17;
      if (value->max_length < 6) goto code_?;
      value->vector[5].x = (float)VStack_3.path;
      value->vector[5].y = (float)VStack_3.asset;
      value->vector[5].z = (float)&UNK_?;
      indices = (Int32__Array *)func_?();
      VStack_3.asset = (VisualTreeAsset *)&UNK_?;
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__6F9C6EAE4AB4A7A9E05892CCFB9A9F1510EE5178EF8924458107895A1468FE0B_Field,(MethodInfo *)0x0);
      pMVar18 = (Mesh *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar18,(MethodInfo *)0x0);
      if (pMVar18 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar18,value,(MethodInfo *)0x0);
        fillValue.g = 8.40779e-45;
        fillValue.r = (float)pVVar15;
        fillValue.b = color.b;
        fillValue.a = color.a;
        value_00 = ColorEx::ColorEx_GetFilledColorArray(value->max_length,fillValue,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar18,value_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar18,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar18,0,(MethodInfo *)0x0);
        return pMVar18;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  pMVar18 = (Mesh *)(*pcVar19)();
  return pMVar18;
}

