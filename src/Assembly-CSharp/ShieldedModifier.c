
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
  method_00 = TypeInfo__ShieldedModifier___MakeVisible_d__14;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)fadeInTime;
  value[3].klass = (Object__Class *)fadeOutTime;
  return (IEnumerator *)value;
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
  if ((((pAVar2 == (Avatar *)0x0) || (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0)
       ) || (pMVar4 = (pMVar3->fields).body, pMVar4 == (MVBody *)0x0)) ||
     (pTVar1 == (Transform *)0x0)) {
code_?:
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (pTVar1,(pMVar4->fields)._._._.transform,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
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
    if (this_00 == (MeshRenderer *)0x0) goto code_?;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)this_00,(MethodInfo *)0x0);
    (this->fields).shieldMat = pMVar9;
    func_?();
    pAVar2 = (this->fields)._.owner;
    if (((pAVar2 == (Avatar *)0x0) ||
        (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0)) ||
       (pMVar10 = (pMVar3->fields).Health, pMVar10 == (MVRuntimeDataVariable_1_System_Single_ *)0x0))
    goto code_?;
    fVar11 = (float10)(*(code *)(pMVar10->klass->vtable).get_Value.method)();
    pAVar2 = (this->fields)._.owner;
    (this->fields).prevHealth = (float)fVar11;
    if (((pAVar2 == (Avatar *)0x0) ||
        (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0)) ||
       (pMVar10 = (pMVar3->fields).Health, pMVar10 == (MVRuntimeDataVariable_1_System_Single_ *)0x0))
    goto code_?;
    pMVar12 = (pMVar10->fields)._.OnChange;
    pVVar13 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (pVVar13,(Object *)this,MethodInfo__ShieldedModifier__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar12,(Delegate *)pVVar13,(MethodInfo *)0x0);
    if (pDVar14 == (Delegate *)0x0) {
      (pVVar13->fields)._._.method_code = (void *)0x0;
code_?:
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
            (p = BodyData::BodyData_GetPartBone_1(this_01,StringLiteral_Torso,(MethodInfo *)0x0),
            pTVar1 != (Transform *)0x0)))) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar1,p,(MethodInfo *)0x0);
          pAVar2 = (this->fields)._.owner;
          if ((pAVar2 != (Avatar *)0x0) &&
             ((pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 != (MVAvatar *)0x0 &&
              (pMVar16 = (pMVar3->fields).SpawnRoleModeTypes, pMVar16 != (MVRuntimeDataVariable *)0x0)
              ))) {
            pMVar12 = (pMVar16->fields).OnChange;
            pVVar13 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
            VideoCapture+OnVideoCaptureResourceCreatedCallback::
            VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                      (pVVar13,(Object *)this,
                       MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_,
                       (MethodInfo *)0x0);
            pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pMVar12,(Delegate *)pVVar13,(MethodInfo *)0x0);
            if (pDVar14 == (Delegate *)0x0) {
              (pVVar13->fields)._._.method_code = (void *)0x0;
            }
            else {
              pDVar17 = (Delegate *)0x0;
              if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pDVar17 = pDVar14;
              }
              if (pDVar17 == (Delegate *)0x0) goto code_?;
              (pVVar13->fields)._._.method_code = pDVar17;
              pDVar17 = (Delegate *)0x0;
              if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pDVar17 = pDVar14;
              }
              if (pDVar17 == (Delegate *)0x0) goto code_?;
            }
            func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
                (IPlayModeUI *)0x0) {
              cVar18 = func_?();
              if (cVar18 == '\0') {
                return;
              }
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
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
      goto code_?;
    }
    pDVar17 = (Delegate *)0x0;
    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pDVar17 = pDVar14;
    }
    if (pDVar17 == (Delegate *)0x0) goto code_?;
    (pVVar13->fields)._._.method_code = pDVar17;
    pDVar17 = (Delegate *)0x0;
    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pDVar17 = pDVar14;
    }
    if (pDVar17 != (Delegate *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  if (pAVar1 != (Avatar *)0x0) {
    pMVar2 = (pAVar1->fields).mvAvatar;
    if ((pMVar2 != (MVAvatar *)0x0) &&
       (pMVar3 = (pMVar2->fields).Health, pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0))
    {
      pMVar4 = (pMVar3->fields)._.OnChange;
      pVVar5 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
               func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (pVVar5,(Object *)this,MethodInfo__ShieldedModifier__OnHealthChange_System__Object_,
                 (MethodInfo *)0x0);
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar4,(Delegate *)pVVar5,(MethodInfo *)0x0);
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
      pOVar7 = pMVar3[1].fields._.sendValue;
      if (((pOVar7 != (Object *)0x0) && (pOVar8 = pOVar7[2].klass, pOVar8 != (Object__Class *)0x0))
         && (pIVar9 = pOVar8[1]._0.castClass, pIVar9 != (Il2CppClass *)0x0)) {
        pIVar10 = pIVar9->element_class;
        pVVar5 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                 func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  (pVVar5,(Object *)&(pMVar3->fields)._.OnChange,
                   MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_,
                   (MethodInfo *)0x0);
        pIVar10 = (Il2CppClass *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pIVar10,(Delegate *)pVVar5,(MethodInfo *)0x0);
        if (pIVar10 == (Il2CppClass *)0x0) {
          pIVar9->element_class = (Il2CppClass *)0x0;
code_?:
          func_?();
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)&pIVar9->element_class,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          return;
        }
        pIVar11 = (Il2CppClass *)0x0;
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pIVar10->image ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pIVar11 = pIVar10;
        }
        if (pIVar11 != (Il2CppClass *)0x0) {
          pIVar9->element_class = pIVar11;
          pIVar11 = (Il2CppClass *)0x0;
          if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pIVar10->image ==
              TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pIVar11 = pIVar10;
          }
          if (pIVar11 != (Il2CppClass *)0x0) goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  if (floatHealth == (Object *)0x0) {
    func_?();
    floatHealth = extraout_ECX;
    pSVar1 = extraout_EDX;
  }
  else {
    pSVar1 = TypeInfo__System__Single;
    if ((floatHealth->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar2 = (float *)func_?(floatHealth);
      fVar3 = *pfVar2;
      if ((fVar3 < (this->fields).prevHealth) && ((this->fields).readyToPlayEffect != 0)) {
        bVar4 = cRam_? == '\0';
        (this->fields).readyToPlayEffect = 0;
        if (bVar4) {
          func_?(&TypeInfo__ShieldedModifier___MakeVisible_d__14);
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__ShieldedModifier___MakeVisible_d__14;
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = (Object__Class *)this;
        func_?(value + 2,this);
        value[2].monitor = (MonitorData *)0x3dcccccd;
        value[3].klass = (Object__Class *)0x3f19999a;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      }
      (this->fields).prevHealth = fVar3;
      return;
    }
  }
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

