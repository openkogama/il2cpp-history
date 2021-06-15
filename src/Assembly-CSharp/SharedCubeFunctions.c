
/* Void AddCubeLine(Mesh, Vector3, Vector3, Single) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeLine(Mesh *mesh,Vector3 p0,Vector3 p1,float diagonalWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e0d);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  mesh_00 = p1.z;
  fVar1 = p0.z;
  a_05.y = p1.y;
  a_05.x = p1.x;
  a_05.z = p1.z;
  b_01.y = p0.y;
  b_01.x = p0.x;
  b_01.z = p0.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction((Vector3 *)&stack0xffffffb4,a_05,b_01,(MethodInfo *)0x0);
  pVVar2 = (Vector3 *)func_?(&stack0xffffffcc,&stack0xffffffc0,0);
  fVar3 = pVVar2->x;
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  fVar6 = pVVar2->y;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply((Vector3 *)&stack0xffffffcc,*pVVar2,diagonalWidth * 0.5,(MethodInfo *)0x0);
  a_06.y = p0.y;
  a_06.x = p0.x;
  a_06.z = fVar1;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction(&p0,a_06,*pVVar2,(MethodInfo *)0x0);
  uVar7 = pVVar2->x;
  uVar8 = pVVar2->y;
  pVVar2 = &p0;
  a_07.y = fVar4;
  a_07.x = fVar3;
  a_07.z = fVar5;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply(pVVar2,a_07,diagonalWidth * 0.5,(MethodInfo *)0x0);
  p1.x = 0.0;
  uVar10 = pVVar9->x;
  uVar11 = pVVar9->y;
  p0.z = pVVar9->z;
  auVar12._4_4_ = mesh_00;
  auVar12._0_4_ = p1.y;
  __return_storage_ptr__ = &p0;
  puVar13 = &UNK_?;
  auVar12._8_4_ = 0;
  p0.x = (float)uVar10;
  p0.y = (float)uVar11;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition(__return_storage_ptr__,(Vector3)(auVar12 << 0x20),*pVVar9,(MethodInfo *)0x0);
  p1.z = (float)pVVar2;
  uVar14._0_4_ = pVVar9->x;
  uVar14._4_4_ = pVVar9->y;
  fVar4 = pVVar9->z;
  fVar1 = 0.0;
  to.y = 0.0;
  to.x = p1.z;
  p1.y = (float)&UNK_?;
  from.y = fVar3;
  from.x = p1.z;
  from.z = fVar5;
  to.z = fVar5;
  pVStack_15 = (Vector3 *)p1.z;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle(from,to,(MethodInfo *)0x0);
  p0.z = -fVar5;
  if (fVar6 < 0.0) {
    p0.z = fVar5;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
  uVar16 = pVVar2->x;
  uVar17 = pVVar2->y;
  fVar6 = pVVar2->z;
  p1.y = (float)uVar16;
  p1.z = (float)uVar17;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
  v1.y = p1.z;
  v1.x = p1.y;
  v1.z = fVar6;
  v2.y = fVar1;
  v2.x = (float)pVStack_15;
  v2.z = (float)__return_storage_ptr__;
  fVar6 = MathFunctions::MathFunctions_SignedAngle_1(v1,v2,*pVVar2,(MethodInfo *)0x0);
  p1.z = fVar6 * 57.29578;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler((Quaternion *)&stack0xffffffb0,p0.z,0.0,0.0,(MethodInfo *)0x0);
  fVar6 = pQVar18->x;
  fVar5 = pQVar18->y;
  fVar1 = pQVar18->z;
  fVar19 = pQVar18->w;
  pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler((Quaternion *)&fStack_20,0.0,p1.z,0.0,(MethodInfo *)0x0);
  rhs.y = fVar5;
  rhs.x = fVar6;
  rhs.z = fVar1;
  rhs.w = fVar19;
  pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply((Quaternion *)&stack0xffffffb0,*pQVar18,rhs,(MethodInfo *)0x0);
  fStack_20 = pQVar18->x;
  pVStack_15 = (Vector3 *)pQVar18->y;
  fVar6 = pQVar18->z;
  fVar5 = pQVar18->w;
  iVar21 = func_?();
  if (iVar21 == 0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down(&p0,(MethodInfo *)0x0);
    rotation.y = (float)pVStack_15;
    rotation.x = fStack_20;
    rotation.z = fVar6;
    rotation.w = fVar5;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1(&p1,rotation,*pVVar2,(MethodInfo *)0x0);
    uVar22 = pVVar2->x;
    uVar23 = pVVar2->y;
    fVar1 = pVVar2->z;
    p0.y = (float)uVar22;
    p0.z = (float)uVar23;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left(&p1,(MethodInfo *)0x0);
    rotation_00.y = (float)pVStack_15;
    rotation_00.x = fStack_20;
    rotation_00.z = fVar6;
    rotation_00.w = fVar5;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1(&p1,rotation_00,*pVVar2,(MethodInfo *)0x0);
    a.y = p0.z;
    a.x = p0.y;
    a.z = fVar1;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition(&p0,a,*pVVar2,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply(&p0,*pVVar2,fVar3,(MethodInfo *)0x0);
    fVar1 = pVVar2->z;
    if (*(int *)(iVar21 + 0xc) == 0) goto code_?;
    p1.z = (float)(iVar21 + 0x10);
    *(undefined8 *)p1.z = *(undefined8 *)pVVar2;
    *(float *)(iVar21 + 0x18) = fVar1;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down(&p0,(MethodInfo *)0x0);
    rotation_01.y = (float)pVStack_15;
    rotation_01.x = fStack_20;
    rotation_01.z = fVar6;
    rotation_01.w = fVar5;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&stack0xffffffb4,rotation_01,*pVVar2,(MethodInfo *)0x0);
    uVar24 = pVVar2->x;
    uVar25 = pVVar2->y;
    fVar1 = pVVar2->z;
    p0.y = (float)uVar24;
    p0.z = (float)uVar25;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
    rotation_02.y = (float)pVStack_15;
    rotation_02.x = fStack_20;
    rotation_02.z = fVar6;
    rotation_02.w = fVar5;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&stack0xffffffb4,rotation_02,*pVVar2,(MethodInfo *)0x0);
    a_00.y = p0.z;
    a_00.x = p0.y;
    a_00.z = fVar1;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition(&p0,a_00,*pVVar2,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply(&p0,*pVVar2,fVar3,(MethodInfo *)0x0);
    fVar1 = pVVar2->z;
    if (*(uint *)(iVar21 + 0xc) < 2) goto code_?;
    *(undefined8 *)(iVar21 + 0x1c) = *(undefined8 *)pVVar2;
    *(float *)(iVar21 + 0x24) = fVar1;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up(&p0,(MethodInfo *)0x0);
    rotation_03.y = (float)pVStack_15;
    rotation_03.x = fStack_20;
    rotation_03.z = fVar6;
    rotation_03.w = fVar5;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&stack0xffffffb4,rotation_03,*pVVar2,(MethodInfo *)0x0);
    uVar26 = pVVar2->x;
    uVar27 = pVVar2->y;
    fVar1 = pVVar2->z;
    p0.y = (float)uVar26;
    p0.z = (float)uVar27;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
    rotation_04.y = (float)pVStack_15;
    rotation_04.x = fStack_20;
    rotation_04.z = fVar6;
    rotation_04.w = fVar5;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&stack0xffffffb4,rotation_04,*pVVar2,(MethodInfo *)0x0);
    a_01.y = p0.z;
    a_01.x = p0.y;
    a_01.z = fVar1;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition(&p0,a_01,*pVVar2,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply(&p0,*pVVar2,fVar3,(MethodInfo *)0x0);
    fVar1 = pVVar2->z;
    if (2 < *(uint *)(iVar21 + 0xc)) {
      *(undefined8 *)(iVar21 + 0x28) = *(undefined8 *)pVVar2;
      *(float *)(iVar21 + 0x30) = fVar1;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up(&p0,(MethodInfo *)0x0);
      rotation_05.y = (float)pVStack_15;
      rotation_05.x = fStack_20;
      rotation_05.z = fVar6;
      rotation_05.w = fVar5;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&stack0xffffffb4,rotation_05,*pVVar2,(MethodInfo *)0x0);
      uVar28 = pVVar2->x;
      uVar29 = pVVar2->y;
      fVar1 = pVVar2->z;
      p0.y = (float)uVar28;
      p0.z = (float)uVar29;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
      rotation_06.y = (float)pVStack_15;
      rotation_06.x = fStack_20;
      rotation_06.z = fVar6;
      rotation_06.w = fVar5;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&stack0xffffffb4,rotation_06,*pVVar2,(MethodInfo *)0x0);
      a_02.y = p0.z;
      a_02.x = p0.y;
      a_02.z = fVar1;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition(&p0,a_02,*pVVar2,(MethodInfo *)0x0);
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply(&p0,*pVVar2,fVar3,(MethodInfo *)0x0);
      fVar3 = pVVar2->z;
      if (3 < *(uint *)(iVar21 + 0xc)) {
        *(undefined8 *)(iVar21 + 0x34) = *(undefined8 *)pVVar2;
        *(float *)(iVar21 + 0x3c) = fVar3;
        corners = (Vector3__Array *)func_?();
        puVar30 = (undefined8 *)(iVar21 + 0x10);
        p0.z = 0.0;
        do {
          if (corners == (Vector3__Array *)0x0) goto code_?;
          if ((uint)*(float *)(iVar21 + 0xc) <= (uint)p0.z) goto code_?;
          uVar31 = *puVar30;
          fVar3 = *(float *)(puVar30 + 1);
          fVar6 = (float)uVar31;
          fVar5 = (float)((ulonglong)uVar31 >> 0x20);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar31 = CONCAT44(fVar5,fVar6);
          }
          a_03.z = fVar3;
          a_03.x = (float)(int)uVar31;
          a_03.y = (float)(int)((ulonglong)uVar31 >> 0x20);
          b.y = (float)uVar8;
          b.x = (float)uVar7;
          b.z = (float)puVar13;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition((Vector3 *)&stack0xffffffb4,a_03,b,(MethodInfo *)0x0);
          fVar5 = pVVar2->x;
          fVar1 = pVVar2->y;
          fVar3 = pVVar2->z;
          puVar32 = (undefined8 *)func_?();
          puVar30 = (undefined8 *)((int)p1.z + 0xc);
          *puVar32 = CONCAT44(fVar1,fVar5);
          *(float *)(puVar32 + 1) = fVar3;
          p0.z = (float)((int)p0.z + 1);
          p1.z = (float)puVar30;
        } while ((int)p0.z < 4);
        p0.z = 0.0;
        while (uVar33 = 3 - (int)p0.z, uVar33 < *(uint *)(iVar21 + 0xc)) {
          uVar31 = *(undefined8 *)(iVar21 + 0x10 + uVar33 * 0xc);
          fVar3 = *(float *)(iVar21 + 0x18 + uVar33 * 0xc);
          p1.y = (float)uVar31;
          p1.z = (float)((ulonglong)uVar31 >> 0x20);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar31 = CONCAT44(p1.z,p1.y);
          }
          a_04.z = fVar3;
          a_04.x = (float)(int)uVar31;
          a_04.y = (float)(int)((ulonglong)uVar31 >> 0x20);
          b_00.z = fVar4;
          b_00.x = (float)uVar14;
          b_00.y = SUB84(uVar14,4);
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition((Vector3 *)&stack0xffffffb4,a_04,b_00,(MethodInfo *)0x0);
          uVar34 = pVVar2->x;
          uVar35 = pVVar2->y;
          fVar3 = pVVar2->z;
          p1.y = (float)uVar34;
          p1.z = (float)uVar35;
          puVar30 = (undefined8 *)func_?();
          p0.z = (float)((int)p0.z + 1);
          *puVar30 = CONCAT44(p1.z,p1.y);
          *(float *)(puVar30 + 1) = fVar3;
          if (3 < (int)p0.z) {
            if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
              func_?();
            }
            SharedCubeFunctions_AddCubeMesh((Mesh *)mesh_00,corners,0,(MethodInfo *)0x0);
            return;
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
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void AddCubeMesh(Mesh, Vector3[], Boolean) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh(Mesh *mesh,Vector3__Array *corners,bool insideOut,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e0f);
    cRam_? = '\x01';
  }
  if (mesh != (Mesh *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertexCount(mesh,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      this = (List_1_VoxelHit_ *)func_?(TypeInfo__System__Collections__Generic__List<int>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::List_1_UnityEngine_Vector4___ctor((List_1_UnityEngine_Vector4_ *)this,MethodInfo__System__Collections__Generic__List<int>__List__);
    }
    else {
      collection = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles(mesh,(MethodInfo *)0x0);
      this = (List_1_VoxelHit_ *)func_?(TypeInfo__System__Collections__Generic__List<int>);
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1(this,(IEnumerable_1_VoxelHit_ *)collection,MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_);
    }
    collection_00 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv(mesh,(MethodInfo *)0x0);
    pLStack_2 = (List_1_VoxelHit_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1(pLStack_2,(IEnumerable_1_VoxelHit_ *)collection_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices(mesh,(MethodInfo *)0x0);
    pLVar4 = (List_1_VoxelHit_ *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    pLStack_5 = pLVar4;
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1(pLVar4,(IEnumerable_1_VoxelHit_ *)pVVar3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_);
    if (pLVar4 != (List_1_VoxelHit_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pVVar3 = SharedCubeFunctions_GetVertices_1(corners,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange(pLVar4,(IEnumerable_1_VoxelHit_ *)pVVar3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_);
      puStack_7 = (undefined *)0x0;
      pOVar6 = (Object *)((int)&pOVar6->klass + 2);
      do {
        if (insideOut == 0) {
          if (this == (List_1_VoxelHit_ *)0x0) break;
          item = (Object *)((int)(pOVar6 + 0xffffffff) + 6);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(UIPushOption__Enum)item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(UIPushOption__Enum)((int)&pOVar6->klass + 1),MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pOVar6,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pOVar6,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(int)(pOVar6 + 0xffffffff) + 7,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        }
        else {
          if (this == (List_1_VoxelHit_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pOVar6,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(UIPushOption__Enum)((int)&pOVar6->klass + 1),MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(int)(pOVar6 + 0xffffffff) + 6U,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(int)(pOVar6 + 0xffffffff) + 6U,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(int)(pOVar6 + 0xffffffff) + 7,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          item = pOVar6;
        }
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(UIPushOption__Enum)item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        VStack_8.x = 0.0;
        VStack_8.y = 0.0;
        func_?();
        pLVar4 = pLStack_2;
        if (pLStack_2 == (List_1_VoxelHit_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__Add((List_1_UnityEngine_Vector2_ *)pLStack_2,VStack_8,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
        VStack_9.x = 0.0;
        VStack_9.y = 0.0;
        func_?(&VStack_9,0x3f800000,0);
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__Add((List_1_UnityEngine_Vector2_ *)pLVar4,VStack_9,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
        VStack_9 = (Vector2)((ulonglong)VStack_9 & 0xffffffff00000000);
        func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__Add((List_1_UnityEngine_Vector2_ *)pLVar4,(Vector2)0x3f8000003f800000,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
        pLStack_5 = (List_1_VoxelHit_ *)0x0;
        VStack_8.x = 0.0;
        VStack_8.y = 1.0;
        VStack_9.y = (float)&stack0xffffffd0;
        VStack_9.x = (float)&UNK_?;
        func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__Add((List_1_UnityEngine_Vector2_ *)pLVar4,(Vector2)0x0,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
        puStack_7 = puStack_7 + 1;
        pOVar6 = (Object *)&pOVar6->monitor;
        if (5 < (int)puStack_7) {
          pVVar10 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray(pLStack_5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices((Mesh *)0x0,(Vector3__Array *)pVVar10,(MethodInfo *)0x0);
          pVVar10 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray(pLStack_2,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv((Mesh *)0x0,(Vector2__Array *)pVVar10,(MethodInfo *)0x0);
          pVVar10 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray(this,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles((Mesh *)0x0,(Int32__Array *)pVVar10,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals((Mesh *)0x0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds((Mesh *)0x0,(MethodInfo *)0x0);
          return;
        }
      } while( true );
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void AddCubeMeshCubeLines(Mesh, Vector3[], Single) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines(Mesh *mesh,Vector3__Array *corners,float diagonalWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e0e);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pVVar2 = corners->vector;
  do {
    if (corners == (Vector3__Array *)0x0) {
      func_?(0);
      goto code_?;
    }
    if (corners->max_length <= uVar1) goto code_?;
    uVar1 = uVar1 + 1;
    VVar3 = *pVVar2;
    uVar4 = uVar1 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    if (corners->max_length <= uVar4) goto code_?;
    uVar5 = corners->vector[uVar4].x;
    uVar6 = corners->vector[uVar4].y;
    p1_00.y = (float)uVar6;
    p1_00.x = (float)uVar5;
    fVar7 = corners->vector[uVar4].z;
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    p1_00.z = fVar7;
    SharedCubeFunctions_AddCubeLine(mesh,VVar3,p1_00,diagonalWidth,(MethodInfo *)0x0);
    pVVar2 = pVVar2 + 1;
  } while ((int)uVar1 < 4);
  uVar1 = 4;
  pVVar2 = corners->vector + 4;
  do {
    if (corners->max_length <= uVar1) goto code_?;
    uVar1 = uVar1 + 1;
    VVar3 = *pVVar2;
    uVar4 = uVar1 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    if (corners->max_length <= uVar4 + 4) goto code_?;
    uVar8 = corners->vector[uVar4 + 4].x;
    uVar9 = corners->vector[uVar4 + 4].y;
    p1.y = (float)uVar9;
    p1.x = (float)uVar8;
    fVar7 = corners->vector[uVar4 + 4].z;
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    p1.z = fVar7;
    SharedCubeFunctions_AddCubeLine(mesh,VVar3,p1,diagonalWidth,(MethodInfo *)0x0);
    pVVar2 = pVVar2 + 1;
  } while ((int)uVar1 < 8);
  uVar1 = 0;
  pVVar2 = corners->vector;
  while (uVar1 < corners->max_length) {
    VVar3 = *pVVar2;
    uVar4 = 7 - uVar1;
    if (corners->max_length <= uVar4) break;
    uVar10 = *(undefined8 *)((int)corners + uVar4 * 0xc + 0x10);
    fVar7 = *(float *)((int)corners + uVar4 * 0xc + 0x18);
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    p1_01.z = fVar7;
    p1_01._0_8_ = uVar10;
    SharedCubeFunctions_AddCubeLine(mesh,VVar3,p1_01,diagonalWidth,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    pVVar2 = pVVar2 + 1;
    if (3 < (int)uVar1) {
      return;
    }
  }
code_?:
  uVar11 = func_?(0,0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Dictionary`2[MV.WorldObject.IntVector,Cube] CreateFromBytePackage(BytePacker) */

