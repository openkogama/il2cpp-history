
/* Boolean GetCellOnRay(Ray, VoxelHit ByRef, GameObject, ICubeModelCollider, Vector3, Single,
   Vector3) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_GetCellOnRay
               (Ray ray,VoxelHit *vHit,GameObject *chunk,ICubeModelCollider *cmb,Vector3 hitPoint,
               float distance,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (chunk != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (chunk,(MethodInfo *)0x0);
    pTStack_1 = this;
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (this != (Transform *)0x0) {
      uVar2 = 0;
      uVar3 = ray.m_Direction.z._0_2_;
      uVar4 = ray.m_Direction.z._2_2_;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                Transform_InverseTransformDirection
                          ((Vector3 *)(auStack_6 + 4),this,ray.m_Direction,(MethodInfo *)0x0);
      pMVar7 = TypeInfo__MVRaycast->static_fields;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_8,*pVVar5,(MethodInfo *)0x0);
      fVar9 = pVVar5->y;
      fVar10 = pVVar5->z;
      (pMVar7->intersectRay).m_Direction.x = pVVar5->x;
      (pMVar7->intersectRay).m_Direction.y = fVar9;
      (pMVar7->intersectRay).m_Direction.z = fVar10;
      pMVar7 = TypeInfo__MVRaycast->static_fields;
      sVar11 = ray.m_Origin.y._0_2_;
      uVar12 = ray.m_Origin.y._2_2_;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                          (aVStack_13,pTStack_14,ray.m_Origin,(MethodInfo *)0x0);
      bVar15 = distance != _UNK_?;
      fVar9 = pVVar5->y;
      fVar10 = pVVar5->z;
      (pMVar7->intersectRay).m_Origin.x = pVVar5->x;
      (pMVar7->intersectRay).m_Origin.y = fVar9;
      (pMVar7->intersectRay).m_Origin.z = fVar10;
      if (bVar15) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar16 = (float10)func_?(&stack0xfffffe8c,0);
        distance = (float)fVar16;
      }
      fVar9 = ray.m_Origin.x - hitPoint.x;
      fVar17 = ray.m_Origin.y - hitPoint.y;
      uVar18 = ray.m_Origin.z._0_2_;
      uVar19 = ray.m_Origin.z._2_2_;
      fVar20 = ray.m_Origin.z - hitPoint.z;
      fVar10 = ray.m_Origin.y;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar21 = (double)(fVar9 * fVar9 + fVar17 * fVar17 + fVar20 * fVar20);
      if (dVar21 < 0.0) {
        func_?();
      }
      else {
        dVar21 = SQRT(dVar21);
      }
      fVar9 = (float)dVar21;
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVRaycast);
      }
      pMVar7 = TypeInfo__MVRaycast->static_fields;
      uVar22 = (pMVar7->intersectRay).m_Direction.x;
      uVar23 = (pMVar7->intersectRay).m_Direction.y;
      fVar20 = ((float)uVar22 * fVar9) / scale.x;
      fVar17 = ((float)uVar23 * fVar9) / scale.y;
      fVar9 = ((pMVar7->intersectRay).m_Direction.z * fVar9) / scale.z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar21 = (double)(fVar17 * fVar17 + fVar20 * fVar20 + fVar9 * fVar9);
      if (dVar21 < 0.0) {
        func_?();
      }
      else {
        dVar21 = SQRT(dVar21);
      }
      fVar9 = (float)dVar21;
      pMVar7 = TypeInfo__MVRaycast->static_fields;
      uVar24 = (pMVar7->intersectRay).m_Origin.x;
      uVar25 = (pMVar7->intersectRay).m_Direction.x;
      fVar17 = (float)uVar25 * fVar9 + (float)uVar24;
      uVar26 = (pMVar7->intersectRay).m_Origin.y;
      uVar27 = (pMVar7->intersectRay).m_Direction.y;
      fVar20 = (float)uVar27 * fVar9 + (float)uVar26;
      fVar28 = 0.0;
      localPos.y = fVar17;
      localPos.x = (float)&stack0xfffffeb8;
      localPos.z = fVar20;
      MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
      CubeMathFunctions_LocalPosToLocalIntVector
                (localPos,(MethodInfo *)
                          ((pMVar7->intersectRay).m_Direction.z * fVar9 +
                          (pMVar7->intersectRay).m_Origin.z));
      iVar29 = SUB42(fVar20,0);
      this_00 = (BoxCollider *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (chunk,
                           UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                          );
      if (this_00 != (BoxCollider *)0x0) {
        pVVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                            ((Vector3 *)&stack0xfffffef0,this_00,(MethodInfo *)0x0);
        fVar9 = pVVar5->x;
        pVVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                            ((Vector3 *)&stack0xfffffefc,this_00,(MethodInfo *)0x0);
        uVar30 = pVVar5->x;
        uVar31 = pVVar5->y;
        fVar32 = pVVar5->z * _UNK_?;
        fVar33 = (float)uVar30 * _UNK_?;
        fVar20 = (float)uVar31 * _UNK_?;
        sStack_34 = SUB42(fVar32,0);
        uStack_35 = (undefined2)((uint)fVar32 >> 0x10);
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        localSpaceBounds.m_Center.z._2_2_ = uVar19;
        localSpaceBounds.m_Center.z._0_2_ = uVar18;
        localSpaceBounds.m_Center.y._0_2_ = sVar11;
        localSpaceBounds.m_Center.x = fVar10;
        localSpaceBounds.m_Center.y._2_2_ = uVar12;
        localSpaceBounds.m_Extents.x = fVar33;
        localSpaceBounds.m_Extents.y = fVar20;
        localSpaceBounds.m_Extents.z =
             (float)(CONCAT26(uStack_35,CONCAT24(sStack_34,fVar20)) >> 0x20);
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  ((IntVector *)&stack0xfffffef4,(IntVector *)&stack0xfffffefc,localSpaceBounds,
                   (MethodInfo *)0x0);
        min.y = uVar4;
        min.x = uVar3;
        min.z = (int16_t)uVar2;
        max.z = iVar29;
        max._0_4_ = fVar17;
        MathFunctions::MathFunctions_ClampIntVector
                  ((IntVector *)&stack0xfffffeec,min,max,(MethodInfo *)0x0);
        fVar10 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar36 = (float)mscorlib.dll::System::Math::Math_Sign_2(fVar10,(MethodInfo *)0x0);
        value = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
        VStack_37.y = fVar36;
        iVar38 = mscorlib.dll::System::Math::Math_Sign_2((float)value,(MethodInfo *)0x0);
        fVar32 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
        iVar39 = mscorlib.dll::System::Math::Math_Sign_2
                           ((TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.z,
                            (MethodInfo *)0x0);
        fVar40 = (float)(int)((int)(short)uVar2 + (uint)(0 < (int)fVar36));
        fVar33 = (float)(int)((int)(short)(uVar2 >> 0x10) + (uint)(0 < iVar38));
        fVar10 = (float)(int)((int)SUB42(fVar17,0) + (uint)(0 < iVar39));
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar7 = TypeInfo__MVRaycast->static_fields;
        auStack_6._0_4_ = (pMVar7->intersectRay).m_Direction.x;
        auStack_6._4_4_ = (pMVar7->intersectRay).m_Direction.y;
        fVar32 = ((fVar40 - fVar32) - _UNK_?) / (float)auStack_6._0_4_;
        fVar9 = ((fVar33 - fVar9) - _UNK_?) / (float)auStack_6._4_4_;
        fVar10 = ((fVar10 - fVar28) - _UNK_?) / (pMVar7->intersectRay).m_Direction.z;
        if ((0x7f800000 < (uint)ABS(fVar32)) || (fVar32 == _UNK_?)) {
          fVar32 = _UNK_?;
        }
        if ((0x7f800000 < (uint)ABS(fVar9)) || (fVar9 == _UNK_?)) {
          fVar9 = _UNK_?;
        }
        if ((0x7f800000 < (uint)ABS(fVar10)) || (fVar10 == _UNK_?)) {
          fVar10 = _UNK_?;
        }
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar7 = TypeInfo__MVRaycast->static_fields;
        uVar41._0_4_ = (pMVar7->intersectRay).m_Direction.x;
        uVar41._4_4_ = (pMVar7->intersectRay).m_Direction.y;
        fVar33 = (float)iVar39 / (pMVar7->intersectRay).m_Direction.z;
        fVar28 = (float)(int)fVar36 / (float)(undefined4)uVar41;
        if (0x7f800000 < (uint)ABS((float)(int)fVar36 / (float)(undefined4)uVar41)) {
          fVar28 = _UNK_?;
        }
        auStack_6 = (undefined1  [8])uVar41;
        if (0x7f800000 < (uint)ABS(fVar33)) {
          fVar33 = _UNK_?;
        }
        while( true ) {
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          voxelPos_00.z = SUB42(fVar17,0);
          voxelPos_00.x = (short)uVar2;
          voxelPos_00.y = (short)(uVar2 >> 0x10);
          bVar42 = MVRaycast_IsWithinDistance
                             (distance,(TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin,
                              voxelPos_00,(MethodInfo *)0x0);
          if (bVar42 == 0) {
            return 0;
          }
          fStack_43 = fVar9;
          if (cmb == (ICubeModelCollider *)0x0) break;
          pIVar44 = cmb->klass;
          uVar45 = 0;
          uVar46._0_1_ = (pIVar44->_1).rank;
          uVar46._1_1_ = (pIVar44->_1).minimumAlignment;
          if (uVar46 != 0) {
            do {
              if (pIVar44->interfaceOffsets[uVar45].interfaceType ==
                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                ppMVar47 = &(&(cmb->klass->vtable).GetCube)
                            [pIVar44->interfaceOffsets[uVar45].offset].method;
                goto code_?;
              }
              uVar45 = uVar45 + 1;
            } while (uVar45 < uVar46);
          }
          ppMVar47 = (MethodInfo **)func_?();
code_?:
          uVar48 = (uint)ppMVar47[1];
          puVar49 = &UNK_?;
          cube = (Cube *)(*(code *)*ppMVar47)();
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar42 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                             ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
          uVar2 = uVar48;
          if (bVar42 != 0) {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            voxelPos.z = 0;
            voxelPos.x = (short)uVar48;
            voxelPos.y = (short)(uVar48 >> 0x10);
            localBoundsHitPoint.z = fVar32;
            localBoundsHitPoint.x = (float)(undefined4)uVar41;
            localBoundsHitPoint.y = (float)uVar41._4_4_;
            bVar42 = MVRaycast_GetHitPoint
                               (ray,cube,vHit,voxelPos,localBoundsHitPoint,scale,distance,
                                (MethodInfo *)0x0);
            if ((bVar42 != 0) &&
               (uVar50 = (vHit->point).x, uVar51 = (vHit->point).y,
               0.0 < ((float)uVar50 - ray.m_Origin.x) * ray.m_Direction.x +
                     ((float)uVar51 - fStack_52) * ray.m_Direction.y +
                     ((vHit->point).z - aVStack_13[0].z) * ray.m_Direction.z)) {
              direction.z._2_2_ = (int16_t)((uint)(vHit->normal).z >> 0x10);
              direction._0_10_ = *(unkbyte10 *)&vHit->normal;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_TransformDirection
                                  (&VStack_37,pTStack_53,direction,(MethodInfo *)0x0);
              fVar17 = pVVar5->y;
              fVar10 = pVVar5->z;
              (vHit->normal).x = pVVar5->x;
              (vHit->normal).y = fVar17;
              (vHit->normal).z = fVar10;
              *(float *)&vHit->cubePos = fVar32;
              (vHit->cubePos).z = SUB42(fVar9,0);
              vHit->cube = cube;
              func_?();
              return 1;
            }
          }
          sVar54 = (short)(uVar2 >> 0x10);
          if ((fVar9 <= fVar32) || (fVar10 <= fVar32)) {
            if (fVar9 < fVar10) {
              sVar54 = sVar54 + sVar11;
              uVar2 = CONCAT22(sVar54,(short)uVar2);
              if (sVar54 < (short)((uint)fVar20 >> 0x10)) {
                return 0;
              }
              if (sStack_55 < sVar54) {
                return 0;
              }
              fVar9 = fVar9 + (float)puVar49;
            }
            else {
              sStack_56 = (short)iVar39;
              uVar46 = SUB42(fVar17,0) + sStack_56;
              fVar17 = (float)(uint)uVar46;
              if ((short)uVar46 < sStack_34) {
                return 0;
              }
              if (sStack_57 < (short)uVar46) {
                return 0;
              }
              fVar10 = fVar10 + fVar33;
            }
          }
          else {
            sVar58 = (short)uVar2 + sStack_59;
            uVar2 = CONCAT22(sVar54,sVar58);
            if (sVar58 < SUB42(fVar20,0)) {
              return 0;
            }
            if (sStack_60 < sVar58) {
              return 0;
            }
            fVar32 = fVar32 + fVar28;
          }
        }
      }
    }
  }
  func_?();
  pcVar61 = (code *)swi(3);
  bVar42 = (*pcVar61)();
  return bVar42;
}


/* Boolean GetHitPoint(Ray, Cube, VoxelHit ByRef, IntVector, Vector3, Vector3, Single) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_GetHitPoint
               (Ray ray,Cube *cube,VoxelHit *vHit,IntVector voxelPos,Vector3 localBoundsHitPoint,
               Vector3 scale,float scaledDistance,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff18;
  puVar5 = &stack0xffffff18;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__MV__WorldObject__FaceFlags);
    func_?(&TypeInfo__MV__WorldObject__FaceFlags);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  pIStack_7 = (IEnumerator *)0x0;
  iStack_8 = 0;
  if (cube == (Cube *)0x0) {
code_?:
    uVar9 = func_?();
code_?:
    func_?(uVar9);
    pcVar10 = (code *)swi(3);
    bVar11 = (*pcVar10)();
    return bVar11;
  }
  if ((cube->fields).hiddenSides != 0x3f) {
    if ((cube->fields)._.unIndentedSides != 0x3f) {
      pVStack_12 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                             ((CubeBase *)cube,(MethodInfo *)0x0);
      VStack_13.x = 0.0;
      VStack_13.y = 0.0;
      uVar14 = 0;
      VStack_13.z = 0.0;
      if (pVStack_12 != (Vector3__Array *)0x0) {
        pVVar15 = pVStack_12->vector;
        for (; handle = TypeRef__MV__WorldObject__FaceFlags,
            (int)uVar14 < (int)pVStack_12->max_length; uVar14 = uVar14 + 1) {
          if (pVStack_12->max_length <= uVar14) {
            func_?();
            goto code_?;
          }
          uStack_16._0_4_ = pVVar15->x;
          uStack_16._4_4_ = pVVar15->y;
          piStack_17 = (int *)pVVar15->z;
          VStack_18.z = (float)(int)voxelPos.z + (float)piStack_17;
          pVVar15->x = (float)(int)voxelPos.x + (float)(undefined4)uStack_16;
          pVVar15->y = (float)(int)voxelPos.y + (float)uStack_16._4_4_;
          pVVar15->z = VStack_18.z;
          pVVar15 = pVVar15 + 1;
        }
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Enum);
        }
        this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
        if (this != (Array *)0x0) {
          pIStack_7 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
          uStack_16 = ZEXT48(&pIStack_7) << 0x20;
          piStack_17 = &iStack_8;
          uStack_1 = 1;
          do {
            do {
              pIStack_19 = pIStack_7;
              if (pIStack_7 == (IEnumerator *)0x0) goto code_?;
              pIStack_20 = pIStack_7->klass;
              uVar21 = 0;
              fStack_22 = 0.0;
              uVar23._0_1_ = (pIStack_20->_1).rank;
              uVar23._1_1_ = (pIStack_20->_1).minimumAlignment;
              if (uVar23 != 0) {
                do {
                  if (pIStack_20->interfaceOffsets[uVar21].interfaceType ==
                      (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                    ppMVar24 = &(&(pIStack_20->vtable).MoveNext)
                                [pIStack_20->interfaceOffsets[uVar21].offset].method;
                    goto code_?;
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < uVar23);
              }
              ppMVar24 = (MethodInfo **)
                         func_?(pIStack_7,TypeInfo__System__Collections__IEnumerator,0);
code_?:
              cVar25 = (*(code *)*ppMVar24)(pIStack_19,ppMVar24[1]);
              if (cVar25 == '\0') {
                uStack_1 = 0xffffffff;
                iStack_8 = func_?(pIStack_7,TypeInfo__System__IDisposable);
                if (iStack_8 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iStack_8);
                }
                goto code_?;
              }
              if (pIStack_7 == (IEnumerator *)0x0) goto code_?;
              piVar26 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,
                                               pIStack_7);
              uVar9 = CONCAT44(TypeInfo__MV__WorldObject__FaceFlags,piVar26);
              if (piVar26 == (int *)0x0) goto code_?;
              if (*(Il2CppClass **)(*piVar26 + 0x20) !=
                  (TypeInfo__MV__WorldObject__FaceFlags->_0).element_class) goto code_?;
              pbVar27 = (byte *)func_?(piVar26);
              FStack_28 = CONCAT31(FStack_28._1_3_,*pbVar27);
            } while (((cube->fields).hiddenSides & *pbVar27) != 0);
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeBase);
            }
            pIStack_20 = (IEnumerator__Class *)
                         MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                                   (FStack_28,(MethodInfo *)0x0);
            FVar29 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                               (FStack_28,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Cube);
            }
            pVVar30 = Cube::Cube_GetFace_1(pVStack_12,FVar29,(MethodInfo *)0x0);
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            pMVar31 = TypeInfo__MVRaycast->static_fields;
            uVar32 = (pMVar31->intersectRay).m_Origin.x;
            uVar33 = (pMVar31->intersectRay).m_Origin.y;
            fVar34 = (pMVar31->intersectRay).m_Origin.z;
            uVar35 = (pMVar31->intersectRay).m_Direction.x;
            uVar36 = (pMVar31->intersectRay).m_Direction.y;
            fVar37 = (pMVar31->intersectRay).m_Direction.z * _UNK_? + localBoundsHitPoint.z;
            fVar38 = (float)uVar36 * _UNK_? + localBoundsHitPoint.y;
            fVar39 = (float)uVar35 * _UNK_? + localBoundsHitPoint.x;
            fStack_40 = (float)uVar32;
            fStack_22 = (float)uVar33;
            if (pVVar30 == (Vector3__Array *)0x0) goto code_?;
            func_?(&uStack_41,0);
            func_?(&uStack_42,3);
            func_?(&stack0xffffff54,2);
            p2.y = fVar38;
            p2.x = fVar39;
            p1.y = fStack_22;
            p1.x = fStack_40;
            p1.z = fVar34;
            p2.z = fVar37;
            pa.z = fStack_43;
            pa.x = (float)(undefined4)uStack_41;
            pa.y = (float)uStack_41._4_4_;
            pb.z = (float)puStack_44;
            pb.x = (float)(undefined4)uStack_42;
            pb.y = (float)uStack_42._4_4_;
            pc.z = in_stack_45;
            pc.x = (float)(int)in_stack_46;
            pc.y = (float)(int)((ulonglong)in_stack_46 >> 0x20);
            bVar11 = MathFunctions::MathFunctions_LineFacetCollision
                               (p1,p2,pa,pb,pc,
                                (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction,
                                &VStack_13,&vHit->normal,(MethodInfo *)0x0);
            if (bVar11 != 0) break;
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            pMVar31 = TypeInfo__MVRaycast->static_fields;
            uStack_47._0_4_ = (pMVar31->intersectRay).m_Origin.x;
            uStack_47._4_4_ = (pMVar31->intersectRay).m_Origin.y;
            fVar34 = (pMVar31->intersectRay).m_Origin.z;
            uVar48 = (pMVar31->intersectRay).m_Direction.x;
            uVar49 = (pMVar31->intersectRay).m_Direction.y;
            fStack_50 = (pMVar31->intersectRay).m_Direction.z * _UNK_? + fVar34;
            uStack_51 = CONCAT44((float)uVar49 * _UNK_? + (float)uStack_47._4_4_,
                                 (float)uVar48 * _UNK_? + (float)(undefined4)uStack_47);
            fStack_52 = fVar34;
            fStack_40 = (float)(undefined4)uStack_47;
            fStack_22 = (float)uStack_47._4_4_;
            func_?(&VStack_18,2);
            func_?(&stack0xffffff24,1);
            func_?(&uStack_53,0);
            pb_00.y = (float)in_stack_54;
            pb_00.x = (float)in_stack_55;
            p1_00.y = fStack_22;
            p1_00.x = fStack_40;
            p1_00.z = fVar34;
            p2_00.z = fStack_50;
            p2_00.x = (float)(undefined4)uStack_51;
            p2_00.y = (float)uStack_51._4_4_;
            pa_00.z = VStack_18.z;
            pa_00.x = VStack_18.x;
            pa_00.y = VStack_18.y;
            pb_00.z = fStack_56;
            pc_00.z = fStack_57;
            pc_00.x = (float)(undefined4)uStack_53;
            pc_00.y = (float)uStack_53._4_4_;
            bVar11 = MathFunctions::MathFunctions_LineFacetCollision
                               (p1_00,p2_00,pa_00,pb_00,pc_00,
                                (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction,
                                &VStack_13,&vHit->normal,(MethodInfo *)0x0);
          } while (bVar11 == 0);
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          pMVar31 = TypeInfo__MVRaycast->static_fields;
          uStack_51._0_4_ = (pMVar31->intersectRay).m_Origin.x;
          uStack_51._4_4_ = (pMVar31->intersectRay).m_Origin.y;
          fStack_50 = (pMVar31->intersectRay).m_Origin.z;
          fStack_40 = (float)uStack_51._4_4_ - VStack_13.y;
          fStack_58 = (float)(undefined4)uStack_51 - VStack_13.x;
          fStack_22 = fStack_50 - VStack_13.z;
          VStack_18.z = fStack_22;
          fVar59 = (float10)func_?(&fStack_58,0);
          fVar34 = (float)fVar59;
          if (scaledDistance < fVar34) {
            cube._3_1_ = 0;
          }
          else {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            pMVar31 = TypeInfo__MVRaycast->static_fields;
            uVar60 = (pMVar31->intersectRay).m_Direction.x;
            uVar61 = (pMVar31->intersectRay).m_Direction.y;
            VStack_18.x = (pMVar31->intersectRay).m_Direction.x;
            VStack_18.y = (pMVar31->intersectRay).m_Direction.y;
            fStack_40 = (float)uVar61 * fVar34 * scale.y;
            fStack_58 = (float)uVar60 * fVar34 * scale.x;
            fStack_22 = (pMVar31->intersectRay).m_Direction.z * fVar34 * scale.z;
            VStack_18.z = fStack_22;
            fVar59 = (float10)func_?(&fStack_58,0);
            fVar34 = (float)fVar59;
            vHit->distance = fVar34;
            VStack_18.z = fVar34 * ray.m_Direction.z + ray.m_Origin.z;
            (vHit->point).x = fVar34 * ray.m_Direction.x + ray.m_Origin.x;
            (vHit->point).y = fVar34 * ray.m_Direction.y + ray.m_Origin.y;
            (vHit->point).z = VStack_18.z;
            vHit->face = (int32_t)pIStack_20;
            cube._3_1_ = 1;
          }
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return cube._3_1_;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRaycast);
    }
    pMVar31 = TypeInfo__MVRaycast->static_fields;
    VStack_18.z = (float)(int)voxelPos.z;
    (pMVar31->cubeBounds).m_Center.x = (float)(int)voxelPos.x;
    (pMVar31->cubeBounds).m_Center.y = (float)(int)voxelPos.y;
    (pMVar31->cubeBounds).m_Center.z = VStack_18.z;
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                       (&TypeInfo__MVRaycast->static_fields->cubeBounds,
                        (TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin,
                        (MethodInfo *)0x0);
    if (bVar11 == 0) {
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar31 = TypeInfo__MVRaycast->static_fields;
      uVar62 = (pMVar31->cubeBounds).m_Extents.z;
      uVar63 = (pMVar31->cubeBounds).m_Center.x;
      uVar64 = (pMVar31->cubeBounds).m_Center.y;
      uVar65 = (pMVar31->cubeBounds).m_Center.z;
      bounds.m_Center.z = (float)uVar65;
      bounds.m_Center.y = (float)uVar64;
      bounds.m_Center.x = (float)uVar63;
      uVar66 = (pMVar31->cubeBounds).m_Extents.x;
      uVar67 = (pMVar31->cubeBounds).m_Extents.y;
      bounds.m_Extents.y = (float)uVar67;
      bounds.m_Extents.x = (float)uVar66;
      uVar68 = (pMVar31->intersectRay).m_Direction.z;
      uVar69 = (pMVar31->intersectRay).m_Origin.x;
      uVar70 = (pMVar31->intersectRay).m_Origin.y;
      uVar71 = (pMVar31->intersectRay).m_Origin.z;
      ray_00.m_Origin.z = (float)uVar71;
      ray_00.m_Origin.y = (float)uVar70;
      ray_00.m_Origin.x = (float)uVar69;
      uVar72 = (pMVar31->intersectRay).m_Direction.x;
      uVar73 = (pMVar31->intersectRay).m_Direction.y;
      ray_00.m_Direction.y = (float)uVar73;
      ray_00.m_Direction.x = (float)uVar72;
      ray_00.m_Direction.z = (float)uVar68;
      bounds.m_Extents.z = (float)uVar62;
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_IntersectRayAABB
                         (ray_00,bounds,&fStack_6,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar31 = TypeInfo__MVRaycast->static_fields;
        uVar74 = (pMVar31->intersectRay).m_Origin.x;
        uVar75 = (pMVar31->intersectRay).m_Origin.y;
        uVar76 = (pMVar31->intersectRay).m_Direction.x;
        uVar77 = (pMVar31->intersectRay).m_Direction.y;
        uStack_51._0_4_ = (pMVar31->cubeBounds).m_Center.x;
        uStack_51._4_4_ = (pMVar31->cubeBounds).m_Center.y;
        fStack_50 = (pMVar31->cubeBounds).m_Center.z;
        fStack_52 = (fStack_6 * (pMVar31->intersectRay).m_Direction.z +
                    (pMVar31->intersectRay).m_Origin.z) - fStack_50;
        uStack_47 = CONCAT44((fStack_6 * (float)uVar77 + (float)uVar75) - (float)uStack_51._4_4_,
                             (fStack_6 * (float)uVar76 + (float)uVar74) -
                             (float)(undefined4)uStack_51);
        if (fStack_6 <= scaledDistance) {
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          localDir.z = fStack_52;
          localDir.x = (float)(undefined4)uStack_47;
          localDir.y = (float)uStack_47._4_4_;
          FVar29 = Cube::Cube_GetFaceIdentityFromLocalDir(localDir,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          FVar78 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceToFaceFlag
                             (FVar29,(MethodInfo *)0x0);
          if (((cube->fields).hiddenSides & (byte)FVar78) == 0) {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pMVar31 = TypeInfo__MVRaycast->static_fields;
            uVar79 = (pMVar31->intersectRay).m_Direction.x;
            uVar80 = (pMVar31->intersectRay).m_Direction.y;
            VStack_18.x = (pMVar31->intersectRay).m_Direction.x;
            VStack_18.y = (pMVar31->intersectRay).m_Direction.y;
            fStack_58 = (float)uVar79 * fStack_6 * scale.x;
            fStack_40 = (float)uVar80 * fStack_6 * scale.y;
            fStack_22 = (pMVar31->intersectRay).m_Direction.z * fStack_6 * scale.z;
            VStack_18.z = fStack_22;
            fVar59 = (float10)func_?();
            fVar34 = (float)fVar59;
            vHit->distance = fVar34;
            VStack_18.z = fVar34 * ray.m_Direction.z + ray.m_Origin.z;
            (vHit->point).x = fVar34 * ray.m_Direction.x + ray.m_Origin.x;
            (vHit->point).y = fVar34 * ray.m_Direction.y + ray.m_Origin.y;
            (vHit->point).z = VStack_18.z;
            vHit->face = FVar29;
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar15 = Cube::Cube_GetFaceAxis(&VStack_18,FVar29,(MethodInfo *)0x0);
            fVar39 = pVVar15->y;
            fVar34 = pVVar15->z;
            (vHit->normal).x = pVVar15->x;
            (vHit->normal).y = fVar39;
            (vHit->normal).z = fVar34;
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
        }
      }
    }
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return 0;
}


/* Void HandleObjectsInsideBoxCollider(Ray, Int32, PhysicsCollisionDatasWrapper, VoxelHit ByRef,
   HashSet`1[System.Int32], Single) */

