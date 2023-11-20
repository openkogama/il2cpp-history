
/* Void ShowHasHitEffect() */

void Assembly-CSharp.dll::CrossHair::CrossHair_ShowHasHitEffect(CrossHair *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).crossHairHitEnemyIndicator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pIVar1 = (this->fields).crossHair;
  if (pIVar1 != (Image *)0x0) {
    pIStack_3 = (pIVar1->klass->vtable).set_color.methodPtr;
    puVar4 = (undefined4 *)(*(code *)(pIVar1->klass->vtable).get_color.method)(&pIStack_3,pIVar1);
    pIVar1 = (this->fields).crossHairHitEnemyIndicator;
    uStack_5 = puVar4[1];
    uStack_6 = puVar4[2];
    uStack_7 = 0;
    if (pIVar1 != (Image *)0x0) {
      pIStack_3 = (pIVar1->klass->vtable).get_raycastTarget.methodPtr;
      (*(code *)(pIVar1->klass->vtable).set_color.method)(pIVar1,*puVar4,uStack_5,uStack_6,0);
      (this->fields).hitEffectActive = 1;
      (this->fields).timer = 0.0;
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CrossHair::CrossHair_Update(CrossHair *this,MethodInfo *method)

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
             (*(code *)(pIVar3->klass->vtable).get_color.method)
                       (&uStack_5,pIVar3,(pIVar3->klass->vtable).set_color.methodPtr);
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
        (*(code *)(pIVar3->klass->vtable).set_color.method)
                  (pIVar3,uStack_5,uStack_6,uStack_7,fStack_8,
                   (pIVar3->klass->vtable).get_raycastTarget.methodPtr);
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
            if (pKVar10->max_length <= iVar11 - 1U) goto code_?;
            fStack_12 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                       Single,System::Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                                 ((KeyValuePair_2_System_Single_System_Single_ *)
                                  (pKVar10->vector + iVar11 + -1),(MethodInfo *)0x0);
            if (fVar1 < fStack_12) {
              return;
            }
            pIVar3 = (this->fields).crossHair;
            (this->fields).timer = 0.0;
            if (pIVar3 != (Image *)0x0) {
              puVar4 = (undefined4 *)
                       (*(code *)(pIVar3->klass->vtable).get_color.method)
                                 (&uStack_5,pIVar3,(pIVar3->klass->vtable).set_color.methodPtr);
              pIVar3 = (this->fields).crossHairHitEnemyIndicator;
              uStack_5 = *puVar4;
              uStack_6 = puVar4[1];
              uStack_7 = puVar4[2];
              fStack_8 = 0.0;
              if (pIVar3 != (Image *)0x0) {
                (*(code *)(pIVar3->klass->vtable).set_color.method)
                          (pIVar3,uStack_5,uStack_6,uStack_7,0,
                           (pIVar3->klass->vtable).get_raycastTarget.methodPtr);
                (this->fields).hitEffectActive = 0;
                return;
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateCrossHair(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateCrossHair
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_u221E);
    cRam_? = '\x01';
  }
  if (pickupItem == (PickupItem *)0x0) goto code_?;
  IStack_1.m_value =
       (*(code *)(pickupItem->klass->vtable).get_Quantity.method)
                 (pickupItem,(pickupItem->klass->vtable).get_CrossHairColor.methodPtr);
  puVar2 = (undefined4 *)
           (*(code *)(pickupItem->klass->vtable).get_CrossHairColor.method)
                     (&stack0xffffffe8,pickupItem,
                      (pickupItem->klass->vtable).get_ChargeState.methodPtr);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  fVar7 = (float10)(*(code *)(pickupItem->klass->vtable).get_ChargeState.method)
                              (pickupItem,
                               (pickupItem->klass->vtable).get_ActivateGunModeOnEquip.methodPtr);
  fVar8 = (float)fVar7;
  if (IStack_1.m_value == 0) {
    pTVar9 = (this->fields).ammoCount;
    if (pTVar9 == (Text *)0x0) goto code_?;
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pTVar9,(MethodInfo *)0x0);
    if ((bVar10 == 0) ||
       (pEVar11 = System.Core.dll::System::Dynamic::BindingRestrictions::
                 BindingRestrictions_ToExpression
                           ((BindingRestrictions *)pickupItem,(MethodInfo *)0x0),
       (char)pEVar11 != '\0')) goto code_?;
code_?:
    pTVar9 = (this->fields).ammoCount;
    if (pTVar9 == (Text *)0x0) goto code_?;
    pTVar12 = pTVar9->klass;
    pIVar13 = (pTVar12->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSVar14 = StringLiteral_u221E;
  }
  else {
code_?:
    cVar15 = (*(code *)(pickupItem->klass->vtable).get_HasUnlimitedAmmo.method)
                      (pickupItem,(pickupItem->klass->vtable).get_CanUnequip.methodPtr);
    if (cVar15 != '\0') goto code_?;
    pTVar9 = (this->fields).ammoCount;
    pSVar14 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
    if (pTVar9 == (Text *)0x0) goto code_?;
    pTVar12 = pTVar9->klass;
    pIVar13 = (pTVar12->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
  }
  (*(code *)(pTVar12->vtable).set_text.method)(pTVar9,pSVar14,pIVar13);
  if (0 < IStack_1.m_value) {
    pTVar9 = (this->fields).ammoCount;
    if (pTVar9 == (Text *)0x0) goto code_?;
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pTVar9,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      pTVar9 = (this->fields).ammoCount;
      if ((pTVar9 == (Text *)0x0) ||
         (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar9,(MethodInfo *)0x0), pGVar16 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar16,1,(MethodInfo *)0x0);
    }
  }
  if (fVar8 <= 0.0) {
    pIVar17 = (this->fields).chargeFill;
    (this->fields).isFillOn = 1;
    if (pIVar17 == (Image *)0x0) goto code_?;
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pIVar17,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      pIVar17 = (this->fields).chargeFill;
      if ((pIVar17 == (Image *)0x0) ||
         (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar17,(MethodInfo *)0x0), pGVar16 == (GameObject *)0x0)
         ) goto code_?;
      uVar4 = 0;
      uVar3 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar16,0,(MethodInfo *)0x0);
    }
  }
  if (0.0 < fVar8) {
    pIVar17 = (this->fields).chargeFill;
    if (pIVar17 == (Image *)0x0) goto code_?;
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pIVar17,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      pIVar17 = (this->fields).chargeFill;
      if ((pIVar17 == (Image *)0x0) ||
         (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar17,(MethodInfo *)0x0), pGVar16 == (GameObject *)0x0)
         ) goto code_?;
      uVar4 = 0;
      uVar3 = 1;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar16,1,(MethodInfo *)0x0);
    }
  }
  pIVar17 = (this->fields).crossHair;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar10 != 0) {
    pIVar17 = (this->fields).crossHair;
    if (pIVar17 == (Image *)0x0) goto code_?;
    (*(code *)(pIVar17->klass->vtable).set_color.method)
              (pIVar17,uVar3,uVar4,uVar5,uVar6,(pIVar17->klass->vtable).get_raycastTarget.methodPtr
              );
  }
  if (fVar8 <= _UNK_?) {
    return;
  }
  pIVar17 = (this->fields).chargeFill;
  if (pIVar17 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar17,fVar8,(MethodInfo *)0x0)
    ;
    pIVar17 = (this->fields).chargeFill;
    if (pIVar17 != (Image *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar17,(this->fields).isFillOn,(MethodInfo *)0x0);
      if (fVar8 < _UNK_?) {
        return;
      }
      fVar8 = (this->fields).timeSinceLastToggle;
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar18 = fVar18 + fVar8;
      pfVar19 = &(this->fields).toggleInterval;
      (this->fields).timeSinceLastToggle = fVar18;
      if (fVar18 < *pfVar19 || fVar18 == *pfVar19) {
        return;
      }
      (this->fields).timeSinceLastToggle = 0.0;
      (this->fields).isFillOn = (this->fields).isFillOn == 0;
      return;
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* CrossHair() */

void Assembly-CSharp.dll::CrossHair::CrossHair__ctor(CrossHair *this,MethodInfo *method)

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


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::CrossHair::CrossHair_set_Visible
               (CrossHair *this,bool value,MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

