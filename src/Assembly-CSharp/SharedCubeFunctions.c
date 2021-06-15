
/* Void AddCubeLine(Mesh, Vector3, Vector3, Single) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
               (Mesh *mesh,Vector3 p0,Vector3 p1,float diagonalWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = diagonalWidth * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  mesh_00 = p1.z;
  fVar2 = p0.z;
  a_05.y = p1.y;
  a_05.x = p1.x;
  a_05.z = p1.z;
  b_01.y = p0.y;
  b_01.x = p0.x;
  b_01.z = p0.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xffffffb4,a_05,b_01,(MethodInfo *)0x0);
  pVVar3 = (Vector3 *)func_?(&stack0xffffffcc,&stack0xffffffc0,0);
  fVar4 = pVVar3->x;
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  fVar7 = pVVar3->y;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffcc,*pVVar3,fVar1,(MethodInfo *)0x0);
  a_06.y = p0.y;
  a_06.x = p0.x;
  a_06.z = fVar2;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      (&p0,a_06,*pVVar3,(MethodInfo *)0x0);
  uVar8 = pVVar3->x;
  uVar9 = pVVar3->y;
  pVVar3 = &p0;
  a_07.y = fVar5;
  a_07.x = fVar4;
  a_07.z = fVar6;
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      (pVVar3,a_07,fVar1,(MethodInfo *)0x0);
  p1.x = 0.0;
  uVar11 = pVVar10->x;
  uVar12 = pVVar10->y;
  p0.z = pVVar10->z;
  auVar13._4_4_ = mesh_00;
  auVar13._0_4_ = p1.y;
  __return_storage_ptr__ = &p0;
  puVar14 = &UNK_?;
  auVar13._8_4_ = 0;
  p0.x = (float)uVar11;
  p0.y = (float)uVar12;
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      (__return_storage_ptr__,(Vector3)(auVar13 << 0x20),*pVVar10,(MethodInfo *)0x0)
  ;
  p1.z = (float)pVVar3;
  uVar15._0_4_ = pVVar10->x;
  uVar15._4_4_ = pVVar10->y;
  fVar1 = pVVar10->z;
  fVar2 = 0.0;
  to.y = 0.0;
  to.x = p1.z;
  p1.y = (float)&UNK_?;
  from.y = fVar4;
  from.x = p1.z;
  from.z = fVar6;
  to.z = fVar6;
  pVStack_16 = (Vector3 *)p1.z;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle
                     (from,to,(MethodInfo *)0x0);
  p0.z = (float)((uint)fVar5 ^ _UNK_?);
  if (fVar7 < 0.0) {
    p0.z = fVar5;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                      ((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
  uVar17 = pVVar3->x;
  uVar18 = pVVar3->y;
  fVar5 = pVVar3->z;
  p1.y = (float)uVar17;
  p1.z = (float)uVar18;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                      ((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
  v1.y = p1.z;
  v1.x = p1.y;
  v1.z = fVar5;
  v2.y = fVar2;
  v2.x = (float)pVStack_16;
  v2.z = (float)__return_storage_ptr__;
  fVar5 = MathFunctions::MathFunctions_SignedAngle_1(v1,v2,*pVVar3,(MethodInfo *)0x0);
  p1.z = fVar5 * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                      ((Quaternion *)&stack0xffffffb0,p0.z,0.0,0.0,(MethodInfo *)0x0);
  fVar5 = pQVar19->x;
  fVar7 = pQVar19->y;
  fVar6 = pQVar19->z;
  fVar2 = pQVar19->w;
  pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                      ((Quaternion *)&fStack_20,0.0,p1.z,0.0,(MethodInfo *)0x0);
  rhs.y = fVar7;
  rhs.x = fVar5;
  rhs.z = fVar6;
  rhs.w = fVar2;
  pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                      ((Quaternion *)&stack0xffffffb0,*pQVar19,rhs,(MethodInfo *)0x0);
  fStack_20 = pQVar19->x;
  pVStack_16 = (Vector3 *)pQVar19->y;
  fVar5 = pQVar19->z;
  fVar7 = pQVar19->w;
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
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                        (&p0,(MethodInfo *)0x0);
    rotation.y = (float)pVStack_16;
    rotation.x = fStack_20;
    rotation.z = fVar5;
    rotation.w = fVar7;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&p1,rotation,*pVVar3,(MethodInfo *)0x0);
    uVar22 = pVVar3->x;
    uVar23 = pVVar3->y;
    fVar6 = pVVar3->z;
    p0.y = (float)uVar22;
    p0.z = (float)uVar23;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
                        (&p1,(MethodInfo *)0x0);
    rotation_00.y = (float)pVStack_16;
    rotation_00.x = fStack_20;
    rotation_00.z = fVar5;
    rotation_00.w = fVar7;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&p1,rotation_00,*pVVar3,(MethodInfo *)0x0);
    a.y = p0.z;
    a.x = p0.y;
    a.z = fVar6;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&p0,a,*pVVar3,(MethodInfo *)0x0);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&p0,*pVVar3,fVar4,(MethodInfo *)0x0);
    fVar6 = pVVar3->z;
    if (*(int *)(iVar21 + 0xc) == 0) goto code_?;
    p1.z = (float)(iVar21 + 0x10);
    *(undefined8 *)p1.z = *(undefined8 *)pVVar3;
    *(float *)(iVar21 + 0x18) = fVar6;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                        (&p0,(MethodInfo *)0x0);
    rotation_01.y = (float)pVStack_16;
    rotation_01.x = fStack_20;
    rotation_01.z = fVar5;
    rotation_01.w = fVar7;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffb4,rotation_01,*pVVar3,(MethodInfo *)0x0);
    uVar24 = pVVar3->x;
    uVar25 = pVVar3->y;
    fVar6 = pVVar3->z;
    p0.y = (float)uVar24;
    p0.z = (float)uVar25;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                        ((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
    rotation_02.y = (float)pVStack_16;
    rotation_02.x = fStack_20;
    rotation_02.z = fVar5;
    rotation_02.w = fVar7;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffb4,rotation_02,*pVVar3,(MethodInfo *)0x0);
    a_00.y = p0.z;
    a_00.x = p0.y;
    a_00.z = fVar6;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&p0,a_00,*pVVar3,(MethodInfo *)0x0);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&p0,*pVVar3,fVar4,(MethodInfo *)0x0);
    fVar6 = pVVar3->z;
    if (*(uint *)(iVar21 + 0xc) < 2) goto code_?;
    *(undefined8 *)(iVar21 + 0x1c) = *(undefined8 *)pVVar3;
    *(float *)(iVar21 + 0x24) = fVar6;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                        (&p0,(MethodInfo *)0x0);
    rotation_03.y = (float)pVStack_16;
    rotation_03.x = fStack_20;
    rotation_03.z = fVar5;
    rotation_03.w = fVar7;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffb4,rotation_03,*pVVar3,(MethodInfo *)0x0);
    uVar26 = pVVar3->x;
    uVar27 = pVVar3->y;
    fVar6 = pVVar3->z;
    p0.y = (float)uVar26;
    p0.z = (float)uVar27;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                        ((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
    rotation_04.y = (float)pVStack_16;
    rotation_04.x = fStack_20;
    rotation_04.z = fVar5;
    rotation_04.w = fVar7;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffb4,rotation_04,*pVVar3,(MethodInfo *)0x0);
    a_01.y = p0.z;
    a_01.x = p0.y;
    a_01.z = fVar6;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&p0,a_01,*pVVar3,(MethodInfo *)0x0);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&p0,*pVVar3,fVar4,(MethodInfo *)0x0);
    fVar6 = pVVar3->z;
    if (2 < *(uint *)(iVar21 + 0xc)) {
      *(undefined8 *)(iVar21 + 0x28) = *(undefined8 *)pVVar3;
      *(float *)(iVar21 + 0x30) = fVar6;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                          (&p0,(MethodInfo *)0x0);
      rotation_05.y = (float)pVStack_16;
      rotation_05.x = fStack_20;
      rotation_05.z = fVar5;
      rotation_05.w = fVar7;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffb4,rotation_05,*pVVar3,(MethodInfo *)0x0);
      uVar28 = pVVar3->x;
      uVar29 = pVVar3->y;
      fVar6 = pVVar3->z;
      p0.y = (float)uVar28;
      p0.z = (float)uVar29;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
                          ((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
      rotation_06.y = (float)pVStack_16;
      rotation_06.x = fStack_20;
      rotation_06.z = fVar5;
      rotation_06.w = fVar7;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffb4,rotation_06,*pVVar3,(MethodInfo *)0x0);
      a_02.y = p0.z;
      a_02.x = p0.y;
      a_02.z = fVar6;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&p0,a_02,*pVVar3,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          (&p0,*pVVar3,fVar4,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      if (3 < *(uint *)(iVar21 + 0xc)) {
        *(undefined8 *)(iVar21 + 0x34) = *(undefined8 *)pVVar3;
        *(float *)(iVar21 + 0x3c) = fVar4;
        corners = (Vector3__Array *)func_?();
        puVar30 = (undefined8 *)(iVar21 + 0x10);
        p0.z = 0.0;
        do {
          if (corners == (Vector3__Array *)0x0) goto code_?;
          if ((uint)*(float *)(iVar21 + 0xc) <= (uint)p0.z) goto code_?;
          uVar31 = *puVar30;
          fVar4 = *(float *)(puVar30 + 1);
          fVar5 = (float)uVar31;
          fVar7 = (float)((ulonglong)uVar31 >> 0x20);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar31 = CONCAT44(fVar7,fVar5);
          }
          a_03.z = fVar4;
          a_03.x = (float)(int)uVar31;
          a_03.y = (float)(int)((ulonglong)uVar31 >> 0x20);
          b.y = (float)uVar9;
          b.x = (float)uVar8;
          b.z = (float)puVar14;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffffb4,a_03,b,(MethodInfo *)0x0);
          fVar6 = pVVar3->x;
          fVar2 = pVVar3->y;
          fVar4 = pVVar3->z;
          puVar32 = (undefined8 *)func_?();
          puVar30 = (undefined8 *)((int)p1.z + 0xc);
          *puVar32 = CONCAT44(fVar2,fVar6);
          *(float *)(puVar32 + 1) = fVar4;
          p0.z = (float)((int)p0.z + 1);
          p1.z = (float)puVar30;
        } while ((int)p0.z < 4);
        p0.z = 0.0;
        while (uVar33 = 3 - (int)p0.z, uVar33 < *(uint *)(iVar21 + 0xc)) {
          uVar31 = *(undefined8 *)(iVar21 + 0x10 + uVar33 * 0xc);
          fVar4 = *(float *)(iVar21 + 0x18 + uVar33 * 0xc);
          p1.y = (float)uVar31;
          p1.z = (float)((ulonglong)uVar31 >> 0x20);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar31 = CONCAT44(p1.z,p1.y);
          }
          a_04.z = fVar4;
          a_04.x = (float)(int)uVar31;
          a_04.y = (float)(int)((ulonglong)uVar31 >> 0x20);
          b_00.z = fVar1;
          b_00.x = (float)uVar15;
          b_00.y = SUB84(uVar15,4);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffffb4,a_04,b_00,(MethodInfo *)0x0);
          uVar34 = pVVar3->x;
          uVar35 = pVVar3->y;
          fVar4 = pVVar3->z;
          p1.y = (float)uVar34;
          p1.z = (float)uVar35;
          puVar30 = (undefined8 *)func_?();
          p0.z = (float)((int)p0.z + 1);
          *puVar30 = CONCAT44(p1.z,p1.y);
          *(float *)(puVar30 + 1) = fVar4;
          if (3 < (int)p0.z) {
            if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
               (Mesh *mesh,Vector3__Array *corners,bool insideOut,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (mesh != (Mesh *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertexCount
                      (mesh,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      this = (List_1_VoxelHit_ *)func_?(TypeInfo__System__Collections__Generic__List<int>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                ((List_1_UnityEngine_Vector4_ *)this,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
    }
    else {
      collection = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                             (mesh,(MethodInfo *)0x0);
      this = (List_1_VoxelHit_ *)func_?(TypeInfo__System__Collections__Generic__List<int>);
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
                (this,(IEnumerable_1_VoxelHit_ *)collection,
                 MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                );
    }
    collection_00 =
         UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv(mesh,(MethodInfo *)0x0);
    pLStack_2 = (List_1_VoxelHit_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (pLStack_2,(IEnumerable_1_VoxelHit_ *)collection_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
              );
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                       (mesh,(MethodInfo *)0x0);
    pLVar4 = (List_1_VoxelHit_ *)
             func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    pLStack_5 = pLVar4;
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (pLVar4,(IEnumerable_1_VoxelHit_ *)pVVar3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
              );
    if (pLVar4 != (List_1_VoxelHit_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                         );
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pVVar3 = SharedCubeFunctions_GetVertices_1(corners,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                (pLVar4,(IEnumerable_1_VoxelHit_ *)pVVar3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                );
      puStack_7 = (undefined *)0x0;
      pOVar6 = (Object *)((int)&pOVar6->klass + 2);
      do {
        if (insideOut == 0) {
          if (this == (List_1_VoxelHit_ *)0x0) break;
          item = (Object *)((int)(pOVar6 + 0xffffffff) + 6);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)item,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)((int)&pOVar6->klass + 1),
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pOVar6,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pOVar6,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(int)(pOVar6 + 0xffffffff) + 7,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        }
        else {
          if (this == (List_1_VoxelHit_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pOVar6,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)((int)&pOVar6->klass + 1),
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(int)(pOVar6 + 0xffffffff) + 6U,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(int)(pOVar6 + 0xffffffff) + 6U,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,(int)(pOVar6 + 0xffffffff) + 7,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          item = pOVar6;
        }
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)item,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        VStack_8.x = 0.0;
        VStack_8.y = 0.0;
        func_?();
        pLVar4 = pLStack_2;
        if (pLStack_2 == (List_1_VoxelHit_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__Add
                  ((List_1_UnityEngine_Vector2_ *)pLStack_2,VStack_8,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  );
        VStack_9.x = 0.0;
        VStack_9.y = 0.0;
        func_?(&VStack_9,0x3f800000,0);
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__Add
                  ((List_1_UnityEngine_Vector2_ *)pLVar4,VStack_9,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  );
        VStack_9 = (Vector2)((ulonglong)VStack_9 & 0xffffffff00000000);
        func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__Add
                  ((List_1_UnityEngine_Vector2_ *)pLVar4,(Vector2)0x3f8000003f800000,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  );
        pLStack_5 = (List_1_VoxelHit_ *)0x0;
        VStack_8.x = 0.0;
        VStack_8.y = 1.0;
        VStack_9.y = (float)&stack0xffffffd0;
        VStack_9.x = (float)&UNK_?;
        func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__Add
                  ((List_1_UnityEngine_Vector2_ *)pLVar4,(Vector2)0x0,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  );
        puStack_7 = puStack_7 + 1;
        pOVar6 = (Object *)&pOVar6->monitor;
        if (5 < (int)puStack_7) {
          pVVar10 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                   List_1_VoxelHit__ToArray
                             (pLStack_5,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                             );
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                    ((Mesh *)0x0,(Vector3__Array *)pVVar10,(MethodInfo *)0x0);
          pVVar10 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                   List_1_VoxelHit__ToArray
                             (pLStack_2,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                             );
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                    ((Mesh *)0x0,(Vector2__Array *)pVVar10,(MethodInfo *)0x0);
          pVVar10 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                   List_1_VoxelHit__ToArray
                             (this,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                    ((Mesh *)0x0,(Int32__Array *)pVVar10,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                    ((Mesh *)0x0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                    ((Mesh *)0x0,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
               (Mesh *mesh,Vector3__Array *corners,float diagonalWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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

Dictionary_2_MV_WorldObject_IntVector_Cube_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_CreateFromBytePackage
          (BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__Dictionary__
            );
  if (bp != (BytePacker *)0x0) {
    iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (bp,(MethodInfo *)0x0);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        iVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        iVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        uVar7 = 0;
        func_?(&stack0xffffffdc,iVar4,iVar5,iVar6);
        byteFlags = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                              (bp,(MethodInfo *)0x0);
        this = (Cube *)func_?(TypeInfo__Cube);
        Cube::Cube__ctor_1(this,bp,byteFlags,(MethodInfo *)0x0);
        if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)0x0) goto code_?;
        key.z = 0;
        key.x = (short)uVar7;
        key.y = (short)(uVar7 >> 0x10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__set_Item
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,key,(Object *)this
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__set_Item_MV__WorldObject__IntVector__Cube_
                  );
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

IntVector Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IntVector cubePos,int32_t chunkSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  sVar2 = 0;
  func_?(&stack0xfffffff4,CONCAT22(in_stack_3,cubePos.z),
                  CONCAT22((undefined2)chunkSize,in_stack_3),chunkSize,0);
  sVar4 = (short)uVar1;
  iVar5 = (int)method / 2;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  sVar6 = (short)((uint)uVar1 >> 0x10);
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
            (((float)(int)sVar4 + (float)iVar5) / (float)(int)method,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
            (((float)(int)sVar6 + (float)iVar5) / (float)(int)method,(MethodInfo *)0x0);
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

Nullable_1_UnityEngine_Bounds_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
          (Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,Transform *transform,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffe4c;
  puVar5 = &stack0xfffffe4c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)transform,
                      UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                     );
    EStack_6.fields._current = 0;
    EStack_6.fields._17_3_ = 0;
    EStack_6.fields._8_8_ = 0;
    EStack_6.klass = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
    EStack_6.monitor = (MonitorData *)0x0;
    EStack_6.fields.source = (IEnumerable *)0x0;
    EStack_6.fields.__s_59___0 = (IEnumerator *)0x0;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar43 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar43 != 0) {
      if (this == (MVInteractableBase *)0x0) goto code_?;
      bVar43 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                        ((Renderer *)this,(MethodInfo *)0x0);
      if (bVar43 != 0) {
        pBVar44 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                            ((Bounds *)&stack0xfffffe58,(Renderer *)this,(MethodInfo *)0x0);
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
        EStack_6.klass =
             (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)
             EStack_7.fields.___source;
        EStack_6.monitor = pMStack_45;
        EStack_6.fields.source = pIStack_46;
        EStack_6.fields.__s_59___0 = pIStack_47;
        EStack_6.fields._8_8_ = uStack_49;
      }
    }
    pIVar50 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                        (transform,(MethodInfo *)0x0);
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
        if (((pTVar53->klass->_1).naturalAligment < bVar54) ||
           ((pTVar53->klass->_1).typeHierarchy[bVar54 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
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
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pNVar56 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                          (&NStack_57,transform_00,(MethodInfo *)0x0);
      EStack_7.klass =
           (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)
           (pNVar56->value).m_Center.x;
      EStack_7.monitor = (MonitorData *)(pNVar56->value).m_Center.y;
      EStack_7.fields.source = (IEnumerable *)(pNVar56->value).m_Center.z;
      EStack_7.fields.__s_59___0 = (IEnumerator *)(pNVar56->value).m_Extents.x;
      EStack_7.fields._8_4_ = (pNVar56->value).m_Extents.y;
      EStack_7.fields._PC = (int32_t)(pNVar56->value).m_Extents.z;
      EStack_7.fields._current = pNVar56->has_value;
      EStack_7.fields._17_3_ = *(undefined3 *)&pNVar56->field_0x19;
      uVar58 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Byte]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                        (&EStack_6,
                         MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
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
        uVar58 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Byte]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                          (&EStack_7,
                           MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
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
          pVVar66 = MathFunctions::MathFunctions_GetMaxVector
                              ((Vector3 *)&stack0xfffffe64,max0,*pVVar66,(MethodInfo *)0x0);
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
          VStack_68.z = (float)
                         MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_
          ;
          NStack_57.value.m_Extents.y = 0.0;
          NStack_57.value.m_Extents.z = 0.0;
          VStack_68.x = (float)uStack_12;
          VStack_68.y = (float)((ulonglong)uStack_12 >> 0x20);
          func_?();
          EStack_6.klass =
               (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)
               NStack_57.value.m_Center.x;
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

Nullable_1_UnityEngine_Bounds_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively_1
          (Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,List_1_MVWorldObjectClient_ *wos,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  pLStack_8 = this;
  if (wos != (List_1_MVWorldObjectClient_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,
                        (List_1_UnityEngine_Color32_ *)wos,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
    CStack_6.monitor = (MonitorData *)pLVar9->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
    uStack_1 = 0;
    while( true ) {
      NStack_11.value.m_Center.y =
           (float)
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      NStack_11.value.m_Center.x = (float)&CStack_6;
      cVar12 = func_?();
      if (cVar12 == '\0') {
        *puStack_7 = 0x45;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                       );
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        pNVar13 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2
                            (&NStack_11,(List_1_UnityEngine_Transform_ *)this,(MethodInfo *)0x0);
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
      this_00 = (PrefabPool *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                          );
      if ((this_00 == (PrefabPool *)0x0) ||
         (item = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0),
         this == (List_1_UnityEngine_Vector4_ *)0x0)) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                );
    }
  }
  func_?();
  func_?(0,0,0);
  pcVar19 = (code *)swi(3);
  pNVar13 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar19)();
  return pNVar13;
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
  EStack_4.fields.___source = (IEnumerable *)&stack0xfffffe48;
  pIVar5 = (IEnumerable *)&stack0xfffffe48;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    pLVar44 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_45,
                        (List_1_UnityEngine_Color32_ *)transforms,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar44->l;
    CStack_7.monitor = (MonitorData *)pLVar44->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar44->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar44->current).rgba;
    uStack_1 = 0;
    while (cVar46 = func_?(), cVar46 != '\0') {
      transform = (Transform *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_7,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__get_Current__
                            );
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pNVar47 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                         (&NStack_48,transform,(MethodInfo *)0x0);
      auStack_6._0_4_ = (pNVar47->value).m_Center.x;
      auStack_6._4_4_ = (pNVar47->value).m_Center.y;
      auStack_6._8_4_ = (pNVar47->value).m_Center.z;
      auStack_6._12_4_ = (pNVar47->value).m_Extents.x;
      auStack_6._16_4_ = (pNVar47->value).m_Extents.y;
      auStack_6._20_4_ = (pNVar47->value).m_Extents.z;
      auStack_6[0x18] = pNVar47->has_value;
      auStack_6._25_3_ = *(undefined3 *)&pNVar47->field_0x19;
      uVar49 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Byte]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                        (&EStack_4,
                         MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
      if (uVar49 == 0) {
        EStack_4.fields._16_4_ = auStack_6._24_4_;
        EStack_4.klass =
             (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)auStack_6._0_4_;
        EStack_4.monitor = (MonitorData *)auStack_6._4_4_;
        EStack_4.fields.source = (IEnumerable *)auStack_6._8_4_;
        EStack_4.fields.__s_59___0 = (IEnumerator *)auStack_6._12_4_;
        EStack_4.fields._element___1 = auStack_6[0x10];
        EStack_4.fields._9_3_ = auStack_6._17_3_;
        EStack_4.fields._PC = auStack_6._20_4_;
      }
      else {
        uVar49 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Byte]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                          ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)auStack_6,
                           MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
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
          MathFunctions::MathFunctions_GetMinVector
                    ((Vector3 *)&stack0xfffffe6c,min0,*pVVar53,(MethodInfo *)0x0);
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
          MathFunctions::MathFunctions_GetMaxVector
                    ((Vector3 *)(auStack_45 + 4),max0,*pVVar53,(MethodInfo *)0x0);
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
          EStack_4.klass =
               (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)
               NStack_48.value.m_Center.x;
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
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__
                   );
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

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,Vector3 worldPosition,Quaternion rotation,
                    float gridSize,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&uStack_1,0,0x40);
  func_?(&stack0xffffff70,0,0x40);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  point.y = scale.y;
  point.x = scale.x;
  point.z = scale.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_3,rotation,point,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar2->x;
  uVar4._4_4_ = pVVar2->y;
  fVar5 = pVVar2->z;
  scale.y = (float)(undefined4)uVar4;
  scale.z = (float)uVar4._4_4_;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
    uVar4 = CONCAT44(scale.z,scale.y);
  }
  a.z = fVar5;
  a.x = (float)(int)uVar4;
  a.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&scale,a,0.5,(MethodInfo *)0x0);
  VStack_3.y = pVVar2->x;
  VStack_3.z = pVVar2->y;
  fVar5 = pVVar2->z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     (&scale,(MethodInfo *)0x0);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffff64,*pVVar2,gridSize,(MethodInfo *)0x0);
  uVar6._0_4_ = pVVar2->x;
  uVar6._4_4_ = pVVar2->y;
  fVar7 = pVVar2->z;
  scale.y = (float)(undefined4)uVar6;
  scale.z = (float)uVar6._4_4_;
  if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
    func_?();
    uVar6 = CONCAT44(scale.z,scale.y);
  }
  pos.z = fVar5;
  pos.x = VStack_3.y;
  pos.y = VStack_3.z;
  s.z = fVar7;
  s.x = (float)(int)uVar6;
  s.y = (float)(int)((ulonglong)uVar6 >> 0x20);
  pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&puStack_9,pos,rotation,s,(MethodInfo *)0x0);
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

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners_1
          (Bounds bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&bounds,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  puVar1 = (undefined8 *)func_?(auStack_5,&bounds,0);
  uStack_6 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners_2
          (Vector3 min,Vector3 max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetTriangleVertices
          (int32_t triangleIndex,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                     (gameObject,
                      UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                     );
    if ((pVVar1 == (Vector3__Array *)0x0) || (this == (UseInteractorHandler *)0x0))
    goto code_?;
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                       ((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices(pMVar2,(MethodInfo *)0x0);
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                       ((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                        (pMVar2,(MethodInfo *)0x0);
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
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                       ((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                        (pMVar2,(MethodInfo *)0x0);
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                       ((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                        (pMVar2,(MethodInfo *)0x0);
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
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                       ((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                        (pMVar2,(MethodInfo *)0x0);
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                       ((MeshFilter *)this,(MethodInfo *)0x0);
    if (pMVar2 == (Mesh *)0x0) goto code_?;
    pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                        (pMVar2,(MethodInfo *)0x0);
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

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pVVar1 = SharedCubeFunctions_GetCorners((MethodInfo *)0x0);
  pVVar1 = SharedCubeFunctions_GetVertices_1(pVVar1,(MethodInfo *)0x0);
  return pVVar1;
}


/* Vector3[] GetVertices(Vector3[]) */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices_1
          (Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_VoxelHit_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
            (this,(IEnumerable_1_VoxelHit_ *)corners,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
            );
  if (this != (List_1_VoxelHit_ *)0x0) {
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                       );
    return (Vector3__Array *)pVVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector3__Array *)(*pcVar3)();
  return pVVar4;
}


