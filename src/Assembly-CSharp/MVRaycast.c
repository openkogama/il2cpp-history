
/* Boolean GetCellOnRay(Ray, VoxelHit ByRef, GameObject, ICubeModelCollider, Vector3, Single,
   Vector3) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_GetCellOnRay
               (Ray ray,VoxelHit *vHit,GameObject *chunk,ICubeModelCollider *cmb,Vector3 hitPoint,
               float distance,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  IStack_2.x = 0;
  IStack_2.y = 0;
  IStack_2.z = 0;
  IStack_3.x = 0;
  IStack_3.y = 0;
  IStack_3.z = 0;
  uVar4 = 0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  uStack_13 = 0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  if (chunk != (GameObject *)0x0) {
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (chunk,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                        (&VStack_19,(InputToPlayerMovementAndroid *)&ray,(MethodInfo *)0x0);
    if (pTVar17 != (Transform *)0x0) {
      VVar20.z._2_2_ = (short)((uint)pVVar18->z >> 0x10);
      VVar20._0_10_ = *(unkbyte10 *)pVVar18;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformDirection
                (&VStack_19,pTVar17,VVar20,(MethodInfo *)0x0);
      func_?();
      pVVar18 = (Vector3 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                (&VStack_19,pTVar17,*pVVar18,(MethodInfo *)0x0);
      func_?();
      if (distance != _UNK_?) {
        if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_19,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_21.x = pVVar18->x;
        VStack_21.y = pVVar18->y;
        VStack_21.z = pVVar18->z;
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_19,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_21.x = pVVar18->x;
        VStack_21.y = pVVar18->y;
        VStack_21.z = pVVar18->z;
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_19,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_21.x = pVVar18->x;
        VStack_21.y = pVVar18->y;
        VStack_21.z = pVVar18->z;
        MathFunctions::MathFunctions_DivideVector
                  (&VStack_19,(Vector3 *)&stack0xffffff78,&scale,(MethodInfo *)0x0);
        fVar22 = (float10)func_?();
        distance = (float)fVar22;
      }
      puVar23 = (undefined8 *)func_?();
      VStack_21._0_8_ = *puVar23;
      VStack_21.z = *(float *)(puVar23 + 1);
      puVar23 = (undefined8 *)func_?();
      VStack_21._0_8_ = *puVar23;
      VStack_21.z = *(float *)(puVar23 + 1);
      puVar23 = (undefined8 *)func_?();
      VStack_21._0_8_ = *puVar23;
      VStack_21.z = *(float *)(puVar23 + 1);
      func_?();
      if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          (&VStack_19,
                           (InputToPlayerMovementAndroid *)
                           &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      VStack_21.x = pVVar18->x;
      VStack_21.y = pVVar18->y;
      VStack_21.z = pVVar18->z;
      pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          (&VStack_19,
                           (InputToPlayerMovementAndroid *)
                           &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      VStack_21.x = pVVar18->x;
      VStack_21.y = pVVar18->y;
      VStack_21.z = pVVar18->z;
      pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          (&VStack_19,
                           (InputToPlayerMovementAndroid *)
                           &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      VStack_21.x = pVVar18->x;
      VStack_21.y = pVVar18->y;
      VStack_21.z = pVVar18->z;
      MathFunctions::MathFunctions_DivideVector
                (&VStack_19,(Vector3 *)&stack0xffffff78,&scale,(MethodInfo *)0x0);
      fVar22 = (float10)func_?();
      fVar24 = (float)fVar22;
      puVar23 = (undefined8 *)func_?();
      VStack_25._0_8_ = *puVar23;
      VStack_25.z = *(float *)(puVar23 + 1);
      pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          (&VStack_19,
                           (InputToPlayerMovementAndroid *)
                           &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      VStack_21.x = pVVar18->x;
      VStack_21.y = pVVar18->y;
      VStack_21.z = pVVar18->z;
      fVar26 = VStack_21.x * fVar24 + VStack_25.x;
      puVar23 = (undefined8 *)func_?();
      VStack_25._0_8_ = *puVar23;
      VStack_25.z = *(float *)(puVar23 + 1);
      pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          (&VStack_19,
                           (InputToPlayerMovementAndroid *)
                           &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      VStack_21.x = pVVar18->x;
      VStack_21.y = pVVar18->y;
      VStack_21.z = pVVar18->z;
      fVar27 = VStack_21.y * fVar24 + VStack_25.y;
      puVar23 = (undefined8 *)func_?();
      VStack_25._0_8_ = *puVar23;
      VStack_25.z = *(float *)(puVar23 + 1);
      pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          (&VStack_19,
                           (InputToPlayerMovementAndroid *)
                           &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      VStack_21.x = pVVar18->x;
      VStack_21.y = pVVar18->y;
      VStack_21.z = pVVar18->z;
      VStack_19.z = VStack_21.z * fVar24 + VStack_25.z;
      localPos.y = fVar26;
      localPos.x = (float)&stack0xffffff84;
      localPos.z = fVar27;
      IVar28 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos,(MethodInfo *)VStack_19.z);
      uVar29 = *IVar28._0_4_;
      IStack_1.x = (int16_t)uVar29;
      IStack_1.y = (int16_t)((uint)uVar29 >> 0x10);
      IStack_1.z = *(int16_t *)(IVar28._0_4_ + 1);
      this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (chunk,
                        UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                       );
      if (this != (UseInteractorHandler *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                  (&VStack_21,(BoxCollider *)this,(MethodInfo *)0x0);
        UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                  (&VStack_21,(BoxCollider *)this,(MethodInfo *)0x0);
        func_?();
        if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
          func_?();
        }
        localSpaceBounds.m_Center.y = fVar14;
        localSpaceBounds.m_Center.x = (float)uStack_13;
        localSpaceBounds.m_Center.z = fVar15;
        localSpaceBounds.m_Extents.x = fVar16;
        localSpaceBounds.m_Extents.y = (float)uVar4;
        localSpaceBounds.m_Extents.z = fVar5;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_2,&IStack_3,localSpaceBounds,(MethodInfo *)0x0);
        IVar28.z = IStack_2.z;
        IVar28.x = IStack_2.x;
        IVar28.y = IStack_2.y;
        max.z = IStack_3.z;
        max.x = IStack_3.x;
        max.y = IStack_3.y;
        MathFunctions::MathFunctions_ClampIntVector(&IStack_1,IVar28,max,(MethodInfo *)0x0);
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_25,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_21.x = pVVar18->x;
        VStack_21.y = pVVar18->y;
        VStack_21.z = pVVar18->z;
        mscorlib.dll::System::Math::Math_Sign(VStack_21.x,(MethodInfo *)0x0);
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_25,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_21.x = pVVar18->x;
        VStack_21.y = pVVar18->y;
        VStack_21.z = pVVar18->z;
        mscorlib.dll::System::Math::Math_Sign(VStack_21.y,(MethodInfo *)0x0);
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_25,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_21.x = pVVar18->x;
        VStack_21.y = pVVar18->y;
        VStack_21.z = pVVar18->z;
        fVar15 = (float)mscorlib.dll::System::Math::Math_Sign(VStack_21.z,(MethodInfo *)0x0);
        func_?();
        auStack_30._4_4_ = fVar6;
        if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_21,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        fVar16 = pVVar18->x;
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_21,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_25.x = pVVar18->x;
        VStack_25.y = pVVar18->y;
        VStack_25.z = pVVar18->z;
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffff24,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_21.x = pVVar18->x;
        VStack_21.y = pVVar18->y;
        VStack_21.z = pVVar18->z;
        fVar16 = (((float)auStack_30._4_4_ - fVar26) - _UNK_?) / fVar16;
        func_?();
        pCVar31 = (Cube *)&UNK_?;
        bVar32 = mscorlib.dll::System::Single::Single_IsNaN(fStack_7,(MethodInfo *)0x0);
        if ((bVar32 != 0) ||
           (bVar32 = mscorlib.dll::System::Single::Single_IsNegativeInfinity
                               (fStack_7,(MethodInfo *)0x0), bVar32 != 0)) {
          fStack_7 = INFINITY;
        }
        bVar32 = mscorlib.dll::System::Single::Single_IsNaN(fStack_8,(MethodInfo *)0x0);
        if ((bVar32 != 0) ||
           (bVar32 = mscorlib.dll::System::Single::Single_IsNegativeInfinity
                               (fStack_8,(MethodInfo *)0x0), bVar32 != 0)) {
          fStack_8 = INFINITY;
        }
        bVar32 = mscorlib.dll::System::Single::Single_IsNaN(fStack_9,(MethodInfo *)0x0);
        if ((bVar32 != 0) ||
           (bVar32 = mscorlib.dll::System::Single::Single_IsNegativeInfinity
                               (fStack_9,(MethodInfo *)0x0), bVar32 != 0)) {
          fStack_9 = INFINITY;
        }
        if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
          func_?();
        }
        InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                  ((Vector3 *)&stack0xffffff24,
                   (InputToPlayerMovementAndroid *)&TypeInfo__MVRaycast->static_fields->intersectRay
                   ,(MethodInfo *)0x0);
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffff24,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_25.x = pVVar18->x;
        VStack_25.y = pVVar18->y;
        VStack_25.z = pVVar18->z;
        pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffff24,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        VStack_21.x = pVVar18->x;
        VStack_21.y = pVVar18->y;
        VStack_21.z = pVVar18->z;
        puVar33 = &UNK_?;
        func_?();
        bVar32 = mscorlib.dll::System::Single::Single_IsNaN(0.0,(MethodInfo *)0x0);
        if (bVar32 != 0) {
          fStack_10 = INFINITY;
        }
        bVar32 = mscorlib.dll::System::Single::Single_IsNaN(0.0,(MethodInfo *)0x0);
        if (bVar32 != 0) {
          fStack_11 = INFINITY;
        }
        bVar32 = mscorlib.dll::System::Single::Single_IsNaN(0.0,(MethodInfo *)0x0);
        if (bVar32 != 0) {
          fStack_12 = INFINITY;
        }
        while( true ) {
          if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar18 = (Vector3 *)func_?();
          iVar34 = IStack_1.z;
          iVar35 = IStack_1.y;
          iVar36 = IStack_1.x;
          VVar20 = *pVVar18;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          VStack_25.x = 0.0;
          VStack_25.y = 0.0;
          VStack_21.x = 0.0;
          VStack_21.y = 0.0;
          VStack_25.z = 0.0;
          VStack_21.z = 0.0;
          if (distance != _UNK_?) {
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                ((Vector3 *)&stack0xfffffed8,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                      ((Vector3 *)&stack0xfffffecc,0.5,*pVVar18,(MethodInfo *)0x0);
            fVar22 = (float10)func_?();
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                ((Vector3 *)&stack0xfffffec0,(MethodInfo *)0x0);
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                                ((Vector3 *)&stack0xfffffeb4,0.5,*pVVar18,(MethodInfo *)0x0);
            VStack_25.x = pVVar18->x;
            VStack_25.y = pVVar18->y;
            VStack_25.z = pVVar18->z;
            fVar37 = (float10)func_?();
            auStack_30._4_4_ = (float)fVar37;
            localIntVector.y = iVar35;
            localIntVector.x = iVar36;
            localIntVector.z = iVar34;
            pVVar18 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                      CubeMathFunctions_LocalIntVectorToLocalPos
                                ((Vector3 *)&stack0xfffffea8,localIntVector,(MethodInfo *)0x0);
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)&stack0xfffffe9c,*pVVar18,VVar20,(MethodInfo *)0x0);
            VStack_21.x = pVVar18->x;
            VStack_21.y = pVVar18->y;
            VStack_21.z = pVVar18->z;
            fVar37 = (float10)func_?();
            if (distance * distance + (float)fVar22 + (float)auStack_30._4_4_ * distance <
                (float)fVar37) {
              return 0;
            }
          }
          auVar38 = auStack_30;
          auStack_30._6_2_ = IStack_1.y;
          auStack_30._4_2_ = IStack_1.x;
          auStack_30._0_4_ = auVar38._0_4_;
          if (cmb == (ICubeModelCollider *)0x0) break;
          pIVar39 = cmb->klass;
          uVar40 = 0;
          uVar41._0_1_ = (pIVar39->_1).rank;
          uVar41._1_1_ = (pIVar39->_1).minimumAlignment;
          if (uVar41 != 0) {
            do {
              if (pIVar39->interfaceOffsets[uVar40].interfaceType ==
                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                ppMVar42 = &(&(pIVar39->vtable).GetCube)[pIVar39->interfaceOffsets[uVar40].offset].
                            method;
                goto code_?;
              }
              uVar40 = uVar40 + 1;
            } while (uVar40 < uVar41);
          }
          ppMVar42 = (MethodInfo **)func_?(cmb);
code_?:
          cube = (Cube *)(*(code *)*ppMVar42)(cmb,auStack_30._4_4_);
          if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
            func_?();
          }
          sVar43 = 0;
          bVar32 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                             ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
          iVar36 = IStack_1.z;
          fVar6 = scale.z;
          uVar44 = ray.m_Direction._4_8_;
          fVar14 = ray.m_Direction.x;
          fVar5 = ray.m_Origin.z;
          if (bVar32 != 0) {
            voxelPos.y = IStack_1.y;
            voxelPos.x = IStack_1.x;
            auStack_30._0_4_ = scale.x;
            auStack_30._4_4_ = scale.y;
            fVar24 = ray.m_Origin.x;
            fVar26 = ray.m_Origin.y;
            fVar27 = fVar16;
            if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
              func_?();
              fVar27 = fVar16;
            }
            fVar16 = SUB84(uVar44,4);
            ray_00.m_Origin.y = fVar26;
            ray_00.m_Origin.x = fVar24;
            ray_00.m_Origin.z = fVar5;
            ray_00.m_Direction.x = fVar14;
            ray_00.m_Direction.y = (float)uVar44;
            ray_00.m_Direction.z = fVar16;
            voxelPos.z = iVar36;
            localBoundsHitPoint.y = (float)pCVar31;
            localBoundsHitPoint.x = fVar27;
            localBoundsHitPoint.z = VStack_19.z;
            scale_00.z = fVar6;
            scale_00.x = (float)auStack_30._0_4_;
            scale_00.y = (float)auStack_30._4_4_;
            pCVar31 = cube;
            bVar32 = MVRaycast_GetHitPoint
                               (ray_00,cube,vHit,voxelPos,localBoundsHitPoint,scale_00,distance,
                                (MethodInfo *)0x0);
            if (bVar32 != 0) {
              VVar20 = vHit->point;
              sVar43 = 0x546b;
              puVar23 = (undefined8 *)func_?();
              auStack_30 = (undefined1  [8])*puVar23;
              fVar15 = *(float *)(puVar23 + 1);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              b.z = fVar15;
              b.x = (float)auStack_30._0_4_;
              b.y = (float)auStack_30._4_4_;
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                  ((Vector3 *)&stack0xfffffe84,VVar20,b,(MethodInfo *)0x0);
              auStack_30._0_4_ = pVVar18->x;
              auStack_30._4_4_ = pVVar18->y;
              puVar33 = (undefined *)pVVar18->z;
              pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                  ((Vector3 *)&stack0xffffff10,(InputToPlayerMovementAndroid *)&ray,
                                   (MethodInfo *)0x0);
              pTVar17 = auStack_30._0_4_;
              fVar15 = auStack_30._4_4_;
              lhs.z = (float)puVar33;
              lhs.x = (float)auStack_30._0_4_;
              lhs.y = (float)auStack_30._4_4_;
              fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                                 (lhs,*pVVar18,(MethodInfo *)0x0);
              if (0.0 < fVar5) {
                pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_TransformDirection
                                    ((Vector3 *)&stack0xffffff10,pTVar17,vHit->normal,
                                     (MethodInfo *)0x0);
                fVar16 = pVVar18->y;
                fVar15 = pVVar18->z;
                (vHit->normal).x = pVVar18->x;
                (vHit->normal).y = fVar16;
                (vHit->normal).z = fVar15;
                (vHit->cubePos).x = IStack_1.x;
                (vHit->cubePos).y = IStack_1.y;
                (vHit->cubePos).z = IStack_1.z;
                vHit->cube = cube;
                return 1;
              }
            }
          }
          if ((fStack_8 <= fStack_7) || (fStack_9 <= fStack_7)) {
            if (fStack_8 < fStack_9) {
              IStack_1.y = IStack_1.y + sVar43;
              if (IStack_1.y < IStack_2.y) {
                return 0;
              }
              if (IStack_3.y < IStack_1.y) {
                return 0;
              }
              fStack_8 = fStack_11 + fStack_8;
            }
            else {
              IStack_1.z = IStack_1.z + SUB42(fVar15,0);
              if (IStack_1.z < IStack_2.z) {
                return 0;
              }
              if (IStack_3.z < IStack_1.z) {
                return 0;
              }
              fStack_9 = fStack_12 + fStack_9;
            }
          }
          else {
            IStack_1.x = IStack_1.x + (short)puVar33;
            if (IStack_1.x < IStack_2.x) {
              return 0;
            }
            if (IStack_3.x < IStack_1.x) {
              return 0;
            }
            fStack_7 = fStack_10 + fStack_7;
          }
        }
      }
    }
  }
  func_?();
  pcVar45 = (code *)swi(3);
  bVar32 = (*pcVar45)();
  return bVar32;
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
  puStack_4 = &stack0xfffffe94;
  puVar5 = &stack0xfffffe94;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  bStack_6 = 0;
  bStack_7 = 0;
  iVar8 = 0;
  puStack_9 = (undefined *)0x0;
  stack0xffffff50 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  VStack_13.x = 0.0;
  VStack_13.y = 0.0;
  VStack_13.z = 0.0;
  func_?();
  puStack_4 = &stack0xfffffe94;
  if (cube == (Cube *)0x0) goto code_?;
  puStack_4 = &stack0xfffffe94;
  bVar14 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
           ThemeAttribute_1_System_Boolean__get_Value
                     ((ThemeAttribute_1_System_Boolean_ *)cube,(MethodInfo *)0x0);
  if (bVar14 != 0x3f) {
    bVar14 = SubscribableVariableBase`1[System::Boolean]::
             SubscribableVariableBase_1_System_Boolean__get_Value
                       ((SubscribableVariableBase_1_System_Boolean_ *)cube,(MethodInfo *)0x0);
    if (bVar14 != 0x3f) {
      corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                          ((CubeBase *)cube,(MethodInfo *)0x0);
      func_?();
      uVar15 = 0;
      if (corners != (Vector3__Array *)0x0) {
        pVVar16 = corners->vector;
        for (; handle = TypeRef__MV__WorldObject__FaceFlags, (int)uVar15 < (int)corners->max_length;
            uVar15 = uVar15 + 1) {
          if (corners->max_length <= uVar15) {
            uVar17 = func_?();
            func_?(uVar17);
            goto code_?;
          }
          fVar18 = pVVar16->z;
          puStack_19 = (undefined *)pVVar16->x;
          unique0x0000a404 = pVVar16->y;
          FStack_20 = 0;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          uVar21 = _puStack_70;
          VVar22.z = fVar18;
          stack0xffffff94 = (float)((ulonglong)_puStack_70 >> 0x20);
          VVar22.x = (float)puStack_19;
          VVar22.y = stack0xffffff94;
          _puStack_70 = uVar21;
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              (&VStack_24,VVar22,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
          fVar25 = pVVar23->y;
          fVar18 = pVVar23->z;
          pVVar16->x = pVVar23->x;
          pVVar16->y = fVar25;
          pVVar16->z = fVar18;
          pVVar16 = pVVar16 + 1;
        }
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
          func_?();
        }
        this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
        if (this != (Array *)0x0) {
          pIVar26 = (IDisposable__Class *)
                    mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
          _puStack_70 = CONCAT44(pIVar26,puStack_19);
          uStack_1 = 0;
          do {
            do {
              if (pIVar26 == (IDisposable__Class *)0x0) goto code_?;
              cVar27 = func_?(1);
              if (cVar27 == '\0') goto code_?;
              func_?(0);
              pbVar28 = (byte *)func_?();
              bVar29 = *pbVar28;
              FStack_20 = CONCAT31(FStack_20._1_3_,bVar29);
              bVar14 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
                       ThemeAttribute_1_System_Boolean__get_Value
                                 ((ThemeAttribute_1_System_Boolean_ *)cube,(MethodInfo *)0x0);
            } while ((bVar29 & bVar14) != 0);
            if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
              func_?();
            }
            FVar30 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                               (FStack_20,(MethodInfo *)0x0);
            face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                             (FStack_20,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar31 = Cube::Cube_GetFace_1(corners,face,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
              func_?();
            }
            puVar32 = (undefined8 *)func_?();
            fVar18 = *(float *)(puVar32 + 1);
            VStack_24.y = (float)*puVar32;
            VStack_24.z = (float)((ulonglong)*puVar32 >> 0x20);
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                ((Vector3 *)&stack0xffffff00,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            VVar22 = *pVVar16;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)&puStack_33,VVar22,300.0,(MethodInfo *)0x0);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                (&VStack_34,localBoundsHitPoint,*pVVar16,(MethodInfo *)0x0);
            VVar22 = *pVVar16;
            if (pVVar31 == (Vector3__Array *)0x0) goto code_?;
            puVar32 = (undefined8 *)func_?(0);
            fVar25 = *(float *)(puVar32 + 1);
            uVar17 = (undefined4)*puVar32;
            uVar35 = (undefined4)((ulonglong)*puVar32 >> 0x20);
            puVar32 = (undefined8 *)func_?(3);
            fVar36 = *(float *)(puVar32 + 1);
            uVar37 = (undefined4)*puVar32;
            uVar38 = (undefined4)((ulonglong)*puVar32 >> 0x20);
            puVar32 = (undefined8 *)func_?(2);
            fVar39 = *(float *)(puVar32 + 1);
            uVar40 = (undefined4)*puVar32;
            uVar41 = (undefined4)((ulonglong)*puVar32 >> 0x20);
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                ((Vector3 *)&stack0xfffffedc,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            pc.y = (float)uVar41;
            pc.x = (float)uVar40;
            pb.y = (float)uVar38;
            pb.x = (float)uVar37;
            pa.y = (float)uVar35;
            pa.x = (float)uVar17;
            p1.y = VStack_24.z;
            p1.x = VStack_24.y;
            p1.z = fVar18;
            pa.z = fVar25;
            pb.z = fVar36;
            pc.z = fVar39;
            bVar14 = MathFunctions::MathFunctions_LineFacetCollision
                               (p1,VVar22,pa,pb,pc,*pVVar16,(Vector3 *)&stack0xffffff58,
                                &vHit->normal,(MethodInfo *)0x0);
            if (bVar14 != 0) break;
            if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
              func_?();
            }
            puVar32 = (undefined8 *)func_?(&stack0xfffffed0);
            fVar18 = *(float *)(puVar32 + 1);
            uVar17 = (undefined4)*puVar32;
            uVar35 = (undefined4)((ulonglong)*puVar32 >> 0x20);
            pVVar16 = (Vector3 *)func_?(&stack0xfffffec4);
            VVar22 = *pVVar16;
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                ((Vector3 *)&stack0xfffffeb8,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            uVar21._0_4_ = pVVar16->x;
            uVar21._4_4_ = pVVar16->y;
            fVar25 = pVVar16->z;
            VStack_24.y = (float)(undefined4)uVar21;
            VStack_24.z = (float)uVar21._4_4_;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
              uVar21 = CONCAT44(VStack_24.z,VStack_24.y);
            }
            a_01.z = fVar25;
            a_01.x = (float)(int)uVar21;
            a_01.y = (float)(int)((ulonglong)uVar21 >> 0x20);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)&stack0xfffffeac,a_01,300.0,(MethodInfo *)0x0);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xfffffea0,VVar22,*pVVar16,(MethodInfo *)0x0);
            uVar37 = pVVar16->x;
            uVar38 = pVVar16->y;
            fVar25 = pVVar16->z;
            puVar32 = (undefined8 *)func_?();
            fVar36 = *(float *)(puVar32 + 1);
            uVar40 = (undefined4)*puVar32;
            uVar41 = (undefined4)((ulonglong)*puVar32 >> 0x20);
            pVVar16 = (Vector3 *)func_?();
            VVar22 = *pVVar16;
            puVar32 = (undefined8 *)func_?();
            fVar39 = *(float *)(puVar32 + 1);
            VStack_24.y = (float)*puVar32;
            VStack_24.z = (float)((ulonglong)*puVar32 >> 0x20);
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                (&VStack_42,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            pc_00.y = VStack_24.z;
            pc_00.x = VStack_24.y;
            pa_00.y = (float)uVar41;
            pa_00.x = (float)uVar40;
            p2.y = (float)uVar38;
            p2.x = (float)uVar37;
            p1_00.y = (float)uVar35;
            p1_00.x = (float)uVar17;
            p1_00.z = fVar18;
            p2.z = fVar25;
            pa_00.z = fVar36;
            pc_00.z = fVar39;
            bVar14 = MathFunctions::MathFunctions_LineFacetCollision
                               (p1_00,p2,pa_00,VVar22,pc_00,*pVVar16,(Vector3 *)&stack0xffffff58,
                                &vHit->normal,(MethodInfo *)0x0);
          } while (bVar14 == 0);
          if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
            func_?();
          }
          puVar32 = (undefined8 *)func_?(&VStack_42);
          uVar21 = *puVar32;
          fVar18 = *(float *)(puVar32 + 1);
          VStack_24.y = (float)uVar21;
          VStack_24.z = (float)((ulonglong)uVar21 >> 0x20);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar21 = CONCAT44(VStack_24.z,VStack_24.y);
          }
          a_00.z = fVar18;
          a_00.x = (float)(int)uVar21;
          a_00.y = (float)(int)((ulonglong)uVar21 >> 0x20);
          b.y = fVar11;
          b.x = fVar10;
          b.z = fVar12;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    (&VStack_42,a_00,b,(MethodInfo *)0x0);
          fVar43 = (float10)func_?();
          fVar10 = (float)fVar43;
          if (scaledDistance < fVar10) {
            bStack_6 = 0;
          }
          else {
            VStack_13.x = 0.0;
            VStack_13.y = 0.0;
            VStack_13.z = 0.0;
            if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                (&VStack_42,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            uVar44 = pVVar16->x;
            uVar45 = pVVar16->y;
            VStack_24.z = pVVar16->z;
            VStack_13.x = (float)uVar44 * fVar10;
            VStack_24.x = (float)uVar44;
            VStack_24.y = (float)uVar45;
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                (&VStack_42,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            uVar46 = pVVar16->x;
            uVar47 = pVVar16->y;
            VStack_24.z = pVVar16->z;
            VStack_13.y = (float)uVar47 * fVar10;
            VStack_24.x = (float)uVar46;
            VStack_24.y = (float)uVar47;
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                (&VStack_42,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            uVar48 = pVVar16->x;
            uVar49 = pVVar16->y;
            VStack_24.z = pVVar16->z;
            VStack_13.z = VStack_24.z * fVar10;
            VStack_24.x = (float)uVar48;
            VStack_24.y = (float)uVar49;
            MathFunctions::MathFunctions_MultiplyVector
                      (&VStack_42,&VStack_13,&scale,(MethodInfo *)0x0);
            fVar43 = (float10)func_?();
            vHit->distance = (float)fVar43;
            pVVar16 = (Vector3 *)func_?();
            VVar22 = *pVVar16;
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                (&VStack_42,(InputToPlayerMovementAndroid *)&ray,(MethodInfo *)0x0);
            uVar50._0_4_ = pVVar16->x;
            uVar50._4_4_ = pVVar16->y;
            fVar11 = pVVar16->z;
            fVar10 = vHit->distance;
            VStack_24.y = (float)(undefined4)uVar50;
            VStack_24.z = (float)uVar50._4_4_;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
              uVar50 = CONCAT44(VStack_24.z,VStack_24.y);
            }
            a.z = fVar11;
            a.x = (float)(int)uVar50;
            a.y = (float)(int)((ulonglong)uVar50 >> 0x20);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                (&VStack_42,a,fVar10,(MethodInfo *)0x0);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                (&VStack_42,VVar22,*pVVar16,(MethodInfo *)0x0);
            bStack_6 = 1;
            fVar11 = pVVar16->y;
            fVar10 = pVVar16->z;
            (vHit->point).x = pVVar16->x;
            (vHit->point).y = fVar11;
            (vHit->point).z = fVar10;
            vHit->face = FVar30;
          }
code_?:
          uStack_1 = 0xffffffff;
          iVar51 = func_?();
          if (iVar51 != 0) {
            pIVar26 = TypeInfo__System__IDisposable;
            func_?(0);
          }
          if (iVar8 != 0) goto code_?;
          if (pIVar26 == (IDisposable__Class *)0x412) goto code_?;
          goto code_?;
        }
      }
code_?:
      iVar8 = func_?(0);
code_?:
      func_?(iVar8);
      pcVar52 = (code *)swi(3);
      bVar14 = (*pcVar52)();
      return bVar14;
    }
    if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
      func_?();
    }
    VStack_24.x = 0.0;
    VStack_24.y = 0.0;
    VStack_24.z = 0.0;
    func_?(&VStack_24);
    func_?(TypeInfo__MVRaycast->static_fields);
    func_?(&VStack_42,&TypeInfo__MVRaycast->static_fields->intersectRay,0);
    cVar27 = func_?(TypeInfo__MVRaycast->static_fields);
    if (cVar27 == '\0') {
      if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar53 = TypeInfo__MVRaycast->static_fields;
      cVar27 = func_?(pMVar53,(pMVar53->intersectRay).m_Origin.x,
                               (pMVar53->intersectRay).m_Origin.y,(pMVar53->intersectRay).m_Origin.z
                               ,(pMVar53->intersectRay).m_Direction.x);
      if (cVar27 != '\0') {
        if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar16 = (Vector3 *)func_?();
        VVar22 = *pVVar16;
        pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_42,
                             (InputToPlayerMovementAndroid *)
                             &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
        uVar54._0_4_ = pVVar16->x;
        uVar54._4_4_ = pVVar16->y;
        unique0x00017200 = pVVar16->z;
        VStack_24.y = (float)(undefined4)uVar54;
        VStack_24.z = (float)uVar54._4_4_;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          uVar54 = CONCAT44(VStack_24.z,VStack_24.y);
        }
        a_02.z = unique0x00017200;
        a_02.x = (float)(int)uVar54;
        a_02.y = (float)(int)((ulonglong)uVar54 >> 0x20);
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            (&VStack_42,a_02,0.0,(MethodInfo *)0x0);
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            (&VStack_42,VVar22,*pVVar16,(MethodInfo *)0x0);
        uVar55 = pVVar16->x;
        uVar56 = pVVar16->y;
        unique0x00017200 = pVVar16->z;
        VStack_24.y = (float)uVar55;
        VStack_24.z = (float)uVar56;
        pVVar16 = (Vector3 *)func_?();
        a_03.y = VStack_24.z;
        a_03.x = VStack_24.y;
        a_03.z = unique0x00017200;
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            (&VStack_42,a_03,*pVVar16,(MethodInfo *)0x0);
        if (0.0 <= scaledDistance) {
          uVar57._0_4_ = pVVar16->x;
          uVar57._4_4_ = pVVar16->y;
          unique0x00017200 = pVVar16->z;
          VStack_24.y = (float)(undefined4)uVar57;
          VStack_24.z = (float)uVar57._4_4_;
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?();
            uVar57 = CONCAT44(VStack_24.z,VStack_24.y);
          }
          localDir.z = unique0x00017200;
          localDir.x = (float)(int)uVar57;
          localDir.y = (float)(int)((ulonglong)uVar57 >> 0x20);
          FVar30 = Cube::Cube_GetFaceIdentityFromLocalDir(localDir,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
            func_?();
          }
          FVar58 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceToFaceFlag
                             (FVar30,(MethodInfo *)0x0);
          bStack_7 = (byte)FVar58;
          bVar14 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
                   ThemeAttribute_1_System_Boolean__get_Value
                             ((ThemeAttribute_1_System_Boolean_ *)cube,(MethodInfo *)0x0);
          if ((bStack_7 & bVar14) == 0) {
            if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                (&VStack_42,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            uVar59 = pVVar16->x;
            uVar60 = pVVar16->y;
            VStack_24.z = pVVar16->z;
            puStack_9 = (undefined *)((float)uVar59 * 0.0);
            VStack_24.x = (float)uVar59;
            VStack_24.y = (float)uVar60;
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                (&VStack_42,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            uVar61 = pVVar16->x;
            uVar62 = pVVar16->y;
            VStack_24.z = pVVar16->z;
            stack0xffffff50 = (float)uVar62 * 0.0;
            VStack_24.x = (float)uVar61;
            VStack_24.y = (float)uVar62;
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                (&VStack_42,
                                 (InputToPlayerMovementAndroid *)
                                 &TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0
                                );
            uVar63 = pVVar16->x;
            uVar64 = pVVar16->y;
            VStack_24.z = pVVar16->z;
            VStack_24.x = (float)uVar63;
            VStack_24.y = (float)uVar64;
            MathFunctions::MathFunctions_MultiplyVector
                      (&VStack_42,(Vector3 *)&puStack_9,&scale,(MethodInfo *)0x0);
            fVar43 = (float10)func_?();
            vHit->distance = (float)fVar43;
            puVar32 = (undefined8 *)func_?();
            uVar21 = *puVar32;
            _puStack_70 = CONCAT44(*(undefined4 *)(puVar32 + 1),puStack_19);
            stack0xffffff50 = (float)&VStack_42;
            pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                (&VStack_42,(InputToPlayerMovementAndroid *)&ray,(MethodInfo *)0x0);
            uVar65._0_4_ = pVVar16->x;
            uVar65._4_4_ = pVVar16->y;
            fVar11 = pVVar16->z;
            fVar10 = vHit->distance;
            VStack_24.y = (float)(undefined4)uVar65;
            VStack_24.z = (float)uVar65._4_4_;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
              uVar65 = CONCAT44(VStack_24.z,VStack_24.y);
            }
            stack0xffffff50 = (float)&VStack_42;
            a_04.z = fVar11;
            a_04.x = (float)(int)uVar65;
            a_04.y = (float)(int)((ulonglong)uVar65 >> 0x20);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                (&VStack_42,a_04,fVar10,(MethodInfo *)0x0);
            uVar50 = _puStack_70;
            stack0xffffff94 = (float)((ulonglong)_puStack_70 >> 0x20);
            a_05.z = stack0xffffff94;
            a_05._0_8_ = uVar21;
            _puStack_70 = uVar50;
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                (&VStack_42,a_05,*pVVar16,(MethodInfo *)0x0);
            fVar11 = pVVar16->y;
            fVar10 = pVVar16->z;
            (vHit->point).x = pVVar16->x;
            (vHit->point).y = fVar11;
            (vHit->point).z = fVar10;
            vHit->face = FVar30;
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
              func_?();
            }
            _puStack_70 = CONCAT44(&VStack_42,&UNK_?);
            pVVar16 = Cube::Cube_GetFaceAxis(&VStack_42,FVar30,(MethodInfo *)0x0);
            unique0x10001a04 = pVVar16->y;
            unique0x00017200 = pVVar16->z;
            (vHit->normal).x = pVVar16->x;
            (vHit->normal).y = unique0x10001a04;
            (vHit->normal).z = unique0x00017200;
            bStack_6 = 1;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  bStack_6 = 0;
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return bStack_6;
}


/* Void HandleObjectsInsideBoxCollider(Ray, Int32, PhysicsCollisionDatasWrapper, VoxelHit ByRef,
   HashSet`1[System.Int32], Single) */

