
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
  value = (Object *)func_?(TypeInfo__MutantModifier___DoFadeAndDestroy_d__9);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnActivated
               (MutantModifier *this,Avatar *target,MethodInfo *method)

{
  if (((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0))
     && (this_00 = (pMVar1->fields).body, this_00 != (MVBody *)0x0)) {
    MVBody::MVBody_StartBlinking(this_00,BlinkType__Enum_Poison,INFINITY,(MethodInfo *)0x0);
    (this->fields)._.owner = target;
    func_?(&(this->fields)._.owner,target);
    (this->fields).isDeactivating = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      method_00 = (MethodInfo *)&UNK_?;
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
      value = (Object *)func_?();
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,method_00);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = (Object__Class *)this;
        func_?(value + 2,this);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
        return;
      }
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
        pMVar5 = TypeInfo__MVAvatarLocal;
        if (((unaff_ESI->klass->_1).typeHierarchyDepth <
             (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) ||
           ((MVAvatarLocal__Class *)
            (unaff_ESI->klass->_1).typeHierarchy
            [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] != TypeInfo__MVAvatarLocal))
        goto code_?;
        pAStack_6 = (AvatarPickupOwner *)
                    MVAvatarLocal::MVAvatarLocal_GetColliderRadius(unaff_ESI,(MethodInfo *)0x0);
        pAVar3 = (this->fields)._.owner;
        if ((pAVar3 != (Avatar *)0x0) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pAVar3,(MethodInfo *)0x0), this_01 != (Transform *)0x0
           )) {
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_8,this_01,(MethodInfo *)0x0);
          uStack_9._0_4_ = pVVar7->x;
          uStack_9._4_4_ = (int)pVVar7->y;
          unaff_ESI = (MVAvatarLocal *)pVVar7->z;
          if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
            VStack_8.y = (float)TypeInfo__CollisionDetectionGlobalBuffers;
            VStack_8.x = (float)&UNK_?;
            func_?();
          }
          position.z = (float)unaff_ESI;
          position.x = (float)(undefined4)uStack_9;
          position.y = (float)uStack_9._4_4_;
          iVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                  Physics_OverlapSphereNonAlloc_1
                            (position,(float)pAStack_6 * _UNK_?,
                             TypeInfo__CollisionDetectionGlobalBuffers->static_fields->
                             colliderBuffer,(this->fields).layerMask,(MethodInfo *)0x0);
          uStack_9 = CONCAT44(iVar10,(undefined4)uStack_9);
          uVar11 = 0;
          if (iVar10 < 1) {
            return;
          }
          iVar12 = 0x10;
          while( true ) {
            if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CollisionDetectionGlobalBuffers);
            }
            pCVar13 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
            if (pCVar13 == (Collider__Array *)0x0) break;
            if (pCVar13->max_length <= uVar11) goto code_?;
            this_00 = *(Component **)((int)pCVar13->vector + iVar12 + -0x10);
            if (this_00 == (Component *)0x0) break;
            unaff_ESI = (MVAvatarLocal *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  (this_00,
                                   Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__
                                  );
            pAStack_6 = (AvatarPickupOwner *)(this->fields)._.owner;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)unaff_ESI,(Object_1 *)pAStack_6,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)unaff_ESI,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                if (unaff_ESI == (MVAvatarLocal *)0x0) break;
                unaff_ESI = (MVAvatarLocal *)(unaff_ESI->fields)._._._._.objectLinkRefs;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  ((Object_1 *)unaff_ESI,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar2 != 0) {
                  pAStack_6 = (pMStack_4->fields).pickupOwner;
                  pIVar14 = MutantHitPackage::MutantHitPackage_Create
                                     ((InteractionData *)&stack0xffffffd8,(MethodInfo *)0x0);
                  if (unaff_ESI == (MVAvatarLocal *)0x0) break;
                  uVar15._0_1_ = pIVar14->interactionType;
                  uVar15._1_1_ = pIVar14->playerKilledByType;
                  uVar15._2_2_ = *(undefined2 *)&pIVar14->field_0x12;
                  func_?(7,unaff_ESI,pAStack_6,pIVar14->damage,(pIVar14->impulse).x,
                                  (pIVar14->impulse).y,(pIVar14->impulse).z,uVar15,0);
                }
              }
            }
            uVar11 = uVar11 + 1;
            iVar12 = iVar12 + 4;
            if (uStack_9._4_4_ <= (int)uVar11) {
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
  func_?(unaff_ESI,pMVar5);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

