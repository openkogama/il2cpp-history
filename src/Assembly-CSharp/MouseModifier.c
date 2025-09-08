
/* Void Destroy() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Destroy
               (MouseModifier *this,MethodInfo *method)

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
        if (((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment) ||
           ((MVAvatarLocal__Class *)
            (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
            TypeInfo__MVAvatarLocal)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pMVar5 = (MVAvatar *)0x0;
        if (bVar4) {
          pMVar5 = pMVar2;
        }
        if (pMVar5 != (MVAvatar *)0x0) {
          this_00 = (Component *)pMVar5[1].fields._._._.itemId;
          if (this_00 != (Component *)0x0) {
            pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               (this_00,
                                AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__
                               );
            if ((pOVar6 != (Object *)0x0) && ((SizeState *)pOVar6[0xe].monitor != (SizeState *)0x0))
            {
              SizeState::SizeState_ScaleChanged((SizeState *)pOVar6[0xe].monitor,(MethodInfo *)0x0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_OnDisable
               (MouseModifier *this,MethodInfo *method)

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
    MouseModifier_Destroy(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Scale() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Scale(MouseModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SizeModifier__ActionDelegate);
    func_?(&MethodInfo__MouseModifier___Scale_b__2_0_float_);
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
            uStack_9 = CONCAT44((float)uVar7 * fVar8,(float)uVar6 * fVar8);
            if (pMVar2 != (MVAvatar *)0x0) {
              (*(code *)(pMVar2->klass->vtable).set_Scale.method)
                        (pMVar2,uStack_9,(this->fields)._.defaultScale.z * fVar8,
                         (pMVar2->klass->vtable).get_WorldPosition.methodPtr);
              return;
            }
          }
        }
        else {
          pAVar10 = (this->fields)._.audioSource;
          if (pAVar10 != (AudioSource *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pAVar10,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_get_activeInHierarchy(pGVar4,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                pAVar10 = (this->fields)._.audioSource;
                if (pAVar10 == (AudioSource *)0x0) goto code_?;
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot
                          (pAVar10,(this->fields)._.shrinkSound,(MethodInfo *)0x0);
              }
              fVar8 = (this->fields)._.timeToSize;
              body = (SizeModifier_ActionDelegate *)
                     func_?(TypeInfo__SizeModifier__ActionDelegate);
              pMVar11 = MethodInfo__MouseModifier___Scale_b__2_0_float_;
              (body->fields)._._.method_ptr =
                   MethodInfo__MouseModifier___Scale_b__2_0_float_->virtualMethodPointer;
              ppOVar12 = &(body->fields)._._.m_target;
              (body->fields)._._.method = pMVar11;
              (body->fields)._._.m_target = (Object *)this;
              pMVar13 = this;
              func_?();
              uVar14 = pMVar11->parameters_count;
              (body->fields)._._.method_code = body;
              cVar15 = func_?(pMVar11,ppOVar12,pMVar13);
              if ((cVar15 == '\0') || (uVar14 != 1)) {
                (body->fields)._._.method_code = (body->fields)._._.m_target;
                puVar16 = (body->fields)._._.method_ptr;
              }
              else {
                puVar16 = &UNK_?;
              }
              (body->fields)._._.invoke_impl = puVar16;
              (body->fields)._._.extra_arg = &UNK_?;
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UnScale() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_UnScale
               (MouseModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SizeModifier__ActionDelegate);
    func_?(&MethodInfo__MouseModifier___UnScale_b__3_0_float_);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    uVar2 = (this->fields)._.defaultScale.x;
    uVar3 = (this->fields)._.defaultScale.y;
    pMVar4 = (pAVar1->fields).mvAvatar;
    fVar5 = (this->fields)._.sizeModifier;
    uStack_6 = CONCAT44((float)uVar3 * fVar5,(float)uVar2 * fVar5);
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                (pMVar4,uStack_6,(this->fields)._.defaultScale.z * fVar5,
                 (pMVar4->klass->vtable).get_WorldPosition.methodPtr);
      pAVar1 = (this->fields)._._.owner;
      if (pAVar1 != (Avatar *)0x0) {
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar1,(MethodInfo *)0x0);
        if (pGVar7 != (GameObject *)0x0) {
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_get_activeInHierarchy(pGVar7,(MethodInfo *)0x0);
          if (bVar8 == 0) {
            MouseModifier_Destroy(this,(MethodInfo *)0x0);
            return;
          }
          pAVar9 = (this->fields)._.audioSource;
          if (pAVar9 != (AudioSource *)0x0) {
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pAVar9,(MethodInfo *)0x0);
            if (pGVar7 != (GameObject *)0x0) {
              bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_get_activeInHierarchy(pGVar7,(MethodInfo *)0x0);
              if (bVar8 != 0) {
                pAVar9 = (this->fields)._.audioSource;
                if (pAVar9 == (AudioSource *)0x0) goto code_?;
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot
                          (pAVar9,(this->fields)._.growSound,(MethodInfo *)0x0);
              }
              fVar5 = (this->fields)._.timeToSize;
              body = (SizeModifier_ActionDelegate *)
                     func_?(TypeInfo__SizeModifier__ActionDelegate);
              pMVar10 = MethodInfo__MouseModifier___UnScale_b__3_0_float_;
              (body->fields)._._.method_ptr =
                   MethodInfo__MouseModifier___UnScale_b__3_0_float_->virtualMethodPointer;
              ppOVar11 = &(body->fields)._._.m_target;
              (body->fields)._._.method = pMVar10;
              (body->fields)._._.m_target = (Object *)this;
              pMVar12 = this;
              func_?();
              uVar13 = pMVar10->parameters_count;
              (body->fields)._._.method_code = body;
              cVar14 = func_?(pMVar10,ppOVar11,pMVar12);
              if ((cVar14 == '\0') || (uVar13 != 1)) {
                (body->fields)._._.method_code = (body->fields)._._.m_target;
                puVar15 = (body->fields)._._.method_ptr;
              }
              else {
                puVar15 = &UNK_?;
              }
              (body->fields)._._.invoke_impl = puVar15;
              (body->fields)._._.extra_arg = &UNK_?;
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Update
               (MouseModifier *this,MethodInfo *method)

{
  if ((this->fields)._.isDeactivating != 0) {
    return;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields)._._.timeStamp;
  pfVar2 = &(this->fields)._.sizeUnstableAfterSeconds;
  if (fVar1 < *pfVar2 || fVar1 == *pfVar2) {
    return;
  }
  fVar3 = (this->fields)._.unstableSpeed;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 + fVar3;
  pAVar5 = (this->fields)._._.owner;
  (this->fields)._.unstableSpeed = fVar4;
  if (pAVar5 != (Avatar *)0x0) {
    uVar6 = (this->fields)._.defaultScale.x;
    uVar7 = (this->fields)._.defaultScale.y;
    fVar8 = (this->fields)._.defaultScale.z;
    pMVar9 = (pAVar5->fields).mvAvatar;
    fVar3 = (this->fields)._.sizeModifier;
    uVar10 = (this->fields)._.defaultScale.x;
    uVar11 = (this->fields)._.defaultScale.y;
    fVar12 = (float)uVar10 * _UNK_?;
    fVar13 = (float)uVar11 * _UNK_?;
    fVar14 = fVar8 * _UNK_?;
    dVar15 = (double)((fVar1 - (this->fields)._.sizeUnstableAfterSeconds) * fVar4);
    func_?();
    fVar1 = _UNK_? - (float)dVar15;
    uStack_16 = CONCAT44(fVar1 * fVar13 + (float)uVar7 * fVar3,
                         (float)uVar6 * fVar3 + fVar1 * fVar12);
    if (pMVar9 != (MVAvatar *)0x0) {
      (*(code *)(pMVar9->klass->vtable).set_Scale.method)
                (pMVar9,uStack_16,fVar1 * fVar14 + fVar8 * fVar3,
                 (pMVar9->klass->vtable).get_WorldPosition.methodPtr);
      return;
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void <Scale>b__2_0(Single) */

