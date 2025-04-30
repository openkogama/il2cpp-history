
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnActivated
               (MutantModifier *this,Avatar *target,MethodInfo *method)

{
  if (((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0))
     && (this_00 = (pMVar1->fields).body, this_00 != (MVBody *)0x0)) {
    MVBody::MVBody_StartBlinking(this_00,BlinkType__Enum_Poison,INFINITY,(MethodInfo *)0x0);
    ppAVar2 = &(this->fields)._.owner;
    *ppAVar2 = target;
    func_?(ppAVar2,target);
    (this->fields).isDeactivating = 0;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  if (((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0))
     && (this_00 = (pMVar1->fields).body, this_00 != (MVBody *)0x0)) {
    MVBody::MVBody_StopBlinking(this_00,BlinkType__Enum_Poison,(MethodInfo *)0x0);
    (this->fields).isDeactivating = 1;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar2,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__MutantModifier___DoFadeAndDestroy_d__9;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      unaff_ESI = (MVAvatarLocal *)(pAVar3->fields).mvAvatar;
      pMStack_4 = unaff_ESI;
      if (unaff_ESI != (MVAvatarLocal *)0x0) {
        bVar5 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        pMVar6 = TypeInfo__MVAvatarLocal;
        if (((unaff_ESI->klass->_1).naturalAligment < bVar5) ||
           ((MVAvatarLocal__Class *)(unaff_ESI->klass->_1).typeHierarchy[bVar5 - 1] !=
            TypeInfo__MVAvatarLocal)) goto code_?;
        fStack_7 = MVAvatarLocal::MVAvatarLocal_GetColliderRadius(unaff_ESI,(MethodInfo *)0x0);
        pAVar3 = (this->fields)._.owner;
        if ((pAVar3 != (Avatar *)0x0) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pAVar3,(MethodInfo *)0x0), this_01 != (Transform *)0x0
           )) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_9,this_01,(MethodInfo *)0x0);
          uStack_10._0_4_ = pVVar8->x;
          uStack_10._4_4_ = pVVar8->y;
          pAStack_11 = (AvatarPickupOwner *)pVVar8->z;
          if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
            VStack_9.y = (float)TypeInfo__CollisionDetectionGlobalBuffers;
            VStack_9.x = (float)&UNK_?;
            func_?();
          }
          layerMask = (this->fields).layerMask;
          unaff_ESI = (MVAvatarLocal *)
                      TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
          if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Physics);
          }
          position.z = (float)pAStack_11;
          position.x = (float)(undefined4)uStack_10;
          position.y = (float)uStack_10._4_4_;
          fStack_7 = (float)UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                            Physics_OverlapSphereNonAlloc_1
                                      (position,fStack_7 * _UNK_?,
                                       (Collider__Array *)unaff_ESI,layerMask,(MethodInfo *)0x0);
          uVar12 = 0;
          if ((int)fStack_7 < 1) {
            return;
          }
          iVar13 = 0x10;
          while( true ) {
            if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CollisionDetectionGlobalBuffers);
            }
            pCVar14 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
            if (pCVar14 == (Collider__Array *)0x0) break;
            if (pCVar14->max_length <= uVar12) goto code_?;
            this_00 = *(Component **)((int)pCVar14->vector + iVar13 + -0x10);
            if (this_00 == (Component *)0x0) break;
            unaff_ESI = (MVAvatarLocal *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  (this_00,
                                   Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__
                                  );
            pAStack_11 = (AvatarPickupOwner *)(this->fields)._.owner;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)unaff_ESI,(Object_1 *)pAStack_11,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)unaff_ESI,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                if (unaff_ESI == (MVAvatarLocal *)0x0) break;
                unaff_ESI = (MVAvatarLocal *)(unaff_ESI->fields)._._._._.ownerActorNr;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  ((Object_1 *)unaff_ESI,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar2 != 0) {
                  pAStack_11 = (pMStack_4->fields).pickupOwner;
                  pIVar15 = MutantHitPackage::MutantHitPackage_Create
                                     ((InteractionData *)&stack0xffffffd4,(MethodInfo *)0x0);
                  if (unaff_ESI == (MVAvatarLocal *)0x0) break;
                  uVar16._0_1_ = pIVar15->interactionType;
                  uVar16._1_1_ = pIVar15->playerKilledByType;
                  uVar16._2_2_ = *(undefined2 *)&pIVar15->field_0x12;
                  func_?(7,unaff_ESI,pAStack_11,pIVar15->damage,(pIVar15->impulse).x,
                                  (pIVar15->impulse).y,(pIVar15->impulse).z,uVar16,0);
                }
              }
            }
            uVar12 = uVar12 + 1;
            iVar13 = iVar13 + 4;
            if ((int)fStack_7 <= (int)uVar12) {
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
  pMVar6 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pMVar6);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

