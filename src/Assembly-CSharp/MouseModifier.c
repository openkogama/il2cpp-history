
/* Void Destroy() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Destroy
               (MouseModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
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
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      fVar5 = (this->fields)._.sizeModifier;
      pMVar6 = (pAVar1->fields).mvAvatar;
      if (pMVar6 != (MVAvatar *)0x0) {
        (*(code *)(pMVar6->klass->vtable).set_Scale.method)
                  (pMVar6,(float)uVar3 * fVar5,(float)uVar4 * fVar5,
                   (this->fields)._.defaultScale.z * fVar5,
                   (pMVar6->klass->vtable).get_WorldPosition.methodPtr);
        return;
      }
    }
  }
  else if ((pAVar1 != (Avatar *)0x0) &&
          (pMVar6 = (pAVar1->fields).mvAvatar, pMVar6 != (MVAvatar *)0x0)) {
    uVar7 = (this->fields)._.defaultScale.x;
    uVar8 = (this->fields)._.defaultScale.y;
    (*(code *)(pMVar6->klass->vtable).set_Scale.method)
              (pMVar6,uVar7,uVar8,(this->fields)._.defaultScale.z,
               (pMVar6->klass->vtable).get_WorldPosition.methodPtr);
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
            fVar8 = (this->fields)._.sizeModifier;
            pMVar2 = (pAVar1->fields).mvAvatar;
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
                          (pAVar9,(this->fields)._.shrinkSound,(MethodInfo *)0x0);
              }
              fVar8 = (this->fields)._.timeToSize;
              body = (SizeModifier_ActionDelegate *)
                     func_?(TypeInfo__SizeModifier__ActionDelegate);
              pMVar10 = MethodInfo__MouseModifier___Scale_b__2_0_float_;
              ppOVar11 = &(body->fields)._._.m_target;
              (body->fields)._._.method_ptr =
                   MethodInfo__MouseModifier___Scale_b__2_0_float_->virtualMethodPointer;
              (body->fields)._._.method = pMVar10;
              *ppOVar11 = (Object *)this;
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    fVar4 = (this->fields)._.sizeModifier;
    pMVar5 = (pAVar1->fields).mvAvatar;
    if (pMVar5 != (MVAvatar *)0x0) {
      (*(code *)(pMVar5->klass->vtable).set_Scale.method)
                (pMVar5,CONCAT44((float)uVar3 * fVar4,(float)uVar2 * fVar4),
                 (this->fields)._.defaultScale.z * fVar4,
                 (pMVar5->klass->vtable).get_WorldPosition.methodPtr);
      pAVar1 = (this->fields)._._.owner;
      if (pAVar1 != (Avatar *)0x0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar1,(MethodInfo *)0x0);
        if (pGVar6 != (GameObject *)0x0) {
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_get_activeInHierarchy(pGVar6,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            MouseModifier_Destroy(this,(MethodInfo *)0x0);
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
                          (pAVar8,(this->fields)._.growSound,(MethodInfo *)0x0);
              }
              fVar4 = (this->fields)._.timeToSize;
              body = (SizeModifier_ActionDelegate *)
                     func_?(TypeInfo__SizeModifier__ActionDelegate);
              pMVar9 = MethodInfo__MouseModifier___UnScale_b__3_0_float_;
              ppOVar10 = &(body->fields)._._.m_target;
              (body->fields)._._.method_ptr =
                   MethodInfo__MouseModifier___UnScale_b__3_0_float_->virtualMethodPointer;
              (body->fields)._._.method = pMVar9;
              *ppOVar10 = (Object *)this;
              pMVar11 = this;
              func_?();
              uVar12 = pMVar9->parameters_count;
              (body->fields)._._.method_code = body;
              cVar13 = func_?(pMVar9,ppOVar10,pMVar11);
              if ((cVar13 == '\0') || (uVar12 != 1)) {
                (body->fields)._._.method_code = (body->fields)._._.m_target;
                puVar14 = (body->fields)._._.method_ptr;
              }
              else {
                puVar14 = &UNK_?;
              }
              (body->fields)._._.invoke_impl = puVar14;
              (body->fields)._._.extra_arg = &UNK_?;
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
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    uStack_16 = CONCAT44(fVar13 * fVar1 + (float)uVar7 * fVar3,
                         fVar12 * fVar1 + (float)uVar6 * fVar3);
    if (pMVar9 != (MVAvatar *)0x0) {
      (*(code *)(pMVar9->klass->vtable).set_Scale.method)
                (pMVar9,uStack_16,fVar14 * fVar1 + fVar8 * fVar3,
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
    dVar12 = (double)((this->fields)._.sineStrength * t);
    func_?();
    fVar13 = _UNK_? - (float)dVar12;
    uStack_14 = CONCAT44((float)uVar10 * fVar6 * fVar13 + (float)uVar3 * fVar8,
                         (float)uVar9 * fVar6 * fVar13 + (float)uVar2 * fVar8);
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                (pMVar4,uStack_14,fVar11 * fVar6 * fVar13 + fVar5 * fVar8,
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
        if (pMVar4 != (MVAvatar *)0x0) {
          (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                    (pMVar4,CONCAT44((float)uVar16 * fVar8,(float)uVar15 * fVar8),
                     (this->fields)._.defaultScale.z * fVar8,
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
    dVar12 = (double)((this->fields)._.sineStrength * t);
    func_?();
    fVar13 = _UNK_? - (float)dVar12;
    uStack_14 = CONCAT44((float)uVar10 * fVar8 * fVar13 + (float)uVar3 * fVar6,
                         (float)uVar9 * fVar8 * fVar13 + (float)uVar2 * fVar6);
    if (pMVar4 != (MVAvatar *)0x0) {
      (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                (pMVar4,uStack_14,fVar11 * fVar8 * fVar13 + fVar5 * fVar6,
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

