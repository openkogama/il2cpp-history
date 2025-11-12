
/* Mesh CreateBox(Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::BoxMesh::BoxMesh_CreateBox(float width,float height,float depth,Color *color,MethodInfo *method)

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
  if (((width < 0.0001) || (height < 0.0001)) || (depth < 0.0001)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * 0.5;
  fVar2 = height * 0.5;
  fVar3 = depth * 0.5;
  value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x18);
  if (value == (Vector3__Array *)0x0) goto code_?;
  if ((int)value->max_length != 0) {
    uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
    value->vector[0].x = (float)(int)uVar4;
    value->vector[0].y = (float)(int)(uVar4 >> 0x20);
    value->vector[0].z = -fVar3;
    if (1 < (uint)value->max_length) {
      uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
      value->vector[1].x = (float)(int)uVar4;
      value->vector[1].y = (float)(int)(uVar4 >> 0x20);
      value->vector[1].z = -fVar3;
      if (2 < (uint)value->max_length) {
        value->vector[2].x = fVar1;
        value->vector[2].y = fVar2;
        value->vector[2].z = -fVar3;
        if (3 < (uint)value->max_length) {
          uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
          value->vector[3].x = (float)(int)uVar4;
          value->vector[3].y = (float)(int)(uVar4 >> 0x20);
          value->vector[3].z = -fVar3;
          if (4 < (uint)value->max_length) {
            uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
            value->vector[4].x = (float)(int)uVar4;
            value->vector[4].y = (float)(int)(uVar4 >> 0x20);
            value->vector[4].z = fVar3;
            if (5 < (uint)value->max_length) {
              value->vector[5].x = fVar1;
              value->vector[5].y = fVar2;
              value->vector[5].z = fVar3;
              if (6 < (uint)value->max_length) {
                uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                value->vector[6].x = (float)(int)uVar4;
                value->vector[6].y = (float)(int)(uVar4 >> 0x20);
                value->vector[6].z = fVar3;
                if (7 < (uint)value->max_length) {
                  uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                  value->vector[7].x = (float)(int)uVar4;
                  value->vector[7].y = (float)(int)(uVar4 >> 0x20);
                  value->vector[7].z = fVar3;
                  if (8 < (uint)value->max_length) {
                    uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                    value->vector[8].x = (float)(int)uVar4;
                    value->vector[8].y = (float)(int)(uVar4 >> 0x20);
                    value->vector[8].z = -fVar3;
                    if (9 < (uint)value->max_length) {
                      uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                      value->vector[9].x = (float)(int)uVar4;
                      value->vector[9].y = (float)(int)(uVar4 >> 0x20);
                      value->vector[9].z = fVar3;
                      if (10 < (uint)value->max_length) {
                        value->vector[10].x = fVar1;
                        value->vector[10].y = fVar2;
                        value->vector[10].z = fVar3;
                        if (0xb < (uint)value->max_length) {
                          value->vector[0xb].x = fVar1;
                          value->vector[0xb].y = fVar2;
                          value->vector[0xb].z = -fVar3;
                          if (0xc < (uint)value->max_length) {
                            uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                            value->vector[0xc].x = (float)(int)uVar4;
                            value->vector[0xc].y = (float)(int)(uVar4 >> 0x20);
                            value->vector[0xc].z = -fVar3;
                            if (0xd < (uint)value->max_length) {
                              uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                              value->vector[0xd].x = (float)(int)uVar4;
                              value->vector[0xd].y = (float)(int)(uVar4 >> 0x20);
                              value->vector[0xd].z = fVar3;
                              if (0xe < (uint)value->max_length) {
                                uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                value->vector[0xe].x = (float)(int)uVar4;
                                value->vector[0xe].y = (float)(int)(uVar4 >> 0x20);
                                value->vector[0xe].z = fVar3;
                                if (0xf < (uint)value->max_length) {
                                  uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                  value->vector[0xf].x = (float)(int)uVar4;
                                  value->vector[0xf].y = (float)(int)(uVar4 >> 0x20);
                                  value->vector[0xf].z = -fVar3;
                                  if (0x10 < (uint)value->max_length) {
                                    uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                    value->vector[0x10].x = (float)(int)uVar4;
                                    value->vector[0x10].y = (float)(int)(uVar4 >> 0x20);
                                    value->vector[0x10].z = fVar3;
                                    if (0x11 < (uint)value->max_length) {
                                      uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                                      value->vector[0x11].x = (float)(int)uVar4;
                                      value->vector[0x11].y = (float)(int)(uVar4 >> 0x20);
                                      value->vector[0x11].z = fVar3;
                                      if (0x12 < (uint)value->max_length) {
                                        uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                                        value->vector[0x12].x = (float)(int)uVar4;
                                        value->vector[0x12].y = (float)(int)(uVar4 >> 0x20);
                                        value->vector[0x12].z = -fVar3;
                                        if (0x13 < (uint)value->max_length) {
                                          uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                          value->vector[0x13].x = (float)(int)uVar4;
                                          value->vector[0x13].y = (float)(int)(uVar4 >> 0x20);
                                          value->vector[0x13].z = -fVar3;
                                          if (0x14 < (uint)value->max_length) {
                                            uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                                            value->vector[0x14].x = (float)(int)uVar4;
                                            value->vector[0x14].y = (float)(int)(uVar4 >> 0x20);
                                            value->vector[0x14].z = -fVar3;
                                            if (0x15 < (uint)value->max_length) {
                                              value->vector[0x15].x = fVar1;
                                              value->vector[0x15].y = fVar2;
                                              value->vector[0x15].z = -fVar3;
                                              if (0x16 < (uint)value->max_length) {
                                                value->vector[0x16].x = fVar1;
                                                value->vector[0x16].y = fVar2;
                                                value->vector[0x16].z = fVar3;
                                                if (0x17 < (uint)value->max_length) {
                                                  uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                                                  value->vector[0x17].x = (float)(int)uVar4;
                                                  value->vector[0x17].y = (float)(int)(uVar4 >> 0x20);
                                                  value->vector[0x17].z = fVar3;
                                                  value_00 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x18);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  cVar5 = cRam_?;
                                                  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                  uVar7 = (pVVar6->forwardVector).x;
                                                  fVar2 = (pVVar6->forwardVector).z;
                                                  if (value_00 == (Vector3__Array *)0x0) goto code_?;
                                                  if ((int)value_00->max_length != 0) {
                                                    uVar4 = CONCAT44((pVVar6->forwardVector).y,uVar7) ^ 0x8000000080000000;
                                                    value_00->vector[0].x = (float)(int)uVar4;
                                                    value_00->vector[0].y = (float)(int)(uVar4 >> 0x20);
                                                    value_00->vector[0].z = -fVar2;
                                                    if (cVar5 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar5 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                    uVar8 = (pVVar6->forwardVector).x;
                                                    fVar2 = (pVVar6->forwardVector).z;
                                                    if (1 < (uint)value_00->max_length) {
                                                      uVar4 = CONCAT44((pVVar6->forwardVector).y,uVar8) ^ 0x8000000080000000;
                                                      value_00->vector[1].x = (float)(int)uVar4;
                                                      value_00->vector[1].y = (float)(int)(uVar4 >> 0x20);
                                                      value_00->vector[1].z = -fVar2;
                                                      if (cVar5 == '\0') {
                                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                        LOCK();
                                                        UNLOCK();
                                                        cVar5 = '\x01';
                                                        cRam_? = '\x01';
                                                      }
                                                      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                      uVar9 = (pVVar6->forwardVector).x;
                                                      fVar2 = (pVVar6->forwardVector).z;
                                                      if (2 < (uint)value_00->max_length) {
                                                        uVar4 = CONCAT44((pVVar6->forwardVector).y,uVar9) ^ 0x8000000080000000;
                                                        value_00->vector[2].x = (float)(int)uVar4;
                                                        value_00->vector[2].y = (float)(int)(uVar4 >> 0x20);
                                                        value_00->vector[2].z = -fVar2;
                                                        if (cVar5 == '\0') {
                                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                          LOCK();
                                                          UNLOCK();
                                                          cVar5 = '\x01';
                                                          cRam_? = '\x01';
                                                        }
                                                        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                        uVar10 = (pVVar6->forwardVector).x;
                                                        fVar2 = (pVVar6->forwardVector).z;
                                                        if (3 < (uint)value_00->max_length) {
                                                          uVar4 = CONCAT44((pVVar6->forwardVector).y,uVar10) ^ 0x8000000080000000;
                                                          value_00->vector[3].x = (float)(int)uVar4;
                                                          value_00->vector[3].y = (float)(int)(uVar4 >> 0x20);
                                                          value_00->vector[3].z = -fVar2;
                                                          if (cVar5 == '\0') {
                                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                            LOCK();
                                                            UNLOCK();
                                                            cVar5 = '\x01';
                                                            cRam_? = '\x01';
                                                          }
                                                          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                          if (4 < (uint)value_00->max_length) {
                                                            fVar2 = (pVVar6->forwardVector).y;
                                                            value_00->vector[4].x = (pVVar6->forwardVector).x;
                                                            value_00->vector[4].y = fVar2;
                                                            value_00->vector[4].z = (pVVar6->forwardVector).z;
                                                            if (cVar5 == '\0') {
                                                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                              LOCK();
                                                              UNLOCK();
                                                              cVar5 = '\x01';
                                                              cRam_? = '\x01';
                                                            }
                                                            pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                            if (5 < (uint)value_00->max_length) {
                                                              fVar2 = (pVVar6->forwardVector).y;
                                                              value_00->vector[5].x = (pVVar6->forwardVector).x;
                                                              value_00->vector[5].y = fVar2;
                                                              value_00->vector[5].z = (pVVar6->forwardVector).z;
                                                              if (cVar5 == '\0') {
                                                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                LOCK();
                                                                UNLOCK();
                                                                cVar5 = '\x01';
                                                                cRam_? = '\x01';
                                                              }
                                                              pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                              if (6 < (uint)value_00->max_length) {
                                                                fVar2 = (pVVar6->forwardVector).y;
                                                                value_00->vector[6].x = (pVVar6->forwardVector).x;
                                                                value_00->vector[6].y = fVar2;
                                                                value_00->vector[6].z = (pVVar6->forwardVector).z;
                                                                if (cVar5 == '\0') {
                                                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                  LOCK();
                                                                  UNLOCK();
                                                                  cRam_? = '\x01';
                                                                }
                                                                cVar5 = cRam_?;
                                                                pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                if (7 < (uint)value_00->max_length) {
                                                                  fVar2 = (pVVar6->forwardVector).y;
                                                                  value_00->vector[7].x = (pVVar6->forwardVector).x;
                                                                  value_00->vector[7].y = fVar2;
                                                                  value_00->vector[7].z = (pVVar6->forwardVector).z;
                                                                  if (cVar5 == '\0') {
                                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                    LOCK();
                                                                    UNLOCK();
                                                                    cVar5 = '\x01';
                                                                    cRam_? = '\x01';
                                                                  }
                                                                  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                  if (8 < (uint)value_00->max_length) {
                                                                    fVar2 = (pVVar6->upVector).y;
                                                                    value_00->vector[8].x = (pVVar6->upVector).x;
                                                                    value_00->vector[8].y = fVar2;
                                                                    value_00->vector[8].z = (pVVar6->upVector).z;
                                                                    if (cVar5 == '\0') {
                                                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                      LOCK();
                                                                      UNLOCK();
                                                                      cVar5 = '\x01';
                                                                      cRam_? = '\x01';
                                                                    }
                                                                    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                    if (9 < (uint)value_00->max_length) {
                                                                      fVar2 = (pVVar6->upVector).y;
                                                                      value_00->vector[9].x = (pVVar6->upVector).x;
                                                                      value_00->vector[9].y = fVar2;
                                                                      value_00->vector[9].z = (pVVar6->upVector).z;
                                                                      if (cVar5 == '\0') {
                                                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                        LOCK();
                                                                        UNLOCK();
                                                                        cVar5 = '\x01';
                                                                        cRam_? = '\x01';
                                                                      }
                                                                      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                      if (10 < (uint)value_00->max_length) {
                                                                        fVar2 = (pVVar6->upVector).y;
                                                                        value_00->vector[10].x = (pVVar6->upVector).x;
                                                                        value_00->vector[10].y = fVar2;
                                                                        value_00->vector[10].z = (pVVar6->upVector).z;
                                                                        if (cVar5 == '\0') {
                                                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                          LOCK();
                                                                          UNLOCK();
                                                                          cVar5 = '\x01';
                                                                          cRam_? = '\x01';
                                                                        }
                                                                        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                        if (0xb < (uint)value_00->max_length) {
                                                                          fVar2 = (pVVar6->upVector).y;
                                                                          value_00->vector[0xb].x = (pVVar6->upVector).x;
                                                                          value_00->vector[0xb].y = fVar2;
                                                                          value_00->vector[0xb].z = (pVVar6->upVector).z;
                                                                          if (cVar5 == '\0') {
                                                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                            LOCK();
                                                                            UNLOCK();
                                                                            cVar5 = '\x01';
                                                                            cRam_? = '\x01';
                                                                          }
                                                                          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                          uVar11 = (pVVar6->upVector).x;
                                                                          fVar2 = (pVVar6->upVector).z;
                                                                          if (0xc < (uint)value_00->max_length) {
                                                                            uVar4 = CONCAT44((pVVar6->upVector).y,uVar11) ^ 0x8000000080000000;
                                                                            value_00->vector[0xc].x = (float)(int)uVar4;
                                                                            value_00->vector[0xc].y = (float)(int)(uVar4 >> 0x20);
                                                                            value_00->vector[0xc].z = -fVar2;
                                                                            if (cVar5 == '\0') {
                                                                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                              LOCK();
                                                                              UNLOCK();
                                                                              cVar5 = '\x01';
                                                                              cRam_? = '\x01';
                                                                            }
                                                                            pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                            uVar12 = (pVVar6->upVector).x;
                                                                            fVar2 = (pVVar6->upVector).z;
                                                                            if (0xd < (uint)value_00->max_length) {
                                                                              uVar4 = CONCAT44((pVVar6->upVector).y,uVar12) ^ 0x8000000080000000;
                                                                              value_00->vector[0xd].x = (float)(int)uVar4;
                                                                              value_00->vector[0xd].y = (float)(int)(uVar4 >> 0x20);
                                                                              value_00->vector[0xd].z = -fVar2;
                                                                              if (cVar5 == '\0') {
                                                                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                LOCK();
                                                                                UNLOCK();
                                                                                cVar5 = '\x01';
                                                                                cRam_? = '\x01';
                                                                              }
                                                                              pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                              uVar13 = (pVVar6->upVector).x;
                                                                              fVar2 = (pVVar6->upVector).z;
                                                                              if (0xe < (uint)value_00->max_length) {
                                                                                uVar4 = CONCAT44((pVVar6->upVector).y,uVar13) ^ 0x8000000080000000;
                                                                                value_00->vector[0xe].x = (float)(int)uVar4;
                                                                                value_00->vector[0xe].y = (float)(int)(uVar4 >> 0x20);
                                                                                value_00->vector[0xe].z = -fVar2;
                                                                                if (cVar5 == '\0') {
                                                                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                  LOCK();
                                                                                  UNLOCK();
                                                                                  cRam_? = '\x01';
                                                                                }
                                                                                cVar5 = cRam_?;
                                                                                pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                uVar14 = (pVVar6->upVector).x;
                                                                                fVar2 = (pVVar6->upVector).z;
                                                                                if (0xf < (uint)value_00->max_length) {
                                                                                  uVar4 = CONCAT44((pVVar6->upVector).y,uVar14) ^ 0x8000000080000000;
                                                                                  value_00->vector[0xf].x = (float)(int)uVar4;
                                                                                  value_00->vector[0xf].y = (float)(int)(uVar4 >> 0x20);
                                                                                  value_00->vector[0xf].z = -fVar2;
                                                                                  if (cVar5 == '\0') {
                                                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                    LOCK();
                                                                                    UNLOCK();
                                                                                    cVar5 = '\x01';
                                                                                    cRam_? = '\x01';
                                                                                  }
                                                                                  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                  uVar15 = (pVVar6->rightVector).x;
                                                                                  fVar2 = (pVVar6->rightVector).z;
                                                                                  if (0x10 < (uint)value_00->max_length) {
                                                                                    uVar4 = CONCAT44((pVVar6->rightVector).y,uVar15) ^ 0x8000000080000000;
                                                                                    value_00->vector[0x10].x = (float)(int)uVar4;
                                                                                    value_00->vector[0x10].y = (float)(int)(uVar4 >> 0x20);
                                                                                    value_00->vector[0x10].z = -fVar2;
                                                                                    if (cVar5 == '\0') {
                                                                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                      LOCK();
                                                                                      UNLOCK();
                                                                                      cVar5 = '\x01';
                                                                                      cRam_? = '\x01';
                                                                                    }
                                                                                    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                    uVar16 = (pVVar6->rightVector).x;
                                                                                    fVar2 = (pVVar6->rightVector).z;
                                                                                    if (0x11 < (uint)value_00->max_length) {
                                                                                      uVar4 = CONCAT44((pVVar6->rightVector).y,uVar16) ^ 0x8000000080000000;
                                                                                      value_00->vector[0x11].x = (float)(int)uVar4;
                                                                                      value_00->vector[0x11].y = (float)(int)(uVar4 >> 0x20);
                                                                                      value_00->vector[0x11].z = -fVar2;
                                                                                      if (cVar5 == '\0') {
                                                                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                        LOCK();
                                                                                        UNLOCK();
                                                                                        cVar5 = '\x01';
                                                                                        cRam_? = '\x01';
                                                                                      }
                                                                                      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                      uVar17 = (pVVar6->rightVector).x;
                                                                                      fVar2 = (pVVar6->rightVector).z;
                                                                                      if (0x12 < (uint)value_00->max_length) {
                                                                                        uVar4 = CONCAT44((pVVar6->rightVector).y,uVar17) ^ 0x8000000080000000;
                                                                                        value_00->vector[0x12].x = (float)(int)uVar4;
                                                                                        value_00->vector[0x12].y = (float)(int)(uVar4 >> 0x20);
                                                                                        value_00->vector[0x12].z = -fVar2;
                                                                                        if (cVar5 == '\0') {
                                                                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                          LOCK();
                                                                                          UNLOCK();
                                                                                          cVar5 = '\x01';
                                                                                          cRam_? = '\x01';
                                                                                        }
                                                                                        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                        uVar18 = (pVVar6->rightVector).x;
                                                                                        fVar2 = (pVVar6->rightVector).z;
                                                                                        if (0x13 < (uint)value_00->max_length) {
                                                                                          uVar4 = CONCAT44((pVVar6->rightVector).y,uVar18) ^ 0x8000000080000000;
                                                                                          value_00->vector[0x13].x = (float)(int)uVar4;
                                                                                          value_00->vector[0x13].y = (float)(int)(uVar4 >> 0x20);
                                                                                          value_00->vector[0x13].z = -fVar2;
                                                                                          if (cVar5 == '\0') {
                                                                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                            LOCK();
                                                                                            UNLOCK();
                                                                                            cVar5 = '\x01';
                                                                                            cRam_? = '\x01';
                                                                                          }
                                                                                          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                          if (0x14 < (uint)value_00->max_length) {
                                                                                            fVar2 = (pVVar6->rightVector).y;
                                                                                            value_00->vector[0x14].x = (pVVar6->rightVector).x;
                                                                                            value_00->vector[0x14].y = fVar2;
                                                                                            value_00->vector[0x14].z = (pVVar6->rightVector).z;
                                                                                            if (cVar5 == '\0') {
                                                                                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                              LOCK();
                                                                                              UNLOCK();
                                                                                              cVar5 = '\x01';
                                                                                              cRam_? = '\x01';
                                                                                            }
                                                                                            pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                            if (0x15 < (uint)value_00->max_length) {
                                                                                              fVar2 = (pVVar6->rightVector).y;
                                                                                              value_00->vector[0x15].x = (pVVar6->rightVector).x;
                                                                                              value_00->vector[0x15].y = fVar2;
                                                                                              value_00->vector[0x15].z = (pVVar6->rightVector).z;
                                                                                              if (cVar5 == '\0') {
                                                                                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                                LOCK();
                                                                                                UNLOCK();
                                                                                                cVar5 = '\x01';
                                                                                                cRam_? = '\x01';
                                                                                              }
                                                                                              pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                              if (0x16 < (uint)value_00->max_length) {
                                                                                                fVar2 = (pVVar6->rightVector).y;
                                                                                                value_00->vector[0x16].x = (pVVar6->rightVector).x;
                                                                                                value_00->vector[0x16].y = fVar2;
                                                                                                value_00->vector[0x16].z = (pVVar6->rightVector).z;
                                                                                                if (cVar5 == '\0') {
                                                                                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                                  LOCK();
                                                                                                  UNLOCK();
                                                                                                  cRam_? = '\x01';
                                                                                                }
                                                                                                pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                                if (0x17 < (uint)value_00->max_length) {
                                                                                                  fVar2 = (pVVar6->rightVector).y;
                                                                                                  value_00->vector[0x17].x = (pVVar6->rightVector).x;
                                                                                                  value_00->vector[0x17].y = fVar2;
                                                                                                  value_00->vector[0x17].z = (pVVar6->rightVector).z;
                                                                                                  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x24);
                                                                                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__554B713EB1AF9570FCF56A42668A8BD9B94F382B30A05C94E61995332F88FF45_Field,(MethodInfo *)0x0);
                                                                                                  pMVar19 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                                                                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar19,(MethodInfo *)0x0);
                                                                                                  if (pMVar19 != (Mesh *)0x0) {
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar19,value,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar19,value_00,(MethodInfo *)0x0);
                                                                                                    if (cRam_? == '\0') {
                                                                                                      FUN_?(&TypeInfo__UnityEngine__Color);
                                                                                                      LOCK();
                                                                                                      UNLOCK();
                                                                                                      cRam_? = '\x01';
                                                                                                    }
                                                                                                    value_01 = (Color__Array *)FUN_?();
                                                                                                    uVar20 = 0;
                                                                                                    pCVar21 = value_01->vector;
                                                                                                    lVar22 = 0;
                                                                                                    if (value_01 != (Color__Array *)0x0) {
                                                                                                      while (uVar20 < (uint)value_01->max_length) {
                                                                                                        fVar2 = color->g;
                                                                                                        fVar1 = color->b;
                                                                                                        fVar3 = color->a;
                                                                                                        uVar20 = uVar20 + 1;
                                                                                                        lVar22 = lVar22 + 1;
                                                                                                        pCVar21->r = color->r;
                                                                                                        pCVar21->g = fVar2;
                                                                                                        pCVar21->b = fVar1;
                                                                                                        pCVar21->a = fVar3;
                                                                                                        pCVar21 = pCVar21 + 1;
                                                                                                        if (0x17 < lVar22) {
                                                                                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar19,value_01,(MethodInfo *)0x0);
                                                                                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar19,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                                                                                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar19,0,(MethodInfo *)0x0);
                                                                                                          return pMVar19;
                                                                                                        }
                                                                                                      }
                                                                                                      goto DAT_?;
                                                                                                    }
                                                                                                  }
code_?:
                                                                                                  FUN_?();
                                                                                                  pcVar23 = (code *)swi(3);
                                                                                                  pMVar19 = (Mesh *)(*pcVar23)();
                                                                                                  return pMVar19;
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
  pcVar23 = (code *)swi(3);
  pMVar19 = (Mesh *)(*pcVar23)();
  return pMVar19;
}


/* Mesh CreateWireBox(Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::BoxMesh::BoxMesh_CreateWireBox(float width,float height,float depth,Color *color,MethodInfo *method)

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
  if (((width < 0.0001) || (height < 0.0001)) || (depth < 0.0001)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * 0.5;
  fVar2 = height * 0.5;
  fVar3 = depth * 0.5;
  value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x18);
  if (value == (Vector3__Array *)0x0) goto code_?;
  if ((int)value->max_length != 0) {
    uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
    value->vector[0].x = (float)(int)uVar4;
    value->vector[0].y = (float)(int)(uVar4 >> 0x20);
    value->vector[0].z = -fVar3;
    if (1 < (uint)value->max_length) {
      uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
      value->vector[1].x = (float)(int)uVar4;
      value->vector[1].y = (float)(int)(uVar4 >> 0x20);
      value->vector[1].z = -fVar3;
      if (2 < (uint)value->max_length) {
        value->vector[2].x = fVar1;
        value->vector[2].y = fVar2;
        value->vector[2].z = -fVar3;
        if (3 < (uint)value->max_length) {
          uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
          value->vector[3].x = (float)(int)uVar4;
          value->vector[3].y = (float)(int)(uVar4 >> 0x20);
          value->vector[3].z = -fVar3;
          if (4 < (uint)value->max_length) {
            uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
            value->vector[4].x = (float)(int)uVar4;
            value->vector[4].y = (float)(int)(uVar4 >> 0x20);
            value->vector[4].z = fVar3;
            if (5 < (uint)value->max_length) {
              value->vector[5].x = fVar1;
              value->vector[5].y = fVar2;
              value->vector[5].z = fVar3;
              if (6 < (uint)value->max_length) {
                uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                value->vector[6].x = (float)(int)uVar4;
                value->vector[6].y = (float)(int)(uVar4 >> 0x20);
                value->vector[6].z = fVar3;
                if (7 < (uint)value->max_length) {
                  uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                  value->vector[7].x = (float)(int)uVar4;
                  value->vector[7].y = (float)(int)(uVar4 >> 0x20);
                  value->vector[7].z = fVar3;
                  if (8 < (uint)value->max_length) {
                    uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                    value->vector[8].x = (float)(int)uVar4;
                    value->vector[8].y = (float)(int)(uVar4 >> 0x20);
                    value->vector[8].z = -fVar3;
                    if (9 < (uint)value->max_length) {
                      uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                      value->vector[9].x = (float)(int)uVar4;
                      value->vector[9].y = (float)(int)(uVar4 >> 0x20);
                      value->vector[9].z = fVar3;
                      if (10 < (uint)value->max_length) {
                        value->vector[10].x = fVar1;
                        value->vector[10].y = fVar2;
                        value->vector[10].z = fVar3;
                        if (0xb < (uint)value->max_length) {
                          value->vector[0xb].x = fVar1;
                          value->vector[0xb].y = fVar2;
                          value->vector[0xb].z = -fVar3;
                          if (0xc < (uint)value->max_length) {
                            uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                            value->vector[0xc].x = (float)(int)uVar4;
                            value->vector[0xc].y = (float)(int)(uVar4 >> 0x20);
                            value->vector[0xc].z = -fVar3;
                            if (0xd < (uint)value->max_length) {
                              uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                              value->vector[0xd].x = (float)(int)uVar4;
                              value->vector[0xd].y = (float)(int)(uVar4 >> 0x20);
                              value->vector[0xd].z = fVar3;
                              if (0xe < (uint)value->max_length) {
                                uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                value->vector[0xe].x = (float)(int)uVar4;
                                value->vector[0xe].y = (float)(int)(uVar4 >> 0x20);
                                value->vector[0xe].z = fVar3;
                                if (0xf < (uint)value->max_length) {
                                  uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                  value->vector[0xf].x = (float)(int)uVar4;
                                  value->vector[0xf].y = (float)(int)(uVar4 >> 0x20);
                                  value->vector[0xf].z = -fVar3;
                                  if (0x10 < (uint)value->max_length) {
                                    uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                    value->vector[0x10].x = (float)(int)uVar4;
                                    value->vector[0x10].y = (float)(int)(uVar4 >> 0x20);
                                    value->vector[0x10].z = fVar3;
                                    if (0x11 < (uint)value->max_length) {
                                      uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                                      value->vector[0x11].x = (float)(int)uVar4;
                                      value->vector[0x11].y = (float)(int)(uVar4 >> 0x20);
                                      value->vector[0x11].z = fVar3;
                                      if (0x12 < (uint)value->max_length) {
                                        uVar4 = CONCAT44(fVar2,fVar1) ^ 0x80000000;
                                        value->vector[0x12].x = (float)(int)uVar4;
                                        value->vector[0x12].y = (float)(int)(uVar4 >> 0x20);
                                        value->vector[0x12].z = -fVar3;
                                        if (0x13 < (uint)value->max_length) {
                                          uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000080000000;
                                          value->vector[0x13].x = (float)(int)uVar4;
                                          value->vector[0x13].y = (float)(int)(uVar4 >> 0x20);
                                          value->vector[0x13].z = -fVar3;
                                          if (0x14 < (uint)value->max_length) {
                                            uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                                            value->vector[0x14].x = (float)(int)uVar4;
                                            value->vector[0x14].y = (float)(int)(uVar4 >> 0x20);
                                            value->vector[0x14].z = -fVar3;
                                            if (0x15 < (uint)value->max_length) {
                                              value->vector[0x15].x = fVar1;
                                              value->vector[0x15].y = fVar2;
                                              value->vector[0x15].z = -fVar3;
                                              if (0x16 < (uint)value->max_length) {
                                                value->vector[0x16].x = fVar1;
                                                value->vector[0x16].y = fVar2;
                                                value->vector[0x16].z = fVar3;
                                                if (0x17 < (uint)value->max_length) {
                                                  uVar4 = CONCAT44(fVar2,fVar1) ^ 0x8000000000000000;
                                                  value->vector[0x17].x = (float)(int)uVar4;
                                                  value->vector[0x17].y = (float)(int)(uVar4 >> 0x20);
                                                  value->vector[0x17].z = fVar3;
                                                  value_00 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x18);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  cVar5 = cRam_?;
                                                  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                  uVar7 = (pVVar6->forwardVector).x;
                                                  fVar2 = (pVVar6->forwardVector).z;
                                                  if (value_00 == (Vector3__Array *)0x0) goto code_?;
                                                  if ((int)value_00->max_length != 0) {
                                                    uVar4 = CONCAT44((pVVar6->forwardVector).y,uVar7) ^ 0x8000000080000000;
                                                    value_00->vector[0].x = (float)(int)uVar4;
                                                    value_00->vector[0].y = (float)(int)(uVar4 >> 0x20);
                                                    value_00->vector[0].z = -fVar2;
                                                    if (cVar5 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar5 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                    uVar8 = (pVVar6->forwardVector).x;
                                                    fVar2 = (pVVar6->forwardVector).z;
                                                    if (1 < (uint)value_00->max_length) {
                                                      uVar4 = CONCAT44((pVVar6->forwardVector).y,uVar8) ^ 0x8000000080000000;
                                                      value_00->vector[1].x = (float)(int)uVar4;
                                                      value_00->vector[1].y = (float)(int)(uVar4 >> 0x20);
                                                      value_00->vector[1].z = -fVar2;
                                                      if (cVar5 == '\0') {
                                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                        LOCK();
                                                        UNLOCK();
                                                        cVar5 = '\x01';
                                                        cRam_? = '\x01';
                                                      }
                                                      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                      uVar9 = (pVVar6->forwardVector).x;
                                                      fVar2 = (pVVar6->forwardVector).z;
                                                      if (2 < (uint)value_00->max_length) {
                                                        uVar4 = CONCAT44((pVVar6->forwardVector).y,uVar9) ^ 0x8000000080000000;
                                                        value_00->vector[2].x = (float)(int)uVar4;
                                                        value_00->vector[2].y = (float)(int)(uVar4 >> 0x20);
                                                        value_00->vector[2].z = -fVar2;
                                                        if (cVar5 == '\0') {
                                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                          LOCK();
                                                          UNLOCK();
                                                          cVar5 = '\x01';
                                                          cRam_? = '\x01';
                                                        }
                                                        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                        uVar10 = (pVVar6->forwardVector).x;
                                                        fVar2 = (pVVar6->forwardVector).z;
                                                        if (3 < (uint)value_00->max_length) {
                                                          uVar4 = CONCAT44((pVVar6->forwardVector).y,uVar10) ^ 0x8000000080000000;
                                                          value_00->vector[3].x = (float)(int)uVar4;
                                                          value_00->vector[3].y = (float)(int)(uVar4 >> 0x20);
                                                          value_00->vector[3].z = -fVar2;
                                                          if (cVar5 == '\0') {
                                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                            LOCK();
                                                            UNLOCK();
                                                            cVar5 = '\x01';
                                                            cRam_? = '\x01';
                                                          }
                                                          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                          if (4 < (uint)value_00->max_length) {
                                                            fVar2 = (pVVar6->forwardVector).y;
                                                            value_00->vector[4].x = (pVVar6->forwardVector).x;
                                                            value_00->vector[4].y = fVar2;
                                                            value_00->vector[4].z = (pVVar6->forwardVector).z;
                                                            if (cVar5 == '\0') {
                                                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                              LOCK();
                                                              UNLOCK();
                                                              cVar5 = '\x01';
                                                              cRam_? = '\x01';
                                                            }
                                                            pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                            if (5 < (uint)value_00->max_length) {
                                                              fVar2 = (pVVar6->forwardVector).y;
                                                              value_00->vector[5].x = (pVVar6->forwardVector).x;
                                                              value_00->vector[5].y = fVar2;
                                                              value_00->vector[5].z = (pVVar6->forwardVector).z;
                                                              if (cVar5 == '\0') {
                                                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                LOCK();
                                                                UNLOCK();
                                                                cVar5 = '\x01';
                                                                cRam_? = '\x01';
                                                              }
                                                              pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                              if (6 < (uint)value_00->max_length) {
                                                                fVar2 = (pVVar6->forwardVector).y;
                                                                value_00->vector[6].x = (pVVar6->forwardVector).x;
                                                                value_00->vector[6].y = fVar2;
                                                                value_00->vector[6].z = (pVVar6->forwardVector).z;
                                                                if (cVar5 == '\0') {
                                                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                  LOCK();
                                                                  UNLOCK();
                                                                  cRam_? = '\x01';
                                                                }
                                                                cVar5 = cRam_?;
                                                                pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                if (7 < (uint)value_00->max_length) {
                                                                  fVar2 = (pVVar6->forwardVector).y;
                                                                  value_00->vector[7].x = (pVVar6->forwardVector).x;
                                                                  value_00->vector[7].y = fVar2;
                                                                  value_00->vector[7].z = (pVVar6->forwardVector).z;
                                                                  if (cVar5 == '\0') {
                                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                    LOCK();
                                                                    UNLOCK();
                                                                    cVar5 = '\x01';
                                                                    cRam_? = '\x01';
                                                                  }
                                                                  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                  if (8 < (uint)value_00->max_length) {
                                                                    fVar2 = (pVVar6->upVector).y;
                                                                    value_00->vector[8].x = (pVVar6->upVector).x;
                                                                    value_00->vector[8].y = fVar2;
                                                                    value_00->vector[8].z = (pVVar6->upVector).z;
                                                                    if (cVar5 == '\0') {
                                                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                      LOCK();
                                                                      UNLOCK();
                                                                      cVar5 = '\x01';
                                                                      cRam_? = '\x01';
                                                                    }
                                                                    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                    if (9 < (uint)value_00->max_length) {
                                                                      fVar2 = (pVVar6->upVector).y;
                                                                      value_00->vector[9].x = (pVVar6->upVector).x;
                                                                      value_00->vector[9].y = fVar2;
                                                                      value_00->vector[9].z = (pVVar6->upVector).z;
                                                                      if (cVar5 == '\0') {
                                                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                        LOCK();
                                                                        UNLOCK();
                                                                        cVar5 = '\x01';
                                                                        cRam_? = '\x01';
                                                                      }
                                                                      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                      if (10 < (uint)value_00->max_length) {
                                                                        fVar2 = (pVVar6->upVector).y;
                                                                        value_00->vector[10].x = (pVVar6->upVector).x;
                                                                        value_00->vector[10].y = fVar2;
                                                                        value_00->vector[10].z = (pVVar6->upVector).z;
                                                                        if (cVar5 == '\0') {
                                                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                          LOCK();
                                                                          UNLOCK();
                                                                          cVar5 = '\x01';
                                                                          cRam_? = '\x01';
                                                                        }
                                                                        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                        if (0xb < (uint)value_00->max_length) {
                                                                          fVar2 = (pVVar6->upVector).y;
                                                                          value_00->vector[0xb].x = (pVVar6->upVector).x;
                                                                          value_00->vector[0xb].y = fVar2;
                                                                          value_00->vector[0xb].z = (pVVar6->upVector).z;
                                                                          if (cVar5 == '\0') {
                                                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                            LOCK();
                                                                            UNLOCK();
                                                                            cVar5 = '\x01';
                                                                            cRam_? = '\x01';
                                                                          }
                                                                          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                          uVar11 = (pVVar6->upVector).x;
                                                                          fVar2 = (pVVar6->upVector).z;
                                                                          if (0xc < (uint)value_00->max_length) {
                                                                            uVar4 = CONCAT44((pVVar6->upVector).y,uVar11) ^ 0x8000000080000000;
                                                                            value_00->vector[0xc].x = (float)(int)uVar4;
                                                                            value_00->vector[0xc].y = (float)(int)(uVar4 >> 0x20);
                                                                            value_00->vector[0xc].z = -fVar2;
                                                                            if (cVar5 == '\0') {
                                                                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                              LOCK();
                                                                              UNLOCK();
                                                                              cVar5 = '\x01';
                                                                              cRam_? = '\x01';
                                                                            }
                                                                            pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                            uVar12 = (pVVar6->upVector).x;
                                                                            fVar2 = (pVVar6->upVector).z;
                                                                            if (0xd < (uint)value_00->max_length) {
                                                                              uVar4 = CONCAT44((pVVar6->upVector).y,uVar12) ^ 0x8000000080000000;
                                                                              value_00->vector[0xd].x = (float)(int)uVar4;
                                                                              value_00->vector[0xd].y = (float)(int)(uVar4 >> 0x20);
                                                                              value_00->vector[0xd].z = -fVar2;
                                                                              if (cVar5 == '\0') {
                                                                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                LOCK();
                                                                                UNLOCK();
                                                                                cVar5 = '\x01';
                                                                                cRam_? = '\x01';
                                                                              }
                                                                              pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                              uVar13 = (pVVar6->upVector).x;
                                                                              fVar2 = (pVVar6->upVector).z;
                                                                              if (0xe < (uint)value_00->max_length) {
                                                                                uVar4 = CONCAT44((pVVar6->upVector).y,uVar13) ^ 0x8000000080000000;
                                                                                value_00->vector[0xe].x = (float)(int)uVar4;
                                                                                value_00->vector[0xe].y = (float)(int)(uVar4 >> 0x20);
                                                                                value_00->vector[0xe].z = -fVar2;
                                                                                if (cVar5 == '\0') {
                                                                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                  LOCK();
                                                                                  UNLOCK();
                                                                                  cRam_? = '\x01';
                                                                                }
                                                                                cVar5 = cRam_?;
                                                                                pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                uVar14 = (pVVar6->upVector).x;
                                                                                fVar2 = (pVVar6->upVector).z;
                                                                                if (0xf < (uint)value_00->max_length) {
                                                                                  uVar4 = CONCAT44((pVVar6->upVector).y,uVar14) ^ 0x8000000080000000;
                                                                                  value_00->vector[0xf].x = (float)(int)uVar4;
                                                                                  value_00->vector[0xf].y = (float)(int)(uVar4 >> 0x20);
                                                                                  value_00->vector[0xf].z = -fVar2;
                                                                                  if (cVar5 == '\0') {
                                                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                    LOCK();
                                                                                    UNLOCK();
                                                                                    cVar5 = '\x01';
                                                                                    cRam_? = '\x01';
                                                                                  }
                                                                                  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                  uVar15 = (pVVar6->rightVector).x;
                                                                                  fVar2 = (pVVar6->rightVector).z;
                                                                                  if (0x10 < (uint)value_00->max_length) {
                                                                                    uVar4 = CONCAT44((pVVar6->rightVector).y,uVar15) ^ 0x8000000080000000;
                                                                                    value_00->vector[0x10].x = (float)(int)uVar4;
                                                                                    value_00->vector[0x10].y = (float)(int)(uVar4 >> 0x20);
                                                                                    value_00->vector[0x10].z = -fVar2;
                                                                                    if (cVar5 == '\0') {
                                                                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                      LOCK();
                                                                                      UNLOCK();
                                                                                      cVar5 = '\x01';
                                                                                      cRam_? = '\x01';
                                                                                    }
                                                                                    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                    uVar16 = (pVVar6->rightVector).x;
                                                                                    fVar2 = (pVVar6->rightVector).z;
                                                                                    if (0x11 < (uint)value_00->max_length) {
                                                                                      uVar4 = CONCAT44((pVVar6->rightVector).y,uVar16) ^ 0x8000000080000000;
                                                                                      value_00->vector[0x11].x = (float)(int)uVar4;
                                                                                      value_00->vector[0x11].y = (float)(int)(uVar4 >> 0x20);
                                                                                      value_00->vector[0x11].z = -fVar2;
                                                                                      if (cVar5 == '\0') {
                                                                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                        LOCK();
                                                                                        UNLOCK();
                                                                                        cVar5 = '\x01';
                                                                                        cRam_? = '\x01';
                                                                                      }
                                                                                      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                      uVar17 = (pVVar6->rightVector).x;
                                                                                      fVar2 = (pVVar6->rightVector).z;
                                                                                      if (0x12 < (uint)value_00->max_length) {
                                                                                        uVar4 = CONCAT44((pVVar6->rightVector).y,uVar17) ^ 0x8000000080000000;
                                                                                        value_00->vector[0x12].x = (float)(int)uVar4;
                                                                                        value_00->vector[0x12].y = (float)(int)(uVar4 >> 0x20);
                                                                                        value_00->vector[0x12].z = -fVar2;
                                                                                        if (cVar5 == '\0') {
                                                                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                          LOCK();
                                                                                          UNLOCK();
                                                                                          cVar5 = '\x01';
                                                                                          cRam_? = '\x01';
                                                                                        }
                                                                                        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                        uVar18 = (pVVar6->rightVector).x;
                                                                                        fVar2 = (pVVar6->rightVector).z;
                                                                                        if (0x13 < (uint)value_00->max_length) {
                                                                                          uVar4 = CONCAT44((pVVar6->rightVector).y,uVar18) ^ 0x8000000080000000;
                                                                                          value_00->vector[0x13].x = (float)(int)uVar4;
                                                                                          value_00->vector[0x13].y = (float)(int)(uVar4 >> 0x20);
                                                                                          value_00->vector[0x13].z = -fVar2;
                                                                                          if (cVar5 == '\0') {
                                                                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                            LOCK();
                                                                                            UNLOCK();
                                                                                            cVar5 = '\x01';
                                                                                            cRam_? = '\x01';
                                                                                          }
                                                                                          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                          if (0x14 < (uint)value_00->max_length) {
                                                                                            fVar2 = (pVVar6->rightVector).y;
                                                                                            value_00->vector[0x14].x = (pVVar6->rightVector).x;
                                                                                            value_00->vector[0x14].y = fVar2;
                                                                                            value_00->vector[0x14].z = (pVVar6->rightVector).z;
                                                                                            if (cVar5 == '\0') {
                                                                                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                              LOCK();
                                                                                              UNLOCK();
                                                                                              cVar5 = '\x01';
                                                                                              cRam_? = '\x01';
                                                                                            }
                                                                                            pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                            if (0x15 < (uint)value_00->max_length) {
                                                                                              fVar2 = (pVVar6->rightVector).y;
                                                                                              value_00->vector[0x15].x = (pVVar6->rightVector).x;
                                                                                              value_00->vector[0x15].y = fVar2;
                                                                                              value_00->vector[0x15].z = (pVVar6->rightVector).z;
                                                                                              if (cVar5 == '\0') {
                                                                                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                                LOCK();
                                                                                                UNLOCK();
                                                                                                cVar5 = '\x01';
                                                                                                cRam_? = '\x01';
                                                                                              }
                                                                                              pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                              if (0x16 < (uint)value_00->max_length) {
                                                                                                fVar2 = (pVVar6->rightVector).y;
                                                                                                value_00->vector[0x16].x = (pVVar6->rightVector).x;
                                                                                                value_00->vector[0x16].y = fVar2;
                                                                                                value_00->vector[0x16].z = (pVVar6->rightVector).z;
                                                                                                if (cVar5 == '\0') {
                                                                                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                                                                  LOCK();
                                                                                                  UNLOCK();
                                                                                                  cRam_? = '\x01';
                                                                                                }
                                                                                                pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                                                if (0x17 < (uint)value_00->max_length) {
                                                                                                  fVar2 = (pVVar6->rightVector).y;
                                                                                                  value_00->vector[0x17].x = (pVVar6->rightVector).x;
                                                                                                  value_00->vector[0x17].y = fVar2;
                                                                                                  value_00->vector[0x17].z = (pVVar6->rightVector).z;
                                                                                                  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x30);
                                                                                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,_AE6CD589EA34634A4BBCC7D20EE4FD5E07A3E0FB552F0766309FCF026FEAB6E2_Field,(MethodInfo *)0x0);
                                                                                                  pMVar19 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                                                                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar19,(MethodInfo *)0x0);
                                                                                                  if (pMVar19 != (Mesh *)0x0) {
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar19,value,(MethodInfo *)0x0);
                                                                                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar19,value_00,(MethodInfo *)0x0);
                                                                                                    if (cRam_? == '\0') {
                                                                                                      FUN_?(&TypeInfo__UnityEngine__Color);
                                                                                                      LOCK();
                                                                                                      UNLOCK();
                                                                                                      cRam_? = '\x01';
                                                                                                    }
                                                                                                    value_01 = (Color__Array *)FUN_?();
                                                                                                    uVar20 = 0;
                                                                                                    pCVar21 = value_01->vector;
                                                                                                    lVar22 = 0;
                                                                                                    if (value_01 != (Color__Array *)0x0) {
                                                                                                      while (uVar20 < (uint)value_01->max_length) {
                                                                                                        fVar2 = color->g;
                                                                                                        fVar1 = color->b;
                                                                                                        fVar3 = color->a;
                                                                                                        uVar20 = uVar20 + 1;
                                                                                                        lVar22 = lVar22 + 1;
                                                                                                        pCVar21->r = color->r;
                                                                                                        pCVar21->g = fVar2;
                                                                                                        pCVar21->b = fVar1;
                                                                                                        pCVar21->a = fVar3;
                                                                                                        pCVar21 = pCVar21 + 1;
                                                                                                        if (0x17 < lVar22) {
                                                                                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar19,value_01,(MethodInfo *)0x0);
                                                                                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar19,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
                                                                                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar19,0,(MethodInfo *)0x0);
                                                                                                          return pMVar19;
                                                                                                        }
                                                                                                      }
                                                                                                      goto DAT_?;
                                                                                                    }
                                                                                                  }
code_?:
                                                                                                  FUN_?();
                                                                                                  pcVar23 = (code *)swi(3);
                                                                                                  pMVar19 = (Mesh *)(*pcVar23)();
                                                                                                  return pMVar19;
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
  pcVar23 = (code *)swi(3);
  pMVar19 = (Mesh *)(*pcVar23)();
  return pMVar19;
}

