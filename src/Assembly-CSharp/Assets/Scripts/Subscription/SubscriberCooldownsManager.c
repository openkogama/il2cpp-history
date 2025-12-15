
/* Void Awake() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager_Awake(SubscriberCooldownsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = 0;
  lVar3 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    }
    if (TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
        nrOfCooldownTypes <= (int)uVar2) {
      return;
    }
    pSVar4 = (this->fields).cooldowns;
    if (pSVar4 == (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((uint)pSVar4->max_length <= uVar2) break;
    uVar2 = uVar2 + 1;
    *(undefined4 *)
     ((longlong)&((SubscriberCooldownsManager_Cooldown__Array *)(pSVar4->vector + -8))->klass +
     lVar3) = uVar1;
    lVar3 = lVar3 + 4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single CooldownFraction(CooldownType) */

float Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
      SubscriberCooldownsManager_CooldownFraction
                (SubscriberCooldownsManager *this,CooldownType__Enum type,MethodInfo *method)

{
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
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  pSVar4 = (this->fields).cooldowns;
  if (pSVar4 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
    if ((CooldownType__Enum)pSVar4->max_length <= type) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
    fVar5 = pSVar4->vector[(int)type].LastUseTime;
    if (*(int *)&(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    }
    this_00 = TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
              cooldownTimes;
    if (this_00 != (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)0x0) {
      fVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,type,
                         MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                        );
      fVar6 = (fVar3 - fVar5) / fVar6;
      if (_UNK_? <= fVar6) {
        fVar6 = _UNK_?;
      }
      return fVar6;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  fVar3 = (float)(*pcVar1)();
  return fVar3;
}


/* Single CooldownTimeLeft(CooldownType) */

float Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
      SubscriberCooldownsManager_CooldownTimeLeft
                (SubscriberCooldownsManager *this,CooldownType__Enum type,MethodInfo *method)

{
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
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  pSVar4 = (this->fields).cooldowns;
  if (pSVar4 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
    if ((CooldownType__Enum)pSVar4->max_length <= type) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
    fVar5 = pSVar4->vector[(int)type].LastUseTime;
    if (*(int *)&(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    }
    this_00 = TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
              cooldownTimes;
    if (this_00 != (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)0x0) {
      fVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,type,
                         MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                        );
      return fVar6 - (fVar3 - fVar5);
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  fVar3 = (float)(*pcVar1)();
  return fVar3;
}


/* Boolean IsInCooldown(CooldownType) */

bool Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager_IsInCooldown
               (SubscriberCooldownsManager *this,CooldownType__Enum type,MethodInfo *method)

{
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
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  pSVar5 = (this->fields).cooldowns;
  if (pSVar5 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
    if ((CooldownType__Enum)pSVar5->max_length <= type) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar3 = (*pcVar1)();
      return bVar3;
    }
    fVar6 = pSVar5->vector[(int)type].LastUseTime;
    if (*(int *)&(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    }
    this_00 = TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
              cooldownTimes;
    if (this_00 != (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)0x0) {
      fVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,type,
                         MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                        );
      return 0.0 < fVar7 - (fVar4 - fVar6);
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar3 = (*pcVar1)();
  return bVar3;
}


/* Void Use(CooldownType) */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager_Use
               (SubscriberCooldownsManager *this,CooldownType__Enum type,MethodInfo *method)

{
  pSVar1 = (this->fields).cooldowns;
  if (pSVar1 == (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if ((CooldownType__Enum)pSVar1->max_length <= type) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar1->vector[(int)type].LastUseTime = fVar4;
  return;
}


/* SubscriberCooldownsManager() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__Assets__Scripts__Subscription__CooldownType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__Assets__Scripts__Subscription__CooldownType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar2 = (longlong *)0x0;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar1,1);
    plVar2 = (longlong *)FUN_?(lVar3 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar4);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Enum__GetNames_System__Type_);
    FUN_?(this_00,uVar4);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
  if (lVar3 != 0) {
    TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
    nrOfCooldownTypes = *(int32_t *)(lVar3 + 0x18);
    this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Dictionary__
              );
    if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,0,_UNK_?,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                 ->klass->rgctx_data[0x22].method);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,2,_UNK_?,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                 ->klass->rgctx_data[0x22].method);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,1,_UNK_?,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                 ->klass->rgctx_data[0x22].method);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,6,_UNK_?,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                 ->klass->rgctx_data[0x22].method);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,3,0.0,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                 ->klass->rgctx_data[0x22].method);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,4,_UNK_?,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                 ->klass->rgctx_data[0x22].method);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,5,_UNK_?,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                 ->klass->rgctx_data[0x22].method);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,7,_UNK_?,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                 ->klass->rgctx_data[0x22].method);
      TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
      cooldownTimes = (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)this;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)
                       &TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->
                        static_fields->cooldownTimes >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SubscriberCooldownsManager() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager__ctor(SubscriberCooldownsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager__Cooldown);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
  }
  pSVar1 = (SubscriberCooldownsManager_Cooldown__Array *)
            FUN_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager__Cooldown
                          ,TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->
                           static_fields->nrOfCooldownTypes);
  bVar2 = iRam_? != 0;
  (this->fields).cooldowns = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).cooldowns >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar7 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar8 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar9 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar10 = ppMVar8;
  if (lVar9 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar9 = lRam_?;
  }
  else {
    do {
      uVar3 = (uint)ppMVar10;
      LOCK();
      bVar2 = uVar3 != uRam_?;
      uVar11 = uVar3;
      uVar12 = uVar3 + 1;
      if (bVar2) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar2) && (ppMVar10 = (MethodInfo **)(ulonglong)uVar11, uVar3 = uVar11, uVar11 != 2)
            );
    while (uVar3 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar3 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar9;
  puVar13 = &(pOVar7->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar13 == 1;
  if (bVar2) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar3 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar7->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar14 == 1;
  if (bVar2) {
    *puVar14 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar3 = GetCurrentThreadId();
    psVar15 = &(pOVar7->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar3 == *psVar15;
    if (bVar2) {
      *psVar15 = (ulonglong)uVar3;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar7->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar13 == 1;
      if (bVar2) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar9._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
      lVar9._4_4_ = (pOVar7->_1).cctor_started;
      if (lVar9 == 0) {
        (pOVar7->_1).initializationExceptionGCHandle = 0;
        (pOVar7->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar9 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar7->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar3 = GetCurrentThreadId();
    LOCK();
    (pOVar7->_1).cctor_thread = (ulonglong)uVar3;
    UNLOCK();
    LOCK();
    (pOVar7->_1).cctor_finished_or_no_cctor = 1;
    uVar3 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar7->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar7);
      ppMVar10 = ppMVar8;
      pIVar17 = (Il2CppClass *)pOVar7;
code_?:
      do {
        if (ppMVar10 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar10 = pIVar17->methods;
            pMVar18 = *ppMVar10;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar8;
                while (ppMVar20 = ppMVar19 + 0x3052a1b1,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar10 = ppMVar10 + 1;
          if (ppMVar10 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar10;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar10 = ppMVar8;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar7->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar7->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar7->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_24 < 0x10) {
code_?:
      lVar9 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar6;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar9 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar9;
        if (iRam_? != 0) {
          uVar3 = (uint)(lVar16 + 0x28U >> 0xc);
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
      FUN_?(pOVar7,lVar16);
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17))))
        goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      uVar21 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar7->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

