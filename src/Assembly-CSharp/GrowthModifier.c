
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
    (*(pMVar2->klass->vtable).set_Scale.methodPtr)
              (pMVar2,uVar3,(this->fields)._.defaultScale.z,(pMVar2->klass->vtable).set_Scale.method
              );
    pAVar1 = (this->fields)._._.owner;
    if (pAVar1 != (Avatar *)0x0) {
      pMVar2 = (pAVar1->fields).mvAvatar;
      if (pMVar2 != (MVAvatar *)0x0) {
        if (((TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth <=
             (pMVar2->klass->_1).typeHierarchyDepth) &&
           ((MVAvatarLocal__Class *)
            (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1]
            == TypeInfo__MVAvatarLocal)) {
          this_00 = (Component *)pMVar2[1].fields._._._.groupId;
          if (this_00 != (Component *)0x0) {
            pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               (this_00,
                                AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__
                               );
            if ((pOVar4 != (Object *)0x0) && (pOVar4[0xe].klass != (Object__Class *)0x0)) {
              SizeState::SizeState_ScaleChanged((SizeState *)pOVar4[0xe].klass,(MethodInfo *)0x0);
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
      fVar5 = (this->fields)._.sizeModifier;
      pMVar6 = (pAVar1->fields).mvAvatar;
      if (pMVar6 != (MVAvatar *)0x0) {
        (*(pMVar6->klass->vtable).set_Scale.methodPtr)
                  (pMVar6,(float)uVar3 * fVar5,(float)uVar4 * fVar5,
                   (this->fields)._.defaultScale.z * fVar5,(pMVar6->klass->vtable).set_Scale.method)
        ;
        return;
      }
    }
  }
  else if ((pAVar1 != (Avatar *)0x0) &&
          (pMVar6 = (pAVar1->fields).mvAvatar, pMVar6 != (MVAvatar *)0x0)) {
    uVar7 = (this->fields)._.defaultScale.x;
    uVar8 = (this->fields)._.defaultScale.y;
    (*(pMVar6->klass->vtable).set_Scale.methodPtr)
              (pMVar6,uVar7,uVar8,(this->fields)._.defaultScale.z,
               (pMVar6->klass->vtable).set_Scale.method);
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
    (*(pMVar2->klass->vtable).set_Scale.methodPtr)
              (pMVar2,uVar3,(this->fields)._.defaultScale.z,(pMVar2->klass->vtable).set_Scale.method
              );
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
            fVar8 = (this->fields)._.sizeModifier;
            pMVar2 = (pAVar1->fields).mvAvatar;
            if (pMVar2 != (MVAvatar *)0x0) {
              (*(pMVar2->klass->vtable).set_Scale.methodPtr)
                        (pMVar2,CONCAT44((float)uVar7 * fVar8,(float)uVar6 * fVar8),
                         (this->fields)._.defaultScale.z * fVar8,
                         (pMVar2->klass->vtable).set_Scale.method);
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
              if (body != (SizeModifier_ActionDelegate *)0x0) {
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
    fVar4 = (this->fields)._.sizeModifier;
    pMVar5 = (pAVar1->fields).mvAvatar;
    if (pMVar5 != (MVAvatar *)0x0) {
      (*(pMVar5->klass->vtable).set_Scale.methodPtr)
                (pMVar5,CONCAT44((float)uVar3 * fVar4,(float)uVar2 * fVar4),
                 (this->fields)._.defaultScale.z * fVar4,(pMVar5->klass->vtable).set_Scale.method);
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
              fVar4 = (this->fields)._.timeToSize;
              body = (SizeModifier_ActionDelegate *)
                     func_?(TypeInfo__SizeModifier__ActionDelegate);
              if (body != (SizeModifier_ActionDelegate *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
                UnityAction_1_System_Single___ctor
                          ((UnityAction_1_System_Single_ *)body,(Object *)this,
                           MethodInfo__GrowthModifier___UnScale_b__3_0_float_,(MethodInfo *)0x0);
                routine = SizeModifier::SizeModifier_DoForSeconds
                                    ((SizeModifier *)this,fVar4,body,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
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


/* Void <Scale>b__2_0(Single) */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier__Scale_b__2_0
               (GrowthModifier *this,float t,MethodInfo *method)

{
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    uVar2 = (this->fields)._.defaultScale.x;
    uVar3 = (this->fields)._.defaultScale.y;
    pMVar4 = (pAVar1->fields).mvAvatar;
    fVar5 = (this->fields)._.defaultScale.z;
    fVar6 = (this->fields)._.sizeModifier;
    fVar7 = (float10)func_?(t * _UNK_?);
    fVar8 = (float)(fVar7 / (float10)_UNK_?);
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    else if (fVar6 < fVar8) {
      fVar8 = fVar6;
    }
    fVar8 = fVar8 + _UNK_?;
    uVar9 = (this->fields)._.defaultScale.x;
    uVar10 = (this->fields)._.defaultScale.y;
    fVar6 = (float)uVar9 * _UNK_?;
    fVar11 = (float)uVar10 * _UNK_?;
    fVar12 = (this->fields)._.defaultScale.z * _UNK_?;
    dVar13 = (double)(t * (this->fields)._.sineStrength);
    func_?();
    fVar14 = _UNK_? - (float)dVar13;
    uStack_15 = CONCAT44(fVar11 * fVar14 + (float)uVar3 * fVar8,
                         fVar6 * fVar14 + (float)uVar2 * fVar8);
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                (pMVar4,uStack_15,fVar12 * fVar14 + fVar5 * fVar8,
                 (pMVar4->klass->vtable).set_Scale.method);
      if (t != (this->fields)._.timeToSize) {
        return;
      }
      pAVar1 = (this->fields)._._.owner;
      if (pAVar1 != (Avatar *)0x0) {
        uVar16 = (this->fields)._.defaultScale.x;
        uVar17 = (this->fields)._.defaultScale.y;
        fVar6 = (this->fields)._.sizeModifier;
        pMVar4 = (pAVar1->fields).mvAvatar;
        if (pMVar4 != (MVAvatar *)0x0) {
          (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                    (pMVar4,CONCAT44((float)uVar17 * fVar6,(float)uVar16 * fVar6),
                     (this->fields)._.defaultScale.z * fVar6,
                     (pMVar4->klass->vtable).set_Scale.method);
          return;
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
    fVar5 = (this->fields)._.defaultScale.z;
    fVar6 = (this->fields)._.sizeModifier;
    fVar7 = fVar6 - _UNK_?;
    fVar8 = (float10)func_?(t * _UNK_?);
    fVar9 = (float)(fVar8 / (float10)_UNK_?);
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    else if (fVar7 < fVar9) {
      fVar9 = fVar7;
    }
    fVar6 = fVar6 - fVar9;
    uVar10 = (this->fields)._.defaultScale.x;
    uVar11 = (this->fields)._.defaultScale.y;
    fVar9 = (float)uVar10 * _UNK_?;
    fVar7 = (float)uVar11 * _UNK_?;
    fVar12 = (this->fields)._.defaultScale.z * _UNK_?;
    dVar13 = (double)(t * (this->fields)._.sineStrength);
    func_?();
    fVar14 = _UNK_? - (float)dVar13;
    uStack_15 = CONCAT44(fVar7 * fVar14 + (float)uVar3 * fVar6,
                         fVar9 * fVar14 + (float)uVar2 * fVar6);
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                (pMVar4,uStack_15,fVar12 * fVar14 + fVar5 * fVar6,
                 (pMVar4->klass->vtable).set_Scale.method);
      pAVar1 = (this->fields)._._.owner;
      if ((pAVar1 != (Avatar *)0x0) &&
         (pMVar4 = (pAVar1->fields).mvAvatar, pMVar4 != (MVAvatar *)0x0)) {
        MVAvatar::MVAvatar_set_SetTransparency(pMVar4,1.0,(MethodInfo *)0x0);
        if (t == (this->fields)._.timeToSize) {
          GrowthModifier_Destroy(this,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

