
/* Void Initialize(GamePassTier, Int32) */

void Assembly-CSharp.dll::TierTestDetailsPopup::TierTestDetailsPopup_Initialize
               (TierTestDetailsPopup *this,GamePassTier__Enum tierToPurchase,int32_t price,
               MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  pTVar2 = (this->fields).tierText;
  (this->fields).tierToPurchase = (uint8_t)tierToPurchase;
  aIStackX_18[0].m_value = price;
  if (bVar1) {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_3[0]._pointer._value = (void *)0x0;
  aRStack_3[0]._length = 0;
  aRStack_3[0]._12_4_ = 0;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (tierToPurchase & 0xff,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method);
    pTVar2 = (this->fields).priceText;
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar2->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::TierTestDetailsPopup::TierTestDetailsPopup_OnEnable
               (TierTestDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierTestDetailsPopup____c___OnEnable_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != 0) {
    if (*(longlong *)(extraout_RAX + 0x98) != 0) {
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
      if ((extraout_RAX_00 == 0) || (*(longlong *)(extraout_RAX_00 + 0x98) == 0))
      goto code_?;
      if ((this->fields).tierToPurchase <= *(byte *)(*(longlong *)(extraout_RAX_00 + 0x98) + 0x28))
      {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__TierTestDetailsPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierTestDetailsPopup____c);
        }
        this_00 = TypeInfo__TierTestDetailsPopup____c->static_fields->__9__7_0;
        if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__TierTestDetailsPopup____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__TierTestDetailsPopup____c);
          }
          object = TypeInfo__TierTestDetailsPopup____c->static_fields->__9;
          this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                     MethodInfo__TierTestDetailsPopup____c___OnEnable_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__TierTestDetailsPopup____c->static_fields->__9__7_0 = this_00;
          func_?(&TypeInfo__TierTestDetailsPopup____c->static_fields->__9__7_0);
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowTier() */

void Assembly-CSharp.dll::TierTestDetailsPopup::TierTestDetailsPopup_ShowTier
               (TierTestDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierTestDetailsPopup____c__DisplayClass5_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierTestDetailsPopup____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TierTestDetailsPopup____c__DisplayClass5_0);
  original = (this->fields).gamePassesShopPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__TierTestDetailsPopup____c__DisplayClass5_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = object[1].klass;
    if (pOVar1 != (Object__Class *)0x0) {
      bVar7 = (this->fields).tierToPurchase;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Game_Tier_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar2 = cRam_? == '\0';
      pIVar8 = (pOVar1->_0).byval_arg.data.array;
      *(undefined1 *)((longlong)&(pOVar1->vtable).Equals.method + 3) = 1;
      if (bVar2) {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
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
      aRStack_9[0]._pointer._value = (void *)0x0;
      aRStack_9[0]._length = 0;
      aRStack_9[0]._12_4_ = 0;
      pSVar10 = mscorlib.dll::System::Number::Number_FormatInt32
                         ((uint)bVar7,aRStack_9,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Game_Tier_,pSVar10,(MethodInfo *)0x0);
      if (pIVar8 == (Il2CppArrayType *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (**(code **)&pIVar8->etype[0x5e].attrs)(pIVar8,pSVar10,pIVar8->etype[0x5f].data.dummy);
      (pOVar1->_1).naturalAligment = bVar7;
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Test() */

void Assembly-CSharp.dll::TierTestDetailsPopup::TierTestDetailsPopup_Test
               (TierTestDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierTestDetailsPopup____c___Test_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierTestDetailsPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pPVar1->fields).gamePassTier != (this->fields).tierToPurchase) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
              (this_00,(uint)(this->fields).tierToPurchase,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierTestDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierTestDetailsPopup____c);
    }
    this_01 = TypeInfo__TierTestDetailsPopup____c->static_fields->__9__6_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__TierTestDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierTestDetailsPopup____c);
      }
      object = TypeInfo__TierTestDetailsPopup____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                 MethodInfo__TierTestDetailsPopup____c___Test_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierTestDetailsPopup____c->static_fields->__9__6_0 = this_01;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__TierTestDetailsPopup____c->static_fields->__9__6_0 >>
                      0xc);
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
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}