void Assembly-CSharp.dll::MVRaycast::MVRaycast_HandleObjectsInsideBoxCollider
               (Ray ray,int32_t indexOfFirstHit,PhysicsCollisionDatasWrapper *collisionData,
               VoxelHit *voxelHit,HashSet_1_System_Int32_ *ignoreWoIds,float distance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  uStack_9 = 0;
  func_?(&VStack_10,0,0x48);
  uStack_11 = 0;
  fStack_12 = 0.0;
  uStack_13 = 0;
  fStack_14 = 0.0;
  uStack_15 = 0;
  fStack_16 = 0.0;
  uStack_17 = 0;
  fStack_18 = 0.0;
  key = indexOfFirstHit;
  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
    do {
      do {
        while( true ) {
          do {
            key = key + 1;
            pIVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)collisionData,(MethodInfo *)0x0);
            if ((int)pIVar19 <= key) {
              return;
            }
            pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                                (collisionData,key,(MethodInfo *)0x0);
            if (pPVar20 == (PhysicsCollisionData *)0x0) goto code_?;
            wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                           ((pPVar20->fields).transform,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
              apSStack_21[0] = TypeInfo__SharedCollisionFunctions;
              func_?();
            }
            bVar22 = SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
                              (wo,ignoreWoIds,(MethodInfo *)0x0);
          } while (bVar22 != 0);
          iVar23 = func_?(wo,TypeInfo__ICubeModelCollider);
          if (iVar23 == 0) break;
          puVar24 = (undefined8 *)func_?(auStack_25,&ray);
          uStack_26 = *puVar24;
          fStack_27 = *(float *)(puVar24 + 1);
          uStack_28._0_4_ = (voxelHit->point).x;
          uStack_28._4_4_ = (GameObject *)(voxelHit->point).y;
          fVar29 = (voxelHit->point).z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a.z = fStack_27;
          a.x = (float)(undefined4)uStack_26;
          a.y = (float)uStack_26._4_4_;
          b.z = fVar29;
          b.x = (float)(undefined4)uStack_28;
          b.y = (float)uStack_28._4_4_;
          pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              (&VStack_31,a,b,(MethodInfo *)0x0);
          uStack_2._0_4_ = pVVar30->x;
          uStack_2._4_4_ = pVVar30->y;
          fStack_1 = pVVar30->z;
          fVar32 = (float10)func_?(&uStack_2,0);
          fStack_27 = (float)fVar32;
          puVar24 = (undefined8 *)func_?(auStack_33,&ray,0);
          uStack_26 = *puVar24;
          fVar29 = *(float *)(puVar24 + 1);
          pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                              (collisionData,key,(MethodInfo *)0x0);
          if (pPVar20 == (PhysicsCollisionData *)0x0) goto code_?;
          a_03.z = fVar29;
          a_03.x = (float)(undefined4)uStack_26;
          a_03.y = (float)uStack_26._4_4_;
          pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)(auStack_34 + 0x24),a_03,(pPVar20->fields).point,
                               (MethodInfo *)0x0);
          uStack_3._0_4_ = pVVar30->x;
          uStack_3._4_4_ = pVVar30->y;
          fStack_4 = pVVar30->z;
          fVar32 = (float10)func_?(&uStack_3,0);
          if (fStack_27 < (float)fVar32) {
            return;
          }
          pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                              (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
          if ((pPVar20 == (PhysicsCollisionData *)0x0) ||
             (this = (pPVar20->fields).collider, this == (Collider *)0x0)) goto code_?;
          pBVar35 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                              (&BStack_36,this,(MethodInfo *)0x0);
          fStack_5 = (pBVar35->m_Center).x;
          fStack_6 = (pBVar35->m_Center).y;
          fStack_7 = (pBVar35->m_Center).z;
          fStack_8 = (pBVar35->m_Extents).x;
          uStack_9._0_4_ = (pBVar35->m_Extents).y;
          uStack_9._4_4_ = (pBVar35->m_Extents).z;
          pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                              (collisionData,key,(MethodInfo *)0x0);
          if (pPVar20 == (PhysicsCollisionData *)0x0) goto code_?;
          uVar37 = (pPVar20->fields).point.x;
          uVar38 = (pPVar20->fields).point.y;
          cVar39 = func_?(&fStack_5,uVar37,uVar38,(pPVar20->fields).point.z,0);
          if (cVar39 == '\0') {
            return;
          }
          func_?(&VStack_10,0,0x48);
          BStack_36.m_Center.z = ray.m_Origin.x;
          BStack_36.m_Extents.x = ray.m_Origin.y;
          BStack_36.m_Extents.y = ray.m_Origin.z;
          BStack_36.m_Extents.z = ray.m_Direction.x;
          fStack_40 = ray.m_Direction.y;
          fStack_41 = ray.m_Direction.z;
          pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                              (collisionData,key,(MethodInfo *)0x0);
          if ((pPVar20 == (PhysicsCollisionData *)0x0) ||
             (this_00 = (pPVar20->fields).transform, this_00 == (Transform *)0x0))
          goto code_?;
          pGVar42 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_00,(MethodInfo *)0x0);
          uStack_28 = CONCAT44(pGVar42,(undefined4)uStack_28);
          pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                              (collisionData,key,(MethodInfo *)0x0);
          if (pPVar20 == (PhysicsCollisionData *)0x0) goto code_?;
          uStack_43._0_4_ = (pPVar20->fields).point.x;
          uStack_43._4_4_ = (pPVar20->fields).point.y;
          fStack_27 = (pPVar20->fields).point.z;
          if (wo == (MVWorldObjectClient *)0x0) goto code_?;
          puVar24 = (undefined8 *)func_?(auStack_34 + 0x18,8,wo);
          uStack_26 = *puVar24;
          uVar44 = *(undefined4 *)(puVar24 + 1);
          if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVRaycast);
          }
          pIVar45 = (ICubeModelCollider *)
                    func_?(wo,TypeInfo__ICubeModelCollider,(int)uStack_43,
                                    (int)((ulonglong)uStack_43 >> 0x20),fStack_27,distance,
                                    (int)uStack_26,(int)((ulonglong)uStack_26 >> 0x20),uVar44,0);
          ray_00.m_Origin.y = BStack_36.m_Extents.x;
          ray_00.m_Origin.x = BStack_36.m_Center.z;
          ray_00.m_Origin.z = BStack_36.m_Extents.y;
          ray_00.m_Direction.x = BStack_36.m_Extents.z;
          ray_00.m_Direction.y = fStack_40;
          ray_00.m_Direction.z = fStack_41;
          bVar22 = MVRaycast_GetCellOnRay
                            (ray_00,&VStack_10,uStack_28._4_4_,pIVar45,in_stack_46,
                             in_stack_47,in_stack_48,in_stack_49);
          if (bVar22 != 0) {
            puVar24 = (undefined8 *)func_?(auStack_34 + 0xc,&ray,0);
            _fStack_28 = *puVar24;
            fVar29 = *(float *)(puVar24 + 1);
            uStack_43._0_4_ = (voxelHit->point).x;
            uStack_43._4_4_ = (voxelHit->point).y;
            fVar50 = (voxelHit->point).z;
            uStack_28._4_4_ = (GameObject *)fVar29;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            method_00 = (MethodInfo *)auStack_34;
            a_00.z = (float)uStack_28._4_4_;
            a_00.x = fStack_40;
            a_00.y = fStack_41;
            b_00.z = fVar50;
            b_00.x = (float)(undefined4)uStack_43;
            b_00.y = (float)uStack_43._4_4_;
            pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)method_00,a_00,b_00,(MethodInfo *)0x0);
            uStack_11._0_4_ = pVVar30->x;
            uStack_11._4_4_ = pVVar30->y;
            fStack_12 = pVVar30->z;
            fVar32 = (float10)func_?(&uStack_11,0);
            pVVar30 = (Vector3 *)func_?(apSStack_21,&ray,0);
            b_02.z = VStack_10.point.z;
            b_02.x = VStack_10.point.x;
            b_02.y = VStack_10.point.y;
            pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)&stack0xfffffe7c,*pVVar30,b_02,(MethodInfo *)0x0);
            uStack_13._0_4_ = pVVar30->x;
            uStack_13._4_4_ = pVVar30->y;
            fStack_14 = pVVar30->z;
            fVar51 = (float10)func_?();
            uStack_28 = CONCAT44((float)fVar51,(undefined4)uStack_28);
            if ((float)fVar51 < (float)fVar32) {
              pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                                  (collisionData,key,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVRaycast);
              }
              pIVar45 = (ICubeModelCollider *)func_?(wo,TypeInfo__ICubeModelCollider,0);
              MVRaycast_SetFoundHitVariables(&VStack_10,pPVar20,pIVar45,method_00);
              if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
                func_?(TypeInfo__SharedCollisionFunctions);
              }
              SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
                        (voxelHit,&VStack_10,(MethodInfo *)0x0);
            }
          }
        }
        pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                            (collisionData,key,(MethodInfo *)0x0);
        if (pPVar20 == (PhysicsCollisionData *)0x0) goto code_?;
      } while ((pPVar20->fields).isInsideCollider != 0);
      puVar24 = (undefined8 *)func_?(auStack_52,&ray,0);
      uStack_28 = *puVar24;
      fStack_27 = *(float *)(puVar24 + 1);
      uStack_26._0_4_ = (voxelHit->point).x;
      uStack_26._4_4_ = (voxelHit->point).y;
      fVar29 = (voxelHit->point).z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_01.z = fStack_27;
      a_01.x = (float)(undefined4)uStack_28;
      a_01.y = (float)uStack_28._4_4_;
      b_01.z = fVar29;
      b_01.x = (float)(undefined4)uStack_26;
      b_01.y = (float)uStack_26._4_4_;
      pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          (&VStack_53,a_01,b_01,(MethodInfo *)0x0);
      uStack_15._0_4_ = pVVar30->x;
      uStack_15._4_4_ = pVVar30->y;
      fStack_16 = pVVar30->z;
      fVar32 = (float10)func_?(&uStack_15,0);
      fStack_27 = (float)fVar32;
      puVar24 = (undefined8 *)func_?(auStack_54,&ray,0);
      uStack_26 = *puVar24;
      fVar29 = *(float *)(puVar24 + 1);
      pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,key,(MethodInfo *)0x0);
      if (pPVar20 == (PhysicsCollisionData *)0x0) goto code_?;
      a_02.z = fVar29;
      a_02.x = (float)(undefined4)uStack_26;
      a_02.y = (float)uStack_26._4_4_;
      pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          (&VStack_55,a_02,(pPVar20->fields).point,(MethodInfo *)0x0);
      uStack_17._0_4_ = pVVar30->x;
      uStack_17._4_4_ = pVVar30->y;
      fStack_18 = pVVar30->z;
      fVar32 = (float10)func_?(&uStack_17,0);
    } while (fStack_27 <= (float)fVar32);
    pPVar20 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                        (collisionData,key,(MethodInfo *)0x0);
    if (wo != (MVWorldObjectClient *)0x0) {
      pIVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCollisionFunctions);
      }
      SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                (voxelHit,pPVar20,(int32_t)pIVar19,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar56 = (code *)swi(3);
  (*pcVar56)();
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
    func_?(_UNK_?);
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
          woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
            func_?();
          }
          SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                    (voxelHit,pPVar2,(int32_t)woId,(MethodInfo *)0x0);
          return 1;
        }
      }
      goto code_?;
    }
    pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                       (collisionData,i,(MethodInfo *)0x0);
    if ((pPVar2 == (PhysicsCollisionData *)0x0) ||
       (this = (pPVar2->fields).transform, this == (Transform *)0x0)) goto code_?;
    chunk = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
    pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                       (collisionData,i,(MethodInfo *)0x0);
    if ((pPVar2 == (PhysicsCollisionData *)0x0) ||
       (fVar3 = (pPVar2->fields).point.z, wo == (MVWorldObjectClient *)0x0)) goto code_?;
    pVVar4 = (Vector3 *)(*(code *)(wo->klass->vtable).get_Scale.method)();
    fVar5 = pVVar4->z;
    scale = *pVVar4;
    if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
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
    ignoreWoIds_00 =
         (HashSet_1_System_Int32_ *)
         PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                   (collisionData,i,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar6 = (ICubeModelCollider *)func_?();
    if (pIVar6 != (ICubeModelCollider *)0x0) {
      MVRaycast_SetFoundHitVariables
                (voxelHit,(PhysicsCollisionData *)ignoreWoIds_00,pIVar6,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
        func_?();
      }
      MVRaycast_HandleObjectsInsideBoxCollider
                (ray,i,collisionData,voxelHit,ignoreWoIds_00,(float)pIVar6,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (distance != _UNK_?) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                       ((Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
              ((Vector3 *)&stack0xffffffc0,0.5,*pVVar1,(MethodInfo *)0x0);
    func_?();
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                       ((Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
              ((Vector3 *)&stack0xffffffc0,0.5,*pVVar1,(MethodInfo *)0x0);
    func_?();
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalIntVectorToLocalPos
                       ((Vector3 *)&stack0xffffffc0,voxelPos,(MethodInfo *)0x0);
    fVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    uVar4 = (undefined2)uVar3;
    uVar5 = (undefined2)((uint)uVar3 >> 0x10);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffc0,*pVVar1,localOrigin,(MethodInfo *)0x0);
    fVar6 = (float10)func_?();
    return (float)fVar6 <= (float)CONCAT22(uVar5,uVar4) + 0.0 + fVar2 * 3.736217e-29;
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
  puStack_4 = &stack0xfffffed4;
  puVar5 = &stack0xfffffed4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  SStack_6.klass = (SubscribableVariableBase_1_UnityEngine_Quaternion___Class *)0x0;
  SStack_6.monitor = (MonitorData *)0x0;
  SStack_6.fields.value.x = 0.0;
  SStack_6.fields.value.y = 0.0;
  SStack_6.fields.value.z = 0.0;
  SStack_6.fields.value.w = 0.0;
  func_?(&RStack_7,0,0x2c);
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  fStack_11 = 0.0;
  uStack_12 = 0;
  func_?(&RStack_13,0,0x2c);
  func_?();
  puStack_14 = (undefined4 *)&stack0xfffffed4;
  uVar15 = CONCAT44(unaff_EDI,0x48);
  puStack_4 = &stack0xfffffed4;
  func_?(voxelHit,0,0x48);
  if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
    uVar15 = CONCAT44((int)(uVar15 >> 0x20),TypeInfo__MVRaycast);
    func_?(TypeInfo__MVRaycast);
  }
  pLVar16 = (List_1_UnityEngine_UIVertex_ *)TypeInfo__MVRaycast->static_fields->sortedHits;
  if (pLVar16 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    uVar17 = (undefined4)(uVar15 >> 0x20);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (pLVar16,
               MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Clear__);
    uVar15 = CONCAT44(uVar17,TypeInfo__ICubeModelCollider);
    iVar18 = func_?(wo,TypeInfo__ICubeModelCollider);
    pIVar19 = TypeInfo__ICubeModelCollider;
    if (iVar18 == 0) {
      uVar15 = uVar15 & 0xffffffff00000000;
      if (wo != (MVWorldObjectClient *)0x0) {
        unaff_ESI = (VoxelHit__Array *)
                    PrefabPool::PrefabPool_get_MVNegatePrefab((PrefabPool *)wo,in_stack_20);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)unaff_ESI,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar21 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Remember_to_test_positive_infini,(MethodInfo *)0x0);
          this_00 = PrefabPool::PrefabPool_get_MVNegatePrefab((PrefabPool *)wo,(MethodInfo *)0x0);
          uVar15 = uVar15 & 0xffffffff00000000;
          if (this_00 == (ObjectPrefab *)0x0) goto code_?;
          ray_01.m_Origin.y = ray.m_Origin.y;
          ray_01.m_Origin.x = ray.m_Origin.x;
          ray_01.m_Origin.z = ray.m_Origin.z;
          ray_01.m_Direction.x = ray.m_Direction.x;
          ray_01.m_Direction.y = ray.m_Direction.y;
          ray_01.m_Direction.z = ray.m_Direction.z;
          bVar21 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                            ((Collider *)this_00,ray_01,&RStack_13,distance,(MethodInfo *)0x0);
          if (bVar21 != 0) {
            pMStack_22 = (MVRaycast__Class *)TypeInfo__PhysicsCollisionData;
            BStack_23.m_Extents.z = (float)&UNK_?;
            this_01 = (PhysicsCollisionData *)func_?();
            WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
            WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                      ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this_01,
                       (MethodInfo *)0x0);
            uVar15 = uVar15 & 0xffffffff00000000;
            unaff_ESI = (VoxelHit__Array *)0x0;
            if (this_01 == (PhysicsCollisionData *)0x0) goto code_?;
            hit.m_Point.y = RStack_13.m_Point.y;
            hit.m_Point.x = RStack_13.m_Point.x;
            hit.m_Point.z = RStack_13.m_Point.z;
            hit.m_Normal.x = RStack_13.m_Normal.x;
            hit.m_Normal.y = RStack_13.m_Normal.y;
            hit.m_Normal.z = RStack_13.m_Normal.z;
            hit.m_FaceID = RStack_13.m_FaceID;
            hit.m_Distance = RStack_13.m_Distance;
            hit.m_UV.x = RStack_13.m_UV.x;
            hit.m_UV.y = RStack_13.m_UV.y;
            hit.m_Collider = RStack_13.m_Collider;
            PhysicsCollisionData::PhysicsCollisionData_Set(this_01,hit,(MethodInfo *)0x0);
            pIVar24 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items
                                ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
              func_?();
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,this_01,(int32_t)pIVar24,(MethodInfo *)0x0);
code_?:
            bVar21 = 1;
            goto code_?;
          }
        }
        else {
          arg1 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          message = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_No_collider_on_wo_of_type_,(Object *)arg1,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)message,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Maybe_a_recursive_check_of_the_c,(MethodInfo *)0x0);
        }
code_?:
        bVar21 = 0;
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return bVar21;
      }
      goto code_?;
    }
    unaff_ESI = (VoxelHit__Array *)TypeInfo__ICubeModelCollider;
    if (wo != (MVWorldObjectClient *)0x0) {
      iVar18 = func_?(wo,TypeInfo__ICubeModelCollider);
      pIVar25 = TypeInfo__ICubeModelCollider;
      unaff_ESI = (VoxelHit__Array *)pIVar19;
      if ((iVar18 == 0) ||
         (pCStack_26 = (Collection_1_VoxelHit_ *)func_?(wo,TypeInfo__ICubeModelCollider),
         unaff_ESI = (VoxelHit__Array *)pIVar25, pCStack_26 == (Collection_1_VoxelHit_ *)0x0)) {
        func_?(wo,unaff_ESI);
      }
      else {
        pCVar27 = pCStack_26->klass;
        uVar28 = 0;
        uStack_29 = CONCAT44(pCVar27,(undefined4)uStack_29);
        SStack_6.fields.OnChange = (Action_1_UnityEngine_Quaternion_ *)0x0;
        uVar30._0_1_ = (pCVar27->_1).rank;
        uVar30._1_1_ = (pCVar27->_1).minimumAlignment;
        if (uVar30 != 0) {
          do {
            if (pCVar27->interfaceOffsets[uVar28].interfaceType ==
                (Il2CppClass *)TypeInfo__ICubeModelCollider) {
              ppMVar31 = &(&(pCVar27->vtable).System_Collections_IEnumerable_GetEnumerator)
                          [pCVar27->interfaceOffsets[uVar28].offset].method;
              goto code_?;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar30);
        }
        ppMVar31 = (MethodInfo **)func_?(pCStack_26,TypeInfo__ICubeModelCollider,4);
code_?:
        unaff_ESI = (VoxelHit__Array *)(*(code *)*ppMVar31)(pCStack_26,ppMVar31[1]);
        if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
          uVar15 = CONCAT44((int)(uVar15 >> 0x20),TypeInfo__MVRaycast);
          func_?(TypeInfo__MVRaycast);
        }
        pLVar16 = (List_1_UnityEngine_UIVertex_ *)TypeInfo__MVRaycast->static_fields->colliderList;
        if (pLVar16 != (List_1_UnityEngine_UIVertex_ *)0x0) {
          uVar15 = CONCAT44((int)(uVar15 >> 0x20),
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Clear__
                           );
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (pLVar16,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Clear__)
          ;
          if (unaff_ESI != (VoxelHit__Array *)0x0) {
            uVar15 = ZEXT48(TypeInfo__System__Collections__IEnumerable) << 0x20;
            iVar18 = func_?(0);
            uStack_29 = CONCAT44(iVar18,(undefined4)uStack_29);
            uStack_1 = 0;
            while (iVar18 != 0) {
              uVar17 = (undefined4)(uVar15 >> 0x20);
              cVar32 = func_?(1,TypeInfo__System__Collections__IEnumerator,iVar18);
              if (cVar32 == '\0') {
                unaff_ESI = (VoxelHit__Array *)0x0;
                *puStack_14 = 0xe2;
                uStack_1 = 0xffffffff;
                uVar15 = CONCAT44(uVar17,TypeInfo__System__IDisposable);
                iVar18 = func_?(iVar18,TypeInfo__System__IDisposable);
                if (iVar18 != 0) {
                  uVar15 = CONCAT44((int)(uVar15 >> 0x20),iVar18);
                  func_?(0,TypeInfo__System__IDisposable,iVar18);
                }
                if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
                  uVar15 = CONCAT44((int)(uVar15 >> 0x20),TypeInfo__MVRaycast);
                  func_?(TypeInfo__MVRaycast);
                }
                pLVar33 = (List_1_VoxelHit_ *)TypeInfo__MVRaycast->static_fields->colliderList;
                if (pLVar33 != (List_1_VoxelHit_ *)0x0) {
                  uVar15 = CONCAT44((int)(uVar15 >> 0x20),
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__ToArray__
                                   );
                  unaff_ESI = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                              List_1_VoxelHit__ToArray
                                        (pLVar33,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__ToArray__
                                        );
                  pLVar33 = (List_1_VoxelHit_ *)TypeInfo__MVRaycast->static_fields->sortedHits;
                  if (pLVar33 != (List_1_VoxelHit_ *)0x0) {
                    hits = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                           List_1_VoxelHit__ToArray
                                     (pLVar33,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__ToArray__
                                     );
                    uVar15 = CONCAT44(&ray,&UStack_34);
                    puVar35 = (undefined8 *)func_?(&UStack_34);
                    uStack_29 = *puVar35;
                    puStack_14 = (undefined4 *)*(float *)(puVar35 + 1);
                    if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
                      func_?(TypeInfo__SharedCollisionFunctions);
                    }
                    origin.z = (float)puStack_14;
                    origin.x = (float)(undefined4)uStack_29;
                    origin.y = (float)uStack_29._4_4_;
                    pCStack_26 = (Collection_1_VoxelHit_ *)
                                 SharedCollisionFunctions::
                                 SharedCollisionFunctions_GetPhysicsCollisionData
                                           ((Collider__Array *)unaff_ESI,(RaycastHit__Array *)hits,
                                            origin,(MethodInfo *)0x0);
                    unaff_ESI = (VoxelHit__Array *)0x0;
                    iVar18 = 0;
                    if (pCStack_26 != (Collection_1_VoxelHit_ *)0x0) goto code_?;
                  }
                }
                break;
              }
              uVar15 = CONCAT44(uVar17,iVar18);
              piVar36 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerator,iVar18);
              uVar37 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                ,piVar36);
              if (piVar36 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar36 + 0x20) !=
                  (
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                  ->_0).element_class) goto code_?;
              uVar38 = (uint)(uVar15 >> 0x20);
              puVar39 = (undefined4 *)func_?(piVar36);
              SStack_6.klass =
                   (SubscribableVariableBase_1_UnityEngine_Quaternion___Class *)*puVar39;
              SStack_6.monitor = (MonitorData *)puVar39[1];
              SStack_6.fields.value.x = (float)puVar39[2];
              SStack_6.fields.value.y = (float)puVar39[3];
              SStack_6.fields.value._8_8_ = *(undefined8 *)(puVar39 + 4);
              pQVar40 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
                        SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                                  (&QStack_41,&SStack_6,
                                   MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                                  );
              uVar15 = (ulonglong)uVar38 << 0x20;
              if ((Collider *)pQVar40->y == (Collider *)0x0) goto code_?;
              ray_02.m_Origin.y = ray.m_Origin.y;
              ray_02.m_Origin.x = ray.m_Origin.x;
              ray_02.m_Origin.z = ray.m_Origin.z;
              ray_02.m_Direction.x = ray.m_Direction.x;
              ray_02.m_Direction.y = ray.m_Direction.y;
              ray_02.m_Direction.z = ray.m_Direction.z;
              bVar21 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                                ((Collider *)pQVar40->y,ray_02,&RStack_7,distance,(MethodInfo *)0x0
                                );
              if (bVar21 == 0) {
                pMStack_22 = (MVRaycast__Class *)
                              MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                ;
                BStack_23.m_Extents.z = (float)&SStack_6;
                BStack_23.m_Extents.y = (float)&stack0xffffff08;
                BStack_23.m_Extents.x = (float)&UNK_?;
                iVar42 = func_?();
                uVar15 = uVar15 & 0xffffffff00000000;
                if (*(Collider **)(iVar42 + 4) == (Collider *)0x0) goto code_?;
                pBVar43 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                    (&BStack_23,*(Collider **)(iVar42 + 4),(MethodInfo *)0x0);
                fStack_8 = (pBVar43->m_Center).x;
                fStack_9 = (pBVar43->m_Center).y;
                fStack_10 = (pBVar43->m_Center).z;
                fStack_11 = (pBVar43->m_Extents).x;
                uStack_12._0_4_ = (pBVar43->m_Extents).y;
                uStack_12._4_4_ = (pBVar43->m_Extents).z;
                puVar44 = (ulonglong *)func_?();
                uVar15 = *puVar44;
                cVar32 = func_?(&fStack_8,uVar15);
                uVar17 = (undefined4)(uVar15 >> 0x20);
                if (cVar32 != '\0') {
                  if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVRaycast);
                  }
                  uVar15 = CONCAT44(uVar17,
                                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                                   );
                  unaff_ESI = (VoxelHit__Array *)TypeInfo__MVRaycast->static_fields->colliderList;
                  puVar39 = (undefined4 *)
                            func_?(&pMStack_22,&SStack_6,
                                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                                           );
                  uStack_45 = *puVar39;
                  UStack_34 = puVar39[1];
                  uStack_46 = puVar39[2];
                  uStack_47 = puVar39[3];
                  if (unaff_ESI == (VoxelHit__Array *)0x0) break;
                  uVar15 = CONCAT44((int)(uVar15 >> 0x20),
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                                   );
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            ((List_1_UIPushOption_ *)unaff_ESI,UStack_34,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                            );
                }
              }
              else {
                if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
                  pMStack_22 = TypeInfo__MVRaycast;
                  BStack_23.m_Extents.z = (float)&UNK_?;
                  func_?();
                }
                this = TypeInfo__MVRaycast->static_fields->sortedHits;
                if (this == (List_1_UnityEngine_RaycastHit_ *)0x0) break;
                uVar15 = CONCAT44((int)(uVar15 >> 0x20),
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Add_UnityEngine__RaycastHit_
                                 );
                item.m_Point.y = RStack_7.m_Point.y;
                item.m_Point.x = RStack_7.m_Point.x;
                item.m_Point.z = RStack_7.m_Point.z;
                item.m_Normal.x = RStack_7.m_Normal.x;
                item.m_Normal.y = RStack_7.m_Normal.y;
                item.m_Normal.z = RStack_7.m_Normal.z;
                item.m_FaceID = RStack_7.m_FaceID;
                item.m_Distance = RStack_7.m_Distance;
                item.m_UV.x = RStack_7.m_UV.x;
                item.m_UV.y = RStack_7.m_UV.y;
                item.m_Collider = RStack_7.m_Collider;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::RaycastHit]::
                List_1_UnityEngine_RaycastHit__Add
                          (this,item,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Add_UnityEngine__RaycastHit_
                          );
              }
            }
          }
        }
      }
    }
  }
  uVar15 = uVar15 & 0xffffffff00000000;
