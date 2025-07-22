
/* Mesh CreateTriangularPrism(Vector3, Single, Single, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PrismMesh::PrismMesh_CreateTriangularPrism
                 (Vector3 baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,
                 float height,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_905D214FE6019886C36969B7BE09762E54A832D5F0E88FB06B774CE42A8DC642_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = (float)((uint)baseWidth & _UNK_?);
  if ((float)((uint)baseWidth & _UNK_?) <= _UNK_?) {
    fVar1 = _UNK_?;
  }
  fVar2 = (float)((uint)baseDepth & _UNK_?);
  if ((float)((uint)baseDepth & _UNK_?) <= _UNK_?) {
    fVar2 = _UNK_?;
  }
  fVar3 = (float)((uint)topWidth & _UNK_?);
  if ((float)((uint)topWidth & _UNK_?) <= _UNK_?) {
    fVar3 = _UNK_?;
  }
  fVar4 = (float)((uint)topDepth & _UNK_?);
  if ((float)((uint)topDepth & _UNK_?) <= _UNK_?) {
    fVar4 = _UNK_?;
  }
  height_00 = (float)((uint)height & _UNK_?);
  if ((float)((uint)height & _UNK_?) <= _UNK_?) {
    height_00 = _UNK_?;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  baseCenter_00.y = baseCenter.y;
  baseCenter_00.x = baseCenter.x;
  baseCenter_00.z = baseCenter.z;
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            PrismMath::PrismMath_CalcTriangPrismCornerPoints
                      (baseCenter_00,fVar1,fVar2,fVar3,fVar4,height_00,
                       TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&baseCenter,this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    method_00 = pVVar5->alias;
    uVar6 = pVVar5->path;
    pVVar7 = pVVar5->asset;
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&baseCenter,this_00,1,(MethodInfo *)method_00
                        );
    __return_storage_ptr__ = pVVar5->alias;
    this = pVVar5->path;
    pVVar8 = pVVar5->asset;
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)__return_storage_ptr__,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar9 = pVVar5->alias;
    uVar10 = pVVar5->path;
    pVVar5 = (VisualTreeAsset_UsingEntry *)&stack0xffffffe4;
    pLVar11 = this_00;
    pMVar12 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (pVVar5,this_00,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar14 = pVVar13->alias;
    baseCenter.z = (float)&UNK_?;
    baseCenter.y = (float)uVar14;
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (&VStack_15,this_00,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar16._0_4_ = pVVar13->alias;
    pVStack_17 = (VisualTreeAsset *)pVVar13->path;
    baseCenter.z = (float)&UNK_?;
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffb4,this_00,
                         (int32_t)pVVar13->asset,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar18 = TypeInfo__UnityEngine__Vector3;
    VStack_15.path = pVVar13->alias;
    VStack_15.asset = (VisualTreeAsset *)pVVar13->path;
    pVVar19 = pVVar13->asset;
    value_01 = (Vector3__Array *)func_?();
    if (value_01 != (Vector3__Array *)0x0) {
      if (value_01->max_length == 0) goto code_?;
      value_01->vector[0].x = baseCenter.y;
      value_01->vector[0].y = baseCenter.z;
      value_01->vector[0].z = (float)&stack0xffffffb4;
      if (value_01->max_length < 2) goto code_?;
      value_01->vector[1].x = (float)VStack_15.path;
      value_01->vector[1].y = (float)VStack_15.asset;
      value_01->vector[1].z = (float)pVVar19;
      if (value_01->max_length < 3) goto code_?;
      value_01->vector[2].x = (float)(String *)uVar16;
      value_01->vector[2].y = (float)pVStack_17;
      value_01->vector[2].z = (float)pVVar18;
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
      value_01->vector[5].z = (float)&UNK_?;
      if (value_01->max_length < 7) goto code_?;
      value_01->vector[6].x = (float)pMVar12;
      value_01->vector[6].y = (float)uVar6;
      value_01->vector[6].z = (float)pVVar7;
      if (value_01->max_length < 8) goto code_?;
      value_01->vector[7].x = baseCenter.y;
      value_01->vector[7].y = baseCenter.z;
      value_01->vector[7].z = (float)&stack0xffffffb4;
      if (value_01->max_length < 9) goto code_?;
      value_01->vector[8].x = (float)(String *)uVar16;
      value_01->vector[8].y = (float)pVStack_17;
      value_01->vector[8].z = (float)pVVar18;
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
      value_01->vector[0xb].z = (float)&UNK_?;
      if (value_01->max_length < 0xd) goto code_?;
      value_01->vector[0xc].x = (float)VStack_15.path;
      value_01->vector[0xc].y = (float)VStack_15.asset;
      value_01->vector[0xc].z = (float)pVVar19;
      if (value_01->max_length < 0xe) goto code_?;
      value_01->vector[0xd].x = baseCenter.y;
      value_01->vector[0xd].y = baseCenter.z;
      value_01->vector[0xd].z = (float)&stack0xffffffb4;
      if (value_01->max_length < 0xf) goto code_?;
      value_01->vector[0xe].x = (float)pVVar5;
      value_01->vector[0xe].y = (float)pLVar11;
      value_01->vector[0xe].z = (float)pVVar8;
      if (value_01->max_length < 0x10) goto code_?;
      value_01->vector[0xf].x = (float)(String *)uVar16;
      value_01->vector[0xf].y = (float)pVStack_17;
      value_01->vector[0xf].z = (float)pVVar18;
      if (value_01->max_length < 0x11) goto code_?;
      value_01->vector[0x10].x = (float)VStack_15.path;
      value_01->vector[0x10].y = (float)VStack_15.asset;
      value_01->vector[0x10].z = (float)pVVar19;
      if (value_01->max_length < 0x12) goto code_?;
      value_01->vector[0x11].x = (float)uVar9;
      value_01->vector[0x11].y = (float)uVar10;
      value_01->vector[0x11].z = (float)&UNK_?;
      indices = (Int32__Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                ((Array *)indices,
                 __905D214FE6019886C36969B7BE09762E54A832D5F0E88FB06B774CE42A8DC642_Field,
                 (MethodInfo *)0x0);
      if (value_01->max_length < 0xc) goto code_?;
      uVar20 = value_01->vector[10].x;
      uVar21 = value_01->vector[10].y;
      uVar22 = value_01->vector[0xb].x;
      uVar23 = value_01->vector[0xb].y;
      baseCenter.z = value_01->vector[0xb].z;
      fVar1 = baseCenter.z - value_01->vector[10].z;
      baseCenter.x = (float)uVar22;
      baseCenter.y = (float)uVar23;
      if (value_01->max_length < 0xe) goto code_?;
      uVar24 = value_01->vector[10].x;
      uVar25 = value_01->vector[10].y;
      uVar26 = value_01->vector[0xd].x;
      uVar27 = value_01->vector[0xd].y;
      baseCenter.z = value_01->vector[0xd].z;
      fVar2 = baseCenter.z - value_01->vector[10].z;
      value.y = fVar1 * ((float)uVar26 - (float)uVar24) - ((float)uVar22 - (float)uVar20) * fVar2;
      value.x = ((float)uVar23 - (float)uVar21) * fVar2 - fVar1 * ((float)uVar27 - (float)uVar25);
      value.z = ((float)uVar22 - (float)uVar20) * ((float)uVar27 - (float)uVar25) -
                ((float)uVar23 - (float)uVar21) * ((float)uVar26 - (float)uVar24);
      baseCenter.x = (float)uVar26;
      baseCenter.y = (float)uVar27;
      pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffb4,value,(MethodInfo *)0x0);
      uVar29 = pVVar28->x;
      uVar30 = pVVar28->y;
      fVar1 = pVVar28->z;
      baseCenter.y = (float)uVar29;
      baseCenter.z = (float)uVar30;
      if (value_01->max_length < 0x10) goto code_?;
      uVar31 = value_01->vector[0xe].x;
      uVar32 = value_01->vector[0xe].y;
      uVar33 = value_01->vector[0xf].x;
      uVar34 = value_01->vector[0xf].y;
      fVar2 = value_01->vector[0xf].z - value_01->vector[0xe].z;
      if (value_01->max_length < 0x12) goto code_?;
      uVar35 = value_01->vector[0xe].x;
      uVar36 = value_01->vector[0xe].y;
      uVar37 = value_01->vector[0x11].x;
      uVar38 = value_01->vector[0x11].y;
      fVar3 = value_01->vector[0x11].z - value_01->vector[0xe].z;
      value_00.y = fVar2 * ((float)uVar37 - (float)uVar35) - ((float)uVar33 - (float)uVar31) * fVar3
      ;
      value_00.x = ((float)uVar34 - (float)uVar32) * fVar3 -
                   fVar2 * ((float)uVar38 - (float)uVar36);
      value_00.z = ((float)uVar33 - (float)uVar31) * ((float)uVar38 - (float)uVar36) -
                   ((float)uVar34 - (float)uVar32) * ((float)uVar37 - (float)uVar35);
      pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffb4,value_00,(MethodInfo *)0x0);
      uVar39 = pVVar28->x;
      uVar40 = pVVar28->y;
      fVar2 = pVVar28->z;
      value_02 = (Vector3__Array *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (value_02 != (Vector3__Array *)0x0) {
        fVar4 = (pVVar41->upVector).y;
        fVar3 = (pVVar41->upVector).z;
        if (value_02->max_length == 0) goto code_?;
        value_02->vector[0].x = (pVVar41->upVector).x;
        value_02->vector[0].y = fVar4;
        value_02->vector[0].z = fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar4 = (pVVar41->upVector).y;
        fVar3 = (pVVar41->upVector).z;
        if (value_02->max_length < 2) goto code_?;
        value_02->vector[1].x = (pVVar41->upVector).x;
        value_02->vector[1].y = fVar4;
        value_02->vector[1].z = fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar4 = (pVVar41->upVector).y;
        fVar3 = (pVVar41->upVector).z;
        if (value_02->max_length < 3) goto code_?;
        value_02->vector[2].x = (pVVar41->upVector).x;
        value_02->vector[2].y = fVar4;
        value_02->vector[2].z = fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        uVar42 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar43 = (pVVar41->upVector).x;
        uVar44 = (pVVar41->upVector).y;
        uVar45 = uVar44 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        fVar3 = (float)((uint)(pVVar41->upVector).z ^
                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        if (value_02->max_length < 4) goto code_?;
        value_02->vector[3].x =
             (float)(uVar43 ^ 
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        value_02->vector[3].y = (float)uVar45;
        value_02->vector[3].z = fVar3;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
          uVar42 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        }
        pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar46 = (pVVar41->upVector).x;
        uVar47 = (pVVar41->upVector).y;
        fVar3 = (pVVar41->upVector).z;
        if (value_02->max_length < 5) goto code_?;
        value_02->vector[4].x = (float)(uVar46 ^ uVar42);
        value_02->vector[4].y = (float)(uVar47 ^ uVar42);
        value_02->vector[4].z = (float)((uint)fVar3 ^ uVar42);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
          uVar42 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        }
        pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar48 = (pVVar41->upVector).x;
        uVar49 = (pVVar41->upVector).y;
        fVar3 = (pVVar41->upVector).z;
        if (value_02->max_length < 6) goto code_?;
        value_02->vector[5].x = (float)(uVar48 ^ uVar42);
        value_02->vector[5].y = (float)(uVar49 ^ uVar42);
        value_02->vector[5].z = (float)((uint)fVar3 ^ uVar42);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
          uVar42 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        }
        pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar50 = (pVVar41->forwardVector).x;
        uVar51 = (pVVar41->forwardVector).y;
        fVar3 = (pVVar41->forwardVector).z;
        if (value_02->max_length < 7) goto code_?;
        value_02->vector[6].x = (float)(uVar50 ^ uVar42);
        value_02->vector[6].y = (float)(uVar51 ^ uVar42);
        value_02->vector[6].z = (float)((uint)fVar3 ^ uVar42);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
          uVar42 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        }
        pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar52 = (pVVar41->forwardVector).x;
        uVar53 = (pVVar41->forwardVector).y;
        fVar3 = (pVVar41->forwardVector).z;
        if (value_02->max_length < 8) goto code_?;
        value_02->vector[7].x = (float)(uVar52 ^ uVar42);
        value_02->vector[7].y = (float)(uVar53 ^ uVar42);
        value_02->vector[7].z = (float)((uint)fVar3 ^ uVar42);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
          uVar42 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        }
        pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar54 = (pVVar41->forwardVector).x;
        uVar55 = (pVVar41->forwardVector).y;
        fVar3 = (pVVar41->forwardVector).z;
        if (value_02->max_length < 9) goto code_?;
        value_02->vector[8].x = (float)(uVar54 ^ uVar42);
        value_02->vector[8].y = (float)(uVar55 ^ uVar42);
        value_02->vector[8].z = (float)((uint)fVar3 ^ uVar42);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
          uVar42 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        }
        pVVar41 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar56 = (pVVar41->forwardVector).x;
        uVar57 = (pVVar41->forwardVector).y;
        fVar3 = (pVVar41->forwardVector).z;
        if (value_02->max_length < 10) goto code_?;
        value_02->vector[9].x = (float)(uVar56 ^ uVar42);
        value_02->vector[9].y = (float)(uVar57 ^ uVar42);
        value_02->vector[9].z = (float)((uint)fVar3 ^ uVar42);
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
        value_02->vector[0xe].x = (float)uVar39;
        value_02->vector[0xe].y = (float)uVar40;
        value_02->vector[0xe].z = fVar2;
        if (value_02->max_length < 0x10) goto code_?;
        value_02->vector[0xf].x = (float)uVar39;
        value_02->vector[0xf].y = (float)uVar40;
        value_02->vector[0xf].z = fVar2;
        if (value_02->max_length < 0x11) goto code_?;
        value_02->vector[0x10].x = (float)uVar39;
        value_02->vector[0x10].y = (float)uVar40;
        value_02->vector[0x10].z = fVar2;
        if (value_02->max_length < 0x12) goto code_?;
        value_02->vector[0x11].x = (float)uVar39;
        value_02->vector[0x11].y = (float)uVar40;
        value_02->vector[0x11].z = fVar2;
        pMVar58 = (Mesh *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar58,(MethodInfo *)0x0);
        if (pMVar58 != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                    (pMVar58,value_01,(MethodInfo *)0x0);
          value_03 = ColorEx::ColorEx_GetFilledColorArray
                               (value_01->max_length,color,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                    (pMVar58,value_03,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                    (pMVar58,value_02,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                    (pMVar58,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                    (pMVar58,0,(MethodInfo *)0x0);
          return pMVar58;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar59 = (code *)swi(3);
  pMVar58 = (Mesh *)(*pcVar59)();
  return pMVar58;
}


/* Mesh CreateWireTriangularPrism(Vector3, Single, Single, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PrismMesh::PrismMesh_CreateWireTriangularPrism
                 (Vector3 baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,
                 float height,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_6F9C6EAE4AB4A7A9E05892CCFB9A9F1510EE5178EF8924458107895A1468FE0B_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  baseWidth_00 = (float)((uint)baseWidth & _UNK_?);
  if ((float)((uint)baseWidth & _UNK_?) <= _UNK_?) {
    baseWidth_00 = _UNK_?;
  }
  baseDepth_00 = (float)((uint)baseDepth & _UNK_?);
  if ((float)((uint)baseDepth & _UNK_?) <= _UNK_?) {
    baseDepth_00 = _UNK_?;
  }
  topWidth_00 = (float)((uint)topWidth & _UNK_?);
  if ((float)((uint)topWidth & _UNK_?) <= _UNK_?) {
    topWidth_00 = _UNK_?;
  }
  topDepth_00 = (float)((uint)topDepth & _UNK_?);
  if ((float)((uint)topDepth & _UNK_?) <= _UNK_?) {
    topDepth_00 = _UNK_?;
  }
  height_00 = (float)((uint)height & _UNK_?);
  if ((float)((uint)height & _UNK_?) <= _UNK_?) {
    height_00 = _UNK_?;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
         PrismMath::PrismMath_CalcTriangPrismCornerPoints
                   (baseCenter,baseWidth_00,baseDepth_00,topWidth_00,topDepth_00,height_00,
                    TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                    (MethodInfo *)0x0);
  if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (&VStack_2,this,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pSVar3 = pVVar1->alias;
    pSVar4 = pVVar1->path;
    pVVar5 = pVVar1->asset;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (&VStack_2,this,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar6 = pVVar1->alias;
    uVar7 = pVVar1->path;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (&VStack_2,this,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar8._0_4_ = pVVar1->alias;
    uStack_9 = pVVar1->path;
    pVVar10 = pVVar1->asset;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (&VStack_2,this,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar11 = pVVar1->alias;
    uVar12 = pVVar1->path;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffd8,this,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    VStack_2.path = pVVar1->alias;
    VStack_2.asset = (VisualTreeAsset *)pVVar1->path;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_13,this,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar14 = TypeInfo__UnityEngine__Vector3;
    uVar15._0_4_ = pVVar1->alias;
    uVar15._4_4_ = (VisualTreeAsset *)pVVar1->path;
    pVVar16 = pVVar1->asset;
    value = (Vector3__Array *)func_?();
    if (value != (Vector3__Array *)0x0) {
      if (value->max_length == 0) goto code_?;
      value->vector[0].x = (float)pSVar3;
      value->vector[0].y = (float)pSVar4;
      value->vector[0].z = (float)pVVar5;
      if (value->max_length < 2) goto code_?;
      uStack_9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      value->vector[1].x = (float)(undefined4)uVar8;
      value->vector[1].y = (float)uStack_9;
      value->vector[1].z = (float)pVVar10;
      if (value->max_length < 3) goto code_?;
      value->vector[2].x = (float)uVar6;
      value->vector[2].y = (float)uVar7;
      value->vector[2].z = (float)&UNK_?;
      if (value->max_length < 4) goto code_?;
      value->vector[3].x = (float)uVar11;
      value->vector[3].y = (float)uVar12;
      value->vector[3].z = (float)&pSStack_13;
      if (value->max_length < 5) goto code_?;
      value->vector[4].x = (float)(String *)uVar15;
      value->vector[4].y = (float)SUB84(uVar15,4);
      value->vector[4].z = (float)pVVar16;
      if (value->max_length < 6) goto code_?;
      value->vector[5].x = (float)VStack_2.path;
      value->vector[5].y = (float)VStack_2.asset;
      value->vector[5].z = (float)&UNK_?;
      indices = (Int32__Array *)func_?();
      VStack_2.asset = (VisualTreeAsset *)&UNK_?;
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                ((Array *)indices,
                 __6F9C6EAE4AB4A7A9E05892CCFB9A9F1510EE5178EF8924458107895A1468FE0B_Field,
                 (MethodInfo *)0x0);
      pMVar17 = (Mesh *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar17,(MethodInfo *)0x0);
      if (pMVar17 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                  (pMVar17,value,(MethodInfo *)0x0);
        fillValue.g = 8.40779e-45;
        fillValue.r = (float)pVVar14;
        fillValue.b = color.b;
        fillValue.a = color.a;
        value_00 = ColorEx::ColorEx_GetFilledColorArray
                             (value->max_length,fillValue,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                  (pMVar17,value_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                  (pMVar17,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                  (pMVar17,0,(MethodInfo *)0x0);
        return pMVar17;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  pMVar17 = (Mesh *)(*pcVar18)();
  return pMVar17;
}