void Assembly-CSharp.dll::MVRaycast::MVRaycast_HandleObjectsInsideBoxCollider
               (Ray ray,int32_t indexOfFirstHit,PhysicsCollisionDatasWrapper *collisionData,
               VoxelHit *voxelHit,HashSet_1_System_Int32_ *ignoreWoIds,float distance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  BStack_1.m_Center.x = 0.0;
  BStack_1.m_Center.y = 0.0;
  BStack_1.m_Center.z = 0.0;
  BStack_1.m_Extents.x = 0.0;
  BStack_1.m_Extents.y = 0.0;
  BStack_1.m_Extents.z = 0.0;
  func_?(&VStack_2,0,0x48);
  key = indexOfFirstHit;
  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
    do {
      do {
        while( true ) {
          do {
            key = key + 1;
            if ((collisionData->fields).length <= key) {
              return;
            }
            pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                               (collisionData,key,(MethodInfo *)0x0);
            if (pPVar3 == (PhysicsCollisionData *)0x0) goto code_?;
            unaff_EBX = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                  ((pPVar3->fields).transform,(MethodInfo *)0x0);
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              BStack_4.m_Center.y = (float)TypeInfo__SharedCollisionFunctions;
              BStack_4.m_Center.x = (float)&UNK_?;
              func_?();
            }
            bVar5 = SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
                              (unaff_EBX,ignoreWoIds,(MethodInfo *)0x0);
          } while (bVar5 != 0);
          iVar6 = func_?(unaff_EBX,TypeInfo__ICubeModelCollider);
          if (iVar6 == 0) break;
          uStack_7._0_4_ = (voxelHit->point).x;
          uStack_7._4_4_ = (voxelHit->point).y;
          fStack_8 = (voxelHit->point).z;
          fVar9 = ray.m_Origin.x - (float)(undefined4)uStack_7;
          fVar10 = ray.m_Origin.y - (float)uStack_7._4_4_;
          fVar11 = ray.m_Origin.z - fStack_8;
          pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,key,(MethodInfo *)0x0);
          if (pPVar3 == (PhysicsCollisionData *)0x0) goto code_?;
          uStack_12._0_4_ = (pPVar3->fields).point.x;
          uStack_12._4_4_ = (pPVar3->fields).point.y;
          fStack_13 = (pPVar3->fields).point.z;
          if (fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 <
              (ray.m_Origin.y - (float)uStack_12._4_4_) * (ray.m_Origin.y - (float)uStack_12._4_4_)
              + (ray.m_Origin.x - (float)(undefined4)uStack_12) *
                (ray.m_Origin.x - (float)(undefined4)uStack_12) +
              (ray.m_Origin.z - fStack_13) * (ray.m_Origin.z - fStack_13)) {
            return;
          }
          pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
          if ((pPVar3 == (PhysicsCollisionData *)0x0) ||
             (this = (pPVar3->fields).collider, this == (Collider *)0x0)) goto code_?;
          pBVar14 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                             (&BStack_4,this,(MethodInfo *)0x0);
          BStack_1.m_Center.x = (pBVar14->m_Center).x;
          BStack_1.m_Center.y = (pBVar14->m_Center).y;
          BStack_1.m_Center.z = (pBVar14->m_Center).z;
          BStack_1.m_Extents.x = (pBVar14->m_Extents).x;
          BStack_1.m_Extents.y = (pBVar14->m_Extents).y;
          BStack_1.m_Extents.z = (pBVar14->m_Extents).z;
          pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,key,(MethodInfo *)0x0);
          if (pPVar3 == (PhysicsCollisionData *)0x0) goto code_?;
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                            (&BStack_1,(pPVar3->fields).point,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            return;
          }
          BStack_4.m_Center.y = 1.00893e-43;
          BStack_4.m_Center.x = 0.0;
          func_?(&VStack_2);
          pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,key,(MethodInfo *)0x0);
          if ((pPVar3 == (PhysicsCollisionData *)0x0) ||
             (this_00 = (pPVar3->fields).transform, this_00 == (Transform *)0x0))
          goto code_?;
          pIStack_15 = (ICubeModelCollider__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0);
          pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,key,(MethodInfo *)0x0);
          if (pPVar3 == (PhysicsCollisionData *)0x0) goto code_?;
          uStack_16._0_4_ = (pPVar3->fields).point.x;
          uStack_16._4_4_ = (pPVar3->fields).point.y;
          fStack_17 = (pPVar3->fields).point.z;
          if (unaff_EBX == (MVWorldObjectClient *)0x0) goto code_?;
          puVar18 = (undefined8 *)func_?(auStack_19,8,unaff_EBX);
          uStack_20 = *puVar18;
          fVar10 = *(float *)(puVar18 + 1);
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          pIStack_21 = TypeInfo__ICubeModelCollider;
          pIVar22 = (ICubeModelCollider *)func_?(unaff_EBX,TypeInfo__ICubeModelCollider);
          if (pIVar22 == (ICubeModelCollider *)0x0) goto code_?;
          hitPoint.z = fStack_17;
          hitPoint.x = (float)(undefined4)uStack_16;
          hitPoint.y = (float)uStack_16._4_4_;
          scale.z = fVar10;
          scale.x = (float)(undefined4)uStack_20;
          scale.y = (float)uStack_20._4_4_;
          bVar5 = MVRaycast_GetCellOnRay
                            (ray,&VStack_2,(GameObject *)pIStack_15,pIVar22,hitPoint,distance,scale,
                             (MethodInfo *)0x0);
          if (bVar5 != 0) {
            uStack_23._0_4_ = (voxelHit->point).x;
            uStack_23._4_4_ = (voxelHit->point).y;
            fStack_24 = (voxelHit->point).z;
            if ((ray.m_Origin.y - VStack_2.point.y) * (ray.m_Origin.y - VStack_2.point.y) +
                (ray.m_Origin.x - VStack_2.point.x) * (ray.m_Origin.x - VStack_2.point.x) +
                (ray.m_Origin.z - VStack_2.point.z) * (ray.m_Origin.z - VStack_2.point.z) <
                (ray.m_Origin.y - (float)uStack_23._4_4_) *
                (ray.m_Origin.y - (float)uStack_23._4_4_) +
                (ray.m_Origin.x - (float)(undefined4)uStack_23) *
                (ray.m_Origin.x - (float)(undefined4)uStack_23) +
                (ray.m_Origin.z - fStack_24) * (ray.m_Origin.z - fStack_24)) {
              pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                                 (collisionData,key,(MethodInfo *)0x0);
              if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MVRaycast);
              }
              pIStack_15 = TypeInfo__ICubeModelCollider;
              pIVar22 = (ICubeModelCollider *)func_?(unaff_EBX,TypeInfo__ICubeModelCollider)
              ;
              if (pIVar22 == (ICubeModelCollider *)0x0) goto code_?;
              MVRaycast_SetFoundHitVariables(&VStack_2,pPVar3,pIVar22,(MethodInfo *)0x0);
              if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__SharedCollisionFunctions);
              }
              SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
                        (voxelHit,&VStack_2,(MethodInfo *)0x0);
            }
          }
        }
        pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           (collisionData,key,(MethodInfo *)0x0);
        if (pPVar3 == (PhysicsCollisionData *)0x0) goto code_?;
      } while ((pPVar3->fields).isInsideCollider != 0);
      uStack_25._0_4_ = (voxelHit->point).x;
      uStack_25._4_4_ = (voxelHit->point).y;
      fStack_26 = (voxelHit->point).z;
      fVar11 = ray.m_Origin.x - (float)(undefined4)uStack_25;
      fVar9 = ray.m_Origin.y - (float)uStack_25._4_4_;
      fVar10 = ray.m_Origin.z - fStack_26;
      pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,key,(MethodInfo *)0x0);
      if (pPVar3 == (PhysicsCollisionData *)0x0) goto code_?;
      uStack_27._0_4_ = (pPVar3->fields).point.x;
      uStack_27._4_4_ = (pPVar3->fields).point.y;
      fStack_28 = (pPVar3->fields).point.z;
    } while (fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10 <=
             (ray.m_Origin.y - (float)uStack_27._4_4_) * (ray.m_Origin.y - (float)uStack_27._4_4_) +
             (ray.m_Origin.x - (float)(undefined4)uStack_27) *
             (ray.m_Origin.x - (float)(undefined4)uStack_27) +
             (ray.m_Origin.z - fStack_28) * (ray.m_Origin.z - fStack_28));
    pPVar3 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                       (collisionData,key,(MethodInfo *)0x0);
    if (unaff_EBX != (MVWorldObjectClient *)0x0) {
      woId = (unaff_EBX->fields)._.id;
      if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCollisionFunctions);
      }
      SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                (voxelHit,pPVar3,woId,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX,pIStack_15);
