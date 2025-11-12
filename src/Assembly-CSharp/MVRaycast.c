
/* Boolean GetCellOnRay(Ray, VoxelHit ByRef, GameObject, ICubeModelCollider, Vector3, Single,
   Vector3) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_GetCellOnRay
               (Ray *ray,VoxelHit *vHit,GameObject *chunk,ICubeModelCollider *cmb,Vector3 *hitPoint,
               float distance,Vector3 *scale,MethodInfo *method)

{
  pIStackX_20 = cmb;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (chunk != (GameObject *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (chunk,(MethodInfo *)0x0);
    pTStack_1 = obj;
    if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (obj != (Transform *)0x0) {
      VStack_2.x = (ray->m_Direction).x;
      VStack_2.y = (ray->m_Direction).y;
      VStack_2.z = (ray->m_Direction).z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_3.x = 0.0;
      VStack_3.y = 0.0;
      VStack_3.z = 0.0;
      pvVar4 = (obj->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&VStack_2,&VStack_3);
      fVar8 = VStack_3.z;
      VStack_2.x = VStack_3.x;
      VStack_2.y = VStack_3.y;
      pMVar9 = TypeInfo__MVRaycast->static_fields;
      VStack_2.z = VStack_3.z;
      fVar10 = (float)FUN_?(&VStack_2);
      if (_UNK_? < fVar10) {
        fVar8 = fVar8 / fVar10;
        uVar7 = CONCAT44(VStack_3.y / fVar10,VStack_3.x / fVar10);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar7._0_4_ = (pVVar11->zeroVector).x;
        uVar7._4_4_ = (pVVar11->zeroVector).y;
        fVar8 = (pVVar11->zeroVector).z;
      }
      (pMVar9->intersectRay).m_Direction.x = (float)(int)uVar7;
      (pMVar9->intersectRay).m_Direction.y = (float)(int)((ulonglong)uVar7 >> 0x20);
      (pMVar9->intersectRay).m_Direction.z = fVar8;
      VStack_2.x = (ray->m_Origin).x;
      VStack_2.y = (ray->m_Origin).y;
      VStack_2.z = (ray->m_Origin).z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_3.x = 0.0;
      VStack_3.y = 0.0;
      VStack_3.z = 0.0;
      pvVar4 = (obj->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&VStack_2);
      fVar8 = _UNK_?;
      bVar12 = distance != _UNK_?;
      pMVar9 = TypeInfo__MVRaycast->static_fields;
      (pMVar9->intersectRay).m_Origin.x = VStack_3.x;
      (pMVar9->intersectRay).m_Origin.y = VStack_3.y;
      (pMVar9->intersectRay).m_Origin.z = VStack_3.z;
      if (bVar12) {
        if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar13 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
        pMVar9 = TypeInfo__MVRaycast->static_fields;
        VStack_14.x = (pMVar9->intersectRay).m_Direction.x;
        VStack_14.y = (pMVar9->intersectRay).m_Direction.y;
        VStack_14.z = (pMVar9->intersectRay).m_Direction.z;
        VStack_3.x = ((float)uVar13 * distance) / scale->x;
        VStack_3.y = (VStack_14.y * distance) / scale->y;
        VStack_3.z = ((TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.z * distance)
                       / scale->z;
        distance = (float)FUN_?(&VStack_3);
      }
      VStack_14.z = (ray->m_Origin).z;
      uVar15 = (ray->m_Origin).x;
      VStack_14.x = (ray->m_Origin).x;
      VStack_14.y = (ray->m_Origin).y;
      VStack_2.y = VStack_14.y - hitPoint->y;
      VStack_2.x = (float)uVar15 - hitPoint->x;
      VStack_2.z = (ray->m_Origin).z - hitPoint->z;
      fVar10 = (float)FUN_?(&VStack_2);
      if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar16 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
      pMVar9 = TypeInfo__MVRaycast->static_fields;
      VStack_14.x = (pMVar9->intersectRay).m_Direction.x;
      VStack_14.y = (pMVar9->intersectRay).m_Direction.y;
      VStack_14.z = (pMVar9->intersectRay).m_Direction.z;
      VStack_3.x = ((float)uVar16 * fVar10) / scale->x;
      VStack_3.y = (VStack_14.y * fVar10) / scale->y;
      VStack_3.z = ((TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.z * fVar10) /
                     scale->z;
      fVar10 = (float)FUN_?(&VStack_3);
      uVar17 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin.x;
      uVar18 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
      fVar19 = (float)uVar18 * fVar10 + (float)uVar17;
      uVar20 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Origin.y;
      uVar21 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.y;
      VStack_14.z = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.z;
      pMVar9 = TypeInfo__MVRaycast->static_fields;
      fVar22 = (float)uVar21 * fVar10 + (float)uVar20;
      VStack_14.x = (pMVar9->intersectRay).m_Direction.x;
      VStack_14.y = (pMVar9->intersectRay).m_Direction.y;
      VStack_3.y = fVar22;
      VStack_3.x = fVar19;
      fVar10 = (pMVar9->intersectRay).m_Direction.z * fVar10 + (pMVar9->intersectRay).m_Origin.z;
      VStack_3.z = fVar10;
      fStack_23 = fVar10;
      pIVar24 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                CubeMathFunctions_LocalPosToLocalIntVector
                          (&IStackX_18,&VStack_3,(MethodInfo *)0x0);
      uStack_25 = *(float *)pIVar24;
      iStack_26 = pIVar24->z;
      IStack_27.x = 0;
      IStack_27.y = 0;
      IStack_27.z = 0;
      IStack_28.x = 0;
      IStack_28.y = 0;
      IStack_28.z = 0;
      obj_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (chunk,
                          UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                         );
      if (obj_00 != (Object *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_2.x = 0.0;
        VStack_2.y = 0.0;
        VStack_2.z = 0.0;
        pOVar29 = obj_00[1].klass;
        if (pOVar29 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pOVar29);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pOVar29 = obj_00[1].klass;
        if (pOVar29 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pOVar29,&VStack_3);
        fVar30 = _UNK_?;
        BStack_31.m_Center.x = VStack_2.x;
        BStack_31.m_Center.y = VStack_2.y;
        fVar32 = VStack_3.y * _UNK_?;
        BStack_31.m_Extents.x = VStack_3.x * _UNK_?;
        BStack_31.m_Center.z = VStack_2.z;
        fVar33 = VStack_3.z * _UNK_?;
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        BStack_31.m_Extents.z = fVar33;
        BStack_31.m_Extents.y = fVar32;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_27,&IStack_28,&BStack_31,(MethodInfo *)0x0);
        IStackX_18.x = IStack_28.x;
        IStackX_18.y = IStack_28.y;
        IStackX_18.z = IStack_28.z;
        aIStack_34[0].x = IStack_27.x;
        aIStack_34[0].y = IStack_27.y;
        aIStack_34[0].z = IStack_27.z;
        MathFunctions::MathFunctions_ClampIntVector
                  ((IntVector *)&uStack_25,aIStack_34,&IStackX_18,(MethodInfo *)0x0);
        pMVar9 = TypeInfo__MVRaycast->static_fields;
        VStack_3.x = (pMVar9->intersectRay).m_Direction.x;
        VStack_3.y = (pMVar9->intersectRay).m_Direction.y;
        VStack_3.z = (pMVar9->intersectRay).m_Direction.z;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar35 = mscorlib.dll::System::Math::Math_Sign_2(VStack_3.x,(MethodInfo *)0x0);
        pMVar9 = TypeInfo__MVRaycast->static_fields;
        VStack_14.x = (pMVar9->intersectRay).m_Direction.x;
        VStack_14.y = (pMVar9->intersectRay).m_Direction.y;
        VStack_14.z = (pMVar9->intersectRay).m_Direction.z;
        aIStack_34[0]._0_4_ = iVar35;
        iVar36 = mscorlib.dll::System::Math::Math_Sign_2(VStack_14.y,(MethodInfo *)0x0);
        pMVar9 = TypeInfo__MVRaycast->static_fields;
        VStack_14.x = (pMVar9->intersectRay).m_Direction.x;
        VStack_14.y = (pMVar9->intersectRay).m_Direction.y;
        iStack_37 = iVar36;
        IStackX_18._0_4_ =
             mscorlib.dll::System::Math::Math_Sign_2
                       ((pMVar9->intersectRay).m_Direction.z,(MethodInfo *)0x0);
        uVar38 = (uint)(short)uStack_25;
        uVar39 = (uint)uStack_25._2_2_;
        uVar40 = (uint)iStack_26;
        bVar12 = 0 < (int)IStackX_18._0_4_;
        if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar41 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
        pMVar9 = TypeInfo__MVRaycast->static_fields;
        VStack_14.x = (pMVar9->intersectRay).m_Direction.x;
        VStack_14.y = (pMVar9->intersectRay).m_Direction.y;
        VStack_14.z = (pMVar9->intersectRay).m_Direction.z;
        fVar32 = (((float)(int)((0 < iVar35) + uVar38) - fVar19) - fVar30) / (float)uVar41;
        fVar10 = (((float)(int)(bVar12 + uVar40) - fVar10) - fVar30) /
                 (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.z;
        fVar30 = (((float)(int)((0 < iVar36) + uVar39) - fVar22) - fVar30) / VStack_14.y;
        if ((0x7f800000 < (uint)ABS(fVar32)) || (fVar32 == _UNK_?)) {
          fVar32 = fVar8;
        }
        if ((0x7f800000 < (uint)ABS(fVar30)) || (fVar30 == _UNK_?)) {
          fVar30 = fVar8;
        }
        if ((0x7f800000 < (uint)ABS(fVar10)) || (fVar10 == _UNK_?)) {
          fVar10 = fVar8;
        }
        if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar42 = (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.x;
        pMVar9 = TypeInfo__MVRaycast->static_fields;
        VStack_14.x = (pMVar9->intersectRay).m_Direction.x;
        VStack_14.y = (pMVar9->intersectRay).m_Direction.y;
        VStack_14.z = (pMVar9->intersectRay).m_Direction.z;
        fVar43 = (float)(int)IStackX_18._0_4_ /
                 (TypeInfo__MVRaycast->static_fields->intersectRay).m_Direction.z;
        fVar33 = (float)iVar35 / (float)uVar42;
        if (0x7f800000 < (uint)ABS((float)iVar35 / (float)uVar42)) {
          fVar33 = fVar8;
        }
        fVar44 = (float)iStack_37 / VStack_14.y;
        if (0x7f800000 < (uint)ABS((float)iStack_37 / VStack_14.y)) {
          fVar44 = fVar8;
        }
        fVar45 = uStack_25;
        if (0x7f800000 < (uint)ABS(fVar43)) {
          fVar43 = fVar8;
        }
        while( true ) {
          if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar9 = TypeInfo__MVRaycast->static_fields;
          sVar46 = (short)uVar40;
          VStack_47.x = (pMVar9->intersectRay).m_Origin.x;
          VStack_47.y = (pMVar9->intersectRay).m_Origin.y;
          VStack_47.z = (pMVar9->intersectRay).m_Origin.z;
          fStack_48 = fVar45;
          sStack_49 = sVar46;
          bVar6 = MVRaycast_IsWithinDistance
                             (distance,&VStack_47,(IntVector *)&fStack_48,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            return 0;
          }
          if (cmb == (ICubeModelCollider *)0x0) break;
          pIVar50 = cmb->klass;
          uVar51 = 0;
          uVar52._0_1_ = (pIVar50->_1).rank;
          uVar52._1_1_ = (pIVar50->_1).minimumAlignment;
          if (uVar52 != 0) {
            do {
              if (pIVar50->interfaceOffsets[uVar51].interfaceType ==
                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                ppIVar53 = &(&(pIVar50->vtable).get_Id)
                            [pIVar50->interfaceOffsets[uVar51].offset + 7].methodPtr;
                goto code_?;
              }
              uVar51 = uVar51 + 1;
            } while (uVar51 < uVar52);
          }
          ppIVar53 = (Il2CppMethodPointer *)FUN_?(cmb,TypeInfo__ICubeModelCollider,7);
code_?:
          VStack_2.y._0_2_ = sVar46;
          VStack_2.x = fVar45;
          cube = (Cube *)(**ppIVar53)(cmb,&VStack_2,(MethodInfo *)ppIVar53[1]);
          if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cube != (Cube *)0x0) {
            if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
              FUN_?();
            }
            BStack_31.m_Extents.y = (ray->m_Direction).y;
            BStack_31.m_Extents.z = (ray->m_Direction).z;
            aVStack_54[0].x = scale->x;
            aVStack_54[0].y = scale->y;
            aVStack_54[0].z = scale->z;
            VStack_14.y = fVar22;
            VStack_14.x = fVar19;
            VStack_14.z = fStack_23;
            BStack_31.m_Center.x = (ray->m_Origin).x;
            BStack_31.m_Center.y = (ray->m_Origin).y;
            BStack_31._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
            VStack_3.y._0_2_ = sVar46;
            VStack_3.x = fVar45;
            bVar6 = MVRaycast_GetHitPoint
                               ((Ray *)&BStack_31,cube,vHit,(IntVector *)&VStack_3,&VStack_14,
                                aVStack_54,distance,(MethodInfo *)0x0);
            if ((bVar6 != 0) &&
               (uVar55 = (ray->m_Origin).x, uVar56 = (ray->m_Origin).y, uVar57 = (vHit->point).x,
               uVar58 = (vHit->point).y, BStack_31.m_Center.x = (ray->m_Direction).x,
               BStack_31.m_Center.y = (ray->m_Direction).y,
               0.0 < ((float)uVar58 - (float)uVar56) * BStack_31.m_Center.y +
                     ((float)uVar57 - (float)uVar55) * BStack_31.m_Center.x +
                     ((vHit->point).z - (ray->m_Origin).z) * (ray->m_Direction).z)) {
              VStack_14.x = (vHit->normal).x;
              VStack_14.y = (vHit->normal).y;
              VStack_14.z = (vHit->normal).z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              VStack_3.x = 0.0;
              VStack_3.y = 0.0;
              VStack_3.z = 0.0;
              pvVar4 = (pTStack_1->fields)._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTStack_1,(MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                bVar6 = (*pcVar5)();
                return bVar6;
              }
              pcVar5 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar5 = (code *)swi(3);
                bVar6 = (*pcVar5)();
                return bVar6;
              }
              pcRam_? = pcVar5;
              (*pcRam_?)(pvVar4,&VStack_14,&VStack_3);
              (vHit->normal).x = VStack_3.x;
              (vHit->normal).y = VStack_3.y;
              *(float *)&vHit->cubePos = fVar45;
              (vHit->normal).z = VStack_3.z;
              (vHit->cubePos).z = sVar46;
              vHit->cube = cube;
              func_?(&vHit->cube);
              return 1;
            }
          }
          cmb = pIStackX_20;
          if ((fVar30 <= fVar32) || (fVar10 <= fVar32)) {
            if (fVar30 < fVar10) {
              uVar52 = (short)uVar39 + (short)iStack_37;
              uVar39 = (uint)uVar52;
              uStack_25 = (float)CONCAT22(uVar52,(short)uStack_25);
              if ((short)uVar52 < IStack_27.y) {
                return 0;
              }
              if (IStack_28.y < (short)uVar52) {
                return 0;
              }
              fVar30 = fVar44 + fVar30;
              fVar45 = uStack_25;
            }
            else {
              uVar52 = sVar46 + IStackX_18.x;
              uVar40 = (uint)uVar52;
              if ((short)uVar52 < IStack_27.z) {
                return 0;
              }
              if (IStack_28.z < (short)uVar52) {
                return 0;
              }
              fVar10 = fVar43 + fVar10;
            }
          }
          else {
            uVar52 = (short)uVar38 + aIStack_34[0].x;
            uVar38 = (uint)uVar52;
            uStack_25 = (float)CONCAT22(uStack_25._2_2_,uVar52);
            if ((short)uVar52 < IStack_27.x) {
              return 0;
            }
            if (IStack_28.x < (short)uVar52) {
              return 0;
            }
            fVar32 = fVar33 + fVar32;
            fVar45 = uStack_25;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean GetHitPoint(Ray, Cube, VoxelHit ByRef, IntVector, Vector3, Vector3, Single) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_GetHitPoint
               (Ray *ray,Cube *cube,VoxelHit *vHit,IntVector *voxelPos,Vector3 *localBoundsHitPoint,
               Vector3 *scale,float scaledDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__FaceFlags);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__FaceFlags);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_10[0] = 0.0;
  pFVar1 = (FaceFlags__Enum__Class *)0x0;
  apIStack_2[0] = (IEnumerator *)0x0;
  alStack_3[0] = 0;
  if (cube == (Cube *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if ((cube->fields).hiddenSides != 0x3f) {
    if ((cube->fields)._.unIndentedSides != 0x3f) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      byteArray = (cube->fields)._.byteCorners;
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
        FUN_?();
      }
      corners = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                CubeDataPacker_ByteArrayToCorners(byteArray,(MethodInfo *)0x0);
      sVar6 = voxelPos->x;
      sVar7 = voxelPos->y;
      sVar8 = voxelPos->z;
      VStack_9.x = 0.0;
      VStack_9.y = 0.0;
      VStack_9.z = 0.0;
      if (corners != (Vector3__Array *)0x0) {
        pVVar10 = corners->vector;
        pa = pFVar1;
        while (pIVar11 = TypeRef__MV__WorldObject__FaceFlags, uVar12 = (uint)pa,
              (int)uVar12 < (int)corners->max_length) {
          if ((uint)corners->max_length <= uVar12) {
            FUN_?();
            goto code_?;
          }
          VStack_13.x = pVVar10->x;
          VStack_13.y = pVVar10->y;
          pVVar10->x = (float)(int)sVar6 + VStack_13.x;
          pVVar10->y = (float)(int)sVar7 + VStack_13.y;
          pVVar10->z = (float)(int)sVar8 + pVVar10->z;
          pVVar10 = pVVar10 + 1;
          pa = (FaceFlags__Enum__Class *)(ulonglong)(uVar12 + 1);
        }
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (pIVar11 != (Il2CppType *)0x0) {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          lVar14 = FUN_?(pIVar11,1);
          pFVar1 = (FaceFlags__Enum__Class *)FUN_?(lVar14 + 0x20);
        }
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (pFVar1 == (FaceFlags__Enum__Class *)0x0) {
          uVar15 = func_?(&TypeInfo__System__ArgumentNullException);
          this_00 = (ArgumentNullException *)func_?(uVar15);
          paramName = (String *)func_?(&StringLiteral_enumType);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (this_00,paramName,(MethodInfo *)0x0);
          uVar15 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
          FUN_?(this_00,uVar15);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        this = (Array *)(**(code **)&(pFVar1->_0).image[0x1e].typeCount)(pFVar1);
        if (this != (Array *)0x0) {
          apIStack_2[0] = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0)
          ;
          fVar16 = _UNK_?;
          uStack_17 = 0;
          ppIStack_18 = apIStack_2;
          plStack_19 = alStack_3;
          do {
            do {
              pIVar20 = apIStack_2[0];
              if (apIStack_2[0] == (IEnumerator *)0x0) goto code_?;
              pIVar21 = apIStack_2[0]->klass;
              uVar22 = 0;
              uVar23._0_1_ = (pIVar21->_1).rank;
              uVar23._1_1_ = (pIVar21->_1).minimumAlignment;
              if (uVar23 != 0) {
                do {
                  if (pIVar21->interfaceOffsets[uVar22].interfaceType ==
                      (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                    ppIVar24 = &(&(pIVar21->vtable).MoveNext)
                                [pIVar21->interfaceOffsets[uVar22].offset].methodPtr;
                    goto code_?;
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar23);
              }
              ppIVar24 = (Il2CppMethodPointer *)
                         FUN_?(apIStack_2[0],TypeInfo__System__Collections__IEnumerator,0)
              ;
code_?:
              cVar25 = (**ppIVar24)(pIVar20,(MethodInfo *)ppIVar24[1]);
              if (cVar25 == '\0') {
                alStack_3[0] = FUN_?(apIStack_2[0],TypeInfo__System__IDisposable);
                if (alStack_3[0] == 0) {
                  return 0;
                }
                FUN_?(0,TypeInfo__System__IDisposable,alStack_3[0]);
                return 0;
              }
              if (apIStack_2[0] == (IEnumerator *)0x0) goto code_?;
              plVar26 = (longlong *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
              if (plVar26 == (longlong *)0x0) goto code_?;
              pa = TypeInfo__MV__WorldObject__FaceFlags;
              if (*(Il2CppClass **)(*plVar26 + 0x40) !=
                  (TypeInfo__MV__WorldObject__FaceFlags->_0).element_class)
              goto code_?;
              bVar27 = *(byte *)(plVar26 + 2);
            } while (((cube->fields).hiddenSides & bVar27) != 0);
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            FVar28 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                               ((uint)bVar27,(MethodInfo *)0x0);
            face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                             ((uint)bVar27,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            pa = (FaceFlags__Enum__Class *)0x0;
            pVVar29 = Cube::Cube_GetFace_1(corners,face,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar30 = TypeInfo__MVRaycast->static_fields;
            uVar31 = localBoundsHitPoint->x;
            uVar32 = localBoundsHitPoint->y;
            uVar33 = (pMVar30->intersectRay).m_Direction.x;
            if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
            if ((int)pVVar29->max_length == 0) goto code_?;
            if ((uint)pVVar29->max_length < 4) goto code_?;
            if ((uint)pVVar29->max_length < 3) goto code_?;
            VStack_34.x = (pMVar30->intersectRay).m_Direction.x;
            VStack_34.y = (pMVar30->intersectRay).m_Direction.y;
            VStack_34.z = (pMVar30->intersectRay).m_Direction.z;
            VStack_35.x = pVVar29->vector[2].x;
            VStack_35.y = pVVar29->vector[2].y;
            VStack_35.z = pVVar29->vector[2].z;
            VStack_36.x = pVVar29->vector[3].x;
            VStack_36.y = pVVar29->vector[3].y;
            VStack_36.z = pVVar29->vector[3].z;
            auStack_37._0_8_ = *(undefined8 *)pVVar29->vector;
            auStack_37._8_4_ = pVVar29->vector[0].z;
            pcStack_38 = (char *)CONCAT44((pMVar30->intersectRay).m_Direction.y * fVar16 +
                                          (float)uVar32,(float)uVar33 * fVar16 + (float)uVar31);
            _Stack_d8 = *(_union_86 *)&(pMVar30->intersectRay).m_Origin;
            fStack_39 = (pMVar30->intersectRay).m_Origin.z;
            pa = (FaceFlags__Enum__Class *)auStack_37;
            fStack_40 = (pMVar30->intersectRay).m_Direction.z * fVar16 + localBoundsHitPoint->z;
            bVar5 = MathFunctions::MathFunctions_LineFacetCollision
                               ((Vector3 *)&_Stack_d8,(Vector3 *)&pcStack_38,(Vector3 *)pa,
                                &VStack_36,&VStack_35,&VStack_34,&VStack_9,&vHit->normal,
                                (MethodInfo *)0x0);
            if (bVar5 != 0) break;
            if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar30 = TypeInfo__MVRaycast->static_fields;
            uVar41 = (pMVar30->intersectRay).m_Origin.x;
            uVar42 = (pMVar30->intersectRay).m_Origin.y;
            uVar43 = (pMVar30->intersectRay).m_Direction.x;
            if ((uint)pVVar29->max_length < 3) goto code_?;
            if ((uint)pVVar29->max_length < 2) goto code_?;
            if ((int)pVVar29->max_length == 0) goto code_?;
            _Stack_c8 = *(_union_86 *)&(pMVar30->intersectRay).m_Direction;
            fStack_44 = (pMVar30->intersectRay).m_Direction.z;
            pIStack_45 = *(Il2CppClass **)pVVar29->vector;
            fStack_46 = pVVar29->vector[0].z;
            pIStack_47 = *(Il2CppClass **)(pVVar29->vector + 1);
            fStack_48 = pVVar29->vector[1].z;
            pIStack_49 = *(Il2CppGenericClass **)(pVVar29->vector + 2);
            fStack_50 = pVVar29->vector[2].z;
            pIStack_51 = (Il2CppInteropData *)
                         CONCAT44((pMVar30->intersectRay).m_Direction.y * fVar16 + (float)uVar42,
                                  (float)uVar43 * fVar16 + (float)uVar41);
            VStack_13.x = (pMVar30->intersectRay).m_Origin.x;
            VStack_13.y = (pMVar30->intersectRay).m_Origin.y;
            VStack_13.z = (pMVar30->intersectRay).m_Origin.z;
            fStack_52 = (pMVar30->intersectRay).m_Direction.z * fVar16 +
                        (pMVar30->intersectRay).m_Origin.z;
            bVar5 = MathFunctions::MathFunctions_LineFacetCollision
                               (&VStack_13,(Vector3 *)&pIStack_51,(Vector3 *)&pIStack_49,
                                (Vector3 *)&pIStack_47,(Vector3 *)&pIStack_45,(Vector3 *)&_Stack_c8,
                                &VStack_9,&vHit->normal,(MethodInfo *)0x0);
          } while (bVar5 == 0);
          if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__MVRaycast);
          }
          pMVar30 = TypeInfo__MVRaycast->static_fields;
          uVar53 = (pMVar30->intersectRay).m_Origin.x;
          VStack_34.x = (float)uVar53 - VStack_9.x;
          VStack_34.z = (pMVar30->intersectRay).m_Origin.z - VStack_9.z;
          VStack_34.y = (pMVar30->intersectRay).m_Origin.y - VStack_9.y;
          fVar16 = (float)FUN_?(&VStack_34);
          if (scaledDistance < fVar16) {
            FUN_?(&ppIStack_18);
            return 0;
          }
          if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar30 = TypeInfo__MVRaycast->static_fields;
          uVar54 = (pMVar30->intersectRay).m_Direction.x;
          uVar55 = (pMVar30->intersectRay).m_Direction.y;
          VStack_34.x = fVar16 * (float)uVar54 * scale->x;
          VStack_34.z = fVar16 * (pMVar30->intersectRay).m_Direction.z * scale->z;
          VStack_34.y = fVar16 * (float)uVar55 * scale->y;
          fVar56 = (float)FUN_?(&VStack_34);
          vHit->distance = fVar56;
          uVar57 = (ray->m_Direction).x;
          uVar58 = (ray->m_Direction).y;
          uVar59 = (ray->m_Origin).x;
          uVar60 = (ray->m_Origin).y;
          fVar16 = (ray->m_Direction).z;
          fVar61 = (ray->m_Origin).z;
          (vHit->point).x = fVar56 * (float)uVar57 + (float)uVar59;
          (vHit->point).y = fVar56 * (float)uVar58 + (float)uVar60;
          (vHit->point).z = fVar56 * fVar16 + fVar61;
          vHit->face = FVar28;
          FUN_?(&ppIStack_18);
          return 1;
        }
      }
      goto code_?;
    }
    if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
      FUN_?();
    }
    sVar6 = voxelPos->y;
    sVar7 = voxelPos->z;
    pMVar30 = TypeInfo__MVRaycast->static_fields;
    (pMVar30->cubeBounds).m_Center.x = (float)(int)voxelPos->x;
    (pMVar30->cubeBounds).m_Center.y = (float)(int)sVar6;
    (pMVar30->cubeBounds).m_Center.z = (float)(int)sVar7;
    pMVar30 = TypeInfo__MVRaycast->static_fields;
    VStack_13.x = (pMVar30->intersectRay).m_Origin.x;
    VStack_13.y = (pMVar30->intersectRay).m_Origin.y;
    VStack_13.z = (pMVar30->intersectRay).m_Origin.z;
    pMVar30 = TypeInfo__MVRaycast->static_fields;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcRam_? = pcVar4;
    cVar25 = (*pcRam_?)(pMVar30,&VStack_13);
    if (cVar25 == '\0') {
      if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar30 = TypeInfo__MVRaycast->static_fields;
      uStack_17._0_4_ = (pMVar30->cubeBounds).m_Center.x;
      uStack_17._4_4_ = (pMVar30->cubeBounds).m_Center.y;
      ppIStack_18 = *(IEnumerator ***)&(pMVar30->cubeBounds).m_Center.z;
      plStack_19._0_4_ = (pMVar30->cubeBounds).m_Extents.y;
      plStack_19._4_4_ = (pMVar30->cubeBounds).m_Extents.z;
      uStack_62._0_4_ = (pMVar30->intersectRay).m_Origin.x;
      uStack_62._4_4_ = (pMVar30->intersectRay).m_Origin.y;
      uStack_63 = *(undefined8 *)&(pMVar30->intersectRay).m_Origin.z;
      uStack_64._0_4_ = (pMVar30->intersectRay).m_Direction.y;
      uStack_64._4_4_ = (pMVar30->intersectRay).m_Direction.z;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      pcRam_? = pcVar4;
      cVar25 = (*pcRam_?)(&uStack_62,&uStack_17,afStackX_10);
      if (cVar25 != '\0') {
        if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MVRaycast);
        }
        pMVar30 = TypeInfo__MVRaycast->static_fields;
        uVar65 = (pMVar30->intersectRay).m_Direction.x;
        uVar66 = (pMVar30->intersectRay).m_Direction.y;
        uVar67 = (pMVar30->intersectRay).m_Origin.x;
        uVar68 = (pMVar30->intersectRay).m_Origin.y;
        uStack_62._0_4_ = (pMVar30->cubeBounds).m_Center.x;
        uStack_62._4_4_ = (pMVar30->cubeBounds).m_Center.y;
        fVar61 = ((float)uVar65 * afStackX_10[0] + (float)uVar67) - (float)(undefined4)uStack_62;
        fVar16 = ((float)uVar66 * afStackX_10[0] + (float)uVar68) - (float)uStack_62._4_4_;
        fVar56 = ((pMVar30->intersectRay).m_Direction.z * afStackX_10[0] +
                 (pMVar30->intersectRay).m_Origin.z) - (pMVar30->cubeBounds).m_Center.z;
        if (afStackX_10[0] <= scaledDistance) {
          if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_no_face_found);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uVar12 = (uint)UNK_?;
          fVar69 = (float)((uint)fVar61 & uVar12);
          fVar70 = (float)((uint)fVar16 & uVar12);
          fVar71 = (float)((uint)fVar56 & uVar12);
          if ((fVar69 < fVar70) || (fVar69 < fVar71)) {
            if ((fVar70 < fVar69) || (fVar70 < fVar71)) {
              if ((fVar71 < fVar69) || (fVar71 < fVar70)) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_no_face_found,(MethodInfo *)0x0);
                uVar12 = 2;
              }
              else {
                uVar12 = (0.0 <= fVar56) + 2;
              }
            }
            else {
              uVar12 = (uint)(fVar16 < 0.0);
            }
          }
          else {
            uVar12 = (0.0 <= fVar61) + 4;
          }
          if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
            FUN_?();
          }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar5 = (*(code *)((ulonglong)*(uint *)(&UNK_? + (longlong)(int)uVar12 * 4) +
                             0xADDR))
                             ((code *)((ulonglong)
                                       *(uint *)(&UNK_? + (longlong)(int)uVar12 * 4) +
                                      0xADDR),0xADDR,TypeInfo__MVRaycast);
          return bVar5;
        }
      }
    }
  }
  return 0;
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  plVar26 = (longlong *)FUN_?();
code_?:
  FUN_?(plVar26,pa);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void HandleObjectsInsideBoxCollider(Ray, Int32, PhysicsCollisionDatasWrapper, VoxelHit ByRef,
   HashSet`1[System.Int32], Single) */

