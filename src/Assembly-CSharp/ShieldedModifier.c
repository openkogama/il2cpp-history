
/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_AvatarStateChangedHandler
               (ShieldedModifier *this,Object *state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (state != (Object *)0x0) {
    pIVar1 = TypeInfo__System__Int32;
    if ((state->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    puVar2 = (uint *)func_?(state);
    if ((*puVar2 & 4) == 0) {
      if ((*puVar2 & 1) == 0) {
        return;
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        pRVar4 = (this->fields).lineRenderer;
        if (pRVar4 != (RotatingShieldLine *)0x0) {
          RotatingShieldLine::RotatingShieldLine_OnSetVisible(pRVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pRVar4 = (this->fields).lineRenderer;
        if (pRVar4 != (RotatingShieldLine *)0x0) {
          (pRVar4->fields).recreatOrbs = 1;
          return;
        }
      }
    }
  }
  func_?();
  state = extraout_ECX;
  pIVar1 = extraout_EDX;
code_?:
  func_?(state,pIVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator MakeVisible(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_MakeVisible
          (ShieldedModifier *this,float fadeInTime,float fadeOutTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ShieldedModifier___MakeVisible_d__14);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ShieldedModifier___MakeVisible_d__14);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    value[2].monitor = (MonitorData *)fadeInTime;
    value[3].klass = (Object__Class *)fadeOutTime;
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_OnActivated
               (ShieldedModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_);
    func_?(&MethodInfo__ShieldedModifier__OnHealthChange_System__Object_);
    func_?(&StringLiteral_Torso);
    cRam_? = '\x01';
  }
  (this->fields)._.owner = target;
  func_?(&(this->fields)._.owner,target);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pAVar2 = (this->fields)._.owner;
  if ((((pAVar2 != (Avatar *)0x0) && (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 != (MVAvatar *)0x0)
       ) && (pMVar4 = (pMVar3->fields).body, pMVar4 != (MVBody *)0x0)) &&
     (pTVar1 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (pTVar1,(pMVar4->fields)._._._.transform,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                          ((Vector3 *)&puStack_6,pTVar1,(MethodInfo *)0x0);
      uVar7 = pVVar5->x;
      uVar8 = pVVar5->y;
      value.y = (float)uVar8 + _UNK_?;
      value.x = (float)uVar7 + 0.0;
      value.z = pVVar5->z + 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,value,(MethodInfo *)0x0);
      this_00 = (this->fields).shieldRenderer;
      if (this_00 != (MeshRenderer *)0x0) {
        pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)this_00,(MethodInfo *)0x0);
        (this->fields).shieldMat = pMVar9;
        func_?();
        pAVar2 = (this->fields)._.owner;
        if (((pAVar2 != (Avatar *)0x0) &&
            (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 != (MVAvatar *)0x0)) &&
           (pMVar10 = (pMVar3->fields).Health,
           pMVar10 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
          fVar11 = (float10)(*(pMVar10->klass->vtable).get_Value.methodPtr)();
          pAVar2 = (this->fields)._.owner;
          (this->fields).prevHealth = (float)fVar11;
          if (((pAVar2 != (Avatar *)0x0) &&
              (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 != (MVAvatar *)0x0)) &&
             ((pMVar10 = (pMVar3->fields).Health,
              pMVar10 != (MVRuntimeDataVariable_1_System_Single_ *)0x0 &&
              (pUVar12 = (UnityAction_1_System_Object_ *)func_?(),
              pUVar12 != (UnityAction_1_System_Object_ *)0x0)))) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar12,(Object *)this,
                       MethodInfo__ShieldedModifier__OnHealthChange_System__Object_,
                       (MethodInfo *)0x0);
            pMVar13 = (MVRuntimeDataVariable_OnChangeDelegate *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)this,(Delegate *)pUVar12,(MethodInfo *)0x0);
            if (pMVar13 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (pMVar10->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            }
            else {
              pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar13->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar14 = pMVar13;
              }
              if (pMVar14 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
              (pMVar10->fields)._.OnChange = pMVar14;
              pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar13->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar14 = pMVar13;
              }
              if (pMVar14 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
            }
            func_?();
            pRVar15 = (this->fields).lineRenderer;
            if (pRVar15 != (RotatingShieldLine *)0x0) {
              RotatingShieldLine::RotatingShieldLine_Initialize(pRVar15,(MethodInfo *)0x0);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              pAVar2 = (this->fields)._.owner;
              if ((((pAVar2 != (Avatar *)0x0) &&
                   (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 != (MVAvatar *)0x0)) &&
                  (pMVar4 = (pMVar3->fields).body, pMVar4 != (MVBody *)0x0)) &&
                 ((this_01 = MVBody::MVBody_get_BodyData(pMVar4,(MethodInfo *)0x0),
                  this_01 != (BodyData *)0x0 &&
                  (p = BodyData::BodyData_GetPartBone_1
                                 (this_01,StringLiteral_Torso,(MethodInfo *)0x0),
                  pTVar1 != (Transform *)0x0)))) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                          (pTVar1,p,(MethodInfo *)0x0);
                pAVar2 = (this->fields)._.owner;
                if (((pAVar2 != (Avatar *)0x0) &&
                    ((pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 != (MVAvatar *)0x0 &&
                     (pMVar16 = (pMVar3->fields).SpawnRoleModeTypes,
                     pMVar16 != (MVRuntimeDataVariable *)0x0)))) &&
                   (pUVar12 = (UnityAction_1_System_Object_ *)func_?(),
                   pUVar12 != (UnityAction_1_System_Object_ *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            (pUVar12,(Object *)this,
                             MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_
                             ,(MethodInfo *)0x0);
                  pMVar13 = (MVRuntimeDataVariable_OnChangeDelegate *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)this,(Delegate *)pUVar12,(MethodInfo *)0x0);
                  if (pMVar13 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                    (pMVar16->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                  }
                  else {
                    pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                    if (pMVar13->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pMVar14 = pMVar13;
                    }
                    if (pMVar14 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                    goto code_?;
                    (pMVar16->fields).OnChange = pMVar14;
                    pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                    if (pMVar13->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pMVar14 = pMVar13;
                    }
                    if (pMVar14 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                    goto code_?;
                  }
                  func_?();
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
                      (IPlayModeUI *)0x0) {
                    cVar17 = func_?();
                    if (cVar17 == '\0') {
                      return;
                    }
                    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    if (this_02 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_02,0,(MethodInfo *)0x0);
                      pRVar15 = (this->fields).lineRenderer;
                      if (pRVar15 != (RotatingShieldLine *)0x0) {
                        (pRVar15->fields).recreatOrbs = 1;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_OnDeactivated
               (ShieldedModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_);
    func_?(&MethodInfo__ShieldedModifier__OnHealthChange_System__Object_);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.owner;
  if (((pAVar1 != (Avatar *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0))
     && (pMVar3 = (pMVar2->fields).Health, pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0))
  {
    pMVar4 = (pMVar3->fields)._.OnChange;
    pUVar5 = (UnityAction_1_System_Object_ *)
             func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (pUVar5 != (UnityAction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar5,(Object *)this,MethodInfo__ShieldedModifier__OnHealthChange_System__Object_,
                 (MethodInfo *)0x0);
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar3->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar6 = pMVar4;
        }
        if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        (pMVar3->fields)._.OnChange = pMVar6;
        pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar6 = pMVar4;
        }
        if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      }
      func_?();
      pAVar1 = (this->fields)._.owner;
      if (((pAVar1 != (Avatar *)0x0) &&
          (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0)) &&
         (pMVar7 = (pMVar2->fields).SpawnRoleModeTypes, pMVar7 != (MVRuntimeDataVariable *)0x0)) {
        pMVar4 = (pMVar7->fields).OnChange;
        pUVar5 = (UnityAction_1_System_Object_ *)
                 func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        if (pUVar5 != (UnityAction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar5,(Object *)this,
                     MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_,
                     (MethodInfo *)0x0);
          pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pMVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
          if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            (pMVar7->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
            func_?();
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
            return;
          }
          pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar6 = pMVar4;
          }
          if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            (pMVar7->fields).OnChange = pMVar6;
            pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar6 = pMVar4;
            }
            if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnHealthChange(Object) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_OnHealthChange
               (ShieldedModifier *this,Object *floatHealth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (floatHealth != (Object *)0x0) {
    pSVar1 = TypeInfo__System__Single;
    if ((floatHealth->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?(floatHealth);
    fVar3 = *pfVar2;
    if (((this->fields).prevHealth <= fVar3) || ((this->fields).readyToPlayEffect == 0)) {
code_?:
      (this->fields).prevHealth = fVar3;
      return;
    }
    bVar4 = cRam_? == '\0';
    (this->fields).readyToPlayEffect = 0;
    if (bVar4) {
      func_?(&TypeInfo__ShieldedModifier___MakeVisible_d__14);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__ShieldedModifier___MakeVisible_d__14);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EBP);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?(value + 2,this);
      value[2].monitor = (MonitorData *)0x3dcccccd;
      value[3].klass = (Object__Class *)0x3f19999a;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
  floatHealth = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(floatHealth,pSVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ShieldedModifier() */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier__ctor
               (ShieldedModifier *this,MethodInfo *method)

{
  (this->fields).readyToPlayEffect = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

