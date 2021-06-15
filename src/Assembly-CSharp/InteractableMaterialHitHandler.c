
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
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?,0);
        func_?(uVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(in_stack_4,1);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::InteractableMaterialHitHandler_HandleHit
               (InteractableMaterialHitHandler *this,MVControllerColliderHit moveHit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (moveHit.hit.interactionFlags._4_4_ != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
    key = AddDotsToTruncatedText+<Start>c__Iterator0::
          AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                    (moveHit.hit.interactionFlags._4_4_,(MethodInfo *)0x0);
    pDVar1 = (this->fields).particles;
    if (pDVar1 != (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[AvatarModifierPackageType,System::Object]::
              Dictionary_2_AvatarModifierPackageType_System_Object__ContainsKey
                        ((Dictionary_2_AvatarModifierPackageType_System_Object_ *)pDVar1,
                         (AvatarModifierPackageType__Enum)key,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__ContainsKey_AvatarModifierPackageType_
                        );
      pOVar3 = (Object *)(this->fields).currentMoveHitParticleType;
      if (bVar2 == 0) {
        if (pOVar3 != (Object *)0x0) {
          pPVar4 = (this->fields).currentParticleSystem;
          (this->fields).currentMoveHitParticleType = 0;
          if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
          bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                  ParticleSystem_get_isPlaying(pPVar4,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            pPVar4 = (this->fields).currentParticleSystem;
            if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                      (pPVar4,(MethodInfo *)0x0);
          }
        }
      }
      else {
        if (key != pOVar3) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPStack_5 = (this->fields).currentParticleSystem;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pPStack_5,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            pPVar4 = (this->fields).currentParticleSystem;
            if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
            bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                    ParticleSystem_get_isPlaying(pPVar4,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              pPVar4 = (this->fields).currentParticleSystem;
              if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_Stop_1(pPVar4,1,(MethodInfo *)0x0);
            }
          }
          pDVar1 = (this->fields).particles;
          if (pDVar1 == (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)0x0)
          goto code_?;
          pPVar4 = (ParticleSystem *)
                   mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[AvatarModifierPackageType,System::Object]::
                   Dictionary_2_AvatarModifierPackageType_System_Object__get_Item
                             ((Dictionary_2_AvatarModifierPackageType_System_Object_ *)pDVar1,
                              (AvatarModifierPackageType__Enum)key,
                              MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                             );
          (this->fields).currentParticleSystem = pPVar4;
          (this->fields).currentMoveHitParticleType = (int32_t)key;
          position_00.z = moveHit.hit.point.y;
          position_00.x = (float)moveHit._60_4_;
          position_00.y = moveHit.hit.point.x;
          eulerRotation_00.z = moveHit.hit.normal.y;
          eulerRotation_00.x = moveHit.hit.point.z;
          eulerRotation_00.y = moveHit.hit.normal.x;
          InteractableMaterialHitHandler_SetParticlePlacement
                    (this,position_00,eulerRotation_00,(MethodInfo *)0x0);
        }
        puVar6 = (undefined4 *)&stack0x00000008;
        puVar7 = (undefined4 *)&stack0xffffff68;
        for (iVar8 = 0x24; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pPVar4 = (this->fields).currentParticleSystem;
        if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
        bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                ParticleSystem_get_isPlaying(pPVar4,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          pVVar9 = &(this->fields).prevPos;
          fVar10 = (float10)func_?(pVVar9,0);
          moveHit.material = (MVMaterial *)(float)fVar10;
          fVar10 = (float10)func_?(&uStack_11,0);
          pPStack_5 = (ParticleSystem *)(float)fVar10;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          if (_UNK_? <
              (float)(double)CONCAT44((uint)((ulonglong)
                                             (double)((float)moveHit.material - (float)pPStack_5) >>
                                            0x20) & _UNK_?,
                                      SUB84((double)((float)moveHit.material - (float)pPStack_5),0)
                                      & _UNK_?)) {
            pVVar9->x = (float)(undefined4)uStack_11;
            pVVar9->y = (float)uStack_11._4_4_;
            (this->fields).prevPos.z = fStack_12;
            position.z = fStack_12;
            position.x = (float)(undefined4)uStack_11;
            position.y = (float)uStack_11._4_4_;
            eulerRotation.z = fStack_13;
            eulerRotation.x = (float)(undefined4)uStack_14;
            eulerRotation.y = (float)uStack_14._4_4_;
            InteractableMaterialHitHandler_SetParticlePlacement
                      (this,position,eulerRotation,(MethodInfo *)0x0);
            pPVar4 = (this->fields).currentParticleSystem;
            if (pPVar4 != (ParticleSystem *)0x0) {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                        (pPVar4,1,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Initialize(MaterialHitPackage[], Transform) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::InteractableMaterialHitHandler_Initialize
               (InteractableMaterialHitHandler *this,MaterialHitPackage__Array *packages,
               Transform *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (packages != (MaterialHitPackage__Array *)0x0) {
    ppPVar2 = &packages->vector[0].ParticlePrefab;
    while( true ) {
      if ((int)packages->max_length <= (int)uVar1) {
        return;
      }
      if (packages->max_length <= uVar1) break;
      pXVar3 = (XpBoostParticlePreviewer *)*ppPVar2;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar3,
                          UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                         );
      if (pXVar3 == (XpBoostParticlePreviewer *)0x0) goto code_?;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pXVar3,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,1,(MethodInfo *)0x0);
      this_00 = (this->fields).particles;
      pAVar4 = (AvatarModifierPackageType__Enum *)func_?();
      if (this_00 == (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarModifierPackageType,System::
      Object]::Dictionary_2_AvatarModifierPackageType_System_Object__set_Item
                ((Dictionary_2_AvatarModifierPackageType_System_Object_ *)this_00,*pAVar4,
                 (Object *)pXVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__set_Item_AvatarModifierPackageType__UnityEngine__ParticleSystem_
                );
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                ((ParticleSystem *)pXVar3,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      ppPVar2 = ppPVar2 + 2;
    }
    uVar5 = func_?(0,0);
    func_?(uVar5);
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetNewCurrentParticleSystem(AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_SetNewCurrentParticleSystem
               (InteractableMaterialHitHandler *this,AvatarModifierPackageType__Enum newParticleType
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentParticleSystem;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
             mscorlib.dll::System::Collections::Generic::
             Dictionary`2[AvatarModifierPackageType,System::Object]::
             Dictionary_2_AvatarModifierPackageType_System_Object__get_Item
                       ((Dictionary_2_AvatarModifierPackageType_System_Object_ *)this_00,
                        newParticleType,
                        MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__get_Item_AvatarModifierPackageType_
                       );
    (this->fields).currentMoveHitParticleType = newParticleType;
    (this->fields).currentParticleSystem = pPVar1;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pPVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar2,position,(MethodInfo *)0x0);
      pPVar1 = (this->fields).currentParticleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        VStack_3.z = (float)&UNK_?;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pPVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          position.x = (float)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        a.y = position.y;
        a.x = position.x;
        a.z = position.z;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_3,a,eulerRotation,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                    (pTVar2,*pVVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateCurrentSystem(MVControllerColliderHit) */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::
     InteractableMaterialHitHandler_UpdateCurrentSystem
               (InteractableMaterialHitHandler *this,MVControllerColliderHit moveHit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pVVar3 = &(this->fields).prevPos;
      fVar4 = (float10)func_?(pVVar3,0);
      fVar5 = (float10)func_?(&moveHit.field_0x3c,0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      if (_UNK_? <
          (float)(double)CONCAT44((uint)((ulonglong)(double)((float)fVar4 - (float)fVar5) >> 0x20) &
                                  _UNK_?,
                                  SUB84((double)((float)fVar4 - (float)fVar5),0) & _UNK_?)) {
        pVVar3->x = (float)moveHit._60_4_;
        pVVar3->y = moveHit.hit.point.x;
        (this->fields).prevPos.z = moveHit.hit.point.y;
        position.z = moveHit.hit.point.y;
        position.x = (float)moveHit._60_4_;
        position.y = moveHit.hit.point.x;
        eulerRotation.z = moveHit.hit.normal.y;
        eulerRotation.x = moveHit.hit.point.z;
        eulerRotation.y = moveHit.hit.normal.x;
        InteractableMaterialHitHandler_SetParticlePlacement
                  (this,position,eulerRotation,(MethodInfo *)0x0);
        pPVar1 = (this->fields).currentParticleSystem;
        if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar1,1,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* InteractableMaterialHitHandler() */

void Assembly-CSharp.dll::InteractableMaterialHitHandler::InteractableMaterialHitHandler__ctor
               (InteractableMaterialHitHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__Dictionary__
            );
  method_00 = (MethodInfo *)&uStack_1;
  pIStack_2 = (InvokerMethod)0x0;
  uStack_1._0_4_ = (Il2CppMethodPointer)0x0;
  uStack_1._4_4_ = (Il2CppMethodPointer)0x0;
  (this->fields).particles = this_00;
  func_?(method_00,0,0,0,0);
  (this->fields).prevPos.x = (float)(Il2CppMethodPointer)uStack_1;
  (this->fields).prevPos.y = (float)uStack_1._4_4_;
  (this->fields).prevPos.z = (float)pIStack_2;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_00);
  return;
}