/* Void GetVertices(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices_2
               (CubePickingInfo *info,GameObject *gameObject,MethodInfo *method)

{
  pCVar1 = info;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  iVector.z = iVar8;
  iVector._0_4_ = pVStack_7;
  pVStack_7 = Cube::Cube_GetEdgeVerticesWorld
                        (gameObject,cube,(Face__Enum)uStack_6._4_4_,edge,iVector,(MethodInfo *)0x0)
  ;
  pVVar9 = Cube::Cube_GetEdge((info->fields).cube,(info->fields).pickedFace,
                              (info->fields).pickedEdge,(MethodInfo *)0x0);
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
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
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
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_15,a,b,(MethodInfo *)0x0);
      uStack_2._0_4_ = pVVar14->x;
      uStack_2._4_4_ = pVVar14->y;
      fStack_3 = pVVar14->z;
      fVar16 = (float10)func_?((short)&uStack_2,0);
      uStack_6 = CONCAT44((float)fVar16,(undefined4)uStack_6);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      VStack_15.z = 0.0;
      VStack_15.x = 0.0;
      VStack_15.y = 0.0;
      iVar17 = 0;
      info = (CubePickingInfo *)0x0;
      do {
        if ((gameObject == (GameObject *)0x0) ||
           (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (gameObject,(MethodInfo *)0x0), this == (Transform *)0x0))
        goto code_?;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           (&VStack_12,this,(MethodInfo *)0x0);
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
      uStack_6 = CONCAT44(((float)info / _UNK_?) * _UNK_? * uStack_6._4_4_,
                           (undefined4)uStack_6);
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
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
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
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           (&VStack_22,a_00,b_00,(MethodInfo *)0x0);
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

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                    (Vector3 *__return_storage_ptr__,List_1_UnityEngine_Transform_ *transforms,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pNVar9 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2
                     ((Nullable_1_UnityEngine_Bounds_ *)auStack_10,transforms,(MethodInfo *)0x0);
  pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)
               (pNVar9->value).m_Center.x;
  pMStack_2 = (MonitorData *)(pNVar9->value).m_Center.y;
  pIStack_3 = (IEnumerable *)(pNVar9->value).m_Center.z;
  uVar11 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]
          ::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)&pEStack_1,
                     MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
  if (uVar11 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_13,(MethodInfo *)0x0);
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

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1
                    (Vector3 *__return_storage_ptr__,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pNVar9 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                     ((Nullable_1_UnityEngine_Bounds_ *)auStack_10,transform,(MethodInfo *)0x0);
  pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)
               (pNVar9->value).m_Center.x;
  pMStack_2 = (MonitorData *)(pNVar9->value).m_Center.y;
  pIStack_3 = (IEnumerable *)(pNVar9->value).m_Center.z;
  uVar11 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]
          ::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)&pEStack_1,
                     MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
  if (uVar11 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_13,(MethodInfo *)0x0);
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

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                    (Vector3 *__return_storage_ptr__,GameObject *gameObject,IntVector iVector,
                    MethodInfo *method)

{
  if (gameObject != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
    uStack_1 = 0;
    fStack_2 = 0.0;
    VStack_3.x = 0.0;
    func_?(&uStack_1,(float)(int)iVector.x,(float)(int)iVector.y,(float)(int)iVector.z);
    if (this != (Transform *)0x0) {
      position.z = fStack_2;
      position.x = (float)(undefined4)uStack_1;
      position.y = (float)uStack_1._4_4_;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         (&VStack_3,this,position,(MethodInfo *)0x0);
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
/* CubeOutOfBoundState MoveEdge(MVCubeModelBase, CubePickingInfo, Vector3, Single ByRef, Single
   ByRef, Single, Boolean ByRef, Boolean, Boolean, EditCubeChange ByRef) */