Dictionary_2_MV_WorldObject_IntVector_Cube_ * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_CreateFromBytePackage(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e10);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)func_?(TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__Dictionary__);
  if (bp != (BytePacker *)0x0) {
    iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
        iVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
        iVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
        uVar7 = 0;
        func_?(&stack0xffffffdc,iVar4,iVar5,iVar6);
        byteFlags = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
        this = (Cube *)func_?(TypeInfo__Cube);
        Cube::Cube__ctor_1(this,bp,byteFlags,(MethodInfo *)0x0);
        if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)0x0) goto code_?;
        key.z = 0;
        key.x = (short)uVar7;
        key.y = (short)(uVar7 >> 0x10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__set_Item((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,key,(Object *)this,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__set_Item_MV__WorldObject__IntVector__Cube_);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    return pDVar1;
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  pDVar1 = (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)(*pcVar8)();
  return pDVar1;
}


/* IntVector CubePosToChunk(IntVector, Int32) */

IntVector Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk(IntVector cubePos,int32_t chunkSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e11);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  sVar2 = 0;
  func_?(&stack0xfffffff4,CONCAT22(in_stack_3,cubePos.z),CONCAT22((undefined2)chunkSize,in_stack_3),chunkSize,0);
  sVar4 = (short)uVar1;
  iVar5 = (int)method / 2;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  sVar6 = (short)((uint)uVar1 >> 0x10);
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(((float)(int)sVar4 + (float)iVar5) / (float)(int)method,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(((float)(int)sVar6 + (float)iVar5) / (float)(int)method,(MethodInfo *)0x0);
  f = ((float)(int)sVar2 + (float)iVar5) / (float)(int)method;
  iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(f,(MethodInfo *)0x0);
  *(float *)cubePos._0_4_ = f;
  *(int16_t *)(cubePos._0_4_ + 4) = (int16_t)iVar7;
  IVar8.z = (int16_t)iVar7;
  IVar8.x = cubePos.x;
  IVar8.y = cubePos.y;
  return IVar8;
}


/* Nullable`1[UnityEngine.Bounds] GetAxisAlignedBoundsRecursively(Transform) */

Nullable_1_UnityEngine_Bounds_ * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively(Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,Transform *transform,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffe4c;
  puVar5 = &stack0xfffffe4c;
  if (cRam_? == '\0') {
    func_?(0x5e13);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  EStack_6.fields._current = 0;
  EStack_6.fields._17_3_ = 0;
  EStack_6.fields._8_8_ = 0;
  EStack_6.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
  EStack_6.monitor = (MonitorData *)0x0;
  EStack_6.fields.source = (IEnumerable *)0x0;
  EStack_6.fields.__s_59___0 = (IEnumerator *)0x0;
  EStack_7.fields._current = 0;
  EStack_7.fields._17_3_ = 0;
  EStack_7.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
  EStack_7.monitor = (MonitorData *)0x0;
  EStack_7.fields.source = (IEnumerable *)0x0;
  EStack_7.fields.__s_59___0 = (IEnumerator *)0x0;
  EStack_7.fields._8_8_ = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  uStack_18 = 0;
  uStack_19 = 0;
  uStack_20 = 0;
  uStack_21 = 0;
  uStack_22 = 0;
  uStack_23 = 0;
  uStack_24 = 0;
  uStack_25 = 0;
  uStack_26 = 0;
  uStack_27 = 0;
  uStack_28 = 0;
  uStack_29 = 0;
  uStack_30 = 0;
  uStack_31 = 0;
  uStack_32 = 0;
  uStack_33 = 0;
  uStack_34 = 0;
  uStack_35 = 0;
  uStack_36 = 0;
  uStack_37 = 0;
  uStack_38 = 0;
  uStack_39 = 0;
  uStack_40 = 0;
  uStack_41 = 0;
  uStack_42 = 0;
  func_?();
  EStack_6.fields.___source = (IEnumerable *)&stack0xfffffe4c;
  puStack_4 = &stack0xfffffe4c;
  if (transform != (Transform *)0x0) {
    EStack_6.fields.___source = (IEnumerable *)&stack0xfffffe4c;
    puStack_4 = &stack0xfffffe4c;
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58((Component_1 *)transform,UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__);
    EStack_6.fields._current = 0;
    EStack_6.fields._17_3_ = 0;
    EStack_6.fields._8_8_ = 0;
    EStack_6.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
    EStack_6.monitor = (MonitorData *)0x0;
    EStack_6.fields.source = (IEnumerable *)0x0;
    EStack_6.fields.__s_59___0 = (IEnumerator *)0x0;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar43 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar43 != 0) {
      if (this == (MVInteractableBase *)0x0) goto code_?;
      bVar43 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled((Renderer *)this,(MethodInfo *)0x0);
      if (bVar43 != 0) {
        pBVar44 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds((Bounds *)&stack0xfffffe58,(Renderer *)this,(MethodInfo *)0x0);
        EStack_7.fields.___source = (IEnumerable *)0x0;
        pMStack_45 = (MonitorData *)0x0;
        pIStack_46 = (IEnumerable *)0x0;
        pIStack_47 = (IEnumerator *)0x0;
        uStack_48._0_1_ = 0;
        uStack_48._1_3_ = 0;
        uStack_49._0_4_ = 0.0;
        uStack_49._4_4_ = 0.0;
        func_?(&EStack_7.fields.___source,(pBVar44->m_Center).x,(pBVar44->m_Center).y);
        EStack_6.fields._current = (uint8_t)uStack_48;
        EStack_6.fields._17_3_ = uStack_48._1_3_;
        EStack_6.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)EStack_7.fields.___source;
        EStack_6.monitor = pMStack_45;
        EStack_6.fields.source = pIStack_46;
        EStack_6.fields.__s_59___0 = pIStack_47;
        EStack_6.fields._8_8_ = uStack_49;
      }
    }
    pIVar50 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator(transform,(MethodInfo *)0x0);
    uStack_1 = 0;
    while (pIVar50 != (IEnumerator *)0x0) {
      cVar51 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar50);
      if (cVar51 == '\0') {
        (EStack_6.fields.___source)->klass = (IEnumerable__Class *)0x137;
        uStack_1 = 0xffffffff;
        iVar52 = func_?(pIVar50,TypeInfo__System__IDisposable);
        if (iVar52 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar52);
        }
        (__return_storage_ptr__->value).m_Center.x = (float)EStack_6.klass;
        (__return_storage_ptr__->value).m_Center.y = (float)EStack_6.monitor;
        (__return_storage_ptr__->value).m_Center.z = (float)EStack_6.fields.source;
        (__return_storage_ptr__->value).m_Extents.x = (float)EStack_6.fields.__s_59___0;
        *(undefined8 *)&(__return_storage_ptr__->value).m_Extents.y = EStack_6.fields._8_8_;
        __return_storage_ptr__->has_value = EStack_6.fields._current;
        *(undefined3 *)&__return_storage_ptr__->field_0x19 = EStack_6.fields._17_3_;
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      pTVar53 = (Transform *)func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar50);
      transform = (Transform *)TypeInfo__UnityEngine__Transform;
      if (pTVar53 == (Transform *)0x0) {
        transform_00 = (Transform *)0x0;
      }
      else {
        bVar54 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
        if (((pTVar53->klass->_1).naturalAligment < bVar54) || ((pTVar53->klass->_1).typeHierarchy[bVar54 - 1] != (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
          bVar55 = false;
        }
        else {
          bVar55 = true;
        }
        transform_00 = (Transform *)0x0;
        if (bVar55) {
          transform_00 = pTVar53;
        }
        if (transform_00 == (Transform *)0x0) {
          func_?(pTVar53,TypeInfo__UnityEngine__Transform);
          break;
        }
      }
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pNVar56 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively(&NStack_57,transform_00,(MethodInfo *)0x0);
      EStack_7.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)(pNVar56->value).m_Center.x;
      EStack_7.monitor = (MonitorData *)(pNVar56->value).m_Center.y;
      EStack_7.fields.source = (IEnumerable *)(pNVar56->value).m_Center.z;
      EStack_7.fields.__s_59___0 = (IEnumerator *)(pNVar56->value).m_Extents.x;
      EStack_7.fields._8_4_ = (pNVar56->value).m_Extents.y;
      EStack_7.fields._PC = (int32_t)(pNVar56->value).m_Extents.z;
      EStack_7.fields._current = pNVar56->has_value;
      EStack_7.fields._17_3_ = *(undefined3 *)&pNVar56->field_0x19;
      uVar58 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current(&EStack_6,MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
      if (uVar58 == 0) {
        EStack_6.klass = EStack_7.klass;
        EStack_6.monitor = EStack_7.monitor;
        EStack_6.fields.source = EStack_7.fields.source;
        EStack_6.fields.__s_59___0 = EStack_7.fields.__s_59___0;
        EStack_6.fields._current = EStack_7.fields._current;
        EStack_6.fields._17_3_ = EStack_7.fields._17_3_;
        EStack_6.fields._element___1 = EStack_7.fields._element___1;
        EStack_6.fields._9_3_ = EStack_7.fields._9_3_;
        EStack_6.fields._PC = EStack_7.fields._PC;
      }
      else {
        uVar58 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current(&EStack_7,MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
        if (uVar58 != 0) {
          uStack_12 = 0;
          uStack_8 = 0;
          uStack_9 = 0;
          uStack_10 = 0;
          uStack_11 = 0;
          puVar59 = (undefined4 *)func_?(&pMStack_45);
          uStack_13 = *puVar59;
          uStack_14 = puVar59[1];
          uStack_15 = puVar59[2];
          uStack_16 = puVar59[3];
          uStack_17 = *(undefined8 *)(puVar59 + 4);
          puVar60 = (undefined8 *)func_?(auStack_61);
          func_?(&uStack_8,(int)*puVar60,(int)((ulonglong)*puVar60 >> 0x20));
          puVar59 = (undefined4 *)func_?(&pMStack_45);
          uStack_18 = *puVar59;
          uStack_19 = puVar59[1];
          uStack_20 = puVar59[2];
          uStack_21 = puVar59[3];
          uStack_22 = *(undefined8 *)(puVar59 + 4);
          puVar60 = (undefined8 *)func_?(auStack_62);
          func_?(&uStack_8,(int)*puVar60,(int)((ulonglong)*puVar60 >> 0x20));
          puVar59 = (undefined4 *)func_?(&pMStack_45);
          uStack_23 = *puVar59;
          uStack_24 = puVar59[1];
          uStack_25 = puVar59[2];
          uStack_26 = puVar59[3];
          uStack_27 = *(undefined8 *)(puVar59 + 4);
          puVar60 = (undefined8 *)func_?(auStack_63);
          uStack_64 = *puVar60;
          fVar65 = *(float *)(puVar60 + 1);
          puVar59 = (undefined4 *)func_?(&pMStack_45);
          uStack_28 = *puVar59;
          uStack_29 = puVar59[1];
          uStack_30 = puVar59[2];
          uStack_31 = puVar59[3];
          uStack_32 = *(undefined8 *)(puVar59 + 4);
          pVVar66 = (Vector3 *)func_?(auStack_67);
          min0.z = fVar65;
          min0.x = (float)(undefined4)uStack_64;
          min0.y = (float)uStack_64._4_4_;
          MathFunctions::MathFunctions_GetMinVector(&VStack_68,min0,*pVVar66,(MethodInfo *)0x0);
          func_?();
          puVar59 = (undefined4 *)func_?();
          uStack_33 = *puVar59;
          uStack_34 = puVar59[1];
          uStack_35 = puVar59[2];
          uStack_36 = puVar59[3];
          uStack_37 = *(undefined8 *)(puVar59 + 4);
          puVar60 = (undefined8 *)func_?();
          uStack_64 = *puVar60;
          fVar65 = *(float *)(puVar60 + 1);
          puVar59 = (undefined4 *)func_?();
          uStack_38 = *puVar59;
          uStack_39 = puVar59[1];
          uStack_40 = puVar59[2];
          uStack_41 = puVar59[3];
          uStack_42 = *(undefined8 *)(puVar59 + 4);
          pVVar66 = (Vector3 *)func_?();
          max0.z = fVar65;
          max0.x = (float)(undefined4)uStack_64;
          max0.y = (float)uStack_64._4_4_;
          pVVar66 = MathFunctions::MathFunctions_GetMaxVector((Vector3 *)&stack0xfffffe64,max0,*pVVar66,(MethodInfo *)0x0);
          uVar69 = pVVar66->y;
          VStack_68.y = pVVar66->z;
          VStack_68.z = 0.0;
          VStack_68.x = (float)uVar69;
          func_?();
          NStack_57.has_value = 0;
          NStack_57._25_3_ = 0;
          NStack_57.value.m_Center.x = 0.0;
          NStack_57.value.m_Center.y = 0.0;
          NStack_57.value.m_Center.z = 0.0;
          NStack_57.value.m_Extents.x = 0.0;
          VStack_68.z = (float)MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_;
          NStack_57.value.m_Extents.y = 0.0;
          NStack_57.value.m_Extents.z = 0.0;
          VStack_68.x = (float)uStack_12;
          VStack_68.y = (float)((ulonglong)uStack_12 >> 0x20);
          func_?();
          EStack_6.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)NStack_57.value.m_Center.x;
          EStack_6.monitor = (MonitorData *)NStack_57.value.m_Center.y;
          EStack_6.fields.source = (IEnumerable *)NStack_57.value.m_Center.z;
          EStack_6.fields.__s_59___0 = (IEnumerator *)NStack_57.value.m_Extents.x;
          EStack_6.fields._current = NStack_57.has_value;
          EStack_6.fields._17_3_ = NStack_57._25_3_;
          EStack_6.fields._8_4_ = NStack_57.value.m_Extents.y;
          EStack_6.fields._PC = (int32_t)NStack_57.value.m_Extents.z;
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(transform,0,0);
  pcVar70 = (code *)swi(3);
  pNVar56 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar70)();
  return pNVar56;
}


/* Nullable`1[UnityEngine.Bounds] GetAxisAlignedBoundsRecursively(List`1[MVWorldObjectClient]) */

Nullable_1_UnityEngine_Bounds_ * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively_1(Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,List_1_MVWorldObjectClient_ *wos,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(0x5e14);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  this = (List_1_UnityEngine_Vector4_ *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::List_1_UnityEngine_Vector4___ctor(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  pLStack_8 = this;
  if (wos != (List_1_MVWorldObjectClient_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::List_1_UnityEngine_Color32__GetEnumerator((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,(List_1_UnityEngine_Color32_ *)wos,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__);
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
    CStack_6.monitor = (MonitorData *)pLVar9->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
    uStack_1 = 0;
    while( true ) {
      NStack_11.value.m_Center.y = (float)MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__;
      NStack_11.value.m_Center.x = (float)&CStack_6;
      cVar12 = func_?();
      if (cVar12 == '\0') {
        *puStack_7 = 0x45;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__);
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        pNVar13 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2(&NStack_11,(List_1_UnityEngine_Transform_ *)this,(MethodInfo *)0x0);
        fVar14 = (pNVar13->value).m_Center.y;
        fVar15 = (pNVar13->value).m_Center.z;
        fVar16 = (pNVar13->value).m_Extents.x;
        bVar17 = pNVar13->has_value;
        uVar18 = *(undefined3 *)&pNVar13->field_0x19;
        (__return_storage_ptr__->value).m_Center.x = (pNVar13->value).m_Center.x;
        (__return_storage_ptr__->value).m_Center.y = fVar14;
        (__return_storage_ptr__->value).m_Center.z = fVar15;
        (__return_storage_ptr__->value).m_Extents.x = fVar16;
        fVar14 = (pNVar13->value).m_Extents.z;
        (__return_storage_ptr__->value).m_Extents.y = (pNVar13->value).m_Extents.y;
        (__return_storage_ptr__->value).m_Extents.z = fVar14;
        __return_storage_ptr__->has_value = bVar17;
        *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar18;
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      this_00 = (PrefabPool *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot(&CStack_6,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__);
      if ((this_00 == (PrefabPool *)0x0) || (item = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0), this == (List_1_UnityEngine_Vector4_ *)0x0)) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add((List_1_UIPushOption_ *)this,(UIPushOption__Enum)item,MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_);
    }
  }
  func_?();
  func_?(0,0,0);
  pcVar19 = (code *)swi(3);
  pNVar13 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar19)();
  return pNVar13;
}


/* Nullable`1[UnityEngine.Bounds] GetAxisAlignedBoundsRecursively(List`1[UnityEngine.Transform]) */

Nullable_1_UnityEngine_Bounds_ * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2(Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,List_1_UnityEngine_Transform_ *transforms,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  EStack_4.fields.___source = (IEnumerable *)&stack0xfffffe48;
  pIVar5 = (IEnumerable *)&stack0xfffffe48;
  if (cRam_? == '\0') {
    func_?(0x5e12);
    cRam_? = '\x01';
    pIVar5 = EStack_4.fields.___source;
  }
  EStack_4.fields.___source = pIVar5;
  auStack_6._24_4_ = 0;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  auStack_6._0_4_ = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (IEnumerable *)0x0;
  auStack_6._12_4_ = (IEnumerator *)0x0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  uStack_18 = 0;
  uStack_19 = 0;
  uStack_20 = 0;
  uStack_21 = 0;
  uStack_22 = 0;
  uStack_23 = 0;
  uStack_24 = 0;
  uStack_25 = 0;
  uStack_26 = 0;
  uStack_27 = 0;
  uStack_28 = 0;
  uStack_29 = 0;
  uStack_30 = 0;
  uStack_31 = 0;
  uStack_32 = 0;
  uStack_33 = 0;
  uStack_34 = 0;
  uStack_35 = 0;
  uStack_36 = 0;
  uStack_37 = 0;
  uStack_38._0_1_ = 0;
  uStack_38._1_1_ = 0;
  uStack_38._2_1_ = 0;
  uStack_38._3_1_ = 0;
  uStack_39 = 0;
  uStack_40 = 0;
  uStack_41 = 0;
  uStack_42 = 0;
  func_?();
  EStack_4.fields._8_8_ = 0;
  EStack_4.fields._current = 0;
  EStack_4.fields._17_3_ = 0;
  EStack_4.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
  EStack_4.monitor = (MonitorData *)0x0;
  EStack_4.fields.source = (IEnumerable *)0x0;
  EStack_4.fields.__s_59___0 = (IEnumerator *)0x0;
  if (transforms != (List_1_UnityEngine_Transform_ *)0x0) {
    puStack_43 = (undefined4 *)&stack0xfffffe48;
    EStack_4.fields.___source = (IEnumerable *)&stack0xfffffe48;
    pLVar44 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::List_1_UnityEngine_Color32__GetEnumerator((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_45,(List_1_UnityEngine_Color32_ *)transforms,MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__GetEnumerator__);
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar44->l;
    CStack_7.monitor = (MonitorData *)pLVar44->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar44->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar44->current).rgba;
    uStack_1 = 0;
    while (cVar46 = func_?(), cVar46 != '\0') {
      transform = (Transform *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot(&CStack_7,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__get_Current__);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pNVar47 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively(&NStack_48,transform,(MethodInfo *)0x0);
      auStack_6._0_4_ = (pNVar47->value).m_Center.x;
      auStack_6._4_4_ = (pNVar47->value).m_Center.y;
      auStack_6._8_4_ = (pNVar47->value).m_Center.z;
      auStack_6._12_4_ = (pNVar47->value).m_Extents.x;
      auStack_6._16_4_ = (pNVar47->value).m_Extents.y;
      auStack_6._20_4_ = (pNVar47->value).m_Extents.z;
      auStack_6[0x18] = pNVar47->has_value;
      auStack_6._25_3_ = *(undefined3 *)&pNVar47->field_0x19;
      uVar49 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current(&EStack_4,MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
      if (uVar49 == 0) {
        EStack_4.fields._16_4_ = auStack_6._24_4_;
        EStack_4.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)auStack_6._0_4_;
        EStack_4.monitor = (MonitorData *)auStack_6._4_4_;
        EStack_4.fields.source = (IEnumerable *)auStack_6._8_4_;
        EStack_4.fields.__s_59___0 = (IEnumerator *)auStack_6._12_4_;
        EStack_4.fields._element___1 = auStack_6[0x10];
        EStack_4.fields._9_3_ = auStack_6._17_3_;
        EStack_4.fields._PC = auStack_6._20_4_;
      }
      else {
        uVar49 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)auStack_6,MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
        if (uVar49 != 0) {
          uStack_8 = 0;
          uStack_9 = 0;
          uStack_10 = 0;
          uStack_11 = 0;
          uStack_12 = 0;
          puVar50 = (undefined4 *)func_?();
          uStack_13 = *puVar50;
          uStack_14 = puVar50[1];
          uStack_15 = puVar50[2];
          uStack_16 = puVar50[3];
          uStack_17 = *(undefined8 *)(puVar50 + 4);
          func_?();
          func_?();
          puVar50 = (undefined4 *)func_?();
          uStack_18 = *puVar50;
          uStack_19 = puVar50[1];
          uStack_20 = puVar50[2];
          uStack_21 = puVar50[3];
          uStack_22 = *(undefined8 *)(puVar50 + 4);
          func_?();
          func_?();
          puVar50 = (undefined4 *)func_?();
          uStack_23 = *puVar50;
          uStack_24 = puVar50[1];
          uStack_25 = puVar50[2];
          uStack_26 = puVar50[3];
          uStack_27 = *(undefined8 *)(puVar50 + 4);
          puVar51 = (undefined8 *)func_?();
          auStack_6._28_8_ = *puVar51;
          fVar52 = *(float *)(puVar51 + 1);
          puVar50 = (undefined4 *)func_?();
          uStack_28 = *puVar50;
          uStack_29 = puVar50[1];
          uStack_30 = puVar50[2];
          uStack_31 = puVar50[3];
          uStack_32 = *(undefined8 *)(puVar50 + 4);
          pVVar53 = (Vector3 *)func_?();
          min0.z = fVar52;
          min0.x = (float)auStack_6._28_4_;
          min0.y = (float)auStack_6._32_4_;
          MathFunctions::MathFunctions_GetMinVector((Vector3 *)&stack0xfffffe6c,min0,*pVVar53,(MethodInfo *)0x0);
          func_?();
          puVar50 = (undefined4 *)func_?();
          uStack_33 = *puVar50;
          uStack_34 = puVar50[1];
          uStack_35 = puVar50[2];
          uStack_36 = puVar50[3];
          uStack_37 = *(undefined8 *)(puVar50 + 4);
          puVar51 = (undefined8 *)func_?();
          auStack_6._28_8_ = *puVar51;
          fVar52 = *(float *)(puVar51 + 1);
          puVar50 = (undefined4 *)func_?();
          uStack_38 = *puVar50;
          uStack_39 = puVar50[1];
          uStack_40 = puVar50[2];
          uStack_41 = puVar50[3];
          uStack_42 = *(undefined8 *)(puVar50 + 4);
          pVVar53 = (Vector3 *)func_?();
          max0.z = fVar52;
          max0.x = (float)auStack_6._28_4_;
          max0.y = (float)auStack_6._32_4_;
          MathFunctions::MathFunctions_GetMaxVector((Vector3 *)(auStack_45 + 4),max0,*pVVar53,(MethodInfo *)0x0);
          func_?();
          NStack_48.has_value = 0;
          NStack_48._25_3_ = 0;
          NStack_48.value.m_Center.x = 0.0;
          NStack_48.value.m_Center.y = 0.0;
          NStack_48.value.m_Center.z = 0.0;
          NStack_48.value.m_Extents.x = 0.0;
          NStack_48.value.m_Extents.y = 0.0;
          NStack_48.value.m_Extents.z = 0.0;
          func_?();
          EStack_4.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)NStack_48.value.m_Center.x;
          EStack_4.monitor = (MonitorData *)NStack_48.value.m_Center.y;
          EStack_4.fields.source = (IEnumerable *)NStack_48.value.m_Center.z;
          EStack_4.fields.__s_59___0 = (IEnumerator *)NStack_48.value.m_Extents.x;
          EStack_4.fields._current = NStack_48.has_value;
          EStack_4.fields._17_3_ = NStack_48._25_3_;
          EStack_4.fields._8_4_ = NStack_48.value.m_Extents.y;
          EStack_4.fields._PC = (int32_t)NStack_48.value.m_Extents.z;
        }
      }
    }
    *puStack_43 = 0xfe;
    uStack_1 = 0xffffffff;
    func_?(&CStack_7,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__);
    (__return_storage_ptr__->value).m_Center.x = (float)EStack_4.klass;
    (__return_storage_ptr__->value).m_Center.y = (float)EStack_4.monitor;
    (__return_storage_ptr__->value).m_Center.z = (float)EStack_4.fields.source;
    (__return_storage_ptr__->value).m_Extents.x = (float)EStack_4.fields.__s_59___0;
    *(undefined8 *)&(__return_storage_ptr__->value).m_Extents.y = EStack_4.fields._8_8_;
    __return_storage_ptr__->has_value = EStack_4.fields._current;
    *(undefined3 *)&__return_storage_ptr__->field_0x19 = EStack_4.fields._17_3_;
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  puStack_43 = (undefined4 *)&stack0xfffffe48;
  EStack_4.fields.___source = (IEnumerable *)&stack0xfffffe48;
  func_?(0);
  func_?(0,0,0);
  pcVar54 = (code *)swi(3);
  pNVar47 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar54)();
  return pNVar47;
}


/* Vector3 GetClosestGridPoint(Vector3, Quaternion, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint(Vector3 *__return_storage_ptr__,Vector3 worldPosition,Quaternion rotation,float gridSize,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e15);
    cRam_? = '\x01';
  }
  func_?(&uStack_1,0,0x40);
  func_?(&stack0xffffff70,0,0x40);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  point.y = scale.y;
  point.x = scale.x;
  point.z = scale.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1(&VStack_3,rotation,point,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar2->x;
  uVar4._4_4_ = pVVar2->y;
  fVar5 = pVVar2->z;
  scale.y = (float)(undefined4)uVar4;
  scale.z = (float)uVar4._4_4_;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
    uVar4 = CONCAT44(scale.z,scale.y);
  }
  a.z = fVar5;
  a.x = (float)(int)uVar4;
  a.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply(&scale,a,0.5,(MethodInfo *)0x0);
  VStack_3.y = pVVar2->x;
  VStack_3.z = pVVar2->y;
  fVar5 = pVVar2->z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one(&scale,(MethodInfo *)0x0);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply((Vector3 *)&stack0xffffff64,*pVVar2,gridSize,(MethodInfo *)0x0);
  uVar6._0_4_ = pVVar2->x;
  uVar6._4_4_ = pVVar2->y;
  fVar7 = pVVar2->z;
  scale.y = (float)(undefined4)uVar6;
  scale.z = (float)uVar6._4_4_;
  if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
    func_?();
    uVar6 = CONCAT44(scale.z,scale.y);
  }
  pos.z = fVar5;
  pos.x = VStack_3.y;
  pos.y = VStack_3.z;
  s.z = fVar7;
  s.x = (float)(int)uVar6;
  s.y = (float)(int)((ulonglong)uVar6 >> 0x20);
  pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS((Matrix4x4 *)&puStack_9,pos,rotation,s,(MethodInfo *)0x0);
  uStack_1._0_4_ = pMVar8->m00;
  uStack_1._4_4_ = pMVar8->m10;
  fStack_10 = pMVar8->m20;
  fStack_11 = pMVar8->m30;
  fStack_12 = pMVar8->m01;
  fStack_13 = pMVar8->m11;
  fStack_14 = pMVar8->m21;
  fStack_15 = pMVar8->m31;
  fStack_16 = pMVar8->m02;
  fStack_17 = pMVar8->m12;
  fStack_18 = pMVar8->m22;
  fStack_19 = pMVar8->m32;
  fStack_20 = pMVar8->m03;
  fStack_21 = pMVar8->m13;
  fStack_22 = pMVar8->m23;
  fStack_23 = pMVar8->m33;
  func_?();
  pVVar2 = (Vector3 *)func_?();
  pVVar2 = MathFunctions::MathFunctions_RoundVector(&scale,*pVVar2,0,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar2->x;
  uStack_1._4_4_ = pVVar2->y;
  fStack_10 = pVVar2->z;
  fStack_11 = 0.0;
  puVar24 = (undefined8 *)func_?();
  uVar4 = *puVar24;
  __return_storage_ptr__->x = (float)(int)uVar4;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->z = *(float *)(puVar24 + 1);
  return __return_storage_ptr__;
}


/* Vector3[] GetCorners() */

Vector3__Array * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e17);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  uVar2 = 0;
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
  }
  else {
    fStack_4 = 0.0;
    uStack_5 = 0;
    func_?(&uStack_5,0xbf000000,0x3f000000,0xbf000000);
    uVar2 = 0;
    if (pVVar1->max_length == 0) goto code_?;
    pVVar1->vector[0].x = (float)(undefined4)uStack_5;
    pVVar1->vector[0].y = (float)uStack_5._4_4_;
    pVVar1->vector[0].z = fStack_4;
    uStack_6 = 0;
    fStack_7 = 0.0;
    func_?(&uStack_6,0x3f000000,0x3f000000,0xbf000000);
    uVar2 = 0;
    if (pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].x = (float)(undefined4)uStack_6;
    pVVar1->vector[1].y = (float)uStack_6._4_4_;
    pVVar1->vector[1].z = fStack_7;
    uStack_8 = 0;
    fStack_9 = 0.0;
    func_?(&uStack_8,0x3f000000,0x3f000000,0x3f000000);
    uVar2 = 0;
    if (pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].x = (float)(undefined4)uStack_8;
    pVVar1->vector[2].y = (float)uStack_8._4_4_;
    pVVar1->vector[2].z = fStack_9;
    uStack_10 = 0;
    fStack_11 = 0.0;
    func_?(&uStack_10,0xbf000000,0x3f000000,0x3f000000);
    uVar2 = 0;
    if (pVVar1->max_length < 4) goto code_?;
    pVVar1->vector[3].x = (float)(undefined4)uStack_10;
    pVVar1->vector[3].y = (float)uStack_10._4_4_;
    pVVar1->vector[3].z = fStack_11;
    uStack_12 = 0;
    fStack_13 = 0.0;
    func_?(&uStack_12,0xbf000000,0xbf000000,0x3f000000);
    uVar2 = 0;
    if (pVVar1->max_length < 5) goto code_?;
    pVVar1->vector[4].x = (float)(undefined4)uStack_12;
    pVVar1->vector[4].y = (float)uStack_12._4_4_;
    pVVar1->vector[4].z = fStack_13;
    uStack_14 = 0;
    fStack_15 = 0.0;
    func_?(&uStack_14,0x3f000000,0xbf000000,0x3f000000);
    uVar2 = 0;
    if (pVVar1->max_length < 6) goto code_?;
    pVVar1->vector[5].x = (float)(undefined4)uStack_14;
    pVVar1->vector[5].y = (float)uStack_14._4_4_;
    pVVar1->vector[5].z = fStack_15;
    uStack_16 = 0;
    fStack_17 = 0.0;
    func_?(&uStack_16,0x3f000000,0xbf000000,0xbf000000);
    uVar2 = 0;
    if (6 < pVVar1->max_length) {
      pVVar1->vector[6].x = (float)(undefined4)uStack_16;
      pVVar1->vector[6].y = (float)uStack_16._4_4_;
      pVVar1->vector[6].z = fStack_17;
      uStack_18 = 0;
      fStack_19 = 0.0;
      func_?(&uStack_18,0xbf000000,0xbf000000,0xbf000000);
      if (7 < pVVar1->max_length) {
        pVVar1->vector[7].x = (float)(undefined4)uStack_18;
        pVVar1->vector[7].y = (float)uStack_18._4_4_;
        pVVar1->vector[7].z = fStack_19;
        return pVVar1;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,uVar2);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar20 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar20)();
  return pVVar1;
}


/* Vector3[] GetCorners(Bounds) */

Vector3__Array * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners_1(Bounds bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e16);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&bounds,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  puVar1 = (undefined8 *)func_?(auStack_5,&bounds,0);
  uStack_6 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  min.z = fVar4;
  min.x = (float)(undefined4)uStack_3;
  min.y = (float)uStack_3._4_4_;
  max.z = fVar7;
  max.x = (float)(undefined4)uStack_6;
  max.y = (float)uStack_6._4_4_;
  pVVar8 = SharedCubeFunctions_GetCorners_2(min,max,(MethodInfo *)0x0);
  return pVVar8;
}


/* Vector3[] GetCorners(Vector3, Vector3) */

Vector3__Array * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners_2(Vector3 min,Vector3 max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e18);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  uVar2 = 0;
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
  }
  else {
    fStack_4 = 0.0;
    uStack_5 = 0;
    func_?(&uStack_5,min.x,max.y,min.z);
    uVar2 = 0;
    if (pVVar1->max_length == 0) goto code_?;
    pVVar1->vector[0].x = (float)(undefined4)uStack_5;
    pVVar1->vector[0].y = (float)uStack_5._4_4_;
    pVVar1->vector[0].z = fStack_4;
    uStack_6 = 0;
    fStack_7 = 0.0;
    func_?(&uStack_6,max.x,max.y,min.z);
    uVar2 = 0;
    if (pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].x = (float)(undefined4)uStack_6;
    pVVar1->vector[1].y = (float)uStack_6._4_4_;
    pVVar1->vector[1].z = fStack_7;
    uStack_8 = 0;
    fStack_9 = 0.0;
    func_?(&uStack_8,max.x,max.y,max.z);
    uVar2 = 0;
    if (pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].x = (float)(undefined4)uStack_8;
    pVVar1->vector[2].y = (float)uStack_8._4_4_;
    pVVar1->vector[2].z = fStack_9;
    uStack_10 = 0;
    fStack_11 = 0.0;
    func_?(&uStack_10,min.x,max.y,max.z);
    uVar2 = 0;
    if (pVVar1->max_length < 4) goto code_?;
    pVVar1->vector[3].x = (float)(undefined4)uStack_10;
    pVVar1->vector[3].y = (float)uStack_10._4_4_;
    pVVar1->vector[3].z = fStack_11;
    uStack_12 = 0;
    fStack_13 = 0.0;
    func_?(&uStack_12,min.x,min.y,max.z);
    uVar2 = 0;
    if (pVVar1->max_length < 5) goto code_?;
    pVVar1->vector[4].x = (float)(undefined4)uStack_12;
    pVVar1->vector[4].y = (float)uStack_12._4_4_;
    pVVar1->vector[4].z = fStack_13;
    uStack_14 = 0;
    fStack_15 = 0.0;
    func_?(&uStack_14,max.x,min.y,max.z);
    uVar2 = 0;
    if (pVVar1->max_length < 6) goto code_?;
    pVVar1->vector[5].x = (float)(undefined4)uStack_14;
    pVVar1->vector[5].y = (float)uStack_14._4_4_;
    pVVar1->vector[5].z = fStack_15;
    uStack_16 = 0;
    fStack_17 = 0.0;
    func_?(&uStack_16,max.x,min.y,min.z);
    uVar2 = 0;
    if (6 < pVVar1->max_length) {
      pVVar1->vector[6].x = (float)(undefined4)uStack_16;
      pVVar1->vector[6].y = (float)uStack_16._4_4_;
      pVVar1->vector[6].z = fStack_17;
      uStack_18 = 0;
      fStack_19 = 0.0;
      func_?(&uStack_18,min.x,min.y,min.z);
      if (7 < pVVar1->max_length) {
        pVVar1->vector[7].x = (float)(undefined4)uStack_18;
        pVVar1->vector[7].y = (float)uStack_18._4_4_;
        pVVar1->vector[7].z = fStack_19;
        return pVVar1;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,uVar2);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar20 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar20)();
  return pVVar1;
}


/* Vector3[] GetTriangleVertices(Int32, GameObject) */

Vector3__Array * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetTriangleVertices(int32_t triangleIndex,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e19);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  if (gameObject == (GameObject *)0x0) {
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
  }
  else {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47(gameObject,UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__);
    if ((pVVar1 == (Vector3__Array *)0x0) || (this == (UseInteractorHandler *)0x0)) goto code_?;
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices(pMVar2,(MethodInfo *)0x0);
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles(pMVar2,(MethodInfo *)0x0);
    if (pIVar3 == (Int32__Array *)0x0) goto code_?;
    if (pIVar3->max_length < 0x30851542) goto code_?;
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pMVar4 = (Mesh__Class *)pIVar3[-0x6e14bf].vector[0x1d];
    if (pMVar2[1].klass <= pMVar4) goto code_?;
    MVar5._.m_CachedPtr = pMVar2[(int)((int)&(pMVar4->_0).image + 1)].fields._;
    pMVar6 = pMVar2[(int)((int)&(pMVar4->_0).image + 2)].klass;
    if (pVVar1->max_length == 0) goto code_?;
    pVVar1->vector[0].x = (float)pMVar2[(int)((int)&(pMVar4->_0).image + 1)].monitor;
    pVVar1->vector[0].y = (float)MVar5._.m_CachedPtr;
    pVVar1->vector[0].z = (float)pMVar6;
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices(pMVar2,(MethodInfo *)0x0);
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles(pMVar2,(MethodInfo *)0x0);
    if (pIVar3 == (Int32__Array *)0x0) goto code_?;
    if (pIVar3->max_length < 0x30851543) goto code_?;
    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
    uVar8 = pIVar3[-0x6e14bf].vector[0x1e];
    if (pVVar7->max_length <= uVar8) goto code_?;
    fVar9 = pVVar7->vector[uVar8].y;
    fVar10 = pVVar7->vector[uVar8].z;
    if (pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].x = pVVar7->vector[uVar8].x;
    pVVar1->vector[1].y = fVar9;
    pVVar1->vector[1].z = fVar10;
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices(pMVar2,(MethodInfo *)0x0);
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles(pMVar2,(MethodInfo *)0x0);
    if (pIVar3 == (Int32__Array *)0x0) goto code_?;
    if (pIVar3->max_length < 0x30851544) goto code_?;
    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
    uVar8 = pIVar3[-0x6e14bf].vector[0x1f];
    if (uVar8 < pVVar7->max_length) {
      fVar9 = pVVar7->vector[uVar8].y;
      fVar10 = pVVar7->vector[uVar8].z;
      if (2 < pVVar1->max_length) {
        pVVar1->vector[2].x = pVVar7->vector[uVar8].x;
        pVVar1->vector[2].y = fVar9;
        pVVar1->vector[2].z = fVar10;
        return pVVar1;
      }
      goto code_?;
    }
  }
  uStack11 = 0;
  uStack12 = 0;
  func_?();
  func_?();
code_?:
  uStack11 = 0;
  uStack12 = 0;
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar13)();
  return pVVar1;
}


