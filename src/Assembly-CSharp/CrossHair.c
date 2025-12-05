
/* IEnumerator HitIndicatorAnimation() */

IEnumerator *
Assembly-CSharp.dll::CrossHair::CrossHair_HitIndicatorAnimation(CrossHair *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CrossHair___HitIndicatorAnimation_d__13);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__CrossHair___HitIndicatorAnimation_d__13);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void ShowHasHitEffect() */

void Assembly-CSharp.dll::CrossHair::CrossHair_ShowHasHitEffect(CrossHair *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).hitIndicatorImage;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 != (Image *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pIVar1->fields)._._._._._._._ != (void *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_00,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CrossHair___HitIndicatorAnimation_d__13);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        routine = (IEnumerator *)FUN_?(TypeInfo__CrossHair___HitIndicatorAnimation_d__13);
        bVar4 = iRam_? != 0;
        *(undefined4 *)&routine[1].klass = 0;
        routine[2].klass = (IEnumerator__Class *)this;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)(routine + 2) >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void UpdateAmmoCount(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateAmmoCount
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_____1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u221E);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pickupItem != (PickupItem *)0x0) {
    fVar1 = (float)(*(pickupItem->klass->vtable).get_Quantity.methodPtr)(pickupItem);
    if ((fVar1 == 0.0) &&
       (cVar2 = (*(pickupItem->klass->vtable).get_HasUnlimitedAmmo.methodPtr)(pickupItem),
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
        cVar2 = (*(pickupItem->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                          (pickupItem,(pickupItem->klass->vtable).get_HasUnlimitedAmmo.method);
        if (cVar2 == '\0') {
          cVar5 = (*(pickupItem->klass->vtable).get_HasPercentageAmmo.methodPtr)
                            (pickupItem,(pickupItem->klass->vtable).get_HasPercentageAmmo.method);
          VStackX_10.x = fVar1;
          if (cVar5 == '\0') {
            pOVar6 = (Object *)FUN_?(uRam_?,&VStackX_10);
            fVar1 = (float)(*(pickupItem->klass->vtable).__unknown_1.methodPtr)
                                     (pickupItem,(pickupItem->klass->vtable).__unknown_1.method);
            VStackX_10.x = fVar1;
            arg1 = (Object *)FUN_?(uRam_?,&VStackX_10);
            format = StringLiteral__0_____1_;
            PStack_7._arg0 = (Object *)0x0;
            PStack_7._arg1 = (Object *)0x0;
            PStack_7._arg2 = (Object *)0x0;
            PStack_7._args = (Object__Array *)0x0;
            mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                      (&PStack_7,pOVar6,arg1,(MethodInfo *)0x0);
            PStack_8._arg0 = PStack_7._arg0;
            PStack_8._arg1 = PStack_7._arg1;
            PStack_8._arg2 = PStack_7._arg2;
            PStack_8._args = PStack_7._args;
            mscorlib.dll::System::String::String_FormatHelper
                      ((IFormatProvider *)0x0,format,&PStack_8,(MethodInfo *)0x0);
          }
          else {
            pOVar6 = (Object *)FUN_?(uRam_?,&VStackX_10);
            mscorlib.dll::System::String::String_Format
                      (StringLiteral__0___,pOVar6,(MethodInfo *)0x0);
            cVar2 = '\0';
          }
        }
        pTVar3 = (this->fields).ammoCount;
        if (pTVar3 != (Text *)0x0) {
          (*(pTVar3->klass->vtable).set_text.methodPtr)();
          pTVar3 = (this->fields).ammoCount;
          iVar9 = 200;
          if (cVar2 == '\0') {
            iVar9 = 0x3c;
          }
          if ((pTVar3 != (Text *)0x0) &&
             (pFVar10 = (pTVar3->fields).m_FontData, pFVar10 != (FontData *)0x0)) {
            if ((pFVar10->fields).m_FontSize != iVar9) {
              (pFVar10->fields).m_FontSize = iVar9;
              (*(pTVar3->klass->vtable).SetVerticesDirty.methodPtr)
                        (pTVar3,(pTVar3->klass->vtable).SetVerticesDirty.method);
              (*(pTVar3->klass->vtable).SetLayoutDirty.methodPtr)(pTVar3);
            }
            pTVar3 = (this->fields).ammoCount;
            if ((pTVar3 != (Text *)0x0) &&
               (pFVar10 = (pTVar3->fields).m_FontData, pFVar10 != (FontData *)0x0)) {
              if ((pFVar10->fields).m_MaxSize != iVar9) {
                (pFVar10->fields).m_MaxSize = iVar9;
                (*(pTVar3->klass->vtable).SetVerticesDirty.methodPtr)
                          (pTVar3,(pTVar3->klass->vtable).SetVerticesDirty.method);
                (*(pTVar3->klass->vtable).SetLayoutDirty.methodPtr)(pTVar3);
              }
              fVar1 = _UNK_?;
              if (cVar2 != '\0') {
                fVar1 = _UNK_?;
              }
              pGVar4 = (this->fields).ammoRoot;
              if ((pGVar4 != (GameObject *)0x0) &&
                 (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
                 pTVar11 != (Transform *)0x0)) {
                this_00 = (Transform *)0x0;
                if (pTVar11->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                  this_00 = pTVar11;
                }
                if (this_00 != (Transform *)0x0) {
                  VStackX_10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                               RectTransform_get_sizeDelta
                                         ((RectTransform *)this_00,(MethodInfo *)0x0);
                  value.y = VStackX_10.y;
                  value.x = fVar1;
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_sizeDelta((RectTransform *)this_00,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateChargeState(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateChargeState
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (pickupItem != (PickupItem *)0x0) {
    fVar1 = (float)(*(pickupItem->klass->vtable).get_ChargeState.methodPtr)(pickupItem);
    pIVar2 = (this->fields).chargeFill;
    if (fVar1 <= 0.0) {
      (this->fields).isFillOn = 1;
      if ((pIVar2 != (Image *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar3 == (GameObject *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (pGVar3->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,0);
        return;
      }
    }
    else if ((pIVar2 != (Image *)0x0) &&
            (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0
            )) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      pIVar2 = (this->fields).chargeFill;
      if (pIVar2 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar2,fVar1,(MethodInfo *)0x0);
        pIVar2 = (this->fields).chargeFill;
        if (pIVar2 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar2,(this->fields).isFillOn,(MethodInfo *)0x0);
          if (_UNK_? <= fVar1) {
            fVar1 = (this->fields).timeSinceLastToggle;
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
            fVar7 = (float)(*pcRam_?)();
            fVar7 = fVar7 + fVar1;
            pfVar8 = &(this->fields).toggleInterval;
            (this->fields).timeSinceLastToggle = fVar7;
            if (*pfVar8 <= fVar7 && fVar7 != *pfVar8) {
              (this->fields).timeSinceLastToggle = 0.0;
              (this->fields).isFillOn = (this->fields).isFillOn == 0;
            }
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateCrossHair(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateCrossHair
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  CrossHair_UpdateAmmoCount(this,pickupItem,(MethodInfo *)0x0);
  if (pickupItem == (PickupItem *)0x0) goto code_?;
  fVar1 = (float)(*(pickupItem->klass->vtable).get_ChargeState.methodPtr)(pickupItem);
  pIVar2 = (this->fields).chargeFill;
  if (fVar1 <= 0.0) {
    (this->fields).isFillOn = 1;
    if ((pIVar2 == (Image *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
  }
  else {
    if ((pIVar2 == (Image *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    pIVar2 = (this->fields).chargeFill;
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar2,fVar1,(MethodInfo *)0x0);
    pIVar2 = (this->fields).chargeFill;
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar2,(this->fields).isFillOn,(MethodInfo *)0x0);
    if (_UNK_? <= fVar1) {
      fVar1 = (this->fields).timeSinceLastToggle;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar6 = (float)(*pcRam_?)();
      fVar6 = fVar6 + fVar1;
      pfVar7 = &(this->fields).toggleInterval;
      (this->fields).timeSinceLastToggle = fVar6;
      if (*pfVar7 <= fVar6 && fVar6 != *pfVar7) {
        (this->fields).timeSinceLastToggle = 0.0;
        (this->fields).isFillOn = (this->fields).isFillOn == 0;
      }
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields).crossHair;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar2 != (Image *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pIVar2->fields)._._._._._._._ != (void *)0x0) {
      puVar8 = (undefined4 *)
               (*(pickupItem->klass->vtable).get_CrossHairColor.methodPtr)
                         (&uStack_9,pickupItem,
                          (pickupItem->klass->vtable).get_CrossHairColor.method);
      pIVar2 = (this->fields).crossHair;
      uVar10 = *puVar8;
      uVar11 = puVar8[1];
      uVar12 = puVar8[2];
      if (pIVar2 == (Image *)0x0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar13 = (*(pIVar2->klass->vtable).get_color.methodPtr)
                        (&uStack_9,pIVar2,(pIVar2->klass->vtable).get_color.method);
      uStack_14 = *(undefined4 *)(lVar13 + 0xc);
      uStack_9 = uVar10;
      uStack_15 = uVar11;
      uStack_16 = uVar12;
      (*(pIVar2->klass->vtable).set_color.methodPtr)
                (pIVar2,&uStack_9,(pIVar2->klass->vtable).set_color.method);
    }
  }
  return;
}


/* Void UpdateCrosshairColor(PickupItem) */

void Assembly-CSharp.dll::CrossHair::CrossHair_UpdateCrosshairColor
               (CrossHair *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).crossHair;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 != (Image *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pIVar1->fields)._._._._._._._ != (void *)0x0) {
      if (pickupItem != (PickupItem *)0x0) {
        puVar2 = (undefined4 *)
                 (*(pickupItem->klass->vtable).get_CrossHairColor.methodPtr)
                           (&uStack_3,pickupItem,
                            (pickupItem->klass->vtable).get_CrossHairColor.method);
        pIVar1 = (this->fields).crossHair;
        uStack_3 = *puVar2;
        uStack_4 = puVar2[1];
        uStack_5 = puVar2[2];
        if (pIVar1 != (Image *)0x0) {
          lVar6 = (*(pIVar1->klass->vtable).get_color.methodPtr)
                            (&uStack_3,pIVar1,(pIVar1->klass->vtable).get_color.method);
          uStack_7 = *(undefined4 *)(lVar6 + 0xc);
          (*(pIVar1->klass->vtable).set_color.methodPtr)
                    (pIVar1,&uStack_3,(pIVar1->klass->vtable).set_color.method);
          return;
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}


/* CrossHair() */

void Assembly-CSharp.dll::CrossHair::CrossHair__ctor(CrossHair *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).toggleInterval = 0.1;
  (this->fields).isFillOn = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::CrossHair::CrossHair_get_Visible(CrossHair *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*pcRam_?)(pvVar3);
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
                (pGVar1,value,(MethodInfo *)0x0);
      pIVar2 = (this->fields).hitIndicatorImage;
      if (pIVar2 != (Image *)0x0) {
        uStack_3 = 0;
        uStack_4 = 0;
        (*(pIVar2->klass->vtable).set_color.methodPtr)
                  (pIVar2,&uStack_3,(pIVar2->klass->vtable).set_color.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

