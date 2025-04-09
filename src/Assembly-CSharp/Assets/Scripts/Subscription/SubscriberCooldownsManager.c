
/* Void Awake() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager_Awake(SubscriberCooldownsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  iVar2 = 0x10;
  while( true ) {
    if ((TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    }
    if (TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
        nrOfCooldownTypes <= (int)uVar1) {
      return;
    }
    pSVar3 = (this->fields).cooldowns;
    if (pSVar3 == (SubscriberCooldownsManager_Cooldown__Array *)0x0) goto code_?;
    if (pSVar3->max_length <= uVar1) break;
    uVar1 = uVar1 + 1;
    *(undefined4 *)
     ((int)&((SubscriberCooldownsManager_Cooldown__Array *)(pSVar3->vector + -4))->klass + iVar2) =
         0xc61c3c00;
    iVar2 = iVar2 + 4;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single CooldownFraction(CooldownType) */

float Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
      SubscriberCooldownsManager_CooldownFraction
                (SubscriberCooldownsManager *this,CooldownType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                   );
    func_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pSVar1 = (this->fields).cooldowns;
  if (pSVar1 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
    if (pSVar1->max_length <= type) goto code_?;
    fVar2 = pSVar1->vector[type].LastUseTime;
    if ((TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    }
    this_00 = TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
              cooldownTimes;
    if (this_00 != (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)0x0) {
      fVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,type,
                         MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                        );
      fVar3 = (unaff_ESI - fVar2) / fVar3;
      if (_UNK_? <= fVar3) {
        fVar3 = _UNK_?;
      }
      return fVar3;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single CooldownTimeLeft(CooldownType) */

float Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
      SubscriberCooldownsManager_CooldownTimeLeft
                (SubscriberCooldownsManager *this,CooldownType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                   );
    func_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pSVar1 = (this->fields).cooldowns;
  if (pSVar1 != (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
    if (pSVar1->max_length <= type) goto code_?;
    fVar2 = pSVar1->vector[type].LastUseTime;
    if ((TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    }
    this_00 = TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
              cooldownTimes;
    if (this_00 != (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)0x0) {
      fVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,type,
                         MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__get_Item_Assets__Scripts__Subscription__CooldownType_
                        );
      return fVar3 - (unaff_ESI - fVar2);
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Boolean IsInCooldown(CooldownType) */

bool Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager_IsInCooldown
               (SubscriberCooldownsManager *this,CooldownType__Enum type,MethodInfo *method)

{
  fVar1 = SubscriberCooldownsManager_CooldownTimeLeft(this,type,(MethodInfo *)0x0);
  return _UNK_? < fVar1;
}


/* Void Use(CooldownType) */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager_Use
               (SubscriberCooldownsManager *this,CooldownType__Enum type,MethodInfo *method)

{
  pSVar1 = (this->fields).cooldowns;
  if (pSVar1 == (SubscriberCooldownsManager_Cooldown__Array *)0x0) {
    func_?();
  }
  else {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (type < pSVar1->max_length) {
      pSVar1->vector[type].LastUseTime = fVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SubscriberCooldownsManager() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__Assets__Scripts__Subscription__CooldownType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__Assets__Scripts__Subscription__CooldownType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::Enum::Enum_GetNames(enumType,(MethodInfo *)0x0);
  if (pSVar1 != (String__Array *)0x0) {
    TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
    nrOfCooldownTypes = pSVar1->max_length;
    this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Dictionary__
              );
    if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__Add
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,0,15.0,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__Add
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,2,45.0,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__Add
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,1,150.0,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__Add
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,6,150.0,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__Add
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,3,0.0,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__Add
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,4,30.0,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__Add
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,5,150.0,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
      Dictionary_2_System_Int32Enum_System_Single__Add
                ((Dictionary_2_System_Int32Enum_System_Single_ *)this,7,180.0,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::Subscription::CooldownType,_float>__Add_Assets__Scripts__Subscription__CooldownType__float_
                );
      TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->static_fields->
      cooldownTimes = (Dictionary_2_Assets_Scripts_Subscription_CooldownType_System_Single_ *)this;
      func_?();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SubscriberCooldownsManager() */

void Assembly-CSharp.dll::Assets::Scripts::Subscription::SubscriberCooldownsManager::
     SubscriberCooldownsManager__ctor(SubscriberCooldownsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager__Cooldown);
    func_?(&TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager);
  }
  pSVar1 = (SubscriberCooldownsManager_Cooldown__Array *)
           func_?(TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager__Cooldown
                           ,TypeInfo__Assets__Scripts__Subscription__SubscriberCooldownsManager->
                            static_fields->nrOfCooldownTypes);
  (this->fields).cooldowns = pSVar1;
  func_?(&(this->fields).cooldowns,pSVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

