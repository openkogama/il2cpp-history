
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
  uStack_1 = 0.0;
  iStack_2 = 0;
  if (chunk != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (chunk,(MethodInfo *)0x0);
    pTStack_3 = this;
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (this != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                Transform_InverseTransformDirection
                          (&VStack_5,this,ray.m_Direction,(MethodInfo *)0x0);
      pMVar6 = TypeInfo__MVRaycast->static_fields;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_5,*pVVar4,(MethodInfo *)0x0);
      fVar7 = pVVar4->y;
      fVar8 = pVVar4->z;
      (pMVar6->intersectRay).m_Direction.x = pVVar4->x;
      (pMVar6->intersectRay).m_Direction.y = fVar7;
      (pMVar6->intersectRay).m_Direction.z = fVar8;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                          (&VStack_5,pTStack_3,ray.m_Origin,(MethodInfo *)0x0);
      bVar9 = distance != (float)_UNK_?;
      fVar8 = pVVar4->z;
      fVar7 = pVVar4->y;
      pMVar6 = TypeInfo__MVRaycast->static_fields;
      (pMVar6->intersectRay).m_Origin.x = pVVar4->x;
      (pMVar6->intersectRay).m_Origin.y = fVar7;
      (pMVar6->intersectRay).m_Origin.z = fVar8;
      VStack_10.x = 0.0;
      VStack_10.y = 0.0;
      VStack_10.z = 0.0;
      if (bVar9) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uVar11 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
        uVar12 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
        VStack_10.y = (float)uVar12 * distance;
        VStack_10.x = (float)uVar11 * distance;
        pMVar6 = TypeInfo__MVRaycast->static_fields;
        uStack_13._0_4_ = (pMVar6->intersectRay).m_Direction.x;
        uStack_13._4_4_ = (pMVar6->intersectRay).m_Direction.y;
        fStack_14 = (pMVar6->intersectRay).m_Direction.z;
        VStack_10.z = fStack_14 * distance;
        pVVar4 = MathFunctions::MathFunctions_DivideVector
                            (&VStack_5,&VStack_10,&scale,(MethodInfo *)0x0);
        VStack_15.x = pVVar4->x;
        VStack_15.y = pVVar4->y;
        VStack_15.z = pVVar4->z;
        fVar16 = (float10)func_?();
        distance = (float)fVar16;
        pMStack_17 = (MethodInfo *)distance;
      }
      uStack_13 = CONCAT44(ray.m_Origin.y - hitPoint.y,ray.m_Origin.x - hitPoint.x);
      fStack_14 = ray.m_Origin.z - hitPoint.z;
      fVar16 = (float10)func_?();
      pMStack_17 = (MethodInfo *)(float)fVar16;
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar18 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
      uVar19 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
      VStack_10.y = (float)uVar19 * (float)pMStack_17;
      VStack_10.x = (float)uVar18 * (float)pMStack_17;
      pMVar6 = TypeInfo__MVRaycast->static_fields;
      uStack_13._0_4_ = (pMVar6->intersectRay).m_Direction.x;
      uStack_13._4_4_ = (pMVar6->intersectRay).m_Direction.y;
      fStack_14 = (pMVar6->intersectRay).m_Direction.z;
      VStack_10.z = fStack_14 * (float)pMStack_17;
      pVVar4 = MathFunctions::MathFunctions_DivideVector
                          (&VStack_5,&VStack_10,&scale,(MethodInfo *)0x0);
      VStack_15.x = pVVar4->x;
      VStack_15.y = pVVar4->y;
      VStack_15.z = pVVar4->z;
      fVar16 = (float10)func_?();
      pMStack_17 = (MethodInfo *)(float)fVar16;
      uVar20 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin.x;
      uVar21 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
      pMVar22 = (MethodInfo *)((float)uVar21 * (float)pMStack_17 + (float)uVar20);
      uVar23 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin.y;
      uVar24 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
      pMVar25 = (MethodInfo *)((float)uVar24 * (float)pMStack_17 + (float)uVar23);
      pMVar6 = TypeInfo__MVRaycast->static_fields;
      VStack_15.x = (pMVar6->intersectRay).m_Origin.x;
      VStack_15.y = (pMVar6->intersectRay).m_Origin.y;
      VStack_15.z = (pMVar6->intersectRay).m_Origin.z;
      pMVar6 = TypeInfo__MVRaycast->static_fields;
      uStack_13._0_4_ = (pMVar6->intersectRay).m_Direction.x;
      uStack_13._4_4_ = (pMVar6->intersectRay).m_Direction.y;
      fStack_14 = (pMVar6->intersectRay).m_Direction.z;
      VStack_5.z = fStack_14 * (float)pMStack_17 + VStack_15.z;
      localPos.y = (float)pMVar22;
      localPos.x = (float)aiStack_26;
      localPos.z = (float)pMVar25;
      pMStack_27 = pMVar22;
      pMStack_28 = pMVar25;
      uStack_29 = (MethodInfo *)VStack_5.z;
      IVar30 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos,(MethodInfo *)VStack_5.z);
      uStack_1 = *IVar30._0_4_;
      iStack_2 = *(int16_t *)(IVar30._0_4_ + 1);
      IStack_31.x = 0;
      IStack_31.y = 0;
      IStack_31.z = 0;
      IStack_32.x = 0;
      IStack_32.y = 0;
      IStack_32.z = 0;
      this_00 = (BoxCollider *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (chunk,
                           UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                          );
      if (this_00 != (BoxCollider *)0x0) {
        pVVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                            (&VStack_33,this_00,(MethodInfo *)0x0);
        uVar34 = pVVar4->x;
        uVar35 = pVVar4->y;
        localSpaceBounds.m_Center.y = (float)uVar35;
        localSpaceBounds.m_Center.x = (float)uVar34;
        fVar8 = pVVar4->z;
        pVVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                            (&VStack_33,this_00,(MethodInfo *)0x0);
        VStack_15.x = pVVar4->x;
        VStack_15.y = pVVar4->y;
        VStack_15.z = pVVar4->z;
        fVar36 = VStack_15.x * _UNK_?;
        fVar37 = VStack_15.y * _UNK_?;
        fVar7 = VStack_15.z * _UNK_?;
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        localSpaceBounds.m_Center.z = fVar8;
        localSpaceBounds.m_Extents.x = fVar36;
        localSpaceBounds.m_Extents.y = fVar37;
        localSpaceBounds.m_Extents.z = fVar7;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_31,&IStack_32,localSpaceBounds,(MethodInfo *)0x0);
        IVar30.z = IStack_31.z;
        IVar30.x = IStack_31.x;
        IVar30.y = IStack_31.y;
        max.z = IStack_32.z;
        max.x = IStack_32.x;
        max.y = IStack_32.y;
        MathFunctions::MathFunctions_ClampIntVector
                  ((IntVector *)&uStack_1,IVar30,max,(MethodInfo *)0x0);
        pMVar6 = TypeInfo__MVRaycast->static_fields;
        uStack_13._0_4_ = (pMVar6->intersectRay).m_Direction.x;
        uStack_13._4_4_ = (pMVar6->intersectRay).m_Direction.y;
        fStack_14 = (pMVar6->intersectRay).m_Direction.z;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        iVar38 = mscorlib.dll::System::Math::Math_Sign_2((float)uStack_13,(MethodInfo *)0x0);
        pMVar6 = TypeInfo__MVRaycast->static_fields;
        uStack_13._0_4_ = (pMVar6->intersectRay).m_Direction.x;
        uStack_13._4_4_ = (pMVar6->intersectRay).m_Direction.y;
        fStack_14 = (pMVar6->intersectRay).m_Direction.z;
        iStack_39 = iVar38;
        iVar40 = mscorlib.dll::System::Math::Math_Sign_2((float)uStack_13._4_4_,(MethodInfo *)0x0);
        pMVar6 = TypeInfo__MVRaycast->static_fields;
        uStack_13._0_4_ = (pMVar6->intersectRay).m_Direction.x;
        uStack_13._4_4_ = (pMVar6->intersectRay).m_Direction.y;
        fStack_14 = (pMVar6->intersectRay).m_Direction.z;
        aiStack_26[0] = iVar40;
        iStack_41 = mscorlib.dll::System::Math::Math_Sign_2(fStack_14,(MethodInfo *)0x0);
        pMStack_17 = (MethodInfo *)(uint)(0 < iVar38);
        pMStack_42 = (MethodInfo *)(float)(int)((uint)(0 < iVar40) + (int)uStack_1._2_2_);
        pMStack_43 = (MethodInfo *)(float)((int)pMStack_17 + (int)(short)uStack_1);
        pMStack_44 = (MethodInfo *)(float)(int)((uint)(0 < iStack_41) + (int)iStack_2);
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar6 = TypeInfo__MVRaycast->static_fields;
        uStack_13._0_4_ = (pMVar6->intersectRay).m_Direction.x;
        uStack_13._4_4_ = (pMVar6->intersectRay).m_Direction.y;
        fStack_14 = (pMVar6->intersectRay).m_Direction.z;
        pMVar6 = TypeInfo__MVRaycast->static_fields;
        VStack_15.x = (pMVar6->intersectRay).m_Direction.x;
        VStack_15.y = (pMVar6->intersectRay).m_Direction.y;
        VStack_15.z = (pMVar6->intersectRay).m_Direction.z;
        pMVar6 = TypeInfo__MVRaycast->static_fields;
        VStack_33.x = (pMVar6->intersectRay).m_Direction.x;
        VStack_33.y = (pMVar6->intersectRay).m_Direction.y;
        VStack_33.z = (pMVar6->intersectRay).m_Direction.z;
        pMStack_43 = (MethodInfo *)
                     ((((float)pMStack_43 - (float)pMStack_27) - _UNK_?) / (float)uStack_13);
        pMStack_42 = (MethodInfo *)
                     ((((float)pMStack_42 - (float)pMStack_28) - _UNK_?) / VStack_15.y);
        pMStack_17 = (MethodInfo *)
                     ((((float)pMStack_44 - (float)uStack_29) - _UNK_?) / VStack_33.z);
        if ((0x7f800000 < (uint)ABS((float)pMStack_43)) || ((float)pMStack_43 == _UNK_?)) {
          pMStack_43 = _UNK_?;
        }
        if ((0x7f800000 < (uint)ABS((float)pMStack_42)) || ((float)pMStack_42 == _UNK_?)) {
          pMStack_42 = _UNK_?;
        }
        if ((0x7f800000 < (uint)ABS((float)pMStack_17)) ||
           (pMStack_44 = pMStack_17, (float)pMStack_17 == _UNK_?)) {
          pMStack_44 = _UNK_?;
        }
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar6 = TypeInfo__MVRaycast->static_fields;
        VStack_33.x = (pMVar6->intersectRay).m_Direction.x;
        VStack_33.y = (pMVar6->intersectRay).m_Direction.y;
        uStack_13._0_4_ = (pMVar6->intersectRay).m_Direction.x;
        uStack_13._4_4_ = (pMVar6->intersectRay).m_Direction.y;
        fStack_14 = (pMVar6->intersectRay).m_Direction.z;
        pMVar6 = TypeInfo__MVRaycast->static_fields;
        VStack_15.x = (pMVar6->intersectRay).m_Direction.x;
        VStack_15.y = (pMVar6->intersectRay).m_Direction.y;
        pMStack_28 = (MethodInfo *)((float)iVar38 / VStack_33.x);
        VStack_15.z = (pMVar6->intersectRay).m_Direction.z;
        pMStack_17 = (MethodInfo *)((float)iVar40 / (float)uStack_13._4_4_);
        uStack_29 = (MethodInfo *)((float)iStack_41 / VStack_15.z);
        if (0x7f800000 < (uint)ABS((float)pMStack_28)) {
          pMStack_28 = _UNK_?;
        }
        if (0x7f800000 < (uint)ABS((float)pMStack_17)) {
          pMStack_17 = _UNK_?;
        }
        pMStack_27 = uStack_29;
        if (0x7f800000 < (uint)ABS((float)uStack_29)) {
          pMStack_27 = _UNK_?;
        }
        while( true ) {
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          voxelPos_00.z = iStack_2;
          voxelPos_00._0_4_ = uStack_1;
          bVar45 = MVRaycast_IsWithinDistance
                             (distance,(TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin,
                              voxelPos_00,(MethodInfo *)0x0);
          if (bVar45 == 0) {
            return 0;
          }
          fStack_46 = uStack_1;
          uStack_29 = (MethodInfo *)CONCAT22(iStack_2,(undefined2)uStack_29);
          if (cmb == (ICubeModelCollider *)0x0) break;
          pIVar47 = cmb->klass;
          uVar48 = 0;
          uVar49._0_1_ = (pIVar47->_1).rank;
          uVar49._1_1_ = (pIVar47->_1).minimumAlignment;
          if (uVar49 != 0) {
            do {
              if (pIVar47->interfaceOffsets[uVar48].interfaceType ==
                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                ppMVar50 = &(&(cmb->klass->vtable).GetCube)
                            [cmb->klass->interfaceOffsets[uVar48].offset].method;
                goto code_?;
              }
              uVar48 = uVar48 + 1;
            } while (uVar48 < uVar49);
          }
          ppMVar50 = (MethodInfo **)func_?();
code_?:
          cube = (Cube *)(*(code *)*ppMVar50)();
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar45 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                             ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
          fVar8 = uStack_1;
          if (bVar45 != 0) {
            uStack_29 = (MethodInfo *)CONCAT22(iStack_2,(undefined2)uStack_29);
            fStack_46 = scale.z;
            VStack_15.x = scale.x;
            VStack_15.y = scale.y;
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            voxelPos.z = uStack_29._2_2_;
            voxelPos._0_4_ = fVar8;
            localBoundsHitPoint.y = (float)pMVar25;
            localBoundsHitPoint.x = (float)pMVar22;
            localBoundsHitPoint.z = VStack_5.z;
            scale_00.z = fStack_46;
            scale_00.x = VStack_15.x;
            scale_00.y = VStack_15.y;
            bVar45 = MVRaycast_GetHitPoint
                               (ray,cube,vHit,voxelPos,localBoundsHitPoint,scale_00,distance,
                                (MethodInfo *)0x0);
            if (bVar45 != 0) {
              uStack_13._0_4_ = (vHit->point).x;
              uStack_13._4_4_ = (vHit->point).y;
              fStack_14 = (vHit->point).z;
              if (0.0 < ((float)uStack_13 - ray.m_Origin.x) * ray.m_Direction.x +
                        ((float)uStack_13._4_4_ - ray.m_Origin.y) * ray.m_Direction.y +
                        (fStack_14 - ray.m_Origin.z) * ray.m_Direction.z) {
                direction.z._2_2_ = (short)((uint)(vHit->normal).z >> 0x10);
                direction._0_10_ = *(unkbyte10 *)&vHit->normal;
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_TransformDirection
                                    (&VStack_5,pTStack_3,direction,(MethodInfo *)0x0);
                fVar7 = pVVar4->y;
                fVar8 = pVVar4->z;
                (vHit->normal).x = pVVar4->x;
                (vHit->normal).y = fVar7;
                (vHit->normal).z = fVar8;
                *(float *)&vHit->cubePos = uStack_1;
                (vHit->cubePos).z = iStack_2;
                vHit->cube = cube;
                func_?();
                return 1;
              }
            }
          }
          if (((float)pMStack_42 <= (float)pMStack_43) || ((float)pMStack_44 <= (float)pMStack_43))
          {
            if ((float)pMStack_42 < (float)pMStack_44) {
              uStack_1._2_2_ = uStack_1._2_2_ + (short)aiStack_26[0];
              if (uStack_1._2_2_ < IStack_31.y) {
                return 0;
              }
              if (IStack_32.y < uStack_1._2_2_) {
                return 0;
              }
              pMStack_42 = (MethodInfo *)((float)pMStack_17 + (float)pMStack_42);
            }
            else {
              iStack_2 = iStack_2 + (short)iStack_41;
              if (iStack_2 < IStack_31.z) {
                return 0;
              }
              if (IStack_32.z < iStack_2) {
                return 0;
              }
              pMStack_44 = (MethodInfo *)((float)pMStack_44 + (float)pMStack_27);
            }
          }
          else {
            uStack_1._0_2_ = (short)uStack_1 + (short)iStack_39;
            if ((short)uStack_1 < IStack_31.x) {
              return 0;
            }
            if (IStack_32.x < (short)uStack_1) {
              return 0;
            }
            pMStack_43 = (MethodInfo *)((float)pMStack_28 + (float)pMStack_43);
          }
        }
      }
    }
  }
  func_?();
  pcVar51 = (code *)swi(3);
  bVar45 = (*pcVar51)();
  return bVar45;
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
  puStack_4 = &stack0xfffffefc;
  puVar5 = &stack0xfffffefc;
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
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  iStack_9 = 0;
  if (cube == (Cube *)0x0) {
code_?:
    uVar10 = func_?();
code_?:
    func_?(uVar10);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  if ((cube->fields).hiddenSides != 0x3f) {
    if ((cube->fields)._.unIndentedSides != 0x3f) {
      corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                          ((CubeBase *)cube,(MethodInfo *)0x0);
      VStack_13.z = 0.0;
      uVar14 = 0;
      VStack_13.x = 0.0;
      VStack_13.y = 0.0;
      if (corners != (Vector3__Array *)0x0) {
        pVVar15 = corners->vector;
        for (; handle = TypeRef__MV__WorldObject__FaceFlags, (int)uVar14 < (int)corners->max_length;
            uVar14 = uVar14 + 1) {
          if (corners->max_length <= uVar14) {
            func_?();
            goto code_?;
          }
          uStack_16._0_4_ = pVVar15->x;
          uStack_16._4_4_ = pVVar15->y;
          piStack_17 = (int *)pVVar15->z;
          VStack_18.z = (float)piStack_17 + (float)(int)voxelPos.z;
          pVVar15->x = (float)(undefined4)uStack_16 + (float)(int)voxelPos.x;
          pVVar15->y = (float)uStack_16._4_4_ + (float)(int)voxelPos.y;
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
          piStack_17 = &iStack_9;
          uStack_1 = 1;
          do {
            do {
              pIVar19 = pIStack_7;
              pIStack_20 = pIStack_7;
              if (pIStack_7 == (IEnumerator *)0x0) goto code_?;
              pIVar21 = pIStack_7->klass;
              uVar22 = 0;
              uVar23._0_1_ = (pIVar21->_1).rank;
              uVar23._1_1_ = (pIVar21->_1).minimumAlignment;
              fStack_24 = (float)(uint)uVar23;
              if (uVar23 != 0) {
                do {
                  if (pIVar21->interfaceOffsets[uVar22].interfaceType ==
                      (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                    ppMVar25 = &(&(pIStack_7->klass->vtable).MoveNext)
                                [pIStack_7->klass->interfaceOffsets[uVar22].offset].method;
                    goto code_?;
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar23);
              }
              ppMVar25 = (MethodInfo **)
                         func_?(pIStack_7,TypeInfo__System__Collections__IEnumerator,0);
code_?:
              cVar26 = (*(code *)*ppMVar25)(pIVar19,ppMVar25[1]);
              if (cVar26 == '\0') {
                uStack_1 = 0xffffffff;
                iStack_9 = func_?(pIStack_7,TypeInfo__System__IDisposable);
                if (iStack_9 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iStack_9);
                }
                goto code_?;
              }
              if (pIStack_7 == (IEnumerator *)0x0) goto code_?;
              piVar27 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,
                                               pIStack_7);
              uVar10 = CONCAT44(TypeInfo__MV__WorldObject__FaceFlags,piVar27);
              if (piVar27 == (int *)0x0) goto code_?;
              if (*(Il2CppClass **)(*piVar27 + 0x20) !=
                  (TypeInfo__MV__WorldObject__FaceFlags->_0).element_class) goto code_?;
              pbVar28 = (byte *)func_?(piVar27);
              FStack_29 = CONCAT31(FStack_29._1_3_,*pbVar28);
            } while (((cube->fields).hiddenSides & *pbVar28) != 0);
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeBase);
            }
            pIStack_20 = (IEnumerator *)
                         MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                                   (FStack_29,(MethodInfo *)0x0);
            FVar30 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                               (FStack_29,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Cube);
            }
            pVVar31 = Cube::Cube_GetFace_1(corners,FVar30,(MethodInfo *)0x0);
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            pMVar32 = TypeInfo__MVRaycast->static_fields;
            uVar33 = (pMVar32->intersectRay).m_Origin.x;
            uVar34 = (pMVar32->intersectRay).m_Origin.y;
            fVar35 = (pMVar32->intersectRay).m_Origin.z;
            uVar36 = (pMVar32->intersectRay).m_Direction.x;
            uVar37 = (pMVar32->intersectRay).m_Direction.y;
            fVar38 = (pMVar32->intersectRay).m_Direction.z * _UNK_? + localBoundsHitPoint.z;
            fVar39 = (float)uVar37 * _UNK_? + localBoundsHitPoint.y;
            fVar40 = (float)uVar36 * _UNK_? + localBoundsHitPoint.x;
            fStack_41 = (float)uVar33;
            fStack_24 = (float)uVar34;
            if (pVVar31 == (Vector3__Array *)0x0) goto code_?;
            func_?(&uStack_42,0);
            func_?(&uStack_43,3);
            func_?(&stack0xffffff38,2);
            p2.y = fVar39;
            p2.x = fVar40;
            p1.y = fStack_24;
            p1.x = fStack_41;
            p1.z = fVar35;
            p2.z = fVar38;
            pa.z = fStack_44;
            pa.x = (float)(undefined4)uStack_42;
            pa.y = (float)uStack_42._4_4_;
            pb.z = (float)puStack_45;
            pb.x = (float)(undefined4)uStack_43;
            pb.y = (float)uStack_43._4_4_;
            pc.z = in_stack_46;
            pc.x = (float)(int)in_stack_47;
            pc.y = (float)(int)((ulonglong)in_stack_47 >> 0x20);
            bVar12 = MathFunctions::MathFunctions_LineFacetCollision
                               (p1,p2,pa,pb,pc,
                                (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction,
                                &VStack_13,&vHit->normal,(MethodInfo *)0x0);
            if (bVar12 != 0) break;
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            pMVar32 = TypeInfo__MVRaycast->static_fields;
            uVar48 = (pMVar32->intersectRay).m_Origin.x;
            uVar49 = (pMVar32->intersectRay).m_Origin.y;
            fVar35 = (pMVar32->intersectRay).m_Origin.z;
            uStack_50._0_4_ = (pMVar32->intersectRay).m_Origin.x;
            uStack_50._4_4_ = (pMVar32->intersectRay).m_Origin.y;
            pMVar32 = TypeInfo__MVRaycast->static_fields;
            uVar51 = (pMVar32->intersectRay).m_Direction.x;
            uVar52 = (pMVar32->intersectRay).m_Direction.y;
            fStack_53 = fVar35 + (pMVar32->intersectRay).m_Direction.z * _UNK_?;
            uStack_54 = CONCAT44((float)uStack_50._4_4_ + (float)uVar52 * _UNK_?,
                                 (float)(undefined4)uStack_50 + (float)uVar51 * _UNK_?);
            fStack_55 = fVar35;
            fStack_41 = (float)uVar48;
            fStack_24 = (float)uVar49;
            func_?(&VStack_18,2);
            func_?(&stack0xffffff08,1);
            func_?(&uStack_56,0);
            pb_00.y = (float)in_stack_57;
            pb_00.x = (float)in_stack_58;
            p1_00.y = fStack_24;
            p1_00.x = fStack_41;
            p1_00.z = fVar35;
            p2_00.z = fStack_53;
            p2_00.x = (float)(undefined4)uStack_54;
            p2_00.y = (float)uStack_54._4_4_;
            pa_00.z = VStack_18.z;
            pa_00.x = VStack_18.x;
            pa_00.y = VStack_18.y;
            pb_00.z = fStack_59;
            pc_00.z = fStack_60;
            pc_00.x = (float)(undefined4)uStack_56;
            pc_00.y = (float)uStack_56._4_4_;
            bVar12 = MathFunctions::MathFunctions_LineFacetCollision
                               (p1_00,p2_00,pa_00,pb_00,pc_00,
                                (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction,
                                &VStack_13,&vHit->normal,(MethodInfo *)0x0);
          } while (bVar12 == 0);
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          pMVar32 = TypeInfo__MVRaycast->static_fields;
          uStack_54._0_4_ = (pMVar32->intersectRay).m_Origin.x;
          uStack_54._4_4_ = (pMVar32->intersectRay).m_Origin.y;
          fStack_53 = (pMVar32->intersectRay).m_Origin.z;
          fStack_41 = (float)uStack_54._4_4_ - VStack_13.y;
          fStack_61 = (float)(undefined4)uStack_54 - VStack_13.x;
          fStack_24 = fStack_53 - VStack_13.z;
          VStack_18.z = fStack_24;
          fVar62 = (float10)func_?(&fStack_61,0);
          fVar35 = (float)fVar62;
          if (scaledDistance < fVar35) {
            cube._3_1_ = 0;
          }
          else {
            VStack_8.x = 0.0;
            VStack_8.y = 0.0;
            VStack_8.z = 0.0;
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            uVar63 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
            uVar64 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
            VStack_8.y = (float)uVar64 * fVar35;
            VStack_8.x = (float)uVar63 * fVar35;
            pMVar32 = TypeInfo__MVRaycast->static_fields;
            VStack_18.x = (pMVar32->intersectRay).m_Direction.x;
            VStack_18.y = (pMVar32->intersectRay).m_Direction.y;
            VStack_18.z = (pMVar32->intersectRay).m_Direction.z;
            VStack_8.z = VStack_18.z * fVar35;
            pVVar15 = MathFunctions::MathFunctions_MultiplyVector
                                (&VStack_18,&VStack_8,&scale,(MethodInfo *)0x0);
            uVar65 = pVVar15->x;
            uVar66 = pVVar15->y;
            fStack_24 = pVVar15->z;
            fStack_61 = (float)uVar65;
            fStack_41 = (float)uVar66;
            fVar62 = (float10)func_?();
            fVar35 = (float)fVar62;
            vHit->distance = fVar35;
            VStack_18.z = fVar35 * ray.m_Direction.z + ray.m_Origin.z;
            (vHit->point).x = fVar35 * ray.m_Direction.x + ray.m_Origin.x;
            (vHit->point).y = fVar35 * ray.m_Direction.y + ray.m_Origin.y;
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
    pMVar32 = TypeInfo__MVRaycast->static_fields;
    VStack_18.z = (float)(int)voxelPos.z;
    (pMVar32->cubeBounds).m_Center.x = (float)(int)voxelPos.x;
    (pMVar32->cubeBounds).m_Center.y = (float)(int)voxelPos.y;
    (pMVar32->cubeBounds).m_Center.z = VStack_18.z;
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                       (&TypeInfo__MVRaycast->static_fields->cubeBounds,
                        (TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin,
                        (MethodInfo *)0x0);
    if (bVar12 == 0) {
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar32 = TypeInfo__MVRaycast->static_fields;
      uVar67 = (pMVar32->cubeBounds).m_Extents.z;
      uVar68 = (pMVar32->cubeBounds).m_Center.x;
      uVar69 = (pMVar32->cubeBounds).m_Center.y;
      uVar70 = (pMVar32->cubeBounds).m_Center.z;
      bounds.m_Center.z = (float)uVar70;
      bounds.m_Center.y = (float)uVar69;
      bounds.m_Center.x = (float)uVar68;
      uVar71 = (pMVar32->cubeBounds).m_Extents.x;
      uVar72 = (pMVar32->cubeBounds).m_Extents.y;
      bounds.m_Extents.y = (float)uVar72;
      bounds.m_Extents.x = (float)uVar71;
      uVar73 = (pMVar32->intersectRay).m_Direction.z;
      uVar74 = (pMVar32->intersectRay).m_Origin.x;
      uVar75 = (pMVar32->intersectRay).m_Origin.y;
      uVar76 = (pMVar32->intersectRay).m_Origin.z;
      ray_00.m_Origin.z = (float)uVar76;
      ray_00.m_Origin.y = (float)uVar75;
      ray_00.m_Origin.x = (float)uVar74;
      uVar77 = (pMVar32->intersectRay).m_Direction.x;
      uVar78 = (pMVar32->intersectRay).m_Direction.y;
      ray_00.m_Direction.y = (float)uVar78;
      ray_00.m_Direction.x = (float)uVar77;
      ray_00.m_Direction.z = (float)uVar73;
      bounds.m_Extents.z = (float)uVar67;
      bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_IntersectRayAABB
                         (ray_00,bounds,&fStack_6,(MethodInfo *)0x0);
      if (bVar12 != 0) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar32 = TypeInfo__MVRaycast->static_fields;
        uStack_50._0_4_ = (pMVar32->intersectRay).m_Origin.x;
        uStack_50._4_4_ = (pMVar32->intersectRay).m_Origin.y;
        fStack_55 = (pMVar32->intersectRay).m_Origin.z;
        pMVar32 = TypeInfo__MVRaycast->static_fields;
        uVar79 = (pMVar32->intersectRay).m_Direction.x;
        uVar80 = (pMVar32->intersectRay).m_Direction.y;
        pMVar81 = TypeInfo__MVRaycast->static_fields;
        uVar82 = (pMVar81->cubeBounds).m_Center.x;
        uVar83 = (pMVar81->cubeBounds).m_Center.y;
        fStack_53 = (fStack_55 + (pMVar32->intersectRay).m_Direction.z * fStack_6) -
                    (pMVar81->cubeBounds).m_Center.z;
        uStack_54 = CONCAT44(((float)uStack_50._4_4_ + (float)uVar80 * fStack_6) - (float)uVar83,
                             ((float)(undefined4)uStack_50 + (float)uVar79 * fStack_6) -
                             (float)uVar82);
        if (fStack_6 <= scaledDistance) {
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          localDir.z = fStack_53;
          localDir.x = (float)(undefined4)uStack_54;
          localDir.y = (float)uStack_54._4_4_;
          FVar30 = Cube::Cube_GetFaceIdentityFromLocalDir(localDir,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          FVar84 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceToFaceFlag
                             (FVar30,(MethodInfo *)0x0);
          if (((cube->fields).hiddenSides & (byte)FVar84) == 0) {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pMVar32 = TypeInfo__MVRaycast->static_fields;
            VStack_18.x = (pMVar32->intersectRay).m_Direction.x;
            VStack_18.y = (pMVar32->intersectRay).m_Direction.y;
            VStack_18.z = (pMVar32->intersectRay).m_Direction.z;
            pVVar15 = MathFunctions::MathFunctions_MultiplyVector
                                (&VStack_18,(Vector3 *)&stack0xffffff6c,&scale,(MethodInfo *)0x0);
            uVar85 = pVVar15->x;
            uVar86 = pVVar15->y;
            fStack_24 = pVVar15->z;
            fStack_61 = (float)uVar85;
            fStack_41 = (float)uVar86;
            fVar62 = (float10)func_?();
            fVar35 = (float)fVar62;
            vHit->distance = fVar35;
            VStack_18.z = fVar35 * ray.m_Direction.z + ray.m_Origin.z;
            (vHit->point).x = fVar35 * ray.m_Direction.x + ray.m_Origin.x;
            (vHit->point).y = fVar35 * ray.m_Direction.y + ray.m_Origin.y;
            (vHit->point).z = VStack_18.z;
            vHit->face = FVar30;
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar15 = Cube::Cube_GetFaceAxis(&VStack_18,FVar30,(MethodInfo *)0x0);
            fVar40 = pVVar15->y;
            fVar35 = pVVar15->z;
            (vHit->normal).x = pVVar15->x;
            (vHit->normal).y = fVar40;
            (vHit->normal).z = fVar35;
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
                 (bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                          HashSet_1_System_UInt32__Contains
                                    ((HashSet_1_System_UInt32_ *)ignoreWoIds,
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
            auStack_9._44_4_ = ray.m_Origin.x;
            fStack_29 = ray.m_Origin.y;
            fStack_30 = ray.m_Origin.z;
            fStack_31 = ray.m_Direction.x;
            while (puStack_25 != (uint *)0x0) {
              cVar32 = func_?(0,TypeInfo__System__Collections__IEnumerator,puStack_25);
              puVar17 = puStack_25;
              pIVar16 = (ICubeModelCollider__Class *)TypeInfo__System__Collections__IEnumerator;
              if (cVar32 == '\0') {
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
                    collisionData =
                         SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData
                                   ((Collider__Array *)overlapResult,hits,ray.m_Origin,
                                    (MethodInfo *)0x0);
                    this_02 = (ICubeModelCollider__Class *)0x0;
                    if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
                  }
                }
                break;
              }
              puStack_33 = puStack_25;
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
              piVar34 = (int *)(*(code *)*puVar23)(puVar17,puVar23[1]);
              uVar35 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                ,piVar34);
              this_02 = pIVar16;
              if (piVar34 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar34 + 0x20) !=
                  (
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                  ->_0).element_class) goto code_?;
              iVar12 = func_?(piVar34);
              this_02 = *(ICubeModelCollider__Class **)(iVar12 + 0x1c);
              if (this_02 == (ICubeModelCollider__Class *)0x0) break;
              bVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                                ((Collider *)this_02,ray,&RStack_6,distance,(MethodInfo *)0x0);
              if (bVar13 == 0) {
                pBVar36 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                    ((Bounds *)&puStack_37,(Collider *)this_02,(MethodInfo *)0x0);
                BStack_8.m_Center.x = (pBVar36->m_Center).x;
                BStack_8.m_Center.y = (pBVar36->m_Center).y;
                BStack_8.m_Center.z = (pBVar36->m_Center).z;
                BStack_8.m_Extents.x = (pBVar36->m_Extents).x;
                BStack_8.m_Extents.y = (pBVar36->m_Extents).y;
                BStack_8.m_Extents.z = (pBVar36->m_Extents).z;
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
  uVar35 = func_?();
  pIVar16 = this_02;
code_?:
  func_?(uVar35);
code_?:
  func_?(wo,pIVar16);
  pcVar38 = (code *)swi(3);
  bVar13 = (*pcVar38)();
  return bVar13;
code_?:
  if ((collisionData->fields).length <= (int)this_02) goto code_?;
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  ray_00.m_Origin.y = fStack_29;
  ray_00.m_Origin.x = (float)auStack_9._44_4_;
  ray_00.m_Origin.z = fStack_30;
  ray_00.m_Direction.x = fStack_31;
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
          (bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                   HashSet_1_System_UInt32__Contains
                             ((HashSet_1_System_UInt32_ *)ignoreWoIds,(wo->fields)._.id,
                              MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_)
          , bVar11 == 0)))) {
        if (all != 0) {
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          this_01 = (HashSet_1_System_UInt32_ *)TypeInfo__MVRaycast->static_fields->foundWos;
          if (this_01 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
          bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                  HashSet_1_System_UInt32__Contains
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

