
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
    this_00 = (this->fields).onAdClick;
  }
  else {
    if ((this->fields).isClickReady != 0) {
      pSVar1 = (this->fields).subCooldowns;
      if (pSVar1 != (SubscriberCooldownsManager *)0x0) {
        uVar2 = (this->fields).cooldownType;
        pSVar3 = (pSVar1->fields).cooldowns;
        if (pSVar3 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          if (uVar2 < pSVar3->max_length) {
            pSVar3->vector[uVar2].LastUseTime = fVar4;
            this_00 = (this->fields).onSubscriberReadyClick;
            unaff_EBP = unaff_retaddr;
            goto joined_?;
          }
          func_?();
        }
      }
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (this->fields).onSubscriberInCooldownClick;
  }
joined_?:
  if (this_00 == (UnityEvent *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Events__InvokableCall,unaff_EBP);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::
            UnityEventBase_PrepareInvoke((UnityEventBase *)this_00,(MethodInfo *)0x0);
  index = 0;
  if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  do {
    while( true ) {
      if ((this_01->fields)._size <= index) {
        return;
      }
      RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_01,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                        );
      if ((((RVar6 == (RegexCharClass_SingleRange)0x0) ||
           (*(byte *)(*(int *)RVar6 + 0xb4) <
            (TypeInfo__UnityEngine__Events__InvokableCall->_1).typeHierarchyDepth)) ||
          (*(InvokableCall__Class **)
            (*(int *)(*(int *)RVar6 + 100) + -4 +
            (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).typeHierarchyDepth * 4) !=
           TypeInfo__UnityEngine__Events__InvokableCall)) ||
         (RVar6 == (RegexCharClass_SingleRange)0x0)) break;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                ((InvokableCall *)RVar6,(MethodInfo *)0x0);
      index = index + 1;
    }
    RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_01,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                      );
    RVar6 = (RegexCharClass_SingleRange)func_?(RVar6);
    if (RVar6 != (RegexCharClass_SingleRange)0x0) goto code_?;
    RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_01,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                      );
    if ((this_00->fields).m_InvokeArray == (Object__Array *)0x0) {
      pOVar7 = (Object__Array *)func_?(TypeInfo__System__Object,0);
      (this_00->fields).m_InvokeArray = pOVar7;
      func_?(&(this_00->fields).m_InvokeArray,pOVar7);
    }
    if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
    func_?(4,RVar6,(this_00->fields).m_InvokeArray);
    index = index + 1;
  } while( true );
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
                            (*(pTVar9->klass->vtable).set_text.methodPtr)();
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

