
/* Void SetAlphaBaseToColor(Color) */

void Assembly-CSharp.dll::CrossHairAndroid::CrossHairAndroid_SetAlphaBaseToColor
               (CrossHairAndroid *this,Color color,MethodInfo *method)

{
  (this->fields).alphaBase.r = color.r;
  (this->fields).alphaBase.b = color.b;
  (this->fields).alphaBase.g = color.g;
  return;
}


/* Void ShowHasHitEffect() */

void Assembly-CSharp.dll::CrossHairAndroid::CrossHairAndroid_ShowHasHitEffect
               (CrossHairAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).crossHairHitEnemyIndicator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields).hitEffectActive = 1;
    (this->fields).timer = 0.0;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CrossHairAndroid::CrossHairAndroid_Update
               (CrossHairAndroid *this,MethodInfo *method)

{
  if ((this->fields).hitEffectActive == 0) {
    return;
  }
  fVar1 = (this->fields).timer;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pIVar3 = (this->fields).crossHair;
  (this->fields).timer = fVar2 + fVar1;
  if (pIVar3 != (Image *)0x0) {
    puVar4 = (undefined4 *)
             (*(pIVar3->klass->vtable).get_color.methodPtr)
                       (&uStack_5,pIVar3,(pIVar3->klass->vtable).get_color.method);
    uStack_5 = *puVar4;
    uStack_6 = puVar4[1];
    uStack_7 = puVar4[2];
    fStack_8 = (float)puVar4[3];
    pAVar9 = (this->fields).fadeCurve;
    if (pAVar9 != (AnimationCurve *)0x0) {
      fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar9,(this->fields).timer,(MethodInfo *)0x0);
      pIVar3 = (this->fields).crossHairHitEnemyIndicator;
      if (pIVar3 != (Image *)0x0) {
        (*(pIVar3->klass->vtable).set_color.methodPtr)
                  (pIVar3,uStack_5,uStack_6,uStack_7,fStack_8,
                   (pIVar3->klass->vtable).set_color.method);
        fVar1 = (this->fields).timer;
        pAVar9 = (this->fields).fadeCurve;
        if (pAVar9 != (AnimationCurve *)0x0) {
          pKVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                             (pAVar9,(MethodInfo *)0x0);
          pAVar9 = (this->fields).fadeCurve;
          if ((pAVar9 != (AnimationCurve *)0x0) &&
             (iVar11 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                      AnimationCurve_get_length(pAVar9,(MethodInfo *)0x0),
             pKVar10 != (Keyframe__Array *)0x0)) {
            if (iVar11 - 1U < pKVar10->max_length) {
              fVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                      Single,System::Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                                ((KeyValuePair_2_System_Single_System_Single_ *)
                                 (pKVar10->vector + iVar11 + -1),(MethodInfo *)0x0);
              if (fVar1 < fVar2) {
                return;
              }
              (this->fields).hitEffectActive = 0;
              return;
            }
            goto code_?;
          }
        }
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


/* Void UpdateCrossHair(PickupItem) */

void Assembly-CSharp.dll::CrossHairAndroid::CrossHairAndroid_UpdateCrossHair
               (CrossHairAndroid *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (pickupItem != (PickupItem *)0x0) {
    IStack_1.m_value =
         (*(pickupItem->klass->vtable).get_Quantity.methodPtr)
                   (pickupItem,(pickupItem->klass->vtable).get_Quantity.method);
    pfVar2 = (float *)(*(pickupItem->klass->vtable).get_CrossHairColor.methodPtr)
                                (&stack0xffffffe8,pickupItem,
                                 (pickupItem->klass->vtable).get_CrossHairColor.method);
    fVar3 = *pfVar2;
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar6 = (float10)(*(pickupItem->klass->vtable).get_ChargeState.methodPtr)
                                (pickupItem,(pickupItem->klass->vtable).get_ChargeState.method);
    fVar7 = (float)fVar6;
    bVar8 = false;
    if (IStack_1.m_value == 0) {
      pTVar9 = (this->fields).ammoCount;
      if (pTVar9 == (Text *)0x0) goto code_?;
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                        ((Behaviour *)pTVar9,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        pTVar9 = (this->fields).ammoCount;
        if ((pTVar9 == (Text *)0x0) ||
           (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar9,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0)
           ) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar11,0,(MethodInfo *)0x0);
      }
      bVar8 = IStack_1.m_value == 0;
    }
    if (!bVar8 && -1 < IStack_1.m_value) {
      pTVar9 = (this->fields).ammoCount;
      if (pTVar9 == (Text *)0x0) goto code_?;
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                        ((Behaviour *)pTVar9,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        pTVar9 = (this->fields).ammoCount;
        if ((pTVar9 == (Text *)0x0) ||
           (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar9,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0)
           ) goto code_?;
        fVar4 = 0.0;
        fVar3 = 1.4013e-45;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar11,1,(MethodInfo *)0x0);
      }
    }
    if (fVar7 <= 0.0) {
      pIVar12 = (this->fields).chargeFill;
      (this->fields).isFillOn = 1;
      if (pIVar12 == (Image *)0x0) goto code_?;
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                        ((Behaviour *)pIVar12,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        pIVar12 = (this->fields).chargeFill;
        if ((pIVar12 == (Image *)0x0) ||
           (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar12,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0)
           ) goto code_?;
        fVar4 = 0.0;
        fVar3 = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar11,0,(MethodInfo *)0x0);
      }
    }
    if (0.0 < fVar7) {
      pIVar12 = (this->fields).chargeFill;
      if (pIVar12 == (Image *)0x0) goto code_?;
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                        ((Behaviour *)pIVar12,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        pIVar12 = (this->fields).chargeFill;
        if ((pIVar12 == (Image *)0x0) ||
           (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar12,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0)
           ) goto code_?;
        fVar4 = 0.0;
        fVar3 = 1.4013e-45;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar11,1,(MethodInfo *)0x0);
      }
    }
    pTVar9 = (this->fields).ammoCount;
    pSVar13 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
    if (pTVar9 != (Text *)0x0) {
      (*(pTVar9->klass->vtable).set_text.methodPtr)
                (pTVar9,pSVar13,(pTVar9->klass->vtable).set_text.method);
      pIVar12 = (this->fields).crossHair;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pIVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        (this->fields).alphaBase.r = fVar3;
        (this->fields).alphaBase.b = fVar5;
        (this->fields).alphaBase.g = fVar4;
        pIVar12 = (this->fields).crossHair;
        if (pIVar12 == (Image *)0x0) goto code_?;
        (*(pIVar12->klass->vtable).set_color.methodPtr)
                  (pIVar12,(this->fields).alphaBase.r,(this->fields).alphaBase.g,
                   (this->fields).alphaBase.b,(this->fields).alphaBase.a,
                   (pIVar12->klass->vtable).set_color.method);
      }
      if (fVar7 <= _UNK_?) {
        return;
      }
      pIVar12 = (this->fields).chargeFill;
      if (pIVar12 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar12,fVar7,(MethodInfo *)0x0);
        pIVar12 = (this->fields).chargeFill;
        if (pIVar12 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar12,(this->fields).isFillOn,(MethodInfo *)0x0);
          if (fVar7 < _UNK_?) {
            return;
          }
          fVar7 = (this->fields).timeSinceLastToggle;
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar3 = fVar3 + fVar7;
          pfVar2 = &(this->fields).toggleInterval;
          (this->fields).timeSinceLastToggle = fVar3;
          if (fVar3 < *pfVar2 || fVar3 == *pfVar2) {
            return;
          }
          (this->fields).timeSinceLastToggle = 0.0;
          (this->fields).isFillOn = (this->fields).isFillOn == 0;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* CrossHairAndroid() */

void Assembly-CSharp.dll::CrossHairAndroid::CrossHairAndroid__ctor
               (CrossHairAndroid *this,MethodInfo *method)

{
  (this->fields).toggleInterval = 0.1;
  (this->fields).isFillOn = 1;
  (this->fields).timer = INFINITY;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::CrossHairAndroid::CrossHairAndroid_get_Visible
               (CrossHairAndroid *this,MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    bVar2 = (*pcRam_?)();
    return bVar2;
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::CrossHairAndroid::CrossHairAndroid_set_Visible
               (CrossHairAndroid *this,bool value,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,value,(MethodInfo *)0x0);
    if ((this->fields).ammoRoot != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