code_?:
  uVar37 = func_?(uVar15);
code_?:
  func_?(uVar37);
  func_?(unaff_ESI,0,0);
  pcVar48 = (code *)swi(3);
  bVar21 = (*pcVar48)();
  return bVar21;
code_?:
  pIVar24 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items(pCStack_26,(MethodInfo *)0x0);
  if ((int)pIVar24 <= iVar18) goto code_?;
  fStack_49 = ray.m_Origin.x;
  fStack_50 = ray.m_Origin.y;
  fStack_51 = ray.m_Origin.z;
  fStack_52 = ray.m_Direction.x;
  fStack_53 = ray.m_Direction.y;
  puStack_14 = (undefined4 *)ray.m_Direction.z;
  if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
    func_?();
  }
  ray_00.m_Origin.y = fStack_50;
  ray_00.m_Origin.x = fStack_49;
  ray_00.m_Origin.z = fStack_51;
  ray_00.m_Direction.x = fStack_52;
  ray_00.m_Direction.y = (float)_fStack_20;
  ray_00.m_Direction.z = SUB84(_fStack_20,4);
  bVar21 = MVRaycast_HitDetectOnWo
                    (ray_00,iVar18,wo,(PhysicsCollisionDatasWrapper *)pCStack_26,0,voxelHit,
                     (HashSet_1_System_Int32_ *)0x0,distance,(MethodInfo *)0x0);
  if (bVar21 != 0) goto code_?;
  iVar18 = iVar18 + 1;
  goto code_?;
}


