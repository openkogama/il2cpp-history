
/* Void Initialize(IMovable) */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_Initialize
               (AvatarWaterRippleEffect *this,IMovable *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AirBubbleCollitionPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IMovable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._.movingObject = obj;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.movingObject >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (obj != (IMovable *)0x0) {
    pfVar6 = (float *)FUN_?(&uStack_7,1,TypeInfo__IMovable,obj);
    fVar8 = pfVar6[1];
    fVar9 = pfVar6[2];
    fVar10 = pfVar6[3];
    fVar11 = pfVar6[4];
    fVar12 = pfVar6[5];
    (this->fields)._.bounds.m_Center.x = *pfVar6;
    (this->fields)._.bounds.m_Center.y = fVar8;
    (this->fields)._.bounds.m_Center.z = fVar9;
    (this->fields)._.bounds.m_Extents.x = fVar10;
    (this->fields)._.bounds.m_Extents.y = fVar11;
    (this->fields)._.bounds.m_Extents.z = fVar12;
    uVar13 = (this->fields)._.bounds.m_Center.x;
    uVar14 = (this->fields)._.bounds.m_Center.y;
    fVar9 = (this->fields)._.bounds.m_Center.z;
    puVar5 = (ulonglong *)FUN_?(&uStack_7,2);
    VStack_15._0_8_ = *puVar5;
    fVar8 = *(float *)(puVar5 + 1);
    (this->fields)._.offset.x = (float)uVar13 - (float)VStack_15._0_8_;
    (this->fields)._.offset.y = (float)uVar14 - (float)((ulonglong)VStack_15._0_8_ >> 0x20);
    (this->fields)._.offset.z = fVar9 - fVar8;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar16 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar16 != (GameSessionData *)0x0) {
      if ((pGVar16->fields).gameMode != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar16 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar16 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar16->fields).gameMode != 4) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                              ((MethodInfo *)0x0);
          if (this_01 == (WaterPlaneManager *)0x0) goto code_?;
          bVar17 = WaterPlaneManager::WaterPlaneManager_get_IsActive(this_01,(MethodInfo *)0x0);
          if (bVar17 == 0) {
            return;
          }
        }
      }
      pGVar18 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
      name = StringLiteral_AirBubbleCollitionPlane;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
                (pGVar18,name,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar18 = (GameObject *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar18,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      bVar1 = iRam_? != 0;
      (this->fields).airBubbleCollitionPlane = pGVar18;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).airBubbleCollitionPlane >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pGVar18 = (this->fields).airBubbleCollitionPlane;
      if ((pGVar18 != (GameObject *)0x0) &&
         (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar18,(MethodInfo *)0x0), pTVar19 != (Transform *)0x0)) {
        VStack_15._0_8_ = ZEXT48(_UNK_?);
        VStack_15.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
                  (pTVar19,&VStack_15,Space__Enum_Self,(MethodInfo *)0x0);
        pPVar20 = (ParticleSystem *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)(this->fields).airBubbleParticlesPrefab,
                             UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                            );
        bVar1 = iRam_? != 0;
        (this->fields).airBubbleParticles = pPVar20;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).airBubbleParticles >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pPVar20 = (this->fields).airBubbleParticles;
        if (pPVar20 != (ParticleSystem *)0x0) {
          pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar20,(MethodInfo *)0x0);
          this_00 = (this->fields).avatar;
          if ((this_00 != (Avatar *)0x0) &&
             (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this_00,(MethodInfo *)0x0),
             pTVar19 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar19,parent,1,(MethodInfo *)0x0);
            pPVar20 = (this->fields).airBubbleParticles;
            if ((pPVar20 != (ParticleSystem *)0x0) &&
               (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pPVar20,(MethodInfo *)0x0),
               pTVar19 != (Transform *)0x0)) {
              uStack_7._0_4_ = (this->fields).airBubbleOffset.x;
              uStack_7._4_4_ = (this->fields).airBubbleOffset.y;
              fStack_21 = (this->fields).airBubbleOffset.z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar22 = (pTVar19->fields)._._.m_CachedPtr;
              if (pvVar22 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar19,(MethodInfo *)0x0);
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
              pcVar23 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                uVar24 = func_?(&UNK_?);
                FUN_?(uVar24,0);
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
              pcRam_? = pcVar23;
              (*pcRam_?)(pvVar22);
              pPStackX_8 = (this->fields).airBubbleParticles;
              if (pPStackX_8 != (ParticleSystem *)0x0) {
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                    LOCK();
                    bVar1 = uVar4 == *puVar5;
                    if (bVar1) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar1);
                }
                pGVar18 = (this->fields).airBubbleCollitionPlane;
                pPStackX_10 = pPStackX_8;
                if (pGVar18 != (GameObject *)0x0) {
                  pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar18,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if ((
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?();
                  }
                  pvVar22 = (void *)0x0;
                  if (pTVar19 != (Transform *)0x0) {
                    pvVar22 = (pTVar19->fields)._._.m_CachedPtr;
                  }
                  pcVar23 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                    uVar24 = func_?(&UNK_?);
                    FUN_?(uVar24,0);
                    pcVar23 = (code *)swi(3);
                    (*pcVar23)();
                    return;
                  }
                  pcRam_? = pcVar23;
                  (*pcRam_?)(&pPStackX_10,0,pvVar22);
                  (this->fields).isInitialized = 1;
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_Update
               (AvatarWaterRippleEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IMovable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 == (WaterPlaneManager *)0x0))
  goto code_?;
  bVar3 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar2,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((this->fields)._.movingObject == (IMovable *)0x0) goto code_?;
    puVar4 = (undefined8 *)FUN_?(aBStack_5,2,TypeInfo__IMovable);
    uVar6 = (this->fields)._.offset.x;
    uVar7 = (this->fields)._.offset.y;
    fVar8 = (this->fields)._.offset.z;
    VStack_9._0_8_ = *puVar4;
    fVar10 = *(float *)(puVar4 + 1);
    bVar11 = cRam_? == '\0';
    (this->fields)._.bounds.m_Center.x = (float)uVar6 + VStack_9.x;
    (this->fields)._.bounds.m_Center.y = (float)uVar7 + VStack_9.y;
    (this->fields)._.bounds.m_Center.z = fVar8 + fVar10;
    if (bVar11) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 == (WaterPlaneManager *)0x0))
    goto code_?;
    this_00 = (pWVar2->fields).splashController;
    uVar12._0_4_ = (this->fields)._.bounds.m_Extents.y;
    uVar12._4_4_ = (this->fields)._.bounds.m_Extents.z;
    uVar13._0_4_ = (this->fields)._.bounds.m_Center.x;
    uVar13._4_4_ = (this->fields)._.bounds.m_Center.y;
    uVar14 = *(ulonglong *)&(this->fields)._.bounds.m_Center.z;
    if (((this->fields)._.movingObject == (IMovable *)0x0) ||
       (puVar4 = (undefined8 *)FUN_?(aBStack_5,0,TypeInfo__IMovable),
       this_00 == (SplashController *)0x0)) goto code_?;
    VStack_9._0_8_ = *puVar4;
    VStack_9.z = *(float *)(puVar4 + 1);
    aBStack_5[0].m_Center._0_8_ = uVar13;
    aBStack_5[0]._8_8_ = uVar14;
    aBStack_5[0].m_Extents._4_8_ = uVar12;
    SplashController::SplashController_WaterSplash
              (this_00,aBStack_5,&VStack_9,(this->fields)._.waterObjectID,(MethodInfo *)0x0);
  }
  if ((this->fields).isInitialized == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 == (WaterPlaneManager *)0x0))
  goto code_?;
  bVar3 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pPVar15 = (this->fields).airBubbleParticles;
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
    if (pPVar15 == (ParticleSystem *)0x0) {
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar15->fields)._._.m_CachedPtr == (void *)0x0) {
      return;
    }
    pPVar15 = (this->fields).airBubbleParticles;
    if (pPVar15 == (ParticleSystem *)0x0) goto code_?;
  }
  else {
    this_01 = (this->fields).avatar;
    if ((this_01 == (Avatar *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_9.x = 0.0;
    VStack_9.y = 0.0;
    VStack_9.z = 0.0;
    pvVar17 = (pTVar16->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)(pvVar17);
    this_02 = (this->fields).airBubbleCollitionPlane;
    if (this_02 == (GameObject *)0x0) goto code_?;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_02,(MethodInfo *)0x0);
    pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if ((pWVar2 == (WaterPlaneManager *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pWVar2,(MethodInfo *)0x0), obj == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar17 = (obj->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)(pvVar17);
    if (pTVar16 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    aBStack_5[0].m_Center.x = 0.0;
    aBStack_5[0].m_Center.y = 0.0;
    aBStack_5[0]._8_8_ = aBStack_5[0]._8_8_ & 0xffffffff00000000;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar16->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)();
    pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if (pWVar2 == (WaterPlaneManager *)0x0) goto code_?;
    fVar8 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(pWVar2,(MethodInfo *)0x0);
    aBStack_5[0].m_Center.x = (this->fields)._.bounds.m_Extents.x;
    aBStack_5[0].m_Center.y = (this->fields)._.bounds.m_Extents.y;
    aBStack_5[0].m_Center.z = (this->fields)._.bounds.m_Extents.z;
    pPVar15 = (this->fields).airBubbleParticles;
    if (pPVar15 == (ParticleSystem *)0x0) goto code_?;
    if (aBStack_5[0].m_Center.y + aBStack_5[0].m_Center.y + VStack_9.y < fVar8) {
      pPStackX_20 = (ParticleSystem *)
                    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                    ParticleSystem_get_collision(pPVar15,(MethodInfo *)0x0);
      pPVar15 = (this->fields).airBubbleParticles;
      if ((pPVar15 != (ParticleSystem *)0x0) &&
         (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pPVar15,(MethodInfo *)0x0), pTVar16 != (Transform *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_9.x = 0.0;
        VStack_9.y = 0.0;
        VStack_9.z = 0.0;
        pvVar17 = (pTVar16->fields)._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcVar18 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcRam_? = pcVar18;
        (*pcRam_?)(pvVar17);
        pPVar15 = (this->fields).airBubbleParticles;
        if (pPVar15 != (ParticleSystem *)0x0) {
          pPStackX_18 = (ParticleSystem *)
                        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                        ParticleSystem_get_collision(pPVar15,(MethodInfo *)0x0);
          pcVar18 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pcRam_? = pcVar18;
          fVar8 = fVar8 - VStack_9.y;
          fVar10 = (float)(*pcRam_?)(&pPStackX_18);
          pcVar18 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pcRam_? = pcVar18;
          (*pcRam_?)(&pPStackX_20,CONCAT44(extraout_XMM0_Db,fVar8 / fVar10));
          pPVar15 = (this->fields).airBubbleParticles;
          if (pPVar15 != (ParticleSystem *)0x0) {
            bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                    ParticleSystem_get_isPlaying(pPVar15,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              return;
            }
            pPVar15 = (this->fields).airBubbleParticles;
            if (pPVar15 != (ParticleSystem *)0x0) {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                        (pPVar15,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
          ParticleSystem_get_isPlaying(pPVar15,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pPVar15 = (this->fields).airBubbleParticles;
    if (pPVar15 == (ParticleSystem *)0x0) {
code_?:
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
              (pPVar15,1,(MethodInfo *)0x0);
  }
  return;
}


/* AvatarWaterRippleEffect() */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect__ctor
               (AvatarWaterRippleEffect *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  bVar2 = cRam_? == '\0';
  uVar3 = (ulonglong)_UNK_?;
  (this->fields).airBubbleOffset.x = (float)(int)(uVar3 << 0x20);
  (this->fields).airBubbleOffset.y = (float)(int)((uVar3 << 0x20) >> 0x20);
  (this->fields).airBubbleOffset.z = fVar1;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar4 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar5 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar6 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar7 = ppMVar5;
  if (lVar6 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar6 = lRam_?;
  }
  else {
    do {
      uVar8 = (uint)ppMVar7;
      LOCK();
      bVar2 = uVar8 != uRam_?;
      uVar9 = uVar8;
      uVar10 = uVar8 + 1;
      if (bVar2) {
        uVar9 = uRam_?;
        uVar10 = uRam_?;
      }
      uRam_? = uVar10;
      UNLOCK();
    } while ((bVar2) && (ppMVar7 = (MethodInfo **)(ulonglong)uVar9, uVar8 = uVar9, uVar9 != 2)
            );
    while (uVar8 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar8 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar6;
  puVar11 = &(pOVar4->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar11 == 1;
  if (bVar2) {
    *(undefined4 *)puVar11 = 1;
  }
  uVar8 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar8 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar12 = &(pOVar4->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar12 == 1;
  if (bVar2) {
    *puVar12 = 1;
  }
  uVar8 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar8 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar8 = GetCurrentThreadId();
    psVar13 = &(pOVar4->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar8 == *psVar13;
    if (bVar2) {
      *psVar13 = (ulonglong)uVar8;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar11 = &(pOVar4->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar11 == 1;
      if (bVar2) {
        *(undefined4 *)puVar11 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar6._0_4_ = (pOVar4->_1).initializationExceptionGCHandle;
      lVar6._4_4_ = (pOVar4->_1).cctor_started;
      if (lVar6 == 0) {
        (pOVar4->_1).initializationExceptionGCHandle = 0;
        (pOVar4->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar6 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar14._0_4_ = (pOVar4->_1).initializationExceptionGCHandle;
    lVar14._4_4_ = (pOVar4->_1).cctor_started;
    if (lVar14 == 0) {
      return;
    }
  }
  else {
    uVar8 = GetCurrentThreadId();
    LOCK();
    (pOVar4->_1).cctor_thread = (ulonglong)uVar8;
    UNLOCK();
    LOCK();
    (pOVar4->_1).cctor_finished_or_no_cctor = 1;
    uVar8 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar8 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar4->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar4);
      ppMVar7 = ppMVar5;
      pIVar15 = (Il2CppClass *)pOVar4;
code_?:
      do {
        if (ppMVar7 == (MethodInfo **)0x0) {
          FUN_?(pIVar15);
          if (pIVar15->field_count != 0) {
            ppMVar7 = pIVar15->methods;
            pMVar16 = *ppMVar7;
code_?:
            if (pMVar16 != (MethodInfo *)0x0) {
              if ((*pMVar16->name == '.') && ((pMVar16->flags & 0x800) != 0)) {
                ppMVar17 = ppMVar5;
                while (ppMVar18 = ppMVar17 + 0x3052aacd,
                      ppMVar17 = (MethodInfo **)((longlong)ppMVar17 + 1),
                      *(char *)ppMVar18 == (pMVar16->name + -1)[(longlong)ppMVar17]) {
                  if (ppMVar17 == (MethodInfo **)0x7) {
                    FUN_?(pMVar16,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar7 = ppMVar7 + 1;
          if (ppMVar7 < pIVar15->methods + pIVar15->field_count) {
            pMVar16 = *ppMVar7;
            goto code_?;
          }
        }
        pIVar15 = pIVar15->parent;
        ppMVar7 = ppMVar5;
      } while (pIVar15 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar4->_1).cctor_thread = 0;
    uVar3 = _UNK_?;
    uVar19 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar4->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_20 = 0;
    uStack_21 = _UNK_?;
    uStack_22 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar4->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_22) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_22 < 0x10) {
code_?:
      lVar6 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_23) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      uStack_21 = uVar19;
      uStack_22 = uVar3;
      lVar14 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar6 != 0) {
        *(longlong *)(lVar14 + 0x28U) = lVar6;
        if (iRam_? != 0) {
          uVar8 = (uint)(lVar14 + 0x28U >> 0xc);
          puVar24 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar25 = *puVar24;
            LOCK();
            uVar3 = *puVar24;
            if (uVar25 == uVar3) {
              *puVar24 = uVar25 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar25 != uVar3);
        }
      }
      FUN_?(pOVar4,lVar14);
      if (0xf < uStack_23) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_23 + 1) &&
           (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17))))
        goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_22 + 1 < 0x1000) ||
       (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      uVar19 = _UNK_?;
      uVar3 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar19._0_4_ = (pOVar4->_1).initializationExceptionGCHandle;
  uVar19._4_4_ = (pOVar4->_1).cctor_started;
  uVar19 = FUN_?(uVar19);
  FUN_?(uVar19,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Single get_AvatarHeight() */

float Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_get_AvatarHeight
                (AvatarWaterRippleEffect *this,MethodInfo *method)

{
  fVar1 = (this->fields)._.bounds.m_Extents.y;
  return fVar1 + fVar1;
}

