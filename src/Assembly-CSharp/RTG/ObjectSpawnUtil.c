
/* GameObject SpawnInFrontOfCamera(GameObject, Camera, Single) */

GameObject * Assembly-CSharp.dll::RTG::ObjectSpawnUtil::ObjectSpawnUtil_SpawnInFrontOfCamera(GameObject *sourceObject,Camera *camera,float objectSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_);
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
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_);
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
  RStack_1.m_Origin.y = 1.0;
  RStack_1.m_Origin.x = (float)TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  RStack_1.m_Origin.z = 1.0;
  RStack_1.m_Direction.x = 1.0;
  if (camera != (Camera *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar3 = RStack_1._8_8_;
    uVar4 = RStack_1.m_Origin._0_8_;
    pAVar5 = ObjectBounds::ObjectBounds_CalcHierarchyWorldAABB(&AStack_6,sourceObject,(ObjectBounds_QueryConfig *)&RStack_1,(MethodInfo *)0x0);
    RStack_1.m_Origin.x = (pAVar5->_size).x;
    RStack_1.m_Origin.y = (pAVar5->_size).y;
    pfVar7 = &(pAVar5->_size).z;
    fVar8 = (pAVar5->_center).x;
    RStack_1._8_8_ = *(undefined8 *)pfVar7;
    RStack_1.m_Direction.y = (pAVar5->_center).y;
    RStack_1.m_Direction.z = (pAVar5->_center).z;
    if (pAVar5->_isValid == 0) {
      return (GameObject *)0x0;
    }
    uStack_9 = *(undefined4 *)&pAVar5->_isValid;
    AStack_6._size.x = (pAVar5->_size).x * 0.5;
    AStack_6._size.y = (pAVar5->_size).y * 0.5;
    AStack_6._size.z = *pfVar7 * 0.5;
    fVar10 = (float)FUN_?(&AStack_6);
    if ((sourceObject != (GameObject *)0x0) && (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(sourceObject,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_11.x = 0.0;
      VStack_11.y = 0.0;
      VStack_11.z = 0.0;
      pvVar12 = (obj->fields)._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        pGVar14 = (GameObject *)(*pcVar13)();
        return pGVar14;
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar13 = (code *)swi(3);
        pGVar14 = (GameObject *)(*pcVar13)();
        return pGVar14;
      }
      pcRam_? = pcVar13;
      (*pcRam_?)(pvVar12);
      fVar15 = VStack_11.y - RStack_1.m_Direction.y;
      fVar16 = VStack_11.z - RStack_1.m_Direction.z;
      fVar8 = VStack_11.x - fVar8;
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane(camera,(MethodInfo *)0x0);
      fVar18 = fVar10 / (objectSize * 0.5);
      fVar19 = fVar17 + fVar10;
      if (fVar17 + fVar10 <= fVar18) {
        fVar19 = fVar18;
      }
      if (pTVar2 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_11.x = 0.0;
        VStack_11.y = 0.0;
        VStack_11.z = 0.0;
        pvVar12 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          pGVar14 = (GameObject *)(*pcVar13)();
          return pGVar14;
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar13 = (code *)swi(3);
          pGVar14 = (GameObject *)(*pcVar13)();
          return pGVar14;
        }
        pcRam_? = pcVar13;
        (*pcRam_?)(pvVar12,&VStack_11);
        pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&AStack_6._size,pTVar2,(MethodInfo *)0x0);
        RStack_1.m_Origin.x = pVVar20->x;
        RStack_1.m_Origin.y = pVVar20->y;
        fVar17 = fVar19 * RStack_1.m_Origin.x + VStack_11.x;
        fVar10 = fVar19 * pVVar20->z + VStack_11.z;
        fVar19 = fVar19 * RStack_1.m_Origin.y + VStack_11.y;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(sourceObject,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          RStack_1.m_Origin.x = 0.0;
          RStack_1.m_Origin.y = 0.0;
          RStack_1.m_Origin.z = 0.0;
          RStack_1.m_Direction.x = 0.0;
          pvVar12 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            pGVar14 = (GameObject *)(*pcVar13)();
            return pGVar14;
          }
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar13 = (code *)swi(3);
            pGVar14 = (GameObject *)(*pcVar13)();
            return pGVar14;
          }
          pcRam_? = pcVar13;
          (*pcRam_?)(pvVar12,&RStack_1);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          AStack_6._size.z = fVar10 + fVar16;
          AStack_6._size.y = fVar19 + fVar15;
          AStack_6._size.x = fVar17 + fVar8;
          pGVar14 = (GameObject *)FUN_?(sourceObject,&AStack_6,&RStack_1);
          if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
            FUN_?();
          }
          RStack_1.m_Origin._0_8_ = uVar4;
          RStack_1._8_8_ = uVar3;
          pOVar21 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(aOStack_22,pGVar14,(ObjectBounds_QueryConfig *)&RStack_1,(MethodInfo *)0x0);
          fStack_23 = (pOVar21->_size).x;
          fStack_24 = (pOVar21->_size).y;
          fStack_25 = (pOVar21->_size).z;
          pVVar20 = &pOVar21->_center;
          fVar8 = pVVar20->x;
          uVar26._0_1_ = pOVar21->_isValid;
          uVar26._1_3_ = *(undefined3 *)&pOVar21->field_0x29;
          fVar10 = (pOVar21->_center).y;
          uVar3._0_4_ = pVVar20->x;
          uVar3._4_4_ = pVVar20->y;
          fVar19 = (pOVar21->_center).z;
          fStack_27 = (pOVar21->_rotation).x;
          fStack_28 = (pOVar21->_rotation).y;
          uVar4._0_4_ = (pOVar21->_rotation).z;
          uVar4._4_4_ = (pOVar21->_rotation).w;
          fStack_29 = fVar8;
          fStack_30 = fVar10;
          fStack_31 = fVar19;
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            AStack_6._size.x = 0.0;
            AStack_6._size.y = 0.0;
            AStack_6._8_8_ = AStack_6._8_8_ & 0xffffffff00000000;
            pvVar12 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              pGVar14 = (GameObject *)(*pcVar13)();
              return pGVar14;
            }
            pcVar13 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar13 = (code *)swi(3);
              pGVar14 = (GameObject *)(*pcVar13)();
              return pGVar14;
            }
            pcRam_? = pcVar13;
            (*pcRam_?)(pvVar12);
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              VStack_11.x = 0.0;
              VStack_11.y = 0.0;
              VStack_11.z = 0.0;
              pvVar12 = (pTVar2->fields)._._.m_CachedPtr;
              if (pvVar12 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                pGVar14 = (GameObject *)(*pcVar13)();
                return pGVar14;
              }
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar4 = func_?(&UNK_?);
                FUN_?(uVar4,0);
                pcVar13 = (code *)swi(3);
                pGVar14 = (GameObject *)(*pcVar13)();
                return pGVar14;
              }
              pcRam_? = pcVar13;
              (*pcRam_?)(pvVar12,&VStack_11);
              fVar8 = fVar8 - VStack_11.x;
              fVar17 = fVar19 - VStack_11.z;
              fVar10 = fVar10 - VStack_11.y;
              VStack_11.y = fVar10;
              VStack_11.x = fVar8;
              VStack_11.z = fVar17;
              fVar18 = (float)FUN_?(&VStack_11);
              if (1e-05 < fVar18) {
                VStack_11.x = fVar8 / fVar18;
                fVar17 = fVar17 / fVar18;
                VStack_11.y = fVar10 / fVar18;
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
                VStack_11.x = (pVVar32->zeroVector).x;
                VStack_11.y = (pVVar32->zeroVector).y;
                fVar17 = (pVVar32->zeroVector).z;
              }
              fVar18 = AStack_6._size.z;
              fVar8 = VStack_11.x;
              fVar10 = VStack_11.y;
              RStack_1.m_Origin.x = AStack_6._size.x;
              RStack_1.m_Origin.y = AStack_6._size.y;
              AStack_6._size.x = VStack_11.x;
              AStack_6._size.y = VStack_11.y;
              AStack_6._size.z = fVar17;
              RStack_1.m_Origin.z = fVar18;
              fVar18 = (float)FUN_?(&AStack_6);
              if (1e-05 < fVar18) {
                AStack_6._size.x = fVar8 / fVar18;
                fVar17 = fVar17 / fVar18;
                AStack_6._size.y = fVar10 / fVar18;
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
                AStack_6._size.x = (pVVar32->zeroVector).x;
                AStack_6._size.y = (pVVar32->zeroVector).y;
                fVar17 = (pVVar32->zeroVector).z;
              }
              RStack_1.m_Direction.x = AStack_6._size.x;
              this_00 = (SceneRaycastFilter *)FUN_?(TypeInfo__RTG__SceneRaycastFilter);
              SceneRaycastFilter::SceneRaycastFilter__ctor(this_00,(MethodInfo *)0x0);
              pMVar33 = MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
              if ((this_00 != (SceneRaycastFilter *)0x0) && (this = (List_1_System_UInt32Enum_ *)(this_00->fields)._allowedObjectTypes, this != (List_1_System_UInt32Enum_ *)0x0)) {
                piVar34 = &(this->fields)._version;
                *piVar34 = *piVar34 + 1;
                pUVar35 = (this->fields)._items;
                if (pUVar35 != (UInt32Enum__Enum__Array *)0x0) {
                  uVar36 = (this->fields)._size;
                  if (uVar36 < (uint)pUVar35->max_length) {
                    (this->fields)._size = uVar36 + 1;
                    if ((uint)pUVar35->max_length <= uVar36) {
                      FUN_?();
                      pcVar13 = (code *)swi(3);
                      pGVar14 = (GameObject *)(*pcVar13)();
                      return pGVar14;
                    }
                    pUVar35->vector[(int)uVar36] = 1;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::List_1_System_UInt32Enum__AddWithResize(this,1,pMVar33->klass->rgctx_data[0xe].method);
                  }
                  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  this_01 = (RTScene *)MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get(MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
                  if (this_01 != (RTScene *)0x0) {
                    RStack_1.m_Direction.z = fVar17;
                    RStack_1.m_Direction.y = AStack_6._size.y;
                    pSVar37 = RTScene::RTScene_Raycast(this_01,&RStack_1,SceneRaycastPrecision__Enum_BestFit,this_00,(MethodInfo *)0x0);
                    if (pSVar37 != (SceneRaycastHit *)0x0) {
                      if ((pSVar37->fields)._objectHit == (GameObjectRayHit *)0x0) {
                        return pGVar14;
                      }
                      pGVar38 = (pSVar37->fields)._objectHit;
                      AStack_6._size._0_8_ = uVar3;
                      if (pGVar38 != (GameObjectRayHit *)0x0) {
                        RStack_1.m_Origin.x = (pGVar38->fields)._hitPoint.x;
                        RStack_1.m_Origin.y = (pGVar38->fields)._hitPoint.y;
                        fVar8 = (pGVar38->fields)._hitPoint.z;
                        fStack_31 = (pGVar38->fields)._hitPoint.z;
                        fVar18 = RStack_1.m_Origin.x - (float)uVar3;
                        fVar17 = RStack_1.m_Origin.y - uVar3._4_4_;
                        AStack_6._size.x = (pGVar38->fields)._hitPlane.m_Normal.x;
                        AStack_6._size.y = (pGVar38->fields)._hitPlane.m_Normal.y;
                        AStack_6._8_8_ = *(undefined8 *)&(pGVar38->fields)._hitPlane.m_Normal.z;
                        aOStack_22[0]._size.y = fStack_24;
                        aOStack_22[0]._size.x = fStack_23;
                        aOStack_22[0]._center.x = RStack_1.m_Origin.x;
                        aOStack_22[0]._size.z = fStack_25;
                        aOStack_22[0]._center.z = fStack_31;
                        aOStack_22[0]._center.y = RStack_1.m_Origin.y;
                        aOStack_22[0]._rotation.y = fStack_28;
                        aOStack_22[0]._rotation.x = fStack_27;
                        fStack_29 = RStack_1.m_Origin.x;
                        fStack_30 = RStack_1.m_Origin.y;
                        aOStack_22[0]._rotation._8_8_ = uVar4;
                        aOStack_22[0]._40_4_ = uVar26;
                        pVVar20 = ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(&RStack_1.m_Origin,aOStack_22,(Plane *)&AStack_6,0.0,(MethodInfo *)0x0);
                        AStack_6._size.x = pVVar20->x;
                        AStack_6._size.y = pVVar20->y;
                        fVar10 = pVVar20->z;
                        fVar18 = fVar18 + AStack_6._size.x;
                        fVar17 = fVar17 + AStack_6._size.y;
                        if ((pGVar14 != (GameObject *)0x0) && (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar14,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
                          if (cRam_? == '\0') {
                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          VStack_11.x = 0.0;
                          VStack_11.y = 0.0;
                          VStack_11.z = 0.0;
                          pvVar12 = (pTVar2->fields)._._.m_CachedPtr;
                          if (pvVar12 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
                            pcVar13 = (code *)swi(3);
                            pGVar14 = (GameObject *)(*pcVar13)();
                            return pGVar14;
                          }
                          pcVar13 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                            uVar4 = func_?(&UNK_?);
                            FUN_?(uVar4,0);
                            pcVar13 = (code *)swi(3);
                            pGVar14 = (GameObject *)(*pcVar13)();
                            return pGVar14;
                          }
                          pcRam_? = pcVar13;
                          (*pcRam_?)(pvVar12);
                          AStack_6._size.x = VStack_11.x + fVar18;
                          AStack_6._size.y = VStack_11.y + fVar17;
                          AStack_6._size.z = VStack_11.z + (fVar8 - fVar19) + fVar10;
                          if (cRam_? == '\0') {
                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar12 = (pTVar2->fields)._._.m_CachedPtr;
                          if (pvVar12 != (void *)0x0) {
                            pcVar13 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                              uVar4 = func_?(&UNK_?);
                              FUN_?(uVar4,0);
                              pcVar13 = (code *)swi(3);
                              pGVar14 = (GameObject *)(*pcVar13)();
                              return pGVar14;
                            }
                            pcRam_? = pcVar13;
                            (*pcRam_?)(pvVar12,&AStack_6);
                            return pGVar14;
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
                          pcVar13 = (code *)swi(3);
                          pGVar14 = (GameObject *)(*pcVar13)();
                          return pGVar14;
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
  pcVar13 = (code *)swi(3);
  pGVar14 = (GameObject *)(*pcVar13)();
  return pGVar14;
}