/* List`1[VoxelHit] MVHitAll(Ray, Single, Int32, HashSet`1[System.Int32]) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHitAll
          (Ray ray,float distance,int32_t layerMask,HashSet_1_System_Int32_ *ignoreWoIds,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVRaycast);
  }
  this = MVRaycast_MVHit_2(ray,0,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  if (this != (List_1_VoxelHit_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    if (pOVar1 != (Object *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
      if ((int)pOVar1 < 2) {
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                  List_1_VoxelHit__get_Item
                            ((VoxelHit *)&stack0xffffffb4,this,0,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                            );
        fVar3 = (pVVar2->point).y;
        fVar4 = (pVVar2->point).z;
        fVar5 = (pVVar2->normal).x;
        fVar6 = (pVVar2->normal).y;
        fVar7 = (pVVar2->normal).z;
        iVar8 = (pVVar2->cubePos).x;
        iVar9 = (pVVar2->cubePos).y;
        uVar10 = *(undefined4 *)&(pVVar2->cubePos).z;
        iVar11 = pVVar2->face;
        bVar12 = pVVar2->isCubeHit;
        uVar13 = *(undefined3 *)&pVVar2->field_0x25;
        iVar14 = pVVar2->woId;
        pCVar15 = pVVar2->cube;
        fVar16 = pVVar2->distance;
        pCVar17 = pVVar2->collider;
        pTVar18 = pVVar2->transform;
        uVar19 = *(undefined4 *)&pVVar2->field_0x3c;
        iVar20 = pVVar2->interactionFlags;
        (voxelHit->point).x = (pVVar2->point).x;
        (voxelHit->point).y = fVar3;
        (voxelHit->point).z = fVar4;
        (voxelHit->normal).x = fVar5;
        (voxelHit->normal).y = fVar6;
        (voxelHit->normal).z = fVar7;
        (voxelHit->cubePos).x = iVar8;
        (voxelHit->cubePos).y = iVar9;
        *(undefined4 *)&(voxelHit->cubePos).z = uVar10;
        voxelHit->face = iVar11;
        voxelHit->isCubeHit = bVar12;
        *(undefined3 *)&voxelHit->field_0x25 = uVar13;
        voxelHit->woId = iVar14;
        voxelHit->cube = pCVar15;
        voxelHit->distance = fVar16;
        voxelHit->collider = pCVar17;
        voxelHit->transform = pTVar18;
        *(undefined4 *)&voxelHit->field_0x3c = uVar19;
        voxelHit->interactionFlags = iVar20;
        return 1;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  bVar12 = (*pcVar21)();
  return bVar12;
}


/* List`1[VoxelHit] MVHit(Ray, Boolean, Single, Int32, HashSet`1[System.Int32]) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit_2
          (Ray ray,bool all,float distance,int32_t layerMask,HashSet_1_System_Int32_ *ignoreWoIds,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x48);
  if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVRaycast);
  }
  this = (List_1_UnityEngine_UIVertex_ *)TypeInfo__MVRaycast->static_fields->voxelHits;
  if (this != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this,MethodInfo__System__Collections__Generic__List<VoxelHit>__Clear__);
    InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
              ((Vector3 *)&stack0xffffffe0,(InputToPlayerMovementAndroid *)&ray,(MethodInfo *)0x0);
    fVar2 = (float10)func_?(&stack0xffffffd4,0);
    if ((float)fVar2 != 0.0) {
      if (all != 0) {
        if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = (HashSet_1_UnityEngine_Vector3_ *)TypeInfo__MVRaycast->static_fields->foundWos;
        if (this_00 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3__Clear
                  (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
      }
      fVar3 = ray.m_Direction.y;
      fVar4 = ray.m_Direction.z;
      uVar5 = ray.m_Direction._4_8_;
      pCVar6 = (Collider *)ray.m_Origin.x;
      pTVar7 = (Transform *)ray.m_Origin.y;
      puVar8 = (undefined *)ray.m_Origin.z;
      puVar9 = (undefined *)ray.m_Direction.x;
      if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
        puVar9 = &UNK_?;
        func_?();
        uVar5._4_4_ = fVar4;
        uVar5._0_4_ = fVar3;
      }
      ray_00.m_Origin.y = (float)pTVar7;
      ray_00.m_Origin.x = (float)pCVar6;
      ray_00.m_Origin.z = (float)puVar8;
      ray_00.m_Direction.x = (float)puVar9;
      ray_00.m_Direction.y = (float)uVar5;
      ray_00.m_Direction.z = SUB84(uVar5,4);
      hitAmount = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastNonAlloc_1
                            (ray_00,TypeInfo__CollisionDetectionGlobalBuffers->static_fields->
                                    rayHitBuffer,distance,layerMask,(MethodInfo *)0x0);
      pVVar10 = (Vector3 *)func_?();
      overlapAmount =
           UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                     (*pVVar10,0.0,
                      TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                      layerMask,(MethodInfo *)0x0);
      hits = (RaycastHit__Array *)&ray;
      overlapResult = (Collider__Array *)&UNK_?;
      puVar11 = (undefined8 *)func_?();
      uVar5 = *puVar11;
      fVar3 = *(float *)(puVar11 + 1);
      fVar4 = (float)uVar5;
      fVar12 = (float)((ulonglong)uVar5 >> 0x20);
      if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCollisionFunctions);
        uVar5 = CONCAT44(fVar12,fVar4);
      }
      origin.z = fVar3;
      origin.x = (float)(int)uVar5;
      origin.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      this_04 = (MVRaycast__Class *)
                SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
                          (overlapAmount,overlapResult,hitAmount,hits,origin,(MethodInfo *)0x0);
      key = 0;
      if (this_04 == (MVRaycast__Class *)0x0) goto code_?;
      while( true ) {
        pMVar13 = this_04;
        iVar14 = key;
        pIVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_04,(MethodInfo *)0x0);
        if ((int)pIVar15 <= iVar14) break;
        pPVar16 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           ((PhysicsCollisionDatasWrapper *)this_04,key,(MethodInfo *)0x0);
        if (pPVar16 == (PhysicsCollisionData *)0x0) goto code_?;
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                       ((pPVar16->fields).transform,(MethodInfo *)0x0);
        this_04 = pMVar13;
        if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
          func_?();
          this_04 = pMVar13;
        }
        bVar17 = SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
                          (wo,ignoreWoIds,(MethodInfo *)0x0);
        if (bVar17 == 0) {
          if (all != 0) {
            if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
              this_04 = TypeInfo__MVRaycast;
              func_?();
            }
            this_01 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
                      TypeInfo__MVRaycast->static_fields->foundWos;
            if (wo == (MVWorldObjectClient *)0x0) goto code_?;
            pIVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
            if (this_01 == (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0)
            goto code_?;
            bVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                    NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                              (this_01,(NativeAdType__Enum)pIVar15,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                              );
            if (bVar17 != 0) goto code_?;
          }
          fVar18 = ray.m_Direction.y;
          fVar19 = ray.m_Direction.z;
          uVar20 = ray.m_Direction._4_8_;
          pCVar21 = (CanvasGroup *)ray.m_Origin.x;
          fVar3 = ray.m_Origin.y;
          fVar4 = ray.m_Origin.z;
          fVar12 = ray.m_Direction.x;
          if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
            func_?();
            uVar20._4_4_ = fVar19;
            uVar20._0_4_ = fVar18;
          }
          this_04 = (MVRaycast__Class *)0x0;
          puVar9 = &UNK_?;
          ray_01.m_Origin.y = fVar3;
          ray_01.m_Origin.x = (float)pCVar21;
          ray_01.m_Origin.z = fVar4;
          ray_01.m_Direction.x = fVar12;
          ray_01.m_Direction.y = (float)uVar20;
          ray_01.m_Direction.z = SUB84(uVar20,4);
          bVar17 = MVRaycast_HitDetectOnWo
                            (ray_01,key,wo,(PhysicsCollisionDatasWrapper *)0x0,all ^ 1,
                             (VoxelHit *)&fStack_1,ignoreWoIds,distance,(MethodInfo *)0x0);
          if (bVar17 != 0) {
            if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
              ignoreWoIds = (HashSet_1_System_Int32_ *)&UNK_?;
              func_?();
            }
            this_02 = (List_1_GameTierProgressBar_TierProgressData_ *)
                      TypeInfo__MVRaycast->static_fields->voxelHits;
            if (this_02 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
            goto code_?;
            item.progressText = (Text *)fStack_22;
            item.progressBar = (ProgressBar *)fStack_1;
            item.progressDivider = (GameObject *)fStack_23;
            item.progressBarTextBubble = (GamePassesTextBubble *)fStack_24;
            item.avatarHead = (GamePassesTextBubble *)fStack_25;
            item.avatarHeadImage = (RawImage *)fStack_26;
            item.avatarHeadUI = (GameObject *)IStack_27._0_4_;
            item.disabledProgressBar = (ProgressBar *)stack0xffffff98;
            item.disabledProgressDivider = (GameObject *)iStack_28;
            item.disabledBarTextBubble = (GamePassesTextBubble *)uStack_29;
            item.tierIconTempUnlock = (GameObject *)iStack_30;
            item.tierIconNumber = (GameObject *)pCStack_31;
            item.endResultProgressBar = (ProgressBar *)puStack_32;
            item.tempProgress = (GameObject *)pCVar6;
            item.disabledTempProgress = (GameObject *)pTVar7;
            item.freeTryTextBubble = (GamePassesTextBubble *)puVar8;
            item.hoverInputHandler = (HoverInputHandler *)puVar9;
            item.LockedTierIcon = pCVar21;
            mscorlib.dll::System::Collections::Generic::List`1[GameTierProgressBar+TierProgressData]
            ::List_1_GameTierProgressBar_TierProgressData__Add
                      (this_02,item,
                       MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
            this_03 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                      TypeInfo__MVRaycast->static_fields->foundWos;
            if (wo == (MVWorldObjectClient *)0x0) goto code_?;
            puVar8 = &UNK_?;
            item_00 = (UnityWebRequest *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items
                                ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
            if (this_03 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
            goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      (this_03,item_00,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            if (all == 0) break;
          }
        }
code_?:
        key = key + 1;
      }
    }
    if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
      func_?();
    }
    return TypeInfo__MVRaycast->static_fields->voxelHits;
  }
code_?:
  func_?(0);
  pcVar33 = (code *)swi(3);
  pLVar34 = (List_1_VoxelHit_ *)(*pcVar33)();
  return pLVar34;
}


/* Void SetFoundHitVariables(VoxelHit ByRef, PhysicsCollisionData, ICubeModelCollider) */

