
/* Void Awake() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::AdOrSubscriptionButton::
     AdOrSubscriptionButton_Awake(AdOrSubscriptionButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this,
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                              );
  ppIVar2 = &(this->fields).buttonBackgroundImage;
  *ppIVar2 = pIVar1;
  func_?(ppIVar2,&stack0xfffffffc,&UNK_?,ppIVar2,pIVar1);
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::AdOrSubscriptionButton::
     AdOrSubscriptionButton_OnClick(AdOrSubscriptionButton *this,MethodInfo *method)

{
  if ((this->fields).isSubscriber == 0) {
    unityEventBase = (InvokableCall__Class *)(this->fields).onAdClick;
  }
  else if ((this->fields).isClickReady == 0) {
    unityEventBase = (InvokableCall__Class *)(this->fields).onSubscriberInCooldownClick;
  }
  else {
    pSVar1 = (this->fields).subCooldowns;
    if (pSVar1 == (SubscriberCooldownsManager *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar3 = (this->fields).cooldownType;
    pSVar4 = (pSVar1->fields).cooldowns;
    if (pSVar4 == (SubscriberCooldownsManager_Cooldown__Array *)0x0) goto code_?;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pSVar4->max_length <= uVar3) {
      func_?();
      goto code_?;
    }
    pSVar4->vector[uVar3].LastUseTime = fVar5;
    unityEventBase = (InvokableCall__Class *)(this->fields).onSubscriberReadyClick;
    in_ECX = extraout_ECX;
    unaff_EBP = unaff_retaddr;
  }
  if (unityEventBase == (InvokableCall__Class *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Events__InvokableCall,in_ECX,unaff_EBP);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  if (*(bool *)&(unityEventBase->_0).byval_arg.data != 0) {
    this_00 = (PersistentCallGroup *)(unityEventBase->_0).namespaze;
    if (this_00 == (PersistentCallGroup *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
    PersistentCallGroup_Initialize
              (this_00,((UnityEventBase__Fields *)&(unityEventBase->_0).name)->m_Calls,
               (UnityEventBase *)unityEventBase,(MethodInfo *)0x0);
    *(bool *)&(unityEventBase->_0).byval_arg.data = 0;
  }
  pIVar6 = ((UnityEventBase__Fields *)&(unityEventBase->_0).name)->m_Calls;
  if (pIVar6 == (InvokableCallList *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Clear__
                   );
    cRam_? = '\x01';
  }
  this = (AdOrSubscriptionButton *)unityEventBase;
  if ((pIVar6->fields).m_NeedsUpdate != 0) {
    pLVar7 = (pIVar6->fields).m_ExecutingCalls;
    if (pLVar7 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) goto code_?;
    iVar8 = (pLVar7->fields)._size;
    piVar9 = &(pLVar7->fields)._version;
    *piVar9 = *piVar9 + 1;
    (pLVar7->fields)._size = 0;
    if (0 < iVar8) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar7->fields)._items,0,iVar8,(MethodInfo *)0x0);
    }
    pLVar10 = (List_1_System_Object_ *)(pIVar6->fields).m_ExecutingCalls;
    if (pLVar10 == (List_1_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddRange
              (pLVar10,(IEnumerable_1_System_Object_ *)(pIVar6->fields).m_PersistentCalls,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
              );
    pLVar10 = (List_1_System_Object_ *)(pIVar6->fields).m_ExecutingCalls;
    if (pLVar10 == (List_1_System_Object_ *)0x0) goto code_?;
    this = (AdOrSubscriptionButton *)
           MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddRange
              (pLVar10,(IEnumerable_1_System_Object_ *)(pIVar6->fields).m_RuntimeCalls,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
              );
    (pIVar6->fields).m_NeedsUpdate = 0;
  }
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (pIVar6->fields).m_ExecutingCalls;
  iVar8 = 0;
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    do {
      while( true ) {
        if ((this_01->fields)._size <= iVar8) {
          return;
        }
        RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (this_01,iVar8,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                           );
        if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
        bVar12 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
        unityEventBase = (InvokableCall__Class *)this;
        if (((*(byte *)(*(int *)RVar11 + 0xb8) < bVar12) ||
            (*(InvokableCall__Class **)(*(int *)(*(int *)RVar11 + 100) + -4 + (uint)bVar12 * 4) !=
             TypeInfo__UnityEngine__Events__InvokableCall)) ||
           (RVar11 == (RegexCharClass_SingleRange)0x0)) break;
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  ((InvokableCall *)RVar11,(MethodInfo *)0x0);
        iVar8 = iVar8 + 1;
        unityEventBase = (InvokableCall__Class *)this;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                (this_01,iVar8,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                );
      pIVar13 = TypeInfo__UnityEngine__Events__InvokableCall;
      this = (AdOrSubscriptionButton *)TypeInfo__UnityEngine__Events__InvokableCall;
      RVar11 = (RegexCharClass_SingleRange)func_?();
      if (RVar11 != (RegexCharClass_SingleRange)0x0) goto code_?;
      RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_01,iVar8,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                         );
      iVar14._0_2_ = (unityEventBase->_0).byval_arg.attrs;
      iVar14._2_1_ = (unityEventBase->_0).byval_arg.type;
      iVar14._3_1_ = (unityEventBase->_0).byval_arg.field_0x7;
      if (iVar14 == 0) {
        RVar11.First = 0;
        RVar11.Last = 0;
        uVar15 = func_?(TypeInfo__System__Object);
        (unityEventBase->_0).byval_arg.attrs = (short)uVar15;
        (unityEventBase->_0).byval_arg.type = (char)((uint)uVar15 >> 0x10);
        (unityEventBase->_0).byval_arg.field_0x7 = (char)((uint)uVar15 >> 0x18);
        func_?(&(unityEventBase->_0).byval_arg.attrs,uVar15);
      }
      if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
      uVar15._0_2_ = (unityEventBase->_0).byval_arg.attrs;
      uVar15._2_1_ = (unityEventBase->_0).byval_arg.type;
      uVar15._3_1_ = (unityEventBase->_0).byval_arg.field_0x7;
      func_?(4,RVar11,uVar15);
      iVar8 = iVar8 + 1;
      unityEventBase = pIVar13;
    } while( true );
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::AdOrSubscriptionButton::
     AdOrSubscriptionButton_Update(AdOrSubscriptionButton *this,MethodInfo *method)

{
  bVar1 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
  pIVar2 = (this->fields).iconImage;
  (this->fields).isSubscriber = bVar1;
  if (bVar1 == 0) {
    if (pIVar2 != (Image *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                (pIVar2,(this->fields).adSprite,(MethodInfo *)0x0);
      pGVar3 = (this->fields).countdownObject;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (pIVar2 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar2,(this->fields).subscriberSprite,(MethodInfo *)0x0);
    pSVar4 = (this->fields).subCooldowns;
    if (pSVar4 != (SubscriberCooldownsManager *)0x0) {
      fVar5 = SubscriberCooldownsManager::SubscriberCooldownsManager_CooldownTimeLeft
                        (pSVar4,(this->fields).cooldownType,(MethodInfo *)0x0);
      pGVar3 = (this->fields).countdownObject;
      if (_UNK_? < fVar5) {
        (this->fields).isClickReady = 0;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,1,(MethodInfo *)0x0);
          pIVar2 = (this->fields).iconImage;
          if (pIVar2 != (Image *)0x0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar2,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,0,(MethodInfo *)0x0);
              pIVar2 = (this->fields).buttonBackgroundImage;
              if (pIVar2 != (Image *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                          (pIVar2,(this->fields).buttonBackgroundInactiveSprite,(MethodInfo *)0x0);
                pSVar4 = (this->fields).subCooldowns;
                key = (this->fields).cooldownType;
                if (pSVar4 != (SubscriberCooldownsManager *)0x0) {
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    cRam_? = '\x01';
                  }
                  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                    ((MethodInfo *)0x0);
                  pSVar6 = (pSVar4->fields).cooldowns;
                  if (pSVar6 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
                    if (pSVar6->max_length <= key) goto code_?;
                    fVar7 = pSVar6->vector[key].LastUseTime;
                    if ((TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    this_00 = TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->
                              static_fields->cooldownTimes;
                    if (this_00 !=
                        (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)0x0)
                    {
                      pIVar2 = (Image *)
                                MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                      ;
                      fVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Single]::
                              Dictionary_2_System_Int32Enum_System_Single__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,key
                                         ,
                                         MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                                        );
                      fVar8 = (fVar5 - fVar7) / fVar8;
                      if (_UNK_? <= fVar8) {
                        fVar8 = _UNK_?;
                      }
                      if (pIVar2 != (Image *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                                  (pIVar2,fVar8,(MethodInfo *)0x0);
                        pSVar4 = (this->fields).subCooldowns;
                        pTVar9 = (this->fields).countdownText;
                        if (pSVar4 != (SubscriberCooldownsManager *)0x0) {
                          SubscriberCooldownsManager::SubscriberCooldownsManager_CooldownTimeLeft
                                    (pSVar4,(this->fields).cooldownType,(MethodInfo *)0x0);
                          mscorlib.dll::System::Int32::Int32_ToString
                                    ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
                          if (pTVar9 != (Text *)0x0) {
                            (*(code *)(pTVar9->klass->vtable).set_text.method)();
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
      else {
        (this->fields).isClickReady = 1;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pIVar2 = (this->fields).iconImage;
          if (pIVar2 != (Image *)0x0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar2,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,1,(MethodInfo *)0x0);
              pIVar2 = (this->fields).buttonBackgroundImage;
              if (pIVar2 != (Image *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                          (pIVar2,(this->fields).buttonBackgroundActiveSprite,(MethodInfo *)0x0);
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

