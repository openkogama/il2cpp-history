
/* Void Awake() */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_Awake
               (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Player);
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
    func_?(&TypeInfo__MutantModifier___DoFadeAndDestroy_d__9);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MutantModifier___DoFadeAndDestroy_d__9;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnActivated
               (MutantModifier *this,Avatar *target,MethodInfo *method)

{
  if ((((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0)
       ) && (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0)) &&
     ((pMVar3 = (pMVar2->fields).bodyObject, pMVar3 != (MVBodyObject *)0x0 &&
      (this_00 = (pMVar3->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)))) {
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_Poison,INFINITY,(MethodInfo *)0x0);
    (this->fields)._.owner = target;
    func_?(&(this->fields)._.owner,target);
    (this->fields).isDeactivating = 0;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnDeactivated
               (MutantModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0)
       ) && (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0)) &&
     ((pMVar3 = (pMVar2->fields).bodyObject, pMVar3 != (MVBodyObject *)0x0 &&
      (this_00 = (pMVar3->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)))) {
    BlinkerBase::BlinkerBase_StopBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_Poison,(MethodInfo *)0x0);
    (this->fields).isDeactivating = 1;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar4,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar4,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__MutantModifier___DoFadeAndDestroy_d__9;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnDisable
               (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).isDeactivating != 0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
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
    if (pAVar3 != (Avatar *)0x0) {
      if (((pAVar3->fields).isLocal == 0) || ((this->fields).isDeactivating != 0)) {
        return;
      }
      unaff_EDI = (MVAvatarLocal *)(pAVar3->fields).mvAvatar;
      pMStack_4 = unaff_EDI;
      if (unaff_EDI != (MVAvatarLocal *)0x0) {
        pMVar5 = TypeInfo__MVAvatarLocal;
        if (((unaff_EDI->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment)
           || ((MVAvatarLocal__Class *)
               (unaff_EDI->klass->_1).typeHierarchy
               [(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] != TypeInfo__MVAvatarLocal))
        goto code_?;
        fStack_6 = MVAvatarLocal::MVAvatarLocal_GetColliderRadius(unaff_EDI,(MethodInfo *)0x0);
        pAVar3 = (this->fields)._.owner;
        if ((pAVar3 != (Avatar *)0x0) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pAVar3,(MethodInfo *)0x0), this_01 != (Transform *)0x0
           )) {
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_8,this_01,(MethodInfo *)0x0);
          uStack_9._0_4_ = pVVar7->x;
          uStack_9._4_4_ = pVVar7->y;
          pAStack_10 = (AvatarPickupOwner *)pVVar7->z;
          if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
            VStack_8.y = (float)TypeInfo__CollisionDetectionGlobalBuffers;
            VStack_8.x = (float)&UNK_?;
            func_?();
          }
          layerMask = (this->fields).layerMask;
          pCVar11 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
          if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Physics);
          }
          position.z = (float)pAStack_10;
          position.x = (float)(undefined4)uStack_9;
          position.y = (float)uStack_9._4_4_;
          fStack_6 = (float)UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                            Physics_OverlapSphereNonAlloc_1
                                      (position,fStack_6 + fStack_6,pCVar11,layerMask,
                                       (MethodInfo *)0x0);
          unaff_EDI = (MVAvatarLocal *)0x0;
          if ((int)fStack_6 < 1) {
            return;
          }
          iVar12 = 0x10;
          while( true ) {
            if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CollisionDetectionGlobalBuffers);
            }
            pCVar11 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
            if (pCVar11 == (Collider__Array *)0x0) break;
            if ((MVAvatarLocal *)pCVar11->max_length <= unaff_EDI) goto code_?;
            this_00 = *(Component **)((int)pCVar11->vector + iVar12 + -0x10);
            if (this_00 == (Component *)0x0) break;
            x_00 = (Object_1 *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             (this_00,
                              Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
            pAStack_10 = (AvatarPickupOwner *)(this->fields)._.owner;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              (x_00,(Object_1 *)pAStack_10,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                (x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                if (x_00 == (Object_1 *)0x0) break;
                x = x_00[3].klass;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar2 != 0) {
                  pAStack_10 = (pMStack_4->fields).pickupOwner;
                  pIVar13 = MutantHitPackage::MutantHitPackage_Create
                                     ((InteractionData *)&stack0xffffffd4,(MethodInfo *)0x0);
                  if (x == (Object_1__Class *)0x0) break;
                  uVar14._0_1_ = pIVar13->interactionType;
                  uVar14._1_1_ = pIVar13->playerKilledByType;
                  uVar14._2_2_ = *(undefined2 *)&pIVar13->field_0x12;
                  func_?(7,x,pAStack_10,pIVar13->damage,(pIVar13->impulse).x,
                                  (pIVar13->impulse).y,(pIVar13->impulse).z,uVar14,0);
                }
              }
            }
            unaff_EDI = (MVAvatarLocal *)((int)&unaff_EDI->klass + 1);
            iVar12 = iVar12 + 4;
            if ((int)fStack_6 <= (int)unaff_EDI) {
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pMVar5 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pMVar5);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

