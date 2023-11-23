
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
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  if (chunk != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (chunk,(MethodInfo *)0x0);
    pTStack_2 = this;
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (this != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                Transform_InverseTransformDirection
                          (&VStack_4,this,ray.m_Direction,(MethodInfo *)0x0);
      pMVar5 = TypeInfo__MVRaycast->static_fields;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_4,*pVVar3,(MethodInfo *)0x0);
      fVar6 = pVVar3->y;
      fVar7 = pVVar3->z;
      (pMVar5->intersectRay).m_Direction.x = pVVar3->x;
      (pMVar5->intersectRay).m_Direction.y = fVar6;
      (pMVar5->intersectRay).m_Direction.z = fVar7;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                          (&VStack_4,pTStack_2,ray.m_Origin,(MethodInfo *)0x0);
      bVar8 = distance != (float)_UNK_?;
      fVar7 = pVVar3->z;
      fVar6 = pVVar3->y;
      pMVar5 = TypeInfo__MVRaycast->static_fields;
      (pMVar5->intersectRay).m_Origin.x = pVVar3->x;
      (pMVar5->intersectRay).m_Origin.y = fVar6;
      (pMVar5->intersectRay).m_Origin.z = fVar7;
      if (bVar8) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uVar9 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
        uVar10 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
        pMVar5 = TypeInfo__MVRaycast->static_fields;
        uStack_11._0_4_ = (pMVar5->intersectRay).m_Direction.x;
        uStack_11._4_4_ = (pMVar5->intersectRay).m_Direction.y;
        fStack_12 = (pMVar5->intersectRay).m_Direction.z;
        uStack_13 = CONCAT44(((float)uVar10 * distance) / scale.y,((float)uVar9 * distance) / scale.x
                            );
        VStack_4.z = (fStack_12 * distance) / scale.z;
        pMStack_14 = (MethodInfo *)VStack_4.z;
        fVar15 = (float10)func_?();
        distance = (float)fVar15;
        pMStack_16 = (MethodInfo *)distance;
      }
      uStack_11 = CONCAT44(ray.m_Origin.y - hitPoint.y,ray.m_Origin.x - hitPoint.x);
      fStack_12 = ray.m_Origin.z - hitPoint.z;
      fVar7 = ray.m_Origin.z;
      fVar6 = ray.m_Origin.y;
      fVar15 = (float10)func_?();
      pMStack_16 = (MethodInfo *)(float)fVar15;
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar17 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
      uVar18 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
      pMVar5 = TypeInfo__MVRaycast->static_fields;
      uStack_11._0_4_ = (pMVar5->intersectRay).m_Direction.x;
      uStack_11._4_4_ = (pMVar5->intersectRay).m_Direction.y;
      fStack_12 = (pMVar5->intersectRay).m_Direction.z;
      uStack_13 = CONCAT44(((float)uVar18 * (float)pMStack_16) / scale.y,
                           ((float)uVar17 * (float)pMStack_16) / scale.x);
      VStack_4.z = (fStack_12 * (float)pMStack_16) / scale.z;
      pMStack_14 = (MethodInfo *)VStack_4.z;
      fVar15 = (float10)func_?();
      pMStack_16 = (MethodInfo *)(float)fVar15;
      uVar19 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin.x;
      uVar20 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
      pMVar21 = (MethodInfo *)((float)uVar20 * (float)pMStack_16 + (float)uVar19);
      uVar22 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin.y;
      uVar23 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
      pMVar24 = (MethodInfo *)((float)uVar23 * (float)pMStack_16 + (float)uVar22);
      pMVar5 = TypeInfo__MVRaycast->static_fields;
      uStack_13._0_4_ = (pMVar5->intersectRay).m_Origin.x;
      uStack_13._4_4_ = (pMVar5->intersectRay).m_Origin.y;
      pMStack_14 = (MethodInfo *)(pMVar5->intersectRay).m_Origin.z;
      pMVar5 = TypeInfo__MVRaycast->static_fields;
      uStack_11._0_4_ = (pMVar5->intersectRay).m_Direction.x;
      uStack_11._4_4_ = (pMVar5->intersectRay).m_Direction.y;
      fStack_12 = (pMVar5->intersectRay).m_Direction.z;
      VStack_4.z = fStack_12 * (float)pMStack_16 + (float)pMStack_14;
      VVar25.y = (float)pMVar21;
      VVar25.x = (float)((int)&uStack_13 + 4);
      VVar25.z = (float)pMVar24;
      pMStack_26 = pMVar21;
      pMStack_27 = pMVar24;
      uStack_28 = (MethodInfo *)VStack_4.z;
      IVar29 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(VVar25,(MethodInfo *)VStack_4.z);
      IStack_1._0_4_ = *IVar29._0_4_;
      IStack_1.z = *(int16_t *)(IVar29._0_4_ + 1);
      IStack_30.x = 0;
      IStack_30.y = 0;
      IStack_30.z = 0;
      IStack_31.x = 0;
      IStack_31.y = 0;
      IStack_31.z = 0;
      this_00 = (BoxCollider *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (chunk,
                           UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                          );
      if (this_00 != (BoxCollider *)0x0) {
        pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                            (&VStack_32,this_00,(MethodInfo *)0x0);
        VVar25 = *pVVar3;
        pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                            (&VStack_32,this_00,(MethodInfo *)0x0);
        uStack_13._0_4_ = pVVar3->x;
        uStack_13._4_4_ = pVVar3->y;
        pMStack_14 = (MethodInfo *)pVVar3->z;
        fVar33 = (float)(undefined4)uStack_13 * _UNK_?;
        fVar34 = (float)uStack_13._4_4_ * _UNK_?;
        fVar35 = (float)pMStack_14 * _UNK_?;
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        localSpaceBounds.m_Extents.x = fVar33;
        localSpaceBounds.m_Center = VVar25;
        localSpaceBounds.m_Extents.y = fVar34;
        localSpaceBounds.m_Extents.z = fVar35;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_30,&IStack_31,localSpaceBounds,(MethodInfo *)0x0);
        IVar29.z = IStack_30.z;
        IVar29.x = IStack_30.x;
        IVar29.y = IStack_30.y;
        max.z = IStack_31.z;
        max.x = IStack_31.x;
        max.y = IStack_31.y;
        MathFunctions::MathFunctions_ClampIntVector(&IStack_1,IVar29,max,(MethodInfo *)0x0);
        pMVar5 = TypeInfo__MVRaycast->static_fields;
        uStack_11._0_4_ = (pMVar5->intersectRay).m_Direction.x;
        uStack_11._4_4_ = (pMVar5->intersectRay).m_Direction.y;
        fStack_12 = (pMVar5->intersectRay).m_Direction.z;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        iVar36 = mscorlib.dll::System::Math::Math_Sign_2((float)uStack_11,(MethodInfo *)0x0);
        pMVar5 = TypeInfo__MVRaycast->static_fields;
        uStack_11._0_4_ = (pMVar5->intersectRay).m_Direction.x;
        uStack_11._4_4_ = (pMVar5->intersectRay).m_Direction.y;
        fStack_12 = (pMVar5->intersectRay).m_Direction.z;
        pMVar37 = (MethodInfo *)
                  mscorlib.dll::System::Math::Math_Sign_2((float)uStack_11._4_4_,(MethodInfo *)0x0);
        pMVar5 = TypeInfo__MVRaycast->static_fields;
        uStack_11._0_4_ = (pMVar5->intersectRay).m_Direction.x;
        uStack_11._4_4_ = (pMVar5->intersectRay).m_Direction.y;
        fStack_12 = (pMVar5->intersectRay).m_Direction.z;
        pMStack_14 = pMVar37;
        iStack_38 = mscorlib.dll::System::Math::Math_Sign_2(fStack_12,(MethodInfo *)0x0);
        pMStack_16 = (MethodInfo *)(uint)(0 < iVar36);
        pMStack_39 = (MethodInfo *)(float)(int)((uint)(0 < (int)pMVar37) + (int)IStack_1.y);
        pMStack_40 = (MethodInfo *)(float)((int)pMStack_16 + (int)IStack_1.x);
        pMStack_41 = (MethodInfo *)(float)(int)((uint)(0 < iStack_38) + (int)IStack_1.z);
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar5 = TypeInfo__MVRaycast->static_fields;
        uStack_11._0_4_ = (pMVar5->intersectRay).m_Direction.x;
        uStack_11._4_4_ = (pMVar5->intersectRay).m_Direction.y;
        fStack_12 = (pMVar5->intersectRay).m_Direction.z;
        pMVar5 = TypeInfo__MVRaycast->static_fields;
        uVar42 = (pMVar5->intersectRay).m_Direction.y;
        VStack_32.x = (pMVar5->intersectRay).m_Direction.x;
        VStack_32.y = (pMVar5->intersectRay).m_Direction.y;
        VStack_32.z = (pMVar5->intersectRay).m_Direction.z;
        pMStack_40 = (MethodInfo *)
                     ((((float)pMStack_40 - (float)pMStack_26) - _UNK_?) / (float)uStack_11);
        pMStack_39 = (MethodInfo *)
                     ((((float)pMStack_39 - (float)pMStack_27) - _UNK_?) / (float)uVar42);
        pMStack_16 = (MethodInfo *)
                     ((((float)pMStack_41 - (float)uStack_28) - _UNK_?) / VStack_32.z);
        if ((0x7f800000 < (uint)ABS((float)pMStack_40)) || ((float)pMStack_40 == _UNK_?)) {
          pMStack_40 = _UNK_?;
        }
        if ((0x7f800000 < (uint)ABS((float)pMStack_39)) || ((float)pMStack_39 == _UNK_?)) {
          pMStack_39 = _UNK_?;
        }
        if ((0x7f800000 < (uint)ABS((float)pMStack_16)) ||
           (pMStack_41 = pMStack_16, (float)pMStack_16 == _UNK_?)) {
          pMStack_41 = _UNK_?;
        }
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar5 = TypeInfo__MVRaycast->static_fields;
        VStack_32.x = (pMVar5->intersectRay).m_Direction.x;
        VStack_32.y = (pMVar5->intersectRay).m_Direction.y;
        uVar43 = (pMVar5->intersectRay).m_Direction.y;
        uStack_11._0_4_ = (pMVar5->intersectRay).m_Direction.x;
        uStack_11._4_4_ = (pMVar5->intersectRay).m_Direction.y;
        fStack_12 = (pMVar5->intersectRay).m_Direction.z;
        pMStack_27 = (MethodInfo *)((float)iVar36 / VStack_32.x);
        pMStack_16 = (MethodInfo *)((float)(int)pMVar37 / (float)uVar43);
        uStack_28 = (MethodInfo *)((float)iStack_38 / fStack_12);
        if (0x7f800000 < (uint)ABS((float)pMStack_27)) {
          pMStack_27 = _UNK_?;
        }
        if (0x7f800000 < (uint)ABS((float)pMStack_16)) {
          pMStack_16 = _UNK_?;
        }
        pMStack_26 = uStack_28;
        if (0x7f800000 < (uint)ABS((float)uStack_28)) {
          pMStack_26 = _UNK_?;
        }
        while( true ) {
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          voxelPos_00.z = IStack_1.z;
          voxelPos_00.x = IStack_1.x;
          voxelPos_00.y = IStack_1.y;
          bVar44 = MVRaycast_IsWithinDistance
                             (distance,(TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin,
                              voxelPos_00,(MethodInfo *)0x0);
          if (bVar44 == 0) {
            return 0;
          }
          uStack_28 = (MethodInfo *)CONCAT22(IStack_1.z,(undefined2)uStack_28);
          if (cmb == (ICubeModelCollider *)0x0) break;
          pIVar45 = cmb->klass;
          uVar46 = 0;
          uVar47._0_1_ = (pIVar45->_1).rank;
          uVar47._1_1_ = (pIVar45->_1).minimumAlignment;
          if (uVar47 != 0) {
            do {
              if (pIVar45->interfaceOffsets[uVar46].interfaceType ==
                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                ppMVar48 = &(&(cmb->klass->vtable).GetCube)
                            [cmb->klass->interfaceOffsets[uVar46].offset].method;
                goto code_?;
              }
              uVar46 = uVar46 + 1;
            } while (uVar46 < uVar47);
          }
          ppMVar48 = (MethodInfo **)func_?();
code_?:
          cube = (Cube *)(*(code *)*ppMVar48)();
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar44 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                             ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
          uVar49 = IStack_1._0_4_;
          if (bVar44 != 0) {
            uStack_28 = (MethodInfo *)CONCAT22(IStack_1.z,(undefined2)uStack_28);
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            uVar50 = IStack_1._0_4_;
            voxelPos.z = uStack_28._2_2_;
            IStack_1.x = (int16_t)uVar49;
            IStack_1.y = SUB42(uVar49,2);
            voxelPos.x = IStack_1.x;
            voxelPos.y = IStack_1.y;
            localBoundsHitPoint.y = (float)pMVar24;
            localBoundsHitPoint.x = (float)pMVar21;
            localBoundsHitPoint.z = VStack_4.z;
            IStack_1._0_4_ = uVar50;
            bVar44 = MVRaycast_GetHitPoint
                               (ray,cube,vHit,voxelPos,localBoundsHitPoint,scale,distance,
                                (MethodInfo *)0x0);
            if (bVar44 != 0) {
              uStack_11._0_4_ = (vHit->point).x;
              uStack_11._4_4_ = (vHit->point).y;
              fStack_12 = (vHit->point).z;
              if (0.0 < ray.m_Direction.y * ((float)uStack_11._4_4_ - fVar6) +
                        ray.m_Direction.x * ((float)uStack_11 - ray.m_Origin.x) +
                        ray.m_Direction.z * (fStack_12 - fVar7)) {
                direction.z._2_2_ = (short)((uint)(vHit->normal).z >> 0x10);
                direction._0_10_ = *(unkbyte10 *)&vHit->normal;
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_TransformDirection
                                    (&VStack_4,pTStack_2,direction,(MethodInfo *)0x0);
                fVar6 = pVVar3->y;
                fVar7 = pVVar3->z;
                (vHit->normal).x = pVVar3->x;
                (vHit->normal).y = fVar6;
                (vHit->normal).z = fVar7;
                (vHit->cubePos).x = IStack_1.x;
                (vHit->cubePos).y = IStack_1.y;
                (vHit->cubePos).z = IStack_1.z;
                vHit->cube = cube;
                func_?();
                return 1;
              }
            }
          }
          if (((float)pMStack_39 <= (float)pMStack_40) || ((float)pMStack_41 <= (float)pMStack_40))
          {
            if ((float)pMStack_39 < (float)pMStack_41) {
              IStack_1.y = IStack_1.y + (short)pMStack_14;
              if (IStack_1.y < IStack_30.y) {
                return 0;
              }
              if (IStack_31.y < IStack_1.y) {
                return 0;
              }
              pMStack_39 = (MethodInfo *)((float)pMStack_16 + (float)pMStack_39);
            }
            else {
              IStack_1.z = IStack_1.z + (short)iStack_38;
              if (IStack_1.z < IStack_30.z) {
                return 0;
              }
              if (IStack_31.z < IStack_1.z) {
                return 0;
              }
              pMStack_41 = (MethodInfo *)((float)pMStack_41 + (float)pMStack_26);
            }
          }
          else {
            sStack_51 = (short)iVar36;
            IStack_1.x = IStack_1.x + sStack_51;
            if (IStack_1.x < IStack_30.x) {
              return 0;
            }
            if (IStack_31.x < IStack_1.x) {
              return 0;
            }
            pMStack_40 = (MethodInfo *)((float)pMStack_40 + (float)pMStack_27);
          }
        }
      }
    }
  }
  func_?();
  pcVar52 = (code *)swi(3);
  bVar44 = (*pcVar52)();
  return bVar44;
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
  puStack_4 = &stack0xffffff14;
  puVar5 = &stack0xffffff14;
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
      corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                          ((CubeBase *)cube,(MethodInfo *)0x0);
      VStack_12.z = 0.0;
      uVar13 = 0;
      VStack_12.x = 0.0;
      VStack_12.y = 0.0;
      if (corners != (Vector3__Array *)0x0) {
        pVVar14 = corners->vector;
        for (; handle = TypeRef__MV__WorldObject__FaceFlags, (int)uVar13 < (int)corners->max_length;
            uVar13 = uVar13 + 1) {
          if (corners->max_length <= uVar13) {
            func_?();
            goto code_?;
          }
          uStack_15._0_4_ = pVVar14->x;
          uStack_15._4_4_ = pVVar14->y;
          piStack_16 = (int *)pVVar14->z;
          VStack_17.z = (float)(int)voxelPos.z + (float)piStack_16;
          pVVar14->x = (float)(int)voxelPos.x + (float)(undefined4)uStack_15;
          pVVar14->y = (float)(int)voxelPos.y + (float)uStack_15._4_4_;
          pVVar14->z = VStack_17.z;
          pVVar14 = pVVar14 + 1;
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
          uStack_15 = ZEXT48(&pIStack_7) << 0x20;
          piStack_16 = &iStack_8;
          uStack_1 = 1;
          do {
            do {
              pIVar18 = pIStack_7;
              pIStack_19 = pIStack_7;
              if (pIStack_7 == (IEnumerator *)0x0) goto code_?;
              pIVar20 = pIStack_7->klass;
              uVar21 = 0;
              uVar22._0_1_ = (pIVar20->_1).rank;
              uVar22._1_1_ = (pIVar20->_1).minimumAlignment;
              fStack_23 = (float)(uint)uVar22;
              if (uVar22 != 0) {
                do {
                  if (pIVar20->interfaceOffsets[uVar21].interfaceType ==
                      (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                    ppMVar24 = &(&(pIStack_7->klass->vtable).MoveNext)
                                [pIStack_7->klass->interfaceOffsets[uVar21].offset].method;
                    goto code_?;
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < uVar22);
              }
              ppMVar24 = (MethodInfo **)
                         func_?(pIStack_7,TypeInfo__System__Collections__IEnumerator,0);
code_?:
              cVar25 = (*(code *)*ppMVar24)(pIVar18,ppMVar24[1]);
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
            pIStack_19 = (IEnumerator *)
                         MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                                   (FStack_28,(MethodInfo *)0x0);
            FVar29 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                               (FStack_28,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Cube);
            }
            pVVar30 = Cube::Cube_GetFace_1(corners,FVar29,(MethodInfo *)0x0);
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
            fStack_23 = (float)uVar33;
            if (pVVar30 == (Vector3__Array *)0x0) goto code_?;
            func_?(&uStack_41,0);
            func_?(&uStack_42,3);
            func_?(&stack0xffffff50,2);
            p2.y = fVar38;
            p2.x = fVar39;
            p1.y = fStack_23;
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
                                &VStack_12,&vHit->normal,(MethodInfo *)0x0);
            if (bVar11 != 0) break;
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            pMVar31 = TypeInfo__MVRaycast->static_fields;
            uVar47 = (pMVar31->intersectRay).m_Origin.x;
            uVar48 = (pMVar31->intersectRay).m_Origin.y;
            fVar34 = (pMVar31->intersectRay).m_Origin.z;
            uStack_49._0_4_ = (pMVar31->intersectRay).m_Origin.x;
            uStack_49._4_4_ = (pMVar31->intersectRay).m_Origin.y;
            pMVar31 = TypeInfo__MVRaycast->static_fields;
            uVar50 = (pMVar31->intersectRay).m_Direction.x;
            uVar51 = (pMVar31->intersectRay).m_Direction.y;
            fStack_52 = (pMVar31->intersectRay).m_Direction.z * _UNK_? + fVar34;
            uStack_53 = CONCAT44((float)uVar51 * _UNK_? + (float)uStack_49._4_4_,
                                 (float)uVar50 * _UNK_? + (float)(undefined4)uStack_49);
            fStack_54 = fVar34;
            fStack_40 = (float)uVar47;
            fStack_23 = (float)uVar48;
            func_?(&VStack_17,2);
            func_?(&stack0xffffff20,1);
            func_?(&uStack_55,0);
            pb_00.y = (float)in_stack_56;
            pb_00.x = (float)in_stack_57;
            p1_00.y = fStack_23;
            p1_00.x = fStack_40;
            p1_00.z = fVar34;
            p2_00.z = fStack_52;
            p2_00.x = (float)(undefined4)uStack_53;
            p2_00.y = (float)uStack_53._4_4_;
            pa_00.z = VStack_17.z;
            pa_00.x = VStack_17.x;
            pa_00.y = VStack_17.y;
            pb_00.z = fStack_58;
            pc_00.z = fStack_59;
            pc_00.x = (float)(undefined4)uStack_55;
            pc_00.y = (float)uStack_55._4_4_;
            bVar11 = MathFunctions::MathFunctions_LineFacetCollision
                               (p1_00,p2_00,pa_00,pb_00,pc_00,
                                (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction,
                                &VStack_12,&vHit->normal,(MethodInfo *)0x0);
          } while (bVar11 == 0);
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          pMVar31 = TypeInfo__MVRaycast->static_fields;
          uStack_53._0_4_ = (pMVar31->intersectRay).m_Origin.x;
          uStack_53._4_4_ = (pMVar31->intersectRay).m_Origin.y;
          fStack_52 = (pMVar31->intersectRay).m_Origin.z;
          fStack_40 = (float)uStack_53._4_4_ - VStack_12.y;
          fStack_60 = (float)(undefined4)uStack_53 - VStack_12.x;
          fStack_23 = fStack_52 - VStack_12.z;
          VStack_17.z = fStack_23;
          fVar61 = (float10)func_?(&fStack_60,0);
          fVar34 = (float)fVar61;
          if (scaledDistance < fVar34) {
            cube._3_1_ = 0;
          }
          else {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            uVar62 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
            uVar63 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
            pMVar31 = TypeInfo__MVRaycast->static_fields;
            fStack_40 = (float)uVar63 * fVar34 * scale.y;
            fStack_60 = (float)uVar62 * fVar34 * scale.x;
            VStack_17.x = (pMVar31->intersectRay).m_Direction.x;
            VStack_17.y = (pMVar31->intersectRay).m_Direction.y;
            fStack_23 = (pMVar31->intersectRay).m_Direction.z * fVar34 * scale.z;
            VStack_17.z = fStack_23;
            fVar61 = (float10)func_?(&fStack_60,0);
            fVar34 = (float)fVar61;
            vHit->distance = fVar34;
            VStack_17.z = fVar34 * ray.m_Direction.z + ray.m_Origin.z;
            (vHit->point).x = fVar34 * ray.m_Direction.x + ray.m_Origin.x;
            (vHit->point).y = fVar34 * ray.m_Direction.y + ray.m_Origin.y;
            (vHit->point).z = VStack_17.z;
            vHit->face = (int32_t)pIStack_19;
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
    VStack_17.z = (float)(int)voxelPos.z;
    (pMVar31->cubeBounds).m_Center.x = (float)(int)voxelPos.x;
    (pMVar31->cubeBounds).m_Center.y = (float)(int)voxelPos.y;
    (pMVar31->cubeBounds).m_Center.z = VStack_17.z;
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                       (&TypeInfo__MVRaycast->static_fields->cubeBounds,
                        (TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin,
                        (MethodInfo *)0x0);
    if (bVar11 == 0) {
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar31 = TypeInfo__MVRaycast->static_fields;
      uVar64 = (pMVar31->cubeBounds).m_Extents.z;
      uVar65 = (pMVar31->cubeBounds).m_Center.x;
      uVar66 = (pMVar31->cubeBounds).m_Center.y;
      uVar67 = (pMVar31->cubeBounds).m_Center.z;
      bounds.m_Center.z = (float)uVar67;
      bounds.m_Center.y = (float)uVar66;
      bounds.m_Center.x = (float)uVar65;
      uVar68 = (pMVar31->cubeBounds).m_Extents.x;
      uVar69 = (pMVar31->cubeBounds).m_Extents.y;
      bounds.m_Extents.y = (float)uVar69;
      bounds.m_Extents.x = (float)uVar68;
      uVar70 = (pMVar31->intersectRay).m_Direction.z;
      uVar71 = (pMVar31->intersectRay).m_Origin.x;
      uVar72 = (pMVar31->intersectRay).m_Origin.y;
      uVar73 = (pMVar31->intersectRay).m_Origin.z;
      ray_00.m_Origin.z = (float)uVar73;
      ray_00.m_Origin.y = (float)uVar72;
      ray_00.m_Origin.x = (float)uVar71;
      uVar74 = (pMVar31->intersectRay).m_Direction.x;
      uVar75 = (pMVar31->intersectRay).m_Direction.y;
      ray_00.m_Direction.y = (float)uVar75;
      ray_00.m_Direction.x = (float)uVar74;
      ray_00.m_Direction.z = (float)uVar70;
      bounds.m_Extents.z = (float)uVar64;
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_IntersectRayAABB
                         (ray_00,bounds,&fStack_6,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar31 = TypeInfo__MVRaycast->static_fields;
        uStack_49._0_4_ = (pMVar31->intersectRay).m_Origin.x;
        uStack_49._4_4_ = (pMVar31->intersectRay).m_Origin.y;
        fStack_54 = (pMVar31->intersectRay).m_Origin.z;
        pMVar31 = TypeInfo__MVRaycast->static_fields;
        uVar76 = (pMVar31->intersectRay).m_Direction.x;
        uVar77 = (pMVar31->intersectRay).m_Direction.y;
        pMVar78 = TypeInfo__MVRaycast->static_fields;
        uVar79 = (pMVar78->cubeBounds).m_Center.x;
        uVar80 = (pMVar78->cubeBounds).m_Center.y;
        fStack_52 = (fStack_6 * (pMVar31->intersectRay).m_Direction.z + fStack_54) -
                    (pMVar78->cubeBounds).m_Center.z;
        uStack_53 = CONCAT44((fStack_6 * (float)uVar77 + (float)uStack_49._4_4_) - (float)uVar80,
                             (fStack_6 * (float)uVar76 + (float)(undefined4)uStack_49) -
                             (float)uVar79);
        if (fStack_6 <= scaledDistance) {
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          localDir.z = fStack_52;
          localDir.x = (float)(undefined4)uStack_53;
          localDir.y = (float)uStack_53._4_4_;
          FVar29 = Cube::Cube_GetFaceIdentityFromLocalDir(localDir,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          FVar81 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceToFaceFlag
                             (FVar29,(MethodInfo *)0x0);
          if (((cube->fields).hiddenSides & (byte)FVar81) == 0) {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            uVar82 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
            uVar83 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
            pMVar31 = TypeInfo__MVRaycast->static_fields;
            fStack_60 = (float)uVar82 * fStack_6 * scale.x;
            fStack_40 = (float)uVar83 * fStack_6 * scale.y;
            VStack_17.x = (pMVar31->intersectRay).m_Direction.x;
            VStack_17.y = (pMVar31->intersectRay).m_Direction.y;
            fStack_23 = (pMVar31->intersectRay).m_Direction.z * fStack_6 * scale.z;
            VStack_17.z = fStack_23;
            fVar61 = (float10)func_?();
            fVar34 = (float)fVar61;
            vHit->distance = fVar34;
            VStack_17.z = fVar34 * ray.m_Direction.z + ray.m_Origin.z;
            (vHit->point).x = fVar34 * ray.m_Direction.x + ray.m_Origin.x;
            (vHit->point).y = fVar34 * ray.m_Direction.y + ray.m_Origin.y;
            (vHit->point).z = VStack_17.z;
            vHit->face = FVar29;
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar14 = Cube::Cube_GetFaceAxis(&VStack_17,FVar29,(MethodInfo *)0x0);
            fVar39 = pVVar14->y;
            fVar34 = pVVar14->z;
            (vHit->normal).x = pVVar14->x;
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
  index = indexOfFirstHit;
  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
    while( true ) {
      while( true ) {
        do {
          index = index + 1;
          if ((collisionData->fields).length <= index) {
            return;
          }
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                           );
            cRam_? = '\x01';
          }
          this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (collisionData->fields).physicsCollisionDatas;
          if ((this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
             (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this,index,
                                 MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                                ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
          unaff_EBX = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                (*(Transform **)((int)RVar3 + 0x14),(MethodInfo *)0x0);
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            BStack_4.m_Center.y = (float)TypeInfo__SharedCollisionFunctions;
            BStack_4.m_Center.x = (float)&UNK_?;
            func_?();
          }
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
            cRam_? = '\x01';
          }
        } while ((unaff_EBX == (MVWorldObjectClient *)0x0) ||
                ((ignoreWoIds != (HashSet_1_System_Int32_ *)0x0 &&
                 (bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                          Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                    ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,
                                     (unaff_EBX->fields)._.id,
                                     MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                    ), bVar5 != 0))));
        iVar6 = func_?(unaff_EBX,TypeInfo__ICubeModelCollider);
        if (iVar6 != 0) break;
        pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           (collisionData,index,(MethodInfo *)0x0);
        if (pPVar7 == (PhysicsCollisionData *)0x0) goto code_?;
        if ((pPVar7->fields).isInsideCollider == 0) {
          uStack_8._0_4_ = (voxelHit->point).x;
          uStack_8._4_4_ = (voxelHit->point).y;
          fStack_9 = (voxelHit->point).z;
          fVar10 = ray.m_Origin.x - (float)(undefined4)uStack_8;
          fVar11 = ray.m_Origin.y - (float)uStack_8._4_4_;
          fVar12 = ray.m_Origin.z - fStack_9;
          pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,index,(MethodInfo *)0x0);
          if (pPVar7 == (PhysicsCollisionData *)0x0) goto code_?;
          uStack_13._0_4_ = (pPVar7->fields).point.x;
          uStack_13._4_4_ = (pPVar7->fields).point.y;
          fStack_14 = (pPVar7->fields).point.z;
          if ((ray.m_Origin.x - (float)(undefined4)uStack_13) *
              (ray.m_Origin.x - (float)(undefined4)uStack_13) +
              (ray.m_Origin.y - (float)uStack_13._4_4_) * (ray.m_Origin.y - (float)uStack_13._4_4_)
              + (ray.m_Origin.z - fStack_14) * (ray.m_Origin.z - fStack_14) <
              fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12) {
            pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                               (collisionData,index,(MethodInfo *)0x0);
            woId = (unaff_EBX->fields)._.id;
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SharedCollisionFunctions);
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,pPVar7,woId,(MethodInfo *)0x0);
            return;
          }
        }
      }
      uStack_15._0_4_ = (voxelHit->point).x;
      uStack_15._4_4_ = (voxelHit->point).y;
      fStack_16 = (voxelHit->point).z;
      fVar10 = ray.m_Origin.x - (float)(undefined4)uStack_15;
      fVar11 = ray.m_Origin.y - (float)uStack_15._4_4_;
      fVar12 = ray.m_Origin.z - fStack_16;
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,index,(MethodInfo *)0x0);
      if (pPVar7 == (PhysicsCollisionData *)0x0) break;
      uStack_17._0_4_ = (pPVar7->fields).point.x;
      uStack_17._4_4_ = (pPVar7->fields).point.y;
      fStack_18 = (pPVar7->fields).point.z;
      if (fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12 <
          (ray.m_Origin.x - (float)(undefined4)uStack_17) *
          (ray.m_Origin.x - (float)(undefined4)uStack_17) +
          (ray.m_Origin.y - (float)uStack_17._4_4_) * (ray.m_Origin.y - (float)uStack_17._4_4_) +
          (ray.m_Origin.z - fStack_18) * (ray.m_Origin.z - fStack_18)) {
        return;
      }
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if ((pPVar7 == (PhysicsCollisionData *)0x0) ||
         (this_00 = (pPVar7->fields).collider, this_00 == (Collider *)0x0)) break;
      pBVar19 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                         (&BStack_4,this_00,(MethodInfo *)0x0);
      BStack_1.m_Center.x = (pBVar19->m_Center).x;
      BStack_1.m_Center.y = (pBVar19->m_Center).y;
      BStack_1.m_Center.z = (pBVar19->m_Center).z;
      BStack_1.m_Extents.x = (pBVar19->m_Extents).x;
      BStack_1.m_Extents.y = (pBVar19->m_Extents).y;
      BStack_1.m_Extents.z = (pBVar19->m_Extents).z;
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,index,(MethodInfo *)0x0);
      if (pPVar7 == (PhysicsCollisionData *)0x0) break;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                        (&BStack_1,(pPVar7->fields).point,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      BStack_4.m_Center.y = 1.00893e-43;
      BStack_4.m_Center.x = 0.0;
      func_?(&VStack_2);
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,index,(MethodInfo *)0x0);
      if ((pPVar7 == (PhysicsCollisionData *)0x0) ||
         (this_01 = (pPVar7->fields).transform, this_01 == (Transform *)0x0)) break;
      pIStack_20 = (ICubeModelCollider__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0);
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,index,(MethodInfo *)0x0);
      if (pPVar7 == (PhysicsCollisionData *)0x0) break;
      uStack_21._0_4_ = (pPVar7->fields).point.x;
      uStack_21._4_4_ = (pPVar7->fields).point.y;
      fStack_22 = (pPVar7->fields).point.z;
      puVar23 = (undefined8 *)func_?(auStack_24,8,unaff_EBX);
      uStack_25 = *puVar23;
      fVar11 = *(float *)(puVar23 + 1);
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVRaycast);
      }
      pIStack_26 = TypeInfo__ICubeModelCollider;
      pIVar27 = (ICubeModelCollider *)func_?(unaff_EBX,TypeInfo__ICubeModelCollider);
      if (pIVar27 == (ICubeModelCollider *)0x0) goto code_?;
      hitPoint.z = fStack_22;
      hitPoint.x = (float)(undefined4)uStack_21;
      hitPoint.y = (float)uStack_21._4_4_;
      scale.z = fVar11;
      scale.x = (float)(undefined4)uStack_25;
      scale.y = (float)uStack_25._4_4_;
      bVar5 = MVRaycast_GetCellOnRay
                        (ray,&VStack_2,(GameObject *)pIStack_20,pIVar27,hitPoint,distance,scale,
                         (MethodInfo *)0x0);
      if (bVar5 != 0) {
        uStack_28._0_4_ = (voxelHit->point).x;
        uStack_28._4_4_ = (voxelHit->point).y;
        fStack_29 = (voxelHit->point).z;
        if ((ray.m_Origin.x - VStack_2.point.x) * (ray.m_Origin.x - VStack_2.point.x) +
            (ray.m_Origin.y - VStack_2.point.y) * (ray.m_Origin.y - VStack_2.point.y) +
            (ray.m_Origin.z - VStack_2.point.z) * (ray.m_Origin.z - VStack_2.point.z) <
            (ray.m_Origin.x - (float)(undefined4)uStack_28) *
            (ray.m_Origin.x - (float)(undefined4)uStack_28) +
            (ray.m_Origin.y - (float)uStack_28._4_4_) * (ray.m_Origin.y - (float)uStack_28._4_4_) +
            (ray.m_Origin.z - fStack_29) * (ray.m_Origin.z - fStack_29)) {
          pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,index,(MethodInfo *)0x0);
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          pIStack_20 = TypeInfo__ICubeModelCollider;
          pIVar27 = (ICubeModelCollider *)func_?(unaff_EBX,TypeInfo__ICubeModelCollider);
          if (pIVar27 == (ICubeModelCollider *)0x0) goto code_?;
          MVRaycast_SetFoundHitVariables(&VStack_2,pPVar7,pIVar27,(MethodInfo *)0x0);
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SharedCollisionFunctions);
          }
          SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
                    (voxelHit,&VStack_2,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX,pIStack_20);
code_?:
  func_?(unaff_EBX,pIStack_26);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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
  pMVar1 = wo;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  iVar2 = func_?(wo,TypeInfo__ICubeModelCollider);
  pMVar3 = wo;
  if (collisionData == (PhysicsCollisionDatasWrapper *)0x0) {
code_?:
    wo = pMVar3;
    func_?();
  }
  else {
    if (iVar2 == 0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (collisionData->fields).physicsCollisionDatas;
      if ((pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar4,i,
                             MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                            ), RVar5 != (RegexCharClass_SingleRange)0x0)) {
        if (*(char *)((int)RVar5 + 0x18) != '\0') {
          return 0;
        }
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (collisionData->fields).physicsCollisionDatas;
        if ((pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
           (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar4,i,
                               MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                              ), wo != (MVWorldObjectClient *)0x0)) {
          woId = (wo->fields)._.id;
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SharedCollisionFunctions);
          }
          SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                    (voxelHit,(PhysicsCollisionData *)RVar5,woId,(MethodInfo *)0x0);
          return 1;
        }
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (collisionData->fields).physicsCollisionDatas;
    if (((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
        (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar4,i,
                            MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                           ), RVar5 == (RegexCharClass_SingleRange)0x0)) ||
       (*(Component **)((int)RVar5 + 0x14) == (Component *)0x0)) goto code_?;
    chunk = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (*(Component **)((int)RVar5 + 0x14),(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (collisionData->fields).physicsCollisionDatas;
    if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar4,i,
                           MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                          ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    uVar6 = *(undefined8 *)((int)RVar5 + 8);
    pMVar3 = *(MVWorldObjectClient **)((int)RVar5 + 0x10);
    if (wo == (MVWorldObjectClient *)0x0) goto code_?;
    pVVar7 = (Vector3 *)
             (*(code *)(wo->klass->vtable).get_Scale.method)
                       (&stack0xffffffd8,wo,(wo->klass->vtable).set_Scale.methodPtr);
    scale = *pVVar7;
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRaycast);
    }
    pIStack_8 = TypeInfo__ICubeModelCollider;
    pIVar9 = (ICubeModelCollider *)func_?(wo,TypeInfo__ICubeModelCollider);
    if (pIVar9 == (ICubeModelCollider *)0x0) goto code_?;
    hitPoint.z = (float)pMVar3;
    uStack_10 = (undefined4)((ulonglong)uVar6 >> 0x20);
    hitPoint.x = (float)uVar11;
    hitPoint.y = (float)uStack_10;
    bVar12 = MVRaycast_GetCellOnRay
                      (ray,voxelHit,chunk,pIVar9,hitPoint,distance,scale,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (collisionData->fields).physicsCollisionDatas;
    if (pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar4,i,
                       MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                      );
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRaycast);
    }
    wo = (MVWorldObjectClient *)TypeInfo__ICubeModelCollider;
    pIVar9 = (ICubeModelCollider *)func_?(pMVar1,TypeInfo__ICubeModelCollider);
    if (pIVar9 != (ICubeModelCollider *)0x0) {
      MVRaycast_SetFoundHitVariables
                (voxelHit,(PhysicsCollisionData *)RVar5,pIVar9,(MethodInfo *)0x0);
      if (handleObjectsInsideBoxCollider == 0) {
        return 1;
      }
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVRaycast_HandleObjectsInsideBoxCollider
                (ray,i,collisionData,voxelHit,ignoreWoIds,distance,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?(pMVar1,wo);
code_?:
  func_?(pMVar1,pIStack_8);
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
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
    fStack_4 = (float)(undefined4)uStack_2 * _UNK_? *
               (float)(undefined4)uStack_2 * _UNK_? +
               (float)uStack_2._4_4_ * _UNK_? * (float)uStack_2._4_4_ * _UNK_? +
               fStack_3 * _UNK_? * fStack_3 * _UNK_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_2._0_4_ = (pVVar1->oneVector).x;
    uStack_2._4_4_ = (pVVar1->oneVector).y;
    fStack_3 = (pVVar1->oneVector).z;
    fStack_5 = (float)(undefined4)uStack_2 * _UNK_? *
               (float)(undefined4)uStack_2 * _UNK_? +
               (float)uStack_2._4_4_ * _UNK_? * (float)uStack_2._4_4_ * _UNK_? +
               fStack_3 * _UNK_? * fStack_3 * _UNK_?;
    pVVar6 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalIntVectorToLocalPos(&VStack_7,voxelPos,(MethodInfo *)0x0);
    uVar8 = pVVar6->x;
    uVar9 = pVVar6->y;
    fVar10 = pVVar6->z - localOrigin.z;
    return ((float)uVar8 - localOrigin.x) * ((float)uVar8 - localOrigin.x) +
           ((float)uVar9 - localOrigin.y) * ((float)uVar9 - localOrigin.y) + fVar10 * fVar10 <=
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
  puStack_4 = &stack0xffffff0c;
  puVar5 = &stack0xffffff0c;
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
  func_?(auStack_9,0,0x2c);
  func_?(voxelHit,0,0x48);
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  pLVar10 = TypeInfo__MVRaycast->static_fields->sortedHits;
  this_02 = unaff_ESI;
  if (pLVar10 != (List_1_UnityEngine_RaycastHit_ *)0x0) {
    piVar11 = &(pLVar10->fields)._version;
    *piVar11 = *piVar11 + 1;
    (pLVar10->fields)._size = 0;
    iVar12 = func_?(wo,TypeInfo__ICubeModelCollider);
    this_02 = TypeInfo__ICubeModelCollider;
    if (iVar12 == 0) {
      this_02 = unaff_ESI;
      if (wo != (MVWorldObjectClient *)0x0) {
        this_02 = (ICubeModelCollider__Class *)(wo->fields).collider;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar13 != 0) {
          pTVar14 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
          pSVar15 = StringLiteral_No_collider_on_wo_of_type_;
          if (pTVar14 == (Type *)0x0) {
            str1 = (String *)0x0;
          }
          else {
            str1 = (String *)
                   (*(code *)(pTVar14->klass->vtable).ToString.method)
                             (pTVar14,(pTVar14->klass->vtable).GetCustomAttributes.methodPtr);
          }
          pSVar15 = mscorlib.dll::System::String::String_Concat_3(pSVar15,str1,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar15,(MethodInfo *)0x0);
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
        this = (wo->fields).collider;
        if (this != (Collider *)0x0) {
          method_00 = (MethodInfo *)auStack_9;
          bVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                            (this,ray,(RaycastHit *)method_00,distance,(MethodInfo *)0x0);
          if (bVar13 == 0) goto code_?;
          this_01 = (PhysicsCollisionData *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)this_01,ExceptionArgument__Enum_obj,method_00);
          this_02 = (ICubeModelCollider__Class *)0x0;
          if (this_01 != (PhysicsCollisionData *)0x0) {
            hit.m_Point.y = (float)auStack_9._4_4_;
            hit.m_Point.x = (float)auStack_9._0_4_;
            hit.m_Point.z = (float)auStack_9._8_4_;
            hit.m_Normal.x = (float)auStack_9._12_4_;
            hit.m_Normal.y = (float)auStack_9._16_4_;
            hit.m_Normal.z = (float)auStack_9._20_4_;
            hit.m_FaceID = auStack_9._24_4_;
            hit.m_Distance = (float)auStack_9._28_4_;
            hit.m_UV.x = (float)SUB84(auStack_9._32_8_,0).genericMethod;
            hit.m_UV.y = (float)SUB84(auStack_9._32_8_,4);
            hit.m_Collider = auStack_9._40_4_;
            PhysicsCollisionData::PhysicsCollisionData_Set(this_01,hit,(MethodInfo *)0x0);
            woId = (wo->fields)._.id;
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,this_01,woId,(MethodInfo *)0x0);
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
        }
      }
    }
    else if (wo != (MVWorldObjectClient *)0x0) {
      iVar12 = func_?(wo,TypeInfo__ICubeModelCollider);
      pIVar16 = TypeInfo__ICubeModelCollider;
      if (iVar12 == 0) {
        func_?(wo,this_02);
      }
      else {
        puVar17 = (uint *)func_?(wo,TypeInfo__ICubeModelCollider);
        puStack_18 = puVar17;
        if (puVar17 == (uint *)0x0) goto code_?;
        uStack_19 = *puVar17;
        uVar20 = 0;
        uVar21 = *(ushort *)(uStack_19 + 0xb6);
        uStack_22 = (uint)uVar21;
        if (uVar21 != 0) {
          do {
            if (*(ICubeModelCollider__Class **)(*(int *)(uStack_19 + 0x58) + (uint)uVar20 * 8) ==
                TypeInfo__ICubeModelCollider) {
              puVar23 = (undefined4 *)
                        (*puVar17 +
                        (*(int *)(*(int *)(*puVar17 + 0x58) + 4 + (uint)uVar20 * 8) + 0x1c) * 8);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar21);
        }
        puVar23 = (undefined4 *)func_?(puVar17,TypeInfo__ICubeModelCollider,4);
code_?:
        this_02 = (ICubeModelCollider__Class *)(*(code *)*puVar23)(puVar17,puVar23[1]);
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVRaycast);
        }
        pLVar24 = TypeInfo__MVRaycast->static_fields->colliderList;
        if (pLVar24 != (List_1_UnityEngine_Collider_ *)0x0) {
          iVar12 = (pLVar24->fields)._size;
          piVar11 = &(pLVar24->fields)._version;
          *piVar11 = *piVar11 + 1;
          (pLVar24->fields)._size = 0;
          if (0 < iVar12) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar24->fields)._items,0,iVar12,(MethodInfo *)0x0);
          }
          if (this_02 != (ICubeModelCollider__Class *)0x0) {
            puStack_25 = (uint *)func_?(0,TypeInfo__System__Collections__IEnumerable,
                                                 this_02);
            piStack_26 = &iStack_7;
            ppuStack_27 = &puStack_25;
            uStack_28 = 0;
            uStack_1 = 1;
            fStack_29 = ray.m_Origin.x;
            fStack_30 = ray.m_Origin.y;
            fStack_31 = ray.m_Origin.z;
            fStack_32 = ray.m_Direction.x;
            while (puStack_25 != (uint *)0x0) {
              cVar33 = func_?(0,TypeInfo__System__Collections__IEnumerator,puStack_25);
              puVar17 = puStack_25;
              pIVar16 = (ICubeModelCollider__Class *)TypeInfo__System__Collections__IEnumerator;
              if (cVar33 == '\0') {
                uStack_1 = 0xffffffff;
                iStack_7 = func_?(puStack_25,TypeInfo__System__IDisposable);
                if (iStack_7 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iStack_7);
                }
                uStack_1 = 0xffffffff;
                if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MVRaycast);
                }
                this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)TypeInfo__MVRaycast->static_fields->colliderList;
                if (this_00 !=
                    (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) {
                  overlapResult =
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                       Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                       List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                 (this_00,
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
                    origin.y = fStack_30;
                    origin.x = fStack_29;
                    origin.z = ray.m_Origin.z;
                    collisionData =
                         SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData
                                   ((Collider__Array *)overlapResult,hits,origin,(MethodInfo *)0x0);
                    this_02 = (ICubeModelCollider__Class *)0x0;
                    if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
                  }
                }
                break;
              }
              puStack_34 = puStack_25;
              if (puStack_25 == (uint *)0x0) break;
              uStack_22 = *puStack_25;
              uVar20 = 0;
              puStack_18 = (uint *)0x0;
              uVar21 = *(ushort *)(uStack_22 + 0xb6);
              uStack_19 = (uint)uVar21;
              if (uVar21 != 0) {
                do {
                  if (*(IEnumerator__Class **)(*(int *)(uStack_22 + 0x58) + (uint)uVar20 * 8) ==
                      TypeInfo__System__Collections__IEnumerator) {
                    puVar23 = (undefined4 *)
                              (*puStack_25 +
                              (*(int *)(*(int *)(*puStack_25 + 0x58) + 4 + (uint)uVar20 * 8) + 0x19)
                              * 8);
                    goto code_?;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar21);
              }
              puVar23 = (undefined4 *)
                        func_?(puStack_25,TypeInfo__System__Collections__IEnumerator,1);
code_?:
              piVar35 = (int *)(*(code *)*puVar23)(puVar17,puVar23[1]);
              uVar36 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                ,piVar35);
              this_02 = pIVar16;
              if (piVar35 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar35 + 0x20) !=
                  (
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                  ->_0).element_class) goto code_?;
              iVar12 = func_?(piVar35);
              this_02 = *(ICubeModelCollider__Class **)(iVar12 + 0x1c);
              if (this_02 == (ICubeModelCollider__Class *)0x0) break;
              bVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                                ((Collider *)this_02,ray,&RStack_6,distance,(MethodInfo *)0x0);
              if (bVar13 == 0) {
                pBVar37 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                    ((Bounds *)&puStack_38,(Collider *)this_02,(MethodInfo *)0x0);
                BStack_8.m_Center.x = (pBVar37->m_Center).x;
                BStack_8.m_Center.y = (pBVar37->m_Center).y;
                BStack_8.m_Center.z = (pBVar37->m_Center).z;
                BStack_8.m_Extents.x = (pBVar37->m_Extents).x;
                BStack_8.m_Extents.y = (pBVar37->m_Extents).y;
                BStack_8.m_Extents.z = (pBVar37->m_Extents).z;
                bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                                  (&BStack_8,ray.m_Origin,(MethodInfo *)0x0);
                if (bVar13 != 0) {
                  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pLVar24 = TypeInfo__MVRaycast->static_fields->colliderList;
                  if (pLVar24 == (List_1_UnityEngine_Collider_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pLVar24,(Object *)this_02,
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
  uVar36 = func_?();
  pIVar16 = this_02;
code_?:
  func_?(uVar36);
code_?:
  func_?(wo,pIVar16);
  pcVar39 = (code *)swi(3);
  bVar13 = (*pcVar39)();
  return bVar13;
code_?:
  if ((collisionData->fields).length <= (int)this_02) goto code_?;
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  ray_00.m_Origin.y = fStack_30;
  ray_00.m_Origin.x = fStack_29;
  ray_00.m_Origin.z = fStack_31;
  ray_00.m_Direction.x = fStack_32;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar13 = MVRaycast_HitDetectOnWo
                    (ray_00,(int32_t)this_02,wo,collisionData,0,voxelHit,
                     (HashSet_1_System_Int32_ *)0x0,distance,(MethodInfo *)0x0);
  if (bVar13 != 0) goto code_?;
  this_02 = (ICubeModelCollider__Class *)((int)&(this_02->_0).image + 1);
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
    if ((this->fields)._size != 0) {
      if ((this->fields)._size < 2) {
        pGVar1 = mscorlib.dll::System::Collections::Generic::
                  List`1[GameTierProgressBar+TierProgressData]::
                  List_1_GameTierProgressBar_TierProgressData__get_Item
                            ((GameTierProgressBar_TierProgressData *)&stack0xffffffb4,this,0,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                            );
        pTVar2 = pGVar1->progressText;
        pGVar3 = pGVar1->progressDivider;
        pGVar4 = pGVar1->progressBarTextBubble;
        pGVar5 = pGVar1->avatarHead;
        pRVar6 = pGVar1->avatarHeadImage;
        pGVar7 = pGVar1->avatarHeadUI;
        pPVar8 = pGVar1->disabledProgressBar;
        pGVar9 = pGVar1->disabledProgressDivider;
        pGVar10 = pGVar1->disabledBarTextBubble;
        pGVar11 = pGVar1->tierIconTempUnlock;
        pCVar12 = (Cube *)pGVar1->tierIconNumber;
        pPVar13 = pGVar1->endResultProgressBar;
        pCVar14 = (Collider *)pGVar1->tempProgress;
        pTVar15 = (Transform *)pGVar1->disabledTempProgress;
        pGVar16 = pGVar1->freeTryTextBubble;
        iVar17 = *(int64_t *)&pGVar1->hoverInputHandler;
        (voxelHit->point).x = (float)pGVar1->progressBar;
        (voxelHit->point).y = (float)pTVar2;
        (voxelHit->point).z = (float)pGVar3;
        (voxelHit->normal).x = (float)pGVar4;
        (voxelHit->normal).y = (float)pGVar5;
        (voxelHit->normal).z = (float)pRVar6;
        *(GameObject **)&voxelHit->cubePos = pGVar7;
        *(ProgressBar **)&(voxelHit->cubePos).z = pPVar8;
        voxelHit->face = (int32_t)pGVar9;
        *(GamePassesTextBubble **)&voxelHit->isCubeHit = pGVar10;
        voxelHit->woId = (int32_t)pGVar11;
        voxelHit->cube = pCVar12;
        voxelHit->distance = (float)pPVar13;
        voxelHit->collider = pCVar14;
        voxelHit->transform = pTVar15;
        *(GamePassesTextBubble **)&voxelHit->field_0x3c = pGVar16;
        voxelHit->interactionFlags = iVar17;
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
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* List`1[VoxelHit] MVHit(Ray, Boolean, Single, Int32, HashSet`1[System.Int32]) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit_2
          (Ray ray,bool all,float distance,int32_t layerMask,HashSet_1_System_Int32_ *ignoreWoIds,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Clear__);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(&VStack_1,0,0x48);
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  pLVar2 = TypeInfo__MVRaycast->static_fields->voxelHits;
  if (pLVar2 == (List_1_VoxelHit_ *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    pLVar2 = (List_1_VoxelHit_ *)(*pcVar3)();
    return pLVar2;
  }
  iVar4 = (pLVar2->fields)._size;
  piVar5 = &(pLVar2->fields)._version;
  *piVar5 = *piVar5 + 1;
  (pLVar2->fields)._size = 0;
  if (0 < iVar4) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pLVar2->fields)._items,0,iVar4,(MethodInfo *)0x0);
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
    pRVar6 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
    if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Physics);
    }
    hitAmount = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastNonAlloc_1
                          (ray,pRVar6,distance,layerMask,(MethodInfo *)0x0);
    iStack_7 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                          (ray.m_Origin,0.0,
                           TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                           layerMask,(MethodInfo *)0x0);
    pCStack_8 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    pRStack_9 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCollisionFunctions);
    }
    pRStack_9 = (RaycastHit__Array *)
                SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
                          (iStack_7,pCStack_8,hitAmount,pRStack_9,ray.m_Origin,(MethodInfo *)0x0);
    iVar4 = 0;
    if (pRStack_9 == (RaycastHit__Array *)0x0) goto code_?;
    for (; pRVar6 = pRStack_9,
        iVar4 < ((PhysicsCollisionDatasWrapper__Fields *)&pRStack_9->bounds)->length;
        iVar4 = iVar4 + 1) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                ((PhysicsCollisionDatasWrapper__Fields *)&pRVar6->bounds)->physicsCollisionDatas;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,iVar4,
                             MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                            ), RVar10 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                     (*(Transform **)((int)RVar10 + 0x14),(MethodInfo *)0x0);
      if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
        VStack_1.point.y = (float)TypeInfo__SharedCollisionFunctions;
        VStack_1.point.x = (float)&UNK_?;
        func_?();
      }
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        cRam_? = '\x01';
      }
      if ((wo != (MVWorldObjectClient *)0x0) &&
         ((ignoreWoIds == (HashSet_1_System_Int32_ *)0x0 ||
          (bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                   HashSet_1_System_Int32Enum__Contains
                             ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,(wo->fields)._.id,
                              MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_)
          , bVar11 == 0)))) {
        if (all != 0) {
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          this_01 = (HashSet_1_System_Int32Enum_ *)TypeInfo__MVRaycast->static_fields->foundWos;
          if (this_01 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
          bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                  HashSet_1_System_Int32Enum__Contains
                            (this_01,(wo->fields)._.id,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          if (bVar11 != 0) goto code_?;
        }
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVRaycast);
        }
        bVar11 = MVRaycast_HitDetectOnWo
                          (ray,iVar4,wo,(PhysicsCollisionDatasWrapper *)pRStack_9,all ^ 1,&VStack_1
                           ,ignoreWoIds,distance,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          pLVar2 = TypeInfo__MVRaycast->static_fields->voxelHits;
          if (pLVar2 == (List_1_VoxelHit_ *)0x0) goto code_?;
          func_?(pLVar2,VStack_1.point.x,VStack_1.point.y,VStack_1.point.z,
                          VStack_1.normal.x,VStack_1.normal.y,VStack_1.normal.z,
                          VStack_1.cubePos._0_4_,VStack_1._28_4_,VStack_1.face,VStack_1._36_4_,
                          VStack_1.woId,VStack_1.cube,VStack_1.distance,VStack_1.collider,
                          VStack_1.transform,VStack_1._60_4_,VStack_1.interactionFlags,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
          this_02 = TypeInfo__MVRaycast->static_fields->foundWos;
          if (this_02 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    (this_02,(wo->fields)._.id,
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
    uVar2 = 0;
    pIVar3 = cubeModelBase->klass;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          ppMVar5 = &(&(cubeModelBase->klass->vtable).get_GameObject)
                     [cubeModelBase->klass->interfaceOffsets[uVar2].offset].method;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
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
      pIVar3 = cubeModelBase->klass;
      uVar4 = 0;
      uVar2._0_1_ = (pIVar3->_1).rank;
      uVar2._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar2 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__ICubeModelCollider) {
            ppMVar5 = &(&(cubeModelBase->klass->vtable).get_Transform)
                       [cubeModelBase->klass->interfaceOffsets[uVar4].offset].method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      ppMVar5 = (MethodInfo **)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,2);
code_?:
      pTVar7 = (Transform *)(*(code *)*ppMVar5)(cubeModelBase,ppMVar5[1]);
      voxelHit->transform = pTVar7;
      func_?(&voxelHit->transform,pTVar7);
      iVar8 = func_?(3,TypeInfo__ICubeModelCollider,cubeModelBase);
      voxelHit->interactionFlags = iVar8;
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  fVar7 = (float)uVar5 * _UNK_?;
  fVar8 = (float)uVar6 * _UNK_?;
  fVar9 = (pVVar1->oneVector).z * _UNK_?;
  pMVar10 = TypeInfo__MVRaycast->static_fields;
  (pMVar10->cubeBounds).m_Center.x = (float)uVar2;
  (pMVar10->cubeBounds).m_Center.y = (float)uVar3;
  (pMVar10->cubeBounds).m_Center.z = fVar4;
  (pMVar10->cubeBounds).m_Extents.x = fVar7;
  (pMVar10->cubeBounds).m_Extents.y = fVar8;
  (pMVar10->cubeBounds).m_Extents.z = fVar9;
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