void Assembly-CSharp.dll::MVRaycast::MVRaycast_HandleObjectsInsideBoxCollider
               (Ray *ray,int32_t indexOfFirstHit,PhysicsCollisionDatasWrapper *collisionData,
               VoxelHit *voxelHit,HashSet_1_System_Int32_ *ignoreWoIds,float distance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  VStack_2.interactionFlags = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  VStack_2.point.x = 0.0;
  VStack_2.point.y = 0.0;
  VStack_2.point.z = 0.0;
  VStack_2.normal.x = 0.0;
  VStack_2.normal.y = 0.0;
  VStack_2.normal.z = 0.0;
  VStack_2.cubePos.x = 0;
  VStack_2.cubePos.y = 0;
  VStack_2.cubePos.z = 0;
  VStack_2._30_2_ = 0;
  VStack_2.face = 0;
  VStack_2.isCubeHit = 0;
  VStack_2._37_3_ = 0;
  VStack_2.woId = 0;
  VStack_2._44_4_ = 0;
  VStack_2.cube = (Cube *)0x0;
  VStack_2.distance = 0.0;
  VStack_2._60_4_ = 0;
  VStack_2.collider = (Collider *)0x0;
  VStack_2.transform = (Transform *)0x0;
  key = indexOfFirstHit;
  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
    while( true ) {
      while( true ) {
        do {
          key = key + 1;
          if ((collisionData->fields).length <= key) {
            return;
          }
          pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                              (collisionData,key,(MethodInfo *)0x0);
          if (pPVar5 == (PhysicsCollisionData *)0x0) goto code_?;
          pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                              ((pPVar5->fields).transform,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
        } while ((pMVar6 == (MVWorldObjectClient *)0x0) ||
                ((ignoreWoIds != (HashSet_1_System_Int32_ *)0x0 &&
                 (bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                           Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                     ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,
                                      (pMVar6->fields)._.id,
                                      MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                     ), bVar7 != 0))));
        lVar8 = FUN_?(pMVar6,TypeInfo__ICubeModelCollider);
        if (lVar8 != 0) break;
        pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                            (collisionData,key,(MethodInfo *)0x0);
        if (pPVar5 == (PhysicsCollisionData *)0x0) goto code_?;
        if ((pPVar5->fields).isInsideCollider == 0) {
          uVar9 = (ray->m_Origin).x;
          uVar10 = (ray->m_Origin).y;
          BStack_11.m_Center.x = (voxelHit->point).x;
          BStack_11.m_Center.y = (voxelHit->point).y;
          fVar12 = (float)uVar9 - BStack_11.m_Center.x;
          fVar13 = (ray->m_Origin).z - (voxelHit->point).z;
          fVar14 = (float)uVar10 - BStack_11.m_Center.y;
          pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                              (collisionData,key,(MethodInfo *)0x0);
          if (pPVar5 == (PhysicsCollisionData *)0x0) goto code_?;
          uVar15 = (ray->m_Origin).x;
          uVar16 = (ray->m_Origin).y;
          BStack_11.m_Center.x = (pPVar5->fields).point.x;
          BStack_11.m_Center.y = (pPVar5->fields).point.y;
          fVar17 = (ray->m_Origin).z - (pPVar5->fields).point.z;
          if (((float)uVar16 - BStack_11.m_Center.y) * ((float)uVar16 - BStack_11.m_Center.y) +
              ((float)uVar15 - BStack_11.m_Center.x) * ((float)uVar15 - BStack_11.m_Center.x) +
              fVar17 * fVar17 < fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13) {
            pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                                (collisionData,key,(MethodInfo *)0x0);
            woId = (pMVar6->fields)._.id;
            if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,pPVar5,woId,(MethodInfo *)0x0);
            return;
          }
        }
      }
      uVar18 = (ray->m_Origin).x;
      uVar19 = (ray->m_Origin).y;
      BStack_11.m_Center.x = (voxelHit->point).x;
      BStack_11.m_Center.y = (voxelHit->point).y;
      fVar12 = (float)uVar18 - BStack_11.m_Center.x;
      fVar13 = (ray->m_Origin).z - (voxelHit->point).z;
      fVar14 = (float)uVar19 - BStack_11.m_Center.y;
      pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,key,(MethodInfo *)0x0);
      if (pPVar5 == (PhysicsCollisionData *)0x0) break;
      uVar20 = (ray->m_Origin).x;
      uVar21 = (ray->m_Origin).y;
      BStack_11.m_Center.x = (pPVar5->fields).point.x;
      BStack_11.m_Center.y = (pPVar5->fields).point.y;
      fVar17 = (ray->m_Origin).z - (pPVar5->fields).point.z;
      if (fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13 <
          ((float)uVar21 - BStack_11.m_Center.y) * ((float)uVar21 - BStack_11.m_Center.y) +
          ((float)uVar20 - BStack_11.m_Center.x) * ((float)uVar20 - BStack_11.m_Center.x) +
          fVar17 * fVar17) {
        return;
      }
      pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if ((pPVar5 == (PhysicsCollisionData *)0x0) ||
         (this = (pPVar5->fields).collider, this == (Collider *)0x0)) break;
      pBVar22 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                          (&BStack_11,this,(MethodInfo *)0x0);
      uStack_3._0_4_ = (pBVar22->m_Center).x;
      uStack_3._4_4_ = (pBVar22->m_Center).y;
      uStack_4 = *(undefined8 *)&(pBVar22->m_Center).z;
      uStack_1._0_4_ = (pBVar22->m_Extents).y;
      uStack_1._4_4_ = (pBVar22->m_Extents).z;
      pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,key,(MethodInfo *)0x0);
      if (pPVar5 == (PhysicsCollisionData *)0x0) {
        FUN_?();
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      uStack_24._0_4_ = (pPVar5->fields).point.x;
      uStack_24._4_4_ = (pPVar5->fields).point.y;
      fStack_25 = (pPVar5->fields).point.z;
      pcVar23 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
        uVar26 = func_?(&UNK_?);
        FUN_?(uVar26,0);
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      pcRam_? = pcVar23;
      cVar27 = (*pcRam_?)(&uStack_3,&uStack_24);
      if (cVar27 == '\0') {
        return;
      }
      VStack_2.interactionFlags = 0;
      VStack_2.point.x = 0.0;
      VStack_2.point.y = 0.0;
      VStack_2.point.z = 0.0;
      VStack_2.normal.x = 0.0;
      VStack_2.normal.y = 0.0;
      VStack_2.normal.z = 0.0;
      VStack_2.cubePos.x = 0;
      VStack_2.cubePos.y = 0;
      VStack_2.cubePos.z = 0;
      VStack_2._30_2_ = 0;
      VStack_2.face = 0;
      VStack_2.isCubeHit = 0;
      VStack_2._37_3_ = 0;
      VStack_2.woId = 0;
      VStack_2._44_4_ = 0;
      VStack_2.cube = (Cube *)0x0;
      VStack_2.distance = 0.0;
      VStack_2._60_4_ = 0;
      VStack_2.collider = (Collider *)0x0;
      VStack_2.transform = (Transform *)0x0;
      pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,key,(MethodInfo *)0x0);
      if ((pPVar5 == (PhysicsCollisionData *)0x0) ||
         (this_00 = (pPVar5->fields).transform, this_00 == (Transform *)0x0)) break;
      chunk = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
      pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,key,(MethodInfo *)0x0);
      if (pPVar5 == (PhysicsCollisionData *)0x0) break;
      uVar26._0_4_ = (pPVar5->fields).point.x;
      uVar26._4_4_ = (pPVar5->fields).point.y;
      fVar13 = (pPVar5->fields).point.z;
      puVar28 = (undefined8 *)
                (*(pMVar6->klass->vtable).get_Scale.methodPtr)
                          (auStack_29,pMVar6,(pMVar6->klass->vtable).get_Scale.method);
      uVar30 = *puVar28;
      fVar12 = *(float *)(puVar28 + 1);
      if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar31 = TypeInfo__ICubeModelCollider;
      BStack_11.m_Center.x = (ray->m_Origin).x;
      BStack_11.m_Center.y = (ray->m_Origin).y;
      BStack_11.m_Center.z = (ray->m_Origin).z;
      BStack_11.m_Extents.x = (ray->m_Direction).x;
      BStack_11.m_Extents.y = (ray->m_Direction).y;
      BStack_11.m_Extents.z = (ray->m_Direction).z;
      VStack_32._0_8_ = uVar30;
      VStack_32.z = fVar12;
      VStack_33._0_8_ = uVar26;
      VStack_33.z = fVar13;
      pIVar34 = (ICubeModelCollider *)FUN_?(pMVar6,TypeInfo__ICubeModelCollider);
      if (pIVar34 == (ICubeModelCollider *)0x0) {
        FUN_?(pMVar6,pIVar31);
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      bVar7 = MVRaycast_GetCellOnRay
                         ((Ray *)&BStack_11,&VStack_2,chunk,pIVar34,&VStack_33,distance,
                          &VStack_32,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        uVar35 = (ray->m_Origin).x;
        uVar36 = (ray->m_Origin).y;
        uVar37 = (voxelHit->point).x;
        uVar38 = (voxelHit->point).y;
        fVar12 = (ray->m_Origin).z - (voxelHit->point).z;
        BStack_11.m_Center.x = (ray->m_Origin).x;
        BStack_11.m_Center.y = (ray->m_Origin).y;
        fVar13 = (ray->m_Origin).z - VStack_2.point.z;
        if ((BStack_11.m_Center.y - VStack_2.point.y) *
            (BStack_11.m_Center.y - VStack_2.point.y) +
            (BStack_11.m_Center.x - VStack_2.point.x) *
            (BStack_11.m_Center.x - VStack_2.point.x) + fVar13 * fVar13 <
            ((float)uVar36 - (float)uVar38) * ((float)uVar36 - (float)uVar38) +
            ((float)uVar35 - (float)uVar37) * ((float)uVar35 - (float)uVar37) + fVar12 * fVar12) {
          pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                              (collisionData,key,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar31 = TypeInfo__ICubeModelCollider;
          pIVar34 = (ICubeModelCollider *)FUN_?(pMVar6,TypeInfo__ICubeModelCollider);
          if (pIVar34 == (ICubeModelCollider *)0x0) {
            FUN_?(pMVar6,pIVar31);
            pcVar23 = (code *)swi(3);
            (*pcVar23)();
            return;
          }
          MVRaycast_SetFoundHitVariables(&VStack_2,pPVar5,pIVar34,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
                    (voxelHit,&VStack_2,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Boolean HitDetectOnWo(Ray, Int32, MVWorldObjectClient, PhysicsCollisionDatasWrapper, Boolean,
   VoxelHit ByRef, HashSet`1[System.Int32], Single) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_HitDetectOnWo
               (Ray *ray,int32_t i,MVWorldObjectClient *wo,
               PhysicsCollisionDatasWrapper *collisionData,bool handleObjectsInsideBoxCollider,
               VoxelHit *voxelHit,HashSet_1_System_Int32_ *ignoreWoIds,float distance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (voxelHit->point).x = 0.0;
  (voxelHit->point).y = 0.0;
  *(undefined8 *)&(voxelHit->point).z = 0;
  (voxelHit->normal).y = 0.0;
  (voxelHit->normal).z = 0.0;
  *(undefined8 *)&voxelHit->cubePos = 0;
  voxelHit->face = 0;
  voxelHit->isCubeHit = 0;
  *(undefined3 *)&voxelHit->field_0x25 = 0;
  *(undefined8 *)&voxelHit->woId = 0;
  voxelHit->cube = (Cube *)0x0;
  *(undefined8 *)&voxelHit->distance = 0;
  voxelHit->collider = (Collider *)0x0;
  voxelHit->transform = (Transform *)0x0;
  voxelHit->interactionFlags = 0;
  lVar1 = FUN_?(wo,TypeInfo__ICubeModelCollider);
  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
    if (lVar1 == 0) {
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
          if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                    (voxelHit,pPVar2,woId,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
    else {
      pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,i,(MethodInfo *)0x0);
      if ((pPVar2 != (PhysicsCollisionData *)0x0) &&
         (this = (pPVar2->fields).transform, this != (Transform *)0x0)) {
        chunk = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
        pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           (collisionData,i,(MethodInfo *)0x0);
        if (pPVar2 != (PhysicsCollisionData *)0x0) {
          uVar3._0_4_ = (pPVar2->fields).point.x;
          uVar3._4_4_ = (pPVar2->fields).point.y;
          fVar4 = (pPVar2->fields).point.z;
          if (wo != (MVWorldObjectClient *)0x0) {
            puVar5 = (undefined8 *)
                     (*(wo->klass->vtable).get_Scale.methodPtr)
                               (&VStack_6,wo,(wo->klass->vtable).get_Scale.method);
            VStack_7._0_8_ = *puVar5;
            VStack_7.z = *(float *)(puVar5 + 1);
            if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
              FUN_?();
            }
            pIVar8 = TypeInfo__ICubeModelCollider;
            aRStack_9[0].m_Origin.x = (ray->m_Origin).x;
            aRStack_9[0].m_Origin.y = (ray->m_Origin).y;
            aRStack_9[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
            aRStack_9[0].m_Direction.y = (ray->m_Direction).y;
            aRStack_9[0].m_Direction.z = (ray->m_Direction).z;
            VStack_6._0_8_ = uVar3;
            VStack_6.z = fVar4;
            pIVar10 = (ICubeModelCollider *)FUN_?(wo,TypeInfo__ICubeModelCollider);
            if (pIVar10 == (ICubeModelCollider *)0x0) {
              FUN_?(wo,pIVar8);
              pcVar11 = (code *)swi(3);
              bVar12 = (*pcVar11)();
              return bVar12;
            }
            bVar12 = MVRaycast_GetCellOnRay
                              (aRStack_9,voxelHit,chunk,pIVar10,&VStack_6,distance,&VStack_7,
                               (MethodInfo *)0x0);
            if (bVar12 == 0) {
              return 0;
            }
            pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                               (collisionData,i,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
              FUN_?();
            }
            pIVar8 = TypeInfo__ICubeModelCollider;
            pIVar10 = (ICubeModelCollider *)FUN_?(wo,TypeInfo__ICubeModelCollider);
            if (pIVar10 != (ICubeModelCollider *)0x0) {
              MVRaycast_SetFoundHitVariables(voxelHit,pPVar2,pIVar10,(MethodInfo *)0x0);
              if (handleObjectsInsideBoxCollider == 0) {
                return 1;
              }
              if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
                FUN_?();
              }
              aRStack_9[0].m_Origin.x = (ray->m_Origin).x;
              aRStack_9[0].m_Origin.y = (ray->m_Origin).y;
              aRStack_9[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
              aRStack_9[0].m_Direction.y = (ray->m_Direction).y;
              aRStack_9[0].m_Direction.z = (ray->m_Direction).z;
              MVRaycast_HandleObjectsInsideBoxCollider
                        (aRStack_9,i,collisionData,voxelHit,ignoreWoIds,distance,(MethodInfo *)0x0)
              ;
              return 1;
            }
            FUN_?(wo,pIVar8);
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean IsWithinDistance(Single, Vector3, IntVector) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_IsWithinDistance
               (float distance,Vector3 *localOrigin,IntVector *voxelPos,MethodInfo *method)

{
  if (distance == _UNK_?) {
    bVar1 = true;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar2 = _UNK_?;
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = (pVVar3->oneVector).x;
    fVar5 = (float)uVar4 * _UNK_?;
    fVar6 = (pVVar3->oneVector).y * _UNK_?;
    fVar7 = (pVVar3->oneVector).z * _UNK_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8 = (pVVar3->oneVector).x;
    fVar9 = (pVVar3->oneVector).y * fVar2;
    fVar10 = (pVVar3->oneVector).z * fVar2;
    uVar11 = localOrigin->x;
    uVar12 = localOrigin->y;
    uVar13 = voxelPos->x;
    uVar14 = voxelPos->y;
    fVar15 = (float)(int)voxelPos->z - localOrigin->z;
    bVar1 = ((float)(int)(short)uVar14 - (float)uVar12) * ((float)(int)(short)uVar14 - (float)uVar12) +
            ((float)(int)(short)uVar13 - (float)uVar11) * ((float)(int)(short)uVar13 - (float)uVar11) +
            fVar15 * fVar15 <=
            (fVar9 * fVar9 + (float)uVar8 * fVar2 * (float)uVar8 * fVar2 + fVar10 * fVar10) *
            distance + distance * distance + fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7;
  }
  return bVar1;
}


/* Boolean MVHit(Ray, MVWorldObjectClient, VoxelHit ByRef, Single) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit
               (Ray *ray,MVWorldObjectClient *wo,VoxelHit *voxelHit,float distance,
               MethodInfo *method)

{
  hitInfo = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class *
            )voxelHit;
  pRStack_1 = ray;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Add_UnityEngine__RaycastHit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__ToArray__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__ToArray__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PhysicsCollisionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_collider_on_wo_of_type_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Maybe_a_recursive_check_of_the_c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Remember_to_test_positive_infini);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppIStack_2 = (Il2CppClass **)0x0;
  ppIStack_3 = (Il2CppClass **)0x0;
  _Stack_58.dummy = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
  pSVar4 = (String *)0x0;
  pKStack_5 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                *)0x0;
  auStack_6._0_8_ = (Il2CppClass *)0x0;
  auStack_6._8_8_ = (Il2CppClass *)0x0;
  auStack_6._16_8_ = (Il2CppGenericClass *)0x0;
  auStack_6._24_8_ = (Il2CppMetadataTypeHandle)0x0;
  auStack_6._32_8_ = (void *)0x0;
  auStack_6._40_4_ = 0;
  (voxelHit->point).x = 0.0;
  (voxelHit->point).y = 0.0;
  *(undefined8 *)&(voxelHit->point).z = 0;
  (voxelHit->normal).y = 0.0;
  (voxelHit->normal).z = 0.0;
  *(undefined8 *)&voxelHit->cubePos = 0;
  voxelHit->face = 0;
  voxelHit->isCubeHit = 0;
  *(undefined3 *)&voxelHit->field_0x25 = 0;
  *(undefined8 *)&voxelHit->woId = 0;
  voxelHit->cube = (Cube *)0x0;
  *(undefined8 *)&voxelHit->distance = 0;
  voxelHit->collider = (Collider *)0x0;
  voxelHit->transform = (Transform *)0x0;
  voxelHit->interactionFlags = 0;
  if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVRaycast);
  }
  pLVar7 = TypeInfo__MVRaycast->static_fields->sortedHits;
  if (pLVar7 != (List_1_UnityEngine_RaycastHit_ *)0x0) {
    piVar8 = &(pLVar7->fields)._version;
    *piVar8 = *piVar8 + 1;
    (pLVar7->fields)._size = 0;
    lVar9 = FUN_?(wo);
    pIVar10 = TypeInfo__ICubeModelCollider;
    if (lVar9 == 0) {
      if (wo != (MVWorldObjectClient *)0x0) {
        pCVar11 = (wo->fields).collider;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pCVar11 == (Collider *)0x0) {
code_?:
          plVar12 = (longlong *)FUN_?(&(wo->klass->_0).byval_arg);
          str0 = StringLiteral_No_collider_on_wo_of_type_;
          if (plVar12 != (longlong *)0x0) {
            pSVar4 = (String *)
                      (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          }
          pSVar4 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar4,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar4,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Maybe_a_recursive_check_of_the_c,(MethodInfo *)0x0);
          return 0;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pCVar11->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Remember_to_test_positive_infini,(MethodInfo *)0x0);
        pCVar11 = (wo->fields).collider;
        if (pCVar11 != (Collider *)0x0) {
          auStack_6._48_8_ = *(undefined8 *)&ray->m_Origin;
          puStack_13 = *(undefined1 **)&(ray->m_Origin).z;
          pIStack_14 = *(Il2CppClass **)&(ray->m_Direction).y;
          hitInfo = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                     *)auStack_6;
          bVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                            (pCVar11,(Ray *)(auStack_6 + 0x30),(RaycastHit *)hitInfo,distance,
                             (MethodInfo *)0x0);
          if (bVar15 == 0) {
            return 0;
          }
          this_00 = (PhysicsCollisionData *)FUN_?(TypeInfo__PhysicsCollisionData);
          if (this_00 != (PhysicsCollisionData *)0x0) {
            auStack_16 = (undefined1  [8])auStack_6._0_8_;
            pIStack_17 = (Il2CppClass *)auStack_6._8_8_;
            pIStack_18 = (Il2CppGenericClass *)auStack_6._16_8_;
            p_Stack_a0 = (Il2CppMetadataTypeHandle)auStack_6._24_8_;
            _Stack_98 = (_union_86)auStack_6._32_8_;
            iStack_19 = auStack_6._40_4_;
            PhysicsCollisionData::PhysicsCollisionData_Set
                      (this_00,(RaycastHit *)auStack_16,(MethodInfo *)0x0);
            woId = (wo->fields)._.id;
            if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,this_00,woId,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
    else if (wo != (MVWorldObjectClient *)0x0) {
      lVar9 = FUN_?(wo,TypeInfo__ICubeModelCollider);
      unaff_RDI = TypeInfo__ICubeModelCollider;
      if (lVar9 == 0) {
        FUN_?(wo,pIVar10);
        pcVar20 = (code *)swi(3);
        bVar15 = (*pcVar20)();
        return bVar15;
      }
      plVar12 = (longlong *)FUN_?(wo,TypeInfo__ICubeModelCollider);
      if (plVar12 == (longlong *)0x0) {
        FUN_?(wo,unaff_RDI);
        pcVar20 = (code *)swi(3);
        bVar15 = (*pcVar20)();
        return bVar15;
      }
      lVar9 = *plVar12;
      if (*(ushort *)(lVar9 + 0x12e) != 0) {
        uVar21 = 0;
        do {
          if (*(ICubeModelCollider__Class **)
               (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar21 * 0x10) ==
              TypeInfo__ICubeModelCollider) {
            puVar22 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) + 4) *
                       0x10 + 0x138 + lVar9);
            goto code_?;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < *(ushort *)(lVar9 + 0x12e));
      }
      puVar22 = (undefined8 *)FUN_?(plVar12,TypeInfo__ICubeModelCollider,4);
code_?:
      hitInfo = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                 *)*puVar22;
      lVar9 = (*(code *)hitInfo)(plVar12);
      if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar23 = TypeInfo__MVRaycast->static_fields->colliderList;
      if (pLVar23 != (List_1_UnityEngine_Collider_ *)0x0) {
        piVar8 = &(pLVar23->fields)._version;
        *piVar8 = *piVar8 + 1;
        length = (pLVar23->fields)._size;
        hitInfo = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                   *)(ulonglong)length;
        (pLVar23->fields)._size = 0;
        if (0 < (int)length) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar23->fields)._items,0,length,(MethodInfo *)0x0);
        }
        if (lVar9 != 0) {
          pKStack_24 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                         *)FUN_?(0,TypeInfo__System__Collections__IEnumerable,lVar9);
          auStack_6._48_8_ = (void *)0x0;
          puStack_13 = (undefined1 *)&pKStack_24;
          pIStack_14 = (Il2CppClass *)&stack0xffffffffffffff88;
          while (pKStack_24 !=
                 (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                  *)0x0) {
            hitInfo = pKStack_24;
            cVar25 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
            pKVar26 = pKStack_24;
            if (cVar25 == '\0') {
              pKVar26 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                         *)FUN_?(pKStack_24);
              pKStack_5 = pKVar26;
              if (pKVar26 !=
                  (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                   *)0x0) {
                FUN_?(0,TypeInfo__System__IDisposable,pKVar26);
                hitInfo = pKVar26;
              }
              if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MVRaycast);
              }
              this = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                      *)TypeInfo__MVRaycast->static_fields->colliderList;
              if (this != (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                           *)0x0) {
                overlapResult =
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR
                     ::RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                     List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                               (this,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__ToArray__
                               );
                pMVar27 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__ToArray__;
                pLVar7 = TypeInfo__MVRaycast->static_fields->sortedHits;
                if (pLVar7 != (List_1_UnityEngine_RaycastHit_ *)0x0) {
                  pIVar28 = MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__ToArray__
                           ->klass->rgctx_data;
                  if ((pLVar7->fields)._size == 0) {
                    pvVar29 = pIVar28[2].rgctxDataDummy;
                    if ((*(byte *)((longlong)pvVar29 + 0x135) & 1) == 0) {
                      pvVar29 = (void *)FUN_?(pvVar29);
                    }
                    if (*(int *)((longlong)pvVar29 + 0xe4) == 0) {
                      FUN_?(pvVar29);
                    }
                    pIVar30 = pMVar27->klass->rgctx_data[2].klass;
                    if ((pIVar30->field_0x135 & 1) == 0) {
                      pIVar30 = (Il2CppClass *)FUN_?(pIVar30);
                    }
                    hits = *(RaycastHit__Array **)pIVar30->static_fields;
                  }
                  else {
                    pvVar29 = pIVar28[3].rgctxDataDummy;
                    if ((*(byte *)((longlong)pvVar29 + 0x135) & 1) == 0) {
                      pvVar29 = (void *)FUN_?(pvVar29);
                    }
                    hits = (RaycastHit__Array *)FUN_?(pvVar29);
                    mscorlib.dll::System::Array::Array_Copy_3
                              ((Array *)(pLVar7->fields)._items,0,(Array *)hits,0,
                               (pLVar7->fields)._size,(MethodInfo *)0x0);
                  }
                  if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  uStack_31._0_4_ = (pRStack_1->m_Origin).x;
                  uStack_31._4_4_ = (pRStack_1->m_Origin).y;
                  fStack_32 = (pRStack_1->m_Origin).z;
                  hitInfo = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                             *)&uStack_31;
                  collisionData =
                       SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData
                                 ((Collider__Array *)overlapResult,hits,(Vector3 *)hitInfo,
                                  (MethodInfo *)0x0);
                  unaff_RDI = (ICubeModelCollider__Class *)0x0;
                  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
                    while( true ) {
                      i = (int)pSVar4;
                      if ((collisionData->fields).length <= i) {
                        return 0;
                      }
                      if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      auStack_6._0_8_ = *(undefined8 *)&ray->m_Origin;
                      auStack_6._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                      auStack_6._16_8_ = *(undefined8 *)&(ray->m_Direction).y;
                      bVar15 = MVRaycast_HitDetectOnWo
                                        ((Ray *)auStack_6,i,wo,collisionData,0,voxelHit,
                                         (HashSet_1_System_Int32_ *)0x0,distance,(MethodInfo *)0x0);
                      if (bVar15 != 0) break;
                      pSVar4 = (String *)(ulonglong)(i + 1);
                    }
                    return 1;
                  }
                }
              }
              goto code_?;
            }
            if (pKStack_24 ==
                (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                 *)0x0) goto code_?;
            pIVar33 = (pKStack_24->_0).image;
            uVar21 = *(ushort *)((longlong)&pIVar33[4].nameNoExt + 6);
            if (uVar21 != 0) {
              uVar34 = 0;
              do {
                if (*(IEnumerator__Class **)
                     (*(longlong *)&pIVar33[2].customAttributeCount + (ulonglong)uVar34 * 0x10) ==
                    TypeInfo__System__Collections__IEnumerator) {
                  puVar35 = &pIVar33[4].typeCount +
                            (longlong)
                            (*(int *)(*(longlong *)&pIVar33[2].customAttributeCount + 8 +
                                     (ulonglong)uVar34 * 0x10) + 1) * 4;
                  goto code_?;
                }
                uVar34 = uVar34 + 1;
              } while (uVar34 < uVar21);
            }
            puVar35 = (uint32_t *)
                      FUN_?(pKStack_24,TypeInfo__System__Collections__IEnumerator,1);
code_?:
            plVar12 = (longlong *)(**(code **)puVar35)(pKVar26,*(undefined8 *)(puVar35 + 2));
            if (plVar12 == (longlong *)0x0) goto code_?;
            hitInfo = 
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ;
            if (*(Il2CppClass **)(*plVar12 + 0x40) !=
                (
                TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                ->_0).element_class) goto code_?;
            auStack_16 = (undefined1  [8])plVar12[2];
            pIStack_17 = (Il2CppClass *)plVar12[3];
            pIStack_18 = (Il2CppGenericClass *)plVar12[4];
            p_Stack_a0 = (Il2CppMetadataTypeHandle)plVar12[5];
            pFStack_36 = (FieldInfo *)plVar12[8];
            pEStack_37 = (EventInfo *)plVar12[9];
            unaff_RDI = (ICubeModelCollider__Class *)plVar12[6];
            if (unaff_RDI == (ICubeModelCollider__Class *)0x0) goto code_?;
            acStack_38[0] = '\0';
            auStack_6._0_8_ = *(undefined8 *)&ray->m_Origin;
            auStack_6._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
            auStack_6._16_8_ = *(undefined8 *)&(ray->m_Direction).y;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            auStack_16 = (undefined1  [8])0x0;
            pIStack_17 = (Il2CppClass *)0x0;
            pIStack_18 = (Il2CppGenericClass *)0x0;
            p_Stack_a0 = (Il2CppMetadataTypeHandle)0x0;
            _Stack_98 = (_union_86)0x0;
            iStack_19 = 0;
            pvVar29 = (((Collider__Fields *)&(unaff_RDI->_0).name)->_)._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) goto code_?;
            pcVar20 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0))
            goto code_?;
            pcRam_? = pcVar20;
            (*pcRam_?)(pvVar29,auStack_6,distance,acStack_38,auStack_16);
            if (acStack_38[0] == '\0') {
              hitInfo = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                         *)0x0;
              pBVar39 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                  ((Bounds *)auStack_6,(Collider *)unaff_RDI,(MethodInfo *)0x0);
              ppIStack_2 = *(Il2CppClass ***)&pBVar39->m_Center;
              ppIStack_3 = *(Il2CppClass ***)&(pBVar39->m_Center).z;
              _Stack_58 = *(_union_86 *)&(pBVar39->m_Extents).y;
              uStack_31._0_4_ = (ray->m_Origin).x;
              uStack_31._4_4_ = (ray->m_Origin).y;
              fStack_32 = (ray->m_Origin).z;
              pcVar20 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0))
              goto code_?;
              pcRam_? = pcVar20;
              cVar25 = (*pcRam_?)();
              if (cVar25 != '\0') {
                if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__MVRaycast);
                }
                pLVar23 = TypeInfo__MVRaycast->static_fields->colliderList;
                if (pLVar23 == (List_1_UnityEngine_Collider_ *)0x0) goto code_?;
                FUN_?(pLVar23,unaff_RDI);
              }
            }
            else {
              if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MVRaycast);
              }
              pLVar7 = TypeInfo__MVRaycast->static_fields->sortedHits;
              if (pLVar7 == (List_1_UnityEngine_RaycastHit_ *)0x0) goto code_?;
              auStack_6._0_8_ = auStack_16;
              auStack_6._8_8_ = pIStack_17;
              auStack_6._16_8_ = pIStack_18;
              auStack_6._24_8_ = p_Stack_a0;
              auStack_6._32_8_ = _Stack_98;
              auStack_6._40_4_ = iStack_19;
              FUN_?(pLVar7,auStack_6,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Add_UnityEngine__RaycastHit_
                           );
            }
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  uVar40 = func_?(&UNK_?);
  FUN_?(uVar40);
code_?:
  uVar40 = func_?(&UNK_?);
  FUN_?(uVar40);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_RDI,(MethodInfo *)0x0);
code_?:
  plVar12 = (longlong *)FUN_?();
code_?:
  FUN_?(plVar12,hitInfo);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  bVar15 = (*pcVar20)();
  return bVar15;
}


/* List`1[VoxelHit] MVHitAll(Ray, Single, Int32, HashSet`1[System.Int32]) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHitAll
          (Ray *ray,float distance,int32_t layerMask,HashSet_1_System_Int32_ *ignoreWoIds,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_1[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_1[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_1[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_1[0].m_Direction.z = (ray->m_Direction).z;
  pLVar2 = MVRaycast_MVHit_2(aRStack_1,1,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return pLVar2;
}


/* Boolean MVHit(Ray, VoxelHit ByRef, Single, Int32, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit_1
               (Ray *ray,VoxelHit *voxelHit,float distance,int32_t layerMask,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hit_counter_greater_than_1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (voxelHit->point).x = 0.0;
  (voxelHit->point).y = 0.0;
  *(undefined8 *)&(voxelHit->point).z = 0;
  (voxelHit->normal).y = 0.0;
  (voxelHit->normal).z = 0.0;
  *(undefined8 *)&voxelHit->cubePos = 0;
  voxelHit->face = 0;
  voxelHit->isCubeHit = 0;
  *(undefined3 *)&voxelHit->field_0x25 = 0;
  *(undefined8 *)&voxelHit->woId = 0;
  voxelHit->cube = (Cube *)0x0;
  *(undefined8 *)&voxelHit->distance = 0;
  voxelHit->collider = (Collider *)0x0;
  voxelHit->transform = (Transform *)0x0;
  voxelHit->interactionFlags = 0;
  if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_1[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_1[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_1[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_1[0].m_Direction.z = (ray->m_Direction).z;
  pLVar2 = MVRaycast_MVHit_2(aRStack_1,0,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  if (pLVar2 != (List_1_VoxelHit_ *)0x0) {
    if ((pLVar2->fields)._size != 0) {
      if ((pLVar2->fields)._size < 2) {
        if ((pLVar2->fields)._size == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        pVVar5 = (pLVar2->fields)._items;
        if (pVVar5 != (VoxelHit__Array *)0x0) {
          if ((int)pVVar5->max_length != 0) {
            bVar6 = iRam_? != 0;
            fVar7 = pVVar5->vector[0].point.y;
            uVar8 = *(undefined8 *)&pVVar5->vector[0].point.z;
            fVar9 = pVVar5->vector[0].normal.y;
            fVar10 = pVVar5->vector[0].normal.z;
            IVar11 = pVVar5->vector[0].cubePos;
            uVar12 = *(undefined2 *)&pVVar5->vector[0].field_0x1e;
            iVar13 = pVVar5->vector[0].face;
            bVar4 = pVVar5->vector[0].isCubeHit;
            uVar14 = *(undefined3 *)&pVVar5->vector[0].field_0x25;
            iVar15 = pVVar5->vector[0].woId;
            uVar16 = *(undefined4 *)&pVVar5->vector[0].field_0x2c;
            pCVar17 = pVVar5->vector[0].cube;
            fVar18 = pVVar5->vector[0].distance;
            uVar19 = *(undefined4 *)&pVVar5->vector[0].field_0x3c;
            pCVar20 = pVVar5->vector[0].collider;
            pTVar21 = pVVar5->vector[0].transform;
            iVar22 = pVVar5->vector[0].interactionFlags;
            (voxelHit->point).x = pVVar5->vector[0].point.x;
            (voxelHit->point).y = fVar7;
            *(undefined8 *)&(voxelHit->point).z = uVar8;
            (voxelHit->normal).y = fVar9;
            (voxelHit->normal).z = fVar10;
            voxelHit->cubePos = IVar11;
            *(undefined2 *)&voxelHit->field_0x1e = uVar12;
            voxelHit->face = iVar13;
            voxelHit->isCubeHit = bVar4;
            *(undefined3 *)&voxelHit->field_0x25 = uVar14;
            voxelHit->woId = iVar15;
            *(undefined4 *)&voxelHit->field_0x2c = uVar16;
            voxelHit->cube = pCVar17;
            voxelHit->distance = fVar18;
            *(undefined4 *)&voxelHit->field_0x3c = uVar19;
            voxelHit->collider = pCVar20;
            voxelHit->transform = pTVar21;
            voxelHit->interactionFlags = iVar22;
            if (bVar6) {
              uVar23 = (uint)((ulonglong)&voxelHit->cube >> 0xc);
              uVar24 = (ulonglong)((uVar23 & 0x1fffff) >> 6);
              do {
                uVar25 = *(ulonglong *)(uVar24 * 8 + 0xADDR);
                puVar26 = (ulonglong *)(uVar24 * 8 + 0xADDR);
                LOCK();
                bVar6 = uVar25 == *puVar26;
                if (bVar6) {
                  *puVar26 = uVar25 | 1L << (uVar23 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
            return 1;
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        goto code_?;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* List`1[VoxelHit] MVHit(Ray, Boolean, Single, Int32, HashSet`1[System.Int32]) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit_2
          (Ray *ray,bool all,float distance,int32_t layerMask,HashSet_1_System_Int32_ *ignoreWoIds,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.interactionFlags = 0;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVRaycast);
  }
  pLVar2 = TypeInfo__MVRaycast->static_fields->voxelHits;
  if (pLVar2 != (List_1_VoxelHit_ *)0x0) {
    iVar3 = (pLVar2->fields)._size;
    key = 0;
    piVar4 = &(pLVar2->fields)._version;
    *piVar4 = *piVar4 + 1;
    (pLVar2->fields)._size = 0;
    if (0 < iVar3) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar2->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    RStack_5.m_Origin.x = (ray->m_Direction).x;
    RStack_5.m_Origin.y = (ray->m_Direction).y;
    fVar6 = (ray->m_Direction).z;
    if (RStack_5.m_Origin.y * RStack_5.m_Origin.y +
        RStack_5.m_Origin.x * RStack_5.m_Origin.x + fVar6 * fVar6 != 0.0) {
      if (all != 0) {
        if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MVRaycast);
        }
        if (TypeInfo__MVRaycast->static_fields->foundWos == (HashSet_1_System_Int32_ *)0x0)
        goto code_?;
        FUN_?();
      }
      if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      pRVar7 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
      if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar8._0_4_ = (ray->m_Origin).x;
      uVar8._4_4_ = (ray->m_Origin).y;
      RStack_5.m_Origin.x = (ray->m_Origin).x;
      RStack_5.m_Origin.y = (ray->m_Origin).y;
      fVar6 = (ray->m_Origin).z;
      RStack_5.m_Direction.x = (ray->m_Direction).x;
      uVar9 = (ray->m_Direction).y;
      uVar10 = (ray->m_Direction).z;
      RStack_5.m_Origin.z = fVar6;
      RStack_5.m_Direction.y = (float)uVar9;
      RStack_5.m_Direction.z = (float)uVar10;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Physics);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
        FUN_?();
      }
      aPStack_11[0].m_index = 0;
      aPStack_11[0].m_version = 1;
      VStack_12.y = RStack_5.m_Direction.y;
      VStack_12.x = RStack_5.m_Direction.x;
      VStack_12.z = RStack_5.m_Direction.z;
      RStack_5.m_Origin._0_8_ = uVar8;
      RStack_5.m_Origin.z = fVar6;
      iVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::PhysicsScene::PhysicsScene_Raycast_2
                         (aPStack_11,&RStack_5.m_Origin,&VStack_12,pRVar7,distance,layerMask,
                          QueryTriggerInteraction__Enum_UseGlobal,(MethodInfo *)0x0);
      RStack_5.m_Origin.z = (ray->m_Origin).z;
      RStack_5.m_Origin.x = (ray->m_Origin).x;
      RStack_5.m_Origin.y = (ray->m_Origin).y;
      overlapAmount =
           UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                     (&RStack_5.m_Origin,0.0,
                      TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                      layerMask,(MethodInfo *)0x0);
      overlapResult = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      pRVar7 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
      if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      RStack_5.m_Origin.z = (ray->m_Origin).z;
      RStack_5.m_Origin.x = (ray->m_Origin).x;
      RStack_5.m_Origin.y = (ray->m_Origin).y;
      this_01 = SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
                          (overlapAmount,overlapResult,iVar3,pRVar7,&RStack_5.m_Origin,
                           (MethodInfo *)0x0);
      if (this_01 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
      for (; key < (this_01->fields).length; key = key + 1) {
        pPVar13 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                            (this_01,key,(MethodInfo *)0x0);
        if (pPVar13 == (PhysicsCollisionData *)0x0) goto code_?;
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                       ((pPVar13->fields).transform,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((wo != (MVWorldObjectClient *)0x0) &&
           ((ignoreWoIds == (HashSet_1_System_Int32_ *)0x0 ||
            (bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                      HashSet_1_System_Int32Enum__Contains
                                ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,(wo->fields)._.id,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                ), bVar14 == 0)))) {
          if (all != 0) {
            if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__MVRaycast);
            }
            this = (HashSet_1_System_Int32Enum_ *)TypeInfo__MVRaycast->static_fields->foundWos;
            if (this == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
            bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                     HashSet_1_System_Int32Enum__Contains
                               (this,(wo->fields)._.id,
                                MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                               );
            if (bVar14 != 0) goto code_?;
          }
          if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
            FUN_?();
          }
          RStack_5.m_Origin.x = (ray->m_Origin).x;
          RStack_5.m_Origin.y = (ray->m_Origin).y;
          uVar8 = *(undefined8 *)&(ray->m_Origin).z;
          uVar15 = (ray->m_Direction).y;
          uVar16 = (ray->m_Direction).z;
          RStack_5.m_Origin.z = (float)uVar8;
          RStack_5.m_Direction.x = (float)((ulonglong)uVar8 >> 0x20);
          RStack_5.m_Direction.y = (float)uVar15;
          RStack_5.m_Direction.z = (float)uVar16;
          bVar14 = MVRaycast_HitDetectOnWo
                             (&RStack_5,key,wo,this_01,all ^ 1,&VStack_1,ignoreWoIds,distance,
                              (MethodInfo *)0x0);
          if (bVar14 != 0) {
            if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__MVRaycast);
            }
            pLVar2 = TypeInfo__MVRaycast->static_fields->voxelHits;
            if (pLVar2 == (List_1_VoxelHit_ *)0x0) goto code_?;
            aVStack_17[0].x = VStack_1.point.x;
            aVStack_17[0].y = VStack_1.point.y;
            aVStack_17[0].z = VStack_1.point.z;
            aVStack_17[1].x = VStack_1.normal.x;
            aVStack_17[1].y = VStack_1.normal.y;
            aVStack_17[1].z = VStack_1.normal.z;
            aVStack_17[2]._0_8_ = VStack_1._24_8_;
            aVStack_17._32_8_ = VStack_1._32_8_;
            aVStack_17[3].y = (float)VStack_1.woId;
            aVStack_17[3].z = (float)VStack_1._44_4_;
            pCStack_18 = VStack_1.cube;
            fStack_19 = VStack_1.distance;
            uStack_20 = VStack_1._60_4_;
            uStack_21 = VStack_1.collider._0_4_;
            uStack_22 = VStack_1.collider._4_4_;
            uStack_23 = VStack_1.transform._0_4_;
            uStack_24 = VStack_1.transform._4_4_;
            iStack_25 = VStack_1.interactionFlags;
            FUN_?(pLVar2,aVStack_17,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
            this_00 = TypeInfo__MVRaycast->static_fields->foundWos;
            if (this_00 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      (this_00,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
            if (all == 0) break;
          }
        }
code_?:
      }
    }
    if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVRaycast);
    }
    return TypeInfo__MVRaycast->static_fields->voxelHits;
  }
code_?:
  FUN_?();
  pcVar26 = (code *)swi(3);
  pLVar2 = (List_1_VoxelHit_ *)(*pcVar26)();
  return pLVar2;
}


/* Void SetFoundHitVariables(VoxelHit ByRef, PhysicsCollisionData, ICubeModelCollider) */

void Assembly-CSharp.dll::MVRaycast::MVRaycast_SetFoundHitVariables
               (VoxelHit *voxelHit,PhysicsCollisionData *collisionData,
               ICubeModelCollider *cubeModelBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  voxelHit->isCubeHit = 1;
  if (cubeModelBase != (ICubeModelCollider *)0x0) {
    iVar1 = FUN_?(0,TypeInfo__ICubeModelCollider,cubeModelBase);
    voxelHit->woId = iVar1;
    this = (GameObject *)FUN_?(1,TypeInfo__ICubeModelCollider,cubeModelBase);
    if (this != (GameObject *)0x0) {
      pCVar2 = (Collider *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this,
                          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                         );
      bVar3 = iRam_? != 0;
      voxelHit->collider = pCVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&voxelHit->collider >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pTVar8 = (Transform *)FUN_?(2,TypeInfo__ICubeModelCollider,cubeModelBase);
      bVar3 = iRam_? != 0;
      voxelHit->transform = pTVar8;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&voxelHit->transform >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      iVar9 = FUN_?(3,TypeInfo__ICubeModelCollider,cubeModelBase);
      voxelHit->interactionFlags = iVar9;
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVRaycast() */

void Assembly-CSharp.dll::MVRaycast::MVRaycast__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<VoxelHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).x;
  fVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar1->oneVector).x;
  pMVar6 = TypeInfo__MVRaycast->static_fields;
  fVar7 = (float)uVar5 * _UNK_?;
  fVar8 = (pVVar1->oneVector).y * _UNK_?;
  fVar9 = (pVVar1->oneVector).z * _UNK_?;
  (pMVar6->cubeBounds).m_Center.x = fVar2;
  (pMVar6->cubeBounds).m_Center.y = fVar3;
  (pMVar6->cubeBounds).m_Center.z = fVar4;
  (pMVar6->cubeBounds).m_Extents.x = fVar7;
  (pMVar6->cubeBounds).m_Extents.y = fVar8;
  (pMVar6->cubeBounds).m_Extents.z = fVar9;
  pMVar6 = TypeInfo__MVRaycast->static_fields;
  (pMVar6->intersectRay).m_Origin.x = 0.0;
  (pMVar6->intersectRay).m_Origin.y = 0.0;
  *(undefined8 *)&(pMVar6->intersectRay).m_Origin.z = 0;
  (pMVar6->intersectRay).m_Direction.y = 0.0;
  (pMVar6->intersectRay).m_Direction.z = 0.0;
  pHVar10 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar10,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar11 = iRam_? != 0;
  TypeInfo__MVRaycast->static_fields->foundWos = pHVar10;
  if (bVar11) {
    uVar12 = (uint)((ulonglong)&TypeInfo__MVRaycast->static_fields->foundWos >> 0xc);
    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar14 == *puVar15;
      if (bVar11) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pLVar16 = (List_1_VoxelHit_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<VoxelHit>);
  FUN_?(pLVar16,MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
  bVar11 = iRam_? != 0;
  TypeInfo__MVRaycast->static_fields->voxelHits = pLVar16;
  if (bVar11) {
    uVar12 = (uint)((ulonglong)&TypeInfo__MVRaycast->static_fields->voxelHits >> 0xc);
    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar14 == *puVar15;
      if (bVar11) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pLVar17 = (List_1_UnityEngine_RaycastHit_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>);
  FUN_?(pLVar17,
                MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__List__);
  bVar11 = iRam_? != 0;
  TypeInfo__MVRaycast->static_fields->sortedHits = pLVar17;
  if (bVar11) {
    uVar12 = (uint)((ulonglong)&TypeInfo__MVRaycast->static_fields->sortedHits >> 0xc);
    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar14 == *puVar15;
      if (bVar11) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  this = (List_1_UnityEngine_Collider_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
  TypeInfo__MVRaycast->static_fields->colliderList = this;
  if (iRam_? != 0) {
    uVar12 = (uint)((ulonglong)&TypeInfo__MVRaycast->static_fields->colliderList >> 0xc);
    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar14 == *puVar15;
      if (bVar11) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  return;
}

