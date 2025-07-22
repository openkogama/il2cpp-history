
/* Void Destroy() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_Destroy
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if ((pAVar1 != (Avatar *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0))
  {
    uVar3._0_4_ = (this->fields)._.defaultScale.x;
    uVar3._4_4_ = (this->fields)._.defaultScale.y;
    (*(code *)(pMVar2->klass->vtable).set_Scale.method)
              (pMVar2,uVar3,(this->fields)._.defaultScale.z,
               (pMVar2->klass->vtable).get_WorldPosition.methodPtr);
    pAVar1 = (this->fields)._._.owner;
    if (pAVar1 != (Avatar *)0x0) {
      pMVar2 = (pAVar1->fields).mvAvatar;
      if (pMVar2 != (MVAvatar *)0x0) {
        if (((TypeInfo__MVAvatarLocal->_1).naturalAligment <= (pMVar2->klass->_1).naturalAligment)
           && ((MVAvatarLocal__Class *)
               (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1]
               == TypeInfo__MVAvatarLocal)) {
          this_00 = (Component *)pMVar2[1].fields._._._.itemId;
          if (this_00 != (Component *)0x0) {
            pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               (this_00,
                                AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__
                               );
            if ((pOVar4 != (Object *)0x0) && ((SizeState *)pOVar4[0xe].monitor != (SizeState *)0x0))
            {
              SizeState::SizeState_ScaleChanged((SizeState *)pOVar4[0xe].monitor,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          goto code_?;
        }
      }
code_?:
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_OnDisable
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields)._._.owner;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pAVar1 = (this->fields)._._.owner;
  if ((this->fields)._.isDeactivating == 0) {
    if (pAVar1 != (Avatar *)0x0) {
      uVar3 = (this->fields)._.defaultScale.x;
      uVar4 = (this->fields)._.defaultScale.y;
      pMVar5 = (pAVar1->fields).mvAvatar;
      fVar6 = (this->fields)._.sizeModifier;
      if (pMVar5 != (MVAvatar *)0x0) {
        (*(code *)(pMVar5->klass->vtable).set_Scale.method)
                  (pMVar5,(float)uVar3 * fVar6,(float)uVar4 * fVar6,
                   (this->fields)._.defaultScale.z * fVar6,
                   (pMVar5->klass->vtable).get_WorldPosition.methodPtr);
        return;
      }
    }
  }
  else if ((pAVar1 != (Avatar *)0x0) &&
          (pMVar5 = (pAVar1->fields).mvAvatar, pMVar5 != (MVAvatar *)0x0)) {
    uVar7 = (this->fields)._.defaultScale.x;
    uVar8 = (this->fields)._.defaultScale.y;
    (*(code *)(pMVar5->klass->vtable).set_Scale.method)
              (pMVar5,uVar7,uVar8,(this->fields)._.defaultScale.z,
               (pMVar5->klass->vtable).get_WorldPosition.methodPtr);
    GrowthModifier_Destroy(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Scale() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_Scale
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SizeModifier__ActionDelegate);
    func_?(&MethodInfo__GrowthModifier___Scale_b__2_0_float_);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if ((pAVar1 != (Avatar *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0))
  {
    uVar3._0_4_ = (this->fields)._.defaultScale.x;
    uVar3._4_4_ = (this->fields)._.defaultScale.y;
    (*(code *)(pMVar2->klass->vtable).set_Scale.method)
              (pMVar2,uVar3,(this->fields)._.defaultScale.z,
               (pMVar2->klass->vtable).get_WorldPosition.methodPtr);
    pAVar1 = (this->fields)._._.owner;
    if (pAVar1 != (Avatar *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pAVar1,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar4,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          pAVar1 = (this->fields)._._.owner;
          if (pAVar1 != (Avatar *)0x0) {
            uVar6 = (this->fields)._.defaultScale.x;
            uVar7 = (this->fields)._.defaultScale.y;
            pMVar2 = (pAVar1->fields).mvAvatar;
            fVar8 = (this->fields)._.sizeModifier;
            if (pMVar2 != (MVAvatar *)0x0) {
              (*(code *)(pMVar2->klass->vtable).set_Scale.method)
                        (pMVar2,CONCAT44((float)uVar7 * fVar8,(float)uVar6 * fVar8),
                         (this->fields)._.defaultScale.z * fVar8,
                         (pMVar2->klass->vtable).get_WorldPosition.methodPtr);
              return;
            }
          }
        }
        else {
          pAVar9 = (this->fields)._.audioSource;
          if (pAVar9 != (AudioSource *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pAVar9,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(pGVar4,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                pAVar9 = (this->fields)._.audioSource;
                if (pAVar9 == (AudioSource *)0x0) goto code_?;
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot
                          (pAVar9,(this->fields)._.growSound,(MethodInfo *)0x0);
              }
              fVar8 = (this->fields)._.timeToSize;
              body = (SizeModifier_ActionDelegate *)
                     func_?(TypeInfo__SizeModifier__ActionDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
              UnityAction_1_System_Single___ctor
                        ((UnityAction_1_System_Single_ *)body,(Object *)this,
                         MethodInfo__GrowthModifier___Scale_b__2_0_float_,(MethodInfo *)0x0);
              routine = SizeModifier::SizeModifier_DoForSeconds
                                  ((SizeModifier *)this,fVar8,body,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UnScale() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_UnScale
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SizeModifier__ActionDelegate);
    func_?(&MethodInfo__GrowthModifier___UnScale_b__3_0_float_);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    uVar2 = (this->fields)._.defaultScale.x;
    uVar3 = (this->fields)._.defaultScale.y;
    pMVar4 = (pAVar1->fields).mvAvatar;
    fVar5 = (this->fields)._.sizeModifier;
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                (pMVar4,CONCAT44((float)uVar3 * fVar5,(float)uVar2 * fVar5),
                 (this->fields)._.defaultScale.z * fVar5,
                 (pMVar4->klass->vtable).get_WorldPosition.methodPtr);
      pAVar1 = (this->fields)._._.owner;
      if (pAVar1 != (Avatar *)0x0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pAVar1,(MethodInfo *)0x0);
        if (pGVar6 != (GameObject *)0x0) {
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(pGVar6,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            GrowthModifier_Destroy(this,(MethodInfo *)0x0);
            return;
          }
          pAVar8 = (this->fields)._.audioSource;
          if (pAVar8 != (AudioSource *)0x0) {
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pAVar8,(MethodInfo *)0x0);
            if (pGVar6 != (GameObject *)0x0) {
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(pGVar6,(MethodInfo *)0x0);
              if (bVar7 != 0) {
                pAVar8 = (this->fields)._.audioSource;
                if (pAVar8 == (AudioSource *)0x0) goto code_?;
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot
                          (pAVar8,(this->fields)._.shrinkSound,(MethodInfo *)0x0);
              }
              fVar5 = (this->fields)._.timeToSize;
              body = (SizeModifier_ActionDelegate *)
                     func_?(TypeInfo__SizeModifier__ActionDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
              UnityAction_1_System_Single___ctor
                        ((UnityAction_1_System_Single_ *)body,(Object *)this,
                         MethodInfo__GrowthModifier___UnScale_b__3_0_float_,(MethodInfo *)0x0);
              routine = SizeModifier::SizeModifier_DoForSeconds
                                  ((SizeModifier *)this,fVar5,body,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
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


/* Void <Scale>b__2_0(Single) */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier__Scale_b__2_0
               (GrowthModifier *this,float t,MethodInfo *method)

