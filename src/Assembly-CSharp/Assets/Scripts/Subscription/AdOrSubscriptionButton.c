
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
  }
  if (pUVar1 == (UnityEvent *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Events__InvokableCall);
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
    func_?();
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
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddRange
              (pLVar11,(IEnumerable_1_System_Object_ *)(pIVar7->fields).m_RuntimeCalls,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
              );
    (pIVar7->fields).m_NeedsUpdate = 0;
  }
  RVar12 = (RegexCharClass_SingleRange)(pIVar7->fields).m_ExecutingCalls;
  iVar9 = 0;
  method = (MethodInfo *)RVar12;
  if (RVar12 != (RegexCharClass_SingleRange)0x0) {
code_?:
    do {
      while( true ) {
        if (*(int *)((int)RVar12 + 0xc) <= iVar9) {
          return;
        }
        RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            RVar12,iVar9,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                           );
        if (RVar13 == (RegexCharClass_SingleRange)0x0) break;
        if ((*(byte *)(*(int *)RVar13 + 0xb8) <
             (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment) ||
           (*(InvokableCall__Class **)
             (*(int *)(*(int *)RVar13 + 100) + -4 +
             (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment * 4) !=
            TypeInfo__UnityEngine__Events__InvokableCall)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        this_00.First = 0;
        this_00.Last = 0;
        if (bVar14) {
          this_00 = RVar13;
        }
        RVar12 = (RegexCharClass_SingleRange)method;
        if (this_00 == (RegexCharClass_SingleRange)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  ((InvokableCall *)this_00,(MethodInfo *)0x0);
        iVar9 = iVar9 + 1;
        RVar12 = this_00;
        method = (MethodInfo *)this_00;
      }
      method = (MethodInfo *)
               mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          RVar12,iVar9,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                         );
      this_01 = (InvokableCall *)func_?();
      if (this_01 == (InvokableCall *)0x0) {
        RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            RVar12,iVar9,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                           );
        if (iRam_? == 0) {
          iRam_? = func_?(TypeInfo__System__Object);
          func_?(0x14,iRam_?);
        }
        if (RVar12 == (RegexCharClass_SingleRange)0x0) break;
        func_?(4,RVar12);
        iVar9 = iVar9 + 1;
        RVar12 = (RegexCharClass_SingleRange)method;
        goto code_?;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                (this_01,(MethodInfo *)0x0);
      iVar9 = iVar9 + 1;
    } while( true );
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
  pAVar1 = this;
  bVar2 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
  pIVar3 = (this->fields).iconImage;
  (this->fields).isSubscriber = bVar2;
  if (bVar2 == 0) {
    if (pIVar3 != (Image *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                (pIVar3,(this->fields).adSprite,(MethodInfo *)0x0);
      return;
    }
  }
  else if (pIVar3 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar3,(this->fields).subscriberSprite,(MethodInfo *)0x0);
    pSVar4 = (this->fields).subCooldowns;
    if (pSVar4 != (SubscriberCooldownsManager *)0x0) {
      key = (this->fields).cooldownType;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                       );
        func_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
        cRam_? = '\x01';
      }
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pSVar6 = (pSVar4->fields).cooldowns;
      if (pSVar6 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
        if (pSVar6->max_length <= key) goto code_?;
        this = (AdOrSubscriptionButton *)(fVar5 - pSVar6->vector[key].LastUseTime);
        if ((TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          this = (AdOrSubscriptionButton *)
                 TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager;
          func_?();
        }
        this_00 = TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields
                  ->cooldownTimes;
        if (this_00 != (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)0x0)
        {
          fVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,key,
                             MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                            );
          pIVar3 = (pAVar1->fields).iconImage;
          if (_UNK_? < fVar5 - (float)this) {
            (pAVar1->fields).isClickReady = 0;
            if (pIVar3 != (Image *)0x0) {
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pIVar3,(MethodInfo *)0x0);
              if (pGVar7 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,0,(MethodInfo *)0x0);
                pIVar3 = (pAVar1->fields).buttonBackgroundImage;
                if (pIVar3 != (Image *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                            (pIVar3,(pAVar1->fields).buttonBackgroundInactiveSprite,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            (pAVar1->fields).isClickReady = 1;
            if (pIVar3 != (Image *)0x0) {
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pIVar3,(MethodInfo *)0x0);
              if (pGVar7 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,1,(MethodInfo *)0x0);
                pIVar3 = (pAVar1->fields).buttonBackgroundImage;
                if (pIVar3 != (Image *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                            (pIVar3,(pAVar1->fields).buttonBackgroundActiveSprite,(MethodInfo *)0x0)
                  ;
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
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