code_?:
  func_?(unaff_EBX,pIStack_21);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Boolean HitDetectOnWo(Ray, Int32, MVWorldObjectClient, PhysicsCollisionDatasWrapper, Boolean,
   VoxelHit ByRef, HashSet`1[System.Int32], Single) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_HitDetectOnWo
               (Ray ray,int32_t i,MVWorldObjectClient *wo,
               PhysicsCollisionDatasWrapper *collisionData,bool handleObjectsInsideBoxCollider,
               VoxelHit *voxelHit,HashSet_1_System_Int32_ *ignoreWoIds,float distance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  iVar1 = func_?(wo,TypeInfo__ICubeModelCollider);
  if (collisionData == (PhysicsCollisionDatasWrapper *)0x0) {
code_?:
    func_?();
  }
  else {
    if (iVar1 == 0) {
      pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,i,(MethodInfo *)0x0);
      if (pPVar2 != (PhysicsCollisionData *)0x0) {
        if ((pPVar2->fields).isInsideCollider != 0) {
          return 0;
        }
        pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           (collisionData,i,(MethodInfo *)0x0);
        if (wo != (MVWorldObjectClient *)0x0) {
          woId = (wo->fields)._.id;
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                    (voxelHit,pPVar2,woId,(MethodInfo *)0x0);
          return 1;
        }
      }
      goto code_?;
    }
    pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                       (collisionData,i,(MethodInfo *)0x0);
    if ((pPVar2 == (PhysicsCollisionData *)0x0) ||
       (this = (pPVar2->fields).transform, this == (Transform *)0x0)) goto code_?;
    chunk = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
    pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                       (collisionData,i,(MethodInfo *)0x0);
    if ((pPVar2 == (PhysicsCollisionData *)0x0) ||
       (fVar3 = (pPVar2->fields).point.z, wo == (MVWorldObjectClient *)0x0)) goto code_?;
    pVVar4 = (Vector3 *)(*(code *)(wo->klass->vtable).get_Scale.method)();
    fVar5 = pVVar4->z;
    scale = *pVVar4;
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar6 = (ICubeModelCollider *)func_?();
    if (pIVar6 == (ICubeModelCollider *)0x0) goto code_?;
    hitPoint.y = 0.0;
    hitPoint.x = fVar5;
    hitPoint.z = fVar3;
    bVar7 = MVRaycast_GetCellOnRay
                      (ray,voxelHit,chunk,pIVar6,hitPoint,distance,scale,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      return 0;
    }
    pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                       (collisionData,i,(MethodInfo *)0x0);
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar6 = (ICubeModelCollider *)func_?();
    if (pIVar6 != (ICubeModelCollider *)0x0) {
      MVRaycast_SetFoundHitVariables(voxelHit,pPVar2,pIVar6,(MethodInfo *)0x0);
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVRaycast_HandleObjectsInsideBoxCollider
                (ray,i,collisionData,voxelHit,(HashSet_1_System_Int32_ *)pPVar2,(float)pIVar6,
                 (MethodInfo *)0x0);
      return 1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean IsWithinDistance(Single, Vector3, IntVector) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_IsWithinDistance
               (float distance,Vector3 localOrigin,IntVector voxelPos,MethodInfo *method)

{
  if (distance != _UNK_?) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_2._0_4_ = (pVVar1->oneVector).x;
    uStack_2._4_4_ = (pVVar1->oneVector).y;
    fStack_3 = (pVVar1->oneVector).z;
    fStack_4 = (float)uStack_2._4_4_ * _UNK_? * (float)uStack_2._4_4_ * _UNK_? +
               (float)(undefined4)uStack_2 * _UNK_? *
               (float)(undefined4)uStack_2 * _UNK_? +
               fStack_3 * _UNK_? * fStack_3 * _UNK_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_2._0_4_ = (pVVar1->oneVector).x;
    uStack_2._4_4_ = (pVVar1->oneVector).y;
    fStack_3 = (pVVar1->oneVector).z;
    fStack_5 = (float)uStack_2._4_4_ * _UNK_? * (float)uStack_2._4_4_ * _UNK_? +
               (float)(undefined4)uStack_2 * _UNK_? *
               (float)(undefined4)uStack_2 * _UNK_? +
               fStack_3 * _UNK_? * fStack_3 * _UNK_?;
    pVVar6 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalIntVectorToLocalPos(&VStack_7,voxelPos,(MethodInfo *)0x0);
    uVar8 = pVVar6->x;
    uVar9 = pVVar6->y;
    fVar10 = pVVar6->z - localOrigin.z;
    return ((float)uVar9 - localOrigin.y) * ((float)uVar9 - localOrigin.y) +
           ((float)uVar8 - localOrigin.x) * ((float)uVar8 - localOrigin.x) + fVar10 * fVar10 <=
           distance * distance + fStack_4 + fStack_5 * distance;
  }
  return 1;
}


/* Boolean MVHit(Ray, MVWorldObjectClient, VoxelHit ByRef, Single) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit
               (Ray ray,MVWorldObjectClient *wo,VoxelHit *voxelHit,float distance,MethodInfo *method
               )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff10;
  puVar5 = &stack0xffffff10;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Add_UnityEngine__RaycastHit_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Clear__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__ToArray__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__ToArray__
                   );
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PhysicsCollisionData);
    func_?(&TypeInfo__SharedCollisionFunctions);
    func_?(&StringLiteral_No_collider_on_wo_of_type_);
    func_?(&StringLiteral_Maybe_a_recursive_check_of_the_c);
    func_?(&StringLiteral_Remember_to_test_positive_infini);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&RStack_6,0,0x2c);
  iStack_7 = 0;
  BStack_8.m_Extents.y = 0.0;
  BStack_8.m_Extents.z = 0.0;
  BStack_8.m_Center.x = 0.0;
  BStack_8.m_Center.y = 0.0;
  BStack_8.m_Center.z = 0.0;
  BStack_8.m_Extents.x = 0.0;
  func_?(&RStack_9,0,0x2c);
  func_?(voxelHit,0,0x48);
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  pLVar10 = TypeInfo__MVRaycast->static_fields->sortedHits;
  if (pLVar10 != (List_1_UnityEngine_RaycastHit_ *)0x0) {
    piVar11 = &(pLVar10->fields)._version;
    *piVar11 = *piVar11 + 1;
    (pLVar10->fields)._size = 0;
    iVar12 = func_?(wo,TypeInfo__ICubeModelCollider);
    pIVar13 = TypeInfo__ICubeModelCollider;
    if (iVar12 == 0) {
      if (wo != (MVWorldObjectClient *)0x0) {
        pCVar14 = (wo->fields).collider;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pCVar14,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          pTVar16 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
          pSVar17 = StringLiteral_No_collider_on_wo_of_type_;
          if (pTVar16 == (Type *)0x0) {
            str1 = (String *)0x0;
          }
          else {
            str1 = (String *)
                   (*(code *)(pTVar16->klass->vtable).ToString.method)
                             (pTVar16,(pTVar16->klass->vtable).GetCustomAttributes.methodPtr);
          }
          pSVar17 = mscorlib.dll::System::String::String_Concat_3(pSVar17,str1,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar17,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Maybe_a_recursive_check_of_the_c,(MethodInfo *)0x0);
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Remember_to_test_positive_infini,(MethodInfo *)0x0);
        pCVar14 = (wo->fields).collider;
        if (pCVar14 != (Collider *)0x0) {
          bVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                            (pCVar14,ray,&RStack_9,distance,(MethodInfo *)0x0);
          if (bVar15 == 0) goto code_?;
          this_00 = (PhysicsCollisionData *)func_?();
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor
                    ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,
                     (MethodInfo *)0x0);
          if (this_00 != (PhysicsCollisionData *)0x0) {
            hit.m_Point.y = RStack_9.m_Point.y;
            hit.m_Point.x = RStack_9.m_Point.x;
            hit.m_Point.z = RStack_9.m_Point.z;
            hit.m_Normal.x = RStack_9.m_Normal.x;
            hit.m_Normal.y = RStack_9.m_Normal.y;
            hit.m_Normal.z = RStack_9.m_Normal.z;
            hit.m_FaceID = RStack_9.m_FaceID;
            hit.m_Distance = RStack_9.m_Distance;
            hit.m_UV.x = RStack_9.m_UV.x;
            hit.m_UV.y = RStack_9.m_UV.y;
            hit.m_Collider = RStack_9.m_Collider;
            PhysicsCollisionData::PhysicsCollisionData_Set(this_00,hit,(MethodInfo *)0x0);
            woId = (wo->fields)._.id;
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,this_00,woId,(MethodInfo *)0x0);
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
        }
      }
    }
    else if (wo != (MVWorldObjectClient *)0x0) {
      iVar12 = func_?(wo,TypeInfo__ICubeModelCollider);
      pIVar18 = TypeInfo__ICubeModelCollider;
      if ((iVar12 == 0) ||
         (piStack_19 = (int *)func_?(wo,TypeInfo__ICubeModelCollider), pIVar13 = pIVar18,
         piStack_19 == (int *)0x0)) {
        func_?(wo,pIVar13);
      }
      else {
        iStack_20 = *piStack_19;
        uVar21 = 0;
        if (*(ushort *)(iStack_20 + 0xb6) != 0) {
          do {
            if (*(ICubeModelCollider__Class **)(*(int *)(iStack_20 + 0x58) + (uint)uVar21 * 8) ==
                TypeInfo__ICubeModelCollider) {
              puVar22 = (undefined4 *)
                        (iStack_20 + 0xe0 +
                        *(int *)(*(int *)(iStack_20 + 0x58) + 4 + (uint)uVar21 * 8) * 8);
              goto code_?;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(ushort *)(iStack_20 + 0xb6));
        }
        puVar22 = (undefined4 *)func_?(piStack_19,TypeInfo__ICubeModelCollider,4);
code_?:
        iVar12 = (*(code *)*puVar22)(piStack_19,puVar22[1]);
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVRaycast);
        }
        pLVar23 = TypeInfo__MVRaycast->static_fields->colliderList;
        if (pLVar23 != (List_1_UnityEngine_Collider_ *)0x0) {
          length = (pLVar23->fields)._size;
          piVar11 = &(pLVar23->fields)._version;
          *piVar11 = *piVar11 + 1;
          (pLVar23->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar23->fields)._items,0,length,(MethodInfo *)0x0);
          }
          if (iVar12 != 0) {
            piStack_24 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,iVar12)
            ;
            piStack_25 = &iStack_7;
            ppiStack_26 = &piStack_24;
            uStack_27 = 0;
            uStack_1 = 1;
            fStack_28 = ray.m_Origin.x;
            fStack_29 = ray.m_Origin.y;
            fStack_30 = ray.m_Origin.z;
            fStack_31 = ray.m_Direction.x;
            while (piStack_24 != (int *)0x0) {
              cVar32 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_24);
              if (cVar32 == '\0') {
                uStack_1 = 0xffffffff;
                iStack_7 = func_?(piStack_24,TypeInfo__System__IDisposable);
                if (iStack_7 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iStack_7);
                }
                uStack_1 = 0xffffffff;
                if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MVRaycast);
                }
                this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                        *)TypeInfo__MVRaycast->static_fields->colliderList;
                if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                             *)0x0) {
                  overlapResult =
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                       Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                       List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                 (this,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__ToArray__
                                 );
                  pLVar10 = TypeInfo__MVRaycast->static_fields->sortedHits;
                  if (pLVar10 != (List_1_UnityEngine_RaycastHit_ *)0x0) {
                    hits = (RaycastHit__Array *)
                           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           UIElements::Internal::MultiColumnCollectionHeader+ViewState+ColumnState]
                           ::
                           List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                     ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                       *)pLVar10,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__ToArray__
                                     );
                    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    origin.y = fStack_29;
                    origin.x = fStack_28;
                    origin.z = ray.m_Origin.z;
                    collisionData =
                         SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData
                                   ((Collider__Array *)overlapResult,hits,origin,(MethodInfo *)0x0);
                    iVar12 = 0;
                    if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
                  }
                }
                break;
              }
              piStack_19 = piStack_24;
              if (piStack_24 == (int *)0x0) break;
              iStack_33 = *piStack_24;
              uVar21 = 0;
              iStack_20 = 0;
              if (*(ushort *)(iStack_33 + 0xb6) != 0) {
                do {
                  if (*(IEnumerator__Class **)(*(int *)(iStack_33 + 0x58) + (uint)uVar21 * 8) ==
                      TypeInfo__System__Collections__IEnumerator) {
                    puVar22 = (undefined4 *)
                              (iStack_33 + 200 +
                              *(int *)(*(int *)(iStack_33 + 0x58) + 4 + (uint)uVar21 * 8) * 8);
                    goto code_?;
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < *(ushort *)(iStack_33 + 0xb6));
              }
              puVar22 = (undefined4 *)
                        func_?(piStack_24,TypeInfo__System__Collections__IEnumerator,1);
code_?:
              piVar34 = (int *)(*(code *)*puVar22)(piStack_19,puVar22[1]);
              uVar35 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                ,piVar34);
              if (piVar34 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar34 + 0x20) !=
                  (
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                  ->_0).element_class) goto code_?;
              iVar12 = func_?(piVar34);
              pCVar14 = *(Collider **)(iVar12 + 0x1c);
              if (pCVar14 == (Collider *)0x0) break;
              bVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                                (pCVar14,ray,&RStack_6,distance,(MethodInfo *)0x0);
              if (bVar15 == 0) {
                pBVar36 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                    ((Bounds *)&puStack_37,pCVar14,(MethodInfo *)0x0);
                BStack_8.m_Center.x = (pBVar36->m_Center).x;
                BStack_8.m_Center.y = (pBVar36->m_Center).y;
                BStack_8.m_Center.z = (pBVar36->m_Center).z;
                BStack_8.m_Extents.x = (pBVar36->m_Extents).x;
                BStack_8.m_Extents.y = (pBVar36->m_Extents).y;
                BStack_8.m_Extents.z = (pBVar36->m_Extents).z;
                bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                                  (&BStack_8,ray.m_Origin,(MethodInfo *)0x0);
                if (bVar15 != 0) {
                  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pLVar23 = TypeInfo__MVRaycast->static_fields->colliderList;
                  if (pLVar23 == (List_1_UnityEngine_Collider_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pLVar23,(Object *)pCVar14,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                            );
                }
              }
              else {
                if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MVRaycast);
                }
                pLVar10 = TypeInfo__MVRaycast->static_fields->sortedHits;
                if (pLVar10 == (List_1_UnityEngine_RaycastHit_ *)0x0) break;
                func_?(pLVar10,RStack_6.m_Point.x,RStack_6.m_Point.y,RStack_6.m_Point.z,
                                RStack_6.m_Normal.x,RStack_6.m_Normal.y,RStack_6.m_Normal.z,
                                RStack_6.m_FaceID,RStack_6.m_Distance,RStack_6.m_UV.x,
                                RStack_6.m_UV.y,RStack_6.m_Collider,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Add_UnityEngine__RaycastHit_
                               );
              }
            }
          }
        }
      }
    }
  }
  uVar35 = func_?();
code_?:
  func_?(uVar35);
  pcVar38 = (code *)swi(3);
  bVar15 = (*pcVar38)();
  return bVar15;
code_?:
  if ((collisionData->fields).length <= iVar12) goto code_?;
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  ray_00.m_Origin.y = fStack_29;
  ray_00.m_Origin.x = fStack_28;
  ray_00.m_Origin.z = fStack_30;
  ray_00.m_Direction.x = fStack_31;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar15 = MVRaycast_HitDetectOnWo
                    (ray_00,iVar12,wo,collisionData,0,voxelHit,(HashSet_1_System_Int32_ *)0x0,
                     distance,(MethodInfo *)0x0);
  if (bVar15 != 0) goto code_?;
  iVar12 = iVar12 + 1;
  goto code_?;
}


/* List`1[VoxelHit] MVHitAll(Ray, Single, Int32, HashSet`1[System.Int32]) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHitAll
          (Ray ray,float distance,int32_t layerMask,HashSet_1_System_Int32_ *ignoreWoIds,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVRaycast);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  pLVar1 = MVRaycast_MVHit_2(ray,1,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean MVHit(Ray, VoxelHit ByRef, Single, Int32, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit_1
               (Ray ray,VoxelHit *voxelHit,float distance,int32_t layerMask,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    func_?(&TypeInfo__MVRaycast);
    func_?(&StringLiteral_Hit_counter_greater_than_1_);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  this = (List_1_GameTierProgressBar_TierProgressData_ *)
         MVRaycast_MVHit_2(ray,0,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  if (this != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    iVar1 = (this->fields)._size;
    if (iVar1 != 0) {
      if (iVar1 < 2) {
        pGVar2 = mscorlib.dll::System::Collections::Generic::
                  List`1[GameTierProgressBar+TierProgressData]::
                  List_1_GameTierProgressBar_TierProgressData__get_Item
                            ((GameTierProgressBar_TierProgressData *)&stack0xffffffb4,this,0,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                            );
        pTVar3 = pGVar2->progressText;
        pGVar4 = pGVar2->progressDivider;
        pGVar5 = pGVar2->progressBarTextBubble;
        pGVar6 = pGVar2->avatarHead;
        pRVar7 = pGVar2->avatarHeadImage;
        pGVar8 = pGVar2->avatarHeadUI;
        pPVar9 = pGVar2->disabledProgressBar;
        pGVar10 = pGVar2->disabledProgressDivider;
        pGVar11 = pGVar2->disabledBarTextBubble;
        pGVar12 = pGVar2->tierIconTempUnlock;
        pCVar13 = (Cube *)pGVar2->tierIconNumber;
        pPVar14 = pGVar2->endResultProgressBar;
        pCVar15 = (Collider *)pGVar2->tempProgress;
        pTVar16 = (Transform *)pGVar2->disabledTempProgress;
        pGVar17 = pGVar2->freeTryTextBubble;
        iVar18 = *(int64_t *)&pGVar2->hoverInputHandler;
        (voxelHit->point).x = (float)pGVar2->progressBar;
        (voxelHit->point).y = (float)pTVar3;
        (voxelHit->point).z = (float)pGVar4;
        (voxelHit->normal).x = (float)pGVar5;
        (voxelHit->normal).y = (float)pGVar6;
        (voxelHit->normal).z = (float)pRVar7;
        *(GameObject **)&voxelHit->cubePos = pGVar8;
        *(ProgressBar **)&(voxelHit->cubePos).z = pPVar9;
        voxelHit->face = (int32_t)pGVar10;
        *(GamePassesTextBubble **)&voxelHit->isCubeHit = pGVar11;
        voxelHit->woId = (int32_t)pGVar12;
        voxelHit->cube = pCVar13;
        voxelHit->distance = (float)pPVar14;
        voxelHit->collider = pCVar15;
        voxelHit->transform = pTVar16;
        *(GamePassesTextBubble **)&voxelHit->field_0x3c = pGVar17;
        voxelHit->interactionFlags = iVar18;
        func_?();
        return 1;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
  func_?();
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
}


/* List`1[VoxelHit] MVHit(Ray, Boolean, Single, Int32, HashSet`1[System.Int32]) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit_2
          (Ray ray,bool all,float distance,int32_t layerMask,HashSet_1_System_Int32_ *ignoreWoIds,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Clear__);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa8,0,0x48);
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  pLVar1 = TypeInfo__MVRaycast->static_fields->voxelHits;
  if (pLVar1 != (List_1_VoxelHit_ *)0x0) {
    length = (pLVar1->fields)._size;
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (ray.m_Direction.x * ray.m_Direction.x + ray.m_Direction.y * ray.m_Direction.y +
        ray.m_Direction.z * ray.m_Direction.z != 0.0) {
      if (all != 0) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVRaycast);
        }
        this = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               TypeInfo__MVRaycast->static_fields->foundWos;
        if (this == (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
        goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                  (this,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
      }
      if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      pRVar3 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
      if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Physics);
      }
      hitAmount = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastNonAlloc_1
                            (ray,pRVar3,distance,layerMask,(MethodInfo *)0x0);
      overlapAmount =
           UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                     (ray.m_Origin,0.0,
                      TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                      layerMask,(MethodInfo *)0x0);
      overlapResult = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      pRVar3 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
      if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCollisionFunctions);
      }
      pPStack_4 = SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
                            (overlapAmount,overlapResult,hitAmount,pRVar3,ray.m_Origin,
                             (MethodInfo *)0x0);
      key = 0.0;
      if (pPStack_4 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
      for (; (int)key < (pPStack_4->fields).length; key = (float)((int)key + 1)) {
        pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           (pPStack_4,(int32_t)key,(MethodInfo *)0x0);
        if (pPVar5 == (PhysicsCollisionData *)0x0) goto code_?;
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                       ((pPVar5->fields).transform,(MethodInfo *)0x0);
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar6 = SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
                          (wo,ignoreWoIds,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          if (all != 0) {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_00 = (HashSet_1_System_UInt32_ *)TypeInfo__MVRaycast->static_fields->foundWos;
            if ((wo == (MVWorldObjectClient *)0x0) || (this_00 == (HashSet_1_System_UInt32_ *)0x0))
            goto code_?;
            bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                    HashSet_1_System_UInt32__Contains
                              (this_00,(wo->fields)._.id,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                              );
            if (bVar6 != 0) goto code_?;
          }
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          voxelHit = (VoxelHit *)&stack0xffffffa8;
          uVar7._0_2_ = 0;
          uVar7._2_2_ = 0;
          fVar8 = (float)(uint)(all ^ 1);
          fVar9 = key;
          pMVar10 = wo;
          pPVar11 = pPStack_4;
          pHVar12 = ignoreWoIds;
          fVar13 = distance;
          bVar6 = MVRaycast_HitDetectOnWo
                            (ray,(int32_t)key,wo,pPStack_4,all ^ 1,voxelHit,ignoreWoIds,distance,
                             (MethodInfo *)0x0);
          if (bVar6 != 0) {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pLVar1 = TypeInfo__MVRaycast->static_fields->voxelHits;
            if (pLVar1 == (List_1_VoxelHit_ *)0x0) goto code_?;
            func_?(pLVar1,fVar9,pMVar10,pPVar11,fVar8,voxelHit,pHVar12,fVar13,uVar7,
                            iStack_14,uStack_15,iStack_16,pCStack_17,fStack_18,pCStack_19,pTStack_20
                            ,uStack_21,(int)iStack_22,(int)((ulonglong)iStack_22 >> 0x20),
                            MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_)
            ;
            pHVar12 = TypeInfo__MVRaycast->static_fields->foundWos;
            if ((wo == (MVWorldObjectClient *)0x0) || (pHVar12 == (HashSet_1_System_Int32_ *)0x0))
            goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                      (pHVar12,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            if (all == 0) break;
          }
        }
code_?:
      }
    }
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRaycast);
    }
    return TypeInfo__MVRaycast->static_fields->voxelHits;
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  pLVar1 = (List_1_VoxelHit_ *)(*pcVar23)();
  return pLVar1;
}


/* Void SetFoundHitVariables(VoxelHit ByRef, PhysicsCollisionData, ICubeModelCollider) */

void Assembly-CSharp.dll::MVRaycast::MVRaycast_SetFoundHitVariables
               (VoxelHit *voxelHit,PhysicsCollisionData *collisionData,
               ICubeModelCollider *cubeModelBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__ICubeModelCollider);
    cRam_? = '\x01';
  }
  voxelHit->isCubeHit = 1;
  if (cubeModelBase != (ICubeModelCollider *)0x0) {
    iVar1 = func_?(0,TypeInfo__ICubeModelCollider,cubeModelBase);
    voxelHit->woId = iVar1;
    pIVar2 = cubeModelBase->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          ppMVar5 = &(&(cubeModelBase->klass->vtable).get_GameObject)
                     [pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,1);
code_?:
    this = (GameObject *)(*(code *)*ppMVar5)(cubeModelBase,ppMVar5[1]);
    if (this != (GameObject *)0x0) {
      pCVar6 = (Collider *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this,
                          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                         );
      voxelHit->collider = pCVar6;
      func_?(&voxelHit->collider,pCVar6);
      pIVar2 = cubeModelBase->klass;
      uVar4 = 0;
      uVar3._0_1_ = (pIVar2->_1).rank;
      uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar3 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__ICubeModelCollider) {
            ppMVar5 = &(&(cubeModelBase->klass->vtable).get_Transform)
                       [pIVar2->interfaceOffsets[uVar4].offset].method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      ppMVar5 = (MethodInfo **)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,2);
code_?:
      pTVar7 = (Transform *)(*(code *)*ppMVar5)(cubeModelBase,ppMVar5[1]);
      voxelHit->transform = pTVar7;
      func_?(&voxelHit->transform,pTVar7);
      pIVar2 = cubeModelBase->klass;
      uVar4 = 0;
      uVar8._0_1_ = (pIVar2->_1).rank;
      uVar8._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__ICubeModelCollider) {
            ppMVar5 = &(&(cubeModelBase->klass->vtable).get_InteractionFlags)
                       [pIVar2->interfaceOffsets[uVar4].offset].method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar8);
      }
      ppMVar5 = (MethodInfo **)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,3);