{
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    uVar2 = (this->fields)._.defaultScale.x;
    uVar3 = (this->fields)._.defaultScale.y;
    pMVar4 = (pAVar1->fields).mvAvatar;
    fVar5 = SizeModifier::SizeModifier_BlockStep
                       ((SizeModifier *)this,t,40.0,0.0,(this->fields)._.sizeModifier,
                        (MethodInfo *)0x0);
    fVar6 = (float)uVar2 * (fVar5 + _UNK_?);
    fVar5 = (float)uVar3 * (fVar5 + _UNK_?);
    uVar7 = (this->fields)._.defaultScale.x;
    uVar8 = (this->fields)._.defaultScale.y;
    fVar9 = (float)uVar7 * _UNK_?;
    fVar10 = (float)uVar8 * _UNK_?;
    fVar11 = (this->fields)._.defaultScale.z * _UNK_?;
    dVar12 = (double)(t * (this->fields)._.sineStrength);
    func_?(fVar5,fVar6,fVar11,fVar10);
    fVar13 = _UNK_? - (float)dVar12;
    uStack_14 = CONCAT44(fVar5 + fVar13 * fVar10,fVar6 + fVar13 * fVar9);
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                (pMVar4,uStack_14,fVar13 * fVar11 + 3.4570226e-29,
                 (pMVar4->klass->vtable).get_WorldPosition.methodPtr);
      if (t != (this->fields)._.timeToSize) {
        return;
      }
      pAVar1 = (this->fields)._._.owner;
      if (pAVar1 != (Avatar *)0x0) {
        uVar15 = (this->fields)._.defaultScale.x;
        uVar16 = (this->fields)._.defaultScale.y;
        fVar6 = (this->fields)._.sizeModifier;
        pMVar4 = (pAVar1->fields).mvAvatar;
        uStack_14 = CONCAT44((float)uVar16 * fVar6,(float)uVar15 * fVar6);
        if (pMVar4 != (MVAvatar *)0x0) {
          (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                    (pMVar4,uStack_14,(this->fields)._.defaultScale.z * fVar6,
                     (pMVar4->klass->vtable).get_WorldPosition.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void <UnScale>b__3_0(Single) */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier__UnScale_b__3_0
               (GrowthModifier *this,float t,MethodInfo *method)

{
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    uVar2 = (this->fields)._.defaultScale.x;
    uVar3 = (this->fields)._.defaultScale.y;
    pMVar4 = (pAVar1->fields).mvAvatar;
    fVar5 = (this->fields)._.sizeModifier;
    fVar6 = SizeModifier::SizeModifier_BlockStep
                       ((SizeModifier *)this,t,40.0,0.0,fVar5 - _UNK_?,(MethodInfo *)0x0);
    fVar5 = fVar5 - fVar6;
    fVar6 = (float)uVar2 * fVar5;
    fVar5 = (float)uVar3 * fVar5;
    uVar7 = (this->fields)._.defaultScale.x;
    uVar8 = (this->fields)._.defaultScale.y;
    fVar9 = (float)uVar7 * _UNK_?;
    fVar10 = (float)uVar8 * _UNK_?;
    fVar11 = (this->fields)._.defaultScale.z * _UNK_?;
    dVar12 = (double)(t * (this->fields)._.sineStrength);
    func_?(fVar5,fVar6,fVar11);
    fVar13 = _UNK_? - (float)dVar12;
    uStack_14 = CONCAT44(fVar5 + fVar13 * fVar10,fVar6 + fVar13 * fVar9);
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                (pMVar4,uStack_14,fVar13 * fVar11 + 3.4571797e-29,
                 (pMVar4->klass->vtable).get_WorldPosition.methodPtr);
      pAVar1 = (this->fields)._._.owner;
      if ((pAVar1 != (Avatar *)0x0) &&
         (pMVar4 = (pAVar1->fields).mvAvatar, pMVar4 != (MVAvatar *)0x0)) {
        if ((pMVar4->fields).isHidden == 0) {
          pAVar1 = (pMVar4->fields).avatar;
          if ((pAVar1 == (Avatar *)0x0) ||
             (this_00 = (pAVar1->fields).avatarFader, this_00 == (AvatarFader *)0x0))
          goto code_?;
          AvatarFader::AvatarFader_SetTransparency(this_00,1.0,(MethodInfo *)0x0);
        }
        if (t == (this->fields)._.timeToSize) {
          GrowthModifier_Destroy(this,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

