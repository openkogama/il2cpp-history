
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
  (this->fields).buttonBackgroundImage = pIVar1;
  func_?(&(this->fields).buttonBackgroundImage,pIVar1);
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SubscriberCooldownsManager
                     ((MethodInfo *)0x0);
  (this->fields).subCooldowns = pSVar2;
  func_?(&(this->fields).subCooldowns,pSVar2);
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::AdOrSubscriptionButton::
     AdOrSubscriptionButton_OnClick(AdOrSubscriptionButton *this,MethodInfo *method)

{
  if ((this->fields).isSubscriber == 0) {
    pUVar1 = (this->fields).onAdClick;
  }
  else if ((this->fields).isClickReady == 0) {
    pUVar1 = (this->fields).onSubscriberInCooldownClick;
  }
  else {
    pSVar2 = (this->fields).subCooldowns;
    if (pSVar2 == (SubscriberCooldownsManager *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar4 = (pSVar2->fields).cooldowns;
    uVar5 = (this->fields).cooldownType;
    if (pSVar4 == (SubscriberCooldownsManager_Cooldown__Array *)0x0) goto code_?;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pSVar4->max_length <= uVar5) {
      func_?();
      goto code_?;
    }
    pSVar4->vector[uVar5].LastUseTime = fVar6;
    pUVar1 = (this->fields).onSubscriberReadyClick;
    in_ECX = extraout_ECX;
  }
  if (pUVar1 == (UnityEvent *)0x0) {
    return;
  }
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Events__InvokableCall,in_ECX);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  if (cRam_? != '\0') {
    if (pPRam0000000c == (PersistentCallGroup *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
    PersistentCallGroup_Initialize
              (pPRam0000000c,pIRam00000008,(UnityEventBase *)0x0,(MethodInfo *)0x0);
    cRam_? = '\0';
  }
  pIVar7 = pIRam00000008;
  if (pIRam00000008 == (InvokableCallList *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Clear__
                   );
    cRam_? = '\x01';
  }
  if ((pIVar7->fields).m_NeedsUpdate != 0) {
    pLVar8 = (pIVar7->fields).m_ExecutingCalls;
    if (pLVar8 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) goto code_?;
    iVar9 = (pLVar8->fields)._size;
    piVar10 = &(pLVar8->fields)._version;
    *piVar10 = *piVar10 + 1;
    (pLVar8->fields)._size = 0;
    if (0 < iVar9) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar8->fields)._items,0,iVar9,(MethodInfo *)0x0);
    }
    pLVar11 = (List_1_System_Object_ *)(pIVar7->fields).m_ExecutingCalls;
    if (pLVar11 == (List_1_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddRange
              (pLVar11,(IEnumerable_1_System_Object_ *)(pIVar7->fields).m_PersistentCalls,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
              );
    pLVar11 = (List_1_System_Object_ *)(pIVar7->fields).m_ExecutingCalls;
    if (pLVar11 == (List_1_System_Object_ *)0x0) goto code_?;
    method = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddRange
              (pLVar11,(IEnumerable_1_System_Object_ *)(pIVar7->fields).m_RuntimeCalls,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
              );
    (pIVar7->fields).m_NeedsUpdate = 0;
  }
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (pIVar7->fields).m_ExecutingCalls;
  iVar9 = 0;
  pMVar12 = (MethodInfo *)0x0;
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while( true ) {
      while( true ) {
        while( true ) {
          pMVar13 = method;
          if ((this_01->fields)._size <= iVar9) {
            return;
          }
          RVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (this_01,iVar9,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                             );
          if (((RVar14 == (RegexCharClass_SingleRange)0x0) ||
              (*(byte *)(*(int *)RVar14 + 0xb8) <
               (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment)) ||
             (pMVar12 = method,
             *(InvokableCall__Class **)
              (*(int *)(*(int *)RVar14 + 100) + -4 +
              (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment * 4) !=
             TypeInfo__UnityEngine__Events__InvokableCall)) break;
          method = (MethodInfo *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                    ((InvokableCall *)RVar14,(MethodInfo *)0x0);
          iVar9 = iVar9 + 1;
          pMVar12 = pMVar13;
        }
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                  (this_01,iVar9,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                  );
        method = (MethodInfo *)TypeInfo__UnityEngine__Events__InvokableCall;
        this_00 = (InvokableCall *)func_?();
        if (this_00 == (InvokableCall *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  (this_00,(MethodInfo *)0x0);
        iVar9 = iVar9 + 1;
      }
      RVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_01,iVar9,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                         );
      if (pMVar12->return_type == (Il2CppType *)0x0) {
        pIVar15 = (Il2CppType *)func_?(TypeInfo__System__Object,0);
        pMVar12->return_type = pIVar15;
        func_?(&pMVar12->return_type,pIVar15);
      }
      if (RVar14 == (RegexCharClass_SingleRange)0x0) break;
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                pMVar12->return_type;
      func_?(4,RVar14);
      iVar9 = iVar9 + 1;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
                  puVar6 = (undefined *)
                           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                     ((MethodInfo *)0x0);
                  pSVar7 = (pSVar4->fields).cooldowns;
                  if (pSVar7 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
                    if (pSVar7->max_length <= key) goto code_?;
                    fVar5 = pSVar7->vector[key].LastUseTime;
                    if ((TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
                        cctor_finished_or_no_cctor == 0) {
                      puVar6 = &UNK_?;
                      func_?();
                    }
                    pIVar2 = (Image *)TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager
                                       ->static_fields->cooldownTimes;
                    if (pIVar2 != (Image *)0x0) {
                      fVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32Enum,System::Single]::
                               Dictionary_2_System_Int32Enum_System_Single__get_Item
                                         ((Dictionary_2_System_Int32Enum_System_Single_ *)pIVar2,
                                          key,
                                          MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                                         );
                      fVar8 = ((float)puVar6 - fVar5) / fVar8;
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
                            pTVar10 = pTVar9->klass;
                            pIStack11 =
                                 (pTVar10->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
                            (*(code *)(pTVar10->vtable).set_text.method)();
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

