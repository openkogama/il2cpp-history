
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_Initialize
               (RequirementNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ForEach_System__Action<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RequirementNotification____c___Initialize_b__13_0_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RequirementNotification____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Missing_requirements_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_starAmount);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameCoinAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_levelAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequiredRank);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
            (this->fields).PanelsToDestroy;
  (this->fields)._.timeSinceStart = 0.0;
  if (*(int *)&(TypeInfo__RequirementNotification____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_02 = TypeInfo__RequirementNotification____c->static_fields->__9__13_0;
  if (this_02 == (Action_1_UnityEngine_GameObject_ *)0x0) {
    if (*(int *)&(TypeInfo__RequirementNotification____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__RequirementNotification____c->static_fields->__9;
    this_02 = (Action_1_UnityEngine_GameObject_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::GameObject>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              ((UnityAction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__RequirementNotification____c___Initialize_b__13_0_UnityEngine__GameObject_
               ,(MethodInfo *)0x0);
    TypeInfo__RequirementNotification____c->static_fields->__9__13_0 = this_02;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__RequirementNotification____c->static_fields->__9__13_0
                     >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (this_00 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
    EntryPreProcessor+AllocSize]::
    List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__ForEach
              (this_00,(Action_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)this_02,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ForEach_System__Action<UnityEngine::GameObject>_
              );
    pLVar6 = (this->fields).PanelsToDestroy;
    if (pLVar6 != (List_1_UnityEngine_GameObject_ *)0x0) {
      iVar7 = (pLVar6->fields)._size;
      piVar8 = &(pLVar6->fields)._version;
      *piVar8 = *piVar8 + 1;
      (pLVar6->fields)._size = 0;
      if (0 < iVar7) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar6->fields)._items,0,iVar7,(MethodInfo *)0x0);
      }
      auStackX_8[0] = 10;
      pOVar9 = (Object *)FUN_?(uRam_?,auStackX_8);
      if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (data,pOVar9,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar9 != (Object *)0x0)) {
        if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar9,lRam_?);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar7 = *(int32_t *)&pOVar9[1].klass;
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_03 != (MVWorldObjectClientManager *)0x0) {
          pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (this_03,iVar7,(MethodInfo *)0x0);
          iVar7 = 0;
          if ((pMVar11 != (MVWorldObjectClient *)0x0) &&
             (pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)(pMVar11->fields)._.data,
             pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)0x0)) {
            iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (pDVar12,(Object *)StringLiteral_levelAmount,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            if (-1 < iVar13) {
              pDVar14 = (pMVar11->fields)._.data;
              iVar7 = 1;
              if ((pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
                 (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__get_Item
                                      (pDVar14,(Object *)StringLiteral_levelAmount,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      ), pOVar9 == (Object *)0x0)) goto code_?;
              if ((pOVar9->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar9,lRam_?);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              RequirementNotification_ShowLevelRequirement
                        (this,*(int32_t *)&pOVar9[1].klass,(MethodInfo *)0x0);
            }
            pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)(pMVar11->fields)._.data;
            if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                           *)0x0) {
              iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                (pDVar12,(Object *)StringLiteral_gameCoinAmount,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 ->klass->rgctx_data[0x21].method);
              if (-1 < iVar13) {
                pDVar14 = (pMVar11->fields)._.data;
                iVar7 = iVar7 + 1;
                if ((pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
                   (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        (pDVar14,(Object *)StringLiteral_gameCoinAmount,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        ), pOVar9 == (Object *)0x0)) goto code_?;
                if ((pOVar9->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar9,lRam_?);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                RequirementNotification_ShowGameCoinRequirement
                          (this,*(int32_t *)&pOVar9[1].klass,(MethodInfo *)0x0);
              }
              pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)(pMVar11->fields)._.data;
              if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                  (pDVar12,(Object *)StringLiteral_starAmount,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                   ->klass->rgctx_data[0x21].method);
                if (-1 < iVar13) {
                  pDVar14 = (pMVar11->fields)._.data;
                  iVar7 = iVar7 + 1;
                  if ((pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
                     (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__get_Item
                                          (pDVar14,(Object *)StringLiteral_starAmount,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                          ), pOVar9 == (Object *)0x0)) goto code_?;
                  if ((pOVar9->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar9,lRam_?);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  RequirementNotification_ShowStarRequirement
                            (this,*(int32_t *)&pOVar9[1].klass,(MethodInfo *)0x0);
                }
                pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)(pMVar11->fields)._.data;
                if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                               *)0x0) {
                  iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                    (pDVar12,(Object *)StringLiteral_team,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                     ->klass->rgctx_data[0x21].method);
                  if (-1 < iVar13) {
                    pDVar14 = (pMVar11->fields)._.data;
                    iVar7 = iVar7 + 1;
                    if ((pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
                       (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__get_Item
                                            (pDVar14,(Object *)StringLiteral_team,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                            ), pOVar9 == (Object *)0x0)) goto code_?;
                    if ((pOVar9->klass->_0).element_class !=
                        (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
                      FUN_?(pOVar9,TypeInfo__MV__WorldObject__MVTeam);
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    RequirementNotification_ShowTeamRequirement
                              (this,*(MVTeam__Enum *)&pOVar9[1].klass,(MethodInfo *)0x0);
                  }
                  pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)(pMVar11->fields)._.data;
                  if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                 *)0x0) {
                    iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                      (pDVar12,(Object *)StringLiteral_RequiredRank,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                       ->klass->rgctx_data[0x21].method);
                    if (-1 < iVar13) {
                      pDVar14 = (pMVar11->fields)._.data;
                      iVar7 = iVar7 + 1;
                      if ((pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
                         (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,System::Object]::
                                    Dictionary_2_System_Object_System_Object__get_Item
                                              (pDVar14,(Object *)StringLiteral_RequiredRank,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                              ), pOVar9 == (Object *)0x0))
                      goto code_?;
                      if ((pOVar9->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar9,lRam_?);
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      RequirementNotification_ShowGameTierRequirement
                                (this,(uint)*(byte *)&pOVar9[1].klass,(MethodInfo *)0x0);
                    }
                    pTVar15 = (this->fields).Label;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__System__Number);
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                         klass->field_0x135 & 1) == 0) {
                      FUN_?();
                    }
                    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    aRStack_16[0]._pointer._value = (void *)0x0;
                    aRStack_16[0]._length = 0;
                    aRStack_16[0]._12_4_ = 0;
                    pSVar17 = mscorlib.dll::System::Number::Number_FormatInt32
                                        (iVar7,aRStack_16,(IFormatProvider *)0x0,(MethodInfo *)0x0)
                    ;
                    pSVar17 = mscorlib.dll::System::String::String_Concat_5
                                        (StringLiteral_Missing_requirements_,pSVar17,
                                         ::StringLiteral___,(MethodInfo *)0x0);
                    if (pTVar15 != (Text *)0x0) {
                      (*(pTVar15->klass->vtable).set_text.methodPtr)
                                (pTVar15,pSVar17,(pTVar15->klass->vtable).set_text.method);
                      this_01 = (this->fields).tertiaryNotificationUI;
                      l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                                    (this,(this->klass->vtable).get_Lifetime.method);
                      if (this_01 != (TertiaryNotificationUI *)0x0) {
                        TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                                  (this_01,(Notification *)this,l,0,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* GameObject InstantiatePanel(NotificationRequirementPanel) */

GameObject *
Assembly-CSharp.dll::RequirementNotification::RequirementNotification_InstantiatePanel
          (RequirementNotification *this,NotificationRequirementPanel *panel,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (panel != (NotificationRequirementPanel *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)panel,(MethodInfo *)0x0);
    pRVar2 = (this->fields).Layout;
    if (pRVar2 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pRVar2,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar1 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pGVar1,parent,0,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                         );
      if (pGVar1 != (GameObject *)0x0) {
        pRVar2 = (RectTransform *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar1,
                            UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                           );
        if (*(int *)&(TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
        LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar2,(MethodInfo *)0x0);
        pLVar3 = (this->fields).PanelsToDestroy;
        if (pLVar3 != (List_1_UnityEngine_GameObject_ *)0x0) {
          FUN_?(pLVar3,pGVar1);
          return pGVar1;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar4)();
  return pGVar1;
}


/* Void ShowGameCoinRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowGameCoinRequirement
               (RequirementNotification *this,int32_t gameCoins,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RequirementNotification____c__DisplayClass14_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RequirementNotification____c__DisplayClass14_0);
  if (object != (Object *)0x0) {
    *(int32_t *)&object[1].klass = gameCoins;
    this_01 = RequirementNotification_InstantiatePanel
                        (this,(this->fields).GamecoinPanel,(MethodInfo *)0x0);
    iVar1 = *(int *)&object[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar3->fields)._GameCoinManager_k__BackingField,
       this_00 != (MVGameCoinManager *)0x0)) {
      iVar4 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_00,(MethodInfo *)0x0);
      *(bool *)&object[2].klass = iVar1 <= iVar4;
      lVar5 = 0x30;
      if (iVar4 < iVar1) {
        lVar5 = 0x38;
      }
      bVar6 = iRam_? != 0;
      object[1].monitor = *(MonitorData **)((longlong)&this->klass + lVar5);
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&object[1].monitor >> 0xc);
        lVar5 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar9 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar6 = uVar8 == *puVar9;
          if (bVar6) {
            *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      if (((this_01 != (GameObject *)0x0) &&
          (pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                               (this_01,
                                NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                               ), pOVar10 != (Object *)0x0)) &&
         ((Behaviour *)pOVar10[2].monitor != (Behaviour *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pOVar10[2].monitor,0,(MethodInfo *)0x0);
        bVar6 = iRam_? != 0;
        pOVar10[2].monitor = (MonitorData *)0x0;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&pOVar10[2].monitor >> 0xc);
          lVar5 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar9 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar6 = uVar8 == *puVar9;
            if (bVar6) {
              *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,object,
                   MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar11 = 
        bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
        ;
        if ((
            bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&
                        MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar11);
          }
        }
        if (*(int *)&(
                     TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                     ->_1).field_0x1c == 0) {
          FUN_?();
        }
        results = (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Pool::GenericPool`1[System::Object]::
                  GenericPool_1_System_Object__Get
                            (
                            MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                            );
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventList
                  (this_01,results,((pMVar11->field7_0x38).rgctx_data)->method);
        if (results == (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?(unaff_R12,unaff_RSI);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar1 = *(int *)&results[1].monitor;
        iVar13 = 0;
        do {
          if (iVar1 <= iVar13) {
            if (*(int *)&(
                         TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                         ->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Pool::CollectionPool`2[System::
            Object,UnityEngine::UIElements::VisualTreeAsset+UxmlObjectEntry]::
            CollectionPool_2_System_Object_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__Release
                      ((Object *)results,
                       MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                      );
            return;
          }
          unaff_R12 = FUN_?(results,iVar13);
          unaff_RSI = (pMVar11->field7_0x38).rgctx_data[1].rgctxDataDummy;
          if ((*(byte *)((longlong)unaff_RSI + 0x135) & 1) == 0) {
            unaff_RSI = (void *)FUN_?(unaff_RSI);
          }
          if (unaff_R12 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = FUN_?(unaff_R12,unaff_RSI);
            if (lVar5 == 0) goto code_?;
          }
          if (this_02 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
          goto code_?;
          (*(this_02->fields)._._.invoke_impl)
                    ((this_02->fields)._._.method_code,lVar5,0,(this_02->fields)._._.method);
          iVar13 = iVar13 + 1;
        } while( true );
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ShowGameTierRequirement(GamePassTier) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowGameTierRequirement
               (RequirementNotification *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RequirementNotification____c__DisplayClass18_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RequirementNotification____c__DisplayClass18_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RequirementNotification____c__DisplayClass18_0);
  if (object != (Object *)0x0) {
    *(char *)&object[1].klass = (char)tier;
    this_00 = RequirementNotification_InstantiatePanel
                        (this,(this->fields).GameTierPanel,(MethodInfo *)0x0);
    bVar1 = cRam_? == '\0';
    *(undefined1 *)&object[2].klass = 0;
    if (bVar1) {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
      bVar2 = *(byte *)&object[1].klass;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
      *(bool *)&object[2].klass = bVar2 <= (pPVar3->fields).gamePassTier;
    }
    lVar4 = 0x30;
    if (*(char *)&object[2].klass == '\0') {
      lVar4 = 0x38;
    }
    bVar1 = iRam_? != 0;
    object[1].monitor = *(MonitorData **)((longlong)&this->klass + lVar4);
    if (bVar1) {
      uVar5 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                (this_00,
                 NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                );
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__RequirementNotification____c__DisplayClass18_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar9 = 
      bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
      ;
      if ((
          bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&
                      MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar9);
        }
      }
      if (*(int *)&(
                   TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                   ->_1).field_0x1c == 0) {
        FUN_?();
      }
      results = (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                UnityEngine.CoreModule.dll::UnityEngine::Pool::GenericPool`1[System::Object]::
                GenericPool_1_System_Object__Get
                          (
                          MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                          );
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventList
                (this_00,results,((pMVar9->field7_0x38).rgctx_data)->method);
      if (results == (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?(unaff_R12,unaff_RSI);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar11 = *(int *)&results[1].monitor;
      iVar12 = 0;
      do {
        if (iVar11 <= iVar12) {
          if (*(int *)&(
                       TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                       ->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Pool::CollectionPool`2[System::Object,UnityEngine
          ::UIElements::VisualTreeAsset+UxmlObjectEntry]::
          CollectionPool_2_System_Object_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__Release
                    ((Object *)results,
                     MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                    );
          return;
        }
        unaff_R12 = FUN_?(results,iVar12);
        unaff_RSI = (pMVar9->field7_0x38).rgctx_data[1].rgctxDataDummy;
        if ((*(byte *)((longlong)unaff_RSI + 0x135) & 1) == 0) {
          unaff_RSI = (void *)FUN_?(unaff_RSI);
        }
        if (unaff_R12 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_?(unaff_R12,unaff_RSI);
          if (lVar4 == 0) goto code_?;
        }
        if (this_01 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
        goto code_?;
        (*(this_01->fields)._._.invoke_impl)
                  ((this_01->fields)._._.method_code,lVar4,0,(this_01->fields)._._.method);
        iVar12 = iVar12 + 1;
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ShowLevelRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowLevelRequirement
               (RequirementNotification *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RequirementNotification____c__DisplayClass17_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RequirementNotification____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RequirementNotification____c__DisplayClass17_0);
  if (object != (Object *)0x0) {
    *(int32_t *)&object[1].klass = level;
    go = RequirementNotification_InstantiatePanel(this,(this->fields).LevelPanel,(MethodInfo *)0x0);
    iVar1 = *(int *)&object[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
        (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
       (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar4 != (MVLocalPlayer *)0x0)) {
      iVar5 = (pMVar4->fields)._.level;
      *(bool *)&object[2].klass = iVar1 <= iVar5;
      lVar6 = 0x30;
      if (iVar5 < iVar1) {
        lVar6 = 0x38;
      }
      bVar7 = iRam_? != 0;
      object[1].monitor = *(MonitorData **)((longlong)&this->klass + lVar6);
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&object[1].monitor >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__RequirementNotification____c__DisplayClass17_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar12 = 
      bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
      ;
      if ((
          bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&
                      MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar12);
        }
      }
      if (*(int *)&(
                   TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                   ->_1).field_0x1c == 0) {
        FUN_?();
      }
      results = (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                UnityEngine.CoreModule.dll::UnityEngine::Pool::GenericPool`1[System::Object]::
                GenericPool_1_System_Object__Get
                          (
                          MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                          );
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventList
                (go,results,((pMVar12->field7_0x38).rgctx_data)->method);
      if (results == (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?(unaff_R12,unaff_RSI);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar1 = *(int *)&results[1].monitor;
      iVar5 = 0;
      do {
        if (iVar1 <= iVar5) {
          if (*(int *)&(
                       TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                       ->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Pool::CollectionPool`2[System::Object,UnityEngine
          ::UIElements::VisualTreeAsset+UxmlObjectEntry]::
          CollectionPool_2_System_Object_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__Release
                    ((Object *)results,
                     MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                    );
          return;
        }
        unaff_R12 = FUN_?(results,iVar5);
        unaff_RSI = (pMVar12->field7_0x38).rgctx_data[1].rgctxDataDummy;
        if ((*(byte *)((longlong)unaff_RSI + 0x135) & 1) == 0) {
          unaff_RSI = (void *)FUN_?(unaff_RSI);
        }
        if (unaff_R12 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_?(unaff_R12,unaff_RSI);
          if (lVar6 == 0) goto code_?;
        }
        if (this_01 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
        goto code_?;
        (*(this_01->fields)._._.invoke_impl)
                  ((this_01->fields)._._.method_code,lVar6,0,(this_01->fields)._._.method);
        iVar5 = iVar5 + 1;
      } while( true );
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ShowStarRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowStarRequirement
               (RequirementNotification *this,int32_t stars,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RequirementNotification____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RequirementNotification____c__DisplayClass15_0);
  if (object != (Object *)0x0) {
    *(int32_t *)&object[1].klass = stars;
    this_01 = RequirementNotification_InstantiatePanel
                        (this,(this->fields).StarPanel,(MethodInfo *)0x0);
    iVar1 = *(int *)&object[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      uVar4 = 0;
      this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        iVar5 = MVPlayer::MVPlayer_GetGameStat
                          ((MVPlayer *)this_02,
                           (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),3),
                           (MethodInfo *)0x0);
        *(bool *)&object[2].klass = iVar1 <= iVar5;
        lVar6 = 0x30;
        if (iVar5 < iVar1) {
          lVar6 = 0x38;
        }
        bVar7 = iRam_? != 0;
        object[1].monitor = *(MonitorData **)((longlong)&this->klass + lVar6);
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&object[1].monitor >> 0xc);
          lVar6 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar10 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar7 = uVar9 == *puVar10;
            if (bVar7) {
              *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        if (((this_01 != (GameObject *)0x0) &&
            (pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 (this_01,
                                  NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                                 ), pOVar11 != (Object *)0x0)) &&
           ((Behaviour *)pOVar11[2].monitor != (Behaviour *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pOVar11[2].monitor,0,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          pOVar11[2].monitor = (MonitorData *)0x0;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&pOVar11[2].monitor >> 0xc);
            lVar6 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar10 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar7 = uVar9 == *puVar10;
              if (bVar7) {
                *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_03,object,
                     MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar12 = 
          bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
          ;
          if ((
              bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&
                          MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Count__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar12);
            }
          }
          if (*(int *)&(
                       TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                       ->_1).field_0x1c == 0) {
            FUN_?();
          }
          results = (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                    UnityEngine.CoreModule.dll::UnityEngine::Pool::GenericPool`1[System::Object]::
                    GenericPool_1_System_Object__Get
                              (
                              MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                              );
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventList
                    (this_01,results,((pMVar12->field7_0x38).rgctx_data)->method);
          if (results == (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?(unaff_R12,unaff_RSI);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar1 = *(int *)&results[1].monitor;
          iVar14 = 0;
          do {
            if (iVar1 <= iVar14) {
              if (*(int *)&(
                           TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                           ->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Pool::CollectionPool`2[System::
              Object,UnityEngine::UIElements::VisualTreeAsset+UxmlObjectEntry]::
              CollectionPool_2_System_Object_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__Release
                        ((Object *)results,
                         MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                        );
              return;
            }
            unaff_R12 = FUN_?(results,iVar14);
            unaff_RSI = (pMVar12->field7_0x38).rgctx_data[1].rgctxDataDummy;
            if ((*(byte *)((longlong)unaff_RSI + 0x135) & 1) == 0) {
              unaff_RSI = (void *)FUN_?(unaff_RSI);
            }
            if (unaff_R12 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = FUN_?(unaff_R12,unaff_RSI);
              if (lVar6 == 0) goto code_?;
            }
            if (this_03 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
            goto code_?;
            (*(this_03->fields)._._.invoke_impl)
                      ((this_03->fields)._._.method_code,lVar6,0,(this_03->fields)._._.method);
            iVar14 = iVar14 + 1;
          } while( true );
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ShowTeamRequirement(MVTeam) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowTeamRequirement
               (RequirementNotification *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RequirementNotification____c__DisplayClass16_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RequirementNotification____c__DisplayClass16_0);
  if (object != (Object *)0x0) {
    *(MVTeam__Enum *)&object[1].klass = team;
    this_01 = RequirementNotification_InstantiatePanel
                        (this,(this->fields).TeamPanel,(MethodInfo *)0x0);
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
       (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0)) {
      if (*(int *)&object[1].klass == (pMVar3->fields)._._Team_k__BackingField) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 == (MVGameControllerBase *)0x0) ||
            (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
           (pMVar4 = (pMVar2->fields).teamManager, pMVar4 == (MVTeamManager *)0x0))
        goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar5 = (pMVar4->fields).teams;
        if (pDVar5 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
        goto code_?;
        bVar6 = (pDVar5->fields)._count - (pDVar5->fields)._freeCount != 1;
      }
      else {
        bVar6 = false;
      }
      *(bool *)&object[2].klass = bVar6;
      lVar7 = 0x30;
      if (bVar6 == false) {
        lVar7 = 0x38;
      }
      bVar6 = iRam_? != 0;
      object[1].monitor = *(MonitorData **)((longlong)&this->klass + lVar7);
      if (bVar6) {
        uVar8 = (uint)((ulonglong)&object[1].monitor >> 0xc);
        lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar10 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      if (((this_01 != (GameObject *)0x0) &&
          (pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                               (this_01,
                                NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                               ), pOVar11 != (Object *)0x0)) &&
         ((Behaviour *)pOVar11[2].monitor != (Behaviour *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pOVar11[2].monitor,0,(MethodInfo *)0x0);
        bVar6 = iRam_? != 0;
        pOVar11[2].monitor = (MonitorData *)0x0;
        if (bVar6) {
          uVar8 = (uint)((ulonglong)&pOVar11[2].monitor >> 0xc);
          lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar10 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,object,
                   MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar12 = 
        bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
        ;
        if ((
            bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&
                        MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar12);
          }
        }
        if (*(int *)&(
                     TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                     ->_1).field_0x1c == 0) {
          FUN_?();
        }
        results = (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Pool::GenericPool`1[System::Object]::
                  GenericPool_1_System_Object__Get
                            (
                            MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Get__
                            );
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventList
                  (this_01,results,((pMVar12->field7_0x38).rgctx_data)->method);
        if (results == (IList_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?(unaff_R12,unaff_RSI);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar14 = *(int *)&results[1].monitor;
        iVar15 = 0;
        do {
          if (iVar14 <= iVar15) {
            if (*(int *)&(
                         TypeInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>
                         ->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Pool::CollectionPool`2[System::
            Object,UnityEngine::UIElements::VisualTreeAsset+UxmlObjectEntry]::
            CollectionPool_2_System_Object_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__Release
                      ((Object *)results,
                       MethodInfo__UnityEngine__Pool__CollectionPool<System::Collections::Generic::List<UnityEngine::EventSystems::IEventSystemHandler>,_UnityEngine::EventSystems::IEventSystemHandler>__Release_System__Collections__Generic__List<UnityEngine::EventSystems::IEventSystemHandler>_
                      );
            return;
          }
          unaff_R12 = FUN_?(results,iVar15);
          unaff_RSI = (pMVar12->field7_0x38).rgctx_data[1].rgctxDataDummy;
          if ((*(byte *)((longlong)unaff_RSI + 0x135) & 1) == 0) {
            unaff_RSI = (void *)FUN_?(unaff_RSI);
          }
          if (unaff_R12 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = FUN_?(unaff_R12,unaff_RSI);
            if (lVar7 == 0) goto code_?;
          }
          if (this_02 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
          goto code_?;
          (*(this_02->fields)._._.invoke_impl)
                    ((this_02->fields)._._.method_code,lVar7,0,(this_02->fields)._._.method);
          iVar15 = iVar15 + 1;
        } while( true );
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* RequirementNotification() */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification__ctor
               (RequirementNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).PanelsToDestroy = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).PanelsToDestroy >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
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
  return;
}