code_?:
      iVar9 = (*(code *)*ppMVar5)(cubeModelBase,ppMVar5[1]);
      voxelHit->interactionFlags = iVar9;
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVRaycast() */

void Assembly-CSharp.dll::MVRaycast::MVRaycast__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>);
    func_?(&TypeInfo__System__Collections__Generic__List<VoxelHit>);
    func_?(&TypeInfo__MVRaycast);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->zeroVector).x;
  uVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar1->oneVector).x;
  uVar6 = (pVVar1->oneVector).y;
  fVar7 = (pVVar1->oneVector).z * _UNK_?;
  fVar8 = (float)uVar5 * _UNK_?;
  fVar9 = (float)uVar6 * _UNK_?;
  pMVar10 = TypeInfo__MVRaycast->static_fields;
  (pMVar10->cubeBounds).m_Center.x = (float)uVar2;
  (pMVar10->cubeBounds).m_Center.y = (float)uVar3;
  (pMVar10->cubeBounds).m_Center.z = fVar4;
  (pMVar10->cubeBounds).m_Extents.x = fVar8;
  (pMVar10->cubeBounds).m_Extents.y = fVar9;
  (pMVar10->cubeBounds).m_Extents.z = fVar7;
  pMVar10 = TypeInfo__MVRaycast->static_fields;
  (pMVar10->intersectRay).m_Origin.x = 0.0;
  (pMVar10->intersectRay).m_Origin.y = 0.0;
  (pMVar10->intersectRay).m_Origin.z = 0.0;
  (pMVar10->intersectRay).m_Direction.x = 0.0;
  (pMVar10->intersectRay).m_Direction.y = 0.0;
  (pMVar10->intersectRay).m_Direction.z = 0.0;
  this = (HashSet_1_System_Int32_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  TypeInfo__MVRaycast->static_fields->foundWos = this;
  func_?(&TypeInfo__MVRaycast->static_fields->foundWos,this);
  this_00 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<VoxelHit>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
  TypeInfo__MVRaycast->static_fields->voxelHits = this_00;
  func_?(&TypeInfo__MVRaycast->static_fields->voxelHits,this_00);
  this_01 = (List_1_UnityEngine_RaycastHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__List__);
  TypeInfo__MVRaycast->static_fields->sortedHits = this_01;
  func_?(&TypeInfo__MVRaycast->static_fields->sortedHits,this_01);
  this_02 = (List_1_UnityEngine_Collider_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
  TypeInfo__MVRaycast->static_fields->colliderList = this_02;
  func_?(&TypeInfo__MVRaycast->static_fields->colliderList,this_02);
  return;
}