void Assembly-CSharp.dll::MouseModifier::MouseModifier__Scale_b__2_0
               (MouseModifier *this,float t,MethodInfo *method)

{
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    uVar2 = (this->fields)._.defaultScale.x;
    uVar3 = (this->fields)._.defaultScale.y;
    pMVar4 = (pAVar1->fields).mvAvatar;
    fVar5 = (this->fields)._.defaultScale.z;
    fVar6 = _UNK_? - (this->fields)._.sizeModifier;
    fVar7 = (float10)func_?(t * _UNK_?);
    fVar8 = (float)(fVar7 / (float10)_UNK_?);
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    else if (fVar6 < fVar8) {
      fVar8 = fVar6;
    }
    fVar8 = _UNK_? - fVar8;
    uVar9 = (this->fields)._.defaultScale.x;
    uVar10 = (this->fields)._.defaultScale.y;
    fVar11 = (this->fields)._.defaultScale.z;
    fVar6 = (this->fields)._.sizeModifier;
    dVar12 = (double)(t * (this->fields)._.sineStrength);
    func_?();
    fVar13 = _UNK_? - (float)dVar12;
    uStack_14 = CONCAT44((float)uVar3 * fVar8 + fVar13 * (float)uVar10 * fVar6,
                         (float)uVar2 * fVar8 + fVar13 * (float)uVar9 * fVar6);
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                (pMVar4,uStack_14,fVar5 * fVar8 + fVar13 * fVar11 * fVar6,
                 (pMVar4->klass->vtable).get_WorldPosition.methodPtr);
      if (t != (this->fields)._.timeToSize) {
        return;
      }
      pAVar1 = (this->fields)._._.owner;
      if (pAVar1 != (Avatar *)0x0) {
        uVar15 = (this->fields)._.defaultScale.x;
        uVar16 = (this->fields)._.defaultScale.y;
        fVar8 = (this->fields)._.sizeModifier;
        pMVar4 = (pAVar1->fields).mvAvatar;
        uStack_14 = CONCAT44((float)uVar16 * fVar8,(float)uVar15 * fVar8);
        if (pMVar4 != (MVAvatar *)0x0) {
          (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                    (pMVar4,uStack_14,(this->fields)._.defaultScale.z * fVar8,
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

void Assembly-CSharp.dll::MouseModifier::MouseModifier__UnScale_b__3_0
               (MouseModifier *this,float t,MethodInfo *method)

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
    if ((fVar6 <= fVar8) && (fVar6 = fVar8, _UNK_? < fVar8)) {
      fVar6 = _UNK_?;
    }
    uVar9 = (this->fields)._.defaultScale.x;
    uVar10 = (this->fields)._.defaultScale.y;
    fVar11 = (this->fields)._.defaultScale.z;
    fVar8 = (this->fields)._.sizeModifier;
    dVar12 = (double)(t * (this->fields)._.sineStrength);
    func_?();
    fVar13 = _UNK_? - (float)dVar12;
    uStack_14 = CONCAT44((float)uVar3 * fVar6 + fVar13 * (float)uVar10 * fVar8,
                         (float)uVar2 * fVar6 + fVar13 * (float)uVar9 * fVar8);
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                (pMVar4,uStack_14,fVar5 * fVar6 + fVar13 * fVar11 * fVar8,
                 (pMVar4->klass->vtable).get_WorldPosition.methodPtr);
      if (t == (this->fields)._.timeToSize) {
        MouseModifier_Destroy(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MouseModifier() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier__ctor(MouseModifier *this,MethodInfo *method)

{
  (this->fields)._.timeToSize = 1.5;
  (this->fields)._.sizeModifier = 1.0;
  (this->fields)._.sizeUnstableAfterSeconds = 28.0;
  (this->fields)._.unstableSpeed = 10.0;
  (this->fields)._.sineStrength = 14.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  (this->fields)._.defaultScale.x = (pVVar1->oneVector).x;
  (this->fields)._.defaultScale.y = fVar2;
  (this->fields)._.defaultScale.z = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

