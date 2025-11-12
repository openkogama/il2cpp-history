
/* Void DisableCurrentSystem() */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_DisableCurrentSystem
               (InteractableMaterialHitHandler *this,MethodInfo *method)

{
  pPVar1 = (this->fields).currentParticleSystem;
  (this->fields).currentMoveHitParticleType = 0;
  if (pPVar1 == (ParticleSystem *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pPVar1->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  cVar5 = (*pcRam_?)(pvVar3);
  if (cVar5 != '\0') {
    pPVar1 = (this->fields).currentParticleSystem;
    if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
              (pPVar1,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::InteractableMaterialHitHandler_HandleHit
               (InteractableMaterialHitHandler *this,MVControllerColliderHit *moveHit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__ContainsKey_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MStack_1.positionTouchingHit.x = (moveHit->positionTouchingHit).x;
  MStack_1.positionTouchingHit.y = (moveHit->positionTouchingHit).y;
  MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
  MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
  MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
  MStack_1.moveDirection.y = (moveHit->moveDirection).y;
  MStack_1.moveDirection.z = (moveHit->moveDirection).z;
  MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
  MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
  MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
  MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
  MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
  MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
  MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
  MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
  MStack_1.hit.point.x = (moveHit->hit).point.x;
  MStack_1.hit.point.y = (moveHit->hit).point.y;
  MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
  MStack_1.hit.normal.y = (moveHit->hit).normal.y;
  MStack_1.hit.normal.z = (moveHit->hit).normal.z;
  MStack_1.hit.cubePos = (moveHit->hit).cubePos;
  MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
  MStack_1.hit.face = (moveHit->hit).face;
  MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
  MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
  MStack_1.hit.woId = (moveHit->hit).woId;
  MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
  MStack_1.hit.collider = (moveHit->hit).collider;
  MStack_1.hit.transform = (moveHit->hit).transform;
  MStack_1.hit.cube = (moveHit->hit).cube;
  MStack_1.hit.distance = (moveHit->hit).distance;
  MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
  MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
  MStack_1.material = moveHit->material;
  if ((MStack_1.material == (MVMaterial *)0x0) ||
     (this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).particles,
     this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0))
  goto code_?;
  key = ((MStack_1.material)->fields)._ModifierPackageType_k__BackingField;
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
           Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                     (this_00,key,
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__ContainsKey_AvatarModifierPackageType_
                      ->klass->rgctx_data[0x21].method);
  IVar3 = (this->fields).currentMoveHitParticleType;
  if (iVar2 < 0) {
    if (IVar3 != 0) {
      pPVar4 = (this->fields).currentParticleSystem;
      (this->fields).currentMoveHitParticleType = 0;
      if (pPVar4 == (ParticleSystem *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pPVar4->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar4,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      cVar8 = (*pcRam_?)(pvVar6);
      if (cVar8 != '\0') {
        pPVar4 = (this->fields).currentParticleSystem;
        if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar4,1,(MethodInfo *)0x0);
      }
    }
  }
  else {
    if (key != IVar3) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar4 = (this->fields).currentParticleSystem;
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
      if (pPVar4 != (ParticleSystem *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pPVar4->fields)._._.m_CachedPtr != (void *)0x0) {
          pPVar4 = (this->fields).currentParticleSystem;
          if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
          bVar9 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                  ParticleSystem_get_isPlaying(pPVar4,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            pPVar4 = (this->fields).currentParticleSystem;
            if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                      (pPVar4,1,(MethodInfo *)0x0);
          }
        }
      }
      this_01 = (this->fields).particles;
      if (this_01 == (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)0x0)
      goto code_?;
      pPVar4 = (ParticleSystem *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                          );
      bVar10 = iRam_? != 0;
      (this->fields).currentParticleSystem = pPVar4;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).currentParticleSystem >> 0xc);
        puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar13 = *puVar12;
          LOCK();
          uVar14 = *puVar12;
          if (uVar13 == uVar14) {
            *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (uVar13 != uVar14);
      }
      MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
      MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
      MStack_1.positionTouchingHit.x = (moveHit->positionTouchingHit).x;
      MStack_1.positionTouchingHit.y = (moveHit->positionTouchingHit).y;
      MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
      MStack_1.moveDirection.y = (moveHit->moveDirection).y;
      MStack_1.moveDirection.z = (moveHit->moveDirection).z;
      MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
      MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
      (this->fields).currentMoveHitParticleType = key;
      MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
      MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
      MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
      MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
      MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
      MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
      VStack_15.x = (moveHit->hit).point.x;
      VStack_15.y = (moveHit->hit).point.y;
      MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
      MStack_1.hit.normal.y = (moveHit->hit).normal.y;
      MStack_1.hit.normal.z = (moveHit->hit).normal.z;
      MStack_1.hit.cubePos = (moveHit->hit).cubePos;
      MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
      MStack_1.hit.face = (moveHit->hit).face;
      MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
      MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
      MStack_1.hit.woId = (moveHit->hit).woId;
      MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
      MStack_1.hit.cube = (moveHit->hit).cube;
      MStack_1.hit.distance = (moveHit->hit).distance;
      MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
      MStack_1.hit.collider = (moveHit->hit).collider;
      MStack_1.hit.transform = (moveHit->hit).transform;
      MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
      MStack_1.material = moveHit->material;
      uStack_16._0_4_ = (moveHit->positionTouchingHit).x;
      uStack_16._4_4_ = (moveHit->positionTouchingHit).y;
      uStack_17 = *(undefined8 *)&(moveHit->positionTouchingHit).z;
      uStack_18._0_4_ = (moveHit->moveDirection).y;
      uStack_18._4_4_ = (moveHit->moveDirection).z;
      uStack_19._0_4_ = (moveHit->elipsoidNormal).x;
      uStack_19._4_4_ = (moveHit->elipsoidNormal).y;
      uStack_20 = *(undefined8 *)&(moveHit->elipsoidNormal).z;
      uStack_21._0_4_ = (moveHit->slopeNormal).y;
      uStack_21._4_4_ = (moveHit->slopeNormal).z;
      uStack_22._0_4_ = (moveHit->impactVelocity).x;
      uStack_22._4_4_ = (moveHit->impactVelocity).y;
      uStack_23 = *(undefined8 *)&(moveHit->impactVelocity).z;
      uStack_24._0_4_ = (moveHit->hit).point.x;
      uStack_24._4_4_ = (moveHit->hit).point.y;
      uVar7 = *(undefined8 *)&(moveHit->hit).point.z;
      uVar25 = (moveHit->hit).normal.y;
      uVar26 = (moveHit->hit).normal.z;
      uStack_27 = *(undefined8 *)&(moveHit->hit).cubePos;
      uStack_28 = (undefined4)uVar7;
      fStack_29 = (float)((ulonglong)uVar7 >> 0x20);
      uStack_30._0_4_ = (moveHit->hit).face;
      uStack_30._4_1_ = (moveHit->hit).isCubeHit;
      uStack_30._5_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
      uStack_31 = *(undefined8 *)&(moveHit->hit).woId;
      pCStack_32 = (moveHit->hit).cube;
      uStack_33 = *(undefined8 *)&(moveHit->hit).distance;
      pCStack_34 = (moveHit->hit).collider;
      pTStack_35 = (moveHit->hit).transform;
      iStack_36 = (moveHit->hit).interactionFlags;
      pMStack_37 = moveHit->material;
      VStack_38.y = (float)uVar25;
      VStack_38.x = fStack_29;
      VStack_38.z = (float)uVar26;
      VStack_15.z = MStack_1.hit.point.z;
      MStack_1.hit.point._0_8_ = VStack_15._0_8_;
      fStack_39 = (float)uVar25;
      fStack_40 = (float)uVar26;
      uStack_41 = MStack_1._160_8_;
      InteractableMaterialHitHandler_SetParticlePlacement
                (this,&VStack_15,&VStack_38,(MethodInfo *)0x0);
    }
    MStack_1.positionTouchingHit.x = (moveHit->positionTouchingHit).x;
    MStack_1.positionTouchingHit.y = (moveHit->positionTouchingHit).y;
    MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
    MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
    MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
    MStack_1.moveDirection.y = (moveHit->moveDirection).y;
    MStack_1.moveDirection.z = (moveHit->moveDirection).z;
    MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
    MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
    MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
    MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
    MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
    MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
    MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
    MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
    MStack_1.hit.point.x = (moveHit->hit).point.x;
    MStack_1.hit.point.y = (moveHit->hit).point.y;
    MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
    MStack_1.hit.normal.y = (moveHit->hit).normal.y;
    MStack_1.hit.normal.z = (moveHit->hit).normal.z;
    MStack_1.hit.cubePos = (moveHit->hit).cubePos;
    MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
    MStack_1.hit.face = (moveHit->hit).face;
    MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
    MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
    MStack_1.hit.woId = (moveHit->hit).woId;
    MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
    MStack_1.hit.cube = (moveHit->hit).cube;
    MStack_1.hit.distance = (moveHit->hit).distance;
    MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
    MStack_1.hit.collider = (moveHit->hit).collider;
    MStack_1.hit.transform = (moveHit->hit).transform;
    MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
    MStack_1.material = moveHit->material;
    InteractableMaterialHitHandler_UpdateCurrentSystem(this,&MStack_1,(MethodInfo *)0x0);
  }
  return;
}


/* Void Initialize(MaterialHitPackage[], Transform) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::InteractableMaterialHitHandler_Initialize
               (InteractableMaterialHitHandler *this,MaterialHitPackage__Array *packages,
               Transform *parent,MethodInfo *method)

{
  behavior = (InsertionBehavior__Enum)method;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__set_Item_AvatarModifierPackageType__UnityEngine__ParticleSystem_
                  ,packages,parent,behavior);
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
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (packages == (MaterialHitPackage__Array *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = packages->vector;
  do {
    if ((int)packages->max_length <= (int)uVar1) {
      return;
    }
    if ((uint)packages->max_length <= uVar1) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pPVar4 = pMVar3->ParticlePrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pPVar4 = (ParticleSystem *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pPVar4,
                        UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                       );
    if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pPVar4->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar4,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    pvVar5 = (void *)(*pcRam_?)(pvVar5);
    obj = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
          Unmarshal_UnmarshalUnityObject
                    (pvVar5,
                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                    );
    if (obj == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar7 = obj[1].klass;
    if (pOVar7 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    if (parent == (Transform *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (parent->fields)._._.m_CachedPtr;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pOVar7,pvVar5,1);
    if ((uint)packages->max_length <= uVar1) goto code_?;
    this_00 = (this->fields).particles;
    if (this_00 == (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)0x0)
    goto code_?;
    behavior = CONCAT31((int3)(behavior >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,pMVar3->PackageType,
               (Object *)pPVar4,behavior,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__set_Item_AvatarModifierPackageType__UnityEngine__ParticleSystem_
               ->klass->rgctx_data[0x22].method);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
              (pPVar4,1,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    pMVar3 = pMVar3 + 1;
  } while( true );
}


/* Void SetNewCurrentParticleSystem(AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_SetNewCurrentParticleSystem
               (InteractableMaterialHitHandler *this,AvatarModifierPackageType__Enum newParticleType
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentParticleSystem;
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
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields).currentParticleSystem;
      if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
      bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pPVar1 = (this->fields).currentParticleSystem;
        if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar1,1,(MethodInfo *)0x0);
      }
    }
  }
  this_00 = (this->fields).particles;
  if (this_00 != (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)0x0) {
    pPVar1 = (ParticleSystem *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,newParticleType,
                        MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                       );
    bVar3 = iRam_? != 0;
    (this->fields).currentParticleSystem = pPVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).currentParticleSystem >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    (this->fields).currentMoveHitParticleType = newParticleType;
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetParticlePlacement(Vector3, Vector3) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_SetParticlePlacement
               (InteractableMaterialHitHandler *this,Vector3 *position,Vector3 *eulerRotation,
               MethodInfo *method)

{
  pPVar1 = (this->fields).currentParticleSystem;
  if ((pPVar1 != (ParticleSystem *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pPVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    pPVar1 = (this->fields).currentParticleSystem;
    if (pPVar1 != (ParticleSystem *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pPVar1,(MethodInfo *)0x0);
      uVar6 = eulerRotation->x;
      uVar7 = eulerRotation->y;
      VStack_8.x = position->x;
      VStack_8.y = position->y;
      VStack_8.z = eulerRotation->z + position->z;
      if (pTVar2 == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      VStack_8.y = (float)uVar7 + VStack_8.y;
      VStack_8.x = (float)uVar6 + VStack_8.x;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                (pTVar2,&VStack_8,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateCurrentSystem(MVControllerColliderHit) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_UpdateCurrentSystem
               (InteractableMaterialHitHandler *this,MVControllerColliderHit *moveHit,
               MethodInfo *method)

{
  pPVar1 = (this->fields).currentParticleSystem;
  if (pPVar1 == (ParticleSystem *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pPVar1->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  cVar5 = (*pcRam_?)(pvVar3);
  if ((cVar5 == '\0') &&
     (fVar6 = (this->fields).prevPos.x, fVar7 = (this->fields).prevPos.y,
     fVar8 = (moveHit->hit).point.y, fVar9 = (moveHit->hit).point.x,
     fVar10 = (this->fields).prevPos.z, fVar11 = (moveHit->hit).point.z,
     _UNK_? <
     (float)((uint)((fVar6 * fVar6 + fVar7 * fVar7 + fVar10 * fVar10) -
                   (fVar9 * fVar9 + fVar8 * fVar8 + fVar11 * fVar11)) & _UNK_?))) {
    fVar6 = (moveHit->hit).point.y;
    fStack_12 = (float)*(undefined8 *)&(moveHit->hit).point.z;
    uStack_13._0_4_ = (moveHit->moveDirection).y;
    uStack_13._4_4_ = (moveHit->moveDirection).z;
    uStack_14._0_4_ = (moveHit->elipsoidNormal).x;
    uStack_14._4_4_ = (moveHit->elipsoidNormal).y;
    (this->fields).prevPos.x = (moveHit->hit).point.x;
    (this->fields).prevPos.y = fVar6;
    uStack_15._0_4_ = (moveHit->positionTouchingHit).x;
    uStack_15._4_4_ = (moveHit->positionTouchingHit).y;
    uStack_16 = *(undefined8 *)&(moveHit->positionTouchingHit).z;
    (this->fields).prevPos.z = fStack_12;
    uStack_17 = *(undefined8 *)&moveHit->testWithOutMoving;
    uStack_18 = *(undefined8 *)&(moveHit->elipsoidNormal).z;
    uStack_19._0_4_ = (moveHit->slopeNormal).y;
    uStack_19._4_4_ = (moveHit->slopeNormal).z;
    uStack_20._0_4_ = (moveHit->impactVelocity).x;
    uStack_20._4_4_ = (moveHit->impactVelocity).y;
    uStack_21 = *(undefined8 *)&(moveHit->impactVelocity).z;
    VStack_22.x = (moveHit->hit).point.x;
    VStack_22.y = (moveHit->hit).point.y;
    auStack_23._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
    uStack_24._0_4_ = (moveHit->hit).normal.y;
    uStack_24._4_4_ = (moveHit->hit).normal.z;
    uStack_25 = *(undefined8 *)&(moveHit->hit).cubePos;
    uStack_26._0_4_ = (moveHit->hit).face;
    uStack_26._4_1_ = (moveHit->hit).isCubeHit;
    uStack_26._5_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
    uStack_27 = *(undefined8 *)&(moveHit->hit).woId;
    pCStack_28 = (moveHit->hit).cube;
    uStack_29 = *(undefined8 *)&(moveHit->hit).distance;
    pCStack_30 = (moveHit->hit).collider;
    pTStack_31 = (moveHit->hit).transform;
    iStack_32 = (moveHit->hit).interactionFlags;
    pMStack_33 = moveHit->material;
    uStack_34._0_4_ = (moveHit->positionTouchingHit).x;
    uStack_34._4_4_ = (moveHit->positionTouchingHit).y;
    uStack_35 = *(undefined8 *)&(moveHit->positionTouchingHit).z;
    uStack_36._0_4_ = (moveHit->moveDirection).y;
    uStack_36._4_4_ = (moveHit->moveDirection).z;
    uStack_37._0_4_ = (moveHit->elipsoidNormal).x;
    uStack_37._4_4_ = (moveHit->elipsoidNormal).y;
    uStack_38 = *(undefined8 *)&(moveHit->elipsoidNormal).z;
    uStack_39._0_4_ = (moveHit->slopeNormal).y;
    uStack_39._4_4_ = (moveHit->slopeNormal).z;
    uStack_40._0_4_ = (moveHit->impactVelocity).x;
    uStack_40._4_4_ = (moveHit->impactVelocity).y;
    uStack_41 = *(undefined8 *)&(moveHit->impactVelocity).z;
    uStack_42._0_4_ = (moveHit->hit).point.x;
    uStack_42._4_4_ = (moveHit->hit).point.y;
    uVar4 = *(undefined8 *)&(moveHit->hit).point.z;
    uVar43 = (moveHit->hit).normal.y;
    uVar44 = (moveHit->hit).normal.z;
    uStack_45 = *(undefined8 *)&(moveHit->hit).cubePos;
    fStack_12 = (float)uVar4;
    fStack_46 = (float)((ulonglong)uVar4 >> 0x20);
    uStack_47._0_4_ = (moveHit->hit).face;
    uStack_47._4_1_ = (moveHit->hit).isCubeHit;
    uStack_47._5_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
    uStack_48 = *(undefined8 *)&(moveHit->hit).woId;
    pCStack_49 = (moveHit->hit).cube;
    uStack_50 = *(undefined8 *)&(moveHit->hit).distance;
    pCStack_51 = (moveHit->hit).collider;
    pTStack_52 = (moveHit->hit).transform;
    iStack_53 = (moveHit->hit).interactionFlags;
    pMStack_54 = moveHit->material;
    VStack_55.y = (float)uVar43;
    VStack_55.x = fStack_46;
    VStack_55.z = (float)uVar44;
    VStack_22.z = (float)auStack_23._8_4_;
    fStack_56 = (float)uVar43;
    fStack_57 = (float)uVar44;
    auStack_23._0_8_ = VStack_22._0_8_;
    uStack_58 = uStack_17;
    InteractableMaterialHitHandler_SetParticlePlacement
              (this,&VStack_22,&VStack_55,(MethodInfo *)0x0);
    pPVar1 = (this->fields).currentParticleSystem;
    if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
              (pPVar1,1,(MethodInfo *)0x0);
  }
  return;
}


/* InteractableMaterialHitHandler() */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::InteractableMaterialHitHandler__ctor
               (InteractableMaterialHitHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).particles =
       (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  (this->fields).prevPos.x = 0.0;
  (this->fields).prevPos.y = 0.0;
  (this->fields).prevPos.z = 0.0;
  return;
}