/* Vector3[] GetVertices() */

Vector3__Array * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e1c);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pVVar1 = SharedCubeFunctions_GetCorners((MethodInfo *)0x0);
  pVVar1 = SharedCubeFunctions_GetVertices_1(pVVar1,(MethodInfo *)0x0);
  return pVVar1;
}


/* Vector3[] GetVertices(Vector3[]) */

Vector3__Array * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices_1(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e1a);
    cRam_? = '\x01';
  }
  this = (List_1_VoxelHit_ *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1(this,(IEnumerable_1_VoxelHit_ *)corners,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_);
  if (this != (List_1_VoxelHit_ *)0x0) {
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,7,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,6,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,0,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,4,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,2,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,4,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,7,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,0,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,6,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,2,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__get_Item((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    return (Vector3__Array *)pVVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector3__Array *)(*pcVar3)();
  return pVVar4;
}


/* Void GetVertices(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices_2(CubePickingInfo *info,GameObject *gameObject,MethodInfo *method)

{
  pCVar1 = info;
  if (cRam_? == '\0') {
    func_?(0x5e1b);
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  if (info == (CubePickingInfo *)0x0) goto code_?;
  edge = (info->fields).pickedEdge;
  if (edge == Edge__Enum_None) {
    return;
  }
  cube = (info->fields).cube;
  uStack_6 = CONCAT44((info->fields).pickedFace,(undefined4)uStack_6);
  pVStack_7._0_2_ = (info->fields).iLocalPos.x;
  pVStack_7._2_2_ = (info->fields).iLocalPos.y;
  iVar8 = (info->fields).iLocalPos.z;
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  iVector.z = iVar8;
  iVector._0_4_ = pVStack_7;
  pVStack_7 = Cube::Cube_GetEdgeVerticesWorld(gameObject,cube,(Face__Enum)uStack_6._4_4_,edge,iVector,(MethodInfo *)0x0);
  pVVar9 = Cube::Cube_GetEdge((info->fields).cube,(info->fields).pickedFace,(info->fields).pickedEdge,(MethodInfo *)0x0);
  if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
  if (pVVar9->max_length == 0) {
code_?:
    uVar10 = func_?(0,0);
    func_?(uVar10);
  }
  else {
    uStack_6._0_4_ = pVVar9->vector[0].x;
    uStack_6._4_4_ = pVVar9->vector[0].y;
    fVar11 = pVVar9->vector[0].z;
    if (1 < pVVar9->max_length) {
      VStack_12.y = pVVar9->vector[1].x;
      VStack_12.z = pVVar9->vector[1].y;
      fVar13 = pVVar9->vector[1].z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        uStack_2 = CONCAT44(TypeInfo__UnityEngine__Vector3,&UNK_?);
        func_?();
      }
      a.z = fVar11;
      a.x = (float)(undefined4)uStack_6;
      a.y = uStack_6._4_4_;
      b.z._0_2_ = SUB42(fVar13,0);
      b.x = VStack_12.y;
      b.y = VStack_12.z;
      b.z._2_2_ = (short)((uint)fVar13 >> 0x10);
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction(&VStack_15,a,b,(MethodInfo *)0x0);
      uStack_2._0_4_ = pVVar14->x;
      uStack_2._4_4_ = pVVar14->y;
      fStack_3 = pVVar14->z;
      fVar16 = (float10)func_?((short)&uStack_2,0);
      uStack_6 = CONCAT44((float)fVar16,(undefined4)uStack_6);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      VStack_15.z = 0.0;
      VStack_15.x = 0.0;
      VStack_15.y = 0.0;
      iVar17 = 0;
      info = (CubePickingInfo *)0x0;
      do {
        if ((gameObject == (GameObject *)0x0) || (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(gameObject,(MethodInfo *)0x0), this == (Transform *)0x0)) goto code_?;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale(&VStack_12,this,(MethodInfo *)0x0);
        uVar18 = pVVar14->x;
        uVar19 = pVVar14->y;
        VStack_15.z = pVVar14->z;
        VStack_15.x = (float)uVar18;
        VStack_15.y = (float)uVar19;
        fVar16 = (float10)func_?(&VStack_15,iVar17,0);
        iVar17 = iVar17 + 1;
        info = (CubePickingInfo *)(float)(fVar16 + (float10)(float)info);
      } while (iVar17 < 3);
      uVar20 = 0;
      uStack_6 = CONCAT44(((float)info / 3.0) * 0.15 * uStack_6._4_4_,(undefined4)uStack_6);
      if (pVStack_7 == (Vector3__Array *)0x0) goto code_?;
      while( true ) {
        if ((int)pVStack_7->max_length <= (int)uVar20) {
          return;
        }
        if (pVStack_7->max_length <= uVar20) break;
        uVar21._0_4_ = (pCVar1->fields).point.x;
        uVar21._4_4_ = (pCVar1->fields).point.y;
        VStack_12.y = pVStack_7->vector[uVar20].x;
        VStack_12.z = pVStack_7->vector[uVar20].y;
        fVar11 = pVStack_7->vector[uVar20].z;
        fVar13 = (pCVar1->fields).point.z;
        VStack_15.y = (float)(undefined4)uVar21;
        VStack_15.z = (float)uVar21._4_4_;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
          uVar21 = CONCAT44(VStack_15.z,VStack_15.y);
        }
        a_00.z = fVar11;
        a_00.x = VStack_12.y;
        a_00.y = VStack_12.z;
        b_00.z._0_2_ = SUB42(fVar13,0);
        b_00.x = (float)(int)uVar21;
        b_00.y = (float)(int)((ulonglong)uVar21 >> 0x20);
        b_00.z._2_2_ = (short)((uint)fVar13 >> 0x10);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction(&VStack_22,a_00,b_00,(MethodInfo *)0x0);
        uStack_4._0_4_ = pVVar14->x;
        uStack_4._4_4_ = pVVar14->y;
        fStack_5 = pVVar14->z;
        fVar16 = (float10)func_?((short)&uStack_4,0);
        if ((float)fVar16 < uStack_6._4_4_) {
          if (uVar20 != 0) {
            if (uVar20 == 1) {
              (pCVar1->fields).pickedEdgeIndex1 = 1;
            }
            goto code_?;
          }
          uVar20 = 1;
          (pCVar1->fields).pickedEdgeIndex0 = 1;
        }
        else {
code_?:
          uVar20 = uVar20 + 1;
        }
      }
      goto code_?;
    }
  }
  uVar10 = func_?(0,0);
  func_?(uVar10);
code_?:
  func_?(0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Vector3 GetWorldCenter(List`1[UnityEngine.Transform]) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter(Vector3 *__return_storage_ptr__,List_1_UnityEngine_Transform_ *transforms,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e1e);
    cRam_? = '\x01';
  }
  pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
  pMStack_2 = (MonitorData *)0x0;
  pIStack_3 = (IEnumerable *)0x0;
  pIStack_4 = (Il2CppImage *)0x0;
  pvStack_5 = (void *)0x0;
  pcStack_6 = (char *)0x0;
  pcStack_7 = (char *)0x0;
  IStack_8.data = (_union_86)0x0;
  IStack_8.attrs = 0;
  IStack_8.type = 0;
  IStack_8._7_1_ = 0;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pNVar9 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2((Nullable_1_UnityEngine_Bounds_ *)auStack_10,transforms,(MethodInfo *)0x0);
  pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)(pNVar9->value).m_Center.x;
  pMStack_2 = (MonitorData *)(pNVar9->value).m_Center.y;
  pIStack_3 = (IEnumerable *)(pNVar9->value).m_Center.z;
  uVar11 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)&pEStack_1,MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
  if (uVar11 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero(&VStack_13,(MethodInfo *)0x0);
  }
  else {
    pIStack_3 = (IEnumerable *)(auStack_10 + 4);
    puVar14 = (undefined4 *)func_?();
    pMStack_2 = (MonitorData *)0x0;
    pIStack_4 = (Il2CppImage *)*puVar14;
    pvStack_5 = (void *)puVar14[1];
    pcStack_6 = (char *)puVar14[2];
    pcStack_7 = (char *)puVar14[3];
    IStack_8 = *(Il2CppType *)(puVar14 + 4);
    pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)&pIStack_4;
    pVVar12 = (Vector3 *)func_?(&VStack_13);
  }
  fVar15 = pVVar12->y;
  fVar16 = pVVar12->z;
  __return_storage_ptr__->x = pVVar12->x;
  __return_storage_ptr__->y = fVar15;
  __return_storage_ptr__->z = fVar16;
  return __return_storage_ptr__;
}


/* Vector3 GetWorldCenter(Transform) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1(Vector3 *__return_storage_ptr__,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e1d);
    cRam_? = '\x01';
  }
  pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
  pMStack_2 = (MonitorData *)0x0;
  pIStack_3 = (IEnumerable *)0x0;
  pIStack_4 = (Il2CppImage *)0x0;
  pvStack_5 = (void *)0x0;
  pcStack_6 = (char *)0x0;
  pcStack_7 = (char *)0x0;
  IStack_8.data = (_union_86)0x0;
  IStack_8.attrs = 0;
  IStack_8.type = 0;
  IStack_8._7_1_ = 0;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pNVar9 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively((Nullable_1_UnityEngine_Bounds_ *)auStack_10,transform,(MethodInfo *)0x0);
  pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)(pNVar9->value).m_Center.x;
  pMStack_2 = (MonitorData *)(pNVar9->value).m_Center.y;
  pIStack_3 = (IEnumerable *)(pNVar9->value).m_Center.z;
  uVar11 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)&pEStack_1,MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
  if (uVar11 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero(&VStack_13,(MethodInfo *)0x0);
  }
  else {
    pIStack_3 = (IEnumerable *)(auStack_10 + 4);
    puVar14 = (undefined4 *)func_?();
    pMStack_2 = (MonitorData *)0x0;
    pIStack_4 = (Il2CppImage *)*puVar14;
    pvStack_5 = (void *)puVar14[1];
    pcStack_6 = (char *)puVar14[2];
    pcStack_7 = (char *)puVar14[3];
    IStack_8 = *(Il2CppType *)(puVar14 + 4);
    pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)&pIStack_4;
    pVVar12 = (Vector3 *)func_?(&VStack_13);
  }
  fVar15 = pVVar12->y;
  fVar16 = pVVar12->z;
  __return_storage_ptr__->x = pVVar12->x;
  __return_storage_ptr__->y = fVar15;
  __return_storage_ptr__->z = fVar16;
  return __return_storage_ptr__;
}


/* Vector3 LocalToWorld(GameObject, IntVector) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_LocalToWorld(Vector3 *__return_storage_ptr__,GameObject *gameObject,IntVector iVector,MethodInfo *method)

{
  if (gameObject != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(gameObject,(MethodInfo *)0x0);
    uStack_1 = 0;
    fStack_2 = 0.0;
    VStack_3.x = 0.0;
    func_?(&uStack_1,(float)(int)iVector.x,(float)(int)iVector.y,(float)(int)iVector.z);
    if (this != (Transform *)0x0) {
      position.z = fStack_2;
      position.x = (float)(undefined4)uStack_1;
      position.y = (float)uStack_1._4_4_;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint(&VStack_3,this,position,(MethodInfo *)0x0);
      fVar5 = pVVar4->y;
      fVar6 = pVVar4->z;
      __return_storage_ptr__->x = pVVar4->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar7)();
  return pVVar4;
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* CubeOutOfBoundState MoveEdge(MVCubeModelBase, CubePickingInfo, Vector3, Single ByRef, Single ByRef, Single, Boolean ByRef, Boolean, Boolean, EditCubeChange ByRef) */

CubeOutOfBoundState__Enum Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_MoveEdge(MVCubeModelBase *cmb,CubePickingInfo *info,Vector3 mousePositionDelta,float *delta,float *deltaAccum,float mouseSensitivity,bool *edgeMoved,bool edgeIndex0,bool edgeIndex1,EditCubeChange__Enum *editCubeChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e1f);
    cRam_? = '\x01';
  }
  CStack_1 = CubeOutOfBoundState__Enum_WithinBounds;
  uStack_2 = 0;
  fStack_3 = 0.0;
  pCVar4 = info;
  unique0x100030d0 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
  if ((info == (CubePickingInfo *)0x0) || (unaff_EDI = cmb, unique0x100030d8 = (double)CONCAT44(fStack_5,auStack_6._4_4_), cmb == (MVCubeModelBase *)0x0)) goto code_?;
  a_04 = MVCubeModelBase::MVCubeModelBase_GetCube(cmb,(info->fields).iLocalPos,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality((CubeBase *)a_04,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    return CubeOutOfBoundState__Enum_WithinBounds;
  }
  CStack_1 = CubeOutOfBoundState__Enum_NoChange;
  this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam((DayNightCycle *)cmb,(MethodInfo *)0x0);
  fStack_8 = (float)(info->fields).pickedFace;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  if (cRam_? == '\0') {
    func_?(0x5e20);
    cRam_? = '\x01';
  }
  switch(fStack_8) {
  case 0.0:
  case 1.4013e-45:
    if (this_00 == (CelestialParam *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform((GameObject *)this_00,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale(&VStack_11,pTVar9,(MethodInfo *)0x0);
    uVar12 = pVVar10->x;
    uVar13 = pVVar10->y;
    fStack_5 = pVVar10->z;
    fVar14 = (float)uVar13;
    auStack_6._0_4_ = uVar12;
    auStack_6._4_4_ = uVar13;
    break;
  case 2.8026e-45:
  case 4.2039e-45:
    unique0x10003120 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
    if (this_00 == (CelestialParam *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform((GameObject *)this_00,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale(&VStack_11,pTVar9,(MethodInfo *)0x0);
    uVar15 = pVVar10->x;
    uVar16 = pVVar10->y;
    fVar14 = pVVar10->z;
    auStack_6._0_4_ = uVar15;
    auStack_6._4_4_ = uVar16;
    fStack_5 = fVar14;
    break;
  case 5.60519e-45:
  case 7.00649e-45:
    unique0x10003110 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
    if (this_00 == (CelestialParam *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform((GameObject *)this_00,(MethodInfo *)0x0);
    unique0x10003118 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale(&VStack_11,pTVar9,(MethodInfo *)0x0);
    fVar14 = pVVar10->x;
    uVar17 = pVVar10->y;
    fStack_5 = pVVar10->z;
    auStack_6._0_4_ = fVar14;
    auStack_6._4_4_ = uVar17;
    break;
  default:
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Break((MethodInfo *)0x0);
    fVar14 = 0.0;
  }
  puVar18 = (undefined8 *)(*(code *)(cmb->klass->vtable).get_Scale.method)(auStack_6,cmb);
  VStack_11.z = *(float *)(puVar18 + 1);
  VStack_11.x = (float)*puVar18;
  VStack_11.y = (float)((ulonglong)*puVar18 >> 0x20);
  puVar18 = (undefined8 *)(*(code *)(cmb->klass->vtable).get_Scale.method)(&fStack_19,(short)cmb,(cmb->klass->vtable).set_Scale.methodPtr);
  fStack_5 = *(float *)(puVar18 + 1);
  auStack_6._0_4_ = (undefined4)*puVar18;
  auStack_6._4_4_ = (undefined4)((ulonglong)*puVar18 >> 0x20);
  puVar18 = (undefined8 *)(*(code *)(cmb->klass->vtable).get_Scale.method)(&fStack_20,cmb,(cmb->klass->vtable).set_Scale.methodPtr);
  fStack_21 = *(float *)(puVar18 + 1);
  fStack_19 = (float)*puVar18;
  fStack_22 = (float)((ulonglong)*puVar18 >> 0x20);
  fVar14 = (fVar14 * 0.25) / (((float)auStack_6._4_4_ + VStack_11.x + fStack_21) / 3.0);
  pMVar23 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)cmb,(MethodInfo *)0x0);
  unique0x100030e0 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
  if (pMVar23 != (MVPointLightObject *)0x0) {
    pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix((Matrix4x4 *)&stack0xfffffef8,(Transform *)pMVar23,(MethodInfo *)0x0);
    fStack_25 = pMVar24->m00;
    VStack_11.x = pMVar24->m10;
    VStack_11.y = pMVar24->m20;
    VStack_11.z = pMVar24->m30;
    fStack_26 = pMVar24->m01;
    fStack_20 = pMVar24->m11;
    uStack_27._0_4_ = pMVar24->m21;
    uStack_27._4_4_ = pMVar24->m31;
    fVar28 = pMVar24->m02;
    fVar29 = pMVar24->m12;
    fVar30 = pMVar24->m22;
    fVar31 = pMVar24->m32;
    CStack_32.r = pMVar24->m03;
    CStack_32.g = pMVar24->m13;
    CStack_32.b = pMVar24->m23;
    CStack_32.a = pMVar24->m33;
    fStack_8 = (float)(info->fields).pickedFace;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    pVVar10 = Cube::Cube_GetFaceAxis((Vector3 *)auStack_6,(Face__Enum)fStack_8,(MethodInfo *)0x0);
    uVar33._0_4_ = pVVar10->x;
    uVar33._4_4_ = pVVar10->y;
    fStack_8 = pVVar10->z;
    fStack_22 = (float)(undefined4)uVar33;
    fStack_21 = (float)uVar33._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector4);
      uVar33 = CONCAT44(fStack_21,fStack_22);
    }
    v.z = fStack_8;
    v.x = (float)(int)uVar33;
    v.y = (float)(int)((ulonglong)uVar33 >> 0x20);
    pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit((Vector4 *)auStack_35,v,(MethodInfo *)0x0);
    auStack_35._0_4_ = pVVar34->x;
    auStack_35._4_4_ = pVVar34->y;
    fStack_36 = pVVar34->z;
    fStack_37 = pVVar34->w;
    if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Matrix4x4);
    }
    lhs.m10 = VStack_11.x;
    lhs.m00 = fStack_25;
    lhs.m20 = VStack_11.y;
    lhs.m30 = VStack_11.z;
    lhs.m01 = fStack_26;
    lhs.m11 = fStack_20;
    lhs.m21 = (float)(undefined4)uStack_27;
    lhs.m31 = uStack_27._4_4_;
    lhs.m02 = fVar28;
    lhs.m12 = fVar29;
    lhs.m22 = fVar30;
    lhs.m32 = fVar31;
    lhs.m03 = CStack_32.r;
    lhs.m13 = CStack_32.g;
    lhs.m23 = CStack_32.b;
    lhs.m33 = CStack_32.a;
    vector.y = (float)auStack_35._4_4_;
    vector.x = (float)auStack_35._0_4_;
    vector.z = fStack_36;
    vector.w = fStack_37;
    pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1((Vector4 *)&CStack_32,lhs,vector,(MethodInfo *)0x0);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1((Vector3 *)auStack_6,*pVVar34,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar10->x;
    uStack_2._4_4_ = pVVar10->y;
    fStack_3 = pVVar10->z;
    uStack_27._0_4_ = (info->fields).point.x;
    uStack_27._4_4_ = (info->fields).point.y;
    fVar28 = (info->fields).point.z;
    uVar38._0_4_ = pVVar10->x;
    uVar38._4_4_ = pVVar10->y;
    fStack_39 = pVVar10->z;
    fStack_8 = *deltaAccum;
    fStack_22 = (float)(undefined4)uVar38;
    fStack_21 = (float)uVar38._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
      uVar38 = CONCAT44(fStack_21,fStack_22);
    }
    a.z = fStack_39;
    a.x = (float)(int)uVar38;
    a.y = (float)(int)((ulonglong)uVar38 >> 0x20);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply((Vector3 *)auStack_6,a,fStack_8,(MethodInfo *)0x0);
    a_00.z = fVar28;
    a_00.x = (float)(undefined4)uStack_27;
    a_00.y = uStack_27._4_4_;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition(&VStack_11,a_00,*pVVar10,(MethodInfo *)0x0);
    uVar40 = pVVar10->x;
    uVar41 = pVVar10->y;
    fVar28 = pVVar10->z;
    uStack_27 = CONCAT44(fVar28,(undefined4)uStack_27);
    b.z = fStack_3;
    b.x = (float)(undefined4)uStack_2;
    b.y = (float)uStack_2._4_4_;
    fStack_22 = (float)uVar40;
    fStack_21 = (float)uVar41;
    auStack_6._4_4_ = uVar40;
    fStack_5 = (float)uVar41;
    fStack_8 = fVar28;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition((Vector3 *)(auStack_35 + 4),*pVVar10,b,(MethodInfo *)0x0);
    uVar42 = pVVar10->x;
    uVar43 = pVVar10->y;
    fStack_39 = pVVar10->z;
    VStack_11.y = (float)uVar42;
    VStack_11.z = (float)uVar43;
    pCVar44 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_magenta(&CStack_32,(MethodInfo *)0x0);
    CStack_32.r = pCVar44->r;
    CStack_32.g = pCVar44->g;
    CStack_32.b = pCVar44->b;
    CStack_32.a = pCVar44->a;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    end.y = VStack_11.z;
    end.x = VStack_11.y;
    start.y = fStack_5;
    start.x = (float)auStack_6._4_4_;
    start.z = uStack_27._4_4_;
    end.z = fStack_39;
    color.g = CStack_32.g;
    color.r = CStack_32.r;
    color.b = CStack_32.b;
    color.a = CStack_32.a;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1(start,end,color,(MethodInfo *)0x0);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up((Vector3 *)(auStack_35 + 4),(MethodInfo *)0x0);
    a_01.y = fStack_21;
    a_01.x = fStack_22;
    a_01.z = fVar28;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition((Vector3 *)(auStack_35 + 4),a_01,*pVVar10,(MethodInfo *)0x0);
    uVar45 = pVVar10->x;
    uVar46 = pVVar10->y;
    fVar28 = pVVar10->z;
    auStack_6._4_4_ = uVar45;
    fStack_5 = (float)uVar46;
    pCVar44 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_magenta(&CStack_32,(MethodInfo *)0x0);
    end_00.y = fStack_5;
    end_00.x = (float)auStack_6._4_4_;
    start_00.y = fStack_21;
    start_00.x = fStack_22;
    start_00.z = fStack_8;
    end_00.z = fVar28;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1(start_00,end_00,*pCVar44,(MethodInfo *)0x0);
    pCVar47 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    a_02.y = fStack_21;
    a_02.x = fStack_22;
    a_02.z = fStack_8;
    b_00.z = fStack_3;
    b_00.x = (float)(undefined4)uStack_2;
    b_00.y = (float)uStack_2._4_4_;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition((Vector3 *)(auStack_35 + 4),a_02,b_00,(MethodInfo *)0x0);
    pCVar4 = (CubePickingInfo *)0x0;
    unique0x100030e8 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
    if (pCVar47 != (Camera *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1((Vector3 *)(auStack_35 + 4),pCVar47,*pVVar10,(MethodInfo *)0x0);
      uVar48 = pVVar10->x;
      uVar49 = pVVar10->y;
      pCVar4 = (CubePickingInfo *)pVVar10->z;
      auStack_6._4_4_ = uVar48;
      fStack_5 = (float)uVar49;
      pCVar47 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      unique0x100030f0 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
      if (pCVar47 != (Camera *)0x0) {
        position.y = fStack_21;
        position.x = fStack_22;
        position.z._0_2_ = SUB42(fStack_8,0);
        position.z._2_2_ = (short)((uint)fStack_8 >> 0x10);
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1((Vector3 *)(auStack_35 + 4),pCVar47,position,(MethodInfo *)0x0);
        a_03.y = fStack_5;
        a_03.x = (float)auStack_6._4_4_;
        a_03.z = (float)pCVar4;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction((Vector3 *)(auStack_35 + 4),a_03,*pVVar10,(MethodInfo *)0x0);
        fVar50 = (float10)func_?();
        uStack_27 = CONCAT44((float)fVar50,(undefined4)uStack_27);
        if ((float)fVar50 <= 0.0) {
          fStack_8 = *delta;
        }
        else {
          puVar18 = (undefined8 *)func_?();
          fVar28 = *(float *)(puVar18 + 1);
          auStack_6._4_4_ = (undefined4)*puVar18;
          fStack_5 = (float)((ulonglong)*puVar18 >> 0x20);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          lhs_03.y = fStack_5;
          lhs_03.x = (float)auStack_6._4_4_;
          lhs_03.z = fVar28;
          fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(lhs_03,mousePositionDelta,(MethodInfo *)0x0);
          uStack_27 = CONCAT44(fVar28,(undefined4)uStack_27);
          fVar50 = (float10)func_?();
          fStack_39 = (float)fVar50;
          fStack_8 = (uStack_27._4_4_ / fStack_39) * 1.3 + *delta;
          *delta = fStack_8;
        }
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        if (ABS(fStack_8) < fVar14) {
          *edgeMoved = 0;
          return CStack_1;
        }
        fVar28 = *delta;
        register0x00001200 = (double)fVar14;
        fVar50 = (float10)func_?();
        unique0x0000aa00 = (double)fVar50;
        *delta = fVar28 - (float)fVar50;
        *deltaAccum = *deltaAccum + (fVar28 - (float)fVar50);
        if ((info->fields).pickedEdge == 0) {
          fVar14 = *delta;
          pMVar23 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)cmb,(MethodInfo *)0x0);
          pCVar4 = (CubePickingInfo *)delta;
          if (pMVar23 != (MVPointLightObject *)0x0) {
            pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_worldToLocalMatrix((Matrix4x4 *)&stack0xfffffef8,(Transform *)pMVar23,(MethodInfo *)0x0);
            fVar29 = pMVar24->m00;
            fVar30 = pMVar24->m10;
            fVar31 = pMVar24->m20;
            fVar51 = pMVar24->m30;
            fStack_25 = pMVar24->m01;
            VStack_11.x = pMVar24->m11;
            VStack_11.y = pMVar24->m21;
            VStack_11.z = pMVar24->m31;
            fStack_52 = pMVar24->m02;
            fStack_19 = pMVar24->m12;
            fStack_22 = pMVar24->m22;
            fStack_21 = pMVar24->m32;
            fStack_26 = pMVar24->m03;
            fStack_20 = pMVar24->m13;
            uStack_27._0_4_ = pMVar24->m23;
            uStack_27._4_4_ = pMVar24->m33;
            puVar18 = (undefined8 *)func_?(auStack_35 + 4,(short)&uStack_2,0);
            uVar33 = *puVar18;
            fVar28 = *(float *)(puVar18 + 1);
            auStack_6._4_4_ = (undefined4)uVar33;
            fStack_5 = (float)((ulonglong)uVar33 >> 0x20);
            if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
              func_?();
              uVar33 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            v_00.z = fVar28;
            v_00.x = (float)(int)uVar33;
            v_00.y = (float)(int)((ulonglong)uVar33 >> 0x20);
            pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit((Vector4 *)&CStack_32,v_00,(MethodInfo *)0x0);
            CStack_32.r = pVVar34->x;
            CStack_32.g = pVVar34->y;
            CStack_32.b = pVVar34->z;
            CStack_32.a = pVVar34->w;
            if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
              func_?();
            }
            lhs_00.m10 = fVar30;
            lhs_00.m00 = fVar29;
            lhs_00.m20 = fVar31;
            lhs_00.m30 = fVar51;
            lhs_00.m01 = fStack_25;
            lhs_00.m11 = VStack_11.x;
            lhs_00.m21 = VStack_11.y;
            lhs_00.m31 = VStack_11.z;
            lhs_00.m02 = fStack_52;
            lhs_00.m12 = fStack_19;
            lhs_00.m22 = fStack_22;
            lhs_00.m32._0_2_ = SUB42(fStack_21,0);
            lhs_00.m32._2_2_ = (short)((uint)fStack_21 >> 0x10);
            lhs_00.m03 = fStack_26;
            lhs_00.m13 = fStack_20;
            lhs_00.m23 = (float)(undefined4)uStack_27;
            lhs_00.m33 = uStack_27._4_4_;
            vector_00.y = CStack_32.g;
            vector_00.x = CStack_32.r;
            vector_00.z = CStack_32.b;
            vector_00.w = CStack_32.a;
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1((Vector4 *)&CStack_32,lhs_00,vector_00,(MethodInfo *)0x0);
            pVVar34 = (Vector4 *)func_?();
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1((Vector3 *)(auStack_35 + 4),*pVVar34,(MethodInfo *)0x0);
            uVar53._0_4_ = pVVar10->x;
            uVar53._4_4_ = pVVar10->y;
            fVar28 = pVVar10->z;
            auStack_6._4_4_ = (undefined4)uVar53;
            fStack_5 = (float)uVar53._4_4_;
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__Cube->_1).cctor_started == 0)) {
              func_?();
              uVar53 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            axis_00.z = fVar28;
            axis_00.x = (float)(int)uVar53;
            axis_00.y = (float)(int)((ulonglong)uVar53 >> 0x20);
            Cube::Cube_MoveFace(info,fVar14,axis_00,&CStack_1,(MethodInfo *)0x0);
            EVar54 = EditCubeChange__Enum_FaceMoved;
            goto code_?;
          }
        }
        else if ((edgeIndex0 == 0) && (edgeIndex1 == 0)) {
          fVar14 = *delta;
          pMVar23 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)cmb,(MethodInfo *)0x0);
          pCVar4 = (CubePickingInfo *)delta;
          if (pMVar23 != (MVPointLightObject *)0x0) {
            pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_worldToLocalMatrix((Matrix4x4 *)&stack0xfffffef8,(Transform *)pMVar23,(MethodInfo *)0x0);
            fVar29 = pMVar24->m00;
            fVar30 = pMVar24->m10;
            fVar31 = pMVar24->m20;
            fVar51 = pMVar24->m30;
            fStack_25 = pMVar24->m01;
            VStack_11.x = pMVar24->m11;
            VStack_11.y = pMVar24->m21;
            VStack_11.z = pMVar24->m31;
            fStack_52 = pMVar24->m02;
            fStack_19 = pMVar24->m12;
            fStack_22 = pMVar24->m22;
            fStack_21 = pMVar24->m32;
            fStack_26 = pMVar24->m03;
            fStack_20 = pMVar24->m13;
            uStack_27._0_4_ = pMVar24->m23;
            uStack_27._4_4_ = pMVar24->m33;
            puVar18 = (undefined8 *)func_?(auStack_35 + 4,(short)&uStack_2,0);
            uVar33 = *puVar18;
            fVar28 = *(float *)(puVar18 + 1);
            auStack_6._4_4_ = (undefined4)uVar33;
            fStack_5 = (float)((ulonglong)uVar33 >> 0x20);
            if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
              func_?();
              uVar33 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            v_01.z = fVar28;
            v_01.x = (float)(int)uVar33;
            v_01.y = (float)(int)((ulonglong)uVar33 >> 0x20);
            pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit((Vector4 *)&CStack_32,v_01,(MethodInfo *)0x0);
            CStack_32.r = pVVar34->x;
            CStack_32.g = pVVar34->y;
            CStack_32.b = pVVar34->z;
            CStack_32.a = pVVar34->w;
            if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
              func_?();
            }
            lhs_01.m10 = fVar30;
            lhs_01.m00 = fVar29;
            lhs_01.m20 = fVar31;
            lhs_01.m30 = fVar51;
            lhs_01.m01 = fStack_25;
            lhs_01.m11 = VStack_11.x;
            lhs_01.m21 = VStack_11.y;
            lhs_01.m31 = VStack_11.z;
            lhs_01.m02 = fStack_52;
            lhs_01.m12 = fStack_19;
            lhs_01.m22 = fStack_22;
            lhs_01.m32._0_2_ = SUB42(fStack_21,0);
            lhs_01.m32._2_2_ = (short)((uint)fStack_21 >> 0x10);
            lhs_01.m03 = fStack_26;
            lhs_01.m13 = fStack_20;
            lhs_01.m23 = (float)(undefined4)uStack_27;
            lhs_01.m33 = uStack_27._4_4_;
            vector_01.y = CStack_32.g;
            vector_01.x = CStack_32.r;
            vector_01.z = CStack_32.b;
            vector_01.w = CStack_32.a;
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1((Vector4 *)&CStack_32,lhs_01,vector_01,(MethodInfo *)0x0);
            pVVar34 = (Vector4 *)func_?();
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1((Vector3 *)(auStack_35 + 4),*pVVar34,(MethodInfo *)0x0);
            uVar55._0_4_ = pVVar10->x;
            uVar55._4_4_ = pVVar10->y;
            fVar28 = pVVar10->z;
            auStack_6._4_4_ = (undefined4)uVar55;
            fStack_5 = (float)uVar55._4_4_;
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__Cube->_1).cctor_started == 0)) {
              func_?();
              uVar55 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            axis_01.z = fVar28;
            axis_01.x = (float)(int)uVar55;
            axis_01.y = (float)(int)((ulonglong)uVar55 >> 0x20);
            Cube::Cube_MoveEdge(info,fVar14,axis_01,&CStack_1,(MethodInfo *)0x0);
            EVar54 = EditCubeChange__Enum_EdgeMoved;
code_?:
            *editCubeChange = EVar54;
            *delta = 0.0;
            *edgeMoved = 1;
            return CStack_1;
          }
        }
        else {
          fVar14 = *delta;
          pMVar23 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)cmb,(MethodInfo *)0x0);
          pCVar4 = (CubePickingInfo *)delta;
          if (pMVar23 != (MVPointLightObject *)0x0) {
            pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_worldToLocalMatrix((Matrix4x4 *)&stack0xfffffef8,(Transform *)pMVar23,(MethodInfo *)0x0);
            fVar29 = pMVar24->m00;
            fVar30 = pMVar24->m10;
            fVar31 = pMVar24->m20;
            fVar51 = pMVar24->m30;
            fStack_25 = pMVar24->m01;
            VStack_11.x = pMVar24->m11;
            VStack_11.y = pMVar24->m21;
            VStack_11.z = pMVar24->m31;
            fStack_52 = pMVar24->m02;
            fStack_19 = pMVar24->m12;
            fStack_22 = pMVar24->m22;
            fStack_21 = pMVar24->m32;
            fStack_26 = pMVar24->m03;
            fStack_20 = pMVar24->m13;
            uStack_27._0_4_ = pMVar24->m23;
            uStack_27._4_4_ = pMVar24->m33;
            puVar18 = (undefined8 *)func_?(auStack_35 + 4,(short)&uStack_2,0);
            uVar33 = *puVar18;
            fVar28 = *(float *)(puVar18 + 1);
            auStack_6._4_4_ = (undefined4)uVar33;
            fStack_5 = (float)((ulonglong)uVar33 >> 0x20);
            if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
              func_?();
              uVar33 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            v_02.z = fVar28;
            v_02.x = (float)(int)uVar33;
            v_02.y = (float)(int)((ulonglong)uVar33 >> 0x20);
            pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit((Vector4 *)&CStack_32,v_02,(MethodInfo *)0x0);
            CStack_32.r = pVVar34->x;
            CStack_32.g = pVVar34->y;
            CStack_32.b = pVVar34->z;
            CStack_32.a = pVVar34->w;
            if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
              func_?();
            }
            lhs_02.m10 = fVar30;
            lhs_02.m00 = fVar29;
            lhs_02.m20 = fVar31;
            lhs_02.m30 = fVar51;
            lhs_02.m01 = fStack_25;
            lhs_02.m11 = VStack_11.x;
            lhs_02.m21 = VStack_11.y;
            lhs_02.m31 = VStack_11.z;
            lhs_02.m02 = fStack_52;
            lhs_02.m12 = fStack_19;
            lhs_02.m22 = fStack_22;
            lhs_02.m32._0_2_ = SUB42(fStack_21,0);
            lhs_02.m32._2_2_ = (short)((uint)fStack_21 >> 0x10);
            lhs_02.m03 = fStack_26;
            lhs_02.m13 = fStack_20;
            lhs_02.m23 = (float)(undefined4)uStack_27;
            lhs_02.m33 = uStack_27._4_4_;
            vector_02.y = CStack_32.g;
            vector_02.x = CStack_32.r;
            vector_02.z = CStack_32.b;
            vector_02.w = CStack_32.a;
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1((Vector4 *)&CStack_32,lhs_02,vector_02,(MethodInfo *)0x0);
            pVVar34 = (Vector4 *)func_?();
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1((Vector3 *)(auStack_35 + 4),*pVVar34,(MethodInfo *)0x0);
            uVar56._0_4_ = pVVar10->x;
            uVar56._4_4_ = pVVar10->y;
            fVar28 = pVVar10->z;
            auStack_6._4_4_ = (undefined4)uVar56;
            fStack_5 = (float)uVar56._4_4_;
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__Cube->_1).cctor_started == 0)) {
              func_?();
              uVar56 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            axis.z = fVar28;
            axis.x = (float)(int)uVar56;
            axis.y = (float)(int)((ulonglong)uVar56 >> 0x20);
            Cube::Cube_MoveVertex(info,fVar14,axis,edgeIndex0,edgeIndex1,&CStack_1,(MethodInfo *)0x0);
            EVar54 = EditCubeChange__Enum_VertexMoved;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  uVar33 = func_?(0);
  uVar33._4_4_ = (int)((ulonglong)uVar33 >> 0x20);
  pbVar57 = (byte *)CONCAT31((int3)((ulonglong)uVar33 >> 8),(char)uVar33 + -0x20);
  iVar58 = *(int *)(pbVar57 + uVar33._4_4_) * 0xADDR;
  bVar59 = *(byte *)(uVar33._4_4_ + 0x2c) < 0x69;
  bVar60 = *pbVar57;
  bVar61 = *pbVar57;
  *pbVar57 = bVar61 + unaff_BH + bVar59;
  *(char *)(iVar58 + -0x75) = *(char *)(iVar58 + -0x75) + (char)((ulonglong)uVar33 >> 0x20) + (CARRY1(bVar60,unaff_BH) || CARRY1(bVar61 + unaff_BH,bVar59));
  in((short)((ulonglong)uVar33 >> 0x20));
  this = *(GameObject **)(iVar58 + 8);
  *(undefined8 *)(iVar58 + -0x10) = 0;
  pMVar62 = (MVCubeModelBase *)0x0;
  *(undefined4 *)(iVar58 + -8) = 0;
  *(undefined4 *)(iVar58 + -4) = 0;
  while (this != (GameObject *)0x0) {
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) break;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale((Vector3 *)(iVar58 + -0x1c),pTVar9,(MethodInfo *)0x0);
    pCVar4 = (CubePickingInfo *)0x0;
    *(undefined8 *)(iVar58 + -0x10) = *(undefined8 *)pVVar10;
    *(float *)(iVar58 + -8) = pVVar10->z;
    unaff_EDI = pMVar62;
    CVar63 = func_?(iVar58 + -0x10);
    pMVar62 = (MVCubeModelBase *)((int)&pMVar62->klass + 1);
    *(float *)(iVar58 + -4) = (float)(extraout_ST0 + (float10)*(float *)(iVar58 + -4));
    if (2 < (int)pMVar62) {
      return CVar63;
    }
  }
  func_?(0,unaff_EDI,pCVar4);
  pcVar64 = (code *)swi(3);
  CVar63 = (*pcVar64)();
  return CVar63;
}


