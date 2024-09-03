
/* Mesh CreateBox(Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::BoxMesh::BoxMesh_CreateBox
                 (float width,float height,float depth,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_554B713EB1AF9570FCF56A42668A8BD9B94F382B30A05C94E61995332F88FF45_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (((width < _UNK_?) || (height < _UNK_?)) || (depth < _UNK_?)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * _UNK_?;
  fVar2 = height * _UNK_?;
  fVar3 = depth * _UNK_?;
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x18);
  uVar4 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  uVar5 = (uint)fVar2 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  fVar6 = (float)((uint)fVar3 ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  if (value == (Vector3__Array *)0x0) goto code_?;
  if (value->max_length != 0) {
    value->vector[0].x =
         (float)((uint)fVar1 ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value->vector[0].y = (float)uVar5;
    value->vector[0].z = fVar6;
    if (1 < value->max_length) {
      value->vector[1].x = (float)((uint)fVar1 ^ uVar4);
      value->vector[1].y = fVar2;
      value->vector[1].z = (float)((uint)fVar3 ^ uVar4);
      if (2 < value->max_length) {
        value->vector[2].x = fVar1;
        value->vector[2].y = fVar2;
        value->vector[2].z = (float)((uint)fVar3 ^ uVar4);
        if (3 < value->max_length) {
          value->vector[3].x = fVar1;
          value->vector[3].y = (float)((uint)fVar2 ^ uVar4);
          value->vector[3].z = (float)((uint)fVar3 ^ uVar4);
          if (4 < value->max_length) {
            value->vector[4].x = fVar1;
            value->vector[4].y = (float)((uint)fVar2 ^ uVar4);
            value->vector[4].z = fVar3;
            if (5 < value->max_length) {
              value->vector[5].x = fVar1;
              value->vector[5].y = fVar2;
              value->vector[5].z = fVar3;
              if (6 < value->max_length) {
                value->vector[6].x = (float)((uint)fVar1 ^ uVar4);
                value->vector[6].y = fVar2;
                value->vector[6].z = fVar3;
                if (7 < value->max_length) {
                  value->vector[7].x = (float)((uint)fVar1 ^ uVar4);
                  value->vector[7].y = (float)((uint)fVar2 ^ uVar4);
                  value->vector[7].z = fVar3;
                  if (8 < value->max_length) {
                    value->vector[8].x = (float)((uint)fVar1 ^ uVar4);
                    value->vector[8].y = fVar2;
                    value->vector[8].z = (float)((uint)fVar3 ^ uVar4);
                    if (9 < value->max_length) {
                      value->vector[9].x = (float)((uint)fVar1 ^ uVar4);
                      value->vector[9].y = fVar2;
                      value->vector[9].z = fVar3;
                      if (10 < value->max_length) {
                        value->vector[10].x = fVar1;
                        value->vector[10].y = fVar2;
                        value->vector[10].z = fVar3;
                        if (0xb < value->max_length) {
                          value->vector[0xb].x = fVar1;
                          value->vector[0xb].y = fVar2;
                          value->vector[0xb].z = (float)((uint)fVar3 ^ uVar4);
                          if (0xc < value->max_length) {
                            value->vector[0xc].x = fVar1;
                            value->vector[0xc].y = (float)((uint)fVar2 ^ uVar4);
                            value->vector[0xc].z = (float)((uint)fVar3 ^ uVar4);
                            if (0xd < value->max_length) {
                              value->vector[0xd].x = fVar1;
                              value->vector[0xd].y = (float)((uint)fVar2 ^ uVar4);
                              value->vector[0xd].z = fVar3;
                              if (0xe < value->max_length) {
                                value->vector[0xe].x = (float)((uint)fVar1 ^ uVar4);
                                value->vector[0xe].y = (float)((uint)fVar2 ^ uVar4);
                                value->vector[0xe].z = fVar3;
                                if (0xf < value->max_length) {
                                  value->vector[0xf].x = (float)((uint)fVar1 ^ uVar4);
                                  value->vector[0xf].y = (float)((uint)fVar2 ^ uVar4);
                                  value->vector[0xf].z = (float)((uint)fVar3 ^ uVar4);
                                  if (0x10 < value->max_length) {
                                    value->vector[0x10].x = (float)((uint)fVar1 ^ uVar4);
                                    value->vector[0x10].y = (float)((uint)fVar2 ^ uVar4);
                                    value->vector[0x10].z = fVar3;
                                    if (0x11 < value->max_length) {
                                      value->vector[0x11].x = (float)((uint)fVar1 ^ uVar4);
                                      value->vector[0x11].y = fVar2;
                                      value->vector[0x11].z = fVar3;
                                      if (0x12 < value->max_length) {
                                        value->vector[0x12].x = (float)((uint)fVar1 ^ uVar4);
                                        value->vector[0x12].y = fVar2;
                                        value->vector[0x12].z = (float)((uint)fVar3 ^ uVar4);
                                        if (0x13 < value->max_length) {
                                          value->vector[0x13].x = (float)((uint)fVar1 ^ uVar4);
                                          value->vector[0x13].y = (float)((uint)fVar2 ^ uVar4);
                                          value->vector[0x13].z = (float)((uint)fVar3 ^ uVar4);
                                          if (0x14 < value->max_length) {
                                            value->vector[0x14].x = fVar1;
                                            value->vector[0x14].y = (float)((uint)fVar2 ^ uVar4);
                                            value->vector[0x14].z = (float)((uint)fVar3 ^ uVar4);
                                            if (0x15 < value->max_length) {
                                              value->vector[0x15].x = fVar1;
                                              value->vector[0x15].y = fVar2;
                                              value->vector[0x15].z = (float)((uint)fVar3 ^ uVar4)
                                              ;
                                              if (0x16 < value->max_length) {
                                                value->vector[0x16].x = fVar1;
                                                value->vector[0x16].y = fVar2;
                                                value->vector[0x16].z = fVar3;
                                                if (0x17 < value->max_length) {
                                                  value->vector[0x17].x = fVar1;
                                                  value->vector[0x17].y =
                                                       (float)((uint)fVar2 ^ uVar4);
                                                  value->vector[0x17].z = fVar3;
                                                  value_00 = (Vector3__Array *)
                                                             func_?(
                                                  TypeInfo__UnityEngine__Vector3,0x18);
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar8 = pVVar7->x;
                                                  uVar9 = pVVar7->y;
                                                  uVar4 = uVar9 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (value_00 == (Vector3__Array *)0x0)
                                                  goto code_?;
                                                  if (value_00->max_length != 0) {
                                                    value_00->vector[0].x =
                                                         (float)(uVar8 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0].y = (float)uVar4;
                                                  value_00->vector[0].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar10 = pVVar7->x;
                                                  uVar11 = pVVar7->y;
                                                  uVar4 = uVar11 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (1 < value_00->max_length) {
                                                    value_00->vector[1].x =
                                                         (float)(uVar10 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[1].y = (float)uVar4;
                                                  value_00->vector[1].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar12 = pVVar7->x;
                                                  uVar13 = pVVar7->y;
                                                  uVar4 = uVar13 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (2 < value_00->max_length) {
                                                    value_00->vector[2].x =
                                                         (float)(uVar12 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[2].y = (float)uVar4;
                                                  value_00->vector[2].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar14 = pVVar7->x;
                                                  uVar15 = pVVar7->y;
                                                  uVar4 = uVar15 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (3 < value_00->max_length) {
                                                    value_00->vector[3].x =
                                                         (float)(uVar14 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[3].y = (float)uVar4;
                                                  value_00->vector[3].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  fVar2 = pVVar7->y;
                                                  fVar6 = pVVar7->z;
                                                  if (4 < value_00->max_length) {
                                                    value_00->vector[4].x = pVVar7->x;
                                                    value_00->vector[4].y = fVar2;
                                                    value_00->vector[4].z = fVar6;
                                                    pVVar7 = TriangPrismShape3D::
                                                              TriangPrismShape3D_get_ModelLook
                                                                        ((Vector3 *)&stack0xffffffe0
                                                                         ,(MethodInfo *)0x0);
                                                    fVar2 = pVVar7->y;
                                                    fVar6 = pVVar7->z;
                                                    if (5 < value_00->max_length) {
                                                      value_00->vector[5].x = pVVar7->x;
                                                      value_00->vector[5].y = fVar2;
                                                      value_00->vector[5].z = fVar6;
                                                      pVVar7 = TriangPrismShape3D::
                                                                TriangPrismShape3D_get_ModelLook
                                                                          ((Vector3 *)
                                                                           &stack0xffffffe0,
                                                                           (MethodInfo *)0x0);
                                                      fVar2 = pVVar7->y;
                                                      fVar6 = pVVar7->z;
                                                      if (6 < value_00->max_length) {
                                                        value_00->vector[6].x = pVVar7->x;
                                                        value_00->vector[6].y = fVar2;
                                                        value_00->vector[6].z = fVar6;
                                                        pVVar7 = TriangPrismShape3D::
                                                                  TriangPrismShape3D_get_ModelLook
                                                                            ((Vector3 *)
                                                                             &stack0xffffffe0,
                                                                             (MethodInfo *)0x0);
                                                        fVar2 = pVVar7->y;
                                                        fVar6 = pVVar7->z;
                                                        if (7 < value_00->max_length) {
                                                          value_00->vector[7].x = pVVar7->x;
                                                          value_00->vector[7].y = fVar2;
                                                          value_00->vector[7].z = fVar6;
                                                          pVVar7 = TriangPrismShape3D::
                                                                    TriangPrismShape3D_get_ModelUp
                                                                              ((Vector3 *)
                                                                               &stack0xffffffe0,
                                                                               (MethodInfo *)0x0);
                                                          fVar2 = pVVar7->y;
                                                          fVar6 = pVVar7->z;
                                                          if (8 < value_00->max_length) {
                                                            value_00->vector[8].x = pVVar7->x;
                                                            value_00->vector[8].y = fVar2;
                                                            value_00->vector[8].z = fVar6;
                                                            pVVar7 = TriangPrismShape3D::
                                                                      TriangPrismShape3D_get_ModelUp
                                                                                ((Vector3 *)
                                                                                 &stack0xffffffe0,
                                                                                 (MethodInfo *)0x0);
                                                            fVar2 = pVVar7->y;
                                                            fVar6 = pVVar7->z;
                                                            if (9 < value_00->max_length) {
                                                              value_00->vector[9].x = pVVar7->x;
                                                              value_00->vector[9].y = fVar2;
                                                              value_00->vector[9].z = fVar6;
                                                              pVVar7 = TriangPrismShape3D::
                                                                                                                                                
                                                  TriangPrismShape3D_get_ModelUp
                                                            ((Vector3 *)&stack0xffffffe0,
                                                             (MethodInfo *)0x0);
                                                  fVar2 = pVVar7->y;
                                                  fVar6 = pVVar7->z;
                                                  if (10 < value_00->max_length) {
                                                    value_00->vector[10].x = pVVar7->x;
                                                    value_00->vector[10].y = fVar2;
                                                    value_00->vector[10].z = fVar6;
                                                    pVVar7 = TriangPrismShape3D::
                                                              TriangPrismShape3D_get_ModelUp
                                                                        ((Vector3 *)&stack0xffffffe0
                                                                         ,(MethodInfo *)0x0);
                                                    fVar2 = pVVar7->y;
                                                    fVar6 = pVVar7->z;
                                                    if (0xb < value_00->max_length) {
                                                      value_00->vector[0xb].x = pVVar7->x;
                                                      value_00->vector[0xb].y = fVar2;
                                                      value_00->vector[0xb].z = fVar6;
                                                      pVVar7 = TriangPrismShape3D::
                                                                TriangPrismShape3D_get_ModelUp
                                                                          ((Vector3 *)
                                                                           &stack0xffffffe0,
                                                                           (MethodInfo *)0x0);
                                                      uVar16 = pVVar7->x;
                                                      uVar17 = pVVar7->y;
                                                      uVar4 = uVar17 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0xc < value_00->max_length) {
                                                    value_00->vector[0xc].x =
                                                         (float)(uVar16 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0xc].y = (float)uVar4;
                                                  value_00->vector[0xc].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelUp
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar18 = pVVar7->x;
                                                  uVar19 = pVVar7->y;
                                                  uVar4 = uVar19 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0xd < value_00->max_length) {
                                                    value_00->vector[0xd].x =
                                                         (float)(uVar18 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0xd].y = (float)uVar4;
                                                  value_00->vector[0xd].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelUp
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar20 = pVVar7->x;
                                                  uVar21 = pVVar7->y;
                                                  uVar4 = uVar21 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0xe < value_00->max_length) {
                                                    value_00->vector[0xe].x =
                                                         (float)(uVar20 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0xe].y = (float)uVar4;
                                                  value_00->vector[0xe].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelUp
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar22 = pVVar7->x;
                                                  uVar23 = pVVar7->y;
                                                  uVar4 = uVar23 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0xf < value_00->max_length) {
                                                    value_00->vector[0xf].x =
                                                         (float)(uVar22 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0xf].y = (float)uVar4;
                                                  value_00->vector[0xf].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar24 = pVVar7->x;
                                                  uVar25 = pVVar7->y;
                                                  uVar4 = uVar25 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0x10 < value_00->max_length) {
                                                    value_00->vector[0x10].x =
                                                         (float)(uVar24 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0x10].y = (float)uVar4;
                                                  value_00->vector[0x10].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar26 = pVVar7->x;
                                                  uVar27 = pVVar7->y;
                                                  uVar4 = uVar27 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0x11 < value_00->max_length) {
                                                    value_00->vector[0x11].x =
                                                         (float)(uVar26 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0x11].y = (float)uVar4;
                                                  value_00->vector[0x11].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar28 = pVVar7->x;
                                                  uVar29 = pVVar7->y;
                                                  uVar4 = uVar29 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0x12 < value_00->max_length) {
                                                    value_00->vector[0x12].x =
                                                         (float)(uVar28 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0x12].y = (float)uVar4;
                                                  value_00->vector[0x12].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar30 = pVVar7->x;
                                                  uVar31 = pVVar7->y;
                                                  uVar4 = uVar31 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0x13 < value_00->max_length) {
                                                    value_00->vector[0x13].x =
                                                         (float)(uVar30 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0x13].y = (float)uVar4;
                                                  value_00->vector[0x13].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  fVar2 = pVVar7->y;
                                                  fVar6 = pVVar7->z;
                                                  if (0x14 < value_00->max_length) {
                                                    value_00->vector[0x14].x = pVVar7->x;
                                                    value_00->vector[0x14].y = fVar2;
                                                    value_00->vector[0x14].z = fVar6;
                                                    pVVar7 = TriangPrismShape3D::
                                                              TriangPrismShape3D_get_ModelRight
                                                                        ((Vector3 *)&stack0xffffffe0
                                                                         ,(MethodInfo *)0x0);
                                                    fVar2 = pVVar7->y;
                                                    fVar6 = pVVar7->z;
                                                    if (0x15 < value_00->max_length) {
                                                      value_00->vector[0x15].x = pVVar7->x;
                                                      value_00->vector[0x15].y = fVar2;
                                                      value_00->vector[0x15].z = fVar6;
                                                      pVVar7 = TriangPrismShape3D::
                                                                TriangPrismShape3D_get_ModelRight
                                                                          ((Vector3 *)
                                                                           &stack0xffffffe0,
                                                                           (MethodInfo *)0x0);
                                                      fVar2 = pVVar7->y;
                                                      fVar6 = pVVar7->z;
                                                      if (0x16 < value_00->max_length) {
                                                        value_00->vector[0x16].x = pVVar7->x;
                                                        value_00->vector[0x16].y = fVar2;
                                                        value_00->vector[0x16].z = fVar6;
                                                        pVVar7 = TriangPrismShape3D::
                                                                  TriangPrismShape3D_get_ModelRight
                                                                            ((Vector3 *)
                                                                             &stack0xffffffe0,
                                                                             (MethodInfo *)0x0);
                                                        fVar2 = pVVar7->y;
                                                        fVar6 = pVVar7->z;
                                                        if (0x17 < value_00->max_length) {
                                                          value_00->vector[0x17].x = pVVar7->x;
                                                          value_00->vector[0x17].y = fVar2;
                                                          value_00->vector[0x17].z = fVar6;
                                                          indices = (Int32__Array *)
                                                                    func_?();
                                                          mscorlib.dll::System::Runtime::
                                                          CompilerServices::RuntimeHelpers::
                                                          RuntimeHelpers_InitializeArray_1
                                                                    ((Array *)indices,
                                                                                                                                          
                                                  __554B713EB1AF9570FCF56A42668A8BD9B94F382B30A05C94E61995332F88FF45_Field
                                                  ,(MethodInfo *)0x0);
                                                  pMVar32 = (Mesh *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh__ctor(pMVar32,(MethodInfo *)0x0);
                                                  if (pMVar32 != (Mesh *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_vertices(pMVar32,value,
                                                                      (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_normals(pMVar32,value_00,
                                                                     (MethodInfo *)0x0);
                                                    fillValue.g = (float)&UNK_?;
                                                    fillValue.r = (float)&stack0xffffffe0;
                                                    fillValue.b = (float)&stack0xffffffe0;
                                                    fillValue.a = (float)&UNK_?;
                                                    value_01 = ColorEx::ColorEx_GetFilledColorArray
                                                                         (0x18,fillValue,
                                                                          (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_colors(pMVar32,value_01,
                                                                    (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_SetIndices(pMVar32,indices,
                                                                    MeshTopology__Enum_Triangles,0,
                                                                    (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_UploadMeshData(pMVar32,0,(MethodInfo *)0x0)
                                                    ;
                                                    return pMVar32;
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
  pcVar33 = (code *)swi(3);
  pMVar32 = (Mesh *)(*pcVar33)();
  return pMVar32;
}


/* Mesh CreateWireBox(Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::BoxMesh::BoxMesh_CreateWireBox
                 (float width,float height,float depth,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&AE6CD589EA34634A4BBCC7D20EE4FD5E07A3E0FB552F0766309FCF026FEAB6E2_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (((width < _UNK_?) || (height < _UNK_?)) || (depth < _UNK_?)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * _UNK_?;
  fVar2 = height * _UNK_?;
  fVar3 = depth * _UNK_?;
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x18);
  uVar4 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  uVar5 = (uint)fVar2 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  fVar6 = (float)((uint)fVar3 ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  if (value == (Vector3__Array *)0x0) goto code_?;
  if (value->max_length != 0) {
    value->vector[0].x =
         (float)((uint)fVar1 ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value->vector[0].y = (float)uVar5;
    value->vector[0].z = fVar6;
    if (1 < value->max_length) {
      value->vector[1].x = (float)((uint)fVar1 ^ uVar4);
      value->vector[1].y = fVar2;
      value->vector[1].z = (float)((uint)fVar3 ^ uVar4);
      if (2 < value->max_length) {
        value->vector[2].x = fVar1;
        value->vector[2].y = fVar2;
        value->vector[2].z = (float)((uint)fVar3 ^ uVar4);
        if (3 < value->max_length) {
          value->vector[3].x = fVar1;
          value->vector[3].y = (float)((uint)fVar2 ^ uVar4);
          value->vector[3].z = (float)((uint)fVar3 ^ uVar4);
          if (4 < value->max_length) {
            value->vector[4].x = fVar1;
            value->vector[4].y = (float)((uint)fVar2 ^ uVar4);
            value->vector[4].z = fVar3;
            if (5 < value->max_length) {
              value->vector[5].x = fVar1;
              value->vector[5].y = fVar2;
              value->vector[5].z = fVar3;
              if (6 < value->max_length) {
                value->vector[6].x = (float)((uint)fVar1 ^ uVar4);
                value->vector[6].y = fVar2;
                value->vector[6].z = fVar3;
                if (7 < value->max_length) {
                  value->vector[7].x = (float)((uint)fVar1 ^ uVar4);
                  value->vector[7].y = (float)((uint)fVar2 ^ uVar4);
                  value->vector[7].z = fVar3;
                  if (8 < value->max_length) {
                    value->vector[8].x = (float)((uint)fVar1 ^ uVar4);
                    value->vector[8].y = fVar2;
                    value->vector[8].z = (float)((uint)fVar3 ^ uVar4);
                    if (9 < value->max_length) {
                      value->vector[9].x = (float)((uint)fVar1 ^ uVar4);
                      value->vector[9].y = fVar2;
                      value->vector[9].z = fVar3;
                      if (10 < value->max_length) {
                        value->vector[10].x = fVar1;
                        value->vector[10].y = fVar2;
                        value->vector[10].z = fVar3;
                        if (0xb < value->max_length) {
                          value->vector[0xb].x = fVar1;
                          value->vector[0xb].y = fVar2;
                          value->vector[0xb].z = (float)((uint)fVar3 ^ uVar4);
                          if (0xc < value->max_length) {
                            value->vector[0xc].x = fVar1;
                            value->vector[0xc].y = (float)((uint)fVar2 ^ uVar4);
                            value->vector[0xc].z = (float)((uint)fVar3 ^ uVar4);
                            if (0xd < value->max_length) {
                              value->vector[0xd].x = fVar1;
                              value->vector[0xd].y = (float)((uint)fVar2 ^ uVar4);
                              value->vector[0xd].z = fVar3;
                              if (0xe < value->max_length) {
                                value->vector[0xe].x = (float)((uint)fVar1 ^ uVar4);
                                value->vector[0xe].y = (float)((uint)fVar2 ^ uVar4);
                                value->vector[0xe].z = fVar3;
                                if (0xf < value->max_length) {
                                  value->vector[0xf].x = (float)((uint)fVar1 ^ uVar4);
                                  value->vector[0xf].y = (float)((uint)fVar2 ^ uVar4);
                                  value->vector[0xf].z = (float)((uint)fVar3 ^ uVar4);
                                  if (0x10 < value->max_length) {
                                    value->vector[0x10].x = (float)((uint)fVar1 ^ uVar4);
                                    value->vector[0x10].y = (float)((uint)fVar2 ^ uVar4);
                                    value->vector[0x10].z = fVar3;
                                    if (0x11 < value->max_length) {
                                      value->vector[0x11].x = (float)((uint)fVar1 ^ uVar4);
                                      value->vector[0x11].y = fVar2;
                                      value->vector[0x11].z = fVar3;
                                      if (0x12 < value->max_length) {
                                        value->vector[0x12].x = (float)((uint)fVar1 ^ uVar4);
                                        value->vector[0x12].y = fVar2;
                                        value->vector[0x12].z = (float)((uint)fVar3 ^ uVar4);
                                        if (0x13 < value->max_length) {
                                          value->vector[0x13].x = (float)((uint)fVar1 ^ uVar4);
                                          value->vector[0x13].y = (float)((uint)fVar2 ^ uVar4);
                                          value->vector[0x13].z = (float)((uint)fVar3 ^ uVar4);
                                          if (0x14 < value->max_length) {
                                            value->vector[0x14].x = fVar1;
                                            value->vector[0x14].y = (float)((uint)fVar2 ^ uVar4);
                                            value->vector[0x14].z = (float)((uint)fVar3 ^ uVar4);
                                            if (0x15 < value->max_length) {
                                              value->vector[0x15].x = fVar1;
                                              value->vector[0x15].y = fVar2;
                                              value->vector[0x15].z = (float)((uint)fVar3 ^ uVar4)
                                              ;
                                              if (0x16 < value->max_length) {
                                                value->vector[0x16].x = fVar1;
                                                value->vector[0x16].y = fVar2;
                                                value->vector[0x16].z = fVar3;
                                                if (0x17 < value->max_length) {
                                                  value->vector[0x17].x = fVar1;
                                                  value->vector[0x17].y =
                                                       (float)((uint)fVar2 ^ uVar4);
                                                  value->vector[0x17].z = fVar3;
                                                  value_00 = (Vector3__Array *)
                                                             func_?(
                                                  TypeInfo__UnityEngine__Vector3,0x18);
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar8 = pVVar7->x;
                                                  uVar9 = pVVar7->y;
                                                  uVar4 = uVar9 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (value_00 == (Vector3__Array *)0x0)
                                                  goto code_?;
                                                  if (value_00->max_length != 0) {
                                                    value_00->vector[0].x =
                                                         (float)(uVar8 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0].y = (float)uVar4;
                                                  value_00->vector[0].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar10 = pVVar7->x;
                                                  uVar11 = pVVar7->y;
                                                  uVar4 = uVar11 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (1 < value_00->max_length) {
                                                    value_00->vector[1].x =
                                                         (float)(uVar10 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[1].y = (float)uVar4;
                                                  value_00->vector[1].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar12 = pVVar7->x;
                                                  uVar13 = pVVar7->y;
                                                  uVar4 = uVar13 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (2 < value_00->max_length) {
                                                    value_00->vector[2].x =
                                                         (float)(uVar12 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[2].y = (float)uVar4;
                                                  value_00->vector[2].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar14 = pVVar7->x;
                                                  uVar15 = pVVar7->y;
                                                  uVar4 = uVar15 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (3 < value_00->max_length) {
                                                    value_00->vector[3].x =
                                                         (float)(uVar14 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[3].y = (float)uVar4;
                                                  value_00->vector[3].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelLook
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  fVar2 = pVVar7->y;
                                                  fVar6 = pVVar7->z;
                                                  if (4 < value_00->max_length) {
                                                    value_00->vector[4].x = pVVar7->x;
                                                    value_00->vector[4].y = fVar2;
                                                    value_00->vector[4].z = fVar6;
                                                    pVVar7 = TriangPrismShape3D::
                                                              TriangPrismShape3D_get_ModelLook
                                                                        ((Vector3 *)&stack0xffffffe0
                                                                         ,(MethodInfo *)0x0);
                                                    fVar2 = pVVar7->y;
                                                    fVar6 = pVVar7->z;
                                                    if (5 < value_00->max_length) {
                                                      value_00->vector[5].x = pVVar7->x;
                                                      value_00->vector[5].y = fVar2;
                                                      value_00->vector[5].z = fVar6;
                                                      pVVar7 = TriangPrismShape3D::
                                                                TriangPrismShape3D_get_ModelLook
                                                                          ((Vector3 *)
                                                                           &stack0xffffffe0,
                                                                           (MethodInfo *)0x0);
                                                      fVar2 = pVVar7->y;
                                                      fVar6 = pVVar7->z;
                                                      if (6 < value_00->max_length) {
                                                        value_00->vector[6].x = pVVar7->x;
                                                        value_00->vector[6].y = fVar2;
                                                        value_00->vector[6].z = fVar6;
                                                        pVVar7 = TriangPrismShape3D::
                                                                  TriangPrismShape3D_get_ModelLook
                                                                            ((Vector3 *)
                                                                             &stack0xffffffe0,
                                                                             (MethodInfo *)0x0);
                                                        fVar2 = pVVar7->y;
                                                        fVar6 = pVVar7->z;
                                                        if (7 < value_00->max_length) {
                                                          value_00->vector[7].x = pVVar7->x;
                                                          value_00->vector[7].y = fVar2;
                                                          value_00->vector[7].z = fVar6;
                                                          pVVar7 = TriangPrismShape3D::
                                                                    TriangPrismShape3D_get_ModelUp
                                                                              ((Vector3 *)
                                                                               &stack0xffffffe0,
                                                                               (MethodInfo *)0x0);
                                                          fVar2 = pVVar7->y;
                                                          fVar6 = pVVar7->z;
                                                          if (8 < value_00->max_length) {
                                                            value_00->vector[8].x = pVVar7->x;
                                                            value_00->vector[8].y = fVar2;
                                                            value_00->vector[8].z = fVar6;
                                                            pVVar7 = TriangPrismShape3D::
                                                                      TriangPrismShape3D_get_ModelUp
                                                                                ((Vector3 *)
                                                                                 &stack0xffffffe0,
                                                                                 (MethodInfo *)0x0);
                                                            fVar2 = pVVar7->y;
                                                            fVar6 = pVVar7->z;
                                                            if (9 < value_00->max_length) {
                                                              value_00->vector[9].x = pVVar7->x;
                                                              value_00->vector[9].y = fVar2;
                                                              value_00->vector[9].z = fVar6;
                                                              pVVar7 = TriangPrismShape3D::
                                                                                                                                                
                                                  TriangPrismShape3D_get_ModelUp
                                                            ((Vector3 *)&stack0xffffffe0,
                                                             (MethodInfo *)0x0);
                                                  fVar2 = pVVar7->y;
                                                  fVar6 = pVVar7->z;
                                                  if (10 < value_00->max_length) {
                                                    value_00->vector[10].x = pVVar7->x;
                                                    value_00->vector[10].y = fVar2;
                                                    value_00->vector[10].z = fVar6;
                                                    pVVar7 = TriangPrismShape3D::
                                                              TriangPrismShape3D_get_ModelUp
                                                                        ((Vector3 *)&stack0xffffffe0
                                                                         ,(MethodInfo *)0x0);
                                                    fVar2 = pVVar7->y;
                                                    fVar6 = pVVar7->z;
                                                    if (0xb < value_00->max_length) {
                                                      value_00->vector[0xb].x = pVVar7->x;
                                                      value_00->vector[0xb].y = fVar2;
                                                      value_00->vector[0xb].z = fVar6;
                                                      pVVar7 = TriangPrismShape3D::
                                                                TriangPrismShape3D_get_ModelUp
                                                                          ((Vector3 *)
                                                                           &stack0xffffffe0,
                                                                           (MethodInfo *)0x0);
                                                      uVar16 = pVVar7->x;
                                                      uVar17 = pVVar7->y;
                                                      uVar4 = uVar17 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0xc < value_00->max_length) {
                                                    value_00->vector[0xc].x =
                                                         (float)(uVar16 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0xc].y = (float)uVar4;
                                                  value_00->vector[0xc].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelUp
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar18 = pVVar7->x;
                                                  uVar19 = pVVar7->y;
                                                  uVar4 = uVar19 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0xd < value_00->max_length) {
                                                    value_00->vector[0xd].x =
                                                         (float)(uVar18 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0xd].y = (float)uVar4;
                                                  value_00->vector[0xd].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelUp
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar20 = pVVar7->x;
                                                  uVar21 = pVVar7->y;
                                                  uVar4 = uVar21 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0xe < value_00->max_length) {
                                                    value_00->vector[0xe].x =
                                                         (float)(uVar20 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0xe].y = (float)uVar4;
                                                  value_00->vector[0xe].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelUp
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar22 = pVVar7->x;
                                                  uVar23 = pVVar7->y;
                                                  uVar4 = uVar23 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0xf < value_00->max_length) {
                                                    value_00->vector[0xf].x =
                                                         (float)(uVar22 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0xf].y = (float)uVar4;
                                                  value_00->vector[0xf].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar24 = pVVar7->x;
                                                  uVar25 = pVVar7->y;
                                                  uVar4 = uVar25 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0x10 < value_00->max_length) {
                                                    value_00->vector[0x10].x =
                                                         (float)(uVar24 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0x10].y = (float)uVar4;
                                                  value_00->vector[0x10].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar26 = pVVar7->x;
                                                  uVar27 = pVVar7->y;
                                                  uVar4 = uVar27 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0x11 < value_00->max_length) {
                                                    value_00->vector[0x11].x =
                                                         (float)(uVar26 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0x11].y = (float)uVar4;
                                                  value_00->vector[0x11].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar28 = pVVar7->x;
                                                  uVar29 = pVVar7->y;
                                                  uVar4 = uVar29 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0x12 < value_00->max_length) {
                                                    value_00->vector[0x12].x =
                                                         (float)(uVar28 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0x12].y = (float)uVar4;
                                                  value_00->vector[0x12].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  uVar30 = pVVar7->x;
                                                  uVar31 = pVVar7->y;
                                                  uVar4 = uVar31 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar6 = (float)((uint)pVVar7->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (0x13 < value_00->max_length) {
                                                    value_00->vector[0x13].x =
                                                         (float)(uVar30 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  value_00->vector[0x13].y = (float)uVar4;
                                                  value_00->vector[0x13].z = fVar6;
                                                  pVVar7 = TriangPrismShape3D::
                                                            TriangPrismShape3D_get_ModelRight
                                                                      ((Vector3 *)&stack0xffffffe0,
                                                                       (MethodInfo *)0x0);
                                                  fVar2 = pVVar7->y;
                                                  fVar6 = pVVar7->z;
                                                  if (0x14 < value_00->max_length) {
                                                    value_00->vector[0x14].x = pVVar7->x;
                                                    value_00->vector[0x14].y = fVar2;
                                                    value_00->vector[0x14].z = fVar6;
                                                    pVVar7 = TriangPrismShape3D::
                                                              TriangPrismShape3D_get_ModelRight
                                                                        ((Vector3 *)&stack0xffffffe0
                                                                         ,(MethodInfo *)0x0);
                                                    fVar2 = pVVar7->y;
                                                    fVar6 = pVVar7->z;
                                                    if (0x15 < value_00->max_length) {
                                                      value_00->vector[0x15].x = pVVar7->x;
                                                      value_00->vector[0x15].y = fVar2;
                                                      value_00->vector[0x15].z = fVar6;
                                                      pVVar7 = TriangPrismShape3D::
                                                                TriangPrismShape3D_get_ModelRight
                                                                          ((Vector3 *)
                                                                           &stack0xffffffe0,
                                                                           (MethodInfo *)0x0);
                                                      fVar2 = pVVar7->y;
                                                      fVar6 = pVVar7->z;
                                                      if (0x16 < value_00->max_length) {
                                                        value_00->vector[0x16].x = pVVar7->x;
                                                        value_00->vector[0x16].y = fVar2;
                                                        value_00->vector[0x16].z = fVar6;
                                                        pVVar7 = TriangPrismShape3D::
                                                                  TriangPrismShape3D_get_ModelRight
                                                                            ((Vector3 *)
                                                                             &stack0xffffffe0,
                                                                             (MethodInfo *)0x0);
                                                        fVar2 = pVVar7->y;
                                                        fVar6 = pVVar7->z;
                                                        if (0x17 < value_00->max_length) {
                                                          value_00->vector[0x17].x = pVVar7->x;
                                                          value_00->vector[0x17].y = fVar2;
                                                          value_00->vector[0x17].z = fVar6;
                                                          indices = (Int32__Array *)
                                                                    func_?();
                                                          mscorlib.dll::System::Runtime::
                                                          CompilerServices::RuntimeHelpers::
                                                          RuntimeHelpers_InitializeArray_1
                                                                    ((Array *)indices,
                                                                                                                                          
                                                  _AE6CD589EA34634A4BBCC7D20EE4FD5E07A3E0FB552F0766309FCF026FEAB6E2_Field
                                                  ,(MethodInfo *)0x0);
                                                  pMVar32 = (Mesh *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh__ctor(pMVar32,(MethodInfo *)0x0);
                                                  if (pMVar32 != (Mesh *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_vertices(pMVar32,value,
                                                                      (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_normals(pMVar32,value_00,
                                                                     (MethodInfo *)0x0);
                                                    fillValue.g = (float)&UNK_?;
                                                    fillValue.r = (float)&stack0xffffffe0;
                                                    fillValue.b = (float)&stack0xffffffe0;
                                                    fillValue.a = (float)&UNK_?;
                                                    value_01 = ColorEx::ColorEx_GetFilledColorArray
                                                                         (0x18,fillValue,
                                                                          (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_colors(pMVar32,value_01,
                                                                    (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_SetIndices(pMVar32,indices,
                                                                    MeshTopology__Enum_Lines,0,
                                                                    (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_UploadMeshData(pMVar32,0,(MethodInfo *)0x0)
                                                    ;
                                                    return pMVar32;
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
  pcVar33 = (code *)swi(3);
  pMVar32 = (Mesh *)(*pcVar33)();
  return pMVar32;
}

