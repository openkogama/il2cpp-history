
/* Mesh CreateBox(Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::BoxMesh::BoxMesh_CreateBox(float width,float height,float depth,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_554B713EB1AF9570FCF56A42668A8BD9B94F382B30A05C94E61995332F88FF45_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (((width < 0.0001) || (height < 0.0001)) || (depth < 0.0001)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * 0.5;
  fVar2 = height * 0.5;
  fVar3 = depth * 0.5;
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x18);
  fVar4 = -fVar1;
  uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
  fVar6 = -fVar3;
  if (value == (Vector3__Array *)0x0) goto code_?;
  if (value->max_length != 0) {
    value->vector[0].x = (float)(int)uVar5;
    value->vector[0].y = (float)(int)(uVar5 >> 0x20);
    value->vector[0].z = fVar6;
    if (1 < value->max_length) {
      value->vector[1].x = fVar4;
      value->vector[1].y = fVar2;
      value->vector[1].z = fVar6;
      if (2 < value->max_length) {
        value->vector[2].x = fVar1;
        value->vector[2].y = fVar2;
        value->vector[2].z = fVar6;
        uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
        if (3 < value->max_length) {
          value->vector[3].x = (float)(int)uVar5;
          value->vector[3].y = (float)(int)(uVar5 >> 0x20);
          value->vector[3].z = fVar6;
          uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
          if (4 < value->max_length) {
            value->vector[4].x = (float)(int)uVar5;
            value->vector[4].y = (float)(int)(uVar5 >> 0x20);
            value->vector[4].z = fVar3;
            if (5 < value->max_length) {
              value->vector[5].x = fVar1;
              value->vector[5].y = fVar2;
              value->vector[5].z = fVar3;
              if (6 < value->max_length) {
                value->vector[6].x = fVar4;
                value->vector[6].y = fVar2;
                value->vector[6].z = fVar3;
                uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                if (7 < value->max_length) {
                  value->vector[7].x = (float)(int)uVar5;
                  value->vector[7].y = (float)(int)(uVar5 >> 0x20);
                  value->vector[7].z = fVar3;
                  if (8 < value->max_length) {
                    value->vector[8].x = fVar4;
                    value->vector[8].y = fVar2;
                    value->vector[8].z = fVar6;
                    if (9 < value->max_length) {
                      value->vector[9].x = fVar4;
                      value->vector[9].y = fVar2;
                      value->vector[9].z = fVar3;
                      if (10 < value->max_length) {
                        value->vector[10].x = fVar1;
                        value->vector[10].y = fVar2;
                        value->vector[10].z = fVar3;
                        if (0xb < value->max_length) {
                          value->vector[0xb].x = fVar1;
                          value->vector[0xb].y = fVar2;
                          value->vector[0xb].z = fVar6;
                          uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                          if (0xc < value->max_length) {
                            value->vector[0xc].x = (float)(int)uVar5;
                            value->vector[0xc].y = (float)(int)(uVar5 >> 0x20);
                            value->vector[0xc].z = fVar6;
                            uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                            if (0xd < value->max_length) {
                              value->vector[0xd].x = (float)(int)uVar5;
                              value->vector[0xd].y = (float)(int)(uVar5 >> 0x20);
                              value->vector[0xd].z = fVar3;
                              uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                              if (0xe < value->max_length) {
                                value->vector[0xe].x = (float)(int)uVar5;
                                value->vector[0xe].y = (float)(int)(uVar5 >> 0x20);
                                value->vector[0xe].z = fVar3;
                                uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                if (0xf < value->max_length) {
                                  value->vector[0xf].x = (float)(int)uVar5;
                                  value->vector[0xf].y = (float)(int)(uVar5 >> 0x20);
                                  value->vector[0xf].z = fVar6;
                                  uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                  if (0x10 < value->max_length) {
                                    value->vector[0x10].x = (float)(int)uVar5;
                                    value->vector[0x10].y = (float)(int)(uVar5 >> 0x20);
                                    value->vector[0x10].z = fVar3;
                                    if (0x11 < value->max_length) {
                                      value->vector[0x11].x = fVar4;
                                      value->vector[0x11].y = fVar2;
                                      value->vector[0x11].z = fVar3;
                                      if (0x12 < value->max_length) {
                                        value->vector[0x12].x = fVar4;
                                        value->vector[0x12].y = fVar2;
                                        value->vector[0x12].z = fVar6;
                                        uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                        if (0x13 < value->max_length) {
                                          value->vector[0x13].x = (float)(int)uVar5;
                                          value->vector[0x13].y = (float)(int)(uVar5 >> 0x20);
                                          value->vector[0x13].z = fVar6;
                                          uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                                          if (0x14 < value->max_length) {
                                            value->vector[0x14].x = (float)(int)uVar5;
                                            value->vector[0x14].y = (float)(int)(uVar5 >> 0x20);
                                            value->vector[0x14].z = fVar6;
                                            if (0x15 < value->max_length) {
                                              value->vector[0x15].x = fVar1;
                                              value->vector[0x15].y = fVar2;
                                              value->vector[0x15].z = fVar6;
                                              if (0x16 < value->max_length) {
                                                value->vector[0x16].x = fVar1;
                                                value->vector[0x16].y = fVar2;
                                                value->vector[0x16].z = fVar3;
                                                uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                                                if (0x17 < value->max_length) {
                                                  value->vector[0x17].x = (float)(int)uVar5;
                                                  value->vector[0x17].y = (float)(int)(uVar5 >> 0x20);
                                                  value->vector[0x17].z = fVar3;
                                                  value_00 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x18);
                                                  pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                  uVar5._0_4_ = pVVar7->x;
                                                  uVar5._4_4_ = pVVar7->y;
                                                  fVar1 = pVVar7->z;
                                                  if (value_00 == (Vector3__Array *)0x0) goto code_?;
                                                  if (value_00->max_length != 0) {
                                                    value_00->vector[0].x = (float)(int)(uVar5 ^ 0x8000000080000000);
                                                    value_00->vector[0].y = (float)(int)((uVar5 ^ 0x8000000080000000) >> 0x20);
                                                    value_00->vector[0].z = -fVar1;
                                                    pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                    uVar8._0_4_ = pVVar7->x;
                                                    uVar8._4_4_ = pVVar7->y;
                                                    fVar1 = pVVar7->z;
                                                    if (1 < value_00->max_length) {
                                                      value_00->vector[1].x = (float)(int)(uVar8 ^ 0x8000000080000000);
                                                      value_00->vector[1].y = (float)(int)((uVar8 ^ 0x8000000080000000) >> 0x20);
                                                      value_00->vector[1].z = -fVar1;
                                                      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                      uVar9._0_4_ = pVVar7->x;
                                                      uVar9._4_4_ = pVVar7->y;
                                                      fVar1 = pVVar7->z;
                                                      if (2 < value_00->max_length) {
                                                        value_00->vector[2].x = (float)(int)(uVar9 ^ 0x8000000080000000);
                                                        value_00->vector[2].y = (float)(int)((uVar9 ^ 0x8000000080000000) >> 0x20);
                                                        value_00->vector[2].z = -fVar1;
                                                        pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                        uVar10._0_4_ = pVVar7->x;
                                                        uVar10._4_4_ = pVVar7->y;
                                                        fVar1 = pVVar7->z;
                                                        if (3 < value_00->max_length) {
                                                          value_00->vector[3].x = (float)(int)(uVar10 ^ 0x8000000080000000);
                                                          value_00->vector[3].y = (float)(int)((uVar10 ^ 0x8000000080000000) >> 0x20);
                                                          value_00->vector[3].z = -fVar1;
                                                          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                          fVar2 = pVVar7->y;
                                                          fVar1 = pVVar7->z;
                                                          if (4 < value_00->max_length) {
                                                            value_00->vector[4].x = pVVar7->x;
                                                            value_00->vector[4].y = fVar2;
                                                            value_00->vector[4].z = fVar1;
                                                            pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                            fVar2 = pVVar7->y;
                                                            fVar1 = pVVar7->z;
                                                            if (5 < value_00->max_length) {
                                                              value_00->vector[5].x = pVVar7->x;
                                                              value_00->vector[5].y = fVar2;
                                                              value_00->vector[5].z = fVar1;
                                                              pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                              fVar2 = pVVar7->y;
                                                              fVar1 = pVVar7->z;
                                                              if (6 < value_00->max_length) {
                                                                value_00->vector[6].x = pVVar7->x;
                                                                value_00->vector[6].y = fVar2;
                                                                value_00->vector[6].z = fVar1;
                                                                pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                fVar2 = pVVar7->y;
                                                                fVar1 = pVVar7->z;
                                                                if (7 < value_00->max_length) {
                                                                  value_00->vector[7].x = pVVar7->x;
                                                                  value_00->vector[7].y = fVar2;
                                                                  value_00->vector[7].z = fVar1;
                                                                  pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                  fVar2 = pVVar7->y;
                                                                  fVar1 = pVVar7->z;
                                                                  if (8 < value_00->max_length) {
                                                                    value_00->vector[8].x = pVVar7->x;
                                                                    value_00->vector[8].y = fVar2;
                                                                    value_00->vector[8].z = fVar1;
                                                                    pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                    fVar2 = pVVar7->y;
                                                                    fVar1 = pVVar7->z;
                                                                    if (9 < value_00->max_length) {
                                                                      value_00->vector[9].x = pVVar7->x;
                                                                      value_00->vector[9].y = fVar2;
                                                                      value_00->vector[9].z = fVar1;
                                                                      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                      fVar2 = pVVar7->y;
                                                                      fVar1 = pVVar7->z;
                                                                      if (10 < value_00->max_length) {
                                                                        value_00->vector[10].x = pVVar7->x;
                                                                        value_00->vector[10].y = fVar2;
                                                                        value_00->vector[10].z = fVar1;
                                                                        pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                        fVar2 = pVVar7->y;
                                                                        fVar1 = pVVar7->z;
                                                                        if (0xb < value_00->max_length) {
                                                                          value_00->vector[0xb].x = pVVar7->x;
                                                                          value_00->vector[0xb].y = fVar2;
                                                                          value_00->vector[0xb].z = fVar1;
                                                                          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                          uVar11._0_4_ = pVVar7->x;
                                                                          uVar11._4_4_ = pVVar7->y;
                                                                          fVar1 = pVVar7->z;
                                                                          if (0xc < value_00->max_length) {
                                                                            value_00->vector[0xc].x = (float)(int)(uVar11 ^ 0x8000000080000000);
                                                                            value_00->vector[0xc].y = (float)(int)((uVar11 ^ 0x8000000080000000) >> 0x20);
                                                                            value_00->vector[0xc].z = -fVar1;
                                                                            pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                            uVar12._0_4_ = pVVar7->x;
                                                                            uVar12._4_4_ = pVVar7->y;
                                                                            fVar1 = pVVar7->z;
                                                                            if (0xd < value_00->max_length) {
                                                                              value_00->vector[0xd].x = (float)(int)(uVar12 ^ 0x8000000080000000);
                                                                              value_00->vector[0xd].y = (float)(int)((uVar12 ^ 0x8000000080000000) >> 0x20);
                                                                              value_00->vector[0xd].z = -fVar1;
                                                                              pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                              uVar13._0_4_ = pVVar7->x;
                                                                              uVar13._4_4_ = pVVar7->y;
                                                                              fVar1 = pVVar7->z;
                                                                              if (0xe < value_00->max_length) {
                                                                                value_00->vector[0xe].x = (float)(int)(uVar13 ^ 0x8000000080000000);
                                                                                value_00->vector[0xe].y = (float)(int)((uVar13 ^ 0x8000000080000000) >> 0x20);
                                                                                value_00->vector[0xe].z = -fVar1;
                                                                                pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                uVar14._0_4_ = pVVar7->x;
                                                                                uVar14._4_4_ = pVVar7->y;
                                                                                fVar1 = pVVar7->z;
                                                                                if (0xf < value_00->max_length) {
                                                                                  value_00->vector[0xf].x = (float)(int)(uVar14 ^ 0x8000000080000000);
                                                                                  value_00->vector[0xf].y = (float)(int)((uVar14 ^ 0x8000000080000000) >> 0x20);
                                                                                  value_00->vector[0xf].z = -fVar1;
                                                                                  pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                  uVar15._0_4_ = pVVar7->x;
                                                                                  uVar15._4_4_ = pVVar7->y;
                                                                                  fVar1 = pVVar7->z;
                                                                                  if (0x10 < value_00->max_length) {
                                                                                    value_00->vector[0x10].x = (float)(int)(uVar15 ^ 0x8000000080000000);
                                                                                    value_00->vector[0x10].y = (float)(int)((uVar15 ^ 0x8000000080000000) >> 0x20);
                                                                                    value_00->vector[0x10].z = -fVar1;
                                                                                    pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                    uVar16._0_4_ = pVVar7->x;
                                                                                    uVar16._4_4_ = pVVar7->y;
                                                                                    fVar1 = pVVar7->z;
                                                                                    if (0x11 < value_00->max_length) {
                                                                                      value_00->vector[0x11].x = (float)(int)(uVar16 ^ 0x8000000080000000);
                                                                                      value_00->vector[0x11].y = (float)(int)((uVar16 ^ 0x8000000080000000) >> 0x20);
                                                                                      value_00->vector[0x11].z = -fVar1;
                                                                                      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                      uVar17._0_4_ = pVVar7->x;
                                                                                      uVar17._4_4_ = pVVar7->y;
                                                                                      fVar1 = pVVar7->z;
                                                                                      if (0x12 < value_00->max_length) {
                                                                                        value_00->vector[0x12].x = (float)(int)(uVar17 ^ 0x8000000080000000);
                                                                                        value_00->vector[0x12].y = (float)(int)((uVar17 ^ 0x8000000080000000) >> 0x20);
                                                                                        value_00->vector[0x12].z = -fVar1;
                                                                                        pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                        uVar18._0_4_ = pVVar7->x;
                                                                                        uVar18._4_4_ = pVVar7->y;
                                                                                        fVar1 = pVVar7->z;
                                                                                        if (0x13 < value_00->max_length) {
                                                                                          value_00->vector[0x13].x = (float)(int)(uVar18 ^ 0x8000000080000000);
                                                                                          value_00->vector[0x13].y = (float)(int)((uVar18 ^ 0x8000000080000000) >> 0x20);
                                                                                          value_00->vector[0x13].z = -fVar1;
                                                                                          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                                          fVar2 = pVVar7->y;
                                                                                          fVar1 = pVVar7->z;
                                                                                          if (0x14 < value_00->max_length) {
                                                                                            value_00->vector[0x14].x = pVVar7->x;
                                                                                            value_00->vector[0x14].y = fVar2;
                                                                                            value_00->vector[0x14].z = fVar1;
                                                                                            pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                                            fVar2 = pVVar7->y;
                                                                                            fVar1 = pVVar7->z;
                                                                                            if (0x15 < value_00->max_length) {
                                                                                              value_00->vector[0x15].x = pVVar7->x;
                                                                                              value_00->vector[0x15].y = fVar2;
                                                                                              value_00->vector[0x15].z = fVar1;
                                                                                              pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                                              fVar2 = pVVar7->y;
                                                                                              fVar1 = pVVar7->z;
                                                                                              if (0x16 < value_00->max_length) {
                                                                                                value_00->vector[0x16].x = pVVar7->x;
                                                                                                value_00->vector[0x16].y = fVar2;
                                                                                                value_00->vector[0x16].z = fVar1;
                                                                                                pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                                                fVar2 = pVVar7->y;
                                                                                                fVar1 = pVVar7->z;
                                                                                                if (0x17 < value_00->max_length) {
                                                                                                  value_00->vector[0x17].x = pVVar7->x;
                                                                                                  value_00->vector[0x17].y = fVar2;
                                                                                                  value_00->vector[0x17].z = fVar1;
                                                                                                  indices = (Int32__Array *)func_?();
                                                                                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__554B713EB1AF9570FCF56A42668A8BD9B94F382B30A05C94E61995332F88FF45_Field,(MethodInfo *)0x0);
                                                                                                  pMVar19 = (Mesh *)func_?();
                                                                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar19,(MethodInfo *)0x0);
                                                                                                  if (pMVar19 != (Mesh *)0x0) {
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar19,value,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar19,value_00,(MethodInfo *)0x0);
                                                                                                    fillValue.g = (float)&UNK_?;
                                                                                                    fillValue.r = (float)&stack0xffffffe0;
                                                                                                    fillValue.b = (float)&stack0xffffffe0;
                                                                                                    fillValue.a = (float)&UNK_?;
                                                                                                    value_01 = ColorEx::ColorEx_GetFilledColorArray(0x18,fillValue,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar19,value_01,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar19,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar19,0,(MethodInfo *)0x0);
                                                                                                    return pMVar19;
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
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  pMVar19 = (Mesh *)(*pcVar20)();
  return pMVar19;
}


/* Mesh CreateWireBox(Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::BoxMesh::BoxMesh_CreateWireBox(float width,float height,float depth,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&AE6CD589EA34634A4BBCC7D20EE4FD5E07A3E0FB552F0766309FCF026FEAB6E2_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (((width < 0.0001) || (height < 0.0001)) || (depth < 0.0001)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * 0.5;
  fVar2 = height * 0.5;
  fVar3 = depth * 0.5;
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x18);
  fVar4 = -fVar1;
  uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
  fVar6 = -fVar3;
  if (value == (Vector3__Array *)0x0) goto code_?;
  if (value->max_length != 0) {
    value->vector[0].x = (float)(int)uVar5;
    value->vector[0].y = (float)(int)(uVar5 >> 0x20);
    value->vector[0].z = fVar6;
    if (1 < value->max_length) {
      value->vector[1].x = fVar4;
      value->vector[1].y = fVar2;
      value->vector[1].z = fVar6;
      if (2 < value->max_length) {
        value->vector[2].x = fVar1;
        value->vector[2].y = fVar2;
        value->vector[2].z = fVar6;
        uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
        if (3 < value->max_length) {
          value->vector[3].x = (float)(int)uVar5;
          value->vector[3].y = (float)(int)(uVar5 >> 0x20);
          value->vector[3].z = fVar6;
          uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
          if (4 < value->max_length) {
            value->vector[4].x = (float)(int)uVar5;
            value->vector[4].y = (float)(int)(uVar5 >> 0x20);
            value->vector[4].z = fVar3;
            if (5 < value->max_length) {
              value->vector[5].x = fVar1;
              value->vector[5].y = fVar2;
              value->vector[5].z = fVar3;
              if (6 < value->max_length) {
                value->vector[6].x = fVar4;
                value->vector[6].y = fVar2;
                value->vector[6].z = fVar3;
                uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                if (7 < value->max_length) {
                  value->vector[7].x = (float)(int)uVar5;
                  value->vector[7].y = (float)(int)(uVar5 >> 0x20);
                  value->vector[7].z = fVar3;
                  if (8 < value->max_length) {
                    value->vector[8].x = fVar4;
                    value->vector[8].y = fVar2;
                    value->vector[8].z = fVar6;
                    if (9 < value->max_length) {
                      value->vector[9].x = fVar4;
                      value->vector[9].y = fVar2;
                      value->vector[9].z = fVar3;
                      if (10 < value->max_length) {
                        value->vector[10].x = fVar1;
                        value->vector[10].y = fVar2;
                        value->vector[10].z = fVar3;
                        if (0xb < value->max_length) {
                          value->vector[0xb].x = fVar1;
                          value->vector[0xb].y = fVar2;
                          value->vector[0xb].z = fVar6;
                          uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                          if (0xc < value->max_length) {
                            value->vector[0xc].x = (float)(int)uVar5;
                            value->vector[0xc].y = (float)(int)(uVar5 >> 0x20);
                            value->vector[0xc].z = fVar6;
                            uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                            if (0xd < value->max_length) {
                              value->vector[0xd].x = (float)(int)uVar5;
                              value->vector[0xd].y = (float)(int)(uVar5 >> 0x20);
                              value->vector[0xd].z = fVar3;
                              uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                              if (0xe < value->max_length) {
                                value->vector[0xe].x = (float)(int)uVar5;
                                value->vector[0xe].y = (float)(int)(uVar5 >> 0x20);
                                value->vector[0xe].z = fVar3;
                                uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                if (0xf < value->max_length) {
                                  value->vector[0xf].x = (float)(int)uVar5;
                                  value->vector[0xf].y = (float)(int)(uVar5 >> 0x20);
                                  value->vector[0xf].z = fVar6;
                                  uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                  if (0x10 < value->max_length) {
                                    value->vector[0x10].x = (float)(int)uVar5;
                                    value->vector[0x10].y = (float)(int)(uVar5 >> 0x20);
                                    value->vector[0x10].z = fVar3;
                                    if (0x11 < value->max_length) {
                                      value->vector[0x11].x = fVar4;
                                      value->vector[0x11].y = fVar2;
                                      value->vector[0x11].z = fVar3;
                                      if (0x12 < value->max_length) {
                                        value->vector[0x12].x = fVar4;
                                        value->vector[0x12].y = fVar2;
                                        value->vector[0x12].z = fVar6;
                                        uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                        if (0x13 < value->max_length) {
                                          value->vector[0x13].x = (float)(int)uVar5;
                                          value->vector[0x13].y = (float)(int)(uVar5 >> 0x20);
                                          value->vector[0x13].z = fVar6;
                                          uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                                          if (0x14 < value->max_length) {
                                            value->vector[0x14].x = (float)(int)uVar5;
                                            value->vector[0x14].y = (float)(int)(uVar5 >> 0x20);
                                            value->vector[0x14].z = fVar6;
                                            if (0x15 < value->max_length) {
                                              value->vector[0x15].x = fVar1;
                                              value->vector[0x15].y = fVar2;
                                              value->vector[0x15].z = fVar6;
                                              if (0x16 < value->max_length) {
                                                value->vector[0x16].x = fVar1;
                                                value->vector[0x16].y = fVar2;
                                                value->vector[0x16].z = fVar3;
                                                uVar5 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                                                if (0x17 < value->max_length) {
                                                  value->vector[0x17].x = (float)(int)uVar5;
                                                  value->vector[0x17].y = (float)(int)(uVar5 >> 0x20);
                                                  value->vector[0x17].z = fVar3;
                                                  value_00 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x18);
                                                  pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                  uVar5._0_4_ = pVVar7->x;
                                                  uVar5._4_4_ = pVVar7->y;
                                                  fVar1 = pVVar7->z;
                                                  if (value_00 == (Vector3__Array *)0x0) goto code_?;
                                                  if (value_00->max_length != 0) {
                                                    value_00->vector[0].x = (float)(int)(uVar5 ^ 0x8000000080000000);
                                                    value_00->vector[0].y = (float)(int)((uVar5 ^ 0x8000000080000000) >> 0x20);
                                                    value_00->vector[0].z = -fVar1;
                                                    pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                    uVar8._0_4_ = pVVar7->x;
                                                    uVar8._4_4_ = pVVar7->y;
                                                    fVar1 = pVVar7->z;
                                                    if (1 < value_00->max_length) {
                                                      value_00->vector[1].x = (float)(int)(uVar8 ^ 0x8000000080000000);
                                                      value_00->vector[1].y = (float)(int)((uVar8 ^ 0x8000000080000000) >> 0x20);
                                                      value_00->vector[1].z = -fVar1;
                                                      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                      uVar9._0_4_ = pVVar7->x;
                                                      uVar9._4_4_ = pVVar7->y;
                                                      fVar1 = pVVar7->z;
                                                      if (2 < value_00->max_length) {
                                                        value_00->vector[2].x = (float)(int)(uVar9 ^ 0x8000000080000000);
                                                        value_00->vector[2].y = (float)(int)((uVar9 ^ 0x8000000080000000) >> 0x20);
                                                        value_00->vector[2].z = -fVar1;
                                                        pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                        uVar10._0_4_ = pVVar7->x;
                                                        uVar10._4_4_ = pVVar7->y;
                                                        fVar1 = pVVar7->z;
                                                        if (3 < value_00->max_length) {
                                                          value_00->vector[3].x = (float)(int)(uVar10 ^ 0x8000000080000000);
                                                          value_00->vector[3].y = (float)(int)((uVar10 ^ 0x8000000080000000) >> 0x20);
                                                          value_00->vector[3].z = -fVar1;
                                                          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                          fVar2 = pVVar7->y;
                                                          fVar1 = pVVar7->z;
                                                          if (4 < value_00->max_length) {
                                                            value_00->vector[4].x = pVVar7->x;
                                                            value_00->vector[4].y = fVar2;
                                                            value_00->vector[4].z = fVar1;
                                                            pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                            fVar2 = pVVar7->y;
                                                            fVar1 = pVVar7->z;
                                                            if (5 < value_00->max_length) {
                                                              value_00->vector[5].x = pVVar7->x;
                                                              value_00->vector[5].y = fVar2;
                                                              value_00->vector[5].z = fVar1;
                                                              pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                              fVar2 = pVVar7->y;
                                                              fVar1 = pVVar7->z;
                                                              if (6 < value_00->max_length) {
                                                                value_00->vector[6].x = pVVar7->x;
                                                                value_00->vector[6].y = fVar2;
                                                                value_00->vector[6].z = fVar1;
                                                                pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                fVar2 = pVVar7->y;
                                                                fVar1 = pVVar7->z;
                                                                if (7 < value_00->max_length) {
                                                                  value_00->vector[7].x = pVVar7->x;
                                                                  value_00->vector[7].y = fVar2;
                                                                  value_00->vector[7].z = fVar1;
                                                                  pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                  fVar2 = pVVar7->y;
                                                                  fVar1 = pVVar7->z;
                                                                  if (8 < value_00->max_length) {
                                                                    value_00->vector[8].x = pVVar7->x;
                                                                    value_00->vector[8].y = fVar2;
                                                                    value_00->vector[8].z = fVar1;
                                                                    pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                    fVar2 = pVVar7->y;
                                                                    fVar1 = pVVar7->z;
                                                                    if (9 < value_00->max_length) {
                                                                      value_00->vector[9].x = pVVar7->x;
                                                                      value_00->vector[9].y = fVar2;
                                                                      value_00->vector[9].z = fVar1;
                                                                      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                      fVar2 = pVVar7->y;
                                                                      fVar1 = pVVar7->z;
                                                                      if (10 < value_00->max_length) {
                                                                        value_00->vector[10].x = pVVar7->x;
                                                                        value_00->vector[10].y = fVar2;
                                                                        value_00->vector[10].z = fVar1;
                                                                        pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                        fVar2 = pVVar7->y;
                                                                        fVar1 = pVVar7->z;
                                                                        if (0xb < value_00->max_length) {
                                                                          value_00->vector[0xb].x = pVVar7->x;
                                                                          value_00->vector[0xb].y = fVar2;
                                                                          value_00->vector[0xb].z = fVar1;
                                                                          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                          uVar11._0_4_ = pVVar7->x;
                                                                          uVar11._4_4_ = pVVar7->y;
                                                                          fVar1 = pVVar7->z;
                                                                          if (0xc < value_00->max_length) {
                                                                            value_00->vector[0xc].x = (float)(int)(uVar11 ^ 0x8000000080000000);
                                                                            value_00->vector[0xc].y = (float)(int)((uVar11 ^ 0x8000000080000000) >> 0x20);
                                                                            value_00->vector[0xc].z = -fVar1;
                                                                            pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                            uVar12._0_4_ = pVVar7->x;
                                                                            uVar12._4_4_ = pVVar7->y;
                                                                            fVar1 = pVVar7->z;
                                                                            if (0xd < value_00->max_length) {
                                                                              value_00->vector[0xd].x = (float)(int)(uVar12 ^ 0x8000000080000000);
                                                                              value_00->vector[0xd].y = (float)(int)((uVar12 ^ 0x8000000080000000) >> 0x20);
                                                                              value_00->vector[0xd].z = -fVar1;
                                                                              pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                              uVar13._0_4_ = pVVar7->x;
                                                                              uVar13._4_4_ = pVVar7->y;
                                                                              fVar1 = pVVar7->z;
                                                                              if (0xe < value_00->max_length) {
                                                                                value_00->vector[0xe].x = (float)(int)(uVar13 ^ 0x8000000080000000);
                                                                                value_00->vector[0xe].y = (float)(int)((uVar13 ^ 0x8000000080000000) >> 0x20);
                                                                                value_00->vector[0xe].z = -fVar1;
                                                                                pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                uVar14._0_4_ = pVVar7->x;
                                                                                uVar14._4_4_ = pVVar7->y;
                                                                                fVar1 = pVVar7->z;
                                                                                if (0xf < value_00->max_length) {
                                                                                  value_00->vector[0xf].x = (float)(int)(uVar14 ^ 0x8000000080000000);
                                                                                  value_00->vector[0xf].y = (float)(int)((uVar14 ^ 0x8000000080000000) >> 0x20);
                                                                                  value_00->vector[0xf].z = -fVar1;
                                                                                  pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                  uVar15._0_4_ = pVVar7->x;
                                                                                  uVar15._4_4_ = pVVar7->y;
                                                                                  fVar1 = pVVar7->z;
                                                                                  if (0x10 < value_00->max_length) {
                                                                                    value_00->vector[0x10].x = (float)(int)(uVar15 ^ 0x8000000080000000);
                                                                                    value_00->vector[0x10].y = (float)(int)((uVar15 ^ 0x8000000080000000) >> 0x20);
                                                                                    value_00->vector[0x10].z = -fVar1;
                                                                                    pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                    uVar16._0_4_ = pVVar7->x;
                                                                                    uVar16._4_4_ = pVVar7->y;
                                                                                    fVar1 = pVVar7->z;
                                                                                    if (0x11 < value_00->max_length) {
                                                                                      value_00->vector[0x11].x = (float)(int)(uVar16 ^ 0x8000000080000000);
                                                                                      value_00->vector[0x11].y = (float)(int)((uVar16 ^ 0x8000000080000000) >> 0x20);
                                                                                      value_00->vector[0x11].z = -fVar1;
                                                                                      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                      uVar17._0_4_ = pVVar7->x;
                                                                                      uVar17._4_4_ = pVVar7->y;
                                                                                      fVar1 = pVVar7->z;
                                                                                      if (0x12 < value_00->max_length) {
                                                                                        value_00->vector[0x12].x = (float)(int)(uVar17 ^ 0x8000000080000000);
                                                                                        value_00->vector[0x12].y = (float)(int)((uVar17 ^ 0x8000000080000000) >> 0x20);
                                                                                        value_00->vector[0x12].z = -fVar1;
                                                                                        pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
                                                                                        uVar18._0_4_ = pVVar7->x;
                                                                                        uVar18._4_4_ = pVVar7->y;
                                                                                        fVar1 = pVVar7->z;
                                                                                        if (0x13 < value_00->max_length) {
                                                                                          value_00->vector[0x13].x = (float)(int)(uVar18 ^ 0x8000000080000000);
                                                                                          value_00->vector[0x13].y = (float)(int)((uVar18 ^ 0x8000000080000000) >> 0x20);
                                                                                          value_00->vector[0x13].z = -fVar1;
                                                                                          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                                          fVar2 = pVVar7->y;
                                                                                          fVar1 = pVVar7->z;
                                                                                          if (0x14 < value_00->max_length) {
                                                                                            value_00->vector[0x14].x = pVVar7->x;
                                                                                            value_00->vector[0x14].y = fVar2;
                                                                                            value_00->vector[0x14].z = fVar1;
                                                                                            pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                                            fVar2 = pVVar7->y;
                                                                                            fVar1 = pVVar7->z;
                                                                                            if (0x15 < value_00->max_length) {
                                                                                              value_00->vector[0x15].x = pVVar7->x;
                                                                                              value_00->vector[0x15].y = fVar2;
                                                                                              value_00->vector[0x15].z = fVar1;
                                                                                              pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                                              fVar2 = pVVar7->y;
                                                                                              fVar1 = pVVar7->z;
                                                                                              if (0x16 < value_00->max_length) {
                                                                                                value_00->vector[0x16].x = pVVar7->x;
                                                                                                value_00->vector[0x16].y = fVar2;
                                                                                                value_00->vector[0x16].z = fVar1;
                                                                                                pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
                                                                                                fVar2 = pVVar7->y;
                                                                                                fVar1 = pVVar7->z;
                                                                                                if (0x17 < value_00->max_length) {
                                                                                                  value_00->vector[0x17].x = pVVar7->x;
                                                                                                  value_00->vector[0x17].y = fVar2;
                                                                                                  value_00->vector[0x17].z = fVar1;
                                                                                                  indices = (Int32__Array *)func_?();
                                                                                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,_AE6CD589EA34634A4BBCC7D20EE4FD5E07A3E0FB552F0766309FCF026FEAB6E2_Field,(MethodInfo *)0x0);
                                                                                                  pMVar19 = (Mesh *)func_?();
                                                                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar19,(MethodInfo *)0x0);
                                                                                                  if (pMVar19 != (Mesh *)0x0) {
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar19,value,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar19,value_00,(MethodInfo *)0x0);
                                                                                                    fillValue.g = (float)&UNK_?;
                                                                                                    fillValue.r = (float)&stack0xffffffe0;
                                                                                                    fillValue.b = (float)&stack0xffffffe0;
                                                                                                    fillValue.a = (float)&UNK_?;
                                                                                                    value_01 = ColorEx::ColorEx_GetFilledColorArray(0x18,fillValue,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar19,value_01,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar19,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar19,0,(MethodInfo *)0x0);
                                                                                                    return pMVar19;
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
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  pMVar19 = (Mesh *)(*pcVar20)();
  return pMVar19;
}

