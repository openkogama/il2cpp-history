
/* Void ShowHasHitEffect() */

void Assembly-CSharp.dll::CrossHair::CrossHair_ShowHasHitEffect(CrossHair *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).crossHairHitEnemyIndicator;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  pIStack_3 = (Il2CppMethodPointer)0x0;
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
            fVar12 = (float10)func_?(pKVar10->vector + iVar11 + -1,0);
            fStack_13 = (float)fVar12;
            if (fVar1 < fStack_13) {
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
  func_?(0);
code_?:
  uVar14 = func_?(0);
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateCrossHair(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateCrossHair
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  if (pickupItem == (PickupItem *)0x0) goto code_?;
  pIVar2 = (pickupItem->klass->vtable).get_CrossHairColor.methodPtr;
  counterType = pickupItem;
  iStack_1 = (*(code *)(pickupItem->klass->vtable).get_Quantity.method)();
  puVar3 = (undefined4 *)
           (*(code *)(pickupItem->klass->vtable).get_CrossHairColor.method)
                     (&stack0xffffffe8,pickupItem,
                      (pickupItem->klass->vtable).get_ChargeState.methodPtr);
  uVar4 = *puVar3;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  fVar8 = (float10)(*(code *)(pickupItem->klass->vtable).get_ChargeState.method)
                              (pickupItem,
                               (pickupItem->klass->vtable).get_ActivateGunModeOnEquip.methodPtr);
  fVar9 = (float)fVar8;
  if (iStack_1 == 0) {
    pTVar10 = (this->fields).ammoCount;
    if (pTVar10 == (Text *)0x0) goto code_?;
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pTVar10,(MethodInfo *)0x0);
    if ((bVar11 == 0) ||
       (WinningConditionBase::WinningConditionBase_UpdateStats
                  ((WinningConditionBase *)pickupItem,0,(GameStatCounterType__Enum)counterType,
                   (int32_t)pIVar2,unaff_EDI), extraout_AL != '\0')) goto code_?;
code_?:
    pTVar10 = (this->fields).ammoCount;
    if (pTVar10 == (Text *)0x0) goto code_?;
    pTVar12 = pTVar10->klass;
    pIVar2 = (pTVar12->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSVar13 = StringLiteral_u221E;
  }
  else {
code_?:
    cVar14 = (*(code *)(pickupItem->klass->vtable).get_HasUnlimitedAmmo.method)
                      (pickupItem,(pickupItem->klass->vtable).get_CanUnequip.methodPtr);
    if (cVar14 != '\0') goto code_?;
    pTVar10 = (this->fields).ammoCount;
    pSVar13 = (String *)func_?(&iStack_1,0);
    if (pTVar10 == (Text *)0x0) goto code_?;
    pTVar12 = pTVar10->klass;
    pIVar2 = (pTVar12->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
  }
  ppTVar15 = &(this->fields).ammoCount;
  (*(code *)(pTVar12->vtable).set_text.method)(pTVar10,pSVar13,pIVar2);
  if (0 < iStack_1) {
    pTVar10 = *ppTVar15;
    if (pTVar10 == (Text *)0x0) goto code_?;
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pTVar10,(MethodInfo *)0x0);
    if (bVar11 == 0) {
      pTVar10 = *ppTVar15;
      if ((pTVar10 == (Text *)0x0) ||
         (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pTVar10,(MethodInfo *)0x0),
         pGVar16 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar16,1,(MethodInfo *)0x0);
    }
  }
  if (fVar9 <= 0.0) {
    pIVar17 = (this->fields).chargeFill;
    (this->fields).isFillOn = 1;
    if (pIVar17 == (Image *)0x0) goto code_?;
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pIVar17,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      pIVar17 = (this->fields).chargeFill;
      if ((pIVar17 == (Image *)0x0) ||
         (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pIVar17,(MethodInfo *)0x0),
         pGVar16 == (GameObject *)0x0)) goto code_?;
      uVar4 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar16,0,(MethodInfo *)0x0);
    }
  }
  if (0.0 < fVar9) {
    pIVar17 = (this->fields).chargeFill;
    if (pIVar17 == (Image *)0x0) goto code_?;
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pIVar17,(MethodInfo *)0x0);
    if (bVar11 == 0) {
      pIVar17 = (this->fields).chargeFill;
      if ((pIVar17 == (Image *)0x0) ||
         (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pIVar17,(MethodInfo *)0x0),
         pGVar16 == (GameObject *)0x0)) goto code_?;
      uVar4 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar16,1,(MethodInfo *)0x0);
    }
  }
  pIVar17 = (this->fields).crossHair;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar11 != 0) {
    pIVar17 = (this->fields).crossHair;
    if (pIVar17 == (Image *)0x0) goto code_?;
    (*(code *)(pIVar17->klass->vtable).set_color.method)
              (pIVar17,uVar4,uVar5,uVar6,uVar7,(pIVar17->klass->vtable).get_raycastTarget.methodPtr)
    ;
  }
  if (fVar9 <= _UNK_?) {
    return;
  }
  pIVar17 = (this->fields).chargeFill;
  if (pIVar17 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar17,fVar9,(MethodInfo *)0x0)
    ;
    pIVar17 = (this->fields).chargeFill;
    if (pIVar17 != (Image *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar17,(this->fields).isFillOn,(MethodInfo *)0x0);
      if (fVar9 < _UNK_?) {
        return;
      }
      fVar9 = (this->fields).timeSinceLastToggle;
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar18 = fVar18 + fVar9;
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::CrossHair::CrossHair_get_Visible(CrossHair *this,MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 == (GameObject *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar4 = func_?(&UNK_?,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  bVar3 = (*pcRam_?)();
  return bVar3;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::CrossHair::CrossHair_set_Visible
               (CrossHair *this,bool value,MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 == (GameObject *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}

