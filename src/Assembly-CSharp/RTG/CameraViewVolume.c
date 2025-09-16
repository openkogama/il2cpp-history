
/* Void CalculateWorldPoints(Camera) */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CalculateWorldPoints(CameraViewVolume *this,Camera *camera,MethodInfo *method)

{
  pVVar1 = (Vector3 *)0x0;
  if (camera != (Camera *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
    pPVar2 = (this->fields)._worldPlanes;
    if (pPVar2 != (Plane__Array *)0x0) {
      if (pPVar2->max_length < 6) goto code_?;
      fVar3 = pPVar2->vector[5].m_Normal.x;
      fVar4 = pPVar2->vector[5].m_Normal.y;
      fVar5 = pPVar2->vector[5].m_Normal.z;
      if (this_00 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_7,this_00,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)pVVar6->z;
        puVar8 = (undefined *)((uint)fVar5 ^ 0x80000000);
        uVar9 = CONCAT44(fVar4,fVar3) ^ 0x8000000080000000;
        fVar3 = (float)(uVar9 >> 0x20);
        value_00.z = (float)puVar8;
        value_00.x = (float)(int)uVar9;
        value_00.y = (float)(int)(uVar9 >> 0x20);
        VStack_7.z = (float)puVar8;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(&VStack_7,value_00,method_00);
        uVar10 = pVVar6->x;
        uVar11 = pVVar6->y;
        ray_02.m_Origin.y = (float)puVar8;
        ray_02.m_Origin.x = fVar3;
        ray_02.m_Origin.z = (float)method_00;
        ray_02.m_Direction.x = (float)uVar10;
        ray_02.m_Direction.y = (float)uVar11;
        ray_02.m_Direction.z = pVVar6->z;
        bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast((Plane *)&stack0xffffff9c,ray_02,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
        if (bVar12 == 0) {
code_?:
          pPVar2 = (this->fields)._worldPlanes;
          if (pPVar2 != (Plane__Array *)0x0) {
            if (pPVar2->max_length < 5) goto code_?;
            fVar3 = pPVar2->vector[4].m_Normal.x;
            fVar4 = pPVar2->vector[4].m_Normal.y;
            fVar5 = pPVar2->vector[4].m_Normal.z;
            fVar13 = pPVar2->vector[4].m_Distance;
            fVar14 = fVar3;
            fVar15 = fVar4;
            fVar16 = fVar5;
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
            VStack_7.x = pVVar6->x;
            VStack_7.y = pVVar6->y;
            VStack_7.z = pVVar6->z;
            if (0.0 <= fVar4 * VStack_7.y + fVar3 * VStack_7.x + fVar5 * VStack_7.z + fVar13) {
              fVar16 = -fVar5;
              fVar14 = -fVar3;
              fVar15 = -fVar4;
              VStack_7.z = fVar16;
            }
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_7,this_00,(MethodInfo *)0x0);
            fVar5 = pVVar6->x;
            fVar17 = pVVar6->y;
            fVar3 = pVVar6->z;
            value.y = fVar15;
            value.x = fVar14;
            value.z = fVar16;
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(&VStack_7,value,(MethodInfo *)0x0);
            uVar18 = pVVar6->x;
            uVar19 = pVVar6->y;
            ray_01.m_Origin.y = fVar17;
            ray_01.m_Origin.x = fVar5;
            ray_01.m_Origin.z = fVar3;
            ray_01.m_Direction.x = (float)uVar18;
            ray_01.m_Direction.y = (float)uVar19;
            ray_01.m_Direction.z = pVVar6->z;
            bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast((Plane *)&stack0xffffffd0,ray_01,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
            if (bVar12 == 0) {
              return;
            }
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint(&VStack_7,(Ray *)&stack0xffffff84,(float)pVVar1,(MethodInfo *)0x0);
            fVar14 = pVVar6->x;
            fVar15 = pVVar6->y;
            camera = (Camera *)pVVar6->z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_7.x = (pVVar20->zeroVector).x;
            VStack_7.y = (pVVar20->zeroVector).y;
            VStack_7.z = (pVVar20->zeroVector).z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
            pCVar21 = camera;
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffa0,*pVVar6,(MethodInfo *)0x0);
            fVar16 = pVVar6->x;
            uVar22 = pVVar6->y;
            pPVar2 = (this->fields)._worldPlanes;
            if (pPVar2 != (Plane__Array *)0x0) {
              if (pPVar2->max_length < 4) goto code_?;
              ray_04.m_Origin.y = fVar15;
              ray_04.m_Origin.x = fVar14;
              ray_04.m_Origin.z = (float)pCVar21;
              ray_04.m_Direction.x = fVar16;
              ray_04.m_Direction.y = (float)uVar22;
              ray_04.m_Direction.z = pVVar6->z;
              bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast((Plane *)&stack0xffffff9c,ray_04,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
              if (bVar12 != 0) {
                camera = (Camera *)&UNK_?;
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint((Vector3 *)&stack0xffffffa0,(Ray *)&stack0xffffff84,(float)pVVar1,(MethodInfo *)0x0);
                VStack_7.x = pVVar6->x;
                VStack_7.y = pVVar6->y;
                VStack_7.z = pVVar6->z;
              }
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffa0,*pVVar6,(MethodInfo *)0x0);
              uVar23 = pVVar6->x;
              uVar24 = pVVar6->y;
              pPVar2 = (this->fields)._worldPlanes;
              if (pPVar2 != (Plane__Array *)0x0) {
                if (pPVar2->max_length < 2) goto code_?;
                ray_00.m_Origin.y = fVar16;
                ray_00.m_Origin.x = (float)pCVar21;
                ray_00.m_Origin.z = (float)camera;
                ray_00.m_Direction.x = (float)uVar23;
                ray_00.m_Direction.y = (float)uVar24;
                ray_00.m_Direction.z = pVVar6->z;
                bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast((Plane *)&stack0xffffff9c,ray_00,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
                if (bVar12 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint((Vector3 *)&stack0xffffffa0,(Ray *)&stack0xffffff84,(float)pVVar1,(MethodInfo *)0x0);
                }
                fVar25 = (float10)func_?();
                VStack_7.z = VStack_7.z - fVar15;
                fVar3 = (float)fVar25;
                fVar25 = (float10)func_?();
                pVVar26 = (this->fields)._worldPoints;
                fVar14 = 0.0;
                fVar4 = (float)fVar25;
                pTVar27 = this_00;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                VStack_7.x = pVVar1->x;
                VStack_7.y = pVVar1->y;
                VStack_7.z = pVVar1->z;
                fVar16 = (float)pTVar27 - VStack_7.x * fVar3;
                fVar14 = fVar14 - VStack_7.y * fVar3;
                fVar5 = fVar15 - VStack_7.z * fVar3;
                fVar13 = 0.0;
                pTVar27 = this_00;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                uVar28 = pVVar1->x;
                uVar29 = pVVar1->y;
                VStack_7.x = (float)uVar28 * fVar4 + fVar16;
                VStack_7.y = (float)uVar29 * fVar4 + fVar14;
                VStack_7.z = pVVar1->z * fVar4 + fVar5;
                if (pVVar26 != (Vector3__Array *)0x0) {
                  if (pVVar26->max_length == 0) goto code_?;
                  pVVar26->vector[0].x = VStack_7.x;
                  pVVar26->vector[0].y = VStack_7.y;
                  pVVar26->vector[0].z = VStack_7.z;
                  pVVar26 = (this->fields)._worldPoints;
                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                  VStack_7.x = pVVar1->x;
                  VStack_7.y = pVVar1->y;
                  VStack_7.z = pVVar1->z;
                  fVar14 = VStack_7.x * fVar3 + (float)pTVar27;
                  fVar5 = VStack_7.y * fVar3 + fVar13;
                  fVar4 = VStack_7.z * fVar3 + fVar15;
                  puVar8 = &UNK_?;
                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                  uVar30 = pVVar1->x;
                  uVar31 = pVVar1->y;
                  VStack_7.x = fVar14 + (float)uVar30 * (float)puVar8;
                  VStack_7.y = fVar5 + (float)uVar31 * (float)puVar8;
                  VStack_7.z = fVar4 + pVVar1->z * (float)puVar8;
                  if (pVVar26 != (Vector3__Array *)0x0) {
                    if (pVVar26->max_length < 2) goto code_?;
                    pVVar26->vector[1].x = VStack_7.x;
                    pVVar26->vector[1].y = VStack_7.y;
                    pVVar26->vector[1].z = VStack_7.z;
                    pVVar26 = (this->fields)._worldPoints;
                    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                    VStack_7.x = pVVar1->x;
                    VStack_7.y = pVVar1->y;
                    VStack_7.z = pVVar1->z;
                    fVar14 = (float)pTVar27 + VStack_7.x * fVar3;
                    fVar4 = fVar13 + VStack_7.y * fVar3;
                    fVar5 = fVar15 + VStack_7.z * fVar3;
                    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                    uVar32 = pVVar1->x;
                    uVar33 = pVVar1->y;
                    VStack_7.x = fVar14 - (float)uVar32 * (float)puVar8;
                    VStack_7.y = fVar4 - (float)uVar33 * (float)puVar8;
                    VStack_7.z = fVar5 - pVVar1->z * (float)puVar8;
                    if (pVVar26 != (Vector3__Array *)0x0) {
                      if (pVVar26->max_length < 3) goto code_?;
                      pVVar26->vector[2].x = VStack_7.x;
                      pVVar26->vector[2].y = VStack_7.y;
                      pVVar26->vector[2].z = VStack_7.z;
                      pVVar26 = (this->fields)._worldPoints;
                      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                      VStack_7.x = pVVar1->x;
                      VStack_7.y = pVVar1->y;
                      VStack_7.z = pVVar1->z;
                      fVar4 = VStack_7.x * fVar3;
                      fVar13 = fVar13 - VStack_7.y * fVar3;
                      fVar15 = fVar15 - VStack_7.z * fVar3;
                      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
                      uVar34 = pVVar1->x;
                      uVar35 = pVVar1->y;
                      VStack_7.x = ((float)pTVar27 - fVar4) - (float)uVar34 * (float)puVar8;
                      VStack_7.y = fVar13 - (float)uVar35 * (float)puVar8;
                      VStack_7.z = fVar15 - pVVar1->z * (float)puVar8;
                      if (pVVar26 != (Vector3__Array *)0x0) {
                        if (3 < pVVar26->max_length) {
                          pVVar26->vector[3].x = VStack_7.x;
                          pVVar26->vector[3].y = VStack_7.y;
                          pVVar26->vector[3].z = VStack_7.z;
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
          VStack_7.z = (float)&UNK_?;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint(&VStack_7,(Ray *)&stack0xffffff84,(float)pVVar1,(MethodInfo *)0x0);
          fVar3 = pVVar6->x;
          fVar4 = pVVar6->y;
          camera = (Camera *)pVVar6->z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          fVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_7,this_00,(MethodInfo *)0x0);
          puVar8 = &UNK_?;
          pCVar21 = camera;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(&VStack_7,*pVVar6,(MethodInfo *)0x0);
          fVar13 = pVVar6->x;
          uVar36 = pVVar6->y;
          pPVar2 = (this->fields)._worldPlanes;
          if (pPVar2 != (Plane__Array *)0x0) {
            if (pPVar2->max_length < 4) goto code_?;
            ray_03.m_Origin.y = fVar4;
            ray_03.m_Origin.x = fVar3;
            ray_03.m_Origin.z = (float)pCVar21;
            ray_03.m_Direction.x = fVar13;
            ray_03.m_Direction.y = (float)uVar36;
            ray_03.m_Direction.z = pVVar6->z;
            bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast((Plane *)&stack0xffffff9c,ray_03,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
            if (bVar12 != 0) {
              camera = (Camera *)&UNK_?;
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint(&VStack_7,(Ray *)&stack0xffffff84,(float)pVVar1,(MethodInfo *)0x0);
              fVar5 = pVVar6->z;
            }
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_7,this_00,(MethodInfo *)0x0);
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(&VStack_7,*pVVar6,(MethodInfo *)0x0);
            uVar37 = pVVar6->x;
            uVar38 = pVVar6->y;
            pPVar2 = (this->fields)._worldPlanes;
            if (pPVar2 != (Plane__Array *)0x0) {
              if (pPVar2->max_length < 2) goto code_?;
              ray.m_Origin.y = fVar13;
              ray.m_Origin.x = (float)pCVar21;
              ray.m_Origin.z = (float)camera;
              ray.m_Direction.x = (float)uVar37;
              ray.m_Direction.y = (float)uVar38;
              ray.m_Direction.z = pVVar6->z;
              bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast((Plane *)&stack0xffffff9c,ray,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
              if (bVar12 != 0) {
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint(&VStack_7,(Ray *)&stack0xffffff84,(float)pVVar1,(MethodInfo *)0x0);
                puVar8 = (undefined *)pVVar1->z;
              }
              VStack_7.z = (float)puVar8 - fVar4;
              fVar25 = (float10)func_?();
              VStack_7.z = fVar5 - fVar4;
              fVar3 = (float)fVar25;
              fVar25 = (float10)func_?();
              pVVar26 = (this->fields)._worldPoints;
              fVar15 = 0.0;
              fVar5 = (float)fVar25;
              pTVar27 = this_00;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
              VStack_7.x = pVVar1->x;
              VStack_7.y = pVVar1->y;
              VStack_7.z = pVVar1->z;
              fVar16 = (float)pTVar27 - VStack_7.x * fVar3;
              fVar15 = fVar15 - VStack_7.y * fVar3;
              fVar13 = fVar4 - VStack_7.z * fVar3;
              fVar14 = 0.0;
              pTVar27 = this_00;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
              uVar39 = pVVar1->x;
              uVar40 = pVVar1->y;
              VStack_7.x = fVar16 + (float)uVar39 * fVar5;
              VStack_7.y = fVar15 + (float)uVar40 * fVar5;
              VStack_7.z = fVar13 + pVVar1->z * fVar5;
              if (pVVar26 != (Vector3__Array *)0x0) {
                if (pVVar26->max_length < 5) goto code_?;
                pVVar26->vector[4].x = VStack_7.x;
                pVVar26->vector[4].y = VStack_7.y;
                pVVar26->vector[4].z = VStack_7.z;
                pVVar26 = (this->fields)._worldPoints;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
                VStack_7.x = pVVar1->x;
                VStack_7.y = pVVar1->y;
                VStack_7.z = pVVar1->z;
                fVar15 = (float)pTVar27 + VStack_7.x * fVar3;
                fVar5 = fVar14 + VStack_7.y * fVar3;
                fVar13 = fVar4 + VStack_7.z * fVar3;
                pVVar1 = (Vector3 *)&stack0xffffffb8;
                puVar8 = &UNK_?;
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(pVVar1,this_00,(MethodInfo *)0x0);
                uVar41 = pVVar6->x;
                uVar42 = pVVar6->y;
                VStack_7.x = fVar15 + (float)uVar41 * (float)puVar8;
                VStack_7.y = fVar5 + (float)uVar42 * (float)puVar8;
                VStack_7.z = fVar13 + pVVar6->z * (float)puVar8;
                if (pVVar26 != (Vector3__Array *)0x0) {
                  if (pVVar26->max_length < 6) goto code_?;
                  pVVar26->vector[5].x = VStack_7.x;
                  pVVar26->vector[5].y = VStack_7.y;
                  pVVar26->vector[5].z = VStack_7.z;
                  pVVar26 = (this->fields)._worldPoints;
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
                  VStack_7.x = pVVar6->x;
                  VStack_7.y = pVVar6->y;
                  VStack_7.z = pVVar6->z;
                  fVar15 = (float)pTVar27 + VStack_7.x * fVar3;
                  fVar5 = fVar14 + VStack_7.y * fVar3;
                  fVar13 = fVar4 + VStack_7.z * fVar3;
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
                  uVar43 = pVVar6->x;
                  uVar44 = pVVar6->y;
                  VStack_7.x = fVar15 - (float)uVar43 * (float)puVar8;
                  VStack_7.y = fVar5 - (float)uVar44 * (float)puVar8;
                  VStack_7.z = fVar13 - pVVar6->z * (float)puVar8;
                  if (pVVar26 != (Vector3__Array *)0x0) {
                    if (pVVar26->max_length < 7) goto code_?;
                    pVVar26->vector[6].x = VStack_7.x;
                    pVVar26->vector[6].y = VStack_7.y;
                    pVVar26->vector[6].z = VStack_7.z;
                    pVVar26 = (this->fields)._worldPoints;
                    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
                    VStack_7.x = pVVar6->x;
                    VStack_7.y = pVVar6->y;
                    VStack_7.z = pVVar6->z;
                    fVar5 = VStack_7.x * fVar3;
                    fVar14 = fVar14 - VStack_7.y * fVar3;
                    fVar4 = fVar4 - VStack_7.z * fVar3;
                    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffb8,this_00,(MethodInfo *)0x0);
                    uVar45 = pVVar6->x;
                    uVar46 = pVVar6->y;
                    VStack_7.x = ((float)pTVar27 - fVar5) - (float)uVar45 * (float)puVar8;
                    VStack_7.y = fVar14 - (float)uVar46 * (float)puVar8;
                    VStack_7.z = fVar4 - pVVar6->z * (float)puVar8;
                    if (pVVar26 != (Vector3__Array *)0x0) {
                      if (pVVar26->max_length < 8) goto code_?;
                      pVVar26->vector[7].x = VStack_7.x;
                      pVVar26->vector[7].y = VStack_7.y;
                      pVVar26->vector[7].z = VStack_7.z;
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
  pcVar47 = (code *)swi(3);
  (*pcVar47)();
  return;
}


/* Boolean CheckAABB(AABB) */

bool Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CheckAABB(CameraViewVolume *this,AABB aabb,MethodInfo *method)

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
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::GeometryUtility_TestPlanesAABB(planes,bounds,(MethodInfo *)0x0);
  return bVar8;
}


/* Boolean CheckAABB(Camera, AABB) */

bool Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CheckAABB_1(Camera *camera,AABB aabb,MethodInfo *method)

{
  stack0xfffffffc = unaff_EBP;
  if (camera != (Camera *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_projectionMatrix((Matrix4x4 *)&stack0xffffff74,camera,(MethodInfo *)0x0);
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
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix((Matrix4x4 *)&stack0xffffff74,camera,(MethodInfo *)0x0);
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
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply((Matrix4x4 *)&stack0xffffff74,lhs,*pMVar1,(MethodInfo *)0x0);
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
    planes = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::GeometryUtility_CalculateFrustumPlanes(*pMVar1,(MethodInfo *)0x0);
    aabb._size.x = (float)&aabb;
    aabb._size.y = 0.0;
    pBVar19 = AABB::AABB_ToBounds(&BStack_17,(AABB *)aabb._size.x,(MethodInfo *)0x0);
    bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::GeometryUtility_TestPlanesAABB(planes,*pBVar19,(MethodInfo *)0x0);
    return bVar20;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  bVar20 = (*pcVar21)();
  return bVar20;
}


/* Boolean CheckAABB(Camera, AABB, Plane[]) */

bool Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CheckAABB_2(Camera *camera,AABB aabb,Plane__Array *cameraWorldPlanes,MethodInfo *method)

{
  pBVar1 = AABB::AABB_ToBounds((Bounds *)&stack0xffffffe4,&aabb,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::GeometryUtility_TestPlanesAABB(cameraWorldPlanes,*pBVar1,(MethodInfo *)0x0);
  return bVar2;
}


/* Void FromCamera(Camera) */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_FromCamera(CameraViewVolume *this,Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_projectionMatrix((Matrix4x4 *)&stack0xffffff10,camera,(MethodInfo *)0x0);
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
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix((Matrix4x4 *)&stack0xffffff10,camera,(MethodInfo *)0x0);
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
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply((Matrix4x4 *)&stack0xffffff10,lhs,*pMVar1,(MethodInfo *)0x0);
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
    pPVar22 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::GeometryUtility_CalculateFrustumPlanes(*pMVar1,(MethodInfo *)0x0);
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
                    AABB::AABB__ctor_2((AABB *)&stack0xffffff8c,(IEnumerable_1_UnityEngine_Vector3_ *)(this->fields)._worldPoints,(MethodInfo *)0x0);
                    (this->fields)._worldAABB._size.x = fVar27;
                    (this->fields)._worldAABB._size.y = fVar29;
                    (this->fields)._worldAABB._size.z = fVar30;
                    (this->fields)._worldAABB._center.x = fVar31;
                    (this->fields)._worldAABB._center.y = (float)uVar28;
                    (this->fields)._worldAABB._center.z = uVar28._4_4_;
                    *(undefined4 *)&(this->fields)._worldAABB._isValid = 0;
                    VStack_9 = (this->fields)._farPlaneSize;
                    pTStack_32 = (Transform *)UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane(camera,(MethodInfo *)0x0);
                    fStack_10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane(camera,(MethodInfo *)0x0);
                    fStack_10 = (float)pTStack_32 - fStack_10;
                    pTStack_32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
                    if (pTStack_32 != (Transform *)0x0) {
                      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_3,pTStack_32,(MethodInfo *)0x0);
                      uStack_6._0_4_ = pVVar33->x;
                      uStack_6._4_4_ = pVVar33->y;
                      fStack_7 = pVVar33->z;
                      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward((Vector3 *)&QStack_2,pTStack_32,(MethodInfo *)0x0);
                      VStack_3.y = pVVar33->x;
                      VStack_3.z = pVVar33->y;
                      fStack_4 = pVVar33->z;
                      fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane(camera,(MethodInfo *)0x0);
                      fVar27 = fVar27 + fStack_10 * 0.5;
                      fVar29 = (float)uStack_6 + VStack_3.y * fVar27;
                      fStack_34 = uStack_6._4_4_ + VStack_3.z * fVar27;
                      VStack_3.z = fStack_7 + fStack_4 * fVar27;
                      pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation(&QStack_2,pTStack_32,(MethodInfo *)0x0);
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
                      OBB::OBB__ctor_1((OBB *)&stack0xffffff60,center,size,rotation,(MethodInfo *)0x0);
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

Plane__Array * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_GetCameraWorldPlanes(Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_projectionMatrix((Matrix4x4 *)&stack0xffffff7c,camera,(MethodInfo *)0x0);
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
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix((Matrix4x4 *)&stack0xffffff7c,camera,(MethodInfo *)0x0);
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
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply((Matrix4x4 *)&stack0xffffff7c,lhs,*pMVar1,(MethodInfo *)0x0);
    uStack19 = 0;
    pPVar20 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::GeometryUtility_CalculateFrustumPlanes(*pMVar1,(MethodInfo *)0x0);
    return pPVar20;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  pPVar20 = (Plane__Array *)(*pcVar21)();
  return pPVar20;
}


/* List`1[UnityEngine.Vector3] GetNearPlanePoints() */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_GetNearPlanePoints(CameraViewVolume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pVVar2 = (this->fields)._worldPoints;
  if (pVVar2 != (Vector3__Array *)0x0) {
    if (pVVar2->max_length == 0) goto code_?;
    if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
      uVar3._0_4_ = pVVar2->vector[0].x;
      uVar3._4_4_ = pVVar2->vector[0].y;
      func_?(pLVar1,uVar3,pVVar2->vector[0].z,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
      pVVar2 = (this->fields)._worldPoints;
      if (pVVar2 != (Vector3__Array *)0x0) {
        if (pVVar2->max_length < 2) goto code_?;
        uVar4._0_4_ = pVVar2->vector[1].x;
        uVar4._4_4_ = pVVar2->vector[1].y;
        func_?(pLVar1,uVar4,pVVar2->vector[1].z,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
        pVVar2 = (this->fields)._worldPoints;
        if (pVVar2 != (Vector3__Array *)0x0) {
          if (pVVar2->max_length < 3) goto code_?;
          uVar5._0_4_ = pVVar2->vector[2].x;
          uVar5._4_4_ = pVVar2->vector[2].y;
          func_?(pLVar1,uVar5,pVVar2->vector[2].z,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
          pVVar2 = (this->fields)._worldPoints;
          if (pVVar2 != (Vector3__Array *)0x0) {
            if (3 < pVVar2->max_length) {
              uVar6._0_4_ = pVVar2->vector[3].x;
              uVar6._4_4_ = pVVar2->vector[3].y;
              func_?(pLVar1,uVar6,pVVar2->vector[3].z,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
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

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume__ctor(CameraViewVolume *this,MethodInfo *method)

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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* CameraViewVolume(Camera) */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume__ctor_1(CameraViewVolume *this,Camera *camera,MethodInfo *method)

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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  CameraViewVolume_FromCamera(this,camera,(MethodInfo *)0x0);
  return;
}


/* Plane get_BottomPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_BottomPlane(Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarBottomLeft(Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarBottomRight(Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarPlane(Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarTopLeft(Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarTopRight(Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_LeftPlane(Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_NearBottomLeft(Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_NearPlane(Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_RightPlane(Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_TopPlane(Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

AABB * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_WorldAABB(AABB *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

OBB * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_WorldOBB(OBB *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

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

