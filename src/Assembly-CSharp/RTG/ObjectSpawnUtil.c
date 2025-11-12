
/* GameObject SpawnInFrontOfCamera(GameObject, Camera, Single) */

GameObject *
Assembly-CSharp.dll::RTG::ObjectSpawnUtil::ObjectSpawnUtil_SpawnInFrontOfCamera
          (GameObject *sourceObject,Camera *camera,float objectSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SceneRaycastFilter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = objectSize * _UNK_?;
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_3.m_Origin.y = 1.0;
  RStack_3.m_Origin.x = (float)TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  RStack_3.m_Origin.z = 1.0;
  RStack_3.m_Direction.x = 1.0;
  if (camera != (Camera *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar5 = RStack_3._8_8_;
    uVar6 = RStack_3.m_Origin._0_8_;
    pAVar7 = ObjectBounds::ObjectBounds_CalcHierarchyWorldAABB
                        (&AStack_8,sourceObject,(ObjectBounds_QueryConfig *)&RStack_3,
                         (MethodInfo *)0x0);
    RStack_3.m_Origin.x = (pAVar7->_size).x;
    RStack_3.m_Origin.y = (pAVar7->_size).y;
    pfVar9 = &(pAVar7->_size).z;
    fVar10 = (pAVar7->_center).x;
    RStack_3._8_8_ = *(undefined8 *)pfVar9;
    RStack_3.m_Direction.y = (pAVar7->_center).y;
    RStack_3.m_Direction.z = (pAVar7->_center).z;
    if (pAVar7->_isValid == 0) {
      return (GameObject *)0x0;
    }
    uStack_11 = *(undefined4 *)&pAVar7->_isValid;
    AStack_8._size.x = (pAVar7->_size).x * fVar1;
    AStack_8._size.y = (pAVar7->_size).y * fVar1;
    AStack_8._size.z = *pfVar9 * fVar1;
    fVar1 = (float)FUN_?(&AStack_8);
    if ((sourceObject != (GameObject *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (sourceObject,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_12.x = 0.0;
      VStack_12.y = 0.0;
      VStack_12.z = 0.0;
      pvVar13 = (obj->fields)._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar14 = (code *)swi(3);
        pGVar15 = (GameObject *)(*pcVar14)();
        return pGVar15;
      }
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar14 = (code *)swi(3);
        pGVar15 = (GameObject *)(*pcVar14)();
        return pGVar15;
      }
      pcRam_? = pcVar14;
      (*pcRam_?)(pvVar13);
      fVar16 = VStack_12.y - RStack_3.m_Direction.y;
      fVar17 = VStack_12.z - RStack_3.m_Direction.z;
      fVar10 = VStack_12.x - fVar10;
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                         (camera,(MethodInfo *)0x0);
      fVar2 = fVar1 / fVar2;
      fVar19 = fVar18 + fVar1;
      if (fVar18 + fVar1 <= fVar2) {
        fVar19 = fVar2;
      }
      if (pTVar4 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_12.x = 0.0;
        VStack_12.y = 0.0;
        VStack_12.z = 0.0;
        pvVar13 = (pTVar4->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          pGVar15 = (GameObject *)(*pcVar14)();
          return pGVar15;
        }
        pcVar14 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar14 = (code *)swi(3);
          pGVar15 = (GameObject *)(*pcVar14)();
          return pGVar15;
        }
        pcRam_? = pcVar14;
        (*pcRam_?)(pvVar13,&VStack_12);
        pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&AStack_8._size,pTVar4,(MethodInfo *)0x0);
        RStack_3.m_Origin.x = pVVar20->x;
        RStack_3.m_Origin.y = pVVar20->y;
        fVar2 = fVar19 * RStack_3.m_Origin.x + VStack_12.x;
        fVar1 = fVar19 * pVVar20->z + VStack_12.z;
        fVar19 = fVar19 * RStack_3.m_Origin.y + VStack_12.y;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (sourceObject,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          RStack_3.m_Origin.x = 0.0;
          RStack_3.m_Origin.y = 0.0;
          RStack_3.m_Origin.z = 0.0;
          RStack_3.m_Direction.x = 0.0;
          pvVar13 = (pTVar4->fields)._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            pGVar15 = (GameObject *)(*pcVar14)();
            return pGVar15;
          }
          pcVar14 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar14 = (code *)swi(3);
            pGVar15 = (GameObject *)(*pcVar14)();
            return pGVar15;
          }
          pcRam_? = pcVar14;
          (*pcRam_?)(pvVar13,&RStack_3);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          AStack_8._size.z = fVar1 + fVar17;
          AStack_8._size.y = fVar19 + fVar16;
          AStack_8._size.x = fVar2 + fVar10;
          pGVar15 = (GameObject *)FUN_?(sourceObject,&AStack_8,&RStack_3);
          if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
            FUN_?();
          }
          RStack_3.m_Origin._0_8_ = uVar6;
          RStack_3._8_8_ = uVar5;
          pOVar21 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                              (aOStack_22,pGVar15,(ObjectBounds_QueryConfig *)&RStack_3,
                               (MethodInfo *)0x0);
          fStack_23 = (pOVar21->_size).x;
          fStack_24 = (pOVar21->_size).y;
          fStack_25 = (pOVar21->_size).z;
          pVVar20 = &pOVar21->_center;
          fVar1 = pVVar20->x;
          uVar26._0_1_ = pOVar21->_isValid;
          uVar26._1_3_ = *(undefined3 *)&pOVar21->field_0x29;
          fVar2 = (pOVar21->_center).y;
          uVar5._0_4_ = pVVar20->x;
          uVar5._4_4_ = pVVar20->y;
          fVar10 = (pOVar21->_center).z;
          fStack_27 = (pOVar21->_rotation).x;
          fStack_28 = (pOVar21->_rotation).y;
          uVar6._0_4_ = (pOVar21->_rotation).z;
          uVar6._4_4_ = (pOVar21->_rotation).w;
          fStack_29 = fVar1;
          fStack_30 = fVar2;
          fStack_31 = fVar10;
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            AStack_8._size.x = 0.0;
            AStack_8._size.y = 0.0;
            AStack_8._8_8_ = AStack_8._8_8_ & 0xffffffff00000000;
            pvVar13 = (pTVar4->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              pGVar15 = (GameObject *)(*pcVar14)();
              return pGVar15;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar14 = (code *)swi(3);
              pGVar15 = (GameObject *)(*pcVar14)();
              return pGVar15;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar13);
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)camera,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              VStack_12.x = 0.0;
              VStack_12.y = 0.0;
              VStack_12.z = 0.0;
              pvVar13 = (pTVar4->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                pGVar15 = (GameObject *)(*pcVar14)();
                return pGVar15;
              }
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar14 = (code *)swi(3);
                pGVar15 = (GameObject *)(*pcVar14)();
                return pGVar15;
              }
              pcRam_? = pcVar14;
              (*pcRam_?)(pvVar13,&VStack_12);
              fVar1 = fVar1 - VStack_12.x;
              fVar19 = fVar10 - VStack_12.z;
              fVar2 = fVar2 - VStack_12.y;
              VStack_12.y = fVar2;
              VStack_12.x = fVar1;
              VStack_12.z = fVar19;
              fVar16 = (float)FUN_?(&VStack_12);
              fVar18 = _UNK_?;
              if (_UNK_? < fVar16) {
                VStack_12.x = fVar1 / fVar16;
                fVar19 = fVar19 / fVar16;
                VStack_12.y = fVar2 / fVar16;
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
                VStack_12.x = (pVVar32->zeroVector).x;
                VStack_12.y = (pVVar32->zeroVector).y;
                fVar19 = (pVVar32->zeroVector).z;
              }
              fVar16 = AStack_8._size.z;
              fVar1 = VStack_12.x;
              fVar2 = VStack_12.y;
              RStack_3.m_Origin.x = AStack_8._size.x;
              RStack_3.m_Origin.y = AStack_8._size.y;
              AStack_8._size.x = VStack_12.x;
              AStack_8._size.y = VStack_12.y;
              AStack_8._size.z = fVar19;
              RStack_3.m_Origin.z = fVar16;
              fVar16 = (float)FUN_?(&AStack_8);
              if (fVar18 < fVar16) {
                AStack_8._size.x = fVar1 / fVar16;
                fVar19 = fVar19 / fVar16;
                AStack_8._size.y = fVar2 / fVar16;
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
                AStack_8._size.x = (pVVar32->zeroVector).x;
                AStack_8._size.y = (pVVar32->zeroVector).y;
                fVar19 = (pVVar32->zeroVector).z;
              }
              RStack_3.m_Direction.x = AStack_8._size.x;
              this_00 = (SceneRaycastFilter *)FUN_?(TypeInfo__RTG__SceneRaycastFilter);
              SceneRaycastFilter::SceneRaycastFilter__ctor(this_00,(MethodInfo *)0x0);
              pMVar33 = 
              MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
              ;
              if ((this_00 != (SceneRaycastFilter *)0x0) &&
                 (this = (List_1_System_UInt32Enum_ *)(this_00->fields)._allowedObjectTypes,
                 this != (List_1_System_UInt32Enum_ *)0x0)) {
                piVar34 = &(this->fields)._version;
                *piVar34 = *piVar34 + 1;
                pUVar35 = (this->fields)._items;
                if (pUVar35 != (UInt32Enum__Enum__Array *)0x0) {
                  uVar36 = (this->fields)._size;
                  if (uVar36 < (uint)pUVar35->max_length) {
                    (this->fields)._size = uVar36 + 1;
                    if ((uint)pUVar35->max_length <= uVar36) {
                      FUN_?();
                      pcVar14 = (code *)swi(3);
                      pGVar15 = (GameObject *)(*pcVar14)();
                      return pGVar15;
                    }
                    pUVar35->vector[(int)uVar36] = 1;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
                    List_1_System_UInt32Enum__AddWithResize
                              (this,1,pMVar33->klass->rgctx_data[0xe].method);
                  }
                  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  this_01 = (RTScene *)
                            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
                  if (this_01 != (RTScene *)0x0) {
                    RStack_3.m_Direction.z = fVar19;
                    RStack_3.m_Direction.y = AStack_8._size.y;
                    pSVar37 = RTScene::RTScene_Raycast
                                        (this_01,&RStack_3,SceneRaycastPrecision__Enum_BestFit,
                                         this_00,(MethodInfo *)0x0);
                    if (pSVar37 != (SceneRaycastHit *)0x0) {
                      if ((pSVar37->fields)._objectHit == (GameObjectRayHit *)0x0) {
                        return pGVar15;
                      }
                      pGVar38 = (pSVar37->fields)._objectHit;
                      AStack_8._size._0_8_ = uVar5;
                      if (pGVar38 != (GameObjectRayHit *)0x0) {
                        RStack_3.m_Origin.x = (pGVar38->fields)._hitPoint.x;
                        RStack_3.m_Origin.y = (pGVar38->fields)._hitPoint.y;
                        fVar1 = (pGVar38->fields)._hitPoint.z;
                        fStack_31 = (pGVar38->fields)._hitPoint.z;
                        fVar18 = RStack_3.m_Origin.x - (float)uVar5;
                        fVar19 = RStack_3.m_Origin.y - uVar5._4_4_;
                        AStack_8._size.x = (pGVar38->fields)._hitPlane.m_Normal.x;
                        AStack_8._size.y = (pGVar38->fields)._hitPlane.m_Normal.y;
                        AStack_8._8_8_ = *(undefined8 *)&(pGVar38->fields)._hitPlane.m_Normal.z;
                        aOStack_22[0]._size.y = fStack_24;
                        aOStack_22[0]._size.x = fStack_23;
                        aOStack_22[0]._center.x = RStack_3.m_Origin.x;
                        aOStack_22[0]._size.z = fStack_25;
                        aOStack_22[0]._center.z = fStack_31;
                        aOStack_22[0]._center.y = RStack_3.m_Origin.y;
                        aOStack_22[0]._rotation.y = fStack_28;
                        aOStack_22[0]._rotation.x = fStack_27;
                        fStack_29 = RStack_3.m_Origin.x;
                        fStack_30 = RStack_3.m_Origin.y;
                        aOStack_22[0]._rotation._8_8_ = uVar6;
                        aOStack_22[0]._40_4_ = uVar26;
                        pVVar20 = ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                            (&RStack_3.m_Origin,aOStack_22,(Plane *)&AStack_8,
                                             0.0,(MethodInfo *)0x0);
                        AStack_8._size.x = pVVar20->x;
                        AStack_8._size.y = pVVar20->y;
                        fVar2 = pVVar20->z;
                        fVar18 = fVar18 + AStack_8._size.x;
                        fVar19 = fVar19 + AStack_8._size.y;
                        if ((pGVar15 != (GameObject *)0x0) &&
                           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar15,(MethodInfo *)0x0),
                           pTVar4 != (Transform *)0x0)) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          VStack_12.x = 0.0;
                          VStack_12.y = 0.0;
                          VStack_12.z = 0.0;
                          pvVar13 = (pTVar4->fields)._._.m_CachedPtr;
                          if (pvVar13 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar4,(MethodInfo *)0x0);
                            pcVar14 = (code *)swi(3);
                            pGVar15 = (GameObject *)(*pcVar14)();
                            return pGVar15;
                          }
                          pcVar14 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar14 = (code *)FUN_?(&UNK_?),
                             pcVar14 == (code *)0x0)) {
                            uVar6 = func_?(&UNK_?);
                            FUN_?(uVar6,0);
                            pcVar14 = (code *)swi(3);
                            pGVar15 = (GameObject *)(*pcVar14)();
                            return pGVar15;
                          }
                          pcRam_? = pcVar14;
                          (*pcRam_?)(pvVar13);
                          AStack_8._size.x = VStack_12.x + fVar18;
                          AStack_8._size.y = VStack_12.y + fVar19;
                          AStack_8._size.z = VStack_12.z + (fVar1 - fVar10) + fVar2;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar13 = (pTVar4->fields)._._.m_CachedPtr;
                          if (pvVar13 != (void *)0x0) {
                            pcVar14 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar14 = (code *)FUN_?(&UNK_?),
                               pcVar14 == (code *)0x0)) {
                              uVar6 = func_?(&UNK_?);
                              FUN_?(uVar6,0);
                              pcVar14 = (code *)swi(3);
                              pGVar15 = (GameObject *)(*pcVar14)();
                              return pGVar15;
                            }
                            pcRam_? = pcVar14;
                            (*pcRam_?)(pvVar13,&AStack_8);
                            return pGVar15;
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pTVar4,(MethodInfo *)0x0);
                          pcVar14 = (code *)swi(3);
                          pGVar15 = (GameObject *)(*pcVar14)();
                          return pGVar15;
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
  FUN_?();
  pcVar14 = (code *)swi(3);
  pGVar15 = (GameObject *)(*pcVar14)();
  return pGVar15;
}

