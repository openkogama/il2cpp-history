
/* Void Awake() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::AdOrSubscriptionButton::
     AdOrSubscriptionButton_Awake(AdOrSubscriptionButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this,
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                              );
  bVar2 = iRam_? != 0;
  (this->fields).buttonBackgroundImage = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).buttonBackgroundImage >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar7 == (MVGameControllerBase *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar2 = iRam_? != 0;
  (this->fields).subCooldowns = (pMVar7->fields).subscriberCooldownsManager;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).subCooldowns >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::AdOrSubscriptionButton::
     AdOrSubscriptionButton_OnClick(AdOrSubscriptionButton *this,MethodInfo *method)

{
  if ((this->fields).isSubscriber == 0) {
    pUVar1 = (this->fields).onAdClick;
  }
  else {
    if ((this->fields).isClickReady != 0) {
      pSVar2 = (this->fields).subCooldowns;
      if (pSVar2 != (SubscriberCooldownsManager *)0x0) {
        pSVar3 = (pSVar2->fields).cooldowns;
        uVar4 = (this->fields).cooldownType;
        if (pSVar3 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          fVar7 = (float)(*pcRam_?)();
          if ((uint)pSVar3->max_length <= uVar4) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pSVar3->vector[(int)uVar4].LastUseTime = fVar7;
          pUVar1 = (this->fields).onSubscriberReadyClick;
          if (pUVar1 == (UnityEvent *)0x0) {
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
                    (pUVar1,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar1 = (this->fields).onSubscriberInCooldownClick;
  }
  if (pUVar1 == (UnityEvent *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar8 = UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::
           UnityEventBase_PrepareInvoke((UnityEventBase *)pUVar1,(MethodInfo *)0x0);
  uVar4 = 0;
  if (pLVar8 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar9 = 0x20;
code_?:
  do {
    if ((pLVar8->fields)._size <= (int)uVar4) {
      return;
    }
    if ((uint)(pLVar8->fields)._size <= uVar4) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pBVar10 = (pLVar8->fields)._items;
    if (pBVar10 == (BaseInvokableCall__Array *)0x0) goto code_?;
    if ((uint)pBVar10->max_length <= uVar4) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar11 = *(InvokableCall **)((longlong)pBVar10->vector + lVar9 + -0x20);
    if (pIVar11 != (InvokableCall *)0x0) {
      bVar12 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
      if ((bVar12 <= (pIVar11->klass->_1).naturalAligment) &&
         ((pIVar11->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] ==
          (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  (pIVar11,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        lVar9 = lVar9 + 8;
        goto code_?;
      }
    }
    pIVar11 = (InvokableCall *)FUN_?(pLVar8,uVar4);
    if (pIVar11 == (InvokableCall *)0x0) {
code_?:
      plVar13 = (longlong *)FUN_?(pLVar8,uVar4);
      if ((pUVar1->fields).m_InvokeArray == (Object__Array *)0x0) {
        pOVar14 = (Object__Array *)FUN_?(TypeInfo__System__Object,0);
        (pUVar1->fields).m_InvokeArray = pOVar14;
        func_?(&(pUVar1->fields).m_InvokeArray);
      }
      if (plVar13 == (longlong *)0x0) goto code_?;
      (**(code **)(*plVar13 + 0x178))
                (plVar13,(pUVar1->fields).m_InvokeArray,*(undefined8 *)(*plVar13 + 0x180));
      uVar4 = uVar4 + 1;
      lVar9 = lVar9 + 8;
    }
    else {
      bVar12 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
      if (((pIVar11->klass->_1).naturalAligment < bVar12) ||
         ((pIVar11->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                (pIVar11,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      lVar9 = lVar9 + 8;
    }
  } while( true );
}


/* Void Update() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::AdOrSubscriptionButton::
     AdOrSubscriptionButton_Update(AdOrSubscriptionButton *this,MethodInfo *method)

{
  bVar1 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
  pIVar2 = (this->fields).iconImage;
  (this->fields).isSubscriber = bVar1;
  if (pIVar2 == (Image *)0x0) goto code_?;
  if (bVar1 == 0) {
    pMVar3 = (MethodInfo *)(this->fields).adSprite;
  }
  else {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar2,(this->fields).subscriberSprite,(MethodInfo *)0x0);
    pSVar4 = (this->fields).subCooldowns;
    if (pSVar4 == (SubscriberCooldownsManager *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    key = (this->fields).cooldownType;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    fVar7 = (float)(*pcRam_?)();
    pSVar8 = (pSVar4->fields).cooldowns;
    if (pSVar8 == (SubscriberCooldownsManager_Cooldown__Array *)0x0) goto code_?;
    if ((Int32Enum__Enum)pSVar8->max_length <= key) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar9 = pSVar8->vector[(int)key].LastUseTime;
    if (*(int *)&(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    }
    this_00 = TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
              cooldownTimes;
    if (this_00 == (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)0x0)
    goto code_?;
    fVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                       );
    pIVar2 = (this->fields).iconImage;
    if (0.0 < fVar10 - (fVar7 - fVar9)) {
      (this->fields).isClickReady = 0;
      if ((pIVar2 == (Image *)0x0) ||
         (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar2,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar11,0,(MethodInfo *)0x0);
      pIVar2 = (this->fields).buttonBackgroundImage;
      if (pIVar2 == (Image *)0x0) goto code_?;
      pMVar3 = (MethodInfo *)(this->fields).buttonBackgroundInactiveSprite;
    }
    else {
      (this->fields).isClickReady = 1;
      if ((pIVar2 == (Image *)0x0) ||
         (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar2,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar11,1,(MethodInfo *)0x0);
      pIVar2 = (this->fields).buttonBackgroundImage;
      if (pIVar2 == (Image *)0x0) goto code_?;
      pMVar3 = (MethodInfo *)(this->fields).buttonBackgroundActiveSprite;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,pMVar3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar12 = (pIVar2->fields).m_Sprite;
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
  if (pSVar12 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar12->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar13 = (MethodInfo *)(pIVar2->fields).m_Sprite;
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
      if (pMVar3 == (MethodInfo *)0x0 && pMVar13 == (MethodInfo *)0x0) {
        return;
      }
      if (pMVar3 == (MethodInfo *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pMVar13 == (MethodInfo *)0x0) goto code_?;
        bVar14 = (((Sprite__Fields *)&pMVar13->invoker_method)->_).m_CachedPtr == (void *)0x0;
      }
      else if (pMVar13 == (MethodInfo *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar14 = pMVar3->invoker_method == (InvokerMethod)0x0;
      }
      else {
        bVar14 = pMVar13 == pMVar3;
      }
      pTVar15 = (Texture2D *)0x0;
      if (bVar14) {
        return;
      }
      pSVar12 = (pIVar2->fields).m_Sprite;
      if (pSVar12 == (Sprite *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar16 = (pSVar12->fields)._.m_CachedPtr;
      if (pvVar16 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar12,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar16);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar13 = pMVar3;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pMVar3,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        VVar17 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar13);
        fStack_18 = VVar17.x;
        fStack_19 = VVar17.y;
      }
      else {
        if (pMVar3 == (MethodInfo *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar20 = pMVar3->invoker_method;
        if (pIVar20 == (InvokerMethod)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar3,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pIVar20);
        fStack_18 = 0.0;
        fStack_19 = 0.0;
      }
      if ((fStack_18 == 0.0) && (fStack_19 == 0.0)) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      (pIVar2->fields)._._.m_SkipLayoutUpdate = bVar1;
      pSVar12 = (pIVar2->fields).m_Sprite;
      if (pSVar12 == (Sprite *)0x0) goto code_?;
      pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (pSVar12,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pMVar3,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (pMVar3 == (MethodInfo *)0x0) goto code_?;
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            ((Sprite *)pMVar3,(MethodInfo *)0x0);
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
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar15 != (Texture2D *)0x0 || pTVar21 != (Texture2D *)0x0) {
        if (pTVar15 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar21 == (Texture2D *)0x0) goto code_?;
          bVar14 = (pTVar21->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar21 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar14 = (pTVar15->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar14 = pTVar21 == pTVar15;
        }
        if (!bVar14) {
          bVar1 = 0;
          goto code_?;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__UI__Image);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__UI__Image);
      }
      bVar1 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_CheckSecondaryTexturesChanged_1
                        (pIVar2,(Sprite *)pMVar3,
                         &TypeInfo__UnityEngine__UI__Image->static_fields->
                          s_TempNewSecondaryTextures,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_ClearArray
                (&TypeInfo__UnityEngine__UI__Image->static_fields->s_TempNewSecondaryTextures,
                 (MethodInfo *)0x0);
      bVar1 = bVar1 ^ 1;
code_?:
      bVar14 = iRam_? != 0;
      (pIVar2->fields)._._.m_SkipMaterialUpdate = bVar1;
      (pIVar2->fields).m_Sprite = (Sprite *)pMVar3;
      if (bVar14) {
        uVar22 = (uint)((ulonglong)&(pIVar2->fields).m_Sprite >> 0xc);
        uVar23 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
        do {
          uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
          puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar24 == *puVar25;
          if (bVar14) {
            *puVar25 = uVar24 | 1L << (uVar22 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::
      Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(pIVar2,(MethodInfo *)0x0);
      (*(pIVar2->klass->vtable).SetAllDirty.methodPtr)(pIVar2);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(pIVar2,(MethodInfo *)0x0);
      return;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar3 == (MethodInfo *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pMVar3->invoker_method == (InvokerMethod)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = (MethodInfo *)pMVar3->invoker_method;
  if (pMVar13 == (MethodInfo *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar3,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)();
  VVar17 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar13);
  fVar7 = 0.0 - VVar17.x;
  fVar9 = 0.0 - VVar17.y;
  (pIVar2->fields)._._.m_SkipLayoutUpdate = fVar9 * fVar9 + fVar7 * fVar7 < _UNK_?;
  pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                      ((Sprite *)pMVar3,(MethodInfo *)0x0);
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
  if (pTVar15 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar15->fields)._._.m_CachedPtr != (void *)0x0) {
      bVar14 = false;
      goto code_?;
    }
  }
  iVar26 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_GetSecondaryTextureCount
                     ((Sprite *)pMVar3,(MethodInfo *)0x0);
  bVar14 = iVar26 == 0;
code_?:
  bVar27 = iRam_? != 0;
  (pIVar2->fields)._._.m_SkipMaterialUpdate = bVar14;
  (pIVar2->fields).m_Sprite = (Sprite *)pMVar3;
  if (bVar27) {
    uVar22 = (uint)((ulonglong)&(pIVar2->fields).m_Sprite >> 0xc);
    uVar23 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
    do {
      uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
      puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
      LOCK();
      bVar14 = uVar24 == *puVar25;
      if (bVar14) {
        *puVar25 = uVar24 | 1L << (uVar22 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  UnityEngine.UI.dll::UnityEngine::UI::Image::
  Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(pIVar2,(MethodInfo *)0x0);
  (*(pIVar2->klass->vtable).SetAllDirty.methodPtr)(pIVar2);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__Image);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar12 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
                      (pIVar2,(MethodInfo *)0x0);
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
  if (pSVar12 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar12->fields)._.m_CachedPtr != (void *)0x0) {
      pSVar12 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
                          (pIVar2,(MethodInfo *)0x0);
      if (pSVar12 != (Sprite *)0x0) {
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            (pSVar12,(MethodInfo *)0x0);
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
        if (pTVar15 != (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pTVar15->fields)._._.m_CachedPtr != (void *)0x0) {
            return;
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<UnityEngine::U2D::SpriteAtlas>);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__UnityEngine__UI__Image__RebuildImage_UnityEngine__U2D__SpriteAtlas_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__UI__Image);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__Add_UnityEngine__UI__Image_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (TypeInfo__UnityEngine__UI__Image->static_fields->s_Initialized == 0) {
          this_02 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<UnityEngine::U2D::SpriteAtlas>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_02,(Object *)0x0,
                     MethodInfo__UnityEngine__UI__Image__RebuildImage_UnityEngine__U2D__SpriteAtlas_
                     ,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::U2D::SpriteAtlasManager::
          SpriteAtlasManager_add_atlasRegistered
                    ((Action_1_UnityEngine_U2D_SpriteAtlas_ *)this_02,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__UI__Image);
          }
          TypeInfo__UnityEngine__UI__Image->static_fields->s_Initialized = 1;
        }
        if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar3 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__Add_UnityEngine__UI__Image_
        ;
        this_01 = TypeInfo__UnityEngine__UI__Image->static_fields->m_TrackedTexturelessImages;
        if (this_01 != (List_1_UnityEngine_UI_Image_ *)0x0) {
          piVar28 = &(this_01->fields)._version;
          *piVar28 = *piVar28 + 1;
          pIVar29 = (this_01->fields)._items;
          if (pIVar29 != (Image__Array *)0x0) {
            uVar22 = (this_01->fields)._size;
            if (uVar22 < (uint)pIVar29->max_length) {
              (this_01->fields)._size = uVar22 + 1;
              FUN_?(pIVar29,(longlong)(int)uVar22,pIVar2);
              (pIVar2->fields).m_Tracked = 1;
              return;
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_01,(Object *)pIVar2,
                       pMVar3->klass->rgctx_data[0xe].method);
            (pIVar2->fields).m_Tracked = 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

