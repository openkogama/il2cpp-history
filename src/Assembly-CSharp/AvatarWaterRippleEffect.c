
/* Void Initialize(IMovable) */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_Initialize(AvatarWaterRippleEffect *this,IMovable *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_);
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
    puVar15 = (undefined8 *)FUN_?(&uStack_7,2);
    VStack_16._0_8_ = *puVar15;
    fVar8 = *(float *)(puVar15 + 1);
    (this->fields)._.offset.x = (float)uVar13 - VStack_16.x;
    (this->fields)._.offset.y = (float)uVar14 - VStack_16.y;
    (this->fields)._.offset.z = fVar9 - fVar8;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar17 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar17 != (GameSessionData *)0x0) {
      if ((pGVar17->fields).gameMode != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar18 == (MVGameControllerBase *)0x0) || (this_00 = (pMVar18->fields).waterPlaneManager, this_00 == (WaterPlaneManager *)0x0)) goto code_?;
        bVar19 = WaterPlaneManager::WaterPlaneManager_get_IsActive(this_00,(MethodInfo *)0x0);
        if (bVar19 == 0) {
          return;
        }
      }
      pGVar20 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
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
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject(pGVar20,name,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar20 = (GameObject *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pGVar20,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
      bVar1 = iRam_? != 0;
      (this->fields).airBubbleCollitionPlane = pGVar20;
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
      pGVar20 = (this->fields).airBubbleCollitionPlane;
      if ((pGVar20 != (GameObject *)0x0) && (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar20,(MethodInfo *)0x0), pTVar21 != (Transform *)0x0)) {
        VStack_16.x = 180.0;
        VStack_16.y = 0.0;
        VStack_16.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate(pTVar21,&VStack_16,Space__Enum_Self,(MethodInfo *)0x0);
        pPVar22 = (ParticleSystem *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)(this->fields).airBubbleParticlesPrefab,UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_);
        bVar1 = iRam_? != 0;
        (this->fields).airBubbleParticles = pPVar22;
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
        pPVar22 = (this->fields).airBubbleParticles;
        if (pPVar22 != (ParticleSystem *)0x0) {
          pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pPVar22,(MethodInfo *)0x0);
          this_01 = (this->fields).avatar;
          if ((this_01 != (Avatar *)0x0) && (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0), pTVar21 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar21,parent,1,(MethodInfo *)0x0);
            pPVar22 = (this->fields).airBubbleParticles;
            if ((pPVar22 != (ParticleSystem *)0x0) && (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pPVar22,(MethodInfo *)0x0), pTVar21 != (Transform *)0x0)) {
              uStack_7._0_4_ = (this->fields).airBubbleOffset.x;
              uStack_7._4_4_ = (this->fields).airBubbleOffset.y;
              fStack_23 = (this->fields).airBubbleOffset.z;
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar24 = (pTVar21->fields)._._.m_CachedPtr;
              if (pvVar24 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              pcVar25 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                uVar26 = func_?(&UNK_?);
                FUN_?(uVar26,0);
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              pcRam_? = pcVar25;
              (*pcRam_?)(pvVar24);
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
                pGVar20 = (this->fields).airBubbleCollitionPlane;
                pPStackX_10 = pPStackX_8;
                if (pGVar20 != (GameObject *)0x0) {
                  pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar20,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if ((void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?();
                  }
                  pvVar24 = (void *)0x0;
                  if (pTVar21 != (Transform *)0x0) {
                    pvVar24 = (pTVar21->fields)._._.m_CachedPtr;
                  }
                  pcVar25 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                    uVar26 = func_?(&UNK_?);
                    FUN_?(uVar26,0);
                    pcVar25 = (code *)swi(3);
                    (*pcVar25)();
                    return;
                  }
                  pcRam_? = pcVar25;
                  (*pcRam_?)(&pPStackX_10,0,pvVar24);
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
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_Update(AvatarWaterRippleEffect *this,MethodInfo *method)

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
  if ((pMVar1 == (MVGameControllerBase *)0x0) || (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 == (WaterPlaneManager *)0x0)) goto code_?;
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
    if ((pMVar1 == (MVGameControllerBase *)0x0) || (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 == (WaterPlaneManager *)0x0)) goto code_?;
    this_00 = (pWVar2->fields).splashController;
    uVar12._0_4_ = (this->fields)._.bounds.m_Extents.y;
    uVar12._4_4_ = (this->fields)._.bounds.m_Extents.z;
    uVar13._0_4_ = (this->fields)._.bounds.m_Center.x;
    uVar13._4_4_ = (this->fields)._.bounds.m_Center.y;
    uVar14 = *(ulonglong *)&(this->fields)._.bounds.m_Center.z;
    if (((this->fields)._.movingObject == (IMovable *)0x0) || (puVar4 = (undefined8 *)FUN_?(aBStack_5,0,TypeInfo__IMovable), this_00 == (SplashController *)0x0)) goto code_?;
    VStack_9._0_8_ = *puVar4;
    VStack_9.z = *(float *)(puVar4 + 1);
    aBStack_5[0].m_Center._0_8_ = uVar13;
    aBStack_5[0]._8_8_ = uVar14;
    aBStack_5[0].m_Extents._4_8_ = uVar12;
    SplashController::SplashController_WaterSplash(this_00,aBStack_5,&VStack_9,(this->fields)._.waterObjectID,(MethodInfo *)0x0);
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
  if ((pMVar1 == (MVGameControllerBase *)0x0) || (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 == (WaterPlaneManager *)0x0)) goto code_?;
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
    if ((this_01 == (Avatar *)0x0) || (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_9.x = 0.0;
    VStack_9.y = 0.0;
    VStack_9.z = 0.0;
    pvVar17 = (pTVar16->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
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
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_02,(MethodInfo *)0x0);
    pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if ((pWVar2 == (WaterPlaneManager *)0x0) || (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pWVar2,(MethodInfo *)0x0), obj == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar17 = (obj->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
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
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar16->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
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
      pPStackX_20 = (ParticleSystem *)UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision(pPVar15,(MethodInfo *)0x0);
      pPVar15 = (this->fields).airBubbleParticles;
      if ((pPVar15 != (ParticleSystem *)0x0) && (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pPVar15,(MethodInfo *)0x0), pTVar16 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_9.x = 0.0;
        VStack_9.y = 0.0;
        VStack_9.z = 0.0;
        pvVar17 = (pTVar16->fields)._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcVar18 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
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
          pPStackX_18 = (ParticleSystem *)UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision(pPVar15,(MethodInfo *)0x0);
          pcVar18 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
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
          if ((pcRam_? == (code *)0x0) && (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
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
            bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_isPlaying(pPVar15,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              return;
            }
            pPVar15 = (this->fields).airBubbleParticles;
            if (pPVar15 != (ParticleSystem *)0x0) {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play(pPVar15,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_isPlaying(pPVar15,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pPVar15 = (this->fields).airBubbleParticles;
    if (pPVar15 == (ParticleSystem *)0x0) {
code_?:
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1(pPVar15,1,(MethodInfo *)0x0);
  }
  return;
}


/* AvatarWaterRippleEffect() */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect__ctor(AvatarWaterRippleEffect *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).airBubbleOffset.x = 0.0;
  (this->fields).airBubbleOffset.y = 1.325;
  (this->fields).airBubbleOffset.z = 0.4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2));
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1, ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1), *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_19) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_19 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      uStack_18 = 0;
      uStack_19 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar21 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar22 = *puVar21;
            LOCK();
            uVar23 = *puVar21;
            if (uVar22 == uVar23) {
              *puVar21 = uVar22 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar22 != uVar23);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_20 + 1) && (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17)))) goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_19 + 1 < 0x1000) || (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar2->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Single get_AvatarHeight() */

float Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_get_AvatarHeight(AvatarWaterRippleEffect *this,MethodInfo *method)

{
  fVar1 = (this->fields)._.bounds.m_Extents.y;
  return fVar1 + fVar1;
}

