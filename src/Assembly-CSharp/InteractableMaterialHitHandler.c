
/* Void DisableCurrentSystem() */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_DisableCurrentSystem
               (InteractableMaterialHitHandler *this,MethodInfo *method)

{
  this_00 = (this->fields).currentParticleSystem;
  (this->fields).currentMoveHitParticleType = 0;
  if (this_00 != (ParticleSystem *)0x0) {
    bVar1 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if ((this->fields).currentParticleSystem != (ParticleSystem *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)(in_stack_2,1);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::InteractableMaterialHitHandler_HandleHit
               (InteractableMaterialHitHandler *this,MVControllerColliderHit moveHit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__ContainsKey_AvatarModifierPackageType_
                   );
    cRam_? = '\x01';
  }
  if ((moveHit.hit.interactionFlags._4_4_ != 0) &&
     (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).particles,
     this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
    key = *(Object **)(moveHit.hit.interactionFlags._4_4_ + 0x30);
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__ContainsKey_AvatarModifierPackageType_
                      );
    pOVar2 = (Object *)(this->fields).currentMoveHitParticleType;
    if (bVar1 == 0) {
      if (pOVar2 == (Object *)0x0) {
        return;
      }
      pPVar3 = (this->fields).currentParticleSystem;
      (this->fields).currentMoveHitParticleType = 0;
      if (pPVar3 != (ParticleSystem *)0x0) {
        bVar1 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return;
        }
        pPVar3 = (this->fields).currentParticleSystem;
        if (pPVar3 != (ParticleSystem *)0x0) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                    (pPVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (key != pOVar2) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        pPVar3 = (this->fields).currentParticleSystem;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pPVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pPVar3 = (this->fields).currentParticleSystem;
          if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
          bVar1 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                  ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            pPVar3 = (this->fields).currentParticleSystem;
            if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                      (pPVar3,1,(MethodInfo *)0x0);
          }
        }
        this_01 = (this->fields).particles;
        if (this_01 == (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)0x0)
        goto code_?;
        pPVar3 = (ParticleSystem *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                            (Int32Enum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                           );
        (this->fields).currentParticleSystem = pPVar3;
        func_?(&(this->fields).currentParticleSystem,pPVar3);
        (this->fields).currentMoveHitParticleType = (int32_t)key;
        InteractableMaterialHitHandler_SetParticlePlacement
                  (this,moveHit._60_12_,moveHit.hit._8_12_,(MethodInfo *)0x0);
      }
      pPVar3 = (this->fields).currentParticleSystem;
      if (pPVar3 != (ParticleSystem *)0x0) {
        bVar1 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
        if ((bVar1 == 0) &&
           (fVar4 = (this->fields).prevPos.y, fVar5 = (this->fields).prevPos.x,
           fVar6 = (this->fields).prevPos.z,
           _UNK_? <
           (float)((uint)((fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6) -
                         ((float)moveHit._60_4_ * (float)moveHit._60_4_ +
                          moveHit.hit.point.x * moveHit.hit.point.x +
                         moveHit.hit.point.y * moveHit.hit.point.y)) & _UNK_?))) {
          (this->fields).prevPos.x = (float)(int)moveHit._60_8_;
          (this->fields).prevPos.y = (float)(int)((ulonglong)moveHit._60_8_ >> 0x20);
          (this->fields).prevPos.z = moveHit.hit.point.y;
          InteractableMaterialHitHandler_SetParticlePlacement
                    (this,moveHit._60_12_,moveHit.hit._8_12_,(MethodInfo *)0x0);
          pPVar3 = (this->fields).currentParticleSystem;
          if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                    (pPVar3,1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(MaterialHitPackage[], Transform) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::InteractableMaterialHitHandler_Initialize
               (InteractableMaterialHitHandler *this,MaterialHitPackage__Array *packages,
               Transform *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__set_Item_AvatarModifierPackageType__UnityEngine__ParticleSystem_
                   );
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (packages != (MaterialHitPackage__Array *)0x0) {
    pMVar2 = packages->vector;
    while( true ) {
      if ((int)packages->max_length <= (int)uVar1) {
        return;
      }
      if (packages->max_length <= uVar1) break;
      pPVar3 = pMVar2->ParticlePrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pPVar3 = (ParticleSystem *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pPVar3,
                          UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                         );
      if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pPVar3,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,1,(MethodInfo *)0x0);
      if (packages->max_length <= uVar1) break;
      this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).particles;
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)pMVar2->PackageType,(Object *)pPVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__set_Item_AvatarModifierPackageType__UnityEngine__ParticleSystem_
                );
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                (pPVar3,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      pMVar2 = pMVar2 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetNewCurrentParticleSystem(AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_SetNewCurrentParticleSystem
               (InteractableMaterialHitHandler *this,AvatarModifierPackageType__Enum newParticleType
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentParticleSystem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
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
  this_00 = (this->fields).particles;
  if (this_00 != (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)0x0) {
    pPVar1 = (ParticleSystem *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,newParticleType,
                        MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                       );
    (this->fields).currentParticleSystem = pPVar1;
    func_?();
    (this->fields).currentMoveHitParticleType = newParticleType;
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetParticlePlacement(Vector3, Vector3) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_SetParticlePlacement
               (InteractableMaterialHitHandler *this,Vector3 position,Vector3 eulerRotation,
               MethodInfo *method)

{
  pPVar1 = (this->fields).currentParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pPVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar2,position,(MethodInfo *)0x0);
      pPVar1 = (this->fields).currentParticleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pPVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          worldPosition.y = eulerRotation.y + position.y;
          worldPosition.x = position.x + eulerRotation.x;
          worldPosition.z = position.z + eulerRotation.z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                    (pTVar2,worldPosition,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateCurrentSystem(MVControllerColliderHit) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_UpdateCurrentSystem
               (InteractableMaterialHitHandler *this,MVControllerColliderHit moveHit,
               MethodInfo *method)

{
  pPVar1 = (this->fields).currentParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
    if ((bVar2 == 0) &&
       (fVar3 = (this->fields).prevPos.y, fVar4 = (this->fields).prevPos.x,
       fVar5 = (this->fields).prevPos.z,
       _UNK_? <
       (float)((uint)((fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5) -
                     ((float)moveHit._60_4_ * (float)moveHit._60_4_ +
                      moveHit.hit.point.x * moveHit.hit.point.x +
                     moveHit.hit.point.y * moveHit.hit.point.y)) & _UNK_?))) {
      (this->fields).prevPos.x = (float)(int)moveHit._60_8_;
      (this->fields).prevPos.y = (float)(int)((ulonglong)moveHit._60_8_ >> 0x20);
      (this->fields).prevPos.z = moveHit.hit.point.y;
      InteractableMaterialHitHandler_SetParticlePlacement
                (this,moveHit._60_12_,moveHit.hit._8_12_,(MethodInfo *)0x0);
      pPVar1 = (this->fields).currentParticleSystem;
      if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar1,1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* InteractableMaterialHitHandler() */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::InteractableMaterialHitHandler__ctor
               (InteractableMaterialHitHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>
                           );
  if (this_00 != (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).particles = this_00;
    func_?(method_00,this_00);
    (this->fields).prevPos.x = 0.0;
    (this->fields).prevPos.y = 0.0;
    (this->fields).prevPos.z = 0.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