CubeOutOfBoundState__Enum
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_MoveEdge
          (MVCubeModelBase *cmb,CubePickingInfo *info,Vector3 mousePositionDelta,float *delta,
          float *deltaAccum,float mouseSensitivity,bool *edgeMoved,bool edgeIndex0,bool edgeIndex1,
          EditCubeChange__Enum *editCubeChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CStack_1 = CubeOutOfBoundState__Enum_WithinBounds;
  uStack_2 = 0;
  fStack_3 = 0.0;
  pCVar4 = info;
  unique0x100030d0 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
  if ((info == (CubePickingInfo *)0x0) ||
     (unaff_EDI = cmb, unique0x100030d8 = (double)CONCAT44(fStack_5,auStack_6._4_4_),
     cmb == (MVCubeModelBase *)0x0)) goto code_?;
  a_04 = MVCubeModelBase::MVCubeModelBase_GetCube(cmb,(info->fields).iLocalPos,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                     ((CubeBase *)a_04,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    return CubeOutOfBoundState__Enum_WithinBounds;
  }
  CStack_1 = CubeOutOfBoundState__Enum_NoChange;
  this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                      ((DayNightCycle *)cmb,(MethodInfo *)0x0);
  fStack_8 = (float)(info->fields).pickedFace;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(fStack_8) {
  case 0.0:
  case 1.4013e-45:
    if (this_00 == (CelestialParam *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)this_00,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        (&VStack_11,pTVar9,(MethodInfo *)0x0);
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
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)this_00,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        (&VStack_11,pTVar9,(MethodInfo *)0x0);
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
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)this_00,(MethodInfo *)0x0);
    unique0x10003118 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        (&VStack_11,pTVar9,(MethodInfo *)0x0);
    fVar14 = pVVar10->x;
    uVar17 = pVVar10->y;
    fStack_5 = pVVar10->z;
    auStack_6._0_4_ = fVar14;
    auStack_6._4_4_ = uVar17;
    break;
  default:
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Break((MethodInfo *)0x0);
    fVar14 = 0.0;
  }
  puVar18 = (undefined8 *)(*(code *)(cmb->klass->vtable).get_Scale.method)(auStack_6,cmb);
  VStack_11.z = *(float *)(puVar18 + 1);
  VStack_11.x = (float)*puVar18;
  VStack_11.y = (float)((ulonglong)*puVar18 >> 0x20);
  puVar18 = (undefined8 *)
            (*(code *)(cmb->klass->vtable).get_Scale.method)
                      (&fStack_19,(short)cmb,(cmb->klass->vtable).set_Scale.methodPtr);
  fStack_5 = *(float *)(puVar18 + 1);
  auStack_6._0_4_ = (undefined4)*puVar18;
  auStack_6._4_4_ = (undefined4)((ulonglong)*puVar18 >> 0x20);
  puVar18 = (undefined8 *)
            (*(code *)(cmb->klass->vtable).get_Scale.method)
                      (&fStack_20,cmb,(cmb->klass->vtable).set_Scale.methodPtr);
  fStack_21 = *(float *)(puVar18 + 1);
  fStack_19 = (float)*puVar18;
  fStack_22 = (float)((ulonglong)*puVar18 >> 0x20);
  fVar14 = (fVar14 * _UNK_?) /
          (((float)auStack_6._4_4_ + VStack_11.x + fStack_21) / _UNK_?);
  pMVar23 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)cmb,(MethodInfo *)0x0);
  unique0x100030e0 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
  if (pMVar23 != (MVPointLightObject *)0x0) {
    pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                        ((Matrix4x4 *)&stack0xfffffef8,(Transform *)pMVar23,(MethodInfo *)0x0);
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
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    pVVar10 = Cube::Cube_GetFaceAxis((Vector3 *)auStack_6,(Face__Enum)fStack_8,(MethodInfo *)0x0);
    uVar33._0_4_ = pVVar10->x;
    uVar33._4_4_ = pVVar10->y;
    fStack_8 = pVVar10->z;
    fStack_22 = (float)(undefined4)uVar33;
    fStack_21 = (float)uVar33._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector4);
      uVar33 = CONCAT44(fStack_21,fStack_22);
    }
    v.z = fStack_8;
    v.x = (float)(int)uVar33;
    v.y = (float)(int)((ulonglong)uVar33 >> 0x20);
    pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit
                        ((Vector4 *)auStack_35,v,(MethodInfo *)0x0);
    auStack_35._0_4_ = pVVar34->x;
    auStack_35._4_4_ = pVVar34->y;
    fStack_36 = pVVar34->z;
    fStack_37 = pVVar34->w;
    if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
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
    pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                        ((Vector4 *)&CStack_32,lhs,vector,(MethodInfo *)0x0);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1
                        ((Vector3 *)auStack_6,*pVVar34,(MethodInfo *)0x0);
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
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
      uVar38 = CONCAT44(fStack_21,fStack_22);
    }
    a.z = fStack_39;
    a.x = (float)(int)uVar38;
    a.y = (float)(int)((ulonglong)uVar38 >> 0x20);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)auStack_6,a,fStack_8,(MethodInfo *)0x0);
    a_00.z = fVar28;
    a_00.x = (float)(undefined4)uStack_27;
    a_00.y = uStack_27._4_4_;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_11,a_00,*pVVar10,(MethodInfo *)0x0);
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
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)(auStack_35 + 4),*pVVar10,b,(MethodInfo *)0x0);
    uVar42 = pVVar10->x;
    uVar43 = pVVar10->y;
    fStack_39 = pVVar10->z;
    VStack_11.y = (float)uVar42;
    VStack_11.z = (float)uVar43;
    pCVar44 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_magenta
                        (&CStack_32,(MethodInfo *)0x0);
    CStack_32.r = pCVar44->r;
    CStack_32.g = pCVar44->g;
    CStack_32.b = pCVar44->b;
    CStack_32.a = pCVar44->a;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
              (start,end,color,(MethodInfo *)0x0);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                        ((Vector3 *)(auStack_35 + 4),(MethodInfo *)0x0);
    a_01.y = fStack_21;
    a_01.x = fStack_22;
    a_01.z = fVar28;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)(auStack_35 + 4),a_01,*pVVar10,(MethodInfo *)0x0);
    uVar45 = pVVar10->x;
    uVar46 = pVVar10->y;
    fVar28 = pVVar10->z;
    auStack_6._4_4_ = uVar45;
    fStack_5 = (float)uVar46;
    pCVar44 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_magenta
                        (&CStack_32,(MethodInfo *)0x0);
    end_00.y = fStack_5;
    end_00.x = (float)auStack_6._4_4_;
    start_00.y = fStack_21;
    start_00.x = fStack_22;
    start_00.z = fStack_8;
    end_00.z = fVar28;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
              (start_00,end_00,*pCVar44,(MethodInfo *)0x0);
    pCVar47 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    a_02.y = fStack_21;
    a_02.x = fStack_22;
    a_02.z = fStack_8;
    b_00.z = fStack_3;
    b_00.x = (float)(undefined4)uStack_2;
    b_00.y = (float)uStack_2._4_4_;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)(auStack_35 + 4),a_02,b_00,(MethodInfo *)0x0);
    pCVar4 = (CubePickingInfo *)0x0;
    unique0x100030e8 = (double)CONCAT44(fStack_5,auStack_6._4_4_);
    if (pCVar47 != (Camera *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                          ((Vector3 *)(auStack_35 + 4),pCVar47,*pVVar10,(MethodInfo *)0x0);
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
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            ((Vector3 *)(auStack_35 + 4),pCVar47,position,(MethodInfo *)0x0);
        a_03.y = fStack_5;
        a_03.x = (float)auStack_6._4_4_;
        a_03.z = (float)pCVar4;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                  ((Vector3 *)(auStack_35 + 4),a_03,*pVVar10,(MethodInfo *)0x0);
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
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          lhs_03.y = fStack_5;
          lhs_03.x = (float)auStack_6._4_4_;
          lhs_03.z = fVar28;
          fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                             (lhs_03,mousePositionDelta,(MethodInfo *)0x0);
          uStack_27 = CONCAT44(fVar28,(undefined4)uStack_27);
          fVar50 = (float10)func_?();
          fStack_39 = (float)fVar50;
          fStack_8 = (uStack_27._4_4_ / fStack_39) * _UNK_? + *delta;
          *delta = fStack_8;
        }
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        if ((float)(double)CONCAT44((uint)((ulonglong)(double)fStack_8 >> 0x20) & _UNK_?,
                                    SUB84((double)fStack_8,0) & _UNK_?) < fVar14) {
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
          pMVar23 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                              ((PrefabPool *)cmb,(MethodInfo *)0x0);
          pCVar4 = (CubePickingInfo *)delta;
          if (pMVar23 != (MVPointLightObject *)0x0) {
            pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_worldToLocalMatrix
                                ((Matrix4x4 *)&stack0xfffffef8,(Transform *)pMVar23,
                                 (MethodInfo *)0x0);
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
            if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
              func_?();
              uVar33 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            v_00.z = fVar28;
            v_00.x = (float)(int)uVar33;
            v_00.y = (float)(int)((ulonglong)uVar33 >> 0x20);
            pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit
                                ((Vector4 *)&CStack_32,v_00,(MethodInfo *)0x0);
            CStack_32.r = pVVar34->x;
            CStack_32.g = pVVar34->y;
            CStack_32.b = pVVar34->z;
            CStack_32.a = pVVar34->w;
            if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
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
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                      ((Vector4 *)&CStack_32,lhs_00,vector_00,(MethodInfo *)0x0);
            pVVar34 = (Vector4 *)func_?();
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1
                                ((Vector3 *)(auStack_35 + 4),*pVVar34,(MethodInfo *)0x0);
            uVar53._0_4_ = pVVar10->x;
            uVar53._4_4_ = pVVar10->y;
            fVar28 = pVVar10->z;
            auStack_6._4_4_ = (undefined4)uVar53;
            fStack_5 = (float)uVar53._4_4_;
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
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
          pMVar23 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                              ((PrefabPool *)cmb,(MethodInfo *)0x0);
          pCVar4 = (CubePickingInfo *)delta;
          if (pMVar23 != (MVPointLightObject *)0x0) {
            pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_worldToLocalMatrix
                                ((Matrix4x4 *)&stack0xfffffef8,(Transform *)pMVar23,
                                 (MethodInfo *)0x0);
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
            if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
              func_?();
              uVar33 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            v_01.z = fVar28;
            v_01.x = (float)(int)uVar33;
            v_01.y = (float)(int)((ulonglong)uVar33 >> 0x20);
            pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit
                                ((Vector4 *)&CStack_32,v_01,(MethodInfo *)0x0);
            CStack_32.r = pVVar34->x;
            CStack_32.g = pVVar34->y;
            CStack_32.b = pVVar34->z;
            CStack_32.a = pVVar34->w;
            if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
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
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                      ((Vector4 *)&CStack_32,lhs_01,vector_01,(MethodInfo *)0x0);
            pVVar34 = (Vector4 *)func_?();
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1
                                ((Vector3 *)(auStack_35 + 4),*pVVar34,(MethodInfo *)0x0);
            uVar55._0_4_ = pVVar10->x;
            uVar55._4_4_ = pVVar10->y;
            fVar28 = pVVar10->z;
            auStack_6._4_4_ = (undefined4)uVar55;
            fStack_5 = (float)uVar55._4_4_;
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
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
          pMVar23 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                              ((PrefabPool *)cmb,(MethodInfo *)0x0);
          pCVar4 = (CubePickingInfo *)delta;
          if (pMVar23 != (MVPointLightObject *)0x0) {
            pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_worldToLocalMatrix
                                ((Matrix4x4 *)&stack0xfffffef8,(Transform *)pMVar23,
                                 (MethodInfo *)0x0);
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
            if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
              func_?();
              uVar33 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            v_02.z = fVar28;
            v_02.x = (float)(int)uVar33;
            v_02.y = (float)(int)((ulonglong)uVar33 >> 0x20);
            pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit
                                ((Vector4 *)&CStack_32,v_02,(MethodInfo *)0x0);
            CStack_32.r = pVVar34->x;
            CStack_32.g = pVVar34->y;
            CStack_32.b = pVVar34->z;
            CStack_32.a = pVVar34->w;
            if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
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
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                      ((Vector4 *)&CStack_32,lhs_02,vector_02,(MethodInfo *)0x0);
            pVVar34 = (Vector4 *)func_?();
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1
                                ((Vector3 *)(auStack_35 + 4),*pVVar34,(MethodInfo *)0x0);
            uVar56._0_4_ = pVVar10->x;
            uVar56._4_4_ = pVVar10->y;
            fVar28 = pVVar10->z;
            auStack_6._4_4_ = (undefined4)uVar56;
            fStack_5 = (float)uVar56._4_4_;
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
              func_?();
              uVar56 = CONCAT44(fStack_5,auStack_6._4_4_);
            }
            axis.z = fVar28;
            axis.x = (float)(int)uVar56;
            axis.y = (float)(int)((ulonglong)uVar56 >> 0x20);
            Cube::Cube_MoveVertex
                      (info,fVar14,axis,edgeIndex0,edgeIndex1,&CStack_1,(MethodInfo *)0x0);
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
  *(char *)(iVar58 + -0x75) =
       *(char *)(iVar58 + -0x75) + (char)((ulonglong)uVar33 >> 0x20) +
       (CARRY1(bVar60,unaff_BH) || CARRY1(bVar61 + unaff_BH,bVar59));
  in((short)((ulonglong)uVar33 >> 0x20));
  this = *(GameObject **)(iVar58 + 8);
  *(undefined8 *)(iVar58 + -0x10) = 0;
  pMVar62 = (MVCubeModelBase *)0x0;
  *(undefined4 *)(iVar58 + -8) = 0;
  *(undefined4 *)(iVar58 + -4) = 0;
  while (this != (GameObject *)0x0) {
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) break;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)(iVar58 + -0x1c),pTVar9,(MethodInfo *)0x0);
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

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor
                (GameObject *gameObject,MethodInfo *method)

{
  uStack_1 = 0;
  iVar2 = 0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  while (gameObject != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
    if (this == (Transform *)0x0) break;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_6,this,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar5->x;
    uStack_1._4_4_ = pVVar5->y;
    fStack_3 = pVVar5->z;
    fVar7 = (float10)func_?(&uStack_1,iVar2,0);
    iVar2 = iVar2 + 1;
    fStack_4 = (float)(fVar7 + (float10)fStack_4);
    if (2 < iVar2) {
      return fStack_4 / _UNK_?;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  fVar7 = (float10)(*pcVar8)();
  return (float)fVar7;
}


/* Single ScaleFactor(GameObject, Face) */

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor_1
                (GameObject *gameObject,Face__Enum face,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  switch(face) {
  case Face__Enum_Top:
  case Face__Enum_Bottom:
    if ((gameObject != (GameObject *)0x0) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (gameObject,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      uVar5 = pVVar4->y;
      return (float)uVar5;
    }
    break;
  case Face__Enum_Front:
  case Face__Enum_Back:
    if ((gameObject != (GameObject *)0x0) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (gameObject,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      return pVVar4->z;
    }
    break;
  case Face__Enum_Left:
  case Face__Enum_Right:
    if ((gameObject != (GameObject *)0x0) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (gameObject,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      uVar6 = pVVar4->x;
      return (float)uVar6;
    }
    break;
  default:
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    func_?();
    if ((undefined1)face == Face__Enum_Top) {
      if (gameObject == (GameObject *)0x0) goto code_?;
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)gameObject,in_stack_15);
      goto code_?;
    }
    if ((gameObject == (GameObject *)0x0) ||
       (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)gameObject,in_stack_15),
       pGVar14 == (GameObject *)0x0)) goto code_?;
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       (pGVar14,method_00);
    iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    if (iVar16 == iVar17) {
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)gameObject,(MethodInfo *)0x0);
      layerName = StringLiteral_CamRotateTarget;
      iVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
      goto joined_?;
    }
    layerName = (String *)gameObject;
    pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)gameObject,(MethodInfo *)0x0);
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       (pGVar14,pMVar1);
    uVar8 = ZEXT48(StringLiteral_Logic);
    pMVar1 = (MethodInfo *)&UNK_?;
    iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Logic,(MethodInfo *)0x0);
    if (iVar16 == iVar17) {
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)gameObject,(MethodInfo *)0x0);
      layerName = StringLiteral_LogicSelected;
      goto code_?;
    }
    pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)gameObject,(MethodInfo *)0x0);
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       (pGVar14,method);
    face = (Face__Enum)StringLiteral_Player;
    FVar18 = face;
    face._0_1_ = SUB41(StringLiteral_Player,0);
    iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Player,(MethodInfo *)0x0);
    if (iVar16 == iVar17) {
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)gameObject,(MethodInfo *)0x0);
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
      unaff_EDI->klass =
           (String__Class *)
           ((int)unaff_EDI->klass << (extraout_CL & 0x1f) |
           (uint)unaff_EDI->klass >> 0x20 - (extraout_CL & 0x1f));
    }
