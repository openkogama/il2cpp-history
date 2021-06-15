
/* Void Awake() */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_Awake
               (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).layerMask = 1 << ((byte)iVar1 & 0x1f);
  return;
}


/* IEnumerator DoFadeAndDestroy() */

IEnumerator *
Assembly-CSharp.dll::MutantModifier::MutantModifier_DoFadeAndDestroy
          (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MutantModifier___DoFadeAndDestroy_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnActivated
               (MutantModifier *this,Avatar_1 *target,MethodInfo *method)

{
  if (target != (Avatar_1 *)0x0) {
    Avatar::Avatar_1_StartBlinking(target,BlinkType__Enum_Poison,INFINITY,(MethodInfo *)0x0);
    (this->fields)._.owner = target;
    (this->fields).isDeactivating = 0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnDeactivated
               (MutantModifier *this,Avatar_1 *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (target != (Avatar_1 *)0x0) {
    Avatar::Avatar_1_StopBlinking(target,BlinkType__Enum_Poison,(MethodInfo *)0x0);
    (this->fields).isDeactivating = 1;
    method_00 = (MethodInfo *)this;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar1,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar1,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
      if (this_00 != (ScaleAnimationBase *)0x0) {
        (this_00->fields).originalScale.x = (float)this;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnDisable
               (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isDeactivating != 0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_Update
               (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).fireParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
    if ((bVar2 == 0) && ((this->fields).isDeactivating == 0)) {
      pPVar1 = (this->fields).fireParticles;
      if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (pPVar1,(MethodInfo *)0x0);
    }
    pAVar3 = (this->fields)._.owner;
    if (pAVar3 != (Avatar_1 *)0x0) {
      bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
              CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                        ((CrossPlatformInputManager_VirtualAxis *)pAVar3,(MethodInfo *)0x0);
      if ((bVar2 == 0) || ((this->fields).isDeactivating != 0)) {
        return;
      }
      pAVar3 = (this->fields)._.owner;
      if ((pAVar3 != (Avatar_1 *)0x0) &&
         (pMStack_4 = (MVAvatarLocal *)
                      func_?((pAVar3->fields).mvAvatar,TypeInfo__MVAvatarLocal),
         pMStack_4 != (MVAvatarLocal *)0x0)) {
        fVar5 = MVAvatarLocal::MVAvatarLocal_GetColliderRadius(pMStack_4,(MethodInfo *)0x0);
        pAVar3 = (this->fields)._.owner;
        if ((pAVar3 != (Avatar_1 *)0x0) &&
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pAVar3,(MethodInfo *)0x0),
           this_00 != (Transform *)0x0)) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&IStack_7.impulse.y,this_00,(MethodInfo *)0x0);
          uStack_8._0_4_ = pVVar6->x;
          uStack_8._4_4_ = (int)pVVar6->y;
          fVar9 = pVVar6->z;
          if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
            func_?(TypeInfo__CollisionDetectionGlobalBuffers);
          }
          position.z = fVar9;
          position.x = (float)(undefined4)uStack_8;
          position.y = (float)uStack_8._4_4_;
          iVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                  Physics_OverlapSphereNonAlloc_1
                            (position,fVar5 * _UNK_?,
                             TypeInfo__CollisionDetectionGlobalBuffers->static_fields->
                             colliderBuffer,(this->fields).layerMask,(MethodInfo *)0x0);
          uStack_8 = CONCAT44(iVar10,(undefined4)uStack_8);
          iVar11 = 0;
          if (iVar10 < 1) {
            return;
          }
          do {
            if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
              func_?(TypeInfo__CollisionDetectionGlobalBuffers);
            }
            if ((TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer ==
                 (Collider__Array *)0x0) ||
               (this_01 = (Component_1 *)func_?(iVar11), this_01 == (Component_1 *)0x0))
            break;
            this_02 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                       *)UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_GetComponent_58
                                   (this_01,
                                    Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__
                                   );
            pAVar3 = (this->fields)._.owner;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)this_02,(Object_1 *)pAVar3,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                if (this_02 ==
                    (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                     *)0x0) break;
                x = (Object_1 *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                    KeyValuePair`2[System::Object,System::Object],System::Object]::
                    Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                              (this_02,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  (x,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar2 != 0) {
                  pAVar12 = MVAvatarLocal::MVAvatarLocal_get_PickupOwner(pMStack_4,(MethodInfo *)0x0)
                  ;
                  pIVar13 = MutantHitPackage::MutantHitPackage_Create(&IStack_7,(MethodInfo *)0x0);
                  if (x == (Object_1 *)0x0) break;
                  uVar14._0_1_ = pIVar13->interactionType;
                  uVar14._1_1_ = pIVar13->playerKilledByType;
                  uVar14._2_2_ = *(undefined2 *)&pIVar13->field_0x12;
                  func_?(7,x,pAVar12,pIVar13->damage,(pIVar13->impulse).x,
                                  (pIVar13->impulse).y,(pIVar13->impulse).z,uVar14,0);
                }
              }
            }
            iVar11 = iVar11 + 1;
            if (uStack_8._4_4_ <= iVar11) {
              return;
            }
          } while( true );
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

