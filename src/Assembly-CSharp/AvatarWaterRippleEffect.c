
/* Void Initialize(IMovable) */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_Initialize
               (AvatarWaterRippleEffect *this,IMovable *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_AirBubbleCollitionPlane);
    cRam_? = '\x01';
  }
  WaterSplashComponent::WaterSplashComponent_Initialize
            ((WaterSplashComponent *)this,obj,(MethodInfo *)0x0);
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Edit) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if (this_01 == (WaterPlaneManager *)0x0) goto code_?;
    bVar2 = WaterPlaneManager::WaterPlaneManager_get_IsActive(this_01,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
  }
  PStack_3.m_ParticleSystem = (ParticleSystem *)TypeInfo__UnityEngine__GameObject;
  pGVar4 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar4,StringLiteral_AirBubbleCollitionPlane,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pGVar4 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar4,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  ppGVar5 = &(this->fields).airBubbleCollitionPlane;
  *ppGVar5 = pGVar4;
  func_?();
  if ((*ppGVar5 != (GameObject *)0x0) &&
     (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (*ppGVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
              (pTVar6,(Vector3)ZEXT812(0x43340000),(MethodInfo *)0x0);
    pPVar7 = (ParticleSystem *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)(this->fields).airBubbleParticlesPrefab,
                        UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                       );
    ppPVar8 = &(this->fields).airBubbleParticles;
    *ppPVar8 = pPVar7;
    func_?(ppPVar8,pPVar7);
    if (*ppPVar8 != (ParticleSystem *)0x0) {
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)*ppPVar8,(MethodInfo *)0x0);
      this_00 = (this->fields).avatar;
      if ((this_00 != (Avatar *)0x0) &&
         (p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                  (pTVar6,p,(MethodInfo *)0x0);
        if ((*ppPVar8 != (ParticleSystem *)0x0) &&
           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)*ppPVar8,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar6,(this->fields).airBubbleOffset,(MethodInfo *)0x0);
          if (*ppPVar8 != (ParticleSystem *)0x0) {
            PStack_3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                       ParticleSystem_get_collision(*ppPVar8,(MethodInfo *)0x0);
            if (*ppGVar5 != (GameObject *)0x0) {
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (*ppGVar5,(MethodInfo *)0x0);
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+CollisionModule::
              ParticleSystem_CollisionModule_SetPlane_Injected(&PStack_3,0,pTVar6,(MethodInfo *)0x0)
              ;
              (this->fields).isInitialized = 1;
              return;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  WaterSplashComponent::WaterSplashComponent_Update((WaterSplashComponent *)this,(MethodInfo *)0x0);
  if ((this->fields).isInitialized != 0) {
    pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if (pWVar1 == (WaterPlaneManager *)0x0) goto code_?;
    bVar2 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pPVar3 = (this->fields).airBubbleParticles;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      in_stack_4 = (this->fields).airBubbleParticles;
      if (in_stack_4 == (ParticleSystem *)0x0) goto code_?;
      in_stack_5 = (MethodInfo *)0x0;
    }
    else {
      this_00 = (this->fields).avatar;
      if ((this_00 == (Avatar *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
      goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,pTVar6,(MethodInfo *)0x0);
      fVar8 = pVVar7->y;
      this_01 = (this->fields).airBubbleCollitionPlane;
      if (this_01 == (GameObject *)0x0) goto code_?;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0);
      pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (((pWVar1 == (WaterPlaneManager *)0x0) ||
          (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pWVar1,(MethodInfo *)0x0), this_02 == (Transform *)0x0)
          ) || (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffe0,this_02,(MethodInfo *)0x0),
               pTVar6 == (Transform *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar6,*pVVar7,(MethodInfo *)0x0);
      pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (pWVar1 == (WaterPlaneManager *)0x0) goto code_?;
      fVar9 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(pWVar1,(MethodInfo *)0x0);
      uVar10 = (this->fields)._.bounds.m_Extents.y;
      pPVar3 = (this->fields).airBubbleParticles;
      if ((float)uVar10 * _UNK_? + fVar8 < fVar9) {
        if (pPVar3 != (ParticleSystem *)0x0) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
          ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
          pPVar3 = (this->fields).airBubbleParticles;
          if ((pPVar3 != (ParticleSystem *)0x0) &&
             (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pPVar3,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0
             )) {
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd4,pTVar6,(MethodInfo *)0x0);
            fVar8 = pVVar7->y;
            pPVar3 = (this->fields).airBubbleParticles;
            if (pPVar3 != (ParticleSystem *)0x0) {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
              fVar11 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule
                       ::ParticleSystem_MainModule_get_startSpeedMultiplier_Injected
                                 ((ParticleSystem_MainModule *)&stack0xfffffff8,(MethodInfo *)0x0);
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
              ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                        ((ParticleSystem_MainModule *)&stack0xffffffec,(fVar9 - fVar8) / fVar11,
                         (MethodInfo *)0x0);
              pPVar3 = (this->fields).airBubbleParticles;
              if (pPVar3 != (ParticleSystem *)0x0) {
                bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                        ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
                if (bVar2 != 0) {
                  return;
                }
                pPVar3 = (this->fields).airBubbleParticles;
                if (pPVar3 != (ParticleSystem *)0x0) {
                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                  ParticleSystem_Play_1(pPVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
    }
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(in_stack_4,in_stack_5);
    if (bVar2 != 0) {
      pPVar3 = (this->fields).airBubbleParticles;
      if (pPVar3 == (ParticleSystem *)0x0) {
code_?:
        func_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                (pPVar3,(MethodInfo *)0x0);
    }
  }
  return;
}


/* AvatarWaterRippleEffect() */

void Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect__ctor
               (AvatarWaterRippleEffect *this,MethodInfo *method)

{
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).airBubbleOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields).airBubbleOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).airBubbleOffset.z = 0.4;
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor((Singleton_1_System_Object_ *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_AvatarHeight() */

float Assembly-CSharp.dll::AvatarWaterRippleEffect::AvatarWaterRippleEffect_get_AvatarHeight
                (AvatarWaterRippleEffect *this,MethodInfo *method)

{
  uVar1 = (this->fields)._.bounds.m_Extents.y;
  return (float)uVar1 + (float)uVar1;
}