code_?:
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       (pGVar14,(MethodInfo *)0x0);
    iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (iVar16 == iVar17) {
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)gameObject,(MethodInfo *)0x0);
      pMVar1 = (MethodInfo *)0x0;
      layerName = StringLiteral_Default;
    }
    else {
      layerName = (String *)gameObject;
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)gameObject,(MethodInfo *)0x0);
      if (pGVar14 == (GameObject *)0x0) goto code_?;
      iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                         (pGVar14,(MethodInfo *)0x0);
      uVar8 = ZEXT48(StringLiteral_LogicSelected);
      pMVar1 = (MethodInfo *)&UNK_?;
      iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_LogicSelected,(MethodInfo *)0x0);
      if (iVar16 == iVar17) {
        pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)gameObject,(MethodInfo *)0x0);
      }
      else {
        pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)gameObject,(MethodInfo *)0x0);
        if (pGVar14 == (GameObject *)0x0) goto code_?;
        iVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                           (pGVar14,(MethodInfo *)0x0);
        face = (Face__Enum)StringLiteral_PlayerSelected;
        FVar18 = face;
        face._0_1_ = SUB41(StringLiteral_PlayerSelected,0);
        iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_PlayerSelected,(MethodInfo *)0x0);
        if (iVar16 != iVar17) goto code_?;
        pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)gameObject,(MethodInfo *)0x0);
        face = FVar18;
      }
    }