void Assembly-CSharp.dll::MVRaycast::MVRaycast_SetFoundHitVariables
               (VoxelHit *voxelHit,PhysicsCollisionData *collisionData,
               ICubeModelCollider *cubeModelBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  voxelHit->isCubeHit = 1;
  if (cubeModelBase != (ICubeModelCollider *)0x0) {
    pIVar1 = cubeModelBase->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          ppMVar4 = &(&(cubeModelBase->klass->vtable).get_Id)
                     [pIVar1->interfaceOffsets[uVar2].offset].method;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    ppMVar4 = (MethodInfo **)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,0);
code_?:
    iVar5 = (*(code *)*ppMVar4)(cubeModelBase,ppMVar4[1]);
    voxelHit->woId = iVar5;
    uVar3 = 0;
    pIVar1 = cubeModelBase->klass;
    uVar2._0_1_ = (pIVar1->_1).rank;
    uVar2._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar2 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          ppMVar4 = &(&(cubeModelBase->klass->vtable).get_GameObject)
                     [pIVar1->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    ppMVar4 = (MethodInfo **)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,1);
code_?:
    this = (GameObject *)(*(code *)*ppMVar4)(cubeModelBase,ppMVar4[1]);
    if (this != (GameObject *)0x0) {
      pUVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                         (this,
                          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                         );
      voxelHit->collider = (Collider *)pUVar6;
      uVar3 = 0;
      pIVar1 = cubeModelBase->klass;
      uVar7._0_1_ = (pIVar1->_1).rank;
      uVar7._1_1_ = (pIVar1->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar1->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__ICubeModelCollider) {
            ppMVar4 = &(&(cubeModelBase->klass->vtable).get_Transform)
                       [pIVar1->interfaceOffsets[uVar3].offset].method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar7);
      }
      ppMVar4 = (MethodInfo **)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,2);