/* Single ScaleFactor(GameObject) */

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor(GameObject *gameObject,MethodInfo *method)

{
  uStack_1 = 0;
  iVar2 = 0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  while (gameObject != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(gameObject,(MethodInfo *)0x0);
    if (this == (Transform *)0x0) break;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale(&VStack_6,this,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar5->x;
    uStack_1._4_4_ = pVVar5->y;
    fStack_3 = pVVar5->z;
    fVar7 = (float10)func_?(&uStack_1,iVar2,0);
    iVar2 = iVar2 + 1;
    fStack_4 = (float)(fVar7 + (float10)fStack_4);
    if (2 < iVar2) {
      return fStack_4 / 3.0;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  fVar7 = (float10)(*pcVar8)();
  return (float)fVar7;
}


/* Single ScaleFactor(GameObject, Face) */

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor_1(GameObject *gameObject,Face__Enum face,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  switch(face) {
  case Face__Enum_Top:
  case Face__Enum_Bottom:
    if ((gameObject != (GameObject *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(gameObject,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      uVar5 = pVVar4->y;
      return (float)uVar5;
    }
    break;
  case Face__Enum_Front:
  case Face__Enum_Back:
    if ((gameObject != (GameObject *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(gameObject,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      return pVVar4->z;
    }
    break;
  case Face__Enum_Left:
  case Face__Enum_Right:
    if ((gameObject != (GameObject *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(gameObject,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      uVar6 = pVVar4->x;
      return (float)uVar6;
    }
    break;
  default:
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Break((MethodInfo *)0x0);
    return 0.0;
  }
  bVar7 = 0;
  method_00 = (MethodInfo *)&UNK_?;
  uVar8 = func_?();
  uVar9 = uVar8 / *(uint *)(unaff_ESI + 0x2c);
  bVar10 = (byte)(uVar8 % (ulonglong)*(uint *)(unaff_ESI + 0x2c) >> 8);
  bVar11 = (byte)((uint)unaff_EBX >> 8);
  bVar12 = bVar11 + bVar10;
  bVar13 = CARRY1(bVar11,bVar10) || CARRY1(bVar12,bVar7);
  if (bVar13 || (byte)(bVar12 + bVar7) == '\0') {
    if (cRam_? == '\0') {
      func_?(0x5e21);
      cRam_? = '\x01';
    }
    func_?();
    if ((undefined1)face == Face__Enum_Top) {
      if (gameObject == (GameObject *)0x0) goto code_?;
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,in_stack_15);
      goto code_?;
    }
    if ((gameObject == (GameObject *)0x0) || (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,in_stack_15), pGVar14 == (GameObject *)0x0)) goto code_?;
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar14,method_00);
    iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
    if (iVar16 == iVar17) {
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
      layerName = StringLiteral_CamRotateTarget;
      iVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
      goto joined_?;
    }
    layerName = (String *)gameObject;
    pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar14,pMVar1);
    uVar8 = ZEXT48(StringLiteral_Logic);
    pMVar1 = (MethodInfo *)&UNK_?;
    iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Logic,(MethodInfo *)0x0);
    if (iVar16 == iVar17) {
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
      layerName = StringLiteral_LogicSelected;
      goto code_?;
    }
    pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar14,method);
    face = (Face__Enum)StringLiteral_Player;
    FVar18 = face;
    face._0_1_ = SUB41(StringLiteral_Player,0);
    iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Player,(MethodInfo *)0x0);
    if (iVar16 == iVar17) {
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
      face = FVar18;
      layerName = StringLiteral_PlayerSelected;
      goto code_?;
    }
  }
  else {
    pcVar19 = (char *)((int)&unaff_EDI->klass + unaff_ESI * 2);
    *pcVar19 = *pcVar19 + bVar10 + bVar13;
    uVar20 = (undefined3)(uVar9 >> 8);
    bVar12 = (char)uVar9 - 0x10U ^ 0x77;
    bVar10 = bVar12 - 0x10;
    pGVar14 = (GameObject *)CONCAT31(uVar20,bVar10);
    gameObject = (GameObject *)unaff_EDI;
    if (bVar12 < 0x10 || bVar10 == 0) {
      pGVar14 = (GameObject *)CONCAT31(uVar20,bVar12 - 0x20);
      if (bVar10 < 0x10 || (byte)(bVar12 - 0x20) == '\0') {
        pcVar21 = (code *)swi(3);
        fVar22 = (float10)(*pcVar21)();
        return (float)fVar22;
      }
    }
    else {
      unaff_EDI->klass = (String__Class *)((int)unaff_EDI->klass << (extraout_CL & 0x1f) | (uint)unaff_EDI->klass >> 0x20 - (extraout_CL & 0x1f));
    }
code_?:
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar14,(MethodInfo *)0x0);
    iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (iVar16 == iVar17) {
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
      pMVar1 = (MethodInfo *)0x0;
      layerName = StringLiteral_Default;
    }
    else {
      layerName = (String *)gameObject;
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
      if (pGVar14 == (GameObject *)0x0) goto code_?;
      iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar14,(MethodInfo *)0x0);
      uVar8 = ZEXT48(StringLiteral_LogicSelected);
      pMVar1 = (MethodInfo *)&UNK_?;
      iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_LogicSelected,(MethodInfo *)0x0);
      if (iVar16 == iVar17) {
        pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
      }
      else {
        pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
        if (pGVar14 == (GameObject *)0x0) goto code_?;
        iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar14,(MethodInfo *)0x0);
        face = (Face__Enum)StringLiteral_PlayerSelected;
        FVar18 = face;
        face._0_1_ = SUB41(StringLiteral_PlayerSelected,0);
        iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_PlayerSelected,(MethodInfo *)0x0);
        if (iVar16 != iVar17) goto code_?;
        pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)gameObject,(MethodInfo *)0x0);
        face = FVar18;
      }
    }