code_?:
    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (layerName,pMVar1);
joined_?:
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    uVar8 = CONCAT44(pGVar14,&UNK_?);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar14,iVar16,(MethodInfo *)0x0);
  }
code_?:
  pIVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                      ((Transform *)gameObject,(MethodInfo *)0x0);
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
      if (((pTVar3->klass->_1).naturalAligment < bVar12) ||
         ((pTVar3->klass->_1).typeHierarchy[bVar12 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
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
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
               (Transform *t,bool select,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pSVar1 = (String *)t;
  if (select == 0) {
    if ((t == (Transform *)0x0) ||
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)t,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
    goto code_?;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (pGVar2,(MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)t,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pSVar1 = StringLiteral_Default;
code_?:
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (pSVar1,method_00);
      goto joined_?;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)t,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (pGVar2,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&UNK_?;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_LogicSelected,(MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)t,(MethodInfo *)0x0);
      goto code_?;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)t,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (pGVar2,(MethodInfo *)0x0);
    _select = (undefined4 *)0x0;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_PlayerSelected,(MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)t,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    if ((t == (Transform *)0x0) ||
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)t,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
    goto code_?;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (pGVar2,(MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Default,(MethodInfo *)0x0);
    if (iVar3 != iVar4) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)t,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (pGVar2,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&UNK_?;
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      if (iVar3 == iVar4) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)t,(MethodInfo *)0x0);
      }
      else {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)t,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                          (pGVar2,(MethodInfo *)0x0);
        _select = (undefined4 *)0x0;
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Player,(MethodInfo *)0x0);
        if (iVar3 != iVar4) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)t,(MethodInfo *)0x0);
      }
      goto code_?;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)t,(MethodInfo *)0x0);
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
joined_?:
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar2,iVar3,(MethodInfo *)0x0);
  }