code_?:
      pTVar8 = (Transform *)(*(code *)*ppMVar4)(cubeModelBase,ppMVar4[1]);
      voxelHit->transform = pTVar8;
      uVar3 = 0;
      pIVar1 = cubeModelBase->klass;
      uVar9._0_1_ = (pIVar1->_1).rank;
      uVar9._1_1_ = (pIVar1->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pIVar1->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__ICubeModelCollider) {
            ppMVar4 = &(&(cubeModelBase->klass->vtable).get_InteractionFlags)
                       [pIVar1->interfaceOffsets[uVar3].offset].method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar9);
      }
      ppMVar4 = (MethodInfo **)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,3);
code_?:
      iVar10 = (*(code *)*ppMVar4)(cubeModelBase,ppMVar4[1]);
      voxelHit->interactionFlags = iVar10;
      return;
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVRaycast() */

void Assembly-CSharp.dll::MVRaycast::MVRaycast__cctor(MethodInfo *method)

{
  uVar1 = (ulonglong)unaff_ESI;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3,uVar1);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar2->x;
  uVar3._4_4_ = pVVar2->y;
  fVar4 = pVVar2->z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  fVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  func_?(&stack0xffffffd0,uVar3,fVar4);
  pMVar7 = TypeInfo__MVRaycast->static_fields;
  (pMVar7->cubeBounds).m_Center.x = fVar5;
  (pMVar7->cubeBounds).m_Center.y = fVar6;
  (pMVar7->cubeBounds).m_Center.z = 0.0;
  (pMVar7->cubeBounds).m_Extents.x = 0.0;
  (pMVar7->cubeBounds).m_Extents.y = 0.0;
  (pMVar7->cubeBounds).m_Extents.z = 0.0;
  pMVar7 = TypeInfo__MVRaycast->static_fields;
  (pMVar7->intersectRay).m_Origin.x = 0.0;
  (pMVar7->intersectRay).m_Origin.y = 0.0;
  (pMVar7->intersectRay).m_Origin.z = 0.0;
  (pMVar7->intersectRay).m_Direction.x = 0.0;
  (pMVar7->intersectRay).m_Direction.y = 0.0;
  (pMVar7->intersectRay).m_Direction.z = 0.0;
  this = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  TypeInfo__MVRaycast->static_fields->foundWos = (HashSet_1_System_Int32_ *)this;
  this_00 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<VoxelHit>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
  TypeInfo__MVRaycast->static_fields->voxelHits = this_00;
  this_01 = (List_1_UnityEngine_RaycastHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__List__);
  TypeInfo__MVRaycast->static_fields->sortedHits = this_01;
  this_02 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
  TypeInfo__MVRaycast->static_fields->colliderList = (List_1_UnityEngine_Collider_ *)this_02;
  return;
}

