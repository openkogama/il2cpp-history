
/* IEnumerator HitIndicatorAnimation() */

IEnumerator *
Assembly-CSharp.dll::CrossHair::CrossHair_HitIndicatorAnimation(CrossHair *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CrossHair___HitIndicatorAnimation_d__13);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CrossHair___HitIndicatorAnimation_d__13;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void ShowHasHitEffect() */

void Assembly-CSharp.dll::CrossHair::CrossHair_ShowHasHitEffect(CrossHair *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).hitIndicatorImage;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__CrossHair___HitIndicatorAnimation_d__13;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void UpdateAmmoCount(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateAmmoCount
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&StringLiteral__0_____1_);
    func_?(&StringLiteral_u221E);
    func_?(&StringLiteral__0___);
    cRam_? = '\x01';
  }
  if (pickupItem != (PickupItem *)0x0) {
    fVar1 = (float)(*(code *)(pickupItem->klass->vtable).get_Quantity.method)
                             (pickupItem,(pickupItem->klass->vtable).get_CrossHairColor.methodPtr);
    if ((fVar1 == 0.0) &&
       (cVar2 = (*(code *)(pickupItem->klass->vtable).get_HasUnlimitedAmmo.method)
                          (pickupItem,(pickupItem->klass->vtable).get_HasPercentageAmmo.methodPtr),
       cVar2 == '\0')) {
      pTVar3 = (this->fields).ammoCount;
      if ((pTVar3 != (Text *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pTVar3 = (this->fields).ammoCount;
      if ((pTVar3 != (Text *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        cVar2 = (*(code *)(pickupItem->klass->vtable).get_HasUnlimitedAmmo.method)
                          (pickupItem,(pickupItem->klass->vtable).get_HasPercentageAmmo.methodPtr);
        pSVar5 = StringLiteral_u221E;
        if (cVar2 == '\0') {
          cVar2 = (*(code *)(pickupItem->klass->vtable).get_HasPercentageAmmo.method)
                            (pickupItem,(pickupItem->klass->vtable).get_CanUnequip.methodPtr);
          if (cVar2 == '\0') {
            fStack_6 = fVar1;
            pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&fStack_6);
            fStack_8 = (float)(*(code *)(pickupItem->klass->vtable).__unknown_1.method)
                                        (pickupItem,
                                         (pickupItem->klass->vtable).get_Quantity.methodPtr);
            arg1 = (Object *)func_?(TypeInfo__System__Int32,&fStack_8);
            pSVar5 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral__0_____1_,pOVar7,arg1,(MethodInfo *)0x0);
            pickupItem._3_1_ = '\0';
            cVar2 = pickupItem._3_1_;
          }
          else {
            afStack_9[0] = fVar1;
            pOVar7 = (Object *)func_?(TypeInfo__System__Int32,afStack_9);
            pSVar5 = mscorlib.dll::System::String::String_Format
                               (StringLiteral__0___,pOVar7,(MethodInfo *)0x0);
            pickupItem._3_1_ = '\0';
            cVar2 = pickupItem._3_1_;
          }
        }
        pickupItem._3_1_ = cVar2;
        pTVar3 = (this->fields).ammoCount;
        if (pTVar3 != (Text *)0x0) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)
                    (pTVar3,pSVar5,
                     (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          value = 200;
          if (pickupItem._3_1_ == '\0') {
            value = 0x3c;
          }
          pTVar3 = (this->fields).ammoCount;
          if (pTVar3 != (Text *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontSize
                      (pTVar3,value,(MethodInfo *)0x0);
            pTVar3 = (this->fields).ammoCount;
            if (pTVar3 != (Text *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_resizeTextMaxSize
                        (pTVar3,value,(MethodInfo *)0x0);
              fVar1 = _UNK_?;
              if (pickupItem._3_1_ != '\0') {
                fVar1 = _UNK_?;
              }
              pGVar4 = (this->fields).ammoRoot;
              if ((pGVar4 != (GameObject *)0x0) &&
                 (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
                 pTVar10 != (Transform *)0x0)) {
                this_00 = (Transform *)0x0;
                if (pTVar10->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                  this_00 = pTVar10;
                }
                if (this_00 != (Transform *)0x0) {
                  VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_get_sizeDelta((RectTransform *)this_00,(MethodInfo *)0x0);
                  afStack_9[0] = VVar11.y;
                  VVar11.y = afStack_9[0];
                  VVar11.x = fVar1;
                  fStack_8 = afStack_9[0];
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_sizeDelta((RectTransform *)this_00,VVar11,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateChargeState(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateChargeState
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (pickupItem != (PickupItem *)0x0) {
    fVar1 = (float10)(*(code *)(pickupItem->klass->vtable).get_ChargeState.method)
                               (pickupItem,(pickupItem->klass->vtable).get_FirstPerson.methodPtr);
    pIVar2 = (this->fields).chargeFill;
    if ((float)fVar1 <= 0.0) {
      (this->fields).isFillOn = 1;
      if (pIVar2 != (Image *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar2,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          if (pcRam_? == (code *)0x0) {
            pcRam_? = (code *)func_?(&UNK_?,unaff_EBP);
          }
          (*pcRam_?)(pGVar3,0);
          return;
        }
      }
    }
    else if (pIVar2 != (Image *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar2,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        pIVar2 = (this->fields).chargeFill;
        if (pIVar2 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                    (pIVar2,(float)fVar1,(MethodInfo *)0x0);
          pIVar2 = (this->fields).chargeFill;
          if (pIVar2 != (Image *)0x0) {
            value = (this->fields).isFillOn;
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar2,value,(MethodInfo *)0x0);
            if (_UNK_? <= (float)(uint)value) {
              fVar4 = (this->fields).timeSinceLastToggle;
              fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                ((MethodInfo *)0x0);
              fVar5 = fVar5 + fVar4;
              pfVar6 = &(this->fields).toggleInterval;
              (this->fields).timeSinceLastToggle = fVar5;
              if (*pfVar6 <= fVar5 && fVar5 != *pfVar6) {
                (this->fields).timeSinceLastToggle = 0.0;
                (this->fields).isFillOn = (this->fields).isFillOn == 0;
              }
            }
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateCrossHair(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateCrossHair
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  CrossHair_UpdateAmmoCount(this,pickupItem,(MethodInfo *)0x0);
  if (pickupItem == (PickupItem *)0x0) goto code_?;
  fVar1 = (float10)(*(code *)(pickupItem->klass->vtable).get_ChargeState.method)
                             (pickupItem,(pickupItem->klass->vtable).get_FirstPerson.methodPtr);
  pIVar2 = (this->fields).chargeFill;
  fVar3 = (float)fVar1;
  if (fVar3 <= 0.0) {
    (this->fields).isFillOn = 1;
    if (pIVar2 == (Image *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar2,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
  }
  else {
    if (pIVar2 == (Image *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar2,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,1,(MethodInfo *)0x0);
    pIVar2 = (this->fields).chargeFill;
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar2,fVar3,(MethodInfo *)0x0)
    ;
    pIVar2 = (this->fields).chargeFill;
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar2,(this->fields).isFillOn,(MethodInfo *)0x0);
    if (_UNK_? <= fVar3) {
      fVar3 = (this->fields).timeSinceLastToggle;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar5 = fVar5 + fVar3;
      pfVar6 = &(this->fields).toggleInterval;
      (this->fields).timeSinceLastToggle = fVar5;
      if (*pfVar6 <= fVar5 && fVar5 != *pfVar6) {
        (this->fields).timeSinceLastToggle = 0.0;
        (this->fields).isFillOn = (this->fields).isFillOn == 0;
      }
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields).crossHair;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pIVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    puVar8 = (undefined4 *)(*(code *)(pickupItem->klass->vtable).get_CrossHairColor.method)();
    pIVar2 = (this->fields).crossHair;
    uVar9 = *puVar8;
    uVar10 = puVar8[1];
    uVar11 = puVar8[2];
    if (pIVar2 == (Image *)0x0) {
code_?:
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar13 = (*(code *)(pIVar2->klass->vtable).get_color.method)
                      (&stack0xffffffec,pIVar2,(pIVar2->klass->vtable).set_color.methodPtr);
    (*(code *)(pIVar2->klass->vtable).set_color.method)
              (pIVar2,uVar9,uVar10,uVar11,*(undefined4 *)(iVar13 + 0xc),
               (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
  }
  return;
}


/* Void UpdateCrosshairColor(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateCrosshairColor
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).crossHair;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  if (pickupItem != (PickupItem *)0x0) {
    pIStack_3 = (pickupItem->klass->vtable).get_ChargeState.methodPtr;
    iVar4 = (*(code *)(pickupItem->klass->vtable).get_CrossHairColor.method)(&pIStack_3,pickupItem)
    ;
    pIVar1 = (this->fields).crossHair;
    uStack_5 = *(undefined4 *)(iVar4 + 4);
    uStack_6 = *(undefined4 *)(iVar4 + 8);
    uStack_7 = *(undefined4 *)(iVar4 + 0xc);
    if (pIVar1 != (Image *)0x0) {
      pIStack_3 = (pIVar1->klass->vtable).set_color.methodPtr;
      iVar4 = (*(code *)(pIVar1->klass->vtable).get_color.method)(&pIStack_8,pIVar1);
      pIVar9 = pIStack_3;
      uStack_10 = *(undefined4 *)(iVar4 + 0xc);
      pIStack_8 = pIStack_3;
      uStack_11 = uStack_5;
      uStack_12 = uStack_6;
      pIStack_3 = (pIVar1->klass->vtable).get_raycastTarget.methodPtr;
      (*(code *)(pIVar1->klass->vtable).set_color.method)
                (pIVar1,pIVar9,uStack_5,uStack_6,uStack_10);
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* CrossHair() */

void Assembly-CSharp.dll::CrossHair::CrossHair__ctor(CrossHair *this,MethodInfo *method)

{
  (this->fields).toggleInterval = 0.1;
  (this->fields).isFillOn = 1;
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

bool Assembly-CSharp.dll::CrossHair::CrossHair_get_Visible(CrossHair *this,MethodInfo *method)

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

void Assembly-CSharp.dll::CrossHair::CrossHair_set_Visible
               (CrossHair *this,bool value,MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,value,(MethodInfo *)0x0);
    pGVar1 = (this->fields).ammoRoot;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pIVar2 = (this->fields).hitIndicatorImage;
      if (pIVar2 != (Image *)0x0) {
        pIVar3 = pIVar2->klass;
        pIStack4 = (pIVar3->vtable).get_raycastTarget.methodPtr;
        uStack5 = 0;
        (*(code *)(pIVar3->vtable).set_color.method)();
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

