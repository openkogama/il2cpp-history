
/* Mesh CreateBox(Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::BoxMesh::BoxMesh_CreateBox
                 (float width,float height,float depth,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_554B713EB1AF9570FCF56A42668A8BD9B94F382B30A05C94E61995332F88FF45_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((width < _UNK_?) || (height < _UNK_?)) || (depth < _UNK_?)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * _UNK_?;
  fVar2 = height * _UNK_?;
  fVar3 = depth * _UNK_?;
  value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x18);
  uVar4 = _UNK_?;
  uVar5 = (uint)fVar2 ^ _UNK_?;
  fVar6 = (float)((uint)fVar3 ^ _UNK_?);
  if (value == (Vector3__Array *)0x0) goto code_?;
  if ((int)value->max_length != 0) {
    value->vector[0].x = (float)((uint)fVar1 ^ _UNK_?);
    value->vector[0].y = (float)uVar5;
    value->vector[0].z = fVar6;
    if (1 < (uint)value->max_length) {
      value->vector[1].x = (float)((uint)fVar1 ^ uVar4);
      value->vector[1].y = fVar2;
      value->vector[1].z = (float)((uint)fVar3 ^ uVar4);
      if (2 < (uint)value->max_length) {
        value->vector[2].x = fVar1;
        value->vector[2].y = fVar2;
        value->vector[2].z = (float)((uint)fVar3 ^ uVar4);
        if (3 < (uint)value->max_length) {
          value->vector[3].x = fVar1;
          value->vector[3].y = (float)((uint)fVar2 ^ uVar4);
          value->vector[3].z = (float)((uint)fVar3 ^ uVar4);
          if (4 < (uint)value->max_length) {
            value->vector[4].x = fVar1;
            value->vector[4].y = (float)((uint)fVar2 ^ uVar4);
            value->vector[4].z = fVar3;
            if (5 < (uint)value->max_length) {
              value->vector[5].x = fVar1;
              value->vector[5].y = fVar2;
              value->vector[5].z = fVar3;
              if (6 < (uint)value->max_length) {
                value->vector[6].x = (float)((uint)fVar1 ^ uVar4);
                value->vector[6].y = fVar2;
                value->vector[6].z = fVar3;
                if (7 < (uint)value->max_length) {
                  value->vector[7].x = (float)((uint)fVar1 ^ uVar4);
                  value->vector[7].y = (float)((uint)fVar2 ^ uVar4);
                  value->vector[7].z = fVar3;
                  if (8 < (uint)value->max_length) {
                    value->vector[8].x = (float)((uint)fVar1 ^ uVar4);
                    value->vector[8].y = fVar2;
                    value->vector[8].z = (float)((uint)fVar3 ^ uVar4);
                    if (9 < (uint)value->max_length) {
                      value->vector[9].x = (float)((uint)fVar1 ^ uVar4);
                      value->vector[9].y = fVar2;
                      value->vector[9].z = fVar3;
                      if (10 < (uint)value->max_length) {
                        value->vector[10].x = fVar1;
                        value->vector[10].y = fVar2;
                        value->vector[10].z = fVar3;
                        if (0xb < (uint)value->max_length) {
                          value->vector[0xb].x = fVar1;
                          value->vector[0xb].y = fVar2;
                          value->vector[0xb].z = (float)((uint)fVar3 ^ uVar4);
                          if (0xc < (uint)value->max_length) {
                            value->vector[0xc].x = fVar1;
                            value->vector[0xc].y = (float)((uint)fVar2 ^ uVar4);
                            value->vector[0xc].z = (float)((uint)fVar3 ^ uVar4);
                            if (0xd < (uint)value->max_length) {
                              value->vector[0xd].x = fVar1;
                              value->vector[0xd].y = (float)((uint)fVar2 ^ uVar4);
                              value->vector[0xd].z = fVar3;
                              if (0xe < (uint)value->max_length) {
                                value->vector[0xe].x = (float)((uint)fVar1 ^ uVar4);
                                value->vector[0xe].y = (float)((uint)fVar2 ^ uVar4);
                                value->vector[0xe].z = fVar3;
                                if (0xf < (uint)value->max_length) {
                                  value->vector[0xf].x = (float)((uint)fVar1 ^ uVar4);
                                  value->vector[0xf].y = (float)((uint)fVar2 ^ uVar4);
                                  value->vector[0xf].z = (float)((uint)fVar3 ^ uVar4);
                                  if (0x10 < (uint)value->max_length) {
                                    value->vector[0x10].x = (float)((uint)fVar1 ^ uVar4);
                                    value->vector[0x10].y = (float)((uint)fVar2 ^ uVar4);
                                    value->vector[0x10].z = fVar3;
                                    if (0x11 < (uint)value->max_length) {
                                      value->vector[0x11].x = (float)((uint)fVar1 ^ uVar4);
                                      value->vector[0x11].y = fVar2;
                                      value->vector[0x11].z = fVar3;
                                      if (0x12 < (uint)value->max_length) {
                                        value->vector[0x12].x = (float)((uint)fVar1 ^ uVar4);
                                        value->vector[0x12].y = fVar2;
                                        value->vector[0x12].z = (float)((uint)fVar3 ^ uVar4);
                                        if (0x13 < (uint)value->max_length) {
                                          value->vector[0x13].x = (float)((uint)fVar1 ^ uVar4);
                                          value->vector[0x13].y = (float)((uint)fVar2 ^ uVar4);
                                          value->vector[0x13].z = (float)((uint)fVar3 ^ uVar4);
                                          if (0x14 < (uint)value->max_length) {
                                            value->vector[0x14].x = fVar1;
                                            value->vector[0x14].y = (float)((uint)fVar2 ^ uVar4);
                                            value->vector[0x14].z = (float)((uint)fVar3 ^ uVar4);
                                            if (0x15 < (uint)value->max_length) {
                                              value->vector[0x15].x = fVar1;
                                              value->vector[0x15].y = fVar2;
                                              value->vector[0x15].z = (float)((uint)fVar3 ^ uVar4)
                                              ;
                                              if (0x16 < (uint)value->max_length) {
                                                value->vector[0x16].x = fVar1;
                                                value->vector[0x16].y = fVar2;
                                                value->vector[0x16].z = fVar3;
                                                if (0x17 < (uint)value->max_length) {
                                                  value->vector[0x17].x = fVar1;
                                                  value->vector[0x17].y =
                                                       (float)((uint)fVar2 ^ uVar4);
                                                  value->vector[0x17].z = fVar3;
                                                  value_00 = (Vector3__Array *)
                                                             FUN_?(
                                                  TypeInfo__UnityEngine__Vector3,0x18);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  cVar7 = cRam_?;
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar9 = (pVVar8->forwardVector).x;
                                                  fVar6 = (pVVar8->forwardVector).y;
                                                  fVar2 = (pVVar8->forwardVector).z;
                                                  if (value_00 == (Vector3__Array *)0x0)
                                                  goto code_?;
                                                  if ((int)value_00->max_length != 0) {
                                                    value_00->vector[0].x = (float)(uVar9 ^ uVar4);
                                                    value_00->vector[0].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar10 = (pVVar8->forwardVector).x;
                                                    fVar6 = (pVVar8->forwardVector).y;
                                                    fVar2 = (pVVar8->forwardVector).z;
                                                    if (1 < (uint)value_00->max_length) {
                                                      value_00->vector[1].x =
                                                           (float)(uVar10 ^ uVar4);
                                                      value_00->vector[1].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[1].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar11 = (pVVar8->forwardVector).x;
                                                  fVar6 = (pVVar8->forwardVector).y;
                                                  fVar2 = (pVVar8->forwardVector).z;
                                                  if (2 < (uint)value_00->max_length) {
                                                    value_00->vector[2].x = (float)(uVar11 ^ uVar4);
                                                    value_00->vector[2].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[2].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar12 = (pVVar8->forwardVector).x;
                                                    fVar6 = (pVVar8->forwardVector).y;
                                                    fVar2 = (pVVar8->forwardVector).z;
                                                    if (3 < (uint)value_00->max_length) {
                                                      value_00->vector[3].x =
                                                           (float)(uVar12 ^ uVar4);
                                                      value_00->vector[3].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[3].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (4 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->forwardVector).y;
                                                    value_00->vector[4].x =
                                                         (pVVar8->forwardVector).x;
                                                    value_00->vector[4].y = fVar6;
                                                    value_00->vector[4].z =
                                                         (pVVar8->forwardVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (5 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->forwardVector).y;
                                                      value_00->vector[5].x =
                                                           (pVVar8->forwardVector).x;
                                                      value_00->vector[5].y = fVar6;
                                                      value_00->vector[5].z =
                                                           (pVVar8->forwardVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (6 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->forwardVector).y;
                                                    value_00->vector[6].x =
                                                         (pVVar8->forwardVector).x;
                                                    value_00->vector[6].y = fVar6;
                                                    value_00->vector[6].z =
                                                         (pVVar8->forwardVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    cVar7 = cRam_?;
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (7 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->forwardVector).y;
                                                      value_00->vector[7].x =
                                                           (pVVar8->forwardVector).x;
                                                      value_00->vector[7].y = fVar6;
                                                      value_00->vector[7].z =
                                                           (pVVar8->forwardVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (8 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->upVector).y;
                                                    value_00->vector[8].x = (pVVar8->upVector).x;
                                                    value_00->vector[8].y = fVar6;
                                                    value_00->vector[8].z = (pVVar8->upVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (9 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->upVector).y;
                                                      value_00->vector[9].x = (pVVar8->upVector).x;
                                                      value_00->vector[9].y = fVar6;
                                                      value_00->vector[9].z = (pVVar8->upVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (10 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->upVector).y;
                                                    value_00->vector[10].x = (pVVar8->upVector).x;
                                                    value_00->vector[10].y = fVar6;
                                                    value_00->vector[10].z = (pVVar8->upVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (0xb < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->upVector).y;
                                                      value_00->vector[0xb].x =
                                                           (pVVar8->upVector).x;
                                                      value_00->vector[0xb].y = fVar6;
                                                      value_00->vector[0xb].z =
                                                           (pVVar8->upVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar13 = (pVVar8->upVector).x;
                                                  fVar6 = (pVVar8->upVector).y;
                                                  fVar2 = (pVVar8->upVector).z;
                                                  if (0xc < (uint)value_00->max_length) {
                                                    value_00->vector[0xc].x =
                                                         (float)(uVar13 ^ uVar4);
                                                    value_00->vector[0xc].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0xc].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar14 = (pVVar8->upVector).x;
                                                    fVar6 = (pVVar8->upVector).y;
                                                    fVar2 = (pVVar8->upVector).z;
                                                    if (0xd < (uint)value_00->max_length) {
                                                      value_00->vector[0xd].x =
                                                           (float)(uVar14 ^ uVar4);
                                                      value_00->vector[0xd].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[0xd].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar15 = (pVVar8->upVector).x;
                                                  fVar6 = (pVVar8->upVector).y;
                                                  fVar2 = (pVVar8->upVector).z;
                                                  if (0xe < (uint)value_00->max_length) {
                                                    value_00->vector[0xe].x =
                                                         (float)(uVar15 ^ uVar4);
                                                    value_00->vector[0xe].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0xe].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    cVar7 = cRam_?;
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar16 = (pVVar8->upVector).x;
                                                    fVar6 = (pVVar8->upVector).y;
                                                    fVar2 = (pVVar8->upVector).z;
                                                    if (0xf < (uint)value_00->max_length) {
                                                      value_00->vector[0xf].x =
                                                           (float)(uVar16 ^ uVar4);
                                                      value_00->vector[0xf].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[0xf].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar17 = (pVVar8->rightVector).x;
                                                  fVar6 = (pVVar8->rightVector).y;
                                                  fVar2 = (pVVar8->rightVector).z;
                                                  if (0x10 < (uint)value_00->max_length) {
                                                    value_00->vector[0x10].x =
                                                         (float)(uVar17 ^ uVar4);
                                                    value_00->vector[0x10].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0x10].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar18 = (pVVar8->rightVector).x;
                                                    fVar6 = (pVVar8->rightVector).y;
                                                    fVar2 = (pVVar8->rightVector).z;
                                                    if (0x11 < (uint)value_00->max_length) {
                                                      value_00->vector[0x11].x =
                                                           (float)(uVar18 ^ uVar4);
                                                      value_00->vector[0x11].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[0x11].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar19 = (pVVar8->rightVector).x;
                                                  fVar6 = (pVVar8->rightVector).y;
                                                  fVar2 = (pVVar8->rightVector).z;
                                                  if (0x12 < (uint)value_00->max_length) {
                                                    value_00->vector[0x12].x =
                                                         (float)(uVar19 ^ uVar4);
                                                    value_00->vector[0x12].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0x12].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar20 = (pVVar8->rightVector).x;
                                                    fVar6 = (pVVar8->rightVector).y;
                                                    fVar2 = (pVVar8->rightVector).z;
                                                    if (0x13 < (uint)value_00->max_length) {
                                                      value_00->vector[0x13].x =
                                                           (float)(uVar20 ^ uVar4);
                                                      value_00->vector[0x13].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[0x13].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (0x14 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->rightVector).y;
                                                    value_00->vector[0x14].x =
                                                         (pVVar8->rightVector).x;
                                                    value_00->vector[0x14].y = fVar6;
                                                    value_00->vector[0x14].z =
                                                         (pVVar8->rightVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (0x15 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->rightVector).y;
                                                      value_00->vector[0x15].x =
                                                           (pVVar8->rightVector).x;
                                                      value_00->vector[0x15].y = fVar6;
                                                      value_00->vector[0x15].z =
                                                           (pVVar8->rightVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (0x16 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->rightVector).y;
                                                    value_00->vector[0x16].x =
                                                         (pVVar8->rightVector).x;
                                                    value_00->vector[0x16].y = fVar6;
                                                    value_00->vector[0x16].z =
                                                         (pVVar8->rightVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (0x17 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->rightVector).y;
                                                      value_00->vector[0x17].x =
                                                           (pVVar8->rightVector).x;
                                                      value_00->vector[0x17].y = fVar6;
                                                      value_00->vector[0x17].z =
                                                           (pVVar8->rightVector).z;
                                                      indices = (Int32__Array *)
                                                                FUN_?(
                                                  TypeInfo__System__Int32,0x24);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            ((Array *)indices,
                                                                                                                          
                                                  __554B713EB1AF9570FCF56A42668A8BD9B94F382B30A05C94E61995332F88FF45_Field
                                                  ,(MethodInfo *)0x0);
                                                  pMVar21 = (Mesh *)FUN_?(
                                                  TypeInfo__UnityEngine__Mesh);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh__ctor(pMVar21,(MethodInfo *)0x0);
                                                  if (pMVar21 != (Mesh *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_vertices(pMVar21,value,
                                                                      (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_normals(pMVar21,value_00,
                                                                     (MethodInfo *)0x0);
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Color);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    value_01 = (Color__Array *)FUN_?();
                                                    uVar4 = 0;
                                                    pCVar22 = value_01->vector;
                                                    lVar23 = 0;
                                                    if (value_01 != (Color__Array *)0x0) {
                                                      while (uVar4 < (uint)value_01->max_length) {
                                                        fVar6 = color->g;
                                                        fVar2 = color->b;
                                                        fVar1 = color->a;
                                                        uVar4 = uVar4 + 1;
                                                        lVar23 = lVar23 + 1;
                                                        pCVar22->r = color->r;
                                                        pCVar22->g = fVar6;
                                                        pCVar22->b = fVar2;
                                                        pCVar22->a = fVar1;
                                                        pCVar22 = pCVar22 + 1;
                                                        if (0x17 < lVar23) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Mesh::Mesh_set_colors
                                                                    (pMVar21,value_01,
                                                                     (MethodInfo *)0x0);
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Mesh::Mesh_SetIndices
                                                                    (pMVar21,indices,
                                                                     MeshTopology__Enum_Triangles,0,
                                                                     (MethodInfo *)0x0);
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Mesh::Mesh_UploadMeshData
                                                                    (pMVar21,0,(MethodInfo *)0x0);
                                                          return pMVar21;
                                                        }
                                                      }
                                                      goto DAT_?;
                                                    }
                                                  }
code_?:
                                                  FUN_?();
                                                  pcVar24 = (code *)swi(3);
                                                  pMVar21 = (Mesh *)(*pcVar24)();
                                                  return pMVar21;
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
DAT_?:
  FUN_?();
  pcVar24 = (code *)swi(3);
  pMVar21 = (Mesh *)(*pcVar24)();
  return pMVar21;
}


/* Mesh CreateWireBox(Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::BoxMesh::BoxMesh_CreateWireBox
                 (float width,float height,float depth,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&AE6CD589EA34634A4BBCC7D20EE4FD5E07A3E0FB552F0766309FCF026FEAB6E2_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((width < _UNK_?) || (height < _UNK_?)) || (depth < _UNK_?)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * _UNK_?;
  fVar2 = height * _UNK_?;
  fVar3 = depth * _UNK_?;
  value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x18);
  uVar4 = _UNK_?;
  uVar5 = (uint)fVar2 ^ _UNK_?;
  fVar6 = (float)((uint)fVar3 ^ _UNK_?);
  if (value == (Vector3__Array *)0x0) goto code_?;
  if ((int)value->max_length != 0) {
    value->vector[0].x = (float)((uint)fVar1 ^ _UNK_?);
    value->vector[0].y = (float)uVar5;
    value->vector[0].z = fVar6;
    if (1 < (uint)value->max_length) {
      value->vector[1].x = (float)((uint)fVar1 ^ uVar4);
      value->vector[1].y = fVar2;
      value->vector[1].z = (float)((uint)fVar3 ^ uVar4);
      if (2 < (uint)value->max_length) {
        value->vector[2].x = fVar1;
        value->vector[2].y = fVar2;
        value->vector[2].z = (float)((uint)fVar3 ^ uVar4);
        if (3 < (uint)value->max_length) {
          value->vector[3].x = fVar1;
          value->vector[3].y = (float)((uint)fVar2 ^ uVar4);
          value->vector[3].z = (float)((uint)fVar3 ^ uVar4);
          if (4 < (uint)value->max_length) {
            value->vector[4].x = fVar1;
            value->vector[4].y = (float)((uint)fVar2 ^ uVar4);
            value->vector[4].z = fVar3;
            if (5 < (uint)value->max_length) {
              value->vector[5].x = fVar1;
              value->vector[5].y = fVar2;
              value->vector[5].z = fVar3;
              if (6 < (uint)value->max_length) {
                value->vector[6].x = (float)((uint)fVar1 ^ uVar4);
                value->vector[6].y = fVar2;
                value->vector[6].z = fVar3;
                if (7 < (uint)value->max_length) {
                  value->vector[7].x = (float)((uint)fVar1 ^ uVar4);
                  value->vector[7].y = (float)((uint)fVar2 ^ uVar4);
                  value->vector[7].z = fVar3;
                  if (8 < (uint)value->max_length) {
                    value->vector[8].x = (float)((uint)fVar1 ^ uVar4);
                    value->vector[8].y = fVar2;
                    value->vector[8].z = (float)((uint)fVar3 ^ uVar4);
                    if (9 < (uint)value->max_length) {
                      value->vector[9].x = (float)((uint)fVar1 ^ uVar4);
                      value->vector[9].y = fVar2;
                      value->vector[9].z = fVar3;
                      if (10 < (uint)value->max_length) {
                        value->vector[10].x = fVar1;
                        value->vector[10].y = fVar2;
                        value->vector[10].z = fVar3;
                        if (0xb < (uint)value->max_length) {
                          value->vector[0xb].x = fVar1;
                          value->vector[0xb].y = fVar2;
                          value->vector[0xb].z = (float)((uint)fVar3 ^ uVar4);
                          if (0xc < (uint)value->max_length) {
                            value->vector[0xc].x = fVar1;
                            value->vector[0xc].y = (float)((uint)fVar2 ^ uVar4);
                            value->vector[0xc].z = (float)((uint)fVar3 ^ uVar4);
                            if (0xd < (uint)value->max_length) {
                              value->vector[0xd].x = fVar1;
                              value->vector[0xd].y = (float)((uint)fVar2 ^ uVar4);
                              value->vector[0xd].z = fVar3;
                              if (0xe < (uint)value->max_length) {
                                value->vector[0xe].x = (float)((uint)fVar1 ^ uVar4);
                                value->vector[0xe].y = (float)((uint)fVar2 ^ uVar4);
                                value->vector[0xe].z = fVar3;
                                if (0xf < (uint)value->max_length) {
                                  value->vector[0xf].x = (float)((uint)fVar1 ^ uVar4);
                                  value->vector[0xf].y = (float)((uint)fVar2 ^ uVar4);
                                  value->vector[0xf].z = (float)((uint)fVar3 ^ uVar4);
                                  if (0x10 < (uint)value->max_length) {
                                    value->vector[0x10].x = (float)((uint)fVar1 ^ uVar4);
                                    value->vector[0x10].y = (float)((uint)fVar2 ^ uVar4);
                                    value->vector[0x10].z = fVar3;
                                    if (0x11 < (uint)value->max_length) {
                                      value->vector[0x11].x = (float)((uint)fVar1 ^ uVar4);
                                      value->vector[0x11].y = fVar2;
                                      value->vector[0x11].z = fVar3;
                                      if (0x12 < (uint)value->max_length) {
                                        value->vector[0x12].x = (float)((uint)fVar1 ^ uVar4);
                                        value->vector[0x12].y = fVar2;
                                        value->vector[0x12].z = (float)((uint)fVar3 ^ uVar4);
                                        if (0x13 < (uint)value->max_length) {
                                          value->vector[0x13].x = (float)((uint)fVar1 ^ uVar4);
                                          value->vector[0x13].y = (float)((uint)fVar2 ^ uVar4);
                                          value->vector[0x13].z = (float)((uint)fVar3 ^ uVar4);
                                          if (0x14 < (uint)value->max_length) {
                                            value->vector[0x14].x = fVar1;
                                            value->vector[0x14].y = (float)((uint)fVar2 ^ uVar4);
                                            value->vector[0x14].z = (float)((uint)fVar3 ^ uVar4);
                                            if (0x15 < (uint)value->max_length) {
                                              value->vector[0x15].x = fVar1;
                                              value->vector[0x15].y = fVar2;
                                              value->vector[0x15].z = (float)((uint)fVar3 ^ uVar4)
                                              ;
                                              if (0x16 < (uint)value->max_length) {
                                                value->vector[0x16].x = fVar1;
                                                value->vector[0x16].y = fVar2;
                                                value->vector[0x16].z = fVar3;
                                                if (0x17 < (uint)value->max_length) {
                                                  value->vector[0x17].x = fVar1;
                                                  value->vector[0x17].y =
                                                       (float)((uint)fVar2 ^ uVar4);
                                                  value->vector[0x17].z = fVar3;
                                                  value_00 = (Vector3__Array *)
                                                             FUN_?(
                                                  TypeInfo__UnityEngine__Vector3,0x18);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  cVar7 = cRam_?;
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar9 = (pVVar8->forwardVector).x;
                                                  fVar6 = (pVVar8->forwardVector).y;
                                                  fVar2 = (pVVar8->forwardVector).z;
                                                  if (value_00 == (Vector3__Array *)0x0)
                                                  goto code_?;
                                                  if ((int)value_00->max_length != 0) {
                                                    value_00->vector[0].x = (float)(uVar9 ^ uVar4);
                                                    value_00->vector[0].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar10 = (pVVar8->forwardVector).x;
                                                    fVar6 = (pVVar8->forwardVector).y;
                                                    fVar2 = (pVVar8->forwardVector).z;
                                                    if (1 < (uint)value_00->max_length) {
                                                      value_00->vector[1].x =
                                                           (float)(uVar10 ^ uVar4);
                                                      value_00->vector[1].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[1].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar11 = (pVVar8->forwardVector).x;
                                                  fVar6 = (pVVar8->forwardVector).y;
                                                  fVar2 = (pVVar8->forwardVector).z;
                                                  if (2 < (uint)value_00->max_length) {
                                                    value_00->vector[2].x = (float)(uVar11 ^ uVar4);
                                                    value_00->vector[2].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[2].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar12 = (pVVar8->forwardVector).x;
                                                    fVar6 = (pVVar8->forwardVector).y;
                                                    fVar2 = (pVVar8->forwardVector).z;
                                                    if (3 < (uint)value_00->max_length) {
                                                      value_00->vector[3].x =
                                                           (float)(uVar12 ^ uVar4);
                                                      value_00->vector[3].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[3].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (4 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->forwardVector).y;
                                                    value_00->vector[4].x =
                                                         (pVVar8->forwardVector).x;
                                                    value_00->vector[4].y = fVar6;
                                                    value_00->vector[4].z =
                                                         (pVVar8->forwardVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (5 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->forwardVector).y;
                                                      value_00->vector[5].x =
                                                           (pVVar8->forwardVector).x;
                                                      value_00->vector[5].y = fVar6;
                                                      value_00->vector[5].z =
                                                           (pVVar8->forwardVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (6 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->forwardVector).y;
                                                    value_00->vector[6].x =
                                                         (pVVar8->forwardVector).x;
                                                    value_00->vector[6].y = fVar6;
                                                    value_00->vector[6].z =
                                                         (pVVar8->forwardVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    cVar7 = cRam_?;
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (7 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->forwardVector).y;
                                                      value_00->vector[7].x =
                                                           (pVVar8->forwardVector).x;
                                                      value_00->vector[7].y = fVar6;
                                                      value_00->vector[7].z =
                                                           (pVVar8->forwardVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (8 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->upVector).y;
                                                    value_00->vector[8].x = (pVVar8->upVector).x;
                                                    value_00->vector[8].y = fVar6;
                                                    value_00->vector[8].z = (pVVar8->upVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (9 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->upVector).y;
                                                      value_00->vector[9].x = (pVVar8->upVector).x;
                                                      value_00->vector[9].y = fVar6;
                                                      value_00->vector[9].z = (pVVar8->upVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (10 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->upVector).y;
                                                    value_00->vector[10].x = (pVVar8->upVector).x;
                                                    value_00->vector[10].y = fVar6;
                                                    value_00->vector[10].z = (pVVar8->upVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (0xb < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->upVector).y;
                                                      value_00->vector[0xb].x =
                                                           (pVVar8->upVector).x;
                                                      value_00->vector[0xb].y = fVar6;
                                                      value_00->vector[0xb].z =
                                                           (pVVar8->upVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar13 = (pVVar8->upVector).x;
                                                  fVar6 = (pVVar8->upVector).y;
                                                  fVar2 = (pVVar8->upVector).z;
                                                  if (0xc < (uint)value_00->max_length) {
                                                    value_00->vector[0xc].x =
                                                         (float)(uVar13 ^ uVar4);
                                                    value_00->vector[0xc].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0xc].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar14 = (pVVar8->upVector).x;
                                                    fVar6 = (pVVar8->upVector).y;
                                                    fVar2 = (pVVar8->upVector).z;
                                                    if (0xd < (uint)value_00->max_length) {
                                                      value_00->vector[0xd].x =
                                                           (float)(uVar14 ^ uVar4);
                                                      value_00->vector[0xd].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[0xd].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar15 = (pVVar8->upVector).x;
                                                  fVar6 = (pVVar8->upVector).y;
                                                  fVar2 = (pVVar8->upVector).z;
                                                  if (0xe < (uint)value_00->max_length) {
                                                    value_00->vector[0xe].x =
                                                         (float)(uVar15 ^ uVar4);
                                                    value_00->vector[0xe].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0xe].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    cVar7 = cRam_?;
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar16 = (pVVar8->upVector).x;
                                                    fVar6 = (pVVar8->upVector).y;
                                                    fVar2 = (pVVar8->upVector).z;
                                                    if (0xf < (uint)value_00->max_length) {
                                                      value_00->vector[0xf].x =
                                                           (float)(uVar16 ^ uVar4);
                                                      value_00->vector[0xf].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[0xf].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar17 = (pVVar8->rightVector).x;
                                                  fVar6 = (pVVar8->rightVector).y;
                                                  fVar2 = (pVVar8->rightVector).z;
                                                  if (0x10 < (uint)value_00->max_length) {
                                                    value_00->vector[0x10].x =
                                                         (float)(uVar17 ^ uVar4);
                                                    value_00->vector[0x10].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0x10].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar18 = (pVVar8->rightVector).x;
                                                    fVar6 = (pVVar8->rightVector).y;
                                                    fVar2 = (pVVar8->rightVector).z;
                                                    if (0x11 < (uint)value_00->max_length) {
                                                      value_00->vector[0x11].x =
                                                           (float)(uVar18 ^ uVar4);
                                                      value_00->vector[0x11].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[0x11].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar19 = (pVVar8->rightVector).x;
                                                  fVar6 = (pVVar8->rightVector).y;
                                                  fVar2 = (pVVar8->rightVector).z;
                                                  if (0x12 < (uint)value_00->max_length) {
                                                    value_00->vector[0x12].x =
                                                         (float)(uVar19 ^ uVar4);
                                                    value_00->vector[0x12].y =
                                                         (float)((uint)fVar6 ^ uVar4);
                                                    value_00->vector[0x12].z =
                                                         (float)((uint)fVar2 ^ uVar4);
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar20 = (pVVar8->rightVector).x;
                                                    fVar6 = (pVVar8->rightVector).y;
                                                    fVar2 = (pVVar8->rightVector).z;
                                                    if (0x13 < (uint)value_00->max_length) {
                                                      value_00->vector[0x13].x =
                                                           (float)(uVar20 ^ uVar4);
                                                      value_00->vector[0x13].y =
                                                           (float)((uint)fVar6 ^ uVar4);
                                                      value_00->vector[0x13].z =
                                                           (float)((uint)fVar2 ^ uVar4);
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (0x14 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->rightVector).y;
                                                    value_00->vector[0x14].x =
                                                         (pVVar8->rightVector).x;
                                                    value_00->vector[0x14].y = fVar6;
                                                    value_00->vector[0x14].z =
                                                         (pVVar8->rightVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar7 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (0x15 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->rightVector).y;
                                                      value_00->vector[0x15].x =
                                                           (pVVar8->rightVector).x;
                                                      value_00->vector[0x15].y = fVar6;
                                                      value_00->vector[0x15].z =
                                                           (pVVar8->rightVector).z;
                                                      if (cVar7 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar7 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (0x16 < (uint)value_00->max_length) {
                                                    fVar6 = (pVVar8->rightVector).y;
                                                    value_00->vector[0x16].x =
                                                         (pVVar8->rightVector).x;
                                                    value_00->vector[0x16].y = fVar6;
                                                    value_00->vector[0x16].z =
                                                         (pVVar8->rightVector).z;
                                                    if (cVar7 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar8 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (0x17 < (uint)value_00->max_length) {
                                                      fVar6 = (pVVar8->rightVector).y;
                                                      value_00->vector[0x17].x =
                                                           (pVVar8->rightVector).x;
                                                      value_00->vector[0x17].y = fVar6;
                                                      value_00->vector[0x17].z =
                                                           (pVVar8->rightVector).z;
                                                      indices = (Int32__Array *)
                                                                FUN_?(
                                                  TypeInfo__System__Int32,0x30);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            ((Array *)indices,
                                                                                                                          
                                                  _AE6CD589EA34634A4BBCC7D20EE4FD5E07A3E0FB552F0766309FCF026FEAB6E2_Field
                                                  ,(MethodInfo *)0x0);
                                                  pMVar21 = (Mesh *)FUN_?(
                                                  TypeInfo__UnityEngine__Mesh);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh__ctor(pMVar21,(MethodInfo *)0x0);
                                                  if (pMVar21 != (Mesh *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_vertices(pMVar21,value,
                                                                      (MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                    Mesh_set_normals(pMVar21,value_00,
                                                                     (MethodInfo *)0x0);
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Color);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    value_01 = (Color__Array *)FUN_?();
                                                    uVar4 = 0;
                                                    pCVar22 = value_01->vector;
                                                    lVar23 = 0;
                                                    if (value_01 != (Color__Array *)0x0) {
                                                      while (uVar4 < (uint)value_01->max_length) {
                                                        fVar6 = color->g;
                                                        fVar2 = color->b;
                                                        fVar1 = color->a;
                                                        uVar4 = uVar4 + 1;
                                                        lVar23 = lVar23 + 1;
                                                        pCVar22->r = color->r;
                                                        pCVar22->g = fVar6;
                                                        pCVar22->b = fVar2;
                                                        pCVar22->a = fVar1;
                                                        pCVar22 = pCVar22 + 1;
                                                        if (0x17 < lVar23) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Mesh::Mesh_set_colors
                                                                    (pMVar21,value_01,
                                                                     (MethodInfo *)0x0);
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Mesh::Mesh_SetIndices
                                                                    (pMVar21,indices,
                                                                     MeshTopology__Enum_Lines,0,
                                                                     (MethodInfo *)0x0);
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Mesh::Mesh_UploadMeshData
                                                                    (pMVar21,0,(MethodInfo *)0x0);
                                                          return pMVar21;
                                                        }
                                                      }
                                                      goto DAT_?;
                                                    }
                                                  }
code_?:
                                                  FUN_?();
                                                  pcVar24 = (code *)swi(3);
                                                  pMVar21 = (Mesh *)(*pcVar24)();
                                                  return pMVar21;
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
DAT_?:
  FUN_?();
  pcVar24 = (code *)swi(3);
  pMVar21 = (Mesh *)(*pcVar24)();
  return pMVar21;
}

