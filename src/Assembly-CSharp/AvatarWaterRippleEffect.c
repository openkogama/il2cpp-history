
/* Void Initialize(IMovable) */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_Initialize
               (AvatarWaterRippleEffect *this,IMovable *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  WaterSplashComponent::WaterSplashComponent_Initialize
            ((WaterSplashComponent *)this,obj,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar2 != MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if (this_04 == (WaterPlaneManager *)0x0) goto code_?;
    bVar3 = WaterPlaneManager::WaterPlaneManager_get_IsActive(this_04,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
  }
  pXVar4 = (XpBoostParticlePreviewer *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            ((GameObject *)pXVar4,StringLiteral_AirBubbleCollitionPlane,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar4,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  (this->fields).airBubbleCollitionPlane = (GameObject *)pXVar4;
  if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)pXVar4,(MethodInfo *)0x0);
    puVar6 = &stack0xffffffec;
    pOStack_1 = (Object *)0x0;
    fVar7 = 0.0;
    uVar8 = 0x43340000;
    func_?();
    if (pTVar5 != (Transform *)0x0) {
      eulers.y = (float)uVar8;
      eulers.x = (float)puVar6;
      eulers.z = fVar7;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                (pTVar5,eulers,(MethodInfo *)0x0);
      pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)(this->fields).airBubbleParticlesPrefab,
                          UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                         );
      (this->fields).airBubbleParticles = (ParticleSystem *)pXVar4;
      if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pXVar4,(MethodInfo *)0x0);
        this_00 = (this->fields).avatar;
        if ((this_00 != (Avatar_1 *)0x0) &&
           (p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar5,p,(MethodInfo *)0x0);
          this_01 = (this->fields).airBubbleParticles;
          if ((this_01 != (ParticleSystem *)0x0) &&
             (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this_01,(MethodInfo *)0x0),
             pTVar5 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar5,(this->fields).airBubbleOffset,(MethodInfo *)0x0);
            this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(this->fields).airBubbleParticles;
            if (this_02 !=
                (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
              pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                    (this_02,(MethodInfo *)0x0);
              this_03 = (this->fields).airBubbleCollitionPlane;
              if (this_03 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_03,(MethodInfo *)0x0);
                func_?(&pOStack_1);
                (this->fields).isInitialized = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_Update
               (AvatarWaterRippleEffect *this,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  WaterSplashComponent::WaterSplashComponent_Update((WaterSplashComponent *)this,(MethodInfo *)0x0);
  if ((this->fields).isInitialized != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if (pWVar2 == (WaterPlaneManager *)0x0) goto code_?;
    bVar3 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pPVar4 = (this->fields).airBubbleParticles;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).airBubbleParticles;
    }
    else {
      this_00 = (this->fields).avatar;
      if ((this_00 == (Avatar_1 *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_00,(MethodInfo *)0x0),
         pTVar6 == (Transform *)0x0)) goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
      fVar8 = pVVar7->y;
      this_01 = (this->fields).airBubbleCollitionPlane;
      if (this_01 == (GameObject *)0x0) goto code_?;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (((pWVar2 == (WaterPlaneManager *)0x0) ||
          (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pWVar2,(MethodInfo *)0x0),
          this_02 == (Transform *)0x0)) ||
         (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffe4,this_02,(MethodInfo *)0x0),
         pTVar6 == (Transform *)0x0)) goto code_?;
      uVar9 = pVVar7->x;
      uVar10 = pVVar7->y;
      this = (AvatarWaterRippleEffect *)pVVar7->z;
      fVar11 = (float)uVar10;
      value.x = (float)uVar9;
      value = (Vector3)CONCAT84(uVar12,value.x);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar6,value,(MethodInfo *)0x0);
      pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (pWVar2 == (WaterPlaneManager *)0x0) goto code_?;
      fVar13 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(pWVar2,(MethodInfo *)0x0);
      puVar14 = (undefined8 *)func_?();
      pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(pAVar1->fields).airBubbleParticles;
      if ((float)((ulonglong)*puVar14 >> 0x20) + fVar8 < fVar13) {
        if (pDVar5 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                    (pDVar5,(MethodInfo *)0x0);
          pPVar4 = (pAVar1->fields).airBubbleParticles;
          if ((pPVar4 != (ParticleSystem *)0x0) &&
             (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pPVar4,(MethodInfo *)0x0),
             pTVar6 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffcc,pTVar6,(MethodInfo *)0x0);
            pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(pAVar1->fields).airBubbleParticles;
            if (pDVar5 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (pDVar5,(MethodInfo *)0x0);
              func_?();
              func_?();
              pPVar4 = (pAVar1->fields).airBubbleParticles;
              if (pPVar4 != (ParticleSystem *)0x0) {
                bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                        ParticleSystem_get_isPlaying(pPVar4,(MethodInfo *)0x0);
                if (bVar3 != 0) {
                  return;
                }
                pPVar4 = (pAVar1->fields).airBubbleParticles;
                if (pPVar4 != (ParticleSystem *)0x0) {
                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                  ParticleSystem_Play_1(pPVar4,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
    if (pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
code_?:
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying((ParticleSystem *)pDVar5,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pPVar4 = (pAVar1->fields).airBubbleParticles;
      if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                (pPVar4,(MethodInfo *)0x0);
    }
  }
  return;
}


/* AvatarWaterRippleEffect() */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect__ctor
               (AvatarWaterRippleEffect *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x3fa9999a,0x3ecccccd,0);
  (this->fields).airBubbleOffset.x = (float)(undefined4)uStack_2;
  (this->fields).airBubbleOffset.y = (float)uStack_2._4_4_;
  (this->fields).airBubbleOffset.z = fStack_1;
  LockCursorManager3DMode::LockCursorManager3DMode__ctor
            ((LockCursorManager3DMode *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_AvatarHeight() */

float Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_get_AvatarHeight
                (AvatarWaterRippleEffect *this,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&(this->fields)._.bounds,0);
  fStack_3 = (float)((ulonglong)*puVar1 >> 0x20);
  return fStack_3;
}