code_?:
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(layerName,pMVar1);
joined_?:
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    uVar8 = CONCAT44(pGVar14,&UNK_?);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer(pGVar14,iVar16,(MethodInfo *)0x0);
  }
code_?:
  pIVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator((Transform *)gameObject,(MethodInfo *)0x0);
  while (pIVar23 != (IEnumerator *)0x0) {
    cVar24 = func_?();
    uVar25 = (undefined4)uVar8;
    if (cVar24 == '\0') {
      layerName->klass = (String__Class *)0x17c;
      iVar26 = func_?();
      fVar22 = extraout_ST0;
      if (iVar26 != 0) {
        fVar22 = (float10)func_?();
      }
      *unaff_FS_OFFSET = uVar25;
      return (float)fVar22;
    }
    pTVar3 = (Transform *)func_?();
    if (pTVar3 == (Transform *)0x0) {
      t = (Transform *)0x0;
    }
    else {
      bVar12 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
      if (((pTVar3->klass->_1).naturalAligment < bVar12) || ((pTVar3->klass->_1).typeHierarchy[bVar12 - 1] != (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      t = (Transform *)0x0;
      if (bVar13) {
        t = pTVar3;
      }
      if (t == (Transform *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?();
    }
    SharedCubeFunctions_SetLayerRecursively(t,(undefined1)face,(MethodInfo *)0x0);
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  fVar22 = (float10)(*pcVar21)();
  return (float)fVar22;
}


/* Void SetLayerRecursively(Transform, Boolean) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(Transform *t,bool select,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(0x5e21);
    cRam_? = '\x01';
  }
  func_?();
  pSVar1 = (String *)t;
  if (select == 0) {
    if ((t == (Transform *)0x0) || (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0)) goto code_?;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar2,(MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pSVar1 = StringLiteral_Default;
code_?:
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(pSVar1,method_00);
      goto joined_?;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar2,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&UNK_?;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_LogicSelected,(MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
      goto code_?;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar2,(MethodInfo *)0x0);
    _select = (undefined4 *)0x0;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_PlayerSelected,(MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    if ((t == (Transform *)0x0) || (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0)) goto code_?;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar2,(MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
    if (iVar3 != iVar4) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar2,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&UNK_?;
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Logic,(MethodInfo *)0x0);
      if (iVar3 == iVar4) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
      }
      else {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar2,(MethodInfo *)0x0);
        _select = (undefined4 *)0x0;
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Player,(MethodInfo *)0x0);
        if (iVar3 != iVar4) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
      }
      goto code_?;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject((Component_1 *)t,(MethodInfo *)0x0);
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
joined_?:
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer(pGVar2,iVar3,(MethodInfo *)0x0);
  }
code_?:
  puVar5 = (undefined4 *)&UNK_?;
  pIVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator(t,(MethodInfo *)0x0);
  while (pIVar6 != (IEnumerator *)0x0) {
    cVar7 = func_?();
    if (cVar7 == '\0') {
      *puVar5 = 0x17c;
      puVar8 = &UNK_?;
      iVar9 = func_?();
      if (iVar9 != 0) {
        puVar8 = (undefined *)0x0;
        func_?();
      }
      *unaff_FS_OFFSET = puVar8;
      return;
    }
    pTVar10 = (Transform *)func_?();
    if (pTVar10 == (Transform *)0x0) {
      t_00 = (Transform *)0x0;
    }
    else {
      bVar11 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
      if (((pTVar10->klass->_1).naturalAligment < bVar11) || ((pTVar10->klass->_1).typeHierarchy[bVar11 - 1] != (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      t_00 = (Transform *)0x0;
      if (bVar12) {
        t_00 = pTVar10;
      }
      if (t_00 == (Transform *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?();
    }
    puVar5 = _select;
    SharedCubeFunctions_SetLayerRecursively(t_00,(bool)_select,(MethodInfo *)0x0);
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Vector3 WorldPosToValidGridPos(GameObject, Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_WorldPosToValidGridPos(Vector3 *__return_storage_ptr__,GameObject *gameObject,Vector3 worldPos,int32_t cubeSegments,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e22);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  if (cubeSegments < 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError((Object *)StringLiteral_CubeSegments_is_at_least_1,(MethodInfo *)0x0);
  }
  dVar5 = mscorlib.dll::System::Math::Math_Round_4((double)(1.0 / (float)cubeSegments),2,(MethodInfo *)0x0);
  if (gameObject != (GameObject *)0x0) {
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(gameObject,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint(&VStack_8,pTVar6,worldPos,(MethodInfo *)0x0);
      fStack_4 = pVVar7->z;
      uStack_1 = CONCAT44(fStack_4,fStack_4);
      uStack_3 = CONCAT44(&uStack_3,&UNK_?);
      fStack_2 = fStack_4;
      func_?();
      vector.z = fStack_2;
      vector.x = (float)(undefined4)uStack_1;
      vector.y = (float)uStack_1._4_4_;
      pVVar7 = MathFunctions::MathFunctions_FloorVector((Vector3 *)&stack0xffffffcc,vector,(MethodInfo *)0x0);
      VStack_8.y = pVVar7->x;
      VStack_8.z = pVVar7->y;
      fVar9 = pVVar7->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply((Vector3 *)&stack0xffffffcc,*pVVar7,0.5,(MethodInfo *)0x0);
      a.z = fVar9;
      a.x = VStack_8.y;
      a.y = VStack_8.z;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction((Vector3 *)&stack0xffffffcc,a,*pVVar7,(MethodInfo *)0x0);
      iVar10 = 0;
      uStack_1._0_4_ = pVVar7->x;
      uStack_1._4_4_ = pVVar7->y;
      fStack_2 = pVVar7->z;
      do {
        fVar11 = (float10)func_?(&uStack_3,iVar10);
        fVar12 = (float10)func_?(&uStack_1,iVar10,0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt((float)((float10)(float)fVar11 - fVar12) / (float)dVar5,(MethodInfo *)0x0);
        func_?(&uStack_1,iVar10);
        func_?(&uStack_1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 3);
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(gameObject,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        position.z = fStack_2;
        position.x = (float)(undefined4)uStack_1;
        position.y = (float)uStack_1._4_4_;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint((Vector3 *)&stack0xffffffcc,pTVar6,position,(MethodInfo *)0x0);
        fVar13 = pVVar7->y;
        fVar9 = pVVar7->z;
        __return_storage_ptr__->x = pVVar7->x;
        __return_storage_ptr__->y = fVar13;
        __return_storage_ptr__->z = fVar9;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar14)();
  return pVVar7;
}


/* IntVector WorldToLocal(GameObject, Vector3, Boolean) */

IntVector Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_WorldToLocal(GameObject *gameObject,Vector3 point,bool floor,MethodInfo *method)

{
  if (point.x != 0.0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform((GameObject *)point.x,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      position.z = _floor;
      position.x = (float)(int)point._4_8_;
      position.y = (float)(int)((ulonglong)point._4_8_ >> 0x20);
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint((Vector3 *)&stack0xfffffff0,this,position,(MethodInfo *)0x0);
      if ((char)method == '\0') {
        MathFunctions::MathFunctions_RoundVector((Vector3 *)&stack0xffffffe4,*pVVar1,0,(MethodInfo *)0x0);
      }
      else {
        MathFunctions::MathFunctions_FloorVector((Vector3 *)&stack0xffffffe4,*pVVar1,(MethodInfo *)0x0);
      }
      gameObject->klass = (GameObject__Class *)0x0;
      *(undefined2 *)&gameObject->monitor = 0;
      func_?();
      IVar2.z = extraout_DX;
      IVar2._0_4_ = gameObject;
      return IVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  IVar2 = (IntVector)(*pcVar3)();
  return IVar2;
}


/* SharedCubeFunctions() */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e23);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  iStack_2 = 0;
  func_?(&uStack_1,0x18,0x18,0x18,0);
  pSVar3 = TypeInfo__SharedCubeFunctions->static_fields;
  (pSVar3->constraint).x = (undefined2)uStack_1;
  (pSVar3->constraint).y = uStack_1._2_2_;
  (pSVar3->constraint).z = iStack_2;
  pIVar4 = (IntVector__Array__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,0x18);
  pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
  if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
  uStack_6 = 0;
  iStack_7 = 0;
  func_?(&uStack_6,0xffffffff,1,0xffffffff,0);
  if (pIVar5->max_length == 0) {
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = 0;
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = 0;
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = 0;
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = 0;
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = 0;
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = 0;
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = 0;
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = func_?(uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?();
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar8 = func_?(uVar8,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar9 = 0;
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar10 = 0;
    uVar8 = func_?(0,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(uVar10,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(uVar10,uVar9);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
  }
  else {
    pIVar5->vector[0].x = (undefined2)uStack_6;
    pIVar5->vector[0].y = uStack_6._2_2_;
    pIVar5->vector[0].z = iStack_7;
    uStack_11 = 0;
    iStack_12 = 0;
    func_?(&uStack_11,0xffffffff,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_11;
    pIVar5->vector[1].y = uStack_11._2_2_;
    pIVar5->vector[1].z = iStack_12;
    uStack_13 = 0;
    iStack_14 = 0;
    func_?(&uStack_13,0,1,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_13;
    pIVar5->vector[2].y = uStack_13._2_2_;
    pIVar5->vector[2].z = iStack_14;
    uStack_15 = 0;
    iStack_16 = 0;
    func_?(&uStack_15,0,1,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_15;
    pIVar5->vector[3].y = uStack_15._2_2_;
    pIVar5->vector[3].z = iStack_16;
    if (pIVar4 == (IntVector__Array__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_18 = 0;
    iStack_19 = 0;
    func_?(&uStack_18,0,1,0xffffffff,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_18;
    pIVar5->vector[0].y = uStack_18._2_2_;
    pIVar5->vector[0].z = iStack_19;
    uStack_20 = 0;
    iStack_21 = 0;
    func_?(&uStack_20,0,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_20;
    pIVar5->vector[1].y = uStack_20._2_2_;
    pIVar5->vector[1].z = iStack_21;
    uStack_22 = 0;
    iStack_23 = 0;
    func_?(&uStack_22,1,1,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_22;
    pIVar5->vector[2].y = uStack_22._2_2_;
    pIVar5->vector[2].z = iStack_23;
    uStack_24 = 0;
    iStack_25 = 0;
    func_?(&uStack_24,1,1,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_24;
    pIVar5->vector[3].y = uStack_24._2_2_;
    pIVar5->vector[3].z = iStack_25;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_26 = 0;
    iStack_27 = 0;
    func_?(&uStack_26,0,1,0,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_26;
    pIVar5->vector[0].y = uStack_26._2_2_;
    pIVar5->vector[0].z = iStack_27;
    uStack_28 = 0;
    iStack_29 = 0;
    func_?(&uStack_28,0,1,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_28;
    pIVar5->vector[1].y = uStack_28._2_2_;
    pIVar5->vector[1].z = iStack_29;
    uStack_30 = 0;
    iStack_31 = 0;
    func_?(&uStack_30,1,1,1,0);
    uVar8 = 0;
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_30;
    pIVar5->vector[2].y = uStack_30._2_2_;
    pIVar5->vector[2].z = iStack_31;
    uStack_32 = 0;
    iStack_33 = 0;
    func_?(&uStack_32,1,1,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_32;
    pIVar5->vector[3].y = uStack_32._2_2_;
    pIVar5->vector[3].z = iStack_33;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_34 = 0;
    iStack_35 = 0;
    func_?(&uStack_34,0xffffffff,1,0,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_34;
    pIVar5->vector[0].y = uStack_34._2_2_;
    pIVar5->vector[0].z = iStack_35;
    uStack_36 = 0;
    iStack_37 = 0;
    func_?(&uStack_36,0xffffffff,1,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_36;
    pIVar5->vector[1].y = uStack_36._2_2_;
    pIVar5->vector[1].z = iStack_37;
    uStack_38 = 0;
    iStack_39 = 0;
    func_?(&uStack_38,0,1,1,0);
    uVar8 = 0;
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_38;
    pIVar5->vector[2].y = uStack_38._2_2_;
    pIVar5->vector[2].z = iStack_39;
    uStack_40 = 0;
    iStack_41 = 0;
    func_?(&uStack_40,0,1,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_40;
    pIVar5->vector[3].y = uStack_40._2_2_;
    pIVar5->vector[3].z = iStack_41;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_42 = 0;
    iStack_43 = 0;
    func_?(&uStack_42,0xffffffff,0xffffffff,0,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_42;
    pIVar5->vector[0].y = uStack_42._2_2_;
    pIVar5->vector[0].z = iStack_43;
    uStack_44 = 0;
    iStack_45 = 0;
    func_?(&uStack_44,0xffffffff,0xffffffff,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_44;
    pIVar5->vector[1].y = uStack_44._2_2_;
    pIVar5->vector[1].z = iStack_45;
    uStack_46 = 0;
    iStack_47 = 0;
    func_?(&uStack_46,0,0xffffffff,1,0);
    uVar8 = 0;
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_46;
    pIVar5->vector[2].y = uStack_46._2_2_;
    pIVar5->vector[2].z = iStack_47;
    uStack_48 = 0;
    iStack_49 = 0;
    func_?(&uStack_48,0,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_48;
    pIVar5->vector[3].y = uStack_48._2_2_;
    pIVar5->vector[3].z = iStack_49;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 5) goto code_?;
    pIVar4->vector[4] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_50 = 0;
    iStack_51 = 0;
    func_?(&uStack_50,0,0xffffffff,0,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_50;
    pIVar5->vector[0].y = uStack_50._2_2_;
    pIVar5->vector[0].z = iStack_51;
    uStack_52 = 0;
    iStack_53 = 0;
    func_?(&uStack_52,0,0xffffffff,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_52;
    pIVar5->vector[1].y = uStack_52._2_2_;
    pIVar5->vector[1].z = iStack_53;
    uStack_54 = 0;
    iStack_55 = 0;
    func_?(&uStack_54,1,0xffffffff,1,0);
    uVar8 = 0;
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_54;
    pIVar5->vector[2].y = uStack_54._2_2_;
    pIVar5->vector[2].z = iStack_55;
    uStack_56 = 0;
    iStack_57 = 0;
    func_?(&uStack_56,1,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_56;
    pIVar5->vector[3].y = uStack_56._2_2_;
    pIVar5->vector[3].z = iStack_57;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 6) goto code_?;
    pIVar4->vector[5] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_58 = 0;
    iStack_59 = 0;
    func_?(&uStack_58,0,0xffffffff,0xffffffff,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_58;
    pIVar5->vector[0].y = uStack_58._2_2_;
    pIVar5->vector[0].z = iStack_59;
    uStack_60 = 0;
    iStack_61 = 0;
    func_?(&uStack_60,0,0xffffffff,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_60;
    pIVar5->vector[1].y = uStack_60._2_2_;
    pIVar5->vector[1].z = iStack_61;
    uStack_62 = 0;
    iStack_63 = 0;
    func_?(&uStack_62,1,0xffffffff,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_62;
    pIVar5->vector[2].y = uStack_62._2_2_;
    pIVar5->vector[2].z = iStack_63;
    uStack_64 = 0;
    iStack_65 = 0;
    func_?(&uStack_64,1,0xffffffff,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_64;
    pIVar5->vector[3].y = uStack_64._2_2_;
    pIVar5->vector[3].z = iStack_65;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 7) goto code_?;
    pIVar4->vector[6] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_66 = 0;
    iStack_67 = 0;
    func_?(&uStack_66,0xffffffff,0xffffffff,0xffffffff,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_66;
    pIVar5->vector[0].y = uStack_66._2_2_;
    pIVar5->vector[0].z = iStack_67;
    uStack_68 = 0;
    iStack_69 = 0;
    func_?(&uStack_68,0xffffffff,0xffffffff,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_68;
    pIVar5->vector[1].y = uStack_68._2_2_;
    pIVar5->vector[1].z = iStack_69;
    uStack_70 = 0;
    iStack_71 = 0;
    func_?(&uStack_70,0,0xffffffff,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_70;
    pIVar5->vector[2].y = uStack_70._2_2_;
    pIVar5->vector[2].z = iStack_71;
    uStack_72 = 0;
    iStack_73 = 0;
    func_?(&uStack_72,0,0xffffffff,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_72;
    pIVar5->vector[3].y = uStack_72._2_2_;
    pIVar5->vector[3].z = iStack_73;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 8) goto code_?;
    pIVar4->vector[7] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_74 = 0;
    iStack_75 = 0;
    func_?(&uStack_74,0xffffffff,0xffffffff,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_74;
    pIVar5->vector[0].y = uStack_74._2_2_;
    pIVar5->vector[0].z = iStack_75;
    uStack_76 = 0;
    iStack_77 = 0;
    func_?(&uStack_76,0xffffffff,0,0xffffffff,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_76;
    pIVar5->vector[1].y = uStack_76._2_2_;
    pIVar5->vector[1].z = iStack_77;
    uStack_78 = 0;
    iStack_79 = 0;
    func_?(&uStack_78,0,0,0xffffffff,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_78;
    pIVar5->vector[2].y = uStack_78._2_2_;
    pIVar5->vector[2].z = iStack_79;
    uStack_80 = 0;
    iStack_81 = 0;
    func_?(&uStack_80,0,0xffffffff,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_80;
    pIVar5->vector[3].y = uStack_80._2_2_;
    pIVar5->vector[3].z = iStack_81;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 9) goto code_?;
    pIVar4->vector[8] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_82 = 0;
    iStack_83 = 0;
    func_?(&uStack_82,0,0xffffffff,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_82;
    pIVar5->vector[0].y = uStack_82._2_2_;
    pIVar5->vector[0].z = iStack_83;
    uStack_84 = 0;
    iStack_85 = 0;
    func_?(&uStack_84,0,0,0xffffffff,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_84;
    pIVar5->vector[1].y = uStack_84._2_2_;
    pIVar5->vector[1].z = iStack_85;
    uStack_86 = 0;
    iStack_87 = 0;
    func_?(&uStack_86,1,0,0xffffffff,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_86;
    pIVar5->vector[2].y = uStack_86._2_2_;
    pIVar5->vector[2].z = iStack_87;
    uStack_88 = 0;
    iStack_89 = 0;
    func_?(&uStack_88,1,0xffffffff,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_88;
    pIVar5->vector[3].y = uStack_88._2_2_;
    pIVar5->vector[3].z = iStack_89;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 10) goto code_?;
    pIVar4->vector[9] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_90 = 0;
    iStack_91 = 0;
    func_?(&uStack_90,0,0,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_90;
    pIVar5->vector[0].y = uStack_90._2_2_;
    pIVar5->vector[0].z = iStack_91;
    uStack_92 = 0;
    iStack_93 = 0;
    func_?(&uStack_92,0,1,0xffffffff,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_92;
    pIVar5->vector[1].y = uStack_92._2_2_;
    pIVar5->vector[1].z = iStack_93;
    uStack_94 = 0;
    iStack_95 = 0;
    func_?(&uStack_94,1,1,0xffffffff,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_94;
    pIVar5->vector[2].y = uStack_94._2_2_;
    pIVar5->vector[2].z = iStack_95;
    uStack_96 = 0;
    iStack_97 = 0;
    func_?(&uStack_96,1,0,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_96;
    pIVar5->vector[3].y = uStack_96._2_2_;
    pIVar5->vector[3].z = iStack_97;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xb) goto code_?;
    pIVar4->vector[10] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_98 = 0;
    iStack_99 = 0;
    func_?(&uStack_98,0xffffffff,0,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_98;
    pIVar5->vector[0].y = uStack_98._2_2_;
    pIVar5->vector[0].z = iStack_99;
    uStack_100 = 0;
    iStack_101 = 0;
    func_?(&uStack_100,0xffffffff,1,0xffffffff,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_100;
    pIVar5->vector[1].y = uStack_100._2_2_;
    pIVar5->vector[1].z = iStack_101;
    uStack_102 = 0;
    iStack_103 = 0;
    func_?(&uStack_102,0,1,0xffffffff,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_102;
    pIVar5->vector[2].y = uStack_102._2_2_;
    pIVar5->vector[2].z = iStack_103;
    uStack_104 = 0;
    iStack_105 = 0;
    func_?(&uStack_104,0,0,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_104;
    pIVar5->vector[3].y = uStack_104._2_2_;
    pIVar5->vector[3].z = iStack_105;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xc) goto code_?;
    pIVar4->vector[0xb] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_106 = 0;
    iStack_107 = 0;
    func_?(&uStack_106,0,0xffffffff,1,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_106;
    pIVar5->vector[0].y = uStack_106._2_2_;
    pIVar5->vector[0].z = iStack_107;
    uStack_108 = 0;
    iStack_109 = 0;
    func_?(&uStack_108,0,0,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_108;
    pIVar5->vector[1].y = uStack_108._2_2_;
    pIVar5->vector[1].z = iStack_109;
    uStack_110 = 0;
    iStack_111 = 0;
    func_?(&uStack_110,1,0,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_110;
    pIVar5->vector[2].y = uStack_110._2_2_;
    pIVar5->vector[2].z = iStack_111;
    uStack_112 = 0;
    iStack_113 = 0;
    func_?(&uStack_112,1,0xffffffff,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_112;
    pIVar5->vector[3].y = uStack_112._2_2_;
    pIVar5->vector[3].z = iStack_113;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xd) goto code_?;
    pIVar4->vector[0xc] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_114 = 0;
    iStack_115 = 0;
    func_?(&uStack_114,0xffffffff,0xffffffff,1,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_114;
    pIVar5->vector[0].y = uStack_114._2_2_;
    pIVar5->vector[0].z = iStack_115;
    uStack_116 = 0;
    iStack_117 = 0;
    func_?(&uStack_116,0xffffffff,0,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_116;
    pIVar5->vector[1].y = uStack_116._2_2_;
    pIVar5->vector[1].z = iStack_117;
    uStack_118 = 0;
    iStack_119 = 0;
    func_?(&uStack_118,0,0,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_118;
    pIVar5->vector[2].y = uStack_118._2_2_;
    pIVar5->vector[2].z = iStack_119;
    uStack_120 = 0;
    iStack_121 = 0;
    func_?(&uStack_120,0,0xffffffff,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_120;
    pIVar5->vector[3].y = uStack_120._2_2_;
    pIVar5->vector[3].z = iStack_121;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xe) goto code_?;
    pIVar4->vector[0xd] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_122 = 0;
    iStack_123 = 0;
    func_?(&uStack_122,0xffffffff,0,1,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_122;
    pIVar5->vector[0].y = uStack_122._2_2_;
    pIVar5->vector[0].z = iStack_123;
    uStack_124 = 0;
    iStack_125 = 0;
    func_?(&uStack_124,0xffffffff,1,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_124;
    pIVar5->vector[1].y = uStack_124._2_2_;
    pIVar5->vector[1].z = iStack_125;
    uStack_126 = 0;
    iStack_127 = 0;
    func_?(&uStack_126,0,1,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_126;
    pIVar5->vector[2].y = uStack_126._2_2_;
    pIVar5->vector[2].z = iStack_127;
    uStack_128 = 0;
    iStack_129 = 0;
    func_?(&uStack_128,0,0,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_128;
    pIVar5->vector[3].y = uStack_128._2_2_;
    pIVar5->vector[3].z = iStack_129;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xf) goto code_?;
    pIVar4->vector[0xe] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_130 = 0;
    iStack_131 = 0;
    func_?(&uStack_130,0,0,1,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_130;
    pIVar5->vector[0].y = uStack_130._2_2_;
    pIVar5->vector[0].z = iStack_131;
    uStack_132 = 0;
    iStack_133 = 0;
    func_?(&uStack_132,0,1,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_132;
    pIVar5->vector[1].y = uStack_132._2_2_;
    pIVar5->vector[1].z = iStack_133;
    uStack_134 = 0;
    iStack_135 = 0;
    func_?(&uStack_134,1,1,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_134;
    pIVar5->vector[2].y = uStack_134._2_2_;
    pIVar5->vector[2].z = iStack_135;
    uStack_136 = 0;
    iStack_137 = 0;
    func_?(&uStack_136,1,0,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_136;
    pIVar5->vector[3].y = uStack_136._2_2_;
    pIVar5->vector[3].z = iStack_137;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x10) goto code_?;
    pIVar4->vector[0xf] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_138 = 0;
    iStack_139 = 0;
    func_?(&uStack_138,0xffffffff,0xffffffff,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_138;
    pIVar5->vector[0].y = uStack_138._2_2_;
    pIVar5->vector[0].z = iStack_139;
    uStack_140 = 0;
    iStack_141 = 0;
    func_?(&uStack_140,0xffffffff,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_140;
    pIVar5->vector[1].y = uStack_140._2_2_;
    pIVar5->vector[1].z = iStack_141;
    uStack_142 = 0;
    iStack_143 = 0;
    func_?(&uStack_142,0xffffffff,0,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_142;
    pIVar5->vector[2].y = uStack_142._2_2_;
    pIVar5->vector[2].z = iStack_143;
    uStack_144 = 0;
    iStack_145 = 0;
    func_?(&uStack_144,0xffffffff,0xffffffff,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_144;
    pIVar5->vector[3].y = uStack_144._2_2_;
    pIVar5->vector[3].z = iStack_145;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x11) goto code_?;
    pIVar4->vector[0x10] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_146 = 0;
    iStack_147 = 0;
    func_?(&uStack_146,0xffffffff,0xffffffff,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_146;
    pIVar5->vector[0].y = uStack_146._2_2_;
    pIVar5->vector[0].z = iStack_147;
    uStack_148 = 0;
    iStack_149 = 0;
    func_?(&uStack_148,0xffffffff,0,0xffffffff,0);
    uVar9 = 0;
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_148;
    pIVar5->vector[1].y = uStack_148._2_2_;
    pIVar5->vector[1].z = iStack_149;
    uStack_150 = 0;
    iStack_151 = 0;
    func_?(&uStack_150,0xffffffff,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_150;
    pIVar5->vector[2].y = uStack_150._2_2_;
    pIVar5->vector[2].z = iStack_151;
    uStack_152 = 0;
    iStack_153 = 0;
    func_?(&uStack_152,0xffffffff,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_152;
    pIVar5->vector[3].y = uStack_152._2_2_;
    pIVar5->vector[3].z = iStack_153;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x12) goto code_?;
    pIVar4->vector[0x11] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_154 = 0;
    iStack_155 = 0;
    func_?(&uStack_154,0xffffffff,0,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_154;
    pIVar5->vector[0].y = uStack_154._2_2_;
    pIVar5->vector[0].z = iStack_155;
    uStack_156 = 0;
    iStack_157 = 0;
    func_?(&uStack_156,0xffffffff,1,0xffffffff,0);
    uVar9 = 0;
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_156;
    pIVar5->vector[1].y = uStack_156._2_2_;
    pIVar5->vector[1].z = iStack_157;
    uStack_158 = 0;
    iStack_159 = 0;
    func_?(&uStack_158,0xffffffff,1,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_158;
    pIVar5->vector[2].y = uStack_158._2_2_;
    pIVar5->vector[2].z = iStack_159;
    uStack_160 = 0;
    iStack_161 = 0;
    func_?(&uStack_160,0xffffffff,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_160;
    pIVar5->vector[3].y = uStack_160._2_2_;
    pIVar5->vector[3].z = iStack_161;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x13) goto code_?;
    pIVar4->vector[0x12] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_162 = 0;
    iStack_163 = 0;
    func_?(&uStack_162,0xffffffff,0,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_162;
    pIVar5->vector[0].y = uStack_162._2_2_;
    pIVar5->vector[0].z = iStack_163;
    uStack_164 = 0;
    iStack_165 = 0;
    func_?(&uStack_164,0xffffffff,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_164;
    pIVar5->vector[1].y = uStack_164._2_2_;
    pIVar5->vector[1].z = iStack_165;
    uStack_166 = 0;
    iStack_167 = 0;
    func_?(&uStack_166,0xffffffff,1,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_166;
    pIVar5->vector[2].y = uStack_166._2_2_;
    pIVar5->vector[2].z = iStack_167;
    uStack_168 = 0;
    iStack_169 = 0;
    func_?(&uStack_168,0xffffffff,0,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_168;
    pIVar5->vector[3].y = uStack_168._2_2_;
    pIVar5->vector[3].z = iStack_169;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x14) goto code_?;
    pIVar4->vector[0x13] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_170 = 0;
    iStack_171 = 0;
    func_?(&uStack_170,1,0xffffffff,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_170;
    pIVar5->vector[0].y = uStack_170._2_2_;
    pIVar5->vector[0].z = iStack_171;
    uStack_172 = 0;
    iStack_173 = 0;
    func_?(&uStack_172,1,0,0xffffffff,0);
    uVar9 = 0;
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_172;
    pIVar5->vector[1].y = uStack_172._2_2_;
    pIVar5->vector[1].z = iStack_173;
    uStack_174 = 0;
    iStack_175 = 0;
    func_?(&uStack_174,1,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_174;
    pIVar5->vector[2].y = uStack_174._2_2_;
    pIVar5->vector[2].z = iStack_175;
    uStack_176 = 0;
    iStack_177 = 0;
    func_?(&uStack_176,1,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_176;
    pIVar5->vector[3].y = uStack_176._2_2_;
    pIVar5->vector[3].z = iStack_177;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x15) goto code_?;
    pIVar4->vector[0x14] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_178 = 0;
    iStack_179 = 0;
    func_?(&uStack_178,1,0xffffffff,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_178;
    pIVar5->vector[0].y = uStack_178._2_2_;
    pIVar5->vector[0].z = iStack_179;
    uStack_180 = 0;
    iStack_181 = 0;
    func_?(&uStack_180,1,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_180;
    pIVar5->vector[1].y = uStack_180._2_2_;
    pIVar5->vector[1].z = iStack_181;
    uStack_182 = 0;
    iStack_183 = 0;
    func_?(&uStack_182,1,0,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_182;
    pIVar5->vector[2].y = uStack_182._2_2_;
    pIVar5->vector[2].z = iStack_183;
    uStack_184 = 0;
    iStack_185 = 0;
    func_?(&uStack_184,1,0xffffffff,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_184;
    pIVar5->vector[3].y = uStack_184._2_2_;
    pIVar5->vector[3].z = iStack_185;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x16) goto code_?;
    pIVar4->vector[0x15] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_186 = 0;
    iStack_187 = 0;
    func_?(&uStack_186,1,0,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_186;
    pIVar5->vector[0].y = uStack_186._2_2_;
    pIVar5->vector[0].z = iStack_187;
    uStack_188 = 0;
    iStack_189 = 0;
    func_?(&uStack_188,1,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_188;
    pIVar5->vector[1].y = uStack_188._2_2_;
    pIVar5->vector[1].z = iStack_189;
    uStack_190 = 0;
    iStack_191 = 0;
    func_?(&uStack_190,1,1,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_190;
    pIVar5->vector[2].y = uStack_190._2_2_;
    pIVar5->vector[2].z = iStack_191;
    uStack_192 = 0;
    iStack_193 = 0;
    func_?(&uStack_192,1,0,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_192;
    pIVar5->vector[3].y = uStack_192._2_2_;
    pIVar5->vector[3].z = iStack_193;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x17) goto code_?;
    pIVar4->vector[0x16] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_194 = 0;
    iStack_195 = 0;
    func_?(&uStack_194,1,0,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_194;
    pIVar5->vector[0].y = uStack_194._2_2_;
    pIVar5->vector[0].z = iStack_195;
    uStack_196 = 0;
    iStack_197 = 0;
    func_?(&uStack_196,1,1,0xffffffff,0);
    uVar9 = 0;
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_196;
    pIVar5->vector[1].y = uStack_196._2_2_;
    pIVar5->vector[1].z = iStack_197;
    uStack_198 = 0;
    iStack_199 = 0;
    func_?(&uStack_198,1,1,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_198;
    pIVar5->vector[2].y = uStack_198._2_2_;
    pIVar5->vector[2].z = iStack_199;
    uStack_200 = 0;
    iStack_201 = 0;
    func_?(&uStack_200,1,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_200;
    pIVar5->vector[3].y = uStack_200._2_2_;
    pIVar5->vector[3].z = iStack_201;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x18) goto code_?;
    pIVar4->vector[0x17] = pIVar5;
    TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsets = pIVar4;
    pIVar4 = (IntVector__Array__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,0x18);
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_202 = 0;
    iStack_203 = 0;
    func_?(&uStack_202,0xffffffff,0,0xffffffff,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_202;
    pIVar5->vector[0].y = uStack_202._2_2_;
    pIVar5->vector[0].z = iStack_203;
    uStack_204 = 0;
    iStack_205 = 0;
    func_?(&uStack_204,0xffffffff,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_204;
    pIVar5->vector[1].y = uStack_204._2_2_;
    pIVar5->vector[1].z = iStack_205;
    uStack_206 = 0;
    iStack_207 = 0;
    func_?(&uStack_206,0,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_206;
    pIVar5->vector[2].y = uStack_206._2_2_;
    pIVar5->vector[2].z = iStack_207;
    uStack_208 = 0;
    iStack_209 = 0;
    func_?(&uStack_208,0,0,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_208;
    pIVar5->vector[3].y = uStack_208._2_2_;
    pIVar5->vector[3].z = iStack_209;
    if (pIVar4 == (IntVector__Array__Array *)0x0) goto code_?;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_210 = 0;
    iStack_211 = 0;
    func_?(&uStack_210,0,0,0xffffffff,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_210;
    pIVar5->vector[0].y = uStack_210._2_2_;
    pIVar5->vector[0].z = iStack_211;
    uStack_212 = 0;
    iStack_213 = 0;
    func_?(&uStack_212,0,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_212;
    pIVar5->vector[1].y = uStack_212._2_2_;
    pIVar5->vector[1].z = iStack_213;
    uStack_214 = 0;
    iStack_215 = 0;
    func_?(&uStack_214,1,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_214;
    pIVar5->vector[2].y = uStack_214._2_2_;
    pIVar5->vector[2].z = iStack_215;
    uStack_216 = 0;
    iStack_217 = 0;
    func_?(&uStack_216,1,0,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_216;
    pIVar5->vector[3].y = uStack_216._2_2_;
    pIVar5->vector[3].z = iStack_217;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_218 = 0;
    iStack_219 = 0;
    func_?(&uStack_218,0,0,0,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_218;
    pIVar5->vector[0].y = uStack_218._2_2_;
    pIVar5->vector[0].z = iStack_219;
    uStack_220 = 0;
    iStack_221 = 0;
    func_?(&uStack_220,0,0,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_220;
    pIVar5->vector[1].y = uStack_220._2_2_;
    pIVar5->vector[1].z = iStack_221;
    uStack_222 = 0;
    iStack_223 = 0;
    func_?(&uStack_222,1,0,1,0);
    uVar8 = 0;
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_222;
    pIVar5->vector[2].y = uStack_222._2_2_;
    pIVar5->vector[2].z = iStack_223;
    uStack_224 = 0;
    iStack_225 = 0;
    func_?(&uStack_224,1,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_224;
    pIVar5->vector[3].y = uStack_224._2_2_;
    pIVar5->vector[3].z = iStack_225;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 3) goto code_?;
    pIVar4->vector[2] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_226 = 0;
    iStack_227 = 0;
    func_?(&uStack_226,0xffffffff,0,0,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_226;
    pIVar5->vector[0].y = uStack_226._2_2_;
    pIVar5->vector[0].z = iStack_227;
    uStack_228 = 0;
    iStack_229 = 0;
    func_?(&uStack_228,0xffffffff,0,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_228;
    pIVar5->vector[1].y = uStack_228._2_2_;
    pIVar5->vector[1].z = iStack_229;
    uStack_230 = 0;
    iStack_231 = 0;
    func_?(&uStack_230,0,0,1,0);
    uVar8 = 0;
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_230;
    pIVar5->vector[2].y = uStack_230._2_2_;
    pIVar5->vector[2].z = iStack_231;
    uStack_232 = 0;
    iStack_233 = 0;
    func_?(&uStack_232,0,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_232;
    pIVar5->vector[3].y = uStack_232._2_2_;
    pIVar5->vector[3].z = iStack_233;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 4) goto code_?;
    pIVar4->vector[3] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_234 = 0;
    iStack_235 = 0;
    func_?(&uStack_234,0xffffffff,0,0,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_234;
    pIVar5->vector[0].y = uStack_234._2_2_;
    pIVar5->vector[0].z = iStack_235;
    uStack_236 = 0;
    iStack_237 = 0;
    func_?(&uStack_236,0xffffffff,0,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_236;
    pIVar5->vector[1].y = uStack_236._2_2_;
    pIVar5->vector[1].z = iStack_237;
    uStack_238 = 0;
    iStack_239 = 0;
    func_?(&uStack_238,0,0,1,0);
    uVar8 = 0;
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_238;
    pIVar5->vector[2].y = uStack_238._2_2_;
    pIVar5->vector[2].z = iStack_239;
    uStack_240 = 0;
    iStack_241 = 0;
    func_?(&uStack_240,0,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_240;
    pIVar5->vector[3].y = uStack_240._2_2_;
    pIVar5->vector[3].z = iStack_241;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 5) goto code_?;
    pIVar4->vector[4] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_242 = 0;
    iStack_243 = 0;
    func_?(&uStack_242,0,0,0,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_242;
    pIVar5->vector[0].y = uStack_242._2_2_;
    pIVar5->vector[0].z = iStack_243;
    uStack_244 = 0;
    iStack_245 = 0;
    func_?(&uStack_244,0,0,1,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_244;
    pIVar5->vector[1].y = uStack_244._2_2_;
    pIVar5->vector[1].z = iStack_245;
    uStack_246 = 0;
    iStack_247 = 0;
    func_?(&uStack_246,1,0,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_246;
    pIVar5->vector[2].y = uStack_246._2_2_;
    pIVar5->vector[2].z = iStack_247;
    uStack_248 = 0;
    iStack_249 = 0;
    func_?(&uStack_248,1,0,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_248;
    pIVar5->vector[3].y = uStack_248._2_2_;
    pIVar5->vector[3].z = iStack_249;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 6) goto code_?;
    pIVar4->vector[5] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_250 = 0;
    iStack_251 = 0;
    func_?(&uStack_250,0,0,0xffffffff,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_250;
    pIVar5->vector[0].y = uStack_250._2_2_;
    pIVar5->vector[0].z = iStack_251;
    uStack_252 = 0;
    iStack_253 = 0;
    func_?(&uStack_252,0,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_252;
    pIVar5->vector[1].y = uStack_252._2_2_;
    pIVar5->vector[1].z = iStack_253;
    uStack_254 = 0;
    iStack_255 = 0;
    func_?(&uStack_254,1,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_254;
    pIVar5->vector[2].y = uStack_254._2_2_;
    pIVar5->vector[2].z = iStack_255;
    uStack_256 = 0;
    iStack_257 = 0;
    func_?(&uStack_256,1,0,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_256;
    pIVar5->vector[3].y = uStack_256._2_2_;
    pIVar5->vector[3].z = iStack_257;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 7) goto code_?;
    pIVar4->vector[6] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_258 = 0;
    iStack_259 = 0;
    func_?(&uStack_258,0xffffffff,0,0xffffffff,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_258;
    pIVar5->vector[0].y = uStack_258._2_2_;
    pIVar5->vector[0].z = iStack_259;
    uStack_260 = 0;
    iStack_261 = 0;
    func_?(&uStack_260,0xffffffff,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_260;
    pIVar5->vector[1].y = uStack_260._2_2_;
    pIVar5->vector[1].z = iStack_261;
    uStack_262 = 0;
    iStack_263 = 0;
    func_?(&uStack_262,0,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_262;
    pIVar5->vector[2].y = uStack_262._2_2_;
    pIVar5->vector[2].z = iStack_263;
    uStack_264 = 0;
    iStack_265 = 0;
    func_?(&uStack_264,0,0,0xffffffff,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_264;
    pIVar5->vector[3].y = uStack_264._2_2_;
    pIVar5->vector[3].z = iStack_265;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 8) goto code_?;
    pIVar4->vector[7] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_266 = 0;
    iStack_267 = 0;
    func_?(&uStack_266,0xffffffff,0xffffffff,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_266;
    pIVar5->vector[0].y = uStack_266._2_2_;
    pIVar5->vector[0].z = iStack_267;
    uStack_268 = 0;
    iStack_269 = 0;
    func_?(&uStack_268,0xffffffff,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_268;
    pIVar5->vector[1].y = uStack_268._2_2_;
    pIVar5->vector[1].z = iStack_269;
    uStack_270 = 0;
    iStack_271 = 0;
    func_?(&uStack_270,0,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_270;
    pIVar5->vector[2].y = uStack_270._2_2_;
    pIVar5->vector[2].z = iStack_271;
    uStack_272 = 0;
    iStack_273 = 0;
    func_?(&uStack_272,0,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_272;
    pIVar5->vector[3].y = uStack_272._2_2_;
    pIVar5->vector[3].z = iStack_273;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 9) goto code_?;
    pIVar4->vector[8] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_274 = 0;
    iStack_275 = 0;
    func_?(&uStack_274,0,0xffffffff,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_274;
    pIVar5->vector[0].y = uStack_274._2_2_;
    pIVar5->vector[0].z = iStack_275;
    uStack_276 = 0;
    iStack_277 = 0;
    func_?(&uStack_276,0,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_276;
    pIVar5->vector[1].y = uStack_276._2_2_;
    pIVar5->vector[1].z = iStack_277;
    uStack_278 = 0;
    iStack_279 = 0;
    func_?(&uStack_278,1,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_278;
    pIVar5->vector[2].y = uStack_278._2_2_;
    pIVar5->vector[2].z = iStack_279;
    uStack_280 = 0;
    iStack_281 = 0;
    func_?(&uStack_280,1,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_280;
    pIVar5->vector[3].y = uStack_280._2_2_;
    pIVar5->vector[3].z = iStack_281;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 10) goto code_?;
    pIVar4->vector[9] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_282 = 0;
    iStack_283 = 0;
    func_?(&uStack_282,0,0,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_282;
    pIVar5->vector[0].y = uStack_282._2_2_;
    pIVar5->vector[0].z = iStack_283;
    uStack_284 = 0;
    iStack_285 = 0;
    func_?(&uStack_284,0,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_284;
    pIVar5->vector[1].y = uStack_284._2_2_;
    pIVar5->vector[1].z = iStack_285;
    uStack_286 = 0;
    iStack_287 = 0;
    func_?(&uStack_286,1,1,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_286;
    pIVar5->vector[2].y = uStack_286._2_2_;
    pIVar5->vector[2].z = iStack_287;
    uStack_288 = 0;
    iStack_289 = 0;
    func_?(&uStack_288,1,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_288;
    pIVar5->vector[3].y = uStack_288._2_2_;
    pIVar5->vector[3].z = iStack_289;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xb) goto code_?;
    pIVar4->vector[10] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_290 = 0;
    iStack_291 = 0;
    func_?(&uStack_290,0xffffffff,0,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_290;
    pIVar5->vector[0].y = uStack_290._2_2_;
    pIVar5->vector[0].z = iStack_291;
    uStack_292 = 0;
    iStack_293 = 0;
    func_?(&uStack_292,0xffffffff,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_292;
    pIVar5->vector[1].y = uStack_292._2_2_;
    pIVar5->vector[1].z = iStack_293;
    uStack_294 = 0;
    iStack_295 = 0;
    func_?(&uStack_294,0,1,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_294;
    pIVar5->vector[2].y = uStack_294._2_2_;
    pIVar5->vector[2].z = iStack_295;
    uStack_296 = 0;
    iStack_297 = 0;
    func_?(&uStack_296,0,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_296;
    pIVar5->vector[3].y = uStack_296._2_2_;
    pIVar5->vector[3].z = iStack_297;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xc) goto code_?;
    pIVar4->vector[0xb] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_298 = 0;
    iStack_299 = 0;
    func_?(&uStack_298,0,0xffffffff,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_298;
    pIVar5->vector[0].y = uStack_298._2_2_;
    pIVar5->vector[0].z = iStack_299;
    uStack_300 = 0;
    iStack_301 = 0;
    func_?(&uStack_300,0,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_300;
    pIVar5->vector[1].y = uStack_300._2_2_;
    pIVar5->vector[1].z = iStack_301;
    uStack_302 = 0;
    iStack_303 = 0;
    func_?(&uStack_302,1,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_302;
    pIVar5->vector[2].y = uStack_302._2_2_;
    pIVar5->vector[2].z = iStack_303;
    uStack_304 = 0;
    iStack_305 = 0;
    func_?(&uStack_304,1,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_304;
    pIVar5->vector[3].y = uStack_304._2_2_;
    pIVar5->vector[3].z = iStack_305;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xd) goto code_?;
    pIVar4->vector[0xc] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_306 = 0;
    iStack_307 = 0;
    func_?(&uStack_306,0xffffffff,0xffffffff,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_306;
    pIVar5->vector[0].y = uStack_306._2_2_;
    pIVar5->vector[0].z = iStack_307;
    uStack_308 = 0;
    iStack_309 = 0;
    func_?(&uStack_308,0xffffffff,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_308;
    pIVar5->vector[1].y = uStack_308._2_2_;
    pIVar5->vector[1].z = iStack_309;
    uStack_310 = 0;
    iStack_311 = 0;
    func_?(&uStack_310,0,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_310;
    pIVar5->vector[2].y = uStack_310._2_2_;
    pIVar5->vector[2].z = iStack_311;
    uStack_312 = 0;
    iStack_313 = 0;
    func_?(&uStack_312,0,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_312;
    pIVar5->vector[3].y = uStack_312._2_2_;
    pIVar5->vector[3].z = iStack_313;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xe) goto code_?;
    pIVar4->vector[0xd] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_314 = 0;
    iStack_315 = 0;
    func_?(&uStack_314,0xffffffff,0,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_314;
    pIVar5->vector[0].y = uStack_314._2_2_;
    pIVar5->vector[0].z = iStack_315;
    uStack_316 = 0;
    iStack_317 = 0;
    func_?(&uStack_316,0xffffffff,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_316;
    pIVar5->vector[1].y = uStack_316._2_2_;
    pIVar5->vector[1].z = iStack_317;
    uStack_318 = 0;
    iStack_319 = 0;
    func_?(&uStack_318,0,1,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_318;
    pIVar5->vector[2].y = uStack_318._2_2_;
    pIVar5->vector[2].z = iStack_319;
    uStack_320 = 0;
    iStack_321 = 0;
    func_?(&uStack_320,0,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_320;
    pIVar5->vector[3].y = uStack_320._2_2_;
    pIVar5->vector[3].z = iStack_321;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0xf) goto code_?;
    pIVar4->vector[0xe] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_322 = 0;
    iStack_323 = 0;
    func_?(&uStack_322,0,0,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_322;
    pIVar5->vector[0].y = uStack_322._2_2_;
    pIVar5->vector[0].z = iStack_323;
    uStack_324 = 0;
    iStack_325 = 0;
    func_?(&uStack_324,0,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_324;
    pIVar5->vector[1].y = uStack_324._2_2_;
    pIVar5->vector[1].z = iStack_325;
    uStack_326 = 0;
    iStack_327 = 0;
    func_?(&uStack_326,1,1,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_326;
    pIVar5->vector[2].y = uStack_326._2_2_;
    pIVar5->vector[2].z = iStack_327;
    uStack_328 = 0;
    iStack_329 = 0;
    func_?(&uStack_328,1,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_328;
    pIVar5->vector[3].y = uStack_328._2_2_;
    pIVar5->vector[3].z = iStack_329;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x10) goto code_?;
    pIVar4->vector[0xf] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_330 = 0;
    iStack_331 = 0;
    func_?(&uStack_330,0,0xffffffff,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_330;
    pIVar5->vector[0].y = uStack_330._2_2_;
    pIVar5->vector[0].z = iStack_331;
    uStack_332 = 0;
    iStack_333 = 0;
    func_?(&uStack_332,0,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_332;
    pIVar5->vector[1].y = uStack_332._2_2_;
    pIVar5->vector[1].z = iStack_333;
    uStack_334 = 0;
    iStack_335 = 0;
    func_?(&uStack_334,0,0,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_334;
    pIVar5->vector[2].y = uStack_334._2_2_;
    pIVar5->vector[2].z = iStack_335;
    uStack_336 = 0;
    iStack_337 = 0;
    func_?(&uStack_336,0,0xffffffff,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_336;
    pIVar5->vector[3].y = uStack_336._2_2_;
    pIVar5->vector[3].z = iStack_337;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x11) goto code_?;
    pIVar4->vector[0x10] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_338 = 0;
    iStack_339 = 0;
    func_?(&uStack_338,0,0xffffffff,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_338;
    pIVar5->vector[0].y = uStack_338._2_2_;
    pIVar5->vector[0].z = iStack_339;
    uStack_340 = 0;
    iStack_341 = 0;
    func_?(&uStack_340,0,0,0xffffffff,0);
    uVar9 = 0;
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_340;
    pIVar5->vector[1].y = uStack_340._2_2_;
    pIVar5->vector[1].z = iStack_341;
    uStack_342 = 0;
    iStack_343 = 0;
    func_?(&uStack_342,0,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_342;
    pIVar5->vector[2].y = uStack_342._2_2_;
    pIVar5->vector[2].z = iStack_343;
    uStack_344 = 0;
    iStack_345 = 0;
    func_?(&uStack_344,0,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_344;
    pIVar5->vector[3].y = uStack_344._2_2_;
    pIVar5->vector[3].z = iStack_345;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x12) goto code_?;
    pIVar4->vector[0x11] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_346 = 0;
    iStack_347 = 0;
    func_?(&uStack_346,0,0,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_346;
    pIVar5->vector[0].y = uStack_346._2_2_;
    pIVar5->vector[0].z = iStack_347;
    uStack_348 = 0;
    iStack_349 = 0;
    func_?(&uStack_348,0,1,0xffffffff,0);
    uVar9 = 0;
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_348;
    pIVar5->vector[1].y = uStack_348._2_2_;
    pIVar5->vector[1].z = iStack_349;
    uStack_350 = 0;
    iStack_351 = 0;
    func_?(&uStack_350,0,1,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_350;
    pIVar5->vector[2].y = uStack_350._2_2_;
    pIVar5->vector[2].z = iStack_351;
    uStack_352 = 0;
    iStack_353 = 0;
    func_?(&uStack_352,0,0,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_352;
    pIVar5->vector[3].y = uStack_352._2_2_;
    pIVar5->vector[3].z = iStack_353;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x13) goto code_?;
    pIVar4->vector[0x12] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_354 = 0;
    iStack_355 = 0;
    func_?(&uStack_354,0,0,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_354;
    pIVar5->vector[0].y = uStack_354._2_2_;
    pIVar5->vector[0].z = iStack_355;
    uStack_356 = 0;
    iStack_357 = 0;
    func_?(&uStack_356,0,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_356;
    pIVar5->vector[1].y = uStack_356._2_2_;
    pIVar5->vector[1].z = iStack_357;
    uStack_358 = 0;
    iStack_359 = 0;
    func_?(&uStack_358,0,1,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_358;
    pIVar5->vector[2].y = uStack_358._2_2_;
    pIVar5->vector[2].z = iStack_359;
    uStack_360 = 0;
    iStack_361 = 0;
    func_?(&uStack_360,0,0,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_360;
    pIVar5->vector[3].y = uStack_360._2_2_;
    pIVar5->vector[3].z = iStack_361;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x14) goto code_?;
    pIVar4->vector[0x13] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_362 = 0;
    iStack_363 = 0;
    func_?(&uStack_362,0,0xffffffff,0xffffffff,0);
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_362;
    pIVar5->vector[0].y = uStack_362._2_2_;
    pIVar5->vector[0].z = iStack_363;
    uStack_364 = 0;
    iStack_365 = 0;
    func_?(&uStack_364,0,0,0xffffffff,0);
    uVar9 = 0;
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_364;
    pIVar5->vector[1].y = uStack_364._2_2_;
    pIVar5->vector[1].z = iStack_365;
    uStack_366 = 0;
    iStack_367 = 0;
    func_?(&uStack_366,0,0,0,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_366;
    pIVar5->vector[2].y = uStack_366._2_2_;
    pIVar5->vector[2].z = iStack_367;
    uStack_368 = 0;
    iStack_369 = 0;
    func_?(&uStack_368,0,0xffffffff,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_368;
    pIVar5->vector[3].y = uStack_368._2_2_;
    pIVar5->vector[3].z = iStack_369;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x15) goto code_?;
    pIVar4->vector[0x14] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_370 = 0;
    iStack_371 = 0;
    func_?(&uStack_370,0,0xffffffff,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_370;
    pIVar5->vector[0].y = uStack_370._2_2_;
    pIVar5->vector[0].z = iStack_371;
    uStack_372 = 0;
    iStack_373 = 0;
    func_?(&uStack_372,0,0,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_372;
    pIVar5->vector[1].y = uStack_372._2_2_;
    pIVar5->vector[1].z = iStack_373;
    uStack_374 = 0;
    iStack_375 = 0;
    func_?(&uStack_374,0,0,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_374;
    pIVar5->vector[2].y = uStack_374._2_2_;
    pIVar5->vector[2].z = iStack_375;
    uStack_376 = 0;
    iStack_377 = 0;
    func_?(&uStack_376,0,0xffffffff,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_376;
    pIVar5->vector[3].y = uStack_376._2_2_;
    pIVar5->vector[3].z = iStack_377;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x16) goto code_?;
    pIVar4->vector[0x15] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_378 = 0;
    iStack_379 = 0;
    func_?(&uStack_378,0,0,0,0);
    uVar9 = 0;
    uVar8 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_378;
    pIVar5->vector[0].y = uStack_378._2_2_;
    pIVar5->vector[0].z = iStack_379;
    uStack_380 = 0;
    iStack_381 = 0;
    func_?(&uStack_380,0,1,0,0);
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_380;
    pIVar5->vector[1].y = uStack_380._2_2_;
    pIVar5->vector[1].z = iStack_381;
    uStack_382 = 0;
    iStack_383 = 0;
    func_?(&uStack_382,0,1,1,0);
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_382;
    pIVar5->vector[2].y = uStack_382._2_2_;
    pIVar5->vector[2].z = iStack_383;
    uStack_384 = 0;
    iStack_385 = 0;
    func_?(&uStack_384,0,0,1,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_384;
    pIVar5->vector[3].y = uStack_384._2_2_;
    pIVar5->vector[3].z = iStack_385;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 == 0) goto code_?;
    if (pIVar4->max_length < 0x17) goto code_?;
    pIVar4->vector[0x16] = pIVar5;
    pIVar5 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,4);
    if (pIVar5 == (IntVector__Array *)0x0) goto code_?;
    uStack_386 = 0;
    iStack_387 = 0;
    func_?(&uStack_386,0,0,0xffffffff,0);
    uVar9 = 0;
    if (pIVar5->max_length == 0) goto code_?;
    pIVar5->vector[0].x = (undefined2)uStack_386;
    pIVar5->vector[0].y = uStack_386._2_2_;
    pIVar5->vector[0].z = iStack_387;
    uStack_388 = 0;
    iStack_389 = 0;
    func_?(&uStack_388,0,1,0xffffffff);
    uVar9 = 0;
    uVar10 = 0;
    if (pIVar5->max_length < 2) goto code_?;
    pIVar5->vector[1].x = (undefined2)uStack_388;
    pIVar5->vector[1].y = uStack_388._2_2_;
    pIVar5->vector[1].z = iStack_389;
    uStack_390 = 0;
    iStack_391 = 0;
    func_?(&uStack_390,0,1);
    uVar9 = 0;
    uVar10 = 0;
    if (pIVar5->max_length < 3) goto code_?;
    pIVar5->vector[2].x = (undefined2)uStack_390;
    pIVar5->vector[2].y = uStack_390._2_2_;
    pIVar5->vector[2].z = iStack_391;
    uStack_392 = 0;
    iStack_393 = 0;
    func_?(&uStack_392,0,0);
    if (pIVar5->max_length < 4) goto code_?;
    pIVar5->vector[3].x = (undefined2)uStack_392;
    pIVar5->vector[3].y = uStack_392._2_2_;
    pIVar5->vector[3].z = iStack_393;
    iVar17 = func_?(pIVar5,(pIVar4->klass->_0).element_class);
    if (iVar17 != 0) {
      if (0x17 < pIVar4->max_length) {
        pIVar4->vector[0x17] = pIVar5;
        TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsetsInside = pIVar4;
        return;
      }
      goto code_?;
    }
  }
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar394 = (code *)swi(3);
  (*pcVar394)();
  return;
}


/* IntVector get_CubeConstraint() */

IntVector Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraint(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e25);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3(Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x5e24);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pSVar1 = TypeInfo__SharedCubeFunctions->static_fields;
  uVar2 = (pSVar1->constraint).x;
  uVar3 = (pSVar1->constraint).y;
  sVar4 = (pSVar1->constraint).z;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,(float)(int)(short)uVar2,(float)(int)(short)uVar3,(float)(int)sVar4,0);
  return __return_storage_ptr__;
}

