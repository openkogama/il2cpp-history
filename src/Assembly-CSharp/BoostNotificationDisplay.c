
/* Void OnBoostCountChanged() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_OnBoostCountChanged
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar3 != (MVLocalPlayer *)0x0 &&
      (pBVar4 = (pMVar3->fields).boostController, pBVar4 != (BoostController *)0x0)))) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)(pBVar4->fields).activeBoosts;
    if (((pDVar5 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) &&
        (pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                             (pDVar5,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                             ),
        pDVar6 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) &&
       (pDVar5 = (pDVar6->fields)._dictionary,
       pDVar5 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      value = (pDVar5->fields)._count - (pDVar5->fields)._freeCount;
      pTVar7 = (this->fields).boostsActive;
      if (pTVar7 != (Text *)0x0) {
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar7,(MethodInfo *)0x0);
        if (value < 1) {
          if (pGVar8 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,0,(MethodInfo *)0x0);
            pIVar9 = (this->fields).backgroundColor;
            if ((pIVar9 != (Image *)0x0) &&
               (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pIVar9,(MethodInfo *)0x0),
               pGVar8 != (GameObject *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,0,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar8 == (GameObject *)0x0) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pvVar11 = (pGVar8->fields)._.m_CachedPtr;
              if (pvVar11 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar8,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar11,0);
              return;
            }
          }
        }
        else if (pGVar8 != (GameObject *)0x0) {
          bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar8,(MethodInfo *)0x0);
          if (bVar13 == 0) {
            pTVar7 = (this->fields).boostsActive;
            if ((pTVar7 == (Text *)0x0) ||
               (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pTVar7,(MethodInfo *)0x0),
               pGVar8 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,1,(MethodInfo *)0x0);
          }
          pIVar9 = (this->fields).backgroundColor;
          if ((pIVar9 != (Image *)0x0) &&
             (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pIVar9,(MethodInfo *)0x0),
             pGVar8 != (GameObject *)0x0)) {
            bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar8,(MethodInfo *)0x0);
            if (bVar13 == 0) {
              pIVar9 = (this->fields).backgroundColor;
              if ((pIVar9 == (Image *)0x0) ||
                 (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pIVar9,(MethodInfo *)0x0),
                 pGVar8 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar8,1,(MethodInfo *)0x0);
            }
            pTVar7 = (this->fields).boostsActive;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                 field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            aRStack_14[0]._pointer._value = (void *)0x0;
            aRStack_14[0]._length = 0;
            aRStack_14[0]._12_4_ = 0;
            pSVar15 = mscorlib.dll::System::Number::Number_FormatInt32
                                (value,aRStack_14,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            if (pTVar7 != (Text *)0x0) {
              (*(pTVar7->klass->vtable).set_text.methodPtr)
                        (pTVar7,pSVar15,(pTVar7->klass->vtable).set_text.method);
              pIVar9 = (this->fields).backgroundColor;
              if (pIVar9 != (Image *)0x0) {
                aRStack_14[0]._pointer._value = *(void **)&(this->fields).boostActiveColor;
                aRStack_14[0]._length = (int32_t)(this->fields).boostActiveColor.b;
                aRStack_14[0]._12_4_ = (this->fields).boostActiveColor.a;
                (*(pIVar9->klass->vtable).set_color.methodPtr)
                          (pIVar9,aRStack_14,(pIVar9->klass->vtable).set_color.method);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_OnDestroy
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
        pMVar4 == (MVLocalPlayer *)0x0 ||
        (pBVar5 = (pMVar4->fields).boostController, pBVar5 == (BoostController *)0x0)))) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pAVar7 = (pBVar5->fields).BoostCountChanged;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,
               (MethodInfo *)0x0);
    pAVar7 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar7,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar7 == (Action *)0x0) {
      (pBVar5->fields).BoostCountChanged = (Action *)0x0;
    }
    else {
      pAVar8 = (Action *)0x0;
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar7;
      }
      if (pAVar8 == (Action *)0x0) {
        FUN_?(pAVar7,TypeInfo__System__Action);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pBVar5->fields).BoostCountChanged = pAVar8;
      pAVar8 = (Action *)0x0;
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar7;
      }
      if (pAVar8 == (Action *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&pBVar5->fields >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_Start
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) ||
     ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
      pMVar4 == (MVLocalPlayer *)0x0 ||
      (pBVar5 = (pMVar4->fields).boostController, pBVar5 == (BoostController *)0x0)))) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pAVar7 = (pBVar5->fields).BoostCountChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,
             (MethodInfo *)0x0);
  pAVar7 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar7,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar7 == (Action *)0x0) {
    (pBVar5->fields).BoostCountChanged = (Action *)0x0;
  }
  else {
    pAVar8 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar7;
    }
    if (pAVar8 == (Action *)0x0) {
      FUN_?(pAVar7,TypeInfo__System__Action);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pBVar5->fields).BoostCountChanged = pAVar8;
    pAVar8 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar7;
    }
    if (pAVar8 == (Action *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar9 = (uint)((ulonglong)&pBVar5->fields >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar10;
      LOCK();
      uVar12 = *puVar10;
      if (uVar11 == uVar12) {
        *puVar10 = uVar11 | 1L << (ulonglong)(uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar12);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
      ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
       pMVar4 != (MVLocalPlayer *)0x0 &&
       (pBVar5 = (pMVar4->fields).boostController, pBVar5 != (BoostController *)0x0)))))) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)(pBVar5->fields).activeBoosts;
    if (((pDVar13 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) &&
        (pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                             (pDVar13,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                             ),
        pDVar14 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) &&
       (pDVar13 = (pDVar14->fields)._dictionary,
       pDVar13 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      value = (pDVar13->fields)._count - (pDVar13->fields)._freeCount;
      pTVar15 = (this->fields).boostsActive;
      if (pTVar15 != (Text *)0x0) {
        pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar15,(MethodInfo *)0x0);
        if (value < 1) {
          if (pGVar16 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar16,0,(MethodInfo *)0x0);
            pIVar17 = (this->fields).backgroundColor;
            if ((pIVar17 != (Image *)0x0) &&
               (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pIVar17,(MethodInfo *)0x0),
               pGVar16 != (GameObject *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,0,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar16 == (GameObject *)0x0) {
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pvVar18 = (pGVar16->fields)._.m_CachedPtr;
              if (pvVar18 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar16,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar18,0);
              return;
            }
          }
        }
        else if (pGVar16 != (GameObject *)0x0) {
          bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                             (pGVar16,(MethodInfo *)0x0);
          if (bVar20 == 0) {
            pTVar15 = (this->fields).boostsActive;
            if ((pTVar15 == (Text *)0x0) ||
               (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pTVar15,(MethodInfo *)0x0),
               pGVar16 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar16,1,(MethodInfo *)0x0);
          }
          pIVar17 = (this->fields).backgroundColor;
          if ((pIVar17 != (Image *)0x0) &&
             (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pIVar17,(MethodInfo *)0x0),
             pGVar16 != (GameObject *)0x0)) {
            bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                               (pGVar16,(MethodInfo *)0x0);
            if (bVar20 == 0) {
              pIVar17 = (this->fields).backgroundColor;
              if ((pIVar17 == (Image *)0x0) ||
                 (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pIVar17,(MethodInfo *)0x0),
                 pGVar16 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar16,1,(MethodInfo *)0x0);
            }
            pTVar15 = (this->fields).boostsActive;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                 field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            aRStack_21[0]._pointer._value = (void *)0x0;
            aRStack_21[0]._length = 0;
            aRStack_21[0]._12_4_ = 0;
            pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                                (value,aRStack_21,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            if (pTVar15 != (Text *)0x0) {
              (*(pTVar15->klass->vtable).set_text.methodPtr)
                        (pTVar15,pSVar22,(pTVar15->klass->vtable).set_text.method);
              pIVar17 = (this->fields).backgroundColor;
              if (pIVar17 != (Image *)0x0) {
                aRStack_21[0]._pointer._value = *(void **)&(this->fields).boostActiveColor;
                aRStack_21[0]._length = (int32_t)(this->fields).boostActiveColor.b;
                aRStack_21[0]._12_4_ = (this->fields).boostActiveColor.a;
                (*(pIVar17->klass->vtable).set_color.methodPtr)
                          (pIVar17,aRStack_21,(pIVar17->klass->vtable).set_color.method);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