code_?:
  puVar5 = (undefined4 *)&UNK_?;
  pIVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                     (t,(MethodInfo *)0x0);
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
      if (((pTVar10->klass->_1).naturalAligment < bVar11) ||
         ((pTVar10->klass->_1).typeHierarchy[bVar11 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
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
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_WorldPosToValidGridPos
                    (Vector3 *__return_storage_ptr__,GameObject *gameObject,Vector3 worldPos,
                    int32_t cubeSegments,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  if (cubeSegments < 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_CubeSegments_is_at_least_1,(MethodInfo *)0x0);
  }
  dVar5 = mscorlib.dll::System::Math::Math_Round_4
                    ((double)(_UNK_? / (float)cubeSegments),2,(MethodInfo *)0x0);
  if (gameObject != (GameObject *)0x0) {
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         (&VStack_8,pTVar6,worldPos,(MethodInfo *)0x0);
      fStack_4 = pVVar7->z;
      uStack_1 = CONCAT44(fStack_4,fStack_4);
      uStack_3 = CONCAT44(&uStack_3,&UNK_?);
      fStack_2 = fStack_4;
      func_?();
      vector.z = fStack_2;
      vector.x = (float)(undefined4)uStack_1;
      vector.y = (float)uStack_1._4_4_;
      pVVar7 = MathFunctions::MathFunctions_FloorVector
                         ((Vector3 *)&stack0xffffffcc,vector,(MethodInfo *)0x0);
      VStack_8.y = pVVar7->x;
      VStack_8.z = pVVar7->y;
      fVar9 = pVVar7->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                         ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffcc,*pVVar7,0.5,(MethodInfo *)0x0);
      a.z = fVar9;
      a.x = VStack_8.y;
      a.y = VStack_8.z;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&stack0xffffffcc,a,*pVVar7,(MethodInfo *)0x0);
      iVar10 = 0;
      uStack_1._0_4_ = pVVar7->x;
      uStack_1._4_4_ = pVVar7->y;
      fStack_2 = pVVar7->z;
      do {
        fVar11 = (float10)func_?(&uStack_3,iVar10);
        fVar12 = (float10)func_?(&uStack_1,iVar10,0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                  ((float)((float10)(float)fVar11 - fVar12) / (float)dVar5,(MethodInfo *)0x0);
        func_?(&uStack_1,iVar10);
        func_?(&uStack_1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 3);
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        position.z = fStack_2;
        position.x = (float)(undefined4)uStack_1;
        position.y = (float)uStack_1._4_4_;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                           ((Vector3 *)&stack0xffffffcc,pTVar6,position,(MethodInfo *)0x0);
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
        MathFunctions::MathFunctions_RoundVector
                  ((Vector3 *)&stack0xffffffe4,*pVVar1,0,(MethodInfo *)0x0);
      }
      else {
        MathFunctions::MathFunctions_FloorVector
                  ((Vector3 *)&stack0xffffffe4,*pVVar1,(MethodInfo *)0x0);
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

/* decompilation failed: Exception while decompiling 102c7f50: process: timeout */


/* IntVector get_CubeConstraint() */

IntVector Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraint
                    (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pSVar1 = TypeInfo__SharedCubeFunctions->static_fields;
  uVar2 = (pSVar1->constraint).x;
  uVar3 = (pSVar1->constraint).y;
  sVar4 = (pSVar1->constraint).z;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,(float)(int)(short)uVar2,(float)(int)(short)uVar3,
                  (float)(int)sVar4,0);
  return __return_storage_ptr__;
}

