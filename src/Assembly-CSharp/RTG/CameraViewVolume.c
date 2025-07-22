
/* Void CalculateWorldPoints(Camera) */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CalculateWorldPoints
               (CameraViewVolume *this,Camera *camera,MethodInfo *method)

{
  pVVar1 = (Vector3 *)0x0;
  if (camera != (Camera *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    pPVar2 = (this->fields)._worldPlanes;
    if (pPVar2 != (Plane__Array *)0x0) {
      if (pPVar2->max_length < 6) goto code_?;
      uVar3._0_4_ = pPVar2->vector[5].m_Normal.x;
      uVar3._4_4_ = pPVar2->vector[5].m_Normal.y;
      fVar4 = pPVar2->vector[5].m_Normal.z;
      if (this_00 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_6,this_00,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)pVVar5->z;
        fVar7 = (float)((uint)SUB84(uVar3,4) ^
                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        puVar8 = (undefined *)
                  ((uint)fVar4 ^
                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        value_00.y = fVar7;
        value_00.x = (float)((uint)(float)uVar3 ^
                            __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                            );
        value_00.z = (float)puVar8;
        VStack_6.z = (float)puVar8;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (&VStack_6,value_00,method_00);
        uVar9 = pVVar5->x;
        uVar10 = pVVar5->y;
        ray_02.m_Origin.y = (float)puVar8;
        ray_02.m_Origin.x = fVar7;
        ray_02.m_Origin.z = (float)method_00;
        ray_02.m_Direction.x = (float)uVar9;
        ray_02.m_Direction.y = (float)uVar10;
        ray_02.m_Direction.z = pVVar5->z;
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                           ((Plane *)&stack0xffffff9c,ray_02,(float *)&stack0xfffffff8,
                            (MethodInfo *)0x0);
        if (bVar11 == 0) {
code_?:
          pPVar2 = (this->fields)._worldPlanes;
          if (pPVar2 != (Plane__Array *)0x0) {
            if (pPVar2->max_length < 5) goto code_?;
            fVar4 = pPVar2->vector[4].m_Normal.x;
            fVar7 = pPVar2->vector[4].m_Normal.y;
            fVar12 = pPVar2->vector[4].m_Normal.z;
            fVar13 = pPVar2->vector[4].m_Distance;
            fVar14 = fVar12;
            fVar15 = fVar4;
            fVar16 = fVar7;
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
            VStack_6.x = pVVar5->x;
            VStack_6.y = pVVar5->y;
            VStack_6.z = pVVar5->z;
            if (fVar16 * VStack_6.y + fVar15 * VStack_6.x + fVar12 * VStack_6.z + fVar13 < 0.0) {
              uVar17._4_4_ = fVar7;
              uVar17._0_4_ = fVar4;
            }
            else {
              fVar14 = (float)((uint)fVar12 ^
                              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                              );
              uVar17._0_4_ = (float)((uint)fVar15 ^
                                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                    );
              uVar17._4_4_ = (float)((uint)fVar16 ^
                                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                    );
              VStack_6.z = fVar14;
            }
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_6,this_00,(MethodInfo *)0x0);
            fVar12 = pVVar5->x;
            fVar15 = pVVar5->y;
            fVar4 = pVVar5->z;
            value.z = fVar14;
            value.x = (float)uVar17;
            value.y = SUB84(uVar17,4);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                (&VStack_6,value,(MethodInfo *)0x0);
            uVar18 = pVVar5->x;
            uVar19 = pVVar5->y;
            ray_01.m_Origin.y = fVar15;
            ray_01.m_Origin.x = fVar12;
            ray_01.m_Origin.z = fVar4;
            ray_01.m_Direction.x = (float)uVar18;
            ray_01.m_Direction.y = (float)uVar19;
            ray_01.m_Direction.z = pVVar5->z;
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                               ((Plane *)&stack0xffffffd0,ray_01,(float *)&stack0xfffffff8,
                                (MethodInfo *)0x0);
            if (bVar11 == 0) {
              return;
            }
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                (&VStack_6,(Ray *)&stack0xffffff84,(float)pVVar1,(MethodInfo *)0x0
                                );
            fVar14 = pVVar5->x;
            fVar16 = pVVar5->y;
            camera = (Camera *)pVVar5->z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_6.x = (pVVar20->zeroVector).x;
            VStack_6.y = (pVVar20->zeroVector).y;
            VStack_6.z = (pVVar20->zeroVector).z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                ((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
            pCVar21 = camera;
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&stack0xffffffa0,*pVVar5,(MethodInfo *)0x0);
            fVar22 = pVVar5->x;
            uVar23 = pVVar5->y;
            pPVar2 = (this->fields)._worldPlanes;
            if (pPVar2 != (Plane__Array *)0x0) {
              if (pPVar2->max_length < 4) goto code_?;
              ray_04.m_Origin.y = fVar16;
              ray_04.m_Origin.x = fVar14;
              ray_04.m_Origin.z = (float)pCVar21;
              ray_04.m_Direction.x = fVar22;
              ray_04.m_Direction.y = (float)uVar23;
              ray_04.m_Direction.z = pVVar5->z;
              bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                                 ((Plane *)&stack0xffffff9c,ray_04,(float *)&stack0xfffffff8,
                                  (MethodInfo *)0x0);
              if (bVar11 != 0) {
                camera = (Camera *)&UNK_?;
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                    ((Vector3 *)&stack0xffffffa0,(Ray *)&stack0xffffff84,
                                     (float)pVVar1,(MethodInfo *)0x0);
                VStack_6.x = pVVar5->x;
                VStack_6.y = pVVar5->y;
                VStack_6.z = pVVar5->z;
              }
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                  ((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                  ((Vector3 *)&stack0xffffffa0,*pVVar5,(MethodInfo *)0x0);
              uVar24 = pVVar5->x;
              uVar25 = pVVar5->y;
              pPVar2 = (this->fields)._worldPlanes;
              if (pPVar2 != (Plane__Array *)0x0) {
                if (pPVar2->max_length < 2) goto code_?;
                ray_00.m_Origin.y = fVar22;
                ray_00.m_Origin.x = (float)pCVar21;
                ray_00.m_Origin.z = (float)camera;
                ray_00.m_Direction.x = (float)uVar24;
                ray_00.m_Direction.y = (float)uVar25;
                ray_00.m_Direction.z = pVVar5->z;
                bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                                   ((Plane *)&stack0xffffff9c,ray_00,(float *)&stack0xfffffff8,
                                    (MethodInfo *)0x0);
                if (bVar11 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                            ((Vector3 *)&stack0xffffffa0,(Ray *)&stack0xffffff84,(float)pVVar1,
                             (MethodInfo *)0x0);
                }
                fVar26 = (float10)func_?();
                VStack_6.z = VStack_6.z - fVar16;
                fVar4 = (float)fVar26;
                fVar26 = (float10)func_?();
                pVVar27 = (this->fields)._worldPoints;
                fVar14 = 0.0;
                fVar7 = (float)fVar26;
                pTVar28 = this_00;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                    ((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                VStack_6.x = pVVar1->x;
                VStack_6.y = pVVar1->y;
                VStack_6.z = pVVar1->z;
                fVar15 = (float)pTVar28 - VStack_6.x * fVar4;
                fVar14 = fVar14 - VStack_6.y * fVar4;
                fVar12 = fVar16 - VStack_6.z * fVar4;
                fVar13 = 0.0;
                pTVar28 = this_00;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    ((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                uVar29 = pVVar1->x;
                uVar30 = pVVar1->y;
                VStack_6.x = fVar15 + (float)uVar29 * fVar7;
                VStack_6.y = fVar14 + (float)uVar30 * fVar7;
                VStack_6.z = fVar12 + pVVar1->z * fVar7;
                if (pVVar27 != (Vector3__Array *)0x0) {
                  if (pVVar27->max_length == 0) goto code_?;
                  pVVar27->vector[0].x = VStack_6.x;
                  pVVar27->vector[0].y = VStack_6.y;
                  pVVar27->vector[0].z = VStack_6.z;
                  pVVar27 = (this->fields)._worldPoints;
                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                      ((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                  VStack_6.x = pVVar1->x;
                  VStack_6.y = pVVar1->y;
                  VStack_6.z = pVVar1->z;
                  fVar14 = (float)pTVar28 + VStack_6.x * fVar4;
                  fVar7 = fVar13 + VStack_6.y * fVar4;
                  fVar12 = fVar16 + VStack_6.z * fVar4;
                  puVar8 = &UNK_?;
                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                      ((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                  uVar31 = pVVar1->x;
                  uVar32 = pVVar1->y;
                  VStack_6.x = fVar14 + (float)uVar31 * (float)puVar8;
                  VStack_6.y = fVar7 + (float)uVar32 * (float)puVar8;
                  VStack_6.z = fVar12 + pVVar1->z * (float)puVar8;
                  if (pVVar27 != (Vector3__Array *)0x0) {
                    if (pVVar27->max_length < 2) goto code_?;
                    pVVar27->vector[1].x = VStack_6.x;
                    pVVar27->vector[1].y = VStack_6.y;
                    pVVar27->vector[1].z = VStack_6.z;
                    pVVar27 = (this->fields)._worldPoints;
                    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_right((Vector3 *)&stack0xffffffa0,this_00,
                                                  (MethodInfo *)0x0);
                    VStack_6.x = pVVar1->x;
                    VStack_6.y = pVVar1->y;
                    VStack_6.z = pVVar1->z;
                    fVar14 = (float)pTVar28 + VStack_6.x * fVar4;
                    fVar7 = fVar13 + VStack_6.y * fVar4;
                    fVar12 = fVar16 + VStack_6.z * fVar4;
                    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                        ((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                    uVar33 = pVVar1->x;
                    uVar34 = pVVar1->y;
                    VStack_6.x = fVar14 - (float)uVar33 * (float)puVar8;
                    VStack_6.y = fVar7 - (float)uVar34 * (float)puVar8;
                    VStack_6.z = fVar12 - pVVar1->z * (float)puVar8;
                    if (pVVar27 != (Vector3__Array *)0x0) {
                      if (pVVar27->max_length < 3) goto code_?;
                      pVVar27->vector[2].x = VStack_6.x;
                      pVVar27->vector[2].y = VStack_6.y;
                      pVVar27->vector[2].z = VStack_6.z;
                      pVVar27 = (this->fields)._worldPoints;
                      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_right((Vector3 *)&stack0xffffffa0,this_00,
                                                    (MethodInfo *)0x0);
                      VStack_6.x = pVVar1->x;
                      VStack_6.y = pVVar1->y;
                      VStack_6.z = pVVar1->z;
                      fVar7 = VStack_6.x * fVar4;
                      fVar13 = fVar13 - VStack_6.y * fVar4;
                      fVar16 = fVar16 - VStack_6.z * fVar4;
                      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                          ((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                      uVar35 = pVVar1->x;
                      uVar36 = pVVar1->y;
                      VStack_6.x = ((float)pTVar28 - fVar7) - (float)uVar35 * (float)puVar8;
                      VStack_6.y = fVar13 - (float)uVar36 * (float)puVar8;
                      VStack_6.z = fVar16 - pVVar1->z * (float)puVar8;
                      if (pVVar27 != (Vector3__Array *)0x0) {
                        if (3 < pVVar27->max_length) {
                          pVVar27->vector[3].x = VStack_6.x;
                          pVVar27->vector[3].y = VStack_6.y;
                          pVVar27->vector[3].z = VStack_6.z;
                          return;
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
        else {
          VStack_6.z = (float)&UNK_?;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                              (&VStack_6,(Ray *)&stack0xffffff84,(float)pVVar1,(MethodInfo *)0x0);
          fVar4 = pVVar5->x;
          fVar7 = pVVar5->y;
          camera = (Camera *)pVVar5->z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          fVar12 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              (&VStack_6,this_00,(MethodInfo *)0x0);
          puVar8 = &UNK_?;
          pCVar21 = camera;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              (&VStack_6,*pVVar5,(MethodInfo *)0x0);
          fVar13 = pVVar5->x;
          uVar37 = pVVar5->y;
          pPVar2 = (this->fields)._worldPlanes;
          if (pPVar2 != (Plane__Array *)0x0) {
            if (pPVar2->max_length < 4) goto code_?;
            ray_03.m_Origin.y = fVar7;
            ray_03.m_Origin.x = fVar4;
            ray_03.m_Origin.z = (float)pCVar21;
            ray_03.m_Direction.x = fVar13;
            ray_03.m_Direction.y = (float)uVar37;
            ray_03.m_Direction.z = pVVar5->z;
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                               ((Plane *)&stack0xffffff9c,ray_03,(float *)&stack0xfffffff8,
                                (MethodInfo *)0x0);
            if (bVar11 != 0) {
              camera = (Camera *)&UNK_?;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                  (&VStack_6,(Ray *)&stack0xffffff84,(float)pVVar1,
                                   (MethodInfo *)0x0);
              fVar12 = pVVar5->z;
            }
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                (&VStack_6,this_00,(MethodInfo *)0x0);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                (&VStack_6,*pVVar5,(MethodInfo *)0x0);
            uVar38 = pVVar5->x;
            uVar39 = pVVar5->y;
            pPVar2 = (this->fields)._worldPlanes;
            if (pPVar2 != (Plane__Array *)0x0) {
              if (pPVar2->max_length < 2) goto code_?;
              ray.m_Origin.y = fVar13;
              ray.m_Origin.x = (float)pCVar21;
              ray.m_Origin.z = (float)camera;
              ray.m_Direction.x = (float)uVar38;
              ray.m_Direction.y = (float)uVar39;
              ray.m_Direction.z = pVVar5->z;
              bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                                 ((Plane *)&stack0xffffff9c,ray,(float *)&stack0xfffffff8,
                                  (MethodInfo *)0x0);
              if (bVar11 != 0) {
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                    (&VStack_6,(Ray *)&stack0xffffff84,(float)pVVar1,
                                     (MethodInfo *)0x0);
                puVar8 = (undefined *)pVVar1->z;
              }
              VStack_6.z = (float)puVar8 - fVar7;
              fVar26 = (float10)func_?();
              VStack_6.z = fVar12 - fVar7;
              fVar4 = (float)fVar26;
              fVar26 = (float10)func_?();
              pVVar27 = (this->fields)._worldPoints;
              fVar15 = 0.0;
              fVar12 = (float)fVar26;
              pTVar28 = this_00;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                  ((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
              VStack_6.x = pVVar1->x;
              VStack_6.y = pVVar1->y;
              VStack_6.z = pVVar1->z;
              fVar16 = (float)pTVar28 - VStack_6.x * fVar4;
              fVar15 = fVar15 - VStack_6.y * fVar4;
              fVar13 = fVar7 - VStack_6.z * fVar4;
              fVar14 = 0.0;
              pTVar28 = this_00;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
              uVar40 = pVVar1->x;
              uVar41 = pVVar1->y;
              VStack_6.x = fVar16 + (float)uVar40 * fVar12;
              VStack_6.y = fVar15 + (float)uVar41 * fVar12;
              VStack_6.z = fVar13 + pVVar1->z * fVar12;
              if (pVVar27 != (Vector3__Array *)0x0) {
                if (pVVar27->max_length < 5) goto code_?;
                pVVar27->vector[4].x = VStack_6.x;
                pVVar27->vector[4].y = VStack_6.y;
                pVVar27->vector[4].z = VStack_6.z;
                pVVar27 = (this->fields)._worldPoints;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                    ((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
                VStack_6.x = pVVar1->x;
                VStack_6.y = pVVar1->y;
                VStack_6.z = pVVar1->z;
                fVar15 = VStack_6.x * fVar4 + (float)pTVar28;
                fVar13 = VStack_6.y * fVar4 + fVar14;
                fVar12 = VStack_6.z * fVar4 + fVar7;
                pVVar1 = (Vector3 *)&stack0xffffffb8;
                puVar8 = &UNK_?;
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    (pVVar1,this_00,(MethodInfo *)0x0);
                uVar42 = pVVar5->x;
                uVar43 = pVVar5->y;
                VStack_6.x = fVar15 + (float)uVar42 * (float)puVar8;
                VStack_6.y = fVar13 + (float)uVar43 * (float)puVar8;
                VStack_6.z = fVar12 + pVVar5->z * (float)puVar8;
                if (pVVar27 != (Vector3__Array *)0x0) {
                  if (pVVar27->max_length < 6) goto code_?;
                  pVVar27->vector[5].x = VStack_6.x;
                  pVVar27->vector[5].y = VStack_6.y;
                  pVVar27->vector[5].z = VStack_6.z;
                  pVVar27 = (this->fields)._worldPoints;
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                      ((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
                  VStack_6.x = pVVar5->x;
                  VStack_6.y = pVVar5->y;
                  VStack_6.z = pVVar5->z;
                  fVar15 = (float)pTVar28 + VStack_6.x * fVar4;
                  fVar12 = fVar14 + VStack_6.y * fVar4;
                  fVar13 = fVar7 + VStack_6.z * fVar4;
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                      ((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
                  uVar44 = pVVar5->x;
                  uVar45 = pVVar5->y;
                  VStack_6.x = fVar15 - (float)uVar44 * (float)puVar8;
                  VStack_6.y = fVar12 - (float)uVar45 * (float)puVar8;
                  VStack_6.z = fVar13 - pVVar5->z * (float)puVar8;
                  if (pVVar27 != (Vector3__Array *)0x0) {
                    if (pVVar27->max_length < 7) goto code_?;
                    pVVar27->vector[6].x = VStack_6.x;
                    pVVar27->vector[6].y = VStack_6.y;
                    pVVar27->vector[6].z = VStack_6.z;
                    pVVar27 = (this->fields)._worldPoints;
                    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_right((Vector3 *)&stack0xffffffb8,this_00,
                                                  (MethodInfo *)0x0);
                    VStack_6.x = pVVar5->x;
                    VStack_6.y = pVVar5->y;
                    VStack_6.z = pVVar5->z;
                    fVar12 = VStack_6.x * fVar4;
                    fVar14 = fVar14 - VStack_6.y * fVar4;
                    fVar7 = fVar7 - VStack_6.z * fVar4;
                    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                        ((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
                    uVar46 = pVVar5->x;
                    uVar47 = pVVar5->y;
                    VStack_6.x = ((float)pTVar28 - fVar12) - (float)uVar46 * (float)puVar8;
                    VStack_6.y = fVar14 - (float)uVar47 * (float)puVar8;
                    VStack_6.z = fVar7 - pVVar5->z * (float)puVar8;
                    if (pVVar27 != (Vector3__Array *)0x0) {
                      if (pVVar27->max_length < 8) goto code_?;
                      pVVar27->vector[7].x = VStack_6.x;
                      pVVar27->vector[7].y = VStack_6.y;
                      pVVar27->vector[7].z = VStack_6.z;
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
  func_?();
code_?:
  func_?();
  pcVar48 = (code *)swi(3);
  (*pcVar48)();
  return;
}


/* Boolean CheckAABB(AABB) */

bool Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CheckAABB
               (CameraViewVolume *this,AABB aabb,MethodInfo *method)

{
  planes = (this->fields)._worldPlanes;
  pBVar1 = AABB::AABB_ToBounds((Bounds *)&stack0xffffffe4,&aabb,(MethodInfo *)0x0);
  uVar2 = (pBVar1->m_Extents).z;
  uVar3 = (pBVar1->m_Center).x;
  uVar4 = (pBVar1->m_Center).y;
  uVar5 = (pBVar1->m_Center).z;
  bounds.m_Center.z = (float)uVar5;
  bounds.m_Center.y = (float)uVar4;
  bounds.m_Center.x = (float)uVar3;
  uVar6 = (pBVar1->m_Extents).x;
  uVar7 = (pBVar1->m_Extents).y;
  bounds.m_Extents.y = (float)uVar7;
  bounds.m_Extents.x = (float)uVar6;
  bounds.m_Extents.z = (float)uVar2;
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::GeometryUtility_TestPlanesAABB
                    (planes,bounds,(MethodInfo *)0x0);
  return bVar8;
}


/* Boolean CheckAABB(Camera, AABB) */

bool Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CheckAABB_1
               (Camera *camera,AABB aabb,MethodInfo *method)

{
  stack0xfffffffc = unaff_EBP;
  if (camera != (Camera *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_projectionMatrix
                        ((Matrix4x4 *)&stack0xffffff74,camera,(MethodInfo *)0x0);
    auVar2 = _auStack_34;
    fStack_3 = pMVar1->m00;
    fStack_4 = pMVar1->m10;
    fStack_5 = pMVar1->m20;
    stack0xfffffffc = auVar2._48_4_;
    fStack_6 = pMVar1->m30;
    auVar7 = _auStack_34;
    auStack_8 = auVar2._0_16_;
    fStack_9 = pMVar1->m01;
    fStack_10 = pMVar1->m11;
    fStack_11 = pMVar1->m21;
    _fStack_14 = auVar7._32_20_;
    fStack_12 = pMVar1->m31;
    auVar2 = _auStack_34;
    uVar13 = pMVar1->m02;
    uVar14 = pMVar1->m12;
    uVar15 = pMVar1->m22;
    uVar16 = pMVar1->m32;
    auStack_8._12_4_ = uVar16;
    auStack_8._8_4_ = uVar15;
    auStack_8._4_4_ = uVar14;
    auStack_8._0_4_ = uVar13;
    _fStack_24 = auVar2._16_36_;
    BStack_17.m_Center.z = pMVar1->m03;
    BStack_17.m_Extents.x = pMVar1->m13;
    BStack_17.m_Extents.y = pMVar1->m23;
    BStack_17.m_Extents.z = pMVar1->m33;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                        ((Matrix4x4 *)&stack0xffffff74,camera,(MethodInfo *)0x0);
    auVar18 = auStack_8._32_16_;
    lhs.m01 = fStack_9;
    lhs.m00 = (float)auVar18._0_4_;
    lhs.m10 = (float)auVar18._4_4_;
    lhs.m20 = (float)auVar18._8_4_;
    lhs.m30 = (float)auVar18._12_4_;
    lhs.m11 = fStack_10;
    lhs.m21 = fStack_11;
    lhs.m31 = fStack_12;
    lhs.m02 = (float)auStack_8._0_4_;
    lhs.m12 = (float)auStack_8._4_4_;
    lhs.m22 = (float)auStack_8._8_4_;
    lhs.m32 = (float)auStack_8._12_4_;
    lhs.m03 = BStack_17.m_Center.z;
    lhs.m13 = BStack_17.m_Extents.x;
    lhs.m23 = BStack_17.m_Extents.y;
    lhs.m33 = BStack_17.m_Extents.z;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        ((Matrix4x4 *)&stack0xffffff74,lhs,*pMVar1,(MethodInfo *)0x0);
    aabb._size.y = 0.0;
    auStack_8._0_4_ = pMVar1->m00;
    auStack_8._4_4_ = pMVar1->m10;
    auStack_8._8_4_ = pMVar1->m20;
    auStack_8._12_4_ = pMVar1->m30;
    fStack_9 = pMVar1->m01;
    fStack_10 = pMVar1->m11;
    fStack_11 = pMVar1->m21;
    fStack_12 = pMVar1->m31;
    fStack_3 = pMVar1->m02;
    fStack_4 = pMVar1->m12;
    fStack_5 = pMVar1->m22;
    fStack_6 = pMVar1->m32;
    unique0x10000cb3 = pMVar1->m03;
    aabb._size.x = pMVar1->m33;
    BStack_17.m_Extents.z = (float)&UNK_?;
    planes = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::
             GeometryUtility_CalculateFrustumPlanes(*pMVar1,(MethodInfo *)0x0);
    aabb._size.x = (float)&aabb;
    aabb._size.y = 0.0;
    pBVar19 = AABB::AABB_ToBounds(&BStack_17,(AABB *)aabb._size.x,(MethodInfo *)0x0);
    bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::GeometryUtility_TestPlanesAABB
                      (planes,*pBVar19,(MethodInfo *)0x0);
    return bVar20;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  bVar20 = (*pcVar21)();
  return bVar20;
}


/* Boolean CheckAABB(Camera, AABB, Plane[]) */

bool Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CheckAABB_2
               (Camera *camera,AABB aabb,Plane__Array *cameraWorldPlanes,MethodInfo *method)

{
  pBVar1 = AABB::AABB_ToBounds((Bounds *)&stack0xffffffe4,&aabb,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::GeometryUtility_TestPlanesAABB
                    (cameraWorldPlanes,*pBVar1,(MethodInfo *)0x0);
  return bVar2;
}


/* Void FromCamera(Camera) */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_FromCamera
               (CameraViewVolume *this,Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_projectionMatrix
                       ((Matrix4x4 *)&stack0xffffff10,camera,(MethodInfo *)0x0);
    QStack_2.x = pMVar1->m00;
    QStack_2.y = pMVar1->m10;
    QStack_2.z = pMVar1->m20;
    QStack_2.w = pMVar1->m30;
    VStack_3.x = pMVar1->m01;
    VStack_3.y = pMVar1->m11;
    VStack_3.z = pMVar1->m21;
    fStack_4 = pMVar1->m31;
    fStack_5 = pMVar1->m02;
    uStack_6._0_4_ = pMVar1->m12;
    uStack_6._4_4_ = pMVar1->m22;
    fStack_7 = pMVar1->m32;
    fStack_8 = pMVar1->m03;
    VStack_9.x = pMVar1->m13;
    VStack_9.y = pMVar1->m23;
    fStack_10 = pMVar1->m33;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                       ((Matrix4x4 *)&stack0xffffff10,camera,(MethodInfo *)0x0);
    lhs.m10 = QStack_2.y;
    lhs.m00 = QStack_2.x;
    lhs.m20 = QStack_2.z;
    lhs.m30 = QStack_2.w;
    lhs.m01 = VStack_3.x;
    lhs.m11 = VStack_3.y;
    lhs.m21 = VStack_3.z;
    lhs.m31 = fStack_4;
    lhs.m02 = fStack_5;
    lhs.m12 = (float)uStack_6;
    lhs.m22 = uStack_6._4_4_;
    lhs.m32 = fStack_7;
    lhs.m03 = fStack_8;
    lhs.m13 = VStack_9.x;
    lhs.m23 = VStack_9.y;
    lhs.m33 = fStack_10;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                       ((Matrix4x4 *)&stack0xffffff10,lhs,*pMVar1,(MethodInfo *)0x0);
    fVar11 = pMVar1->m10;
    fVar12 = pMVar1->m20;
    fVar13 = pMVar1->m30;
    fVar14 = pMVar1->m01;
    fVar15 = pMVar1->m11;
    fVar16 = pMVar1->m21;
    fVar17 = pMVar1->m31;
    fVar18 = pMVar1->m02;
    fVar19 = pMVar1->m12;
    fVar20 = pMVar1->m22;
    fVar21 = pMVar1->m32;
    pPVar22 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::
             GeometryUtility_CalculateFrustumPlanes(*pMVar1,(MethodInfo *)0x0);
    (this->fields)._worldPlanes = pPVar22;
    func_?();
    CameraViewVolume_CalculateWorldPoints(this,camera,(MethodInfo *)0x0);
    pVVar23 = (this->fields)._worldPoints;
    if (pVVar23 != (Vector3__Array *)0x0) {
      if (pVVar23->max_length < 5) goto code_?;
      VStack_9 = *(Vector2 *)(pVVar23->vector + 4);
      fStack_10 = pVVar23->vector[4].z;
      pVVar23 = (this->fields)._worldPoints;
      if (pVVar23 != (Vector3__Array *)0x0) {
        if (pVVar23->max_length < 6) goto code_?;
        uStack_6._0_4_ = pVVar23->vector[5].x;
        uStack_6._4_4_ = pVVar23->vector[5].y;
        fStack_7 = pVVar23->vector[5].z;
        fStack_10 = fStack_10 - fStack_7;
        VStack_3.z = fStack_10;
        VStack_9.y = VStack_9.y - uStack_6._4_4_;
        VStack_9.x = VStack_9.x - (float)uStack_6;
        fVar24 = (float10)func_?(&VStack_9,0);
        (this->fields)._farPlaneSize.x = (float)fVar24;
        pVVar23 = (this->fields)._worldPoints;
        if (pVVar23 != (Vector3__Array *)0x0) {
          if (pVVar23->max_length < 5) goto code_?;
          uStack_6._0_4_ = pVVar23->vector[4].x;
          uStack_6._4_4_ = pVVar23->vector[4].y;
          fStack_7 = pVVar23->vector[4].z;
          pVVar23 = (this->fields)._worldPoints;
          if (pVVar23 != (Vector3__Array *)0x0) {
            if (pVVar23->max_length < 8) goto code_?;
            uVar25 = pVVar23->vector[7].x;
            uVar26 = pVVar23->vector[7].y;
            fStack_4 = pVVar23->vector[7].z;
            fStack_10 = fStack_7 - fStack_4;
            VStack_3.z = fStack_10;
            VStack_3.y = (float)uVar25;
            VStack_9.y = uStack_6._4_4_ - (float)uVar26;
            VStack_9.x = (float)uStack_6 - (float)uVar25;
            fVar24 = (float10)func_?(&VStack_9,0);
            (this->fields)._farPlaneSize.y = (float)fVar24;
            pVVar23 = (this->fields)._worldPoints;
            if (pVVar23 != (Vector3__Array *)0x0) {
              if (pVVar23->max_length == 0) goto code_?;
              VStack_3.y = pVVar23->vector[0].x;
              VStack_3.z = pVVar23->vector[0].y;
              fStack_4 = pVVar23->vector[0].z;
              pVVar23 = (this->fields)._worldPoints;
              if (pVVar23 != (Vector3__Array *)0x0) {
                if (pVVar23->max_length < 2) goto code_?;
                uStack_6._0_4_ = pVVar23->vector[1].x;
                uStack_6._4_4_ = pVVar23->vector[1].y;
                fStack_7 = pVVar23->vector[1].z;
                fVar27 = VStack_3.z - uStack_6._4_4_;
                fStack_10 = fStack_4 - fStack_7;
                VStack_3.z = fStack_10;
                VStack_9.y = fVar27;
                VStack_9.x = VStack_3.y - (float)uStack_6;
                fVar24 = (float10)func_?(&VStack_9,0);
                (this->fields)._nearPlaneSize.x = (float)fVar24;
                pVVar23 = (this->fields)._worldPoints;
                if (pVVar23 != (Vector3__Array *)0x0) {
                  if (pVVar23->max_length == 0) goto code_?;
                  VStack_3.y = pVVar23->vector[0].x;
                  VStack_3.z = pVVar23->vector[0].y;
                  fStack_4 = pVVar23->vector[0].z;
                  pVVar23 = (this->fields)._worldPoints;
                  if (pVVar23 != (Vector3__Array *)0x0) {
                    if (pVVar23->max_length < 4) goto code_?;
                    uStack_6._0_4_ = pVVar23->vector[3].x;
                    uStack_6._4_4_ = pVVar23->vector[3].y;
                    fStack_7 = pVVar23->vector[3].z;
                    fVar27 = VStack_3.z - uStack_6._4_4_;
                    fStack_10 = fStack_4 - fStack_7;
                    VStack_3.z = fStack_10;
                    VStack_9.y = fVar27;
                    VStack_9.x = VStack_3.y - (float)uStack_6;
                    fVar24 = (float10)func_?(&VStack_9,0);
                    (this->fields)._nearPlaneSize.y = (float)fVar24;
                    uVar28._0_4_ = 0.0;
                    uVar28._4_4_ = 0.0;
                    fVar27 = 0.0;
                    fVar29 = 0.0;
                    fVar30 = 0.0;
                    fVar31 = 0.0;
                    AABB::AABB__ctor_2((AABB *)&stack0xffffff8c,
                                       (IEnumerable_1_UnityEngine_Vector3_ *)
                                       (this->fields)._worldPoints,(MethodInfo *)0x0);
                    (this->fields)._worldAABB._size.x = fVar27;
                    (this->fields)._worldAABB._size.y = fVar29;
                    (this->fields)._worldAABB._size.z = fVar30;
                    (this->fields)._worldAABB._center.x = fVar31;
                    (this->fields)._worldAABB._center.y = (float)uVar28;
                    (this->fields)._worldAABB._center.z = uVar28._4_4_;
                    *(undefined4 *)&(this->fields)._worldAABB._isValid = 0;
                    VStack_9 = (this->fields)._farPlaneSize;
                    pTStack_32 = (Transform *)
                                 UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                 Camera_get_farClipPlane(camera,(MethodInfo *)0x0);
                    fStack_10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_get_nearClipPlane(camera,(MethodInfo *)0x0);
                    fStack_10 = (float)pTStack_32 - fStack_10;
                    pTStack_32 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_transform((Component *)camera,(MethodInfo *)0x0);
                    if (pTStack_32 != (Transform *)0x0) {
                      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_position(&VStack_3,pTStack_32,(MethodInfo *)0x0);
                      uStack_6._0_4_ = pVVar33->x;
                      uStack_6._4_4_ = pVVar33->y;
                      fStack_7 = pVVar33->z;
                      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_forward
                                         ((Vector3 *)&QStack_2,pTStack_32,(MethodInfo *)0x0);
                      VStack_3.y = pVVar33->x;
                      VStack_3.z = pVVar33->y;
                      fStack_4 = pVVar33->z;
                      fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                               Camera_get_nearClipPlane(camera,(MethodInfo *)0x0);
                      fVar27 = fVar27 + fStack_10 * _UNK_?;
                      fVar29 = (float)uStack_6 + VStack_3.y * fVar27;
                      fStack_34 = uStack_6._4_4_ + VStack_3.z * fVar27;
                      VStack_3.z = fStack_7 + fStack_4 * fVar27;
                      pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_rotation(&QStack_2,pTStack_32,(MethodInfo *)0x0);
                      QStack_2.x = pQVar35->x;
                      QStack_2.y = pQVar35->y;
                      QStack_2.z = pQVar35->z;
                      QStack_2.w = pQVar35->w;
                      func_?(&stack0xffffff60,0,0x2c);
                      center.y = fStack_34;
                      center.x = fVar29;
                      center.z = VStack_3.z;
                      size.z = fStack_10;
                      size.x = VStack_9.x;
                      size.y = VStack_9.y;
                      rotation.y = QStack_2.y;
                      rotation.x = QStack_2.x;
                      rotation.z = QStack_2.z;
                      rotation.w = QStack_2.w;
                      OBB::OBB__ctor_1((OBB *)&stack0xffffff60,center,size,rotation,
                                       (MethodInfo *)0x0);
                      (this->fields)._worldOBB._size.x = fVar11;
                      (this->fields)._worldOBB._size.y = fVar12;
                      (this->fields)._worldOBB._size.z = fVar13;
                      (this->fields)._worldOBB._center.x = fVar14;
                      (this->fields)._worldOBB._center.y = fVar15;
                      (this->fields)._worldOBB._center.z = fVar16;
                      (this->fields)._worldOBB._rotation.x = fVar17;
                      (this->fields)._worldOBB._rotation.y = fVar18;
                      (this->fields)._worldOBB._rotation.z = fVar19;
                      (this->fields)._worldOBB._rotation.w = fVar20;
                      *(float *)&(this->fields)._worldOBB._isValid = fVar21;
                      return;
                    }
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
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Plane[] GetCameraWorldPlanes(Camera) */

Plane__Array *
Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_GetCameraWorldPlanes
          (Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_projectionMatrix
                        ((Matrix4x4 *)&stack0xffffff7c,camera,(MethodInfo *)0x0);
    fVar2 = pMVar1->m20;
    fVar3 = pMVar1->m30;
    fStack_4 = pMVar1->m00;
    fStack_5 = pMVar1->m10;
    fVar6 = pMVar1->m01;
    fVar7 = pMVar1->m11;
    fVar8 = pMVar1->m21;
    fVar9 = pMVar1->m31;
    fVar10 = pMVar1->m02;
    fVar11 = pMVar1->m12;
    uVar12 = pMVar1->m22;
    uVar13 = pMVar1->m32;
    fVar14 = pMVar1->m03;
    fVar15 = pMVar1->m13;
    fVar16 = pMVar1->m23;
    fVar17 = pMVar1->m33;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                        ((Matrix4x4 *)&stack0xffffff7c,camera,(MethodInfo *)0x0);
    lhs.m20 = fVar2;
    lhs.m00 = (float)(int)uStack_18._24_8_;
    lhs.m10 = (float)(int)((ulonglong)uStack_18._24_8_ >> 0x20);
    lhs.m30 = fVar3;
    lhs.m01 = fVar6;
    lhs.m11 = fVar7;
    lhs.m21 = fVar8;
    lhs.m31 = fVar9;
    lhs.m02 = fVar10;
    lhs.m12 = fVar11;
    lhs.m22 = (float)uVar12;
    lhs.m32 = (float)uVar13;
    lhs.m03 = fVar14;
    lhs.m13 = fVar15;
    lhs.m23 = fVar16;
    lhs.m33 = fVar17;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        ((Matrix4x4 *)&stack0xffffff7c,lhs,*pMVar1,(MethodInfo *)0x0);
    uStack19 = 0;
    pPVar20 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::
              GeometryUtility_CalculateFrustumPlanes(*pMVar1,(MethodInfo *)0x0);
    return pPVar20;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  pPVar20 = (Plane__Array *)(*pcVar21)();
  return pPVar20;
}


/* List`1[UnityEngine.Vector3] GetNearPlanePoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_GetNearPlanePoints
          (CameraViewVolume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pVVar2 = (this->fields)._worldPoints;
  if (pVVar2 != (Vector3__Array *)0x0) {
    if (pVVar2->max_length == 0) goto code_?;
    if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
      uVar3._0_4_ = pVVar2->vector[0].x;
      uVar3._4_4_ = pVVar2->vector[0].y;
      func_?(pLVar1,uVar3,pVVar2->vector[0].z,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                     );
      pVVar2 = (this->fields)._worldPoints;
      if (pVVar2 != (Vector3__Array *)0x0) {
        if (pVVar2->max_length < 2) goto code_?;
        uVar4._0_4_ = pVVar2->vector[1].x;
        uVar4._4_4_ = pVVar2->vector[1].y;
        func_?(pLVar1,uVar4,pVVar2->vector[1].z,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
        pVVar2 = (this->fields)._worldPoints;
        if (pVVar2 != (Vector3__Array *)0x0) {
          if (pVVar2->max_length < 3) goto code_?;
          uVar5._0_4_ = pVVar2->vector[2].x;
          uVar5._4_4_ = pVVar2->vector[2].y;
          func_?(pLVar1,uVar5,pVVar2->vector[2].z,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                         );
          pVVar2 = (this->fields)._worldPoints;
          if (pVVar2 != (Vector3__Array *)0x0) {
            if (3 < pVVar2->max_length) {
              uVar6._0_4_ = pVVar2->vector[3].x;
              uVar6._4_4_ = pVVar2->vector[3].y;
              func_?(pLVar1,uVar6,pVVar2->vector[3].z,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                             );
              return pLVar1;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar7)();
  return pLVar1;
}


/* CameraViewVolume() */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume__ctor
               (CameraViewVolume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Plane);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  (this->fields)._worldPoints = pVVar1;
  func_?(&this->fields,pVVar1);
  pPVar2 = (Plane__Array *)func_?(TypeInfo__UnityEngine__Plane,6);
  (this->fields)._worldPlanes = pPVar2;
  func_?(&(this->fields)._worldPlanes,pPVar2);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._farPlaneSize.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._farPlaneSize.y = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._nearPlaneSize.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._nearPlaneSize.y = fVar3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* CameraViewVolume(Camera) */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume__ctor_1
               (CameraViewVolume *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Plane);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  (this->fields)._worldPoints = pVVar1;
  func_?(&this->fields,pVVar1);
  pPVar2 = (Plane__Array *)func_?(TypeInfo__UnityEngine__Plane,6);
  (this->fields)._worldPlanes = pPVar2;
  func_?(&(this->fields)._worldPlanes,pPVar2);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._farPlaneSize.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._farPlaneSize.y = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._nearPlaneSize.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._nearPlaneSize.y = fVar3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  CameraViewVolume_FromCamera(this,camera,(MethodInfo *)0x0);
  return;
}


/* Plane get_BottomPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_BottomPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields)._worldPlanes;
  if (pPVar2 == (Plane__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pPVar6 = (Plane *)(*pcVar5)();
    return pPVar6;
  }
  if (2 < pPVar2->max_length) {
    fVar7 = pPVar2->vector[2].m_Normal.y;
    fVar8 = pPVar2->vector[2].m_Normal.z;
    fVar9 = pPVar2->vector[2].m_Distance;
    (__return_storage_ptr__->m_Normal).x = pPVar2->vector[2].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar7;
    (__return_storage_ptr__->m_Normal).z = fVar8;
    __return_storage_ptr__->m_Distance = fVar9;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_10 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pPVar6 = (Plane *)(*pcVar5)();
  return pPVar6;
}


/* Vector3 get_FarBottomLeft() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarBottomLeft
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._worldPoints;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (7 < pVVar2->max_length) {
    fVar7 = pVVar2->vector[7].y;
    fVar8 = pVVar2->vector[7].z;
    __return_storage_ptr__->x = pVVar2->vector[7].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Vector3 get_FarBottomRight() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarBottomRight
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._worldPoints;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (6 < pVVar2->max_length) {
    fVar7 = pVVar2->vector[6].y;
    fVar8 = pVVar2->vector[6].z;
    __return_storage_ptr__->x = pVVar2->vector[6].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Plane get_FarPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields)._worldPlanes;
  if (pPVar2 == (Plane__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pPVar6 = (Plane *)(*pcVar5)();
    return pPVar6;
  }
  if (5 < pPVar2->max_length) {
    fVar7 = pPVar2->vector[5].m_Normal.y;
    fVar8 = pPVar2->vector[5].m_Normal.z;
    fVar9 = pPVar2->vector[5].m_Distance;
    (__return_storage_ptr__->m_Normal).x = pPVar2->vector[5].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar7;
    (__return_storage_ptr__->m_Normal).z = fVar8;
    __return_storage_ptr__->m_Distance = fVar9;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_10 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pPVar6 = (Plane *)(*pcVar5)();
  return pPVar6;
}


/* Vector3 get_FarTopLeft() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarTopLeft
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._worldPoints;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (4 < pVVar2->max_length) {
    fVar7 = pVVar2->vector[4].y;
    fVar8 = pVVar2->vector[4].z;
    __return_storage_ptr__->x = pVVar2->vector[4].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Vector3 get_FarTopRight() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarTopRight
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._worldPoints;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (5 < pVVar2->max_length) {
    fVar7 = pVVar2->vector[5].y;
    fVar8 = pVVar2->vector[5].z;
    __return_storage_ptr__->x = pVVar2->vector[5].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Plane get_LeftPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_LeftPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields)._worldPlanes;
  if (pPVar2 == (Plane__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pPVar6 = (Plane *)(*pcVar5)();
    return pPVar6;
  }
  if (pPVar2->max_length != 0) {
    fVar7 = pPVar2->vector[0].m_Normal.y;
    fVar8 = pPVar2->vector[0].m_Normal.z;
    fVar9 = pPVar2->vector[0].m_Distance;
    (__return_storage_ptr__->m_Normal).x = pPVar2->vector[0].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar7;
    (__return_storage_ptr__->m_Normal).z = fVar8;
    __return_storage_ptr__->m_Distance = fVar9;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_10 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pPVar6 = (Plane *)(*pcVar5)();
  return pPVar6;
}


/* Vector3 get_NearBottomLeft() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_NearBottomLeft
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._worldPoints;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (3 < pVVar2->max_length) {
    fVar7 = pVVar2->vector[3].y;
    fVar8 = pVVar2->vector[3].z;
    __return_storage_ptr__->x = pVVar2->vector[3].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Plane get_NearPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_NearPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields)._worldPlanes;
  if (pPVar2 == (Plane__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pPVar6 = (Plane *)(*pcVar5)();
    return pPVar6;
  }
  if (4 < pPVar2->max_length) {
    fVar7 = pPVar2->vector[4].m_Normal.y;
    fVar8 = pPVar2->vector[4].m_Normal.z;
    fVar9 = pPVar2->vector[4].m_Distance;
    (__return_storage_ptr__->m_Normal).x = pPVar2->vector[4].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar7;
    (__return_storage_ptr__->m_Normal).z = fVar8;
    __return_storage_ptr__->m_Distance = fVar9;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_10 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pPVar6 = (Plane *)(*pcVar5)();
  return pPVar6;
}


/* Plane get_RightPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_RightPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields)._worldPlanes;
  if (pPVar2 == (Plane__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pPVar6 = (Plane *)(*pcVar5)();
    return pPVar6;
  }
  if (1 < pPVar2->max_length) {
    fVar7 = pPVar2->vector[1].m_Normal.y;
    fVar8 = pPVar2->vector[1].m_Normal.z;
    fVar9 = pPVar2->vector[1].m_Distance;
    (__return_storage_ptr__->m_Normal).x = pPVar2->vector[1].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar7;
    (__return_storage_ptr__->m_Normal).z = fVar8;
    __return_storage_ptr__->m_Distance = fVar9;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_10 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pPVar6 = (Plane *)(*pcVar5)();
  return pPVar6;
}


/* Plane get_TopPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_TopPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields)._worldPlanes;
  if (pPVar2 == (Plane__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pPVar6 = (Plane *)(*pcVar5)();
    return pPVar6;
  }
  if (3 < pPVar2->max_length) {
    fVar7 = pPVar2->vector[3].m_Normal.y;
    fVar8 = pPVar2->vector[3].m_Normal.z;
    fVar9 = pPVar2->vector[3].m_Distance;
    (__return_storage_ptr__->m_Normal).x = pPVar2->vector[3].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar7;
    (__return_storage_ptr__->m_Normal).z = fVar8;
    __return_storage_ptr__->m_Distance = fVar9;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_10 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pPVar6 = (Plane *)(*pcVar5)();
  return pPVar6;
}


/* AABB get_WorldAABB() */

AABB * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_WorldAABB
                 (AABB *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  fVar1 = (this->fields)._worldAABB._size.y;
  fVar2 = (this->fields)._worldAABB._size.z;
  fVar3 = (this->fields)._worldAABB._center.x;
  (__return_storage_ptr__->_size).x = (this->fields)._worldAABB._size.x;
  (__return_storage_ptr__->_size).y = fVar1;
  (__return_storage_ptr__->_size).z = fVar2;
  (__return_storage_ptr__->_center).x = fVar3;
  fVar1 = (this->fields)._worldAABB._center.z;
  bVar4 = (this->fields)._worldAABB._isValid;
  uVar5 = *(undefined3 *)&(this->fields)._worldAABB.field_0x19;
  (__return_storage_ptr__->_center).y = (this->fields)._worldAABB._center.y;
  (__return_storage_ptr__->_center).z = fVar1;
  __return_storage_ptr__->_isValid = bVar4;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar5;
  return __return_storage_ptr__;
}


/* OBB get_WorldOBB() */

OBB * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_WorldOBB
                (OBB *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  fVar1 = (this->fields)._worldOBB._size.y;
  fVar2 = (this->fields)._worldOBB._size.z;
  fVar3 = (this->fields)._worldOBB._center.x;
  (__return_storage_ptr__->_size).x = (this->fields)._worldOBB._size.x;
  (__return_storage_ptr__->_size).y = fVar1;
  (__return_storage_ptr__->_size).z = fVar2;
  (__return_storage_ptr__->_center).x = fVar3;
  fVar1 = (this->fields)._worldOBB._center.z;
  fVar2 = (this->fields)._worldOBB._rotation.x;
  fVar3 = (this->fields)._worldOBB._rotation.y;
  (__return_storage_ptr__->_center).y = (this->fields)._worldOBB._center.y;
  (__return_storage_ptr__->_center).z = fVar1;
  (__return_storage_ptr__->_rotation).x = fVar2;
  (__return_storage_ptr__->_rotation).y = fVar3;
  fVar1 = (this->fields)._worldOBB._rotation.w;
  bVar4 = (this->fields)._worldOBB._isValid;
  uVar5 = *(undefined3 *)&(this->fields)._worldOBB.field_0x29;
  (__return_storage_ptr__->_rotation).z = (this->fields)._worldOBB._rotation.z;
  (__return_storage_ptr__->_rotation).w = fVar1;
  __return_storage_ptr__->_isValid = bVar4;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar5;
  return __return_storage_ptr__;
}

